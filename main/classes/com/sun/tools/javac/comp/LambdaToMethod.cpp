#include <com/sun/tools/javac/comp/LambdaToMethod.h>

#include <com/sun/source/tree/CaseTree$CaseKind.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/LambdaExpressionTree$BodyKind.h>
#include <com/sun/tools/javac/code/Attribute$TypeCompound.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$DynamicMethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodHandleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$JCPrimitiveType.h>
#include <com/sun/tools/javac/code/Type$JCVoidType.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeAnnotationPosition.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$SignatureGenerator$InvalidSignatureException.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$1.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$1LambdaBodyTranslator.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$DedupedLambda.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$KlassInfo.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$L2MSignatureGenerator.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaSymbolKind.h>
#include <com/sun/tools/javac/comp/Lower.h>
#include <com/sun/tools/javac/comp/Operators.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/comp/TransTypes.h>
#include <com/sun/tools/javac/jvm/PoolConstant$LoadableConstant.h>
#include <com/sun/tools/javac/jvm/Target.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Notes.h>
#include <com/sun/tools/javac/tree/JCTree$JCBinary.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCBreak.h>
#include <com/sun/tools/javac/tree/JCTree$JCCase.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpressionStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCFunctionalExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCIf.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCLiteral.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference$ReferenceKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodInvocation.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCOperatorExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCReturn.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCSwitch.h>
#include <com/sun/tools/javac/tree/JCTree$JCThrow.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeCast.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/tree/TreeTranslator.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Note.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Options.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/InternalError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/function/Supplier.h>
#include <javax/lang/model/element/ElementKind.h>
#include <javax/lang/model/element/Name.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

#undef AND
#undef BOT
#undef CAPTURED_OUTER_THIS
#undef CAPTURED_VAR
#undef EQ
#undef EXPRESSION
#undef FIELD
#undef FLAG_BRIDGES
#undef FLAG_MARKERS
#undef FLAG_SERIALIZABLE
#undef G
#undef G_CUSTOM
#undef LOCAL_VAR
#undef MTH
#undef PCK
#undef STATEMENT
#undef VOID

using $PoolConstant$LoadableConstantArray = $Array<::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant>;
using $CaseTree$CaseKind = ::com::sun::source::tree::CaseTree$CaseKind;
using $LambdaExpressionTree$BodyKind = ::com::sun::source::tree::LambdaExpressionTree$BodyKind;
using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Attribute$TypeCompound = ::com::sun::tools::javac::code::Attribute$TypeCompound;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$DynamicMethodSymbol = ::com::sun::tools::javac::code::Symbol$DynamicMethodSymbol;
using $Symbol$MethodHandleSymbol = ::com::sun::tools::javac::code::Symbol$MethodHandleSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$OperatorSymbol = ::com::sun::tools::javac::code::Symbol$OperatorSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$JCPrimitiveType = ::com::sun::tools::javac::code::Type$JCPrimitiveType;
using $Type$JCVoidType = ::com::sun::tools::javac::code::Type$JCVoidType;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $TypeAnnotationPosition = ::com::sun::tools::javac::code::TypeAnnotationPosition;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$SignatureGenerator = ::com::sun::tools::javac::code::Types$SignatureGenerator;
using $Types$SignatureGenerator$InvalidSignatureException = ::com::sun::tools::javac::code::Types$SignatureGenerator$InvalidSignatureException;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Env = ::com::sun::tools::javac::comp::Env;
using $LambdaToMethod$1 = ::com::sun::tools::javac::comp::LambdaToMethod$1;
using $LambdaToMethod$1LambdaBodyTranslator = ::com::sun::tools::javac::comp::LambdaToMethod$1LambdaBodyTranslator;
using $LambdaToMethod$DedupedLambda = ::com::sun::tools::javac::comp::LambdaToMethod$DedupedLambda;
using $LambdaToMethod$KlassInfo = ::com::sun::tools::javac::comp::LambdaToMethod$KlassInfo;
using $LambdaToMethod$L2MSignatureGenerator = ::com::sun::tools::javac::comp::LambdaToMethod$L2MSignatureGenerator;
using $LambdaToMethod$LambdaAnalyzerPreprocessor = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor;
using $LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext;
using $LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext;
using $LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext;
using $LambdaToMethod$LambdaSymbolKind = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaSymbolKind;
using $Lower = ::com::sun::tools::javac::comp::Lower;
using $Operators = ::com::sun::tools::javac::comp::Operators;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $TransTypes = ::com::sun::tools::javac::comp::TransTypes;
using $PoolConstant$Dynamic = ::com::sun::tools::javac::jvm::PoolConstant$Dynamic;
using $PoolConstant$LoadableConstant = ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant;
using $Target = ::com::sun::tools::javac::jvm::Target;
using $Option = ::com::sun::tools::javac::main::Option;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
using $CompilerProperties$Notes = ::com::sun::tools::javac::resources::CompilerProperties$Notes;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCBinary = ::com::sun::tools::javac::tree::JCTree$JCBinary;
using $JCTree$JCBlock = ::com::sun::tools::javac::tree::JCTree$JCBlock;
using $JCTree$JCBreak = ::com::sun::tools::javac::tree::JCTree$JCBreak;
using $JCTree$JCCase = ::com::sun::tools::javac::tree::JCTree$JCCase;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCExpressionStatement = ::com::sun::tools::javac::tree::JCTree$JCExpressionStatement;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCFunctionalExpression = ::com::sun::tools::javac::tree::JCTree$JCFunctionalExpression;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCIf = ::com::sun::tools::javac::tree::JCTree$JCIf;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCLiteral = ::com::sun::tools::javac::tree::JCTree$JCLiteral;
using $JCTree$JCMemberReference = ::com::sun::tools::javac::tree::JCTree$JCMemberReference;
using $JCTree$JCMemberReference$ReferenceKind = ::com::sun::tools::javac::tree::JCTree$JCMemberReference$ReferenceKind;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCMethodInvocation = ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCOperatorExpression = ::com::sun::tools::javac::tree::JCTree$JCOperatorExpression;
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
using $JCTree$JCReturn = ::com::sun::tools::javac::tree::JCTree$JCReturn;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$JCSwitch = ::com::sun::tools::javac::tree::JCTree$JCSwitch;
using $JCTree$JCThrow = ::com::sun::tools::javac::tree::JCTree$JCThrow;
using $JCTree$JCTypeCast = ::com::sun::tools::javac::tree::JCTree$JCTypeCast;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $TreeTranslator = ::com::sun::tools::javac::tree::TreeTranslator;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $JCDiagnostic$Fragment = ::com::sun::tools::javac::util::JCDiagnostic$Fragment;
using $JCDiagnostic$Note = ::com::sun::tools::javac::util::JCDiagnostic$Note;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Options = ::com::sun::tools::javac::util::Options;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Supplier = ::java::util::function::Supplier;
using $ElementKind = ::javax::lang::model::element::ElementKind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class LambdaToMethod$$Lambda$getRawTypeAttributes : public $Supplier {
	$class(LambdaToMethod$$Lambda$getRawTypeAttributes, $NO_CLASS_INIT, $Supplier)
public:
	void init$($Symbol* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->getRawTypeAttributes());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LambdaToMethod$$Lambda$getRawTypeAttributes>());
	}
	$Symbol* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LambdaToMethod$$Lambda$getRawTypeAttributes::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(LambdaToMethod$$Lambda$getRawTypeAttributes, inst$)},
	{}
};
$MethodInfo LambdaToMethod$$Lambda$getRawTypeAttributes::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(LambdaToMethod$$Lambda$getRawTypeAttributes::*)($Symbol*)>(&LambdaToMethod$$Lambda$getRawTypeAttributes::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo LambdaToMethod$$Lambda$getRawTypeAttributes::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.LambdaToMethod$$Lambda$getRawTypeAttributes",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* LambdaToMethod$$Lambda$getRawTypeAttributes::load$($String* name, bool initialize) {
	$loadClass(LambdaToMethod$$Lambda$getRawTypeAttributes, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LambdaToMethod$$Lambda$getRawTypeAttributes::class$ = nullptr;

class LambdaToMethod$$Lambda$setTypeAttributes$1 : public $Consumer {
	$class(LambdaToMethod$$Lambda$setTypeAttributes$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Symbol* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* a) override {
		$nc(inst$)->setTypeAttributes($cast($List, a));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LambdaToMethod$$Lambda$setTypeAttributes$1>());
	}
	$Symbol* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LambdaToMethod$$Lambda$setTypeAttributes$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(LambdaToMethod$$Lambda$setTypeAttributes$1, inst$)},
	{}
};
$MethodInfo LambdaToMethod$$Lambda$setTypeAttributes$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(LambdaToMethod$$Lambda$setTypeAttributes$1::*)($Symbol*)>(&LambdaToMethod$$Lambda$setTypeAttributes$1::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo LambdaToMethod$$Lambda$setTypeAttributes$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.LambdaToMethod$$Lambda$setTypeAttributes$1",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* LambdaToMethod$$Lambda$setTypeAttributes$1::load$($String* name, bool initialize) {
	$loadClass(LambdaToMethod$$Lambda$setTypeAttributes$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LambdaToMethod$$Lambda$setTypeAttributes$1::class$ = nullptr;

class LambdaToMethod$$Lambda$getInitTypeAttributes$2 : public $Supplier {
	$class(LambdaToMethod$$Lambda$getInitTypeAttributes$2, $NO_CLASS_INIT, $Supplier)
public:
	void init$($Symbol* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->getInitTypeAttributes());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LambdaToMethod$$Lambda$getInitTypeAttributes$2>());
	}
	$Symbol* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LambdaToMethod$$Lambda$getInitTypeAttributes$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(LambdaToMethod$$Lambda$getInitTypeAttributes$2, inst$)},
	{}
};
$MethodInfo LambdaToMethod$$Lambda$getInitTypeAttributes$2::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(LambdaToMethod$$Lambda$getInitTypeAttributes$2::*)($Symbol*)>(&LambdaToMethod$$Lambda$getInitTypeAttributes$2::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo LambdaToMethod$$Lambda$getInitTypeAttributes$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.LambdaToMethod$$Lambda$getInitTypeAttributes$2",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* LambdaToMethod$$Lambda$getInitTypeAttributes$2::load$($String* name, bool initialize) {
	$loadClass(LambdaToMethod$$Lambda$getInitTypeAttributes$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LambdaToMethod$$Lambda$getInitTypeAttributes$2::class$ = nullptr;

class LambdaToMethod$$Lambda$getClassInitTypeAttributes$3 : public $Supplier {
	$class(LambdaToMethod$$Lambda$getClassInitTypeAttributes$3, $NO_CLASS_INIT, $Supplier)
public:
	void init$($Symbol* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->getClassInitTypeAttributes());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LambdaToMethod$$Lambda$getClassInitTypeAttributes$3>());
	}
	$Symbol* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LambdaToMethod$$Lambda$getClassInitTypeAttributes$3::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(LambdaToMethod$$Lambda$getClassInitTypeAttributes$3, inst$)},
	{}
};
$MethodInfo LambdaToMethod$$Lambda$getClassInitTypeAttributes$3::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(LambdaToMethod$$Lambda$getClassInitTypeAttributes$3::*)($Symbol*)>(&LambdaToMethod$$Lambda$getClassInitTypeAttributes$3::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo LambdaToMethod$$Lambda$getClassInitTypeAttributes$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.LambdaToMethod$$Lambda$getClassInitTypeAttributes$3",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* LambdaToMethod$$Lambda$getClassInitTypeAttributes$3::load$($String* name, bool initialize) {
	$loadClass(LambdaToMethod$$Lambda$getClassInitTypeAttributes$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LambdaToMethod$$Lambda$getClassInitTypeAttributes$3::class$ = nullptr;

class LambdaToMethod$$Lambda$setInitTypeAttributes$4 : public $Consumer {
	$class(LambdaToMethod$$Lambda$setInitTypeAttributes$4, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Symbol* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* l) override {
		$nc(inst$)->setInitTypeAttributes($cast($List, l));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LambdaToMethod$$Lambda$setInitTypeAttributes$4>());
	}
	$Symbol* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LambdaToMethod$$Lambda$setInitTypeAttributes$4::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(LambdaToMethod$$Lambda$setInitTypeAttributes$4, inst$)},
	{}
};
$MethodInfo LambdaToMethod$$Lambda$setInitTypeAttributes$4::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(LambdaToMethod$$Lambda$setInitTypeAttributes$4::*)($Symbol*)>(&LambdaToMethod$$Lambda$setInitTypeAttributes$4::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo LambdaToMethod$$Lambda$setInitTypeAttributes$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.LambdaToMethod$$Lambda$setInitTypeAttributes$4",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* LambdaToMethod$$Lambda$setInitTypeAttributes$4::load$($String* name, bool initialize) {
	$loadClass(LambdaToMethod$$Lambda$setInitTypeAttributes$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LambdaToMethod$$Lambda$setInitTypeAttributes$4::class$ = nullptr;

class LambdaToMethod$$Lambda$setClassInitTypeAttributes$5 : public $Consumer {
	$class(LambdaToMethod$$Lambda$setClassInitTypeAttributes$5, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Symbol* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* l) override {
		$nc(inst$)->setClassInitTypeAttributes($cast($List, l));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LambdaToMethod$$Lambda$setClassInitTypeAttributes$5>());
	}
	$Symbol* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LambdaToMethod$$Lambda$setClassInitTypeAttributes$5::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(LambdaToMethod$$Lambda$setClassInitTypeAttributes$5, inst$)},
	{}
};
$MethodInfo LambdaToMethod$$Lambda$setClassInitTypeAttributes$5::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(LambdaToMethod$$Lambda$setClassInitTypeAttributes$5::*)($Symbol*)>(&LambdaToMethod$$Lambda$setClassInitTypeAttributes$5::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo LambdaToMethod$$Lambda$setClassInitTypeAttributes$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.LambdaToMethod$$Lambda$setClassInitTypeAttributes$5",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* LambdaToMethod$$Lambda$setClassInitTypeAttributes$5::load$($String* name, bool initialize) {
	$loadClass(LambdaToMethod$$Lambda$setClassInitTypeAttributes$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LambdaToMethod$$Lambda$setClassInitTypeAttributes$5::class$ = nullptr;

class LambdaToMethod$$Lambda$appendUniqueTypeAttributes$6 : public $Consumer {
	$class(LambdaToMethod$$Lambda$appendUniqueTypeAttributes$6, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Symbol* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* l) override {
		$nc(inst$)->appendUniqueTypeAttributes($cast($List, l));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LambdaToMethod$$Lambda$appendUniqueTypeAttributes$6>());
	}
	$Symbol* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LambdaToMethod$$Lambda$appendUniqueTypeAttributes$6::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(LambdaToMethod$$Lambda$appendUniqueTypeAttributes$6, inst$)},
	{}
};
$MethodInfo LambdaToMethod$$Lambda$appendUniqueTypeAttributes$6::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(LambdaToMethod$$Lambda$appendUniqueTypeAttributes$6::*)($Symbol*)>(&LambdaToMethod$$Lambda$appendUniqueTypeAttributes$6::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo LambdaToMethod$$Lambda$appendUniqueTypeAttributes$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.LambdaToMethod$$Lambda$appendUniqueTypeAttributes$6",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* LambdaToMethod$$Lambda$appendUniqueTypeAttributes$6::load$($String* name, bool initialize) {
	$loadClass(LambdaToMethod$$Lambda$appendUniqueTypeAttributes$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LambdaToMethod$$Lambda$appendUniqueTypeAttributes$6::class$ = nullptr;

class LambdaToMethod$$Lambda$constantType$7 : public $Function {
	$class(LambdaToMethod$$Lambda$constantType$7, $NO_CLASS_INIT, $Function)
public:
	void init$($Types* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* c) override {
		 return $of($nc(inst$)->constantType($cast($PoolConstant$LoadableConstant, c)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LambdaToMethod$$Lambda$constantType$7>());
	}
	$Types* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LambdaToMethod$$Lambda$constantType$7::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(LambdaToMethod$$Lambda$constantType$7, inst$)},
	{}
};
$MethodInfo LambdaToMethod$$Lambda$constantType$7::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, $PUBLIC, $method(static_cast<void(LambdaToMethod$$Lambda$constantType$7::*)($Types*)>(&LambdaToMethod$$Lambda$constantType$7::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo LambdaToMethod$$Lambda$constantType$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.LambdaToMethod$$Lambda$constantType$7",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* LambdaToMethod$$Lambda$constantType$7::load$($String* name, bool initialize) {
	$loadClass(LambdaToMethod$$Lambda$constantType$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LambdaToMethod$$Lambda$constantType$7::class$ = nullptr;

$FieldInfo _LambdaToMethod_FieldInfo_[] = {
	{"attr", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $PRIVATE, $field(LambdaToMethod, attr)},
	{"diags", "Lcom/sun/tools/javac/util/JCDiagnostic$Factory;", nullptr, $PRIVATE, $field(LambdaToMethod, diags)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $PRIVATE, $field(LambdaToMethod, log)},
	{"lower", "Lcom/sun/tools/javac/comp/Lower;", nullptr, $PRIVATE, $field(LambdaToMethod, lower)},
	{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, $PRIVATE, $field(LambdaToMethod, names)},
	{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $PRIVATE, $field(LambdaToMethod, syms)},
	{"rs", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $PRIVATE, $field(LambdaToMethod, rs)},
	{"operators", "Lcom/sun/tools/javac/comp/Operators;", nullptr, $PRIVATE, $field(LambdaToMethod, operators)},
	{"make", "Lcom/sun/tools/javac/tree/TreeMaker;", nullptr, $PRIVATE, $field(LambdaToMethod, make)},
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, $PRIVATE, $field(LambdaToMethod, types)},
	{"transTypes", "Lcom/sun/tools/javac/comp/TransTypes;", nullptr, $PRIVATE, $field(LambdaToMethod, transTypes)},
	{"attrEnv", "Lcom/sun/tools/javac/comp/Env;", "Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PRIVATE, $field(LambdaToMethod, attrEnv)},
	{"analyzer", "Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor;", nullptr, $PRIVATE, $field(LambdaToMethod, analyzer)},
	{"contextMap", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext<*>;>;", $PRIVATE, $field(LambdaToMethod, contextMap)},
	{"context", "Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext;", "Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext<*>;", $PRIVATE, $field(LambdaToMethod, context)},
	{"kInfo", "Lcom/sun/tools/javac/comp/LambdaToMethod$KlassInfo;", nullptr, $PRIVATE, $field(LambdaToMethod, kInfo)},
	{"dumpLambdaToMethodStats", "Z", nullptr, $PRIVATE | $FINAL, $field(LambdaToMethod, dumpLambdaToMethodStats)},
	{"forceSerializable", "Z", nullptr, $PRIVATE | $FINAL, $field(LambdaToMethod, forceSerializable)},
	{"debugLinesOrVars", "Z", nullptr, $PRIVATE | $FINAL, $field(LambdaToMethod, debugLinesOrVars)},
	{"verboseDeduplication", "Z", nullptr, $PRIVATE | $FINAL, $field(LambdaToMethod, verboseDeduplication)},
	{"deduplicateLambdas", "Z", nullptr, $PRIVATE | $FINAL, $field(LambdaToMethod, deduplicateLambdas)},
	{"nestmateLambdas", "Z", nullptr, $PRIVATE | $FINAL, $field(LambdaToMethod, nestmateLambdas)},
	{"FLAG_SERIALIZABLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LambdaToMethod, FLAG_SERIALIZABLE)},
	{"FLAG_MARKERS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LambdaToMethod, FLAG_MARKERS)},
	{"FLAG_BRIDGES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LambdaToMethod, FLAG_BRIDGES)},
	{"unlambdaKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/comp/LambdaToMethod;>;", $PROTECTED | $STATIC | $FINAL, $staticField(LambdaToMethod, unlambdaKey)},
	{}
};

$MethodInfo _LambdaToMethod_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PRIVATE, $method(static_cast<void(LambdaToMethod::*)($Context*)>(&LambdaToMethod::init$))},
	{"addDeserializationCase", "(Lcom/sun/tools/javac/code/Symbol$MethodHandleSymbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Type$MethodType;)V", "(Lcom/sun/tools/javac/code/Symbol$MethodHandleSymbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/jvm/PoolConstant$LoadableConstant;>;Lcom/sun/tools/javac/code/Type$MethodType;)V", $PRIVATE, $method(static_cast<void(LambdaToMethod::*)($Symbol$MethodHandleSymbol*,$Type*,$Symbol$MethodSymbol*,$JCDiagnostic$DiagnosticPosition*,$List*,$Type$MethodType*)>(&LambdaToMethod::addDeserializationCase))},
	{"apportionTypeAnnotations", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;Ljava/util/function/Supplier;Ljava/util/function/Consumer;Ljava/util/function/Consumer;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;Ljava/util/function/Supplier<Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;>;Ljava/util/function/Consumer<Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;>;Ljava/util/function/Consumer<Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;>;)V", $PRIVATE, $method(static_cast<void(LambdaToMethod::*)($JCTree$JCLambda*,$Supplier*,$Consumer*,$Consumer*)>(&LambdaToMethod::apportionTypeAnnotations))},
	{"classSig", "(Lcom/sun/tools/javac/code/Type;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(LambdaToMethod::*)($Type*)>(&LambdaToMethod::classSig))},
	{"convertArgs", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PRIVATE, $method(static_cast<$List*(LambdaToMethod::*)($Symbol*,$List*,$Type*)>(&LambdaToMethod::convertArgs))},
	{"deserGetter", "(Ljava/lang/String;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PRIVATE, $method(static_cast<$JCTree$JCExpression*(LambdaToMethod::*)($String*,$Type*)>(&LambdaToMethod::deserGetter))},
	{"deserGetter", "(Ljava/lang/String;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", "(Ljava/lang/String;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", $PRIVATE, $method(static_cast<$JCTree$JCExpression*(LambdaToMethod::*)($String*,$Type*,$List*,$List*)>(&LambdaToMethod::deserGetter))},
	{"deserTest", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Ljava/lang/String;Ljava/lang/String;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PRIVATE, $method(static_cast<$JCTree$JCExpression*(LambdaToMethod::*)($JCTree$JCExpression*,$String*,$String*)>(&LambdaToMethod::deserTest))},
	{"eqTest", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PRIVATE, $method(static_cast<$JCTree$JCExpression*(LambdaToMethod::*)($Type*,$JCTree$JCExpression*,$JCTree$JCExpression*)>(&LambdaToMethod::eqTest))},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/comp/LambdaToMethod;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LambdaToMethod*(*)($Context*)>(&LambdaToMethod::instance))},
	{"isProtectedInSuperClassOfEnclosingClassInOtherPackage", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE, $method(static_cast<bool(LambdaToMethod::*)($Symbol*,$Symbol*)>(&LambdaToMethod::isProtectedInSuperClassOfEnclosingClassInOtherPackage))},
	{"makeDeserializeMethod", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;", nullptr, $PRIVATE, $method(static_cast<$JCTree$JCMethodDecl*(LambdaToMethod::*)($Symbol*)>(&LambdaToMethod::makeDeserializeMethod))},
	{"makeIndyCall", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Type$MethodType;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/jvm/PoolConstant$LoadableConstant;>;Lcom/sun/tools/javac/code/Type$MethodType;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", $PRIVATE, $method(static_cast<$JCTree$JCExpression*(LambdaToMethod::*)($JCDiagnostic$DiagnosticPosition*,$Type*,$Name*,$List*,$Type$MethodType*,$List*,$Name*)>(&LambdaToMethod::makeIndyCall))},
	{"makeLambdaBody", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)Lcom/sun/tools/javac/tree/JCTree$JCBlock;", nullptr, $PRIVATE, $method(static_cast<$JCTree$JCBlock*(LambdaToMethod::*)($JCTree$JCLambda*,$JCTree$JCMethodDecl*)>(&LambdaToMethod::makeLambdaBody))},
	{"makeLambdaExpressionBody", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)Lcom/sun/tools/javac/tree/JCTree$JCBlock;", nullptr, $PRIVATE, $method(static_cast<$JCTree$JCBlock*(LambdaToMethod::*)($JCTree$JCExpression*,$JCTree$JCMethodDecl*)>(&LambdaToMethod::makeLambdaExpressionBody))},
	{"makeLambdaStatementBody", "(Lcom/sun/tools/javac/tree/JCTree$JCBlock;Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;Z)Lcom/sun/tools/javac/tree/JCTree$JCBlock;", nullptr, $PRIVATE, $method(static_cast<$JCTree$JCBlock*(LambdaToMethod::*)($JCTree$JCBlock*,$JCTree$JCMethodDecl*,bool)>(&LambdaToMethod::makeLambdaStatementBody))},
	{"makeMetafactoryIndyCall", "(Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext;Lcom/sun/tools/javac/code/Symbol$MethodHandleSymbol;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", "(Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext<*>;Lcom/sun/tools/javac/code/Symbol$MethodHandleSymbol;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", $PRIVATE, $method(static_cast<$JCTree$JCExpression*(LambdaToMethod::*)($LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext*,$Symbol$MethodHandleSymbol*,$List*)>(&LambdaToMethod::makeMetafactoryIndyCall))},
	{"makeNewClass", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/tree/JCTree$JCNewClass;", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/tree/JCTree$JCNewClass;", 0},
	{"makeNewClass", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCNewClass;", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)Lcom/sun/tools/javac/tree/JCTree$JCNewClass;", 0},
	{"makePrivateSyntheticMethod", "(JLcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, $PRIVATE, $method(static_cast<$Symbol$MethodSymbol*(LambdaToMethod::*)(int64_t,$Name*,$Type*,$Symbol*)>(&LambdaToMethod::makePrivateSyntheticMethod))},
	{"makeSyntheticVar", "(JLcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Symbol$VarSymbol;", nullptr, $PRIVATE, $method(static_cast<$Symbol$VarSymbol*(LambdaToMethod::*)(int64_t,$Name*,$Type*,$Symbol*)>(&LambdaToMethod::makeSyntheticVar))},
	{"makeThis", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/tree/JCTree$JCIdent;", nullptr, $PRIVATE, $method(static_cast<$JCTree$JCIdent*(LambdaToMethod::*)($Type*,$Symbol*)>(&LambdaToMethod::makeThis))},
	{"setVarargsIfNeeded", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PRIVATE, $method(static_cast<void(LambdaToMethod::*)($JCTree*,$Type*)>(&LambdaToMethod::setVarargsIfNeeded))},
	{"translate", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree;", "<T:Lcom/sun/tools/javac/tree/JCTree;>(TT;)TT;", $PUBLIC},
	{"translate", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext;)Lcom/sun/tools/javac/tree/JCTree;", "<T:Lcom/sun/tools/javac/tree/JCTree;>(TT;Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext<*>;)TT;", 0},
	{"translate", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext;)Lcom/sun/tools/javac/util/List;", "<T:Lcom/sun/tools/javac/tree/JCTree;>(Lcom/sun/tools/javac/util/List<TT;>;Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext<*>;)Lcom/sun/tools/javac/util/List<TT;>;", 0},
	{"translateTopLevelClass", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/TreeMaker;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/TreeMaker;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"typeSig", "(Lcom/sun/tools/javac/code/Type;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(LambdaToMethod::*)($Type*)>(&LambdaToMethod::typeSig))},
	{"typeSig", "(Lcom/sun/tools/javac/code/Type;Z)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(LambdaToMethod::*)($Type*,bool)>(&LambdaToMethod::typeSig))},
	{"typeToMethodType", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type$MethodType;", nullptr, $PRIVATE, $method(static_cast<$Type$MethodType*(LambdaToMethod::*)($Type*)>(&LambdaToMethod::typeToMethodType))},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"visitIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCIdent;)V", nullptr, $PUBLIC},
	{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC},
	{"visitNewClass", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)V", nullptr, $PUBLIC},
	{"visitReference", "(Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;)V", nullptr, $PUBLIC},
	{"visitSelect", "(Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;)V", nullptr, $PUBLIC},
	{"visitVarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LambdaToMethod_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.LambdaToMethod$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.comp.LambdaToMethod$L2MSignatureGenerator", "com.sun.tools.javac.comp.LambdaToMethod", "L2MSignatureGenerator", $PRIVATE},
	{"com.sun.tools.javac.comp.LambdaToMethod$LambdaSymbolKind", "com.sun.tools.javac.comp.LambdaToMethod", "LambdaSymbolKind", $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor", "com.sun.tools.javac.comp.LambdaToMethod", "LambdaAnalyzerPreprocessor", 0},
	{"com.sun.tools.javac.comp.LambdaToMethod$MemberReferenceToLambda", "com.sun.tools.javac.comp.LambdaToMethod", "MemberReferenceToLambda", $PRIVATE},
	{"com.sun.tools.javac.comp.LambdaToMethod$KlassInfo", "com.sun.tools.javac.comp.LambdaToMethod", "KlassInfo", $PRIVATE},
	{"com.sun.tools.javac.comp.LambdaToMethod$DedupedLambda", "com.sun.tools.javac.comp.LambdaToMethod", "DedupedLambda", 0},
	{"com.sun.tools.javac.comp.LambdaToMethod$1LambdaBodyTranslator", nullptr, "LambdaBodyTranslator", 0},
	{}
};

$ClassInfo _LambdaToMethod_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.LambdaToMethod",
	"com.sun.tools.javac.tree.TreeTranslator",
	nullptr,
	_LambdaToMethod_FieldInfo_,
	_LambdaToMethod_MethodInfo_,
	nullptr,
	nullptr,
	_LambdaToMethod_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.LambdaToMethod$1,com.sun.tools.javac.comp.LambdaToMethod$L2MSignatureGenerator,com.sun.tools.javac.comp.LambdaToMethod$LambdaSymbolKind,com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor,com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext,com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext,com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$4,com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$3,com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2,com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1,com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext,com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$Frame,com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter,com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$1,com.sun.tools.javac.comp.LambdaToMethod$MemberReferenceToLambda,com.sun.tools.javac.comp.LambdaToMethod$KlassInfo,com.sun.tools.javac.comp.LambdaToMethod$DedupedLambda,com.sun.tools.javac.comp.LambdaToMethod$1LambdaBodyTranslator"
};

$Object* allocate$LambdaToMethod($Class* clazz) {
	return $of($alloc(LambdaToMethod));
}

$Context$Key* LambdaToMethod::unlambdaKey = nullptr;

LambdaToMethod* LambdaToMethod::instance($Context* context) {
	$init(LambdaToMethod);
	$var(LambdaToMethod, instance, $cast(LambdaToMethod, $nc(context)->get(LambdaToMethod::unlambdaKey)));
	if (instance == nullptr) {
		$assign(instance, $new(LambdaToMethod, context));
	}
	return instance;
}

void LambdaToMethod::init$($Context* context) {
	$useLocalCurrentObjectStackCache();
	$TreeTranslator::init$();
	$nc(context)->put(LambdaToMethod::unlambdaKey, $of(this));
	$set(this, diags, $JCDiagnostic$Factory::instance(context));
	$set(this, log, $Log::instance(context));
	$set(this, lower, $Lower::instance(context));
	$set(this, names, $Names::instance(context));
	$set(this, syms, $Symtab::instance(context));
	$set(this, rs, $Resolve::instance(context));
	$set(this, operators, $Operators::instance(context));
	$set(this, make, $TreeMaker::instance(context));
	$set(this, types, $Types::instance(context));
	$set(this, transTypes, $TransTypes::instance(context));
	$set(this, analyzer, $new($LambdaToMethod$LambdaAnalyzerPreprocessor, this));
	$var($Options, options, $Options::instance(context));
	this->dumpLambdaToMethodStats = $nc(options)->isSet("debug.dumpLambdaToMethodStats"_s);
	$set(this, attr, $Attr::instance(context));
	this->forceSerializable = options->isSet("forceSerializable"_s);
	$init($Option);
	bool var$1 = options->isSet($Option::G);
	bool var$0 = var$1 || options->isSet($Option::G_CUSTOM, "lines"_s);
	this->debugLinesOrVars = var$0 || options->isSet($Option::G_CUSTOM, "vars"_s);
	this->verboseDeduplication = options->isSet("debug.dumpLambdaToMethodDeduplication"_s);
	this->deduplicateLambdas = options->getBoolean("deduplicateLambdas"_s, true);
	this->nestmateLambdas = $nc($($Target::instance(context)))->runtimeUseNestAccess();
}

$JCTree* LambdaToMethod::translate($JCTree* tree) {
	$var($LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext, newContext, $cast($LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext, $nc(this->contextMap)->get(tree)));
	return translate(tree, newContext != nullptr ? newContext : this->context);
}

$JCTree* LambdaToMethod::translate($JCTree* tree, $LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext* newContext) {
	$useLocalCurrentObjectStackCache();
	$var($LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext, prevContext, this->context);
	{
		$var($Throwable, var$0, nullptr);
		$var($JCTree, var$2, nullptr);
		bool return$1 = false;
		try {
			$set(this, context, newContext);
			$assign(var$2, $TreeTranslator::translate(tree));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$set(this, context, prevContext);
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

$List* LambdaToMethod::translate($List* trees, $LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext* newContext) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, buf, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(trees)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree, tree, $cast($JCTree, i$->next()));
			{
				buf->append($(translate(tree, newContext)));
			}
		}
	}
	return buf->toList();
}

$JCTree* LambdaToMethod::translateTopLevelClass($Env* env, $JCTree* cdef, $TreeMaker* make) {
	$set(this, make, make);
	$set(this, attrEnv, env);
	$set(this, context, nullptr);
	$set(this, contextMap, $new($HashMap));
	return translate(cdef);
}

void LambdaToMethod::visitClassDef($JCTree$JCClassDecl* tree$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCClassDecl, tree, tree$renamed);
	$init($Kinds$Kind);
	if ($nc($nc($nc(tree)->sym)->owner)->kind == $Kinds$Kind::PCK) {
		$assign(tree, $nc(this->analyzer)->analyzeAndPreprocessClass(tree));
	}
	$var($LambdaToMethod$KlassInfo, prevKlassInfo, this->kInfo);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this, kInfo, $new($LambdaToMethod$KlassInfo, this, tree));
			$TreeTranslator::visitClassDef(tree);
			if (!$nc($nc(this->kInfo)->deserializeCases)->isEmpty()) {
				int32_t prevPos = $nc(this->make)->pos;
				{
					$var($Throwable, var$1, nullptr);
					try {
						$nc(this->make)->at(static_cast<$JCDiagnostic$DiagnosticPosition*>(tree));
						$nc(this->kInfo)->addMethod($(makeDeserializeMethod($nc(tree)->sym)));
					} catch ($Throwable& var$2) {
						$assign(var$1, var$2);
					} /*finally*/ {
						$nc(this->make)->at(prevPos);
					}
					if (var$1 != nullptr) {
						$throw(var$1);
					}
				}
			}
			$var($List, newMethods, $nc($nc(this->kInfo)->appendedMethodList)->toList());
			$set($nc(tree), defs, $nc(tree->defs)->appendList(newMethods));
			{
				$var($Iterator, i$, $nc(newMethods)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($JCTree, lambda, $cast($JCTree, i$->next()));
					{
						$nc($($nc(tree->sym)->members()))->enter($nc(($cast($JCTree$JCMethodDecl, lambda)))->sym);
					}
				}
			}
			$set(this, result, tree);
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			$set(this, kInfo, prevKlassInfo);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void LambdaToMethod::visitLambda($JCTree$JCLambda* tree) {
	$useLocalCurrentObjectStackCache();
	$var($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, localContext, $cast($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, this->context));
	$var($Symbol$MethodSymbol, sym, $nc(localContext)->translatedSym);
	$var($Type$MethodType, lambdaType, $cast($Type$MethodType, $nc(sym)->type));
	{
		$var($Symbol, owner, localContext->owner);
		$var($JCTree$JCLambda, var$0, tree);
		$var($Supplier, var$1, static_cast<$Supplier*>($new(LambdaToMethod$$Lambda$getRawTypeAttributes, static_cast<$Symbol*>($nc(owner)))));
		$var($Consumer, var$2, static_cast<$Consumer*>($new(LambdaToMethod$$Lambda$setTypeAttributes$1, static_cast<$Symbol*>(owner))));
		apportionTypeAnnotations(var$0, var$1, var$2, static_cast<$Consumer*>($$new(LambdaToMethod$$Lambda$setTypeAttributes$1, static_cast<$Symbol$MethodSymbol*>(sym))));
		bool init = false;
		if ((init = ($nc(owner)->name == $nc(this->names)->init)) || $nc(owner)->name == $nc(this->names)->clinit) {
			$assign(owner, owner->owner);
			$var($JCTree$JCLambda, var$3, tree);
			$var($Supplier, var$4, init ? static_cast<$Supplier*>($new(LambdaToMethod$$Lambda$getInitTypeAttributes$2, static_cast<$Symbol*>($nc(owner)))) : static_cast<$Supplier*>($new(LambdaToMethod$$Lambda$getClassInitTypeAttributes$3, static_cast<$Symbol*>(owner))));
			$var($Consumer, var$5, init ? static_cast<$Consumer*>($new(LambdaToMethod$$Lambda$setInitTypeAttributes$4, static_cast<$Symbol*>(owner))) : static_cast<$Consumer*>($new(LambdaToMethod$$Lambda$setClassInitTypeAttributes$5, static_cast<$Symbol*>(owner))));
			apportionTypeAnnotations(var$3, var$4, var$5, static_cast<$Consumer*>($$new(LambdaToMethod$$Lambda$appendUniqueTypeAttributes$6, static_cast<$Symbol$MethodSymbol*>(sym))));
		}
		$init($ElementKind);
		if (localContext->self != nullptr && $nc(localContext->self)->getKind() == $ElementKind::FIELD) {
			$assign(owner, localContext->self);
			$var($JCTree$JCLambda, var$6, tree);
			$var($Supplier, var$7, static_cast<$Supplier*>($new(LambdaToMethod$$Lambda$getRawTypeAttributes, static_cast<$Symbol*>($nc(owner)))));
			$var($Consumer, var$8, static_cast<$Consumer*>($new(LambdaToMethod$$Lambda$setTypeAttributes$1, static_cast<$Symbol*>(owner))));
			apportionTypeAnnotations(var$6, var$7, var$8, static_cast<$Consumer*>($$new(LambdaToMethod$$Lambda$appendUniqueTypeAttributes$6, static_cast<$Symbol$MethodSymbol*>(sym))));
		}
	}
	$var($JCTree$JCModifiers, var$9, $nc(this->make)->Modifiers(sym->flags_field));
	$var($Name, var$10, sym->name);
	$var($JCTree$JCExpression, var$11, $nc(this->make)->QualIdent($nc($($nc(lambdaType)->getReturnType()))->tsym));
	$var($List, var$12, $List::nil());
	$var($List, var$13, localContext->syntheticParams);
	$var($JCTree$JCMethodDecl, lambdaDecl, $nc(this->make)->MethodDef(var$9, var$10, var$11, var$12, var$13, $nc(lambdaType)->getThrownTypes() == nullptr ? $($List::nil()) : $($nc(this->make)->Types($($nc(lambdaType)->getThrownTypes()))), nullptr, nullptr));
	$set($nc(lambdaDecl), sym, sym);
	$set(lambdaDecl, type, lambdaType);
	$set(lambdaDecl, body, $cast($JCTree$JCBlock, translate($(static_cast<$JCTree*>(makeLambdaBody(tree, lambdaDecl))))));
	bool dedupe = false;
	if (this->deduplicateLambdas && !this->debugLinesOrVars && !localContext->isSerializable()) {
		$var($LambdaToMethod$DedupedLambda, dedupedLambda, $new($LambdaToMethod$DedupedLambda, this, lambdaDecl->sym, lambdaDecl->body));
		$var($LambdaToMethod$DedupedLambda, existing, $cast($LambdaToMethod$DedupedLambda, $nc($nc(this->kInfo)->dedupedLambdas)->putIfAbsent(dedupedLambda, dedupedLambda)));
		if (existing != nullptr) {
			$assign(sym, existing->symbol);
			dedupe = true;
			if (this->verboseDeduplication) {
				$nc(this->log)->note(static_cast<$JCDiagnostic$DiagnosticPosition*>(tree), $($CompilerProperties$Notes::VerboseL2mDeduplicate(sym)));
			}
		}
	}
	if (!dedupe) {
		$nc(this->kInfo)->addMethod(lambdaDecl);
	}
	$var($ListBuffer, syntheticInits, $new($ListBuffer));
	if (localContext->methodReferenceReceiver != nullptr) {
		syntheticInits->append(localContext->methodReferenceReceiver);
	} else if (!sym->isStatic()) {
		$var($Type, var$14, $cast($Type, $nc($($nc(sym->owner)->enclClass()))->asType()));
		syntheticInits->append($(makeThis(var$14, $($nc(localContext->owner)->enclClass()))));
	}
	{
		$init($LambdaToMethod$LambdaSymbolKind);
		$var($Iterator, i$, $nc($($nc($(localContext->getSymbolMap($LambdaToMethod$LambdaSymbolKind::CAPTURED_VAR)))->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, fv, $cast($Symbol, i$->next()));
			{
				if (fv != localContext->self) {
					$var($JCTree, captured_local, $nc($($nc(this->make)->Ident(fv)))->setType($nc(fv)->type));
					syntheticInits->append($cast($JCTree$JCExpression, captured_local));
				}
			}
		}
	}
	{
		$init($LambdaToMethod$LambdaSymbolKind);
		$var($Iterator, i$, $nc($($nc($(localContext->getSymbolMap($LambdaToMethod$LambdaSymbolKind::CAPTURED_OUTER_THIS)))->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, fv, $cast($Symbol, i$->next()));
			{
				$var($JCTree, captured_local, $nc(this->make)->QualThis($nc(fv)->type));
				syntheticInits->append($cast($JCTree$JCExpression, captured_local));
			}
		}
	}
	$var($List, indy_args, translate($(syntheticInits->toList()), localContext->prev));
	$set(this, result, makeMetafactoryIndyCall(this->context, $(sym->asHandle()), indy_args));
}

void LambdaToMethod::apportionTypeAnnotations($JCTree$JCLambda* tree, $Supplier* source, $Consumer* owner, $Consumer* lambda) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, ownerTypeAnnos, $new($ListBuffer));
	$var($ListBuffer, lambdaTypeAnnos, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(($cast($List, $($nc(source)->get()))))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Attribute$TypeCompound, tc, $cast($Attribute$TypeCompound, i$->next()));
			{
				if ($nc($nc(tc)->position)->onLambda == tree) {
					lambdaTypeAnnos->append(tc);
				} else {
					ownerTypeAnnos->append(tc);
				}
			}
		}
	}
	if (lambdaTypeAnnos->nonEmpty()) {
		$nc(owner)->accept($(ownerTypeAnnos->toList()));
		$nc(lambda)->accept($(lambdaTypeAnnos->toList()));
	}
}

$JCTree$JCIdent* LambdaToMethod::makeThis($Type* type, $Symbol* owner) {
	$var($Symbol$VarSymbol, _this, $new($Symbol$VarSymbol, ((int64_t)0x0000000200000000 | 16) | 4096, $nc(this->names)->_this, type, owner));
	return $nc(this->make)->Ident(static_cast<$Symbol*>(_this));
}

void LambdaToMethod::visitReference($JCTree$JCMemberReference* tree) {
	$useLocalCurrentObjectStackCache();
	$var($LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext, localContext, $cast($LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext, this->context));
	$var($Symbol$MethodSymbol, refSym, $cast($Symbol$MethodSymbol, $nc(tree)->sym));
	$var($JCTree$JCExpression, init, nullptr);
	$init($LambdaToMethod$1);
	switch ($nc($LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$JCMemberReference$ReferenceKind)->get($nc((tree->kind))->ordinal())) {
	case 1:
		{}
	case 2:
		{
			$var($Type, var$0, $cast($Type, $nc($($nc($nc(localContext)->owner)->enclClass()))->asType()));
			$assign(init, makeThis(var$0, $($nc(localContext->owner)->enclClass())));
			break;
		}
	case 3:
		{
			$var($Env, var$1, this->attrEnv);
			$var($JCTree$JCExpression, var$2, $cast($JCTree$JCExpression, tree->getQualifierExpression()));
			$assign(init, $nc(this->transTypes)->coerce(var$1, var$2, $($nc(this->types)->erasure($nc($nc(tree->sym)->owner)->type))));
			$assign(init, $nc(this->attr)->makeNullCheck(init));
			break;
		}
	case 4:
		{}
	case 5:
		{}
	case 6:
		{}
	case 7:
		{
			$assign(init, nullptr);
			break;
		}
	default:
		{
			$throwNew($InternalError, "Should not have an invalid kind"_s);
		}
	}
	$var($List, indy_args, init == nullptr ? $List::nil() : translate($($List::of(init)), $nc(localContext)->prev));
	$set(this, result, makeMetafactoryIndyCall(localContext, $($nc(refSym)->asHandle()), indy_args));
}

void LambdaToMethod::visitIdent($JCTree$JCIdent* tree) {
	$useLocalCurrentObjectStackCache();
	if (this->context == nullptr || !$nc(this->analyzer)->lambdaIdentSymbolFilter($nc(tree)->sym)) {
		$TreeTranslator::visitIdent(tree);
	} else {
		int32_t prevPos = $nc(this->make)->pos;
		{
			$var($Throwable, var$0, nullptr);
			try {
				$nc(this->make)->at(static_cast<$JCDiagnostic$DiagnosticPosition*>(tree));
				$var($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, lambdaContext, $cast($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, this->context));
				$var($JCTree, ltree, $nc(lambdaContext)->translate(tree));
				if (ltree != nullptr) {
					$set(this, result, ltree);
				} else {
					$TreeTranslator::visitIdent(tree);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$nc(this->make)->at(prevPos);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void LambdaToMethod::visitSelect($JCTree$JCFieldAccess* tree) {
	$useLocalCurrentObjectStackCache();
	if (this->context == nullptr || !$nc(this->analyzer)->lambdaFieldAccessFilter(tree)) {
		$TreeTranslator::visitSelect(tree);
	} else {
		int32_t prevPos = $nc(this->make)->pos;
		{
			$var($Throwable, var$0, nullptr);
			try {
				$nc(this->make)->at(static_cast<$JCDiagnostic$DiagnosticPosition*>(tree));
				$var($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, lambdaContext, $cast($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, this->context));
				$var($JCTree, ltree, $nc(lambdaContext)->translate(tree));
				if (ltree != nullptr) {
					$set(this, result, ltree);
				} else {
					$TreeTranslator::visitSelect(tree);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$nc(this->make)->at(prevPos);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void LambdaToMethod::visitNewClass($JCTree$JCNewClass* tree$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCNewClass, tree, tree$renamed);
	if (this->context == nullptr || !$nc(this->analyzer)->lambdaNewClassFilter(this->context, tree)) {
		$TreeTranslator::visitNewClass(tree);
	} else {
		int32_t prevPos = $nc(this->make)->pos;
		{
			$var($Throwable, var$0, nullptr);
			try {
				$nc(this->make)->at(static_cast<$JCDiagnostic$DiagnosticPosition*>(tree));
				$var($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, lambdaContext, $cast($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, this->context));
				$assign(tree, $nc(lambdaContext)->translate(tree));
				$TreeTranslator::visitNewClass(tree);
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$nc(this->make)->at(prevPos);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void LambdaToMethod::visitVarDef($JCTree$JCVariableDecl* tree) {
	$useLocalCurrentObjectStackCache();
	$var($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, lambdaContext, $cast($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, this->context));
	$init($LambdaToMethod$LambdaSymbolKind);
	if (this->context != nullptr && $nc($($nc(lambdaContext)->getSymbolMap($LambdaToMethod$LambdaSymbolKind::LOCAL_VAR)))->containsKey($nc(tree)->sym)) {
		$set($nc(tree), init, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->init))));
		$set(tree, sym, $cast($Symbol$VarSymbol, $nc($(lambdaContext->getSymbolMap($LambdaToMethod$LambdaSymbolKind::LOCAL_VAR)))->get(tree->sym)));
		$set(this, result, tree);
	} else {
		$TreeTranslator::visitVarDef(tree);
	}
}

$JCTree$JCBlock* LambdaToMethod::makeLambdaBody($JCTree$JCLambda* tree, $JCTree$JCMethodDecl* lambdaMethodDecl) {
	$init($LambdaExpressionTree$BodyKind);
	return $nc(tree)->getBodyKind() == $LambdaExpressionTree$BodyKind::EXPRESSION ? makeLambdaExpressionBody($cast($JCTree$JCExpression, $nc(tree)->body), lambdaMethodDecl) : makeLambdaStatementBody($cast($JCTree$JCBlock, $nc(tree)->body), lambdaMethodDecl, tree->canCompleteNormally);
}

$JCTree$JCBlock* LambdaToMethod::makeLambdaExpressionBody($JCTree$JCExpression* expr, $JCTree$JCMethodDecl* lambdaMethodDecl) {
	$useLocalCurrentObjectStackCache();
	$var($Type, restype, $nc($nc(lambdaMethodDecl)->type)->getReturnType());
	$init($TypeTag);
	bool isLambda_void = $nc($nc(expr)->type)->hasTag($TypeTag::VOID);
	bool isTarget_void = $nc(restype)->hasTag($TypeTag::VOID);
	bool isTarget_Void = $nc(this->types)->isSameType(restype, $nc($($nc(this->types)->boxedClass($nc(this->syms)->voidType)))->type);
	int32_t prevPos = $nc(this->make)->pos;
	{
		$var($Throwable, var$0, nullptr);
		$var($JCTree$JCBlock, var$2, nullptr);
		bool return$1 = false;
		try {
			if (isTarget_void) {
				$var($JCTree$JCStatement, stat, $nc($($nc(this->make)->at(static_cast<$JCDiagnostic$DiagnosticPosition*>(expr))))->Exec(expr));
				$assign(var$2, $nc(this->make)->Block(0, $($List::of(stat))));
				return$1 = true;
				goto $finally;
			} else if (isLambda_void && isTarget_Void) {
				$var($ListBuffer, stats, $new($ListBuffer));
				stats->append($($nc($($nc(this->make)->at(static_cast<$JCDiagnostic$DiagnosticPosition*>(expr))))->Exec(expr)));
				stats->append($($nc(this->make)->Return($($nc($($nc(this->make)->Literal($TypeTag::BOT, nullptr)))->setType($nc(this->syms)->botType)))));
				$assign(var$2, $nc(this->make)->Block(0, $(stats->toList())));
				return$1 = true;
				goto $finally;
			} else {
				$assign(var$2, $nc($($nc(this->make)->at(static_cast<$JCDiagnostic$DiagnosticPosition*>(expr))))->Block(0, $($List::of($($nc(this->make)->Return(expr))))));
				return$1 = true;
				goto $finally;
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(this->make)->at(prevPos);
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

$JCTree$JCBlock* LambdaToMethod::makeLambdaStatementBody($JCTree$JCBlock* block, $JCTree$JCMethodDecl* lambdaMethodDecl, bool completeNormally) {
	$useLocalCurrentObjectStackCache();
	$var($Type, restype, $nc($nc(lambdaMethodDecl)->type)->getReturnType());
	$init($TypeTag);
	bool isTarget_void = $nc(restype)->hasTag($TypeTag::VOID);
	bool isTarget_Void = $nc(this->types)->isSameType(restype, $nc($($nc(this->types)->boxedClass($nc(this->syms)->voidType)))->type);
	{
	}
	$var($JCTree$JCBlock, trans_block, $cast($JCTree$JCBlock, $$new($LambdaToMethod$1LambdaBodyTranslator, this, isTarget_void, lambdaMethodDecl)->translate(static_cast<$JCTree*>(block))));
	if (completeNormally && isTarget_Void) {
		$set($nc(trans_block), stats, $nc(trans_block->stats)->append($($nc(this->make)->Return($($nc($($nc(this->make)->Literal($TypeTag::BOT, nullptr)))->setType($nc(this->syms)->botType))))));
	}
	return trans_block;
}

$JCTree$JCMethodDecl* LambdaToMethod::makeDeserializeMethod($Symbol* kSym) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, cases, $new($ListBuffer));
	$var($ListBuffer, breaks, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc($($nc($nc(this->kInfo)->deserializeCases)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$var($JCTree$JCBreak, br, $nc(this->make)->Break(nullptr));
				breaks->add(br);
				$var($List, stmts, $nc($($nc(($cast($ListBuffer, $($nc(entry)->getValue()))))->append(br)))->toList());
				$init($JCTree$JCCase);
				cases->add($($nc(this->make)->Case($JCTree$JCCase::STATEMENT, $($List::of($($nc(this->make)->Literal($(entry->getKey()))))), stmts, nullptr)));
			}
		}
	}
	$var($JCTree$JCExpression, var$0, deserGetter("getImplMethodName"_s, $nc(this->syms)->stringType));
	$var($JCTree$JCSwitch, sw, $nc(this->make)->Switch(var$0, $(cases->toList())));
	{
		$var($Iterator, i$, breaks->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree$JCBreak, br, $cast($JCTree$JCBreak, i$->next()));
			{
				$set($nc(br), target, sw);
			}
		}
	}
	$var($JCTree$JCBlock, body, $nc(this->make)->Block(0, $($List::of(sw, $($nc(this->make)->Throw($(makeNewClass($nc(this->syms)->illegalArgumentExceptionType, $($List::of($($nc(this->make)->Literal("Invalid lambda deserialization"_s))))))))))));
	$var($JCTree$JCModifiers, var$1, $nc(this->make)->Modifiers($nc($nc(this->kInfo)->deserMethodSym)->flags()));
	$var($Name, var$2, $nc(this->names)->deserializeLambda);
	$var($JCTree$JCExpression, var$3, $nc(this->make)->QualIdent($nc($($nc($nc(this->kInfo)->deserMethodSym)->getReturnType()))->tsym));
	$var($List, var$4, $List::nil());
	$var($List, var$5, $List::of($($nc(this->make)->VarDef($nc(this->kInfo)->deserParamSym, nullptr))));
	$var($JCTree$JCMethodDecl, deser, $nc(this->make)->MethodDef(var$1, var$2, var$3, var$4, var$5, $($List::nil()), body, nullptr));
	$set($nc(deser), sym, $nc(this->kInfo)->deserMethodSym);
	$set(deser, type, $nc($nc(this->kInfo)->deserMethodSym)->type);
	return deser;
}

$JCTree$JCNewClass* LambdaToMethod::makeNewClass($Type* ctype, $List* args, $Symbol* cons) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCNewClass, tree, $nc(this->make)->NewClass(nullptr, nullptr, $($nc(this->make)->QualIdent($nc(ctype)->tsym)), args, nullptr));
	$set($nc(tree), constructor, cons);
	$set(tree, type, ctype);
	return tree;
}

$JCTree$JCNewClass* LambdaToMethod::makeNewClass($Type* ctype, $List* args) {
	$useLocalCurrentObjectStackCache();
	$var($Env, var$0, this->attrEnv);
	$var($Type, var$1, ctype);
	$var($List, var$2, $TreeInfo::types(args));
	return makeNewClass(ctype, args, $($nc(this->rs)->resolveConstructor(nullptr, var$0, var$1, var$2, $($List::nil()))));
}

void LambdaToMethod::addDeserializationCase($Symbol$MethodHandleSymbol* refSym, $Type* targetType, $Symbol$MethodSymbol* samSym, $JCDiagnostic$DiagnosticPosition* pos, $List* staticArgs, $Type$MethodType* indyType) {
	$useLocalCurrentObjectStackCache();
	$var($String, functionalInterfaceClass, classSig(targetType));
	$var($String, functionalInterfaceMethodName, $nc($($cast($Name, $nc(samSym)->getSimpleName())))->toString());
	$var($String, functionalInterfaceMethodSignature, typeSig($($nc(this->types)->erasure(samSym->type))));
	$var($String, implClass, classSig($($nc(this->types)->erasure($nc($nc(refSym)->owner)->type))));
	$var($String, implMethodName, $nc($($nc(refSym)->getQualifiedName()))->toString());
	$var($String, implMethodSignature, typeSig($($nc(this->types)->erasure(refSym->type))));
	$var($Type, var$0, static_cast<$Type*>($nc(this->syms)->intType));
	$var($JCTree$JCExpression, var$1, deserGetter("getImplMethodKind"_s, $nc(this->syms)->intType));
	$var($JCTree$JCExpression, kindTest, eqTest(var$0, var$1, $($nc(this->make)->Literal($($Integer::valueOf(refSym->referenceKind()))))));
	$var($ListBuffer, serArgs, $new($ListBuffer));
	int32_t i = 0;
	{
		$var($Iterator, i$, $nc($($nc(indyType)->getParameterTypes()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				$var($List, indexAsArg, $nc($($$new($ListBuffer)->append($($nc(this->make)->Literal($($Integer::valueOf(i)))))))->toList());
				$var($List, argTypes, $nc($($$new($ListBuffer)->append($nc(this->syms)->intType)))->toList());
				$var($Type, var$2, $nc(this->types)->erasure(t));
				serArgs->add($($nc(this->make)->TypeCast(var$2, $(deserGetter("getCapturedArg"_s, $nc(this->syms)->objectType, argTypes, indexAsArg)))));
				++i;
			}
		}
	}
	$var($JCTree$JCExpression, var$3, deserTest($(deserTest($(deserTest($(deserTest($(deserTest(kindTest, "getFunctionalInterfaceClass"_s, functionalInterfaceClass)), "getFunctionalInterfaceMethodName"_s, functionalInterfaceMethodName)), "getFunctionalInterfaceMethodSignature"_s, functionalInterfaceMethodSignature)), "getImplClass"_s, implClass)), "getImplMethodSignature"_s, implMethodSignature));
	$var($JCTree$JCStatement, stmt, $nc(this->make)->If(var$3, $($nc(this->make)->Return($(makeIndyCall(pos, $nc(this->syms)->lambdaMetafactory, $nc(this->names)->altMetafactory, staticArgs, indyType, $(serArgs->toList()), samSym->name)))), nullptr));
	$var($ListBuffer, stmts, $cast($ListBuffer, $nc($nc(this->kInfo)->deserializeCases)->get(implMethodName)));
	if (stmts == nullptr) {
		$assign(stmts, $new($ListBuffer));
		$nc($nc(this->kInfo)->deserializeCases)->put(implMethodName, stmts);
	}
	$nc(stmts)->append(stmt);
}

$JCTree$JCExpression* LambdaToMethod::eqTest($Type* argType, $JCTree$JCExpression* arg1, $JCTree$JCExpression* arg2) {
	$init($JCTree$Tag);
	$var($JCTree$JCBinary, testExpr, $nc(this->make)->Binary($JCTree$Tag::EQ, arg1, arg2));
	$set($nc(testExpr), operator$, $nc(this->operators)->resolveBinary(testExpr, $JCTree$Tag::EQ, argType, argType));
	testExpr->setType($nc(this->syms)->booleanType);
	return testExpr;
}

$JCTree$JCExpression* LambdaToMethod::deserTest($JCTree$JCExpression* prev, $String* func, $String* lit) {
	$useLocalCurrentObjectStackCache();
	$var($List, var$0, $List::of($nc(this->syms)->objectType));
	$var($Type, var$1, static_cast<$Type*>($nc(this->syms)->booleanType));
	$var($Type$MethodType, eqmt, $new($Type$MethodType, var$0, var$1, $($List::nil()), $nc(this->syms)->methodClass));
	$var($Env, var$2, this->attrEnv);
	$var($Type, var$3, $nc(this->syms)->objectType);
	$var($Name, var$4, $nc(this->names)->equals$);
	$var($List, var$5, $List::of($nc(this->syms)->objectType));
	$var($Symbol, eqsym, $nc(this->rs)->resolveQualifiedMethod(nullptr, var$2, var$3, var$4, var$5, $($List::nil())));
	$var($List, var$6, $List::nil());
	$var($JCTree$JCExpression, var$7, $nc($($nc(this->make)->Select($(deserGetter(func, $nc(this->syms)->stringType)), eqsym)))->setType(eqmt));
	$var($JCTree$JCMethodInvocation, eqtest, $nc(this->make)->Apply(var$6, var$7, $($List::of($($nc(this->make)->Literal(lit))))));
	$nc(eqtest)->setType($nc(this->syms)->booleanType);
	$init($JCTree$Tag);
	$var($JCTree$JCBinary, compound, $nc(this->make)->Binary($JCTree$Tag::AND, prev, eqtest));
	$set($nc(compound), operator$, $nc(this->operators)->resolveBinary(compound, $JCTree$Tag::AND, $nc(this->syms)->booleanType, $nc(this->syms)->booleanType));
	compound->setType($nc(this->syms)->booleanType);
	return compound;
}

$JCTree$JCExpression* LambdaToMethod::deserGetter($String* func, $Type* type) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, func);
	$var($Type, var$1, type);
	$var($List, var$2, $List::nil());
	return deserGetter(var$0, var$1, var$2, $($List::nil()));
}

$JCTree$JCExpression* LambdaToMethod::deserGetter($String* func, $Type* type, $List* argTypes, $List* args) {
	$useLocalCurrentObjectStackCache();
	$var($Type$MethodType, getmt, $new($Type$MethodType, argTypes, type, $($List::nil()), $nc(this->syms)->methodClass));
	$var($Env, var$0, this->attrEnv);
	$var($Type, var$1, $nc(this->syms)->serializedLambdaType);
	$var($Name, var$2, $nc(this->names)->fromString(func));
	$var($List, var$3, argTypes);
	$var($Symbol, getsym, $nc(this->rs)->resolveQualifiedMethod(nullptr, var$0, var$1, var$2, var$3, $($List::nil())));
	$var($List, var$4, $List::nil());
	return $nc($($nc(this->make)->Apply(var$4, $($nc($($nc(this->make)->Select($($nc($($nc(this->make)->Ident(static_cast<$Symbol*>($nc(this->kInfo)->deserParamSym))))->setType($nc(this->syms)->serializedLambdaType)), getsym)))->setType(getmt)), args)))->setType(type);
}

$Symbol$MethodSymbol* LambdaToMethod::makePrivateSyntheticMethod(int64_t flags, $Name* name, $Type* type, $Symbol* owner) {
	return $new($Symbol$MethodSymbol, (flags | 4096) | 2, name, type, owner);
}

$Symbol$VarSymbol* LambdaToMethod::makeSyntheticVar(int64_t flags, $Name* name, $Type* type, $Symbol* owner) {
	return $new($Symbol$VarSymbol, flags | 4096, name, type, owner);
}

void LambdaToMethod::setVarargsIfNeeded($JCTree* tree, $Type* varargsElement) {
	if (varargsElement != nullptr) {
		$init($LambdaToMethod$1);
		switch ($nc($LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(tree)->getTag())))->ordinal())) {
		case 1:
			{
				$set($nc($cast($JCTree$JCMethodInvocation, tree)), varargsElement, varargsElement);
				break;
			}
		case 2:
			{
				$set($nc($cast($JCTree$JCNewClass, tree)), varargsElement, varargsElement);
				break;
			}
		case 3:
			{
				setVarargsIfNeeded($nc(($cast($JCTree$JCTypeCast, tree)))->expr, varargsElement);
				break;
			}
		default:
			{
				$throwNew($AssertionError);
			}
		}
	}
}

$List* LambdaToMethod::convertArgs($Symbol* meth, $List* args, $Type* varargsElement) {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$Kind);
	$Assert::check($nc(meth)->kind == $Kinds$Kind::MTH);
	$var($List, formals, $nc($($nc(this->types)->erasure($nc(meth)->type)))->getParameterTypes());
	if (varargsElement != nullptr) {
		$Assert::check(((int64_t)($nc(meth)->flags() & (uint64_t)(int64_t)0x0000000400000000)) != 0);
	}
	return $nc(this->transTypes)->translateArgs(args, formals, varargsElement, this->attrEnv);
}

$Type$MethodType* LambdaToMethod::typeToMethodType($Type* mt) {
	$useLocalCurrentObjectStackCache();
	$var($Type, type, $nc(this->types)->erasure(mt));
	$var($List, var$0, $nc(type)->getParameterTypes());
	$var($Type, var$1, type->getReturnType());
	return $new($Type$MethodType, var$0, var$1, $(type->getThrownTypes()), $nc(this->syms)->methodClass);
}

$JCTree$JCExpression* LambdaToMethod::makeMetafactoryIndyCall($LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext* context, $Symbol$MethodHandleSymbol* refSym, $List* indy_args) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCFunctionalExpression, tree, $nc(context)->tree);
	$var($Symbol$MethodSymbol, samSym, $cast($Symbol$MethodSymbol, $nc(this->types)->findDescriptorSymbol($nc($nc(tree)->target)->tsym)));
	$var($Object, var$0, $of(typeToMethodType($nc(samSym)->type)));
	$var($Object, var$1, $of($nc(refSym)->asHandle()));
	$var($List, staticArgs, $List::of(var$0, var$1, $(typeToMethodType($($nc(tree)->getDescriptorType(this->types))))));
	$var($ListBuffer, indy_args_types, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(indy_args)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree$JCExpression, arg, $cast($JCTree$JCExpression, i$->next()));
			{
				indy_args_types->append($nc(arg)->type);
			}
		}
	}
	$var($List, var$2, indy_args_types->toList());
	$var($Type, var$3, $nc(tree)->type);
	$var($Type$MethodType, indyType, $new($Type$MethodType, var$2, var$3, $($List::nil()), $nc(this->syms)->methodClass));
	$var($Name, metafactoryName, context->needsAltMetafactory() ? $nc(this->names)->altMetafactory : $nc(this->names)->metafactory);
	if (context->needsAltMetafactory()) {
		$var($ListBuffer, markers, $new($ListBuffer));
		$var($List, targets, $nc($nc(tree)->target)->isIntersection() ? $nc(this->types)->directSupertypes($nc(tree)->target) : $List::nil());
		{
			$var($Iterator, i$, $nc(targets)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, t, $cast($Type, i$->next()));
				{
					$assign(t, $nc(this->types)->erasure(t));
					if ($nc(t)->tsym != $nc($nc(this->syms)->serializableType)->tsym && t->tsym != $nc($nc(tree)->type)->tsym && t->tsym != $nc($nc(this->syms)->objectType)->tsym) {
						markers->append(t);
					}
				}
			}
		}
		int32_t flags = context->isSerializable() ? LambdaToMethod::FLAG_SERIALIZABLE : 0;
		bool hasMarkers = markers->nonEmpty();
		bool hasBridges = $nc(context->bridges)->nonEmpty();
		if (hasMarkers) {
			flags |= LambdaToMethod::FLAG_MARKERS;
		}
		if (hasBridges) {
			flags |= LambdaToMethod::FLAG_BRIDGES;
		}
		$assign(staticArgs, $nc(staticArgs)->append($($PoolConstant$LoadableConstant::Int(flags))));
		if (hasMarkers) {
			$assign(staticArgs, staticArgs->append($($PoolConstant$LoadableConstant::Int(markers->length()))));
			$assign(staticArgs, $nc(staticArgs)->appendList($($List::convert($PoolConstant$LoadableConstant::class$, $(markers->toList())))));
		}
		if (hasBridges) {
			$assign(staticArgs, staticArgs->append($($PoolConstant$LoadableConstant::Int($nc(context->bridges)->length() - 1))));
			{
				$var($Iterator, i$, $nc(context->bridges)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Symbol, s, $cast($Symbol, i$->next()));
					{
						$var($Type, s_erasure, $nc(s)->erasure(this->types));
						if (!$nc(this->types)->isSameType(s_erasure, $($nc(samSym)->erasure(this->types)))) {
							$assign(staticArgs, $nc(staticArgs)->append(($cast($Type$MethodType, $(s->erasure(this->types))))));
						}
					}
				}
			}
		}
		if (context->isSerializable()) {
			int32_t prevPos = $nc(this->make)->pos;
			{
				$var($Throwable, var$4, nullptr);
				try {
					$nc(this->make)->at(static_cast<$JCDiagnostic$DiagnosticPosition*>($nc(this->kInfo)->clazz));
					addDeserializationCase(refSym, $nc(tree)->type, samSym, tree, staticArgs, indyType);
				} catch ($Throwable& var$5) {
					$assign(var$4, var$5);
				} /*finally*/ {
					$nc(this->make)->at(prevPos);
				}
				if (var$4 != nullptr) {
					$throw(var$4);
				}
			}
		}
	}
	return makeIndyCall(tree, $nc(this->syms)->lambdaMetafactory, metafactoryName, staticArgs, indyType, indy_args, $nc(samSym)->name);
}

$JCTree$JCExpression* LambdaToMethod::makeIndyCall($JCDiagnostic$DiagnosticPosition* pos, $Type* site, $Name* bsmName, $List* staticArgs, $Type$MethodType* indyType, $List* indyArgs, $Name* methName) {
	$useLocalCurrentObjectStackCache();
	int32_t prevPos = $nc(this->make)->pos;
	{
		$var($Throwable, var$0, nullptr);
		$var($JCTree$JCExpression, var$2, nullptr);
		bool return$1 = false;
		try {
			$nc(this->make)->at(pos);
			$var($List, bsm_staticArgs, $nc($($List::of($nc(this->syms)->methodHandleLookupType, $nc(this->syms)->stringType, $nc(this->syms)->methodTypeType)))->appendList($($nc(staticArgs)->map(static_cast<$Function*>($$new(LambdaToMethod$$Lambda$constantType$7, static_cast<$Types*>($nc(this->types))))))));
			$var($Symbol, bsm, $nc(this->rs)->resolveInternalMethod(pos, this->attrEnv, site, bsmName, bsm_staticArgs, $($List::nil())));
			$var($Name, var$3, methName);
			$var($Symbol, var$4, static_cast<$Symbol*>($nc(this->syms)->noSymbol));
			$var($Symbol$MethodHandleSymbol, var$5, $nc(($cast($Symbol$MethodSymbol, bsm)))->asHandle());
			$var($Type, var$6, static_cast<$Type*>(indyType));
			$var($Symbol$DynamicMethodSymbol, dynSym, $new($Symbol$DynamicMethodSymbol, var$3, var$4, var$5, var$6, $fcast($PoolConstant$LoadableConstantArray, $($nc(staticArgs)->toArray($$new($PoolConstant$LoadableConstantArray, staticArgs->length()))))));
			$var($JCTree$JCFieldAccess, qualifier, $nc(this->make)->Select($($nc(this->make)->QualIdent($nc(site)->tsym)), bsmName));
			$var($Symbol$DynamicMethodSymbol, existing, $cast($Symbol$DynamicMethodSymbol, $nc($nc(this->kInfo)->dynMethSyms)->putIfAbsent($(dynSym->poolKey(this->types)), dynSym)));
			$set($nc(qualifier), sym, existing != nullptr ? static_cast<$Symbol*>(existing) : static_cast<$Symbol*>(dynSym));
			$set(qualifier, type, $nc(indyType)->getReturnType());
			$var($JCTree$JCMethodInvocation, proxyCall, $nc(this->make)->Apply($($List::nil()), qualifier, indyArgs));
			$set($nc(proxyCall), type, indyType->getReturnType());
			$assign(var$2, proxyCall);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$7) {
			$assign(var$0, var$7);
		} $finally: {
			$nc(this->make)->at(prevPos);
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

$String* LambdaToMethod::typeSig($Type* type) {
	return typeSig(type, false);
}

$String* LambdaToMethod::typeSig($Type* type, bool allowIllegalSignature) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($LambdaToMethod$L2MSignatureGenerator, sg, $new($LambdaToMethod$L2MSignatureGenerator, this, allowIllegalSignature));
		sg->assembleSig(type);
		return sg->toString();
	} catch ($Types$SignatureGenerator$InvalidSignatureException& ex) {
		$var($Symbol, c, $nc($nc(this->attrEnv)->enclClass)->sym);
		$nc(this->log)->error($($CompilerProperties$Errors::CannotGenerateClass(c, $($CompilerProperties$Fragments::IllegalSignature(c, $(ex->type()))))));
		return "<ERRONEOUS>"_s;
	}
	$shouldNotReachHere();
}

$String* LambdaToMethod::classSig($Type* type) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($LambdaToMethod$L2MSignatureGenerator, sg, $new($LambdaToMethod$L2MSignatureGenerator, this, false));
		sg->assembleClassSig(type);
		return sg->toString();
	} catch ($Types$SignatureGenerator$InvalidSignatureException& ex) {
		$var($Symbol, c, $nc($nc(this->attrEnv)->enclClass)->sym);
		$nc(this->log)->error($($CompilerProperties$Errors::CannotGenerateClass(c, $($CompilerProperties$Fragments::IllegalSignature(c, $(ex->type()))))));
		return "<ERRONEOUS>"_s;
	}
	$shouldNotReachHere();
}

bool LambdaToMethod::isProtectedInSuperClassOfEnclosingClassInOtherPackage($Symbol* targetReference, $Symbol* currentClass) {
	bool var$0 = ((int64_t)($nc(targetReference)->flags() & (uint64_t)(int64_t)4)) != 0;
	if (var$0) {
		var$0 = targetReference->packge() != $nc(currentClass)->packge();
	}
	return (var$0);
}

void clinit$LambdaToMethod($Class* class$) {
	$assignStatic(LambdaToMethod::unlambdaKey, $new($Context$Key));
}

LambdaToMethod::LambdaToMethod() {
}

$Class* LambdaToMethod::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(LambdaToMethod$$Lambda$getRawTypeAttributes::classInfo$.name)) {
			return LambdaToMethod$$Lambda$getRawTypeAttributes::load$(name, initialize);
		}
		if (name->equals(LambdaToMethod$$Lambda$setTypeAttributes$1::classInfo$.name)) {
			return LambdaToMethod$$Lambda$setTypeAttributes$1::load$(name, initialize);
		}
		if (name->equals(LambdaToMethod$$Lambda$getInitTypeAttributes$2::classInfo$.name)) {
			return LambdaToMethod$$Lambda$getInitTypeAttributes$2::load$(name, initialize);
		}
		if (name->equals(LambdaToMethod$$Lambda$getClassInitTypeAttributes$3::classInfo$.name)) {
			return LambdaToMethod$$Lambda$getClassInitTypeAttributes$3::load$(name, initialize);
		}
		if (name->equals(LambdaToMethod$$Lambda$setInitTypeAttributes$4::classInfo$.name)) {
			return LambdaToMethod$$Lambda$setInitTypeAttributes$4::load$(name, initialize);
		}
		if (name->equals(LambdaToMethod$$Lambda$setClassInitTypeAttributes$5::classInfo$.name)) {
			return LambdaToMethod$$Lambda$setClassInitTypeAttributes$5::load$(name, initialize);
		}
		if (name->equals(LambdaToMethod$$Lambda$appendUniqueTypeAttributes$6::classInfo$.name)) {
			return LambdaToMethod$$Lambda$appendUniqueTypeAttributes$6::load$(name, initialize);
		}
		if (name->equals(LambdaToMethod$$Lambda$constantType$7::classInfo$.name)) {
			return LambdaToMethod$$Lambda$constantType$7::load$(name, initialize);
		}
	}
	$loadClass(LambdaToMethod, name, initialize, &_LambdaToMethod_ClassInfo_, clinit$LambdaToMethod, allocate$LambdaToMethod);
	return class$;
}

$Class* LambdaToMethod::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com