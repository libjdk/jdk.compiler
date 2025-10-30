#include <com/sun/tools/javac/comp/Infer.h>

#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/code/Source$Feature.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeVariableSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$IntersectionClassType.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type$JCVoidType.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type$StructuralTypeMapping.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$TypeMapping.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Attr$CheckMode.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/DeferredAttr$AttrMode.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrNode.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredStuckPolicy.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredTypeMap.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Infer$1.h>
#include <com/sun/tools/javac/comp/Infer$2.h>
#include <com/sun/tools/javac/comp/Infer$3.h>
#include <com/sun/tools/javac/comp/Infer$4.h>
#include <com/sun/tools/javac/comp/Infer$AbstractIncorporationEngine.h>
#include <com/sun/tools/javac/comp/Infer$ImplicitArgType.h>
#include <com/sun/tools/javac/comp/Infer$IncorporationAction.h>
#include <com/sun/tools/javac/comp/Infer$IncorporationBinaryOp.h>
#include <com/sun/tools/javac/comp/Infer$IncorporationBinaryOpKind.h>
#include <com/sun/tools/javac/comp/Infer$InferenceException.h>
#include <com/sun/tools/javac/comp/Infer$LegacyInferenceSteps.h>
#include <com/sun/tools/javac/comp/Infer$PartiallyInferredMethodType.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/comp/Resolve$MethodCheck.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionContext.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/comp/Resolve$VerboseResolutionMode.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Notes.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpressionStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeCast.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Note.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name$Table.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Options.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <java/io/BufferedWriter.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/io/Writer.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayDeque.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/EnumSet.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef ARRAY
#undef CHECK
#undef DEFERRED_INST
#undef EQ
#undef EQ_LOWER
#undef EQ_UPPER
#undef GRAPH_INFERENCE
#undef LOWER
#undef MAX_INCORPORATION_STEPS
#undef NONE
#undef SYNTHETIC
#undef THROWS
#undef TYPEVAR
#undef UNCHECKED
#undef UNDETVAR
#undef UPPER
#undef VOID

using $Type$UndetVar$InferenceBoundArray = $Array<::com::sun::tools::javac::code::Type$UndetVar$InferenceBound>;
using $TypeArray = $Array<::com::sun::tools::javac::code::Type>;
using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $Source = ::com::sun::tools::javac::code::Source;
using $Source$Feature = ::com::sun::tools::javac::code::Source$Feature;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$TypeVariableSymbol = ::com::sun::tools::javac::code::Symbol$TypeVariableSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$DelegatedType = ::com::sun::tools::javac::code::Type$DelegatedType;
using $Type$IntersectionClassType = ::com::sun::tools::javac::code::Type$IntersectionClassType;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $Type$JCVoidType = ::com::sun::tools::javac::code::Type$JCVoidType;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Type$StructuralTypeMapping = ::com::sun::tools::javac::code::Type$StructuralTypeMapping;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$UndetVar$InferenceBound = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$TypeMapping = ::com::sun::tools::javac::code::Types$TypeMapping;
using $Attr$CheckMode = ::com::sun::tools::javac::comp::Attr$CheckMode;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $Check = ::com::sun::tools::javac::comp::Check;
using $Check$CheckContext = ::com::sun::tools::javac::comp::Check$CheckContext;
using $DeferredAttr$AttrMode = ::com::sun::tools::javac::comp::DeferredAttr$AttrMode;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $DeferredAttr$DeferredAttrNode = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrNode;
using $DeferredAttr$DeferredStuckPolicy = ::com::sun::tools::javac::comp::DeferredAttr$DeferredStuckPolicy;
using $DeferredAttr$DeferredTypeMap = ::com::sun::tools::javac::comp::DeferredAttr$DeferredTypeMap;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Infer$1 = ::com::sun::tools::javac::comp::Infer$1;
using $Infer$2 = ::com::sun::tools::javac::comp::Infer$2;
using $Infer$3 = ::com::sun::tools::javac::comp::Infer$3;
using $Infer$4 = ::com::sun::tools::javac::comp::Infer$4;
using $Infer$AbstractIncorporationEngine = ::com::sun::tools::javac::comp::Infer$AbstractIncorporationEngine;
using $Infer$ImplicitArgType = ::com::sun::tools::javac::comp::Infer$ImplicitArgType;
using $Infer$IncorporationAction = ::com::sun::tools::javac::comp::Infer$IncorporationAction;
using $Infer$IncorporationBinaryOp = ::com::sun::tools::javac::comp::Infer$IncorporationBinaryOp;
using $Infer$IncorporationBinaryOpKind = ::com::sun::tools::javac::comp::Infer$IncorporationBinaryOpKind;
using $Infer$InferenceException = ::com::sun::tools::javac::comp::Infer$InferenceException;
using $Infer$LegacyInferenceSteps = ::com::sun::tools::javac::comp::Infer$LegacyInferenceSteps;
using $Infer$PartiallyInferredMethodType = ::com::sun::tools::javac::comp::Infer$PartiallyInferredMethodType;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$MethodCheck = ::com::sun::tools::javac::comp::Resolve$MethodCheck;
using $Resolve$MethodResolutionContext = ::com::sun::tools::javac::comp::Resolve$MethodResolutionContext;
using $Resolve$MethodResolutionPhase = ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase;
using $Resolve$VerboseResolutionMode = ::com::sun::tools::javac::comp::Resolve$VerboseResolutionMode;
using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
using $CompilerProperties$Notes = ::com::sun::tools::javac::resources::CompilerProperties$Notes;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCExpressionStatement = ::com::sun::tools::javac::tree::JCTree$JCExpressionStatement;
using $JCTree$JCTypeCast = ::com::sun::tools::javac::tree::JCTree$JCTypeCast;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $JCDiagnostic$Fragment = ::com::sun::tools::javac::util::JCDiagnostic$Fragment;
using $JCDiagnostic$Note = ::com::sun::tools::javac::util::JCDiagnostic$Note;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $Name$Table = ::com::sun::tools::javac::util::Name$Table;
using $Names = ::com::sun::tools::javac::util::Names;
using $Options = ::com::sun::tools::javac::util::Options;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $BufferedWriter = ::java::io::BufferedWriter;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $Writer = ::java::io::Writer;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Files = ::java::nio::file::Files;
using $OpenOption = ::java::nio::file::OpenOption;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayDeque = ::java::util::ArrayDeque;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $EnumSet = ::java::util::EnumSet;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $1List = ::java::util::List;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Collector = ::java::util::stream::Collector;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Infer$$Lambda$lambda$roots$0 : public $Predicate {
	$class(Infer$$Lambda$lambda$roots$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* tv) override {
		 return Infer::lambda$roots$0($cast($Type, tv));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Infer$$Lambda$lambda$roots$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Infer$$Lambda$lambda$roots$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Infer$$Lambda$lambda$roots$0::*)()>(&Infer$$Lambda$lambda$roots$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Infer$$Lambda$lambda$roots$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Infer$$Lambda$lambda$roots$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Infer$$Lambda$lambda$roots$0::load$($String* name, bool initialize) {
	$loadClass(Infer$$Lambda$lambda$roots$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Infer$$Lambda$lambda$roots$0::class$ = nullptr;

class Infer$$Lambda$lambda$instantiateFunctionalInterface$1$1 : public $Predicate {
	$class(Infer$$Lambda$lambda$instantiateFunctionalInterface$1$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Type* formalInterface) {
		$set(this, formalInterface, formalInterface);
	}
	virtual bool test(Object$* b) override {
		 return Infer::lambda$instantiateFunctionalInterface$1(formalInterface, $cast($Type, b));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Infer$$Lambda$lambda$instantiateFunctionalInterface$1$1>());
	}
	$Type* formalInterface = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Infer$$Lambda$lambda$instantiateFunctionalInterface$1$1::fieldInfos[2] = {
	{"formalInterface", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Infer$$Lambda$lambda$instantiateFunctionalInterface$1$1, formalInterface)},
	{}
};
$MethodInfo Infer$$Lambda$lambda$instantiateFunctionalInterface$1$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(static_cast<void(Infer$$Lambda$lambda$instantiateFunctionalInterface$1$1::*)($Type*)>(&Infer$$Lambda$lambda$instantiateFunctionalInterface$1$1::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Infer$$Lambda$lambda$instantiateFunctionalInterface$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Infer$$Lambda$lambda$instantiateFunctionalInterface$1$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Infer$$Lambda$lambda$instantiateFunctionalInterface$1$1::load$($String* name, bool initialize) {
	$loadClass(Infer$$Lambda$lambda$instantiateFunctionalInterface$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Infer$$Lambda$lambda$instantiateFunctionalInterface$1$1::class$ = nullptr;

$FieldInfo _Infer_FieldInfo_[] = {
	{"inferKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/comp/Infer;>;", $PROTECTED | $STATIC | $FINAL, $staticField(Infer, inferKey)},
	{"rs", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, 0, $field(Infer, rs)},
	{"chk", "Lcom/sun/tools/javac/comp/Check;", nullptr, 0, $field(Infer, chk)},
	{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, 0, $field(Infer, syms)},
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, 0, $field(Infer, types)},
	{"diags", "Lcom/sun/tools/javac/util/JCDiagnostic$Factory;", nullptr, 0, $field(Infer, diags)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, 0, $field(Infer, log)},
	{"allowGraphInference", "Z", nullptr, 0, $field(Infer, allowGraphInference)},
	{"dependenciesFolder", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Infer, dependenciesFolder)},
	{"pendingGraphs", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Ljava/lang/String;>;", $PRIVATE, $field(Infer, pendingGraphs)},
	{"anyPoly", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Infer, anyPoly)},
	{"fromTypeVarFun", "Lcom/sun/tools/javac/code/Types$TypeMapping;", "Lcom/sun/tools/javac/code/Types$TypeMapping<Ljava/lang/Void;>;", 0, $field(Infer, fromTypeVarFun)},
	{"legacyEngine", "Lcom/sun/tools/javac/comp/Infer$AbstractIncorporationEngine;", nullptr, 0, $field(Infer, legacyEngine)},
	{"graphEngine", "Lcom/sun/tools/javac/comp/Infer$AbstractIncorporationEngine;", nullptr, 0, $field(Infer, graphEngine)},
	{"MAX_INCORPORATION_STEPS", "I", nullptr, $STATIC | $FINAL, $constField(Infer, MAX_INCORPORATION_STEPS)},
	{"incorporationCache", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/comp/Infer$IncorporationBinaryOp;Ljava/lang/Boolean;>;", 0, $field(Infer, incorporationCache)},
	{"emptyContext", "Lcom/sun/tools/javac/comp/InferenceContext;", nullptr, $FINAL, $field(Infer, emptyContext)},
	{}
};

$MethodInfo _Infer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(Infer::*)($Context*)>(&Infer::init$))},
	{"asSuper", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $method(static_cast<$Type*(Infer::*)($Type*,$Type*)>(&Infer::asSuper))},
	{"commonSuperWithDiffParameterization", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Infer::*)($Type*,$Type*)>(&Infer::commonSuperWithDiffParameterization))},
	{"doIncorporation", "(Lcom/sun/tools/javac/comp/InferenceContext;Lcom/sun/tools/javac/util/Warner;)V", nullptr, 0, nullptr, "com.sun.tools.javac.comp.Infer$InferenceException"},
	{"doIncorporationOp", "(Lcom/sun/tools/javac/comp/Infer$IncorporationBinaryOpKind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Warner;)Z", nullptr, 0},
	{"dumpGraphsIfNeeded", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;)V", nullptr, $PRIVATE, $method(static_cast<void(Infer::*)($JCDiagnostic$DiagnosticPosition*,$Symbol*,$Resolve$MethodResolutionContext*)>(&Infer::dumpGraphsIfNeeded))},
	{"error", "(Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/comp/Infer$InferenceException;", nullptr, 0},
	{"generateReferenceToTargetConstraint", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/comp/InferenceContext;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $method(static_cast<$Type*(Infer::*)($JCTree*,$Type$UndetVar*,$Type*,$Attr$ResultInfo*,$InferenceContext*)>(&Infer::generateReferenceToTargetConstraint))},
	{"generateReturnConstraints", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/code/Type$MethodType;Lcom/sun/tools/javac/comp/InferenceContext;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"getBoundFragment", "(Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", 0},
	{"getParameterizedSupers", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;>;>;", $PRIVATE, $method(static_cast<$List*(Infer::*)($Type*,$Type*)>(&Infer::getParameterizedSupers))},
	{"incorporationEngine", "()Lcom/sun/tools/javac/comp/Infer$AbstractIncorporationEngine;", nullptr, 0},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/comp/Infer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Infer*(*)($Context*)>(&Infer::instance))},
	{"instantiateAsUninferredVars", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/InferenceContext;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/comp/InferenceContext;)V", 0},
	{"instantiateFunctionalInterface", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/Check$CheckContext;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/comp/Check$CheckContext;)Lcom/sun/tools/javac/code/Type;", $PUBLIC},
	{"instantiateMethod", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Type$MethodType;Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/util/List;ZZLcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;Lcom/sun/tools/javac/util/Warner;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Type$MethodType;Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;ZZLcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;Lcom/sun/tools/javac/util/Warner;)Lcom/sun/tools/javac/code/Type;", 0, nullptr, "com.sun.tools.javac.comp.Infer$InferenceException"},
	{"instantiatePolymorphicSignatureInstance", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Type;", 0},
	{"lambda$instantiateFunctionalInterface$1", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Type*,$Type*)>(&Infer::lambda$instantiateFunctionalInterface$1))},
	{"lambda$roots$0", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Type*)>(&Infer::lambda$roots$0))},
	{"needsEagerInstantiation", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/InferenceContext;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Infer::*)($Type$UndetVar*,$Type*,$InferenceContext*)>(&Infer::needsEagerInstantiation))},
	{"reportBoundError", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;)V", nullptr, 0},
	{"reportBoundError", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;)V", nullptr, 0},
	{"reportInstError", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;)V", nullptr, 0},
	{"roots", "(Lcom/sun/tools/javac/code/Type$MethodType;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Type$MethodType;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PRIVATE, $method(static_cast<$List*(Infer::*)($Type$MethodType*,$DeferredAttr$DeferredAttrContext*)>(&Infer::roots))},
	{"shouldPropagate", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/comp/InferenceContext;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Infer::*)($Type*,$Attr$ResultInfo*,$InferenceContext*)>(&Infer::shouldPropagate))},
	{}
};

$InnerClassInfo _Infer_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Infer$4", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.comp.Infer$FreeTypeListener", "com.sun.tools.javac.comp.Infer", "FreeTypeListener", $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.comp.Infer$GraphSolver", "com.sun.tools.javac.comp.Infer", "GraphSolver", 0},
	{"com.sun.tools.javac.comp.Infer$DependencyKind", "com.sun.tools.javac.comp.Infer", "DependencyKind", $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.comp.Infer$GraphInferenceSteps", "com.sun.tools.javac.comp.Infer", "GraphInferenceSteps", $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.comp.Infer$LegacyInferenceSteps", "com.sun.tools.javac.comp.Infer", "LegacyInferenceSteps", $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.comp.Infer$InferenceStep", "com.sun.tools.javac.comp.Infer", "InferenceStep", $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.tools.javac.comp.Infer$BestLeafSolver", "com.sun.tools.javac.comp.Infer", "BestLeafSolver", $ABSTRACT},
	{"com.sun.tools.javac.comp.Infer$LeafSolver", "com.sun.tools.javac.comp.Infer", "LeafSolver", $ABSTRACT},
	{"com.sun.tools.javac.comp.Infer$GraphStrategy", "com.sun.tools.javac.comp.Infer", "GraphStrategy", $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.comp.Infer$BoundFilter", "com.sun.tools.javac.comp.Infer", "BoundFilter", $PROTECTED | $STATIC},
	{"com.sun.tools.javac.comp.Infer$IncorporationBinaryOp", "com.sun.tools.javac.comp.Infer", "IncorporationBinaryOp", 0},
	{"com.sun.tools.javac.comp.Infer$IncorporationBinaryOpKind", "com.sun.tools.javac.comp.Infer", "IncorporationBinaryOpKind", $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.tools.javac.comp.Infer$AbstractIncorporationEngine", "com.sun.tools.javac.comp.Infer", "AbstractIncorporationEngine", $ABSTRACT},
	{"com.sun.tools.javac.comp.Infer$PropagateBounds", "com.sun.tools.javac.comp.Infer", "PropagateBounds", 0},
	{"com.sun.tools.javac.comp.Infer$CheckUpperBounds", "com.sun.tools.javac.comp.Infer", "CheckUpperBounds", 0},
	{"com.sun.tools.javac.comp.Infer$SubstBounds", "com.sun.tools.javac.comp.Infer", "SubstBounds", 0},
	{"com.sun.tools.javac.comp.Infer$CheckInst", "com.sun.tools.javac.comp.Infer", "CheckInst", 0},
	{"com.sun.tools.javac.comp.Infer$EqCheckLegacy", "com.sun.tools.javac.comp.Infer", "EqCheckLegacy", 0},
	{"com.sun.tools.javac.comp.Infer$CheckBounds", "com.sun.tools.javac.comp.Infer", "CheckBounds", 0},
	{"com.sun.tools.javac.comp.Infer$IncorporationAction", "com.sun.tools.javac.comp.Infer", "IncorporationAction", $PUBLIC | $ABSTRACT},
	{"com.sun.tools.javac.comp.Infer$ImplicitArgType", "com.sun.tools.javac.comp.Infer", "ImplicitArgType", 0},
	{"com.sun.tools.javac.comp.Infer$PartiallyInferredMethodType", "com.sun.tools.javac.comp.Infer", "PartiallyInferredMethodType", $PUBLIC},
	{"com.sun.tools.javac.comp.Infer$InferenceException", "com.sun.tools.javac.comp.Infer", "InferenceException", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.comp.Infer$3", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Infer$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Infer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Infer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.Infer",
	"java.lang.Object",
	nullptr,
	_Infer_FieldInfo_,
	_Infer_MethodInfo_,
	nullptr,
	nullptr,
	_Infer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Infer$4,com.sun.tools.javac.comp.Infer$FreeTypeListener,com.sun.tools.javac.comp.Infer$GraphSolver,com.sun.tools.javac.comp.Infer$GraphSolver$InferenceGraph,com.sun.tools.javac.comp.Infer$GraphSolver$InferenceGraph$Node,com.sun.tools.javac.comp.Infer$DependencyKind,com.sun.tools.javac.comp.Infer$GraphInferenceSteps,com.sun.tools.javac.comp.Infer$LegacyInferenceSteps,com.sun.tools.javac.comp.Infer$InferenceStep,com.sun.tools.javac.comp.Infer$InferenceStep$6,com.sun.tools.javac.comp.Infer$InferenceStep$5,com.sun.tools.javac.comp.Infer$InferenceStep$4,com.sun.tools.javac.comp.Infer$InferenceStep$3,com.sun.tools.javac.comp.Infer$InferenceStep$2,com.sun.tools.javac.comp.Infer$InferenceStep$1,com.sun.tools.javac.comp.Infer$BestLeafSolver,com.sun.tools.javac.comp.Infer$LeafSolver,com.sun.tools.javac.comp.Infer$GraphStrategy,com.sun.tools.javac.comp.Infer$GraphStrategy$NodeNotFoundException,com.sun.tools.javac.comp.Infer$BoundFilter,com.sun.tools.javac.comp.Infer$IncorporationBinaryOp,com.sun.tools.javac.comp.Infer$IncorporationBinaryOpKind,com.sun.tools.javac.comp.Infer$IncorporationBinaryOpKind$2,com.sun.tools.javac.comp.Infer$IncorporationBinaryOpKind$1,com.sun.tools.javac.comp.Infer$AbstractIncorporationEngine,com.sun.tools.javac.comp.Infer$PropagateBounds,com.sun.tools.javac.comp.Infer$CheckUpperBounds,com.sun.tools.javac.comp.Infer$SubstBounds,com.sun.tools.javac.comp.Infer$CheckInst,com.sun.tools.javac.comp.Infer$EqCheckLegacy,com.sun.tools.javac.comp.Infer$CheckBounds,com.sun.tools.javac.comp.Infer$IncorporationAction,com.sun.tools.javac.comp.Infer$ImplicitArgType,com.sun.tools.javac.comp.Infer$PartiallyInferredMethodType,com.sun.tools.javac.comp.Infer$InferenceException,com.sun.tools.javac.comp.Infer$3,com.sun.tools.javac.comp.Infer$2,com.sun.tools.javac.comp.Infer$1"
};

$Object* allocate$Infer($Class* clazz) {
	return $of($alloc(Infer));
}

$Context$Key* Infer::inferKey = nullptr;
$Type* Infer::anyPoly = nullptr;

Infer* Infer::instance($Context* context) {
	$init(Infer);
	$var(Infer, instance, $cast(Infer, $nc(context)->get(Infer::inferKey)));
	if (instance == nullptr) {
		$assign(instance, $new(Infer, context));
	}
	return instance;
}

void Infer::init$($Context* context) {
	$useLocalCurrentObjectStackCache();
	$set(this, fromTypeVarFun, $new($Infer$1, this));
	$set(this, legacyEngine, $new($Infer$2, this));
	$set(this, graphEngine, $new($Infer$3, this));
	$set(this, incorporationCache, $new($HashMap));
	$nc(context)->put(Infer::inferKey, $of(this));
	$set(this, rs, $Resolve::instance(context));
	$set(this, chk, $Check::instance(context));
	$set(this, syms, $Symtab::instance(context));
	$set(this, types, $Types::instance(context));
	$set(this, diags, $JCDiagnostic$Factory::instance(context));
	$set(this, log, $Log::instance(context));
	$var($Options, options, $Options::instance(context));
	$Source* source = $Source::instance(context);
	$init($Source$Feature);
	bool var$0 = $Source$Feature::GRAPH_INFERENCE->allowedInSource(source);
	this->allowGraphInference = var$0 && $nc(options)->isUnset("useLegacyInference"_s);
	$set(this, dependenciesFolder, options->get("debug.dumpInferenceGraphsTo"_s));
	$set(this, pendingGraphs, $List::nil());
	$set(this, emptyContext, $new($InferenceContext, this, $($List::nil())));
}

$Infer$InferenceException* Infer::error($JCDiagnostic* diag) {
	$var($Infer$InferenceException, result, $new($Infer$InferenceException));
	if (diag != nullptr) {
		$set(result, messages, $nc(result->messages)->append(diag));
	}
	return result;
}

$Type* Infer::instantiateMethod($Env* env, $List* tvars, $Type$MethodType* mt$renamed, $Attr$ResultInfo* resultInfo, $Symbol$MethodSymbol* msym, $List* argtypes, bool allowBoxing, bool useVarargs, $Resolve$MethodResolutionContext* resolveContext, $Warner* warn) {
	$useLocalCurrentObjectStackCache();
	$var($Type$MethodType, mt, mt$renamed);
	$var($InferenceContext, inferenceContext, $new($InferenceContext, this, tvars));
	{
		$var($Throwable, var$0, nullptr);
		$var($Type, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($DeferredAttr$DeferredAttrContext, deferredAttrContext, $nc(resolveContext)->deferredAttrContext(msym, inferenceContext, resultInfo, warn));
			$nc(resolveContext->methodCheck)->argumentsAcceptable(env, deferredAttrContext, argtypes, $($nc(mt)->getParameterTypes()), warn);
			if (this->allowGraphInference && resultInfo != nullptr && resultInfo->pt == Infer::anyPoly) {
				doIncorporation(inferenceContext, warn);
				$assign(var$2, $new($Infer$PartiallyInferredMethodType, this, mt, inferenceContext, env, warn));
				return$1 = true;
				goto $finally;
			} else if (this->allowGraphInference && resultInfo != nullptr) {
				doIncorporation(inferenceContext, warn);
				$init($Lint$LintCategory);
				if (!$nc(warn)->hasNonSilentLint($Lint$LintCategory::UNCHECKED)) {
					bool shouldPropagate = this->shouldPropagate($($nc(mt)->getReturnType()), resultInfo, inferenceContext);
					$var($InferenceContext, minContext, shouldPropagate ? inferenceContext->min($(roots(mt, deferredAttrContext)), true, warn) : inferenceContext);
					$var($Type, newRestype, generateReturnConstraints($nc(env)->tree, resultInfo, mt, minContext));
					$assign(mt, $cast($Type$MethodType, $nc(this->types)->createMethodTypeWithReturn(mt, newRestype)));
					if (shouldPropagate) {
						$nc(minContext)->dupTo($($nc(resultInfo->checkContext)->inferenceContext()));
						$nc(deferredAttrContext)->complete();
						$assign(var$2, mt);
						return$1 = true;
						goto $finally;
					}
				}
			}
			$nc(deferredAttrContext)->complete();
			if (this->allowGraphInference) {
				inferenceContext->solve(warn);
			} else {
				$init($Infer$LegacyInferenceSteps);
				inferenceContext->solveLegacy(true, warn, $Infer$LegacyInferenceSteps::EQ_LOWER->steps);
			}
			$assign(mt, $cast($Type$MethodType, inferenceContext->asInstType(mt)));
			bool var$3 = !this->allowGraphInference && $nc($(inferenceContext->restvars()))->nonEmpty() && resultInfo != nullptr;
			$init($Lint$LintCategory);
			if (var$3 && !$nc(warn)->hasNonSilentLint($Lint$LintCategory::UNCHECKED)) {
				generateReturnConstraints($nc(env)->tree, resultInfo, mt, inferenceContext);
				$init($Infer$LegacyInferenceSteps);
				inferenceContext->solveLegacy(false, warn, $Infer$LegacyInferenceSteps::EQ_UPPER->steps);
				$assign(mt, $cast($Type$MethodType, inferenceContext->asInstType(mt)));
			}
			$init($Resolve$VerboseResolutionMode);
			if (resultInfo != nullptr && $nc($nc(this->rs)->verboseResolutionMode)->contains($Resolve$VerboseResolutionMode::DEFERRED_INST)) {
				$nc(this->log)->note($nc($nc(env)->tree)->pos$, $($CompilerProperties$Notes::DeferredMethodInst(msym, mt, resultInfo->pt)));
			}
			$assign(var$2, mt);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} $finally: {
			if (resultInfo != nullptr || !this->allowGraphInference) {
				inferenceContext->notifyChange();
			} else {
				inferenceContext->notifyChange($(inferenceContext->boundedVars()));
			}
			if (resultInfo == nullptr) {
				$nc(inferenceContext->captureTypeCache)->clear();
			}
			dumpGraphsIfNeeded($nc(env)->tree, msym, resolveContext);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool Infer::shouldPropagate($Type* restype, $Attr$ResultInfo* target, $InferenceContext* inferenceContext) {
	bool var$1 = $nc($nc(target)->checkContext)->inferenceContext() != this->emptyContext;
	bool var$0 = var$1 && $nc(inferenceContext)->free(restype);
	if (var$0) {
		bool var$2 = !$nc(inferenceContext->inferencevars)->contains(restype);
		var$0 = (var$2 || !needsEagerInstantiation($cast($Type$UndetVar, $(inferenceContext->asUndetVar(restype))), target->pt, inferenceContext));
	}
	return var$0;
}

$List* Infer::roots($Type$MethodType* mt, $DeferredAttr$DeferredAttrContext* deferredAttrContext) {
	$useLocalCurrentObjectStackCache();
	$init($DeferredAttr$AttrMode);
	if (deferredAttrContext != nullptr && deferredAttrContext->mode == $DeferredAttr$AttrMode::CHECK) {
		$var($ListBuffer, roots, $new($ListBuffer));
		roots->add($($nc(mt)->getReturnType()));
		{
			$var($Iterator, i$, $nc(deferredAttrContext->deferredAttrNodes)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($DeferredAttr$DeferredAttrNode, n, $cast($DeferredAttr$DeferredAttrNode, i$->next()));
				{
					roots->addAll($($nc($nc(n)->deferredStuckPolicy)->stuckVars()));
					roots->addAll($($nc($nc(n)->deferredStuckPolicy)->depVars()));
				}
			}
		}
		$var($List, thrownVars, $cast($List, $nc($($nc($($nc($nc(deferredAttrContext->inferenceContext)->inferencevars)->stream()))->filter(static_cast<$Predicate*>($$new(Infer$$Lambda$lambda$roots$0)))))->collect($($List::collector()))));
		$var($List, result, roots->toList());
		$assign(result, $nc(result)->appendList($($nc(thrownVars)->diff(result))));
		return result;
	} else {
		return $List::of($($nc(mt)->getReturnType()));
	}
}

void Infer::dumpGraphsIfNeeded($JCDiagnostic$DiagnosticPosition* pos, $Symbol* msym, $Resolve$MethodResolutionContext* rsContext) {
	$useLocalCurrentObjectStackCache();
	int32_t round = 0;
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				{
					$var($Iterator, i$, $nc($($nc(this->pendingGraphs)->reverse()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($String, graph, $cast($String, i$->next()));
						{
							$Assert::checkNonNull(this->dependenciesFolder);
							$var($Name, name, $nc(msym)->name == $nc($nc($nc(msym->name)->table)->names)->init ? $nc($nc(msym)->owner)->name : msym->name);
							$var($String, filename, $String::format("%s@%s[mode=%s,step=%s]_%d.dot"_s, $$new($ObjectArray, {
								$of(name),
								$($of($Integer::valueOf($nc(pos)->getStartPosition()))),
								$($of($nc(rsContext)->attrMode())),
								$of(rsContext->step),
								$($of($Integer::valueOf(round)))
							})));
							$var($Path, dotFile, $Paths::get(this->dependenciesFolder, $$new($StringArray, {filename})));
							{
								$var($Writer, w, $Files::newBufferedWriter(dotFile, $$new($OpenOptionArray, 0)));
								{
									$var($Throwable, var$1, nullptr);
									try {
										try {
											$nc(w)->append(static_cast<$CharSequence*>(graph));
										} catch ($Throwable& t$) {
											if (w != nullptr) {
												try {
													w->close();
												} catch ($Throwable& x2) {
													t$->addSuppressed(x2);
												}
											}
											$throw(t$);
										}
									} catch ($Throwable& var$2) {
										$assign(var$1, var$2);
									} /*finally*/ {
										if (w != nullptr) {
											w->close();
										}
									}
									if (var$1 != nullptr) {
										$throw(var$1);
									}
								}
							}
							++round;
						}
					}
				}
			} catch ($IOException& ex) {
				$Assert::error($$str({"Error occurred when dumping inference graph: "_s, $(ex->getMessage())}));
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			$set(this, pendingGraphs, $List::nil());
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$Type* Infer::generateReturnConstraints($JCTree* tree, $Attr$ResultInfo* resultInfo, $Type$MethodType* mt, $InferenceContext* inferenceContext) {
	$useLocalCurrentObjectStackCache();
	$var($InferenceContext, rsInfoInfContext, $nc($nc(resultInfo)->checkContext)->inferenceContext());
	$var($Type, from, $nc(mt)->getReturnType());
	if ($nc($(mt->getReturnType()))->containsAny($nc(inferenceContext)->inferencevars) && rsInfoInfContext != this->emptyContext) {
		$assign(from, $nc(this->types)->capture(from));
		{
			$var($Iterator, i$, $nc($($nc(from)->getTypeArguments()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, t, $cast($Type, i$->next()));
				{
					$init($TypeTag);
					bool var$0 = $nc(t)->hasTag($TypeTag::TYPEVAR);
					if (var$0 && $nc(($cast($Type$TypeVar, t)))->isCaptured()) {
						$nc(inferenceContext)->addVar($cast($Type$TypeVar, t));
					}
				}
			}
		}
	}
	$var($Type, qtype, $nc(inferenceContext)->asUndetVar(from));
	$var($Type, to, resultInfo->pt);
	$init($TypeTag);
	if ($nc(qtype)->hasTag($TypeTag::VOID)) {
		$assign(to, $nc(this->syms)->voidType);
	} else {
		if ($nc(to)->hasTag($TypeTag::NONE)) {
			$assign(to, $nc(from)->isPrimitive() ? from : $nc(this->syms)->objectType);
		} else {
			if (qtype->hasTag($TypeTag::UNDETVAR)) {
				bool var$1 = needsEagerInstantiation($cast($Type$UndetVar, qtype), to, inferenceContext);
				if (var$1 && (this->allowGraphInference || !to->isPrimitive())) {
					$assign(to, generateReferenceToTargetConstraint(tree, $cast($Type$UndetVar, qtype), to, resultInfo, inferenceContext));
				}
			} else if ($nc(rsInfoInfContext)->free(resultInfo->pt)) {
				$assign(qtype, inferenceContext->asUndetVar($(rsInfoInfContext->cachedCapture(tree, from, !resultInfo->checkMode->updateTreeType()))));
			}
		}
	}
	$Assert::check(this->allowGraphInference || !$nc(rsInfoInfContext)->free(to), "legacy inference engine cannot handle constraints on both sides of a subtyping assertion"_s);
	$var($Warner, retWarn, $new($Warner));
	bool var$2 = !$nc(resultInfo->checkContext)->compatible(qtype, $($nc(rsInfoInfContext)->asUndetVar(to)), retWarn);
	$init($Lint$LintCategory);
	if (var$2 || (!this->allowGraphInference && retWarn->hasLint($Lint$LintCategory::UNCHECKED))) {
		$var($1List, var$3, static_cast<$1List*>(inferenceContext->restvars()));
		$throw($(error($($nc(this->diags)->fragment($($CompilerProperties$Fragments::InferNoConformingInstanceExists(var$3, $(mt->getReturnType()), to)))))));
	}
	return from;
}

bool Infer::needsEagerInstantiation($Type$UndetVar* from, $Type* to, $InferenceContext* inferenceContext) {
	$useLocalCurrentObjectStackCache();
	if ($nc(to)->isPrimitive()) {
		{
			$var($Iterator, i$, $nc($($nc(from)->getBounds($($Type$UndetVar$InferenceBound::values()))))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, t, $cast($Type, i$->next()));
				{
					$var($Type, boundAsPrimitive, $nc(this->types)->unboxedType(t));
					$init($TypeTag);
					if (boundAsPrimitive == nullptr || $nc(boundAsPrimitive)->hasTag($TypeTag::NONE)) {
						continue;
					}
					return true;
				}
			}
		}
		return false;
	}
	$var($Type, captureOfTo, $nc(this->types)->capture(to));
	if (captureOfTo == to) {
		{
			$init($Type$UndetVar$InferenceBound);
			$var($Iterator, i$, $nc($($nc(from)->getBounds($$new($Type$UndetVar$InferenceBoundArray, {
				$Type$UndetVar$InferenceBound::EQ,
				$Type$UndetVar$InferenceBound::LOWER
			}))))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, t, $cast($Type, i$->next()));
				{
					$var($Type, captureOfBound, $nc(this->types)->capture(t));
					if (captureOfBound != t) {
						return true;
					}
				}
			}
		}
		{
			$init($Type$UndetVar$InferenceBound);
			$var($Iterator, i$, $nc($(from->getBounds($$new($Type$UndetVar$InferenceBoundArray, {$Type$UndetVar$InferenceBound::LOWER}))))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, aLowerBound, $cast($Type, i$->next()));
				{
					{
						$var($Iterator, i$, $nc($(from->getBounds($$new($Type$UndetVar$InferenceBoundArray, {$Type$UndetVar$InferenceBound::LOWER}))))->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($Type, anotherLowerBound, $cast($Type, i$->next()));
							{
								bool var$1 = aLowerBound != anotherLowerBound && !$nc(inferenceContext)->free(aLowerBound);
								bool var$0 = var$1 && !inferenceContext->free(anotherLowerBound);
								if (var$0 && commonSuperWithDiffParameterization(aLowerBound, anotherLowerBound)) {
									return true;
								}
							}
						}
					}
				}
			}
		}
	}
	if ($nc(to)->isParameterized()) {
		{
			$init($Type$UndetVar$InferenceBound);
			$var($Iterator, i$, $nc($($nc(from)->getBounds($$new($Type$UndetVar$InferenceBoundArray, {
				$Type$UndetVar$InferenceBound::EQ,
				$Type$UndetVar$InferenceBound::LOWER
			}))))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, t, $cast($Type, i$->next()));
				{
					$var($Type, sup, $nc(this->types)->asSuper(t, to->tsym));
					if (sup != nullptr && sup->isRaw()) {
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool Infer::commonSuperWithDiffParameterization($Type* t, $Type* s) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($(getParameterizedSupers(t, s)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Pair, supers, $cast($Pair, i$->next()));
			{
				if (!$nc(this->types)->isSameType($cast($Type, $nc(supers)->fst), $cast($Type, supers->snd))) {
					return true;
				}
			}
		}
	}
	return false;
}

$Type* Infer::generateReferenceToTargetConstraint($JCTree* tree, $Type$UndetVar* from, $Type* to, $Attr$ResultInfo* resultInfo, $InferenceContext* inferenceContext) {
	$useLocalCurrentObjectStackCache();
	$var($List, var$0, $List::of($nc(from)->qtype));
	$nc(inferenceContext)->solve(var$0, $$new($Warner));
	inferenceContext->notifyChange();
	$var($JCTree, var$1, tree);
	$var($Type, var$2, $nc(from)->getInst());
	$var($Type, capturedType, $nc($($nc($nc(resultInfo)->checkContext)->inferenceContext()))->cachedCapture(var$1, var$2, !resultInfo->checkMode->updateTreeType()));
	if ($nc(this->types)->isConvertible(capturedType, $($nc($($nc(resultInfo->checkContext)->inferenceContext()))->asUndetVar(to)))) {
		return $nc(this->syms)->objectType;
	}
	return to;
}

void Infer::instantiateAsUninferredVars($List* vars, $InferenceContext* inferenceContext) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, todo, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(vars)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				$var($Type$UndetVar, uv, $cast($Type$UndetVar, $nc(inferenceContext)->asUndetVar(t)));
				$init($Type$UndetVar$InferenceBound);
				$var($List, upperBounds, $nc(uv)->getBounds($$new($Type$UndetVar$InferenceBoundArray, {$Type$UndetVar$InferenceBound::UPPER})));
				if ($Type::containsAny(upperBounds, vars)) {
					$var($Symbol$TypeSymbol, fresh_tvar, $new($Symbol$TypeVariableSymbol, $Flags::SYNTHETIC, $nc($nc(uv->qtype)->tsym)->name, nullptr, $nc($nc(uv->qtype)->tsym)->owner));
					$set(fresh_tvar, type, $new($Type$TypeVar, fresh_tvar, $(static_cast<$Type*>($nc(this->types)->makeIntersectionType($(uv->getBounds($$new($Type$UndetVar$InferenceBoundArray, {$Type$UndetVar$InferenceBound::UPPER})))))), $nc(this->syms)->botType));
					todo->append(uv);
					uv->setInst(fresh_tvar->type);
				} else if ($nc(upperBounds)->nonEmpty()) {
					uv->setInst($($nc(this->types)->glb(upperBounds)));
				} else {
					uv->setInst($nc(this->syms)->objectType);
				}
			}
		}
	}
	$var($List, formals, vars);
	{
		$var($Iterator, i$, todo->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				$var($Type$UndetVar, uv, $cast($Type$UndetVar, t));
				$var($Type$TypeVar, ct, $cast($Type$TypeVar, $nc(uv)->getInst()));
				$nc(ct)->setUpperBound($($nc(this->types)->glb($($nc(inferenceContext)->asInstTypes($($nc(this->types)->getBounds(ct)))))));
				if ($nc($(ct->getUpperBound()))->isErroneous()) {
					$init($Type$UndetVar$InferenceBound);
					reportBoundError(uv, $Type$UndetVar$InferenceBound::UPPER);
				}
				$assign(formals, $nc(formals)->tail);
			}
		}
	}
}

$Type* Infer::instantiatePolymorphicSignatureInstance($Env* env, $Symbol$MethodSymbol* spMethod, $Resolve$MethodResolutionContext* resolveContext, $List* argtypes) {
	$useLocalCurrentObjectStackCache();
	$var($Type, restype, nullptr);
	$var($Type, spType, spMethod == nullptr ? $nc(this->syms)->objectType : $nc(spMethod)->getReturnType());
	$init($Infer$4);
	{
		$var($JCTree$JCTypeCast, castTree, nullptr)
		$var($JCTree$JCExpressionStatement, execTree, nullptr)
		switch ($nc($Infer$4::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc($nc($nc(env)->next)->tree)->getTag())))->ordinal())) {
		case 1:
			{
				$assign(castTree, $cast($JCTree$JCTypeCast, $nc(env->next)->tree));
				$assign(restype, ($equals($TreeInfo::skipParens($nc(castTree)->expr), env->tree)) ? $nc($nc(castTree)->clazz)->type : spType);
				break;
			}
		case 2:
			{
				$assign(execTree, $cast($JCTree$JCExpressionStatement, $nc(env->next)->tree));
				$assign(restype, ($equals($TreeInfo::skipParens($nc(execTree)->expr), env->tree)) ? static_cast<$Type*>($nc(this->syms)->voidType) : spType);
				break;
			}
		default:
			{
				$assign(restype, spType);
			}
		}
	}
	$var($List, paramtypes, $nc(argtypes)->map($$new($Infer$ImplicitArgType, this, spMethod, $nc(resolveContext)->step)));
	$var($List, exType, spMethod != nullptr ? spMethod->getThrownTypes() : $List::of($nc(this->syms)->throwableType));
	$var($Type$MethodType, mtype, $new($Type$MethodType, paramtypes, restype, exType, $nc(this->syms)->methodClass));
	return mtype;
}

$Type* Infer::instantiateFunctionalInterface($JCDiagnostic$DiagnosticPosition* pos, $Type* funcInterface, $List* paramTypes$renamed, $Check$CheckContext* checkContext) {
	$useLocalCurrentObjectStackCache();
	$var($List, paramTypes, paramTypes$renamed);
	if ($nc(this->types)->capture(funcInterface) == funcInterface) {
		return funcInterface;
	} else {
		$var($Type, formalInterface, $nc($nc(funcInterface)->tsym)->type);
		$var($InferenceContext, funcInterfaceContext, $new($InferenceContext, this, $($nc($nc(funcInterface->tsym)->type)->getTypeArguments())));
		$Assert::check(paramTypes != nullptr);
		$var($List, descParameterTypes, $nc($($nc(this->types)->findDescriptorType(formalInterface)))->getParameterTypes());
		int32_t var$0 = $nc(descParameterTypes)->size();
		if (var$0 != $nc(paramTypes)->size()) {
			$init($CompilerProperties$Fragments);
			$nc(checkContext)->report(pos, $($nc(this->diags)->fragment($CompilerProperties$Fragments::IncompatibleArgTypesInLambda)));
			return $nc(this->types)->createErrorType(funcInterface);
		}
		{
			$var($Iterator, i$, $nc(descParameterTypes)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, p, $cast($Type, i$->next()));
				{
					if (!$nc(this->types)->isSameType($(funcInterfaceContext->asUndetVar(p)), $cast($Type, $nc(paramTypes)->head))) {
						$nc(checkContext)->report(pos, $($nc(this->diags)->fragment($($CompilerProperties$Fragments::NoSuitableFunctionalIntfInst(funcInterface)))));
						return $nc(this->types)->createErrorType(funcInterface);
					}
					$assign(paramTypes, $nc(paramTypes)->tail);
				}
			}
		}
		$var($List, actualTypeargs, funcInterface->getTypeArguments());
		{
			$var($Iterator, i$, $nc(funcInterfaceContext->undetvars)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, t, $cast($Type, i$->next()));
				{
					$var($Type$UndetVar, uv, $cast($Type$UndetVar, t));
					$init($Type$UndetVar$InferenceBound);
					$var($Optional, inst, $nc($($nc($($nc($($nc(uv)->getBounds($$new($Type$UndetVar$InferenceBoundArray, {$Type$UndetVar$InferenceBound::EQ}))))->stream()))->filter(static_cast<$Predicate*>($$new(Infer$$Lambda$lambda$instantiateFunctionalInterface$1$1, formalInterface)))))->findFirst());
					uv->setInst($cast($Type, $($nc(inst)->orElse($cast($Type, $nc(actualTypeargs)->head)))));
					$assign(actualTypeargs, $nc(actualTypeargs)->tail);
				}
			}
		}
		$var($Type, owntype, funcInterfaceContext->asInstType(formalInterface));
		if (!$nc(this->chk)->checkValidGenericType(owntype)) {
			$nc(checkContext)->report(pos, $($nc(this->diags)->fragment($($CompilerProperties$Fragments::NoSuitableFunctionalIntfInst(funcInterface)))));
		}
		$nc(checkContext)->compatible(owntype, funcInterface, $nc(this->types)->noWarnings);
		return owntype;
	}
}

$Infer$AbstractIncorporationEngine* Infer::incorporationEngine() {
	return this->allowGraphInference ? this->graphEngine : this->legacyEngine;
}

void Infer::doIncorporation($InferenceContext* inferenceContext, $Warner* warn) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			bool progress = true;
			int32_t round = 0;
			while (progress && round < Infer::MAX_INCORPORATION_STEPS) {
				progress = false;
				{
					$var($Iterator, i$, $nc($nc(inferenceContext)->undetvars)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Type, t, $cast($Type, i$->next()));
						{
							$var($Type$UndetVar, uv, $cast($Type$UndetVar, t));
							if (!$nc($nc(uv)->incorporationActions)->isEmpty()) {
								progress = true;
								$nc(($cast($Infer$IncorporationAction, $($nc(uv->incorporationActions)->removeFirst()))))->apply(inferenceContext, warn);
							}
						}
					}
				}
				++round;
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->incorporationCache)->clear();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$List* Infer::getParameterizedSupers($Type* t, $Type* s) {
	$useLocalCurrentObjectStackCache();
	$var($Type, lubResult, $nc(this->types)->lub($$new($TypeArray, {
		t,
		s
	})));
	if (lubResult == $nc(this->syms)->errType || lubResult == $nc(this->syms)->botType) {
		return $List::nil();
	}
	$var($List, supertypesToCheck, $nc(lubResult)->isIntersection() ? $nc(($cast($Type$IntersectionClassType, lubResult)))->getComponents() : $List::of(lubResult));
	$var($ListBuffer, commonSupertypes, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(supertypesToCheck)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, sup, $cast($Type, i$->next()));
			{
				if ($nc(sup)->isParameterized()) {
					$var($Type, asSuperOfT, asSuper(t, sup));
					$var($Type, asSuperOfS, asSuper(s, sup));
					commonSupertypes->add($$new($Pair, asSuperOfT, asSuperOfS));
				}
			}
		}
	}
	return commonSupertypes->toList();
}

$Type* Infer::asSuper($Type* t, $Type* sup) {
	$useLocalCurrentObjectStackCache();
	$var($Type, var$0, nullptr);
	$init($TypeTag);
	if ($nc(sup)->hasTag($TypeTag::ARRAY)) {
		$var($Type, var$1, $nc(this->types)->elemtype(t));
		$assign(var$0, $new($Type$ArrayType, $(asSuper(var$1, $($nc(this->types)->elemtype(sup)))), $nc(this->syms)->arrayClass));
	} else {
		$assign(var$0, $nc(this->types)->asSuper(t, sup->tsym));
	}
	return var$0;
}

bool Infer::doIncorporationOp($Infer$IncorporationBinaryOpKind* opKind, $Type* op1, $Type* op2, $Warner* warn) {
	$useLocalCurrentObjectStackCache();
	$var($Infer$IncorporationBinaryOp, newOp, $new($Infer$IncorporationBinaryOp, this, opKind, op1, op2));
	$var($Boolean, res, $cast($Boolean, $nc(this->incorporationCache)->get(newOp)));
	if (res == nullptr) {
		$nc(this->incorporationCache)->put(newOp, $assign(res, $Boolean::valueOf(newOp->apply(warn))));
	}
	return $nc(res)->booleanValue();
}

void Infer::reportInstError($Type$UndetVar* uv, $Type$UndetVar$InferenceBound* ib) {
	$useLocalCurrentObjectStackCache();
	$init($Infer$4);
	switch ($nc($Infer$4::$SwitchMap$com$sun$tools$javac$code$Type$UndetVar$InferenceBound)->get($nc((ib))->ordinal())) {
	case 1:
		{
			$var($Type, var$0, $nc(uv)->getInst());
			$throw($(error($($nc(this->diags)->fragment($($CompilerProperties$Fragments::InferredDoNotConformToEqBounds(var$0, $(uv->getBounds($$new($Type$UndetVar$InferenceBoundArray, {ib}))))))))));
		}
	case 2:
		{
			$var($Type, var$1, $nc(uv)->getInst());
			$throw($(error($($nc(this->diags)->fragment($($CompilerProperties$Fragments::InferredDoNotConformToLowerBounds(var$1, $(uv->getBounds($$new($Type$UndetVar$InferenceBoundArray, {ib}))))))))));
		}
	case 3:
		{
			$var($Type, var$2, $nc(uv)->getInst());
			$throw($(error($($nc(this->diags)->fragment($($CompilerProperties$Fragments::InferredDoNotConformToUpperBounds(var$2, $(uv->getBounds($$new($Type$UndetVar$InferenceBoundArray, {ib}))))))))));
		}
	}
}

void Infer::reportBoundError($Type$UndetVar* uv, $Type$UndetVar$InferenceBound* ib) {
	$useLocalCurrentObjectStackCache();
	$init($Infer$4);
	switch ($nc($Infer$4::$SwitchMap$com$sun$tools$javac$code$Type$UndetVar$InferenceBound)->get($nc((ib))->ordinal())) {
	case 1:
		{
			$throw($(error($($nc(this->diags)->fragment($($CompilerProperties$Fragments::IncompatibleEqBounds($nc(uv)->qtype, $(uv->getBounds($$new($Type$UndetVar$InferenceBoundArray, {ib}))))))))));
		}
	case 3:
		{
			$throw($(error($($nc(this->diags)->fragment($($CompilerProperties$Fragments::IncompatibleUpperBounds($nc(uv)->qtype, $(uv->getBounds($$new($Type$UndetVar$InferenceBoundArray, {ib}))))))))));
		}
	case 2:
		{
			$throwNew($AssertionError, $of("this case shouldn\'t happen"_s));
		}
	}
}

void Infer::reportBoundError($Type$UndetVar* uv, $Type$UndetVar$InferenceBound* ib1, $Type$UndetVar$InferenceBound* ib2) {
	$useLocalCurrentObjectStackCache();
	$var($Type, var$0, $nc(uv)->qtype);
	$var($JCDiagnostic$Fragment, var$1, getBoundFragment(ib1, $(uv->getBounds($$new($Type$UndetVar$InferenceBoundArray, {ib1})))));
	$throw($(error($($nc(this->diags)->fragment($($CompilerProperties$Fragments::IncompatibleBounds(var$0, var$1, $(getBoundFragment(ib2, $(uv->getBounds($$new($Type$UndetVar$InferenceBoundArray, {ib2}))))))))))));
}

$JCDiagnostic$Fragment* Infer::getBoundFragment($Type$UndetVar$InferenceBound* ib, $List* types) {
	$init($Infer$4);
	switch ($nc($Infer$4::$SwitchMap$com$sun$tools$javac$code$Type$UndetVar$InferenceBound)->get($nc((ib))->ordinal())) {
	case 1:
		{
			return $CompilerProperties$Fragments::EqBounds(types);
		}
	case 2:
		{
			return $CompilerProperties$Fragments::LowerBounds(types);
		}
	case 3:
		{
			return $CompilerProperties$Fragments::UpperBounds(types);
		}
	}
	$throwNew($AssertionError, $of("can\'t get to this place"_s));
}

bool Infer::lambda$instantiateFunctionalInterface$1($Type* formalInterface, $Type* b) {
	$init(Infer);
	return !$nc(b)->containsAny($($nc(formalInterface)->getTypeArguments()));
}

bool Infer::lambda$roots$0($Type* tv) {
	$init(Infer);
	return ((int64_t)($nc($nc(tv)->tsym)->flags() & (uint64_t)$Flags::THROWS)) != 0;
}

void clinit$Infer($Class* class$) {
	$assignStatic(Infer::inferKey, $new($Context$Key));
	$assignStatic(Infer::anyPoly, $new($Type$JCNoType));
}

Infer::Infer() {
}

$Class* Infer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Infer$$Lambda$lambda$roots$0::classInfo$.name)) {
			return Infer$$Lambda$lambda$roots$0::load$(name, initialize);
		}
		if (name->equals(Infer$$Lambda$lambda$instantiateFunctionalInterface$1$1::classInfo$.name)) {
			return Infer$$Lambda$lambda$instantiateFunctionalInterface$1$1::load$(name, initialize);
		}
	}
	$loadClass(Infer, name, initialize, &_Infer_ClassInfo_, clinit$Infer, allocate$Infer);
	return class$;
}

$Class* Infer::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com