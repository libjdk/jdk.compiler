#include <com/sun/tools/javac/comp/Annotate.h>

#include <com/sun/tools/javac/code/Attribute$Array.h>
#include <com/sun/tools/javac/code/Attribute$Class.h>
#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/Attribute$Constant.h>
#include <com/sun/tools/javac/code/Attribute$Enum.h>
#include <com/sun/tools/javac/code/Attribute$Error.h>
#include <com/sun/tools/javac/code/Attribute$TypeCompound.h>
#include <com/sun/tools/javac/code/Attribute$UnresolvedClass.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/DeferredLintHandler.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Kinds$KindName.h>
#include <com/sun/tools/javac/code/Kinds.h>
#include <com/sun/tools/javac/code/Lint.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Source$Feature.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$JCPrimitiveType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeAnnotationPosition.h>
#include <com/sun/tools/javac/code/TypeMetadata$Annotations.h>
#include <com/sun/tools/javac/code/TypeMetadata$Entry$Kind.h>
#include <com/sun/tools/javac/code/TypeMetadata$Entry.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Annotate$1.h>
#include <com/sun/tools/javac/comp/Annotate$2.h>
#include <com/sun/tools/javac/comp/Annotate$AnnotationContext.h>
#include <com/sun/tools/javac/comp/Annotate$AnnotationTypeCompleter.h>
#include <com/sun/tools/javac/comp/Annotate$AnnotationTypeMetadata.h>
#include <com/sun/tools/javac/comp/Annotate$AnnotationTypeVisitor.h>
#include <com/sun/tools/javac/comp/Annotate$AnnotationValueContext.h>
#include <com/sun/tools/javac/comp/Annotate$Queues.h>
#include <com/sun/tools/javac/comp/Annotate$TypeAnnotate.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/Check$NestedCheckContext.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/ConstFold.h>
#include <com/sun/tools/javac/comp/Enter.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/MemberEnter$InitTreeVisitor.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/comp/TypeEnvs.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/tree/JCTree$JCAnnotation.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssign.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewArray.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <java/io/Serializable.h>
#include <java/lang/Iterable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef ANNOTATION
#undef ANNOTATIONS
#undef ARRAY
#undef ASSIGN
#undef CLASS
#undef DEPRECATED
#undef DEPRECATED_ANNOTATION
#undef DEPRECATED_REMOVAL
#undef ENUM
#undef ERROR
#undef GENERATED_MEMBER
#undef IDENT
#undef MDL
#undef MTH
#undef NEWARRAY
#undef PCK
#undef PREVIEW_API
#undef PREVIEW_REFLECTIVE
#undef RECORD
#undef REPEATED_ANNOTATIONS
#undef SOURCE_LEVEL
#undef TYP
#undef VALUE_BASED
#undef VAR

using $AttributeArray = $Array<::com::sun::tools::javac::code::Attribute>;
using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Array = ::com::sun::tools::javac::code::Attribute$Array;
using $Attribute$Class = ::com::sun::tools::javac::code::Attribute$Class;
using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Attribute$Constant = ::com::sun::tools::javac::code::Attribute$Constant;
using $Attribute$Enum = ::com::sun::tools::javac::code::Attribute$Enum;
using $Attribute$Error = ::com::sun::tools::javac::code::Attribute$Error;
using $Attribute$TypeCompound = ::com::sun::tools::javac::code::Attribute$TypeCompound;
using $Attribute$UnresolvedClass = ::com::sun::tools::javac::code::Attribute$UnresolvedClass;
using $DeferredLintHandler = ::com::sun::tools::javac::code::DeferredLintHandler;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Kinds = ::com::sun::tools::javac::code::Kinds;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Kinds$KindName = ::com::sun::tools::javac::code::Kinds$KindName;
using $Lint = ::com::sun::tools::javac::code::Lint;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Source = ::com::sun::tools::javac::code::Source;
using $Source$Feature = ::com::sun::tools::javac::code::Source$Feature;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$JCPrimitiveType = ::com::sun::tools::javac::code::Type$JCPrimitiveType;
using $TypeAnnotationPosition = ::com::sun::tools::javac::code::TypeAnnotationPosition;
using $TypeMetadata$Annotations = ::com::sun::tools::javac::code::TypeMetadata$Annotations;
using $TypeMetadata$Entry = ::com::sun::tools::javac::code::TypeMetadata$Entry;
using $TypeMetadata$Entry$Kind = ::com::sun::tools::javac::code::TypeMetadata$Entry$Kind;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Annotate$1 = ::com::sun::tools::javac::comp::Annotate$1;
using $Annotate$2 = ::com::sun::tools::javac::comp::Annotate$2;
using $Annotate$AnnotationContext = ::com::sun::tools::javac::comp::Annotate$AnnotationContext;
using $Annotate$AnnotationTypeCompleter = ::com::sun::tools::javac::comp::Annotate$AnnotationTypeCompleter;
using $Annotate$AnnotationTypeMetadata = ::com::sun::tools::javac::comp::Annotate$AnnotationTypeMetadata;
using $Annotate$AnnotationTypeVisitor = ::com::sun::tools::javac::comp::Annotate$AnnotationTypeVisitor;
using $Annotate$AnnotationValueContext = ::com::sun::tools::javac::comp::Annotate$AnnotationValueContext;
using $Annotate$Queues = ::com::sun::tools::javac::comp::Annotate$Queues;
using $Annotate$TypeAnnotate = ::com::sun::tools::javac::comp::Annotate$TypeAnnotate;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $Check = ::com::sun::tools::javac::comp::Check;
using $Check$CheckContext = ::com::sun::tools::javac::comp::Check$CheckContext;
using $Check$NestedCheckContext = ::com::sun::tools::javac::comp::Check$NestedCheckContext;
using $ConstFold = ::com::sun::tools::javac::comp::ConstFold;
using $Enter = ::com::sun::tools::javac::comp::Enter;
using $Env = ::com::sun::tools::javac::comp::Env;
using $MemberEnter$InitTreeVisitor = ::com::sun::tools::javac::comp::MemberEnter$InitTreeVisitor;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $TypeEnvs = ::com::sun::tools::javac::comp::TypeEnvs;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCAnnotation = ::com::sun::tools::javac::tree::JCTree$JCAnnotation;
using $JCTree$JCAssign = ::com::sun::tools::javac::tree::JCTree$JCAssign;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCNewArray = ::com::sun::tools::javac::tree::JCTree$JCNewArray;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $JCDiagnostic$DiagnosticFlag = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractMap = ::java::util::AbstractMap;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map = ::java::util::Map;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Annotate$$Lambda$lambda$annotateLater$0 : public $Runnable {
	$class(Annotate$$Lambda$lambda$annotateLater$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(Annotate* inst, $Symbol* s, $Env* localEnv, $JCDiagnostic$DiagnosticPosition* deferPos, $List* annotations) {
		$set(this, inst$, inst);
		$set(this, s, s);
		$set(this, localEnv, localEnv);
		$set(this, deferPos, deferPos);
		$set(this, annotations, annotations);
	}
	virtual void run() override {
		$nc(inst$)->lambda$annotateLater$0(s, localEnv, deferPos, annotations);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Annotate$$Lambda$lambda$annotateLater$0>());
	}
	Annotate* inst$ = nullptr;
	$Symbol* s = nullptr;
	$Env* localEnv = nullptr;
	$JCDiagnostic$DiagnosticPosition* deferPos = nullptr;
	$List* annotations = nullptr;
	static $FieldInfo fieldInfos[6];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Annotate$$Lambda$lambda$annotateLater$0::fieldInfos[6] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Annotate$$Lambda$lambda$annotateLater$0, inst$)},
	{"s", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $field(Annotate$$Lambda$lambda$annotateLater$0, s)},
	{"localEnv", "Lcom/sun/tools/javac/comp/Env;", nullptr, $PUBLIC, $field(Annotate$$Lambda$lambda$annotateLater$0, localEnv)},
	{"deferPos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC, $field(Annotate$$Lambda$lambda$annotateLater$0, deferPos)},
	{"annotations", "Lcom/sun/tools/javac/util/List;", nullptr, $PUBLIC, $field(Annotate$$Lambda$lambda$annotateLater$0, annotations)},
	{}
};
$MethodInfo Annotate$$Lambda$lambda$annotateLater$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Annotate;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/List;)V", nullptr, $PUBLIC, $method(static_cast<void(Annotate$$Lambda$lambda$annotateLater$0::*)(Annotate*,$Symbol*,$Env*,$JCDiagnostic$DiagnosticPosition*,$List*)>(&Annotate$$Lambda$lambda$annotateLater$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Annotate$$Lambda$lambda$annotateLater$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Annotate$$Lambda$lambda$annotateLater$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* Annotate$$Lambda$lambda$annotateLater$0::load$($String* name, bool initialize) {
	$loadClass(Annotate$$Lambda$lambda$annotateLater$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Annotate$$Lambda$lambda$annotateLater$0::class$ = nullptr;

class Annotate$$Lambda$lambda$annotateLater$1$1 : public $Runnable {
	$class(Annotate$$Lambda$lambda$annotateLater$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$(Annotate* inst, $Env* localEnv, $List* annotations, $Symbol* s) {
		$set(this, inst$, inst);
		$set(this, localEnv, localEnv);
		$set(this, annotations, annotations);
		$set(this, s, s);
	}
	virtual void run() override {
		$nc(inst$)->lambda$annotateLater$1(localEnv, annotations, s);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Annotate$$Lambda$lambda$annotateLater$1$1>());
	}
	Annotate* inst$ = nullptr;
	$Env* localEnv = nullptr;
	$List* annotations = nullptr;
	$Symbol* s = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Annotate$$Lambda$lambda$annotateLater$1$1::fieldInfos[5] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Annotate$$Lambda$lambda$annotateLater$1$1, inst$)},
	{"localEnv", "Lcom/sun/tools/javac/comp/Env;", nullptr, $PUBLIC, $field(Annotate$$Lambda$lambda$annotateLater$1$1, localEnv)},
	{"annotations", "Lcom/sun/tools/javac/util/List;", nullptr, $PUBLIC, $field(Annotate$$Lambda$lambda$annotateLater$1$1, annotations)},
	{"s", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $field(Annotate$$Lambda$lambda$annotateLater$1$1, s)},
	{}
};
$MethodInfo Annotate$$Lambda$lambda$annotateLater$1$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Annotate;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Annotate$$Lambda$lambda$annotateLater$1$1::*)(Annotate*,$Env*,$List*,$Symbol*)>(&Annotate$$Lambda$lambda$annotateLater$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Annotate$$Lambda$lambda$annotateLater$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Annotate$$Lambda$lambda$annotateLater$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* Annotate$$Lambda$lambda$annotateLater$1$1::load$($String* name, bool initialize) {
	$loadClass(Annotate$$Lambda$lambda$annotateLater$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Annotate$$Lambda$lambda$annotateLater$1$1::class$ = nullptr;

class Annotate$$Lambda$lambda$annotateDefaultValueLater$2$2 : public $Runnable {
	$class(Annotate$$Lambda$lambda$annotateDefaultValueLater$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$(Annotate* inst, $Env* localEnv, $JCDiagnostic$DiagnosticPosition* deferPos, $JCTree$JCExpression* defaultValue, $Symbol$MethodSymbol* m) {
		$set(this, inst$, inst);
		$set(this, localEnv, localEnv);
		$set(this, deferPos, deferPos);
		$set(this, defaultValue, defaultValue);
		$set(this, m, m);
	}
	virtual void run() override {
		$nc(inst$)->lambda$annotateDefaultValueLater$2(localEnv, deferPos, defaultValue, m);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Annotate$$Lambda$lambda$annotateDefaultValueLater$2$2>());
	}
	Annotate* inst$ = nullptr;
	$Env* localEnv = nullptr;
	$JCDiagnostic$DiagnosticPosition* deferPos = nullptr;
	$JCTree$JCExpression* defaultValue = nullptr;
	$Symbol$MethodSymbol* m = nullptr;
	static $FieldInfo fieldInfos[6];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Annotate$$Lambda$lambda$annotateDefaultValueLater$2$2::fieldInfos[6] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Annotate$$Lambda$lambda$annotateDefaultValueLater$2$2, inst$)},
	{"localEnv", "Lcom/sun/tools/javac/comp/Env;", nullptr, $PUBLIC, $field(Annotate$$Lambda$lambda$annotateDefaultValueLater$2$2, localEnv)},
	{"deferPos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC, $field(Annotate$$Lambda$lambda$annotateDefaultValueLater$2$2, deferPos)},
	{"defaultValue", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(Annotate$$Lambda$lambda$annotateDefaultValueLater$2$2, defaultValue)},
	{"m", "Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, $PUBLIC, $field(Annotate$$Lambda$lambda$annotateDefaultValueLater$2$2, m)},
	{}
};
$MethodInfo Annotate$$Lambda$lambda$annotateDefaultValueLater$2$2::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Annotate;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Annotate$$Lambda$lambda$annotateDefaultValueLater$2$2::*)(Annotate*,$Env*,$JCDiagnostic$DiagnosticPosition*,$JCTree$JCExpression*,$Symbol$MethodSymbol*)>(&Annotate$$Lambda$lambda$annotateDefaultValueLater$2$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Annotate$$Lambda$lambda$annotateDefaultValueLater$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Annotate$$Lambda$lambda$annotateDefaultValueLater$2$2",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* Annotate$$Lambda$lambda$annotateDefaultValueLater$2$2::load$($String* name, bool initialize) {
	$loadClass(Annotate$$Lambda$lambda$annotateDefaultValueLater$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Annotate$$Lambda$lambda$annotateDefaultValueLater$2$2::class$ = nullptr;

class Annotate$$Lambda$lambda$annotateDefaultValueLater$3$3 : public $Runnable {
	$class(Annotate$$Lambda$lambda$annotateDefaultValueLater$3$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$(Annotate* inst, $Env* localEnv, $JCTree$JCExpression* defaultValue) {
		$set(this, inst$, inst);
		$set(this, localEnv, localEnv);
		$set(this, defaultValue, defaultValue);
	}
	virtual void run() override {
		$nc(inst$)->lambda$annotateDefaultValueLater$3(localEnv, defaultValue);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Annotate$$Lambda$lambda$annotateDefaultValueLater$3$3>());
	}
	Annotate* inst$ = nullptr;
	$Env* localEnv = nullptr;
	$JCTree$JCExpression* defaultValue = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Annotate$$Lambda$lambda$annotateDefaultValueLater$3$3::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Annotate$$Lambda$lambda$annotateDefaultValueLater$3$3, inst$)},
	{"localEnv", "Lcom/sun/tools/javac/comp/Env;", nullptr, $PUBLIC, $field(Annotate$$Lambda$lambda$annotateDefaultValueLater$3$3, localEnv)},
	{"defaultValue", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(Annotate$$Lambda$lambda$annotateDefaultValueLater$3$3, defaultValue)},
	{}
};
$MethodInfo Annotate$$Lambda$lambda$annotateDefaultValueLater$3$3::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Annotate;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)V", nullptr, $PUBLIC, $method(static_cast<void(Annotate$$Lambda$lambda$annotateDefaultValueLater$3$3::*)(Annotate*,$Env*,$JCTree$JCExpression*)>(&Annotate$$Lambda$lambda$annotateDefaultValueLater$3$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Annotate$$Lambda$lambda$annotateDefaultValueLater$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Annotate$$Lambda$lambda$annotateDefaultValueLater$3$3",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* Annotate$$Lambda$lambda$annotateDefaultValueLater$3$3::load$($String* name, bool initialize) {
	$loadClass(Annotate$$Lambda$lambda$annotateDefaultValueLater$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Annotate$$Lambda$lambda$annotateDefaultValueLater$3$3::class$ = nullptr;

class Annotate$$Lambda$lambda$queueScanTreeAndTypeAnnotate$4$4 : public $Runnable {
	$class(Annotate$$Lambda$lambda$queueScanTreeAndTypeAnnotate$4$4, $NO_CLASS_INIT, $Runnable)
public:
	void init$(Annotate* inst, $JCTree* tree, $Env* env, $Symbol* sym, $JCDiagnostic$DiagnosticPosition* deferPos) {
		$set(this, inst$, inst);
		$set(this, tree, tree);
		$set(this, env, env);
		$set(this, sym, sym);
		$set(this, deferPos, deferPos);
	}
	virtual void run() override {
		$nc(inst$)->lambda$queueScanTreeAndTypeAnnotate$4(tree, env, sym, deferPos);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Annotate$$Lambda$lambda$queueScanTreeAndTypeAnnotate$4$4>());
	}
	Annotate* inst$ = nullptr;
	$JCTree* tree = nullptr;
	$Env* env = nullptr;
	$Symbol* sym = nullptr;
	$JCDiagnostic$DiagnosticPosition* deferPos = nullptr;
	static $FieldInfo fieldInfos[6];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Annotate$$Lambda$lambda$queueScanTreeAndTypeAnnotate$4$4::fieldInfos[6] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Annotate$$Lambda$lambda$queueScanTreeAndTypeAnnotate$4$4, inst$)},
	{"tree", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC, $field(Annotate$$Lambda$lambda$queueScanTreeAndTypeAnnotate$4$4, tree)},
	{"env", "Lcom/sun/tools/javac/comp/Env;", nullptr, $PUBLIC, $field(Annotate$$Lambda$lambda$queueScanTreeAndTypeAnnotate$4$4, env)},
	{"sym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $field(Annotate$$Lambda$lambda$queueScanTreeAndTypeAnnotate$4$4, sym)},
	{"deferPos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC, $field(Annotate$$Lambda$lambda$queueScanTreeAndTypeAnnotate$4$4, deferPos)},
	{}
};
$MethodInfo Annotate$$Lambda$lambda$queueScanTreeAndTypeAnnotate$4$4::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Annotate;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PUBLIC, $method(static_cast<void(Annotate$$Lambda$lambda$queueScanTreeAndTypeAnnotate$4$4::*)(Annotate*,$JCTree*,$Env*,$Symbol*,$JCDiagnostic$DiagnosticPosition*)>(&Annotate$$Lambda$lambda$queueScanTreeAndTypeAnnotate$4$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Annotate$$Lambda$lambda$queueScanTreeAndTypeAnnotate$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Annotate$$Lambda$lambda$queueScanTreeAndTypeAnnotate$4$4",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* Annotate$$Lambda$lambda$queueScanTreeAndTypeAnnotate$4$4::load$($String* name, bool initialize) {
	$loadClass(Annotate$$Lambda$lambda$queueScanTreeAndTypeAnnotate$4$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Annotate$$Lambda$lambda$queueScanTreeAndTypeAnnotate$4$4::class$ = nullptr;

class Annotate$$Lambda$lambda$annotateTypeSecondStage$5$5 : public $Runnable {
	$class(Annotate$$Lambda$lambda$annotateTypeSecondStage$5$5, $NO_CLASS_INIT, $Runnable)
public:
	void init$(Annotate* inst, $List* annotations, $Type* storeAt) {
		$set(this, inst$, inst);
		$set(this, annotations, annotations);
		$set(this, storeAt, storeAt);
	}
	virtual void run() override {
		$nc(inst$)->lambda$annotateTypeSecondStage$5(annotations, storeAt);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Annotate$$Lambda$lambda$annotateTypeSecondStage$5$5>());
	}
	Annotate* inst$ = nullptr;
	$List* annotations = nullptr;
	$Type* storeAt = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Annotate$$Lambda$lambda$annotateTypeSecondStage$5$5::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Annotate$$Lambda$lambda$annotateTypeSecondStage$5$5, inst$)},
	{"annotations", "Lcom/sun/tools/javac/util/List;", nullptr, $PUBLIC, $field(Annotate$$Lambda$lambda$annotateTypeSecondStage$5$5, annotations)},
	{"storeAt", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Annotate$$Lambda$lambda$annotateTypeSecondStage$5$5, storeAt)},
	{}
};
$MethodInfo Annotate$$Lambda$lambda$annotateTypeSecondStage$5$5::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Annotate;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(static_cast<void(Annotate$$Lambda$lambda$annotateTypeSecondStage$5$5::*)(Annotate*,$List*,$Type*)>(&Annotate$$Lambda$lambda$annotateTypeSecondStage$5$5::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Annotate$$Lambda$lambda$annotateTypeSecondStage$5$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Annotate$$Lambda$lambda$annotateTypeSecondStage$5$5",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* Annotate$$Lambda$lambda$annotateTypeSecondStage$5$5::load$($String* name, bool initialize) {
	$loadClass(Annotate$$Lambda$lambda$annotateTypeSecondStage$5$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Annotate$$Lambda$lambda$annotateTypeSecondStage$5$5::class$ = nullptr;

class Annotate$$Lambda$lambda$annotateTypeParameterSecondStage$6$6 : public $Runnable {
	$class(Annotate$$Lambda$lambda$annotateTypeParameterSecondStage$6$6, $NO_CLASS_INIT, $Runnable)
public:
	void init$(Annotate* inst, $List* annotations) {
		$set(this, inst$, inst);
		$set(this, annotations, annotations);
	}
	virtual void run() override {
		$nc(inst$)->lambda$annotateTypeParameterSecondStage$6(annotations);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Annotate$$Lambda$lambda$annotateTypeParameterSecondStage$6$6>());
	}
	Annotate* inst$ = nullptr;
	$List* annotations = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Annotate$$Lambda$lambda$annotateTypeParameterSecondStage$6$6::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Annotate$$Lambda$lambda$annotateTypeParameterSecondStage$6$6, inst$)},
	{"annotations", "Lcom/sun/tools/javac/util/List;", nullptr, $PUBLIC, $field(Annotate$$Lambda$lambda$annotateTypeParameterSecondStage$6$6, annotations)},
	{}
};
$MethodInfo Annotate$$Lambda$lambda$annotateTypeParameterSecondStage$6$6::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Annotate;Lcom/sun/tools/javac/util/List;)V", nullptr, $PUBLIC, $method(static_cast<void(Annotate$$Lambda$lambda$annotateTypeParameterSecondStage$6$6::*)(Annotate*,$List*)>(&Annotate$$Lambda$lambda$annotateTypeParameterSecondStage$6$6::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Annotate$$Lambda$lambda$annotateTypeParameterSecondStage$6$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Annotate$$Lambda$lambda$annotateTypeParameterSecondStage$6$6",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* Annotate$$Lambda$lambda$annotateTypeParameterSecondStage$6$6::load$($String* name, bool initialize) {
	$loadClass(Annotate$$Lambda$lambda$annotateTypeParameterSecondStage$6$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Annotate$$Lambda$lambda$annotateTypeParameterSecondStage$6$6::class$ = nullptr;

$FieldInfo _Annotate_FieldInfo_[] = {
	{"annotateKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/comp/Annotate;>;", $PROTECTED | $STATIC | $FINAL, $staticField(Annotate, annotateKey)},
	{"attr", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $PRIVATE | $FINAL, $field(Annotate, attr)},
	{"chk", "Lcom/sun/tools/javac/comp/Check;", nullptr, $PRIVATE | $FINAL, $field(Annotate, chk)},
	{"cfolder", "Lcom/sun/tools/javac/comp/ConstFold;", nullptr, $PRIVATE | $FINAL, $field(Annotate, cfolder)},
	{"deferredLintHandler", "Lcom/sun/tools/javac/code/DeferredLintHandler;", nullptr, $PRIVATE | $FINAL, $field(Annotate, deferredLintHandler)},
	{"enter", "Lcom/sun/tools/javac/comp/Enter;", nullptr, $PRIVATE | $FINAL, $field(Annotate, enter)},
	{"lint", "Lcom/sun/tools/javac/code/Lint;", nullptr, $PRIVATE | $FINAL, $field(Annotate, lint)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $PRIVATE | $FINAL, $field(Annotate, log)},
	{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, $PRIVATE | $FINAL, $field(Annotate, names)},
	{"resolve", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $PRIVATE | $FINAL, $field(Annotate, resolve)},
	{"make", "Lcom/sun/tools/javac/tree/TreeMaker;", nullptr, $PRIVATE | $FINAL, $field(Annotate, make)},
	{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $PRIVATE | $FINAL, $field(Annotate, syms)},
	{"typeEnvs", "Lcom/sun/tools/javac/comp/TypeEnvs;", nullptr, $PRIVATE | $FINAL, $field(Annotate, typeEnvs)},
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, $PRIVATE | $FINAL, $field(Annotate, types)},
	{"theUnfinishedDefaultValue", "Lcom/sun/tools/javac/code/Attribute;", nullptr, $PRIVATE | $FINAL, $field(Annotate, theUnfinishedDefaultValue)},
	{"allowRepeatedAnnos", "Z", nullptr, $PRIVATE | $FINAL, $field(Annotate, allowRepeatedAnnos)},
	{"sourceName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Annotate, sourceName)},
	{"blockCount", "I", nullptr, $PRIVATE, $field(Annotate, blockCount)},
	{"q", "Lcom/sun/tools/javac/util/ListBuffer;", "Lcom/sun/tools/javac/util/ListBuffer<Ljava/lang/Runnable;>;", $PRIVATE, $field(Annotate, q)},
	{"validateQ", "Lcom/sun/tools/javac/util/ListBuffer;", "Lcom/sun/tools/javac/util/ListBuffer<Ljava/lang/Runnable;>;", $PRIVATE, $field(Annotate, validateQ)},
	{"flushCount", "I", nullptr, $PRIVATE, $field(Annotate, flushCount)},
	{"typesQ", "Lcom/sun/tools/javac/util/ListBuffer;", "Lcom/sun/tools/javac/util/ListBuffer<Ljava/lang/Runnable;>;", 0, $field(Annotate, typesQ)},
	{"afterTypesQ", "Lcom/sun/tools/javac/util/ListBuffer;", "Lcom/sun/tools/javac/util/ListBuffer<Ljava/lang/Runnable;>;", 0, $field(Annotate, afterTypesQ)},
	{"theSourceCompleter", "Lcom/sun/tools/javac/comp/Annotate$AnnotationTypeCompleter;", nullptr, $PRIVATE, $field(Annotate, theSourceCompleter)},
	{}
};

$MethodInfo _Annotate_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(Annotate::*)($Context*)>(&Annotate::init$))},
	{"afterTypes", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC},
	{"annotateDefaultValueLater", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", $PUBLIC},
	{"annotateLater", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", $PUBLIC},
	{"annotateNow", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/Env;ZZ)V", "<T:Lcom/sun/tools/javac/code/Attribute$Compound;>(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;ZZ)V", $PRIVATE, $method(static_cast<void(Annotate::*)($Symbol*,$List*,$Env*,bool,bool)>(&Annotate::annotateNow))},
	{"annotateTypeParameterSecondStage", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;)V", $PUBLIC},
	{"annotateTypeSecondStage", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Type;)V", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;Lcom/sun/tools/javac/code/Type;)V", $PUBLIC},
	{"annotationTypeSourceCompleter", "()Lcom/sun/tools/javac/comp/Annotate$AnnotationTypeCompleter;", nullptr, $PUBLIC},
	{"annotationValueInfo", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, $PRIVATE, $method(static_cast<$Attr$ResultInfo*(Annotate::*)($Type*)>(&Annotate::annotationValueInfo))},
	{"annotationsBlocked", "()Z", nullptr, $PUBLIC},
	{"attributeAnnotation", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/code/Attribute$Compound;", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/code/Attribute$Compound;", $PUBLIC},
	{"attributeAnnotationNameValuePair", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/code/Type;ZLcom/sun/tools/javac/comp/Env;Z)Lcom/sun/tools/javac/util/Pair;", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/code/Type;ZLcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Z)Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Attribute;>;", $PRIVATE, $method(static_cast<$Pair*(Annotate::*)($JCTree$JCExpression*,$Type*,bool,$Env*,bool)>(&Annotate::attributeAnnotationNameValuePair))},
	{"attributeAnnotationType", "(Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PRIVATE, $method(static_cast<void(Annotate::*)($Env*)>(&Annotate::attributeAnnotationType))},
	{"attributeAnnotationValue", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/code/Attribute;", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/code/Attribute;", $PRIVATE, $method(static_cast<$Attribute*(Annotate::*)($Type*,$JCTree$JCExpression*,$Env*)>(&Annotate::attributeAnnotationValue))},
	{"attributeAnnotationValues", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Attribute;>;>;", $PRIVATE, $method(static_cast<$List*(Annotate::*)($JCTree$JCAnnotation*,$Type*,$Env*)>(&Annotate::attributeAnnotationValues))},
	{"attributeTypeAnnotation", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/code/Attribute$TypeCompound;", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/code/Attribute$TypeCompound;", $PUBLIC},
	{"blockAnnotations", "()V", nullptr, $PUBLIC},
	{"doneFlushing", "()V", nullptr, $PRIVATE, $method(static_cast<void(Annotate::*)()>(&Annotate::doneFlushing))},
	{"enterDefaultValue", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)V", $PRIVATE, $method(static_cast<void(Annotate::*)($JCTree$JCExpression*,$Env*,$Symbol$MethodSymbol*)>(&Annotate::enterDefaultValue))},
	{"enterDone", "()V", nullptr, $PUBLIC},
	{"enterTypeAnnotations", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Z)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Z)V", $PUBLIC},
	{"extractContainingType", "(Lcom/sun/tools/javac/code/Attribute$Compound;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $method(static_cast<$Type*(Annotate::*)($Attribute$Compound*,$JCDiagnostic$DiagnosticPosition*,$Symbol$TypeSymbol*)>(&Annotate::extractContainingType))},
	{"filterSame", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $method(static_cast<$Type*(Annotate::*)($Type*,$Type*)>(&Annotate::filterSame))},
	{"flush", "()V", nullptr, $PUBLIC},
	{"fromAnnotations", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;", $PUBLIC},
	{"getAnnotationArrayValue", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/code/Attribute;", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/code/Attribute;", $PRIVATE, $method(static_cast<$Attribute*(Annotate::*)($Type*,$JCTree$JCExpression*,$Env*)>(&Annotate::getAnnotationArrayValue))},
	{"getAnnotationClassValue", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/code/Attribute;", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/code/Attribute;", $PRIVATE, $method(static_cast<$Attribute*(Annotate::*)($Type*,$JCTree$JCExpression*,$Env*)>(&Annotate::getAnnotationClassValue))},
	{"getAnnotationEnumValue", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/code/Attribute;", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/code/Attribute;", $PRIVATE, $method(static_cast<$Attribute*(Annotate::*)($Type*,$JCTree$JCExpression*,$Env*)>(&Annotate::getAnnotationEnumValue))},
	{"getAnnotationPrimitiveValue", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/code/Attribute;", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/code/Attribute;", $PRIVATE, $method(static_cast<$Attribute*(Annotate::*)($Type*,$JCTree$JCExpression*,$Env*)>(&Annotate::getAnnotationPrimitiveValue))},
	{"getContainingType", "(Lcom/sun/tools/javac/code/Attribute$Compound;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Z)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $method(static_cast<$Type*(Annotate::*)($Attribute$Compound*,$JCDiagnostic$DiagnosticPosition*,bool)>(&Annotate::getContainingType))},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/comp/Annotate;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Annotate*(*)($Context*)>(&Annotate::instance))},
	{"isAttributeTrue", "(Lcom/sun/tools/javac/code/Attribute;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Annotate::*)($Attribute*)>(&Annotate::isAttributeTrue))},
	{"isFlushing", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(Annotate::*)()>(&Annotate::isFlushing))},
	{"lambda$annotateDefaultValueLater$2", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Annotate::*)($Env*,$JCDiagnostic$DiagnosticPosition*,$JCTree$JCExpression*,$Symbol$MethodSymbol*)>(&Annotate::lambda$annotateDefaultValueLater$2))},
	{"lambda$annotateDefaultValueLater$3", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Annotate::*)($Env*,$JCTree$JCExpression*)>(&Annotate::lambda$annotateDefaultValueLater$3))},
	{"lambda$annotateLater$0", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/List;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Annotate::*)($Symbol*,$Env*,$JCDiagnostic$DiagnosticPosition*,$List*)>(&Annotate::lambda$annotateLater$0))},
	{"lambda$annotateLater$1", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Annotate::*)($Env*,$List*,$Symbol*)>(&Annotate::lambda$annotateLater$1))},
	{"lambda$annotateTypeParameterSecondStage$6", "(Lcom/sun/tools/javac/util/List;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Annotate::*)($List*)>(&Annotate::lambda$annotateTypeParameterSecondStage$6))},
	{"lambda$annotateTypeSecondStage$5", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Annotate::*)($List*,$Type*)>(&Annotate::lambda$annotateTypeSecondStage$5))},
	{"lambda$queueScanTreeAndTypeAnnotate$4", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Annotate::*)($JCTree*,$Env*,$Symbol*,$JCDiagnostic$DiagnosticPosition*)>(&Annotate::lambda$queueScanTreeAndTypeAnnotate$4))},
	{"makeContainerAnnotation", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/Annotate$AnnotationContext;Lcom/sun/tools/javac/code/Symbol;Z)Lcom/sun/tools/javac/code/Attribute$Compound;", "<T:Lcom/sun/tools/javac/code/Attribute$Compound;>(Lcom/sun/tools/javac/util/List<TT;>;Lcom/sun/tools/javac/comp/Annotate$AnnotationContext<TT;>;Lcom/sun/tools/javac/code/Symbol;Z)TT;", $PRIVATE, $method(static_cast<$Attribute$Compound*(Annotate::*)($List*,$Annotate$AnnotationContext*,$Symbol*,bool)>(&Annotate::makeContainerAnnotation))},
	{"newRound", "()V", nullptr, $PUBLIC},
	{"normal", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC},
	{"processRepeatedAnnotations", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/Annotate$AnnotationContext;Lcom/sun/tools/javac/code/Symbol;Z)Lcom/sun/tools/javac/code/Attribute$Compound;", "<T:Lcom/sun/tools/javac/code/Attribute$Compound;>(Lcom/sun/tools/javac/util/List<TT;>;Lcom/sun/tools/javac/comp/Annotate$AnnotationContext<TT;>;Lcom/sun/tools/javac/code/Symbol;Z)TT;", $PRIVATE, $method(static_cast<$Attribute$Compound*(Annotate::*)($List*,$Annotate$AnnotationContext*,$Symbol*,bool)>(&Annotate::processRepeatedAnnotations))},
	{"queueScanTreeAndTypeAnnotate", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", $PUBLIC},
	{"setQueues", "(Lcom/sun/tools/javac/comp/Annotate$Queues;)Lcom/sun/tools/javac/comp/Annotate$Queues;", nullptr, $PUBLIC},
	{"startFlushing", "()V", nullptr, $PRIVATE, $method(static_cast<void(Annotate::*)()>(&Annotate::startFlushing))},
	{"typeAnnotation", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC},
	{"unblockAnnotations", "()V", nullptr, $PUBLIC},
	{"unblockAnnotationsNoFlush", "()V", nullptr, $PUBLIC},
	{"unfinishedDefaultValue", "()Lcom/sun/tools/javac/code/Attribute;", nullptr, $PUBLIC},
	{"validate", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC},
	{"validateContainer", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, $PRIVATE, $method(static_cast<$Symbol$MethodSymbol*(Annotate::*)($Type*,$Type*,$JCDiagnostic$DiagnosticPosition*)>(&Annotate::validateContainer))},
	{}
};

$InnerClassInfo _Annotate_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Annotate$Queues", "com.sun.tools.javac.comp.Annotate", "Queues", $STATIC},
	{"com.sun.tools.javac.comp.Annotate$AnnotationTypeMetadata", "com.sun.tools.javac.comp.Annotate", "AnnotationTypeMetadata", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.comp.Annotate$AnnotationTypeVisitor", "com.sun.tools.javac.comp.Annotate", "AnnotationTypeVisitor", $PUBLIC},
	{"com.sun.tools.javac.comp.Annotate$AnnotationTypeCompleter", "com.sun.tools.javac.comp.Annotate", "AnnotationTypeCompleter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.comp.Annotate$TypeAnnotate", "com.sun.tools.javac.comp.Annotate", "TypeAnnotate", $PRIVATE},
	{"com.sun.tools.javac.comp.Annotate$AnnotationContext", "com.sun.tools.javac.comp.Annotate", "AnnotationContext", $PRIVATE},
	{"com.sun.tools.javac.comp.Annotate$AnnotationValueContext", "com.sun.tools.javac.comp.Annotate", "AnnotationValueContext", 0},
	{"com.sun.tools.javac.comp.Annotate$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Annotate$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Annotate_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.Annotate",
	"java.lang.Object",
	nullptr,
	_Annotate_FieldInfo_,
	_Annotate_MethodInfo_,
	nullptr,
	nullptr,
	_Annotate_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Annotate$Queues,com.sun.tools.javac.comp.Annotate$AnnotationTypeMetadata,com.sun.tools.javac.comp.Annotate$AnnotationTypeMetadata$1,com.sun.tools.javac.comp.Annotate$AnnotationTypeVisitor,com.sun.tools.javac.comp.Annotate$AnnotationTypeCompleter,com.sun.tools.javac.comp.Annotate$TypeAnnotate,com.sun.tools.javac.comp.Annotate$AnnotationContext,com.sun.tools.javac.comp.Annotate$AnnotationValueContext,com.sun.tools.javac.comp.Annotate$2,com.sun.tools.javac.comp.Annotate$1"
};

$Object* allocate$Annotate($Class* clazz) {
	return $of($alloc(Annotate));
}

$Context$Key* Annotate::annotateKey = nullptr;

Annotate* Annotate::instance($Context* context) {
	$init(Annotate);
	$var(Annotate, instance, $cast(Annotate, $nc(context)->get(Annotate::annotateKey)));
	if (instance == nullptr) {
		$assign(instance, $new(Annotate, context));
	}
	return instance;
}

void Annotate::init$($Context* context) {
	this->blockCount = 0;
	$set(this, q, $new($ListBuffer));
	$set(this, validateQ, $new($ListBuffer));
	this->flushCount = 0;
	$set(this, typesQ, $new($ListBuffer));
	$set(this, afterTypesQ, $new($ListBuffer));
	$set(this, theSourceCompleter, $new($Annotate$2, this));
	$nc(context)->put(Annotate::annotateKey, $of(this));
	$set(this, attr, $Attr::instance(context));
	$set(this, chk, $Check::instance(context));
	$set(this, cfolder, $ConstFold::instance(context));
	$set(this, deferredLintHandler, $DeferredLintHandler::instance(context));
	$set(this, enter, $Enter::instance(context));
	$set(this, log, $Log::instance(context));
	$set(this, lint, $Lint::instance(context));
	$set(this, make, $TreeMaker::instance(context));
	$set(this, names, $Names::instance(context));
	$set(this, resolve, $Resolve::instance(context));
	$set(this, syms, $Symtab::instance(context));
	$set(this, typeEnvs, $TypeEnvs::instance(context));
	$set(this, types, $Types::instance(context));
	$set(this, theUnfinishedDefaultValue, $new($Attribute$Error, $nc(this->syms)->errType));
	$Source* source = $Source::instance(context);
	$init($Source$Feature);
	this->allowRepeatedAnnos = $Source$Feature::REPEATED_ANNOTATIONS->allowedInSource(source);
	$set(this, sourceName, $nc(source)->name$);
	this->blockCount = 1;
}

void Annotate::blockAnnotations() {
	++this->blockCount;
}

void Annotate::unblockAnnotations() {
	--this->blockCount;
	if (this->blockCount == 0) {
		flush();
	}
}

void Annotate::unblockAnnotationsNoFlush() {
	--this->blockCount;
}

bool Annotate::annotationsBlocked() {
	return this->blockCount > 0;
}

void Annotate::enterDone() {
	unblockAnnotations();
}

$List* Annotate::fromAnnotations($List* annotations) {
	$useLocalCurrentObjectStackCache();
	if ($nc(annotations)->isEmpty()) {
		return $List::nil();
	}
	$var($ListBuffer, buf, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(annotations)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree$JCAnnotation, anno, $cast($JCTree$JCAnnotation, i$->next()));
			{
				$Assert::checkNonNull($nc(anno)->attribute);
				buf->append($cast($Attribute$TypeCompound, $nc(anno)->attribute));
			}
		}
	}
	return buf->toList();
}

void Annotate::normal($Runnable* r) {
	$nc(this->q)->append(r);
}

void Annotate::validate($Runnable* a) {
	$nc(this->validateQ)->append(a);
}

void Annotate::flush() {
	$useLocalCurrentObjectStackCache();
	if (annotationsBlocked()) {
		return;
	}
	if (isFlushing()) {
		return;
	}
	startFlushing();
	{
		$var($Throwable, var$0, nullptr);
		try {
			while ($nc(this->q)->nonEmpty()) {
				$nc(($cast($Runnable, $($nc(this->q)->next()))))->run();
			}
			while ($nc(this->typesQ)->nonEmpty()) {
				$nc(($cast($Runnable, $($nc(this->typesQ)->next()))))->run();
			}
			while ($nc(this->afterTypesQ)->nonEmpty()) {
				$nc(($cast($Runnable, $($nc(this->afterTypesQ)->next()))))->run();
			}
			while ($nc(this->validateQ)->nonEmpty()) {
				$nc(($cast($Runnable, $($nc(this->validateQ)->next()))))->run();
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			doneFlushing();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool Annotate::isFlushing() {
	return this->flushCount > 0;
}

void Annotate::startFlushing() {
	++this->flushCount;
}

void Annotate::doneFlushing() {
	--this->flushCount;
}

void Annotate::typeAnnotation($Runnable* a) {
	$nc(this->typesQ)->append(a);
}

void Annotate::afterTypes($Runnable* a) {
	$nc(this->afterTypesQ)->append(a);
}

void Annotate::annotateLater($List* annotations, $Env* localEnv, $Symbol* s, $JCDiagnostic$DiagnosticPosition* deferPos) {
	$useLocalCurrentObjectStackCache();
	if ($nc(annotations)->isEmpty()) {
		return;
	}
	$nc(s)->resetAnnotations();
	normal(static_cast<$Runnable*>($$new(Annotate$$Lambda$lambda$annotateLater$0, this, s, localEnv, deferPos, annotations)));
	validate(static_cast<$Runnable*>($$new(Annotate$$Lambda$lambda$annotateLater$1$1, this, localEnv, annotations, s)));
}

void Annotate::annotateDefaultValueLater($JCTree$JCExpression* defaultValue, $Env* localEnv, $Symbol$MethodSymbol* m, $JCDiagnostic$DiagnosticPosition* deferPos) {
	$useLocalCurrentObjectStackCache();
	normal(static_cast<$Runnable*>($$new(Annotate$$Lambda$lambda$annotateDefaultValueLater$2$2, this, localEnv, deferPos, defaultValue, m)));
	validate(static_cast<$Runnable*>($$new(Annotate$$Lambda$lambda$annotateDefaultValueLater$3$3, this, localEnv, defaultValue)));
}

void Annotate::enterDefaultValue($JCTree$JCExpression* defaultValue, $Env* localEnv, $Symbol$MethodSymbol* m) {
	$set($nc(m), defaultValue, attributeAnnotationValue($($nc(m->type)->getReturnType()), defaultValue, localEnv));
}

void Annotate::annotateNow($Symbol* toAnnotate, $List* withAnnotations, $Env* env, bool typeAnnotations, bool isTypeParam) {
	$useLocalCurrentObjectStackCache();
	$var($Map, annotated, $new($LinkedHashMap));
	$var($Map, pos, $new($HashMap));
	{
		$var($List, al, withAnnotations);
		for (; !$nc(al)->isEmpty(); $assign(al, $nc(al)->tail)) {
			$var($JCTree$JCAnnotation, a, $cast($JCTree$JCAnnotation, al->head));
			$var($Attribute$Compound, c, nullptr);
			if (typeAnnotations) {
				$var($Attribute$Compound, tmp, static_cast<$Attribute$Compound*>(attributeTypeAnnotation(a, $nc(this->syms)->annotationType, env)));
				$assign(c, tmp);
			} else {
				$var($Attribute$Compound, tmp, attributeAnnotation(a, $nc(this->syms)->annotationType, env));
				$assign(c, tmp);
			}
			$Assert::checkNonNull($of(c), "Failed to create annotation"_s);
			if ($nc($nc($nc(a)->type)->tsym)->isAnnotationType()) {
				if (annotated->containsKey($nc(a->type)->tsym)) {
					if (!this->allowRepeatedAnnos) {
						$init($JCDiagnostic$DiagnosticFlag);
						$var($JCDiagnostic$DiagnosticFlag, var$0, $JCDiagnostic$DiagnosticFlag::SOURCE_LEVEL);
						$var($JCDiagnostic$DiagnosticPosition, var$1, a->pos());
						$init($Source$Feature);
						$nc(this->log)->error(var$0, var$1, $($Source$Feature::REPEATED_ANNOTATIONS->error(this->sourceName)));
					}
					$var($ListBuffer, l, $cast($ListBuffer, annotated->get($nc(a->type)->tsym)));
					$assign(l, $nc(l)->append(c));
					annotated->put($nc(a->type)->tsym, l);
					pos->put(c, $(a->pos()));
				} else {
					annotated->put($nc(a->type)->tsym, $($ListBuffer::of(c)));
					pos->put(c, $(a->pos()));
				}
			}
			$init($Kinds$Kind);
			bool var$2 = !$nc($nc(c)->type)->isErroneous() && ($nc(toAnnotate)->kind == $Kinds$Kind::MDL || $nc($nc(toAnnotate)->owner)->kind != $Kinds$Kind::MTH);
			if (var$2 && $nc(this->types)->isSameType($nc(c)->type, $nc(this->syms)->deprecatedType)) {
				toAnnotate->flags_field |= ($Flags::DEPRECATED | $Flags::DEPRECATED_ANNOTATION);
				if (isAttributeTrue($($nc(c)->member($nc(this->names)->forRemoval)))) {
					toAnnotate->flags_field |= $Flags::DEPRECATED_REMOVAL;
				}
			}
			bool var$3 = !$nc($nc(c)->type)->isErroneous();
			if (var$3 && $nc(this->types)->isSameType(c->type, $nc(this->syms)->previewFeatureType)) {
				$nc(toAnnotate)->flags_field |= $Flags::PREVIEW_API;
				if (isAttributeTrue($(c->member($nc(this->names)->reflective)))) {
					toAnnotate->flags_field |= $Flags::PREVIEW_REFLECTIVE;
				}
			}
			bool var$4 = !$nc($nc(c)->type)->isErroneous() && $nc(toAnnotate)->kind == $Kinds$Kind::TYP;
			if (var$4 && $nc(this->types)->isSameType(c->type, $nc(this->syms)->valueBasedType)) {
				toAnnotate->flags_field |= $Flags::VALUE_BASED;
			}
		}
	}
	$var($List, buf, $List::nil());
	{
		$var($Iterator, i$, $nc($(annotated->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ListBuffer, lb, $cast($ListBuffer, i$->next()));
			{
				if ($nc(lb)->size() == 1) {
					$assign(buf, $nc(buf)->prepend($cast($Attribute$Compound, $(lb->first()))));
				} else {
					$var($Annotate$AnnotationContext, ctx, $new($Annotate$AnnotationContext, this, env, annotated, pos, typeAnnotations));
					$var($Attribute$Compound, res, makeContainerAnnotation($(lb->toList()), ctx, toAnnotate, isTypeParam));
					if (res != nullptr) {
						$assign(buf, $nc(buf)->prepend(res));
					}
				}
			}
		}
	}
	if (typeAnnotations) {
		$var($List, attrs, $nc(buf)->reverse());
		$nc(toAnnotate)->appendUniqueTypeAttributes(attrs);
	} else {
		$var($List, attrs, $nc(buf)->reverse());
		$nc(toAnnotate)->resetAnnotations();
		toAnnotate->setDeclarationAttributes(attrs);
	}
}

bool Annotate::isAttributeTrue($Attribute* attr) {
	$var($Attribute$Constant, constant, nullptr);
	bool var$2 = $instanceOf($Attribute$Constant, attr);
	if (var$2) {
		$assign(constant, $cast($Attribute$Constant, attr));
		var$2 = true;
	}
	bool var$1 = (var$2);
	bool var$0 = var$1 && $equals($nc(constant)->type, $nc(this->syms)->booleanType);
	return var$0 && $nc(($cast($Integer, constant->value)))->intValue() != 0;
}

$Attribute$Compound* Annotate::attributeAnnotation($JCTree$JCAnnotation* tree, $Type* expectedAnnotationType, $Env* env) {
	$useLocalCurrentObjectStackCache();
	if ($nc(tree)->attribute != nullptr && tree->type != nullptr) {
		return tree->attribute;
	}
	$var($List, elems, attributeAnnotationValues(tree, expectedAnnotationType, env));
	$var($Attribute$Compound, ac, $new($Attribute$Compound, $nc(tree)->type, elems));
	return $set($nc(tree), attribute, ac);
}

$Attribute$TypeCompound* Annotate::attributeTypeAnnotation($JCTree$JCAnnotation* a, $Type* expectedAnnotationType, $Env* env) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Attribute$TypeCompound, typeCompound, nullptr);
		bool var$0 = $nc(a)->attribute == nullptr || $nc(a)->type == nullptr;
		if (!var$0) {
			$var($Attribute$Compound, patt17976$temp, $nc(a)->attribute);
			bool var$1 = $instanceOf($Attribute$TypeCompound, patt17976$temp);
			if (var$1) {
				$assign(typeCompound, $cast($Attribute$TypeCompound, patt17976$temp));
				var$1 = true;
			}
			var$0 = !(var$1);
		}
		if (var$0) {
			$var($List, elems, attributeAnnotationValues(a, expectedAnnotationType, env));
			$init($TypeAnnotationPosition);
			$var($Attribute$TypeCompound, tc, $new($Attribute$TypeCompound, $nc(a)->type, elems, $TypeAnnotationPosition::unknown));
			$set($nc(a), attribute, tc);
			return tc;
		} else {
			return typeCompound;
		}
	}
}

$List* Annotate::attributeAnnotationValues($JCTree$JCAnnotation* a, $Type* expected, $Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($Type, at, $nc($nc(a)->annotationType)->type != nullptr ? $nc($nc(a)->annotationType)->type : $nc(this->attr)->attribType(a->annotationType, env));
	$set(a, type, $nc(this->chk)->checkType($($nc(a->annotationType)->pos()), at, expected));
	bool isError = $nc(a->type)->isErroneous();
	if (!$nc($nc(a->type)->tsym)->isAnnotationType() && !isError) {
		$var($JCDiagnostic$DiagnosticPosition, var$0, $nc(a->annotationType)->pos());
		$nc(this->log)->error(var$0, $($CompilerProperties$Errors::NotAnnotationType(a->type)));
		isError = true;
	}
	$var($List, args, a->args);
	bool elidedValue = false;
	bool var$1 = $nc(args)->length() == 1;
	$init($JCTree$Tag);
	if (var$1 && !$nc(($cast($JCTree$JCExpression, args->head)))->hasTag($JCTree$Tag::ASSIGN)) {
		$set(args, head, $nc($($nc(this->make)->at($nc(($cast($JCTree$JCExpression, args->head)))->pos$)))->Assign($($nc(this->make)->Ident($nc(this->names)->value)), $cast($JCTree$JCExpression, args->head)));
		elidedValue = true;
	}
	$var($ListBuffer, buf, $new($ListBuffer));
	{
		$var($List, tl, args);
		for (; $nc(tl)->nonEmpty(); $assign(tl, $nc(tl)->tail)) {
			$var($Pair, p, attributeAnnotationNameValuePair($cast($JCTree$JCExpression, tl->head), a->type, isError, env, elidedValue));
			if (p != nullptr && !$nc($nc(($cast($Symbol$MethodSymbol, p->fst)))->type)->isErroneous()) {
				buf->append(p);
			}
		}
	}
	return buf->toList();
}

$Pair* Annotate::attributeAnnotationNameValuePair($JCTree$JCExpression* nameValuePair, $Type* thisAnnotationType, bool badAnnotation, $Env* env, bool elidedValue) {
	$useLocalCurrentObjectStackCache();
	$init($JCTree$Tag);
	if (!$nc(nameValuePair)->hasTag($JCTree$Tag::ASSIGN)) {
		$init($CompilerProperties$Errors);
		$nc(this->log)->error($(nameValuePair->pos()), $CompilerProperties$Errors::AnnotationValueMustBeNameValue);
		$var($Type, var$0, $set(nameValuePair, type, $nc(this->syms)->errType));
		attributeAnnotationValue(var$0, nameValuePair, env);
		return nullptr;
	}
	$var($JCTree$JCAssign, assign, $cast($JCTree$JCAssign, nameValuePair));
	if (!$nc($nc(assign)->lhs)->hasTag($JCTree$Tag::IDENT)) {
		$init($CompilerProperties$Errors);
		$nc(this->log)->error($($nc(nameValuePair)->pos()), $CompilerProperties$Errors::AnnotationValueMustBeNameValue);
		$var($Type, var$1, $set($nc(nameValuePair), type, $nc(this->syms)->errType));
		attributeAnnotationValue(var$1, nameValuePair, env);
		return nullptr;
	}
	$var($JCTree$JCIdent, left, $cast($JCTree$JCIdent, $nc(assign)->lhs));
	$var($JCDiagnostic$DiagnosticPosition, var$2, elidedValue ? $nc(assign->rhs)->pos() : $nc(left)->pos());
	$var($Env, var$3, env);
	$var($Type, var$4, thisAnnotationType);
	$var($Name, var$5, left->name);
	$var($Symbol, method, $nc(this->resolve)->resolveQualifiedMethod(var$2, var$3, var$4, var$5, $($List::nil()), nullptr));
	$set($nc(left), sym, method);
	$set(left, type, $nc(method)->type);
	if (!$equals(method->owner, $nc(thisAnnotationType)->tsym) && !badAnnotation) {
		$var($JCDiagnostic$DiagnosticPosition, var$6, left->pos());
		$nc(this->log)->error(var$6, $($CompilerProperties$Errors::NoAnnotationMember(left->name, thisAnnotationType)));
	}
	$var($Type, resultType, $nc(method->type)->getReturnType());
	$var($Attribute, value, attributeAnnotationValue(resultType, assign->rhs, env));
	$set($nc(nameValuePair), type, resultType);
	return $nc(method->type)->isErroneous() ? ($Pair*)nullptr : $new($Pair, $cast($Symbol$MethodSymbol, method), value);
}

$Attribute* Annotate::attributeAnnotationValue($Type* expectedElementType$renamed, $JCTree$JCExpression* tree, $Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($Type, expectedElementType, expectedElementType$renamed);
	try {
		$nc($nc(expectedElementType)->tsym)->complete();
	} catch ($Symbol$CompletionFailure& e) {
		$var($JCDiagnostic$DiagnosticPosition, var$0, $nc(tree)->pos());
		$var($Kinds$KindName, var$1, $Kinds::kindName(e->sym));
		$nc(this->log)->error(var$0, $($CompilerProperties$Errors::CantResolve(var$1, $($nc(e->sym)->getQualifiedName()), nullptr, nullptr)));
		$assign(expectedElementType, $nc(this->syms)->errType);
	}
	$init($TypeTag);
	if ($nc(expectedElementType)->hasTag($TypeTag::ARRAY)) {
		return getAnnotationArrayValue(expectedElementType, tree, env);
	}
	$init($JCTree$Tag);
	if ($nc(tree)->hasTag($JCTree$Tag::NEWARRAY)) {
		if (!$nc(expectedElementType)->isErroneous()) {
			$init($CompilerProperties$Errors);
			$nc(this->log)->error($(tree->pos()), $CompilerProperties$Errors::AnnotationValueNotAllowableType);
		}
		$var($JCTree$JCNewArray, na, $cast($JCTree$JCNewArray, tree));
		if (na->elemtype != nullptr) {
			$init($CompilerProperties$Errors);
			$nc(this->log)->error($($nc(na->elemtype)->pos()), $CompilerProperties$Errors::NewNotAllowedInAnnotation);
		}
		{
			$var($List, l, na->elems);
			for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
				attributeAnnotationValue($nc(this->syms)->errType, $cast($JCTree$JCExpression, l->head), env);
			}
		}
		return $new($Attribute$Error, $nc(this->syms)->errType);
	}
	if ($nc($nc(expectedElementType)->tsym)->isAnnotationType()) {
		if ($nc(tree)->hasTag($JCTree$Tag::ANNOTATION)) {
			return attributeAnnotation($cast($JCTree$JCAnnotation, tree), expectedElementType, env);
		} else {
			$init($CompilerProperties$Errors);
			$nc(this->log)->error($(tree->pos()), $CompilerProperties$Errors::AnnotationValueMustBeAnnotation);
			$assign(expectedElementType, $nc(this->syms)->errType);
		}
	}
	if ($nc(tree)->hasTag($JCTree$Tag::ANNOTATION)) {
		if (!$nc(expectedElementType)->isErroneous()) {
			$var($JCDiagnostic$DiagnosticPosition, var$2, tree->pos());
			$nc(this->log)->error(var$2, $($CompilerProperties$Errors::AnnotationNotValidForType(expectedElementType)));
		}
		attributeAnnotation($cast($JCTree$JCAnnotation, tree), $nc(this->syms)->errType, env);
		return $new($Attribute$Error, $nc($nc(($cast($JCTree$JCAnnotation, tree)))->annotationType)->type);
	}
	$var($MemberEnter$InitTreeVisitor, initTreeVisitor, $new($Annotate$1, this));
	$nc(tree)->accept(initTreeVisitor);
	if (!initTreeVisitor->result) {
		$init($CompilerProperties$Errors);
		$nc(this->log)->error($(tree->pos()), $CompilerProperties$Errors::ExpressionNotAllowableAsAnnotationValue);
		return $new($Attribute$Error, $nc(this->syms)->errType);
	}
	bool var$3 = $nc(expectedElementType)->isPrimitive();
	if (!var$3) {
		bool var$4 = $nc(this->types)->isSameType(expectedElementType, $nc(this->syms)->stringType);
		var$3 = (var$4 && !$nc(expectedElementType)->hasTag($TypeTag::ERROR));
	}
	if (var$3) {
		return getAnnotationPrimitiveValue(expectedElementType, tree, env);
	}
	if ($nc(expectedElementType)->tsym == $nc($nc(this->syms)->classType)->tsym) {
		return getAnnotationClassValue(expectedElementType, tree, env);
	}
	bool var$5 = $nc(expectedElementType)->hasTag($TypeTag::CLASS);
	if (var$5 && ((int64_t)($nc(expectedElementType->tsym)->flags() & (uint64_t)(int64_t)$Flags::ENUM)) != 0) {
		return getAnnotationEnumValue(expectedElementType, tree, env);
	}
	if (!$nc(expectedElementType)->isErroneous()) {
		$init($CompilerProperties$Errors);
		$nc(this->log)->error($(tree->pos()), $CompilerProperties$Errors::AnnotationValueNotAllowableType);
	}
	return $new($Attribute$Error, $($nc(this->attr)->attribExpr(tree, env, expectedElementType)));
}

$Attribute* Annotate::getAnnotationEnumValue($Type* expectedElementType, $JCTree$JCExpression* tree, $Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($Type, result, $nc(this->attr)->attribTree(tree, env, $(annotationValueInfo(expectedElementType))));
	$var($Symbol, sym, $TreeInfo::symbol(tree));
	$init($Kinds$Kind);
	bool var$0 = sym == nullptr || $TreeInfo::nonstaticSelect(tree) || $nc(sym)->kind != $Kinds$Kind::VAR;
	if (var$0 || ((int64_t)($nc(sym)->flags() & (uint64_t)(int64_t)$Flags::ENUM)) == 0) {
		$init($CompilerProperties$Errors);
		$nc(this->log)->error($($nc(tree)->pos()), $CompilerProperties$Errors::EnumAnnotationMustBeEnumConstant);
		return $new($Attribute$Error, $($nc(result)->getOriginalType()));
	}
	$var($Symbol$VarSymbol, enumerator, $cast($Symbol$VarSymbol, sym));
	return $new($Attribute$Enum, expectedElementType, enumerator);
}

$Attribute* Annotate::getAnnotationClassValue($Type* expectedElementType, $JCTree$JCExpression* tree, $Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($Type, result, $nc(this->attr)->attribTree(tree, env, $(annotationValueInfo(expectedElementType))));
	if ($nc(result)->isErroneous()) {
		bool var$0 = $TreeInfo::name(tree) == $nc(this->names)->_class;
		if (var$0 && $nc($nc($nc(($cast($JCTree$JCFieldAccess, tree)))->selected)->type)->isErroneous()) {
			$var($Name, n, $nc($nc($nc((($cast($JCTree$JCFieldAccess, tree))->selected))->type)->tsym)->flatName());
			return $new($Attribute$UnresolvedClass, expectedElementType, $($nc(this->types)->createErrorType(n, $nc(this->syms)->unknownSymbol, $nc(this->syms)->classType)));
		} else {
			return $new($Attribute$Error, $(result->getOriginalType()));
		}
	}
	if ($TreeInfo::name(tree) != $nc(this->names)->_class) {
		$init($CompilerProperties$Errors);
		$nc(this->log)->error($($nc(tree)->pos()), $CompilerProperties$Errors::AnnotationValueMustBeClassLiteral);
		return $new($Attribute$Error, $nc(this->syms)->errType);
	}
	return $new($Attribute$Class, this->types, $nc(($nc(($cast($JCTree$JCFieldAccess, tree)))->selected))->type);
}

$Attribute* Annotate::getAnnotationPrimitiveValue($Type* expectedElementType, $JCTree$JCExpression* tree, $Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($Type, result, $nc(this->attr)->attribTree(tree, env, $(annotationValueInfo(expectedElementType))));
	if ($nc(result)->isErroneous()) {
		return $new($Attribute$Error, $(result->getOriginalType()));
	}
	if ($nc(result)->constValue() == nullptr) {
		$init($CompilerProperties$Errors);
		$nc(this->log)->error($($nc(tree)->pos()), $CompilerProperties$Errors::AttributeValueMustBeConstant);
		return $new($Attribute$Error, expectedElementType);
	}
	$assign(result, $nc(this->cfolder)->coerce(result, expectedElementType));
	return $new($Attribute$Constant, expectedElementType, $($nc(result)->constValue()));
}

$Attr$ResultInfo* Annotate::annotationValueInfo($Type* pt) {
	return $nc($nc(this->attr)->unknownExprInfo)->dup(pt, $$new($Annotate$AnnotationValueContext, this, $nc($nc(this->attr)->unknownExprInfo)->checkContext));
}

$Attribute* Annotate::getAnnotationArrayValue($Type* expectedElementType, $JCTree$JCExpression* tree$renamed, $Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCExpression, tree, tree$renamed);
	$init($JCTree$Tag);
	if (!$nc(tree)->hasTag($JCTree$Tag::NEWARRAY)) {
		$var($List, var$0, $List::nil());
		$assign(tree, $nc($($nc(this->make)->at(tree->pos$)))->NewArray(nullptr, var$0, $($List::of(tree))));
	}
	$var($JCTree$JCNewArray, na, $cast($JCTree$JCNewArray, tree));
	if ($nc(na)->elemtype != nullptr) {
		$init($CompilerProperties$Errors);
		$nc(this->log)->error($($nc(na->elemtype)->pos()), $CompilerProperties$Errors::NewNotAllowedInAnnotation);
	}
	$var($ListBuffer, buf, $new($ListBuffer));
	{
		$var($List, l, $nc(na)->elems);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			buf->append($(attributeAnnotationValue($($nc(this->types)->elemtype(expectedElementType)), $cast($JCTree$JCExpression, l->head), env)));
		}
	}
	$set(na, type, expectedElementType);
	return $new($Attribute$Array, expectedElementType, $fcast($AttributeArray, $(buf->toArray($$new($AttributeArray, buf->length())))));
}

$Attribute$Compound* Annotate::processRepeatedAnnotations($List* annotations, $Annotate$AnnotationContext* ctx, $Symbol* on, bool isTypeParam) {
	$useLocalCurrentObjectStackCache();
	$var($Attribute$Compound, firstOccurrence, $cast($Attribute$Compound, $nc(annotations)->head));
	$var($List, repeated, $List::nil());
	$var($Type, origAnnoType, nullptr);
	$var($Type, arrayOfOrigAnnoType, nullptr);
	$var($Type, targetContainerType, nullptr);
	$var($Symbol$MethodSymbol, containerValueSymbol, nullptr);
	bool var$0 = !annotations->isEmpty();
	$Assert::check(var$0 && !$nc(annotations->tail)->isEmpty());
	int32_t count = 0;
	{
		$var($List, al, annotations);
		for (; !al->isEmpty(); $assign(al, al->tail)) {
			++count;
			$Assert::check(count > 1 || !$nc($nc(al)->tail)->isEmpty());
			$var($Attribute$Compound, currentAnno, $cast($Attribute$Compound, $nc(al)->head));
			$assign(origAnnoType, $nc(currentAnno)->type);
			if (arrayOfOrigAnnoType == nullptr) {
				$assign(arrayOfOrigAnnoType, $nc(this->types)->makeArrayType(origAnnoType));
			}
			bool reportError = count > 1;
			$var($Type, currentContainerType, getContainingType(currentAnno, $cast($JCDiagnostic$DiagnosticPosition, $($nc($nc(ctx)->pos)->get(currentAnno))), reportError));
			if (currentContainerType == nullptr) {
				continue;
			}
			$Assert::check(targetContainerType == nullptr || currentContainerType == targetContainerType);
			$assign(targetContainerType, currentContainerType);
			$assign(containerValueSymbol, validateContainer(targetContainerType, origAnnoType, $cast($JCDiagnostic$DiagnosticPosition, $($nc($nc(ctx)->pos)->get(currentAnno)))));
			if (containerValueSymbol == nullptr) {
				continue;
			}
			$assign(repeated, $nc(repeated)->prepend(currentAnno));
		}
	}
	if (!$nc(repeated)->isEmpty() && targetContainerType == nullptr) {
		$var($JCDiagnostic$DiagnosticPosition, var$1, $cast($JCDiagnostic$DiagnosticPosition, $nc($nc(ctx)->pos)->get(annotations->head)));
		$nc(this->log)->error(var$1, $($CompilerProperties$Errors::DuplicateAnnotationInvalidRepeated(origAnnoType)));
		return nullptr;
	}
	if (!$nc(repeated)->isEmpty()) {
		$assign(repeated, repeated->reverse());
		$var($JCDiagnostic$DiagnosticPosition, pos, $cast($JCDiagnostic$DiagnosticPosition, $nc($nc(ctx)->pos)->get(firstOccurrence)));
		$var($TreeMaker, m, $nc(this->make)->at(pos));
		$var($Pair, p, $new($Pair, containerValueSymbol, $$new($Attribute$Array, arrayOfOrigAnnoType, repeated)));
		if (ctx->isTypeCompound) {
			$var($Attribute$TypeCompound, at, $new($Attribute$TypeCompound, targetContainerType, $($List::of(p)), $nc(($cast($Attribute$TypeCompound, annotations->head)))->position));
			$var($JCTree$JCAnnotation, annoTree, $nc(m)->TypeAnnotation(at));
			if (!$nc(this->chk)->validateAnnotationDeferErrors(annoTree)) {
				$var($JCDiagnostic$DiagnosticPosition, var$2, $nc(annoTree)->pos());
				$nc(this->log)->error(var$2, $($CompilerProperties$Errors::DuplicateAnnotationInvalidRepeated(origAnnoType)));
			}
			if (!$nc(this->chk)->isTypeAnnotation(annoTree, isTypeParam)) {
				$nc(this->log)->error(pos, isTypeParam ? $($CompilerProperties$Errors::InvalidRepeatableAnnotationNotApplicable(targetContainerType, on)) : $($CompilerProperties$Errors::InvalidRepeatableAnnotationNotApplicableInContext(targetContainerType)));
			}
			at->setSynthesized(true);
			$var($Attribute$Compound, x, static_cast<$Attribute$Compound*>(at));
			return x;
		} else {
			$var($Attribute$Compound, c, $new($Attribute$Compound, targetContainerType, $($List::of(p))));
			$var($JCTree$JCAnnotation, annoTree, $nc(m)->Annotation(c));
			bool var$3 = ((int64_t)($nc(on)->flags_field & (uint64_t)$Flags::RECORD)) != 0;
			if (!var$3) {
				bool var$4 = $nc(on)->enclClass() != nullptr;
				var$3 = var$4 && $nc($(on->enclClass()))->isRecord();
			}
			bool isRecordMember = var$3;
			if (!$nc(this->chk)->annotationApplicable(annoTree, on) && (!isRecordMember || isRecordMember && ((int64_t)(on->flags_field & (uint64_t)(int64_t)$Flags::GENERATED_MEMBER)) == 0)) {
				$var($JCDiagnostic$DiagnosticPosition, var$5, $nc(annoTree)->pos());
				$nc(this->log)->error(var$5, $($CompilerProperties$Errors::InvalidRepeatableAnnotationNotApplicable(targetContainerType, on)));
			}
			if (!$nc(this->chk)->validateAnnotationDeferErrors(annoTree)) {
				$var($JCDiagnostic$DiagnosticPosition, var$6, $nc(annoTree)->pos());
				$nc(this->log)->error(var$6, $($CompilerProperties$Errors::DuplicateAnnotationInvalidRepeated(origAnnoType)));
			}
			$assign(c, attributeAnnotation(annoTree, targetContainerType, ctx->env));
			$nc(c)->setSynthesized(true);
			$var($Attribute$Compound, x, c);
			return x;
		}
	} else {
		return nullptr;
	}
}

$Type* Annotate::getContainingType($Attribute$Compound* currentAnno, $JCDiagnostic$DiagnosticPosition* pos, bool reportError) {
	$useLocalCurrentObjectStackCache();
	$var($Type, origAnnoType, $nc(currentAnno)->type);
	$var($Symbol$TypeSymbol, origAnnoDecl, $nc(origAnnoType)->tsym);
	$var($Attribute$Compound, ca, $nc($($nc(origAnnoDecl)->getAnnotationTypeMetadata()))->getRepeatable());
	if (ca == nullptr) {
		if (reportError) {
			$nc(this->log)->error(pos, $($CompilerProperties$Errors::DuplicateAnnotationMissingContainer(origAnnoType)));
		}
		return nullptr;
	}
	return filterSame($(extractContainingType(ca, pos, origAnnoDecl)), origAnnoType);
}

$Type* Annotate::filterSame($Type* t, $Type* s) {
	if (t == nullptr || s == nullptr) {
		return t;
	}
	return $nc(this->types)->isSameType(t, s) ? ($Type*)nullptr : t;
}

$Type* Annotate::extractContainingType($Attribute$Compound* ca, $JCDiagnostic$DiagnosticPosition* pos, $Symbol$TypeSymbol* annoDecl) {
	$useLocalCurrentObjectStackCache();
	if ($nc($nc(ca)->values)->isEmpty()) {
		$nc(this->log)->error(pos, $($CompilerProperties$Errors::InvalidRepeatableAnnotation(annoDecl)));
		return nullptr;
	}
	$var($Pair, p, $cast($Pair, $nc($nc(ca)->values)->head));
	$var($Name, name, $nc(($cast($Symbol$MethodSymbol, $nc(p)->fst)))->name);
	if (name != $nc(this->names)->value) {
		$nc(this->log)->error(pos, $($CompilerProperties$Errors::InvalidRepeatableAnnotation(annoDecl)));
		return nullptr;
	}
	$var($Attribute$Class, attributeClass, nullptr);
	$var($Object, patt38467$temp, p->snd);
	bool var$0 = $instanceOf($Attribute$Class, patt38467$temp);
	if (var$0) {
		$assign(attributeClass, $cast($Attribute$Class, patt38467$temp));
		var$0 = true;
	}
	if (!(var$0)) {
		$nc(this->log)->error(pos, $($CompilerProperties$Errors::InvalidRepeatableAnnotation(annoDecl)));
		return nullptr;
	}
	return $cast($Type, $nc(attributeClass)->getValue());
}

$Symbol$MethodSymbol* Annotate::validateContainer($Type* targetContainerType, $Type* originalAnnoType, $JCDiagnostic$DiagnosticPosition* pos) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$MethodSymbol, containerValueSymbol, nullptr);
	bool fatalError = false;
	$var($Scope, scope, $nc($nc(targetContainerType)->tsym)->members());
	int32_t nr_value_elems = 0;
	bool error = false;
	{
		$var($Iterator, i$, $nc($($nc(scope)->getSymbolsByName($nc(this->names)->value)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, elm, $cast($Symbol, i$->next()));
			{
				++nr_value_elems;
				$init($Kinds$Kind);
				if (nr_value_elems == 1 && $nc(elm)->kind == $Kinds$Kind::MTH) {
					$assign(containerValueSymbol, $cast($Symbol$MethodSymbol, elm));
				} else {
					error = true;
				}
			}
		}
	}
	if (error) {
		$nc(this->log)->error(pos, $($CompilerProperties$Errors::InvalidRepeatableAnnotationMultipleValues(targetContainerType, nr_value_elems)));
		return nullptr;
	} else if (nr_value_elems == 0) {
		$nc(this->log)->error(pos, $($CompilerProperties$Errors::InvalidRepeatableAnnotationNoValue(targetContainerType)));
		return nullptr;
	}
	$init($Kinds$Kind);
	if ($nc(containerValueSymbol)->kind != $Kinds$Kind::MTH) {
		$nc(this->log)->error(pos, $($CompilerProperties$Errors::InvalidRepeatableAnnotationInvalidValue(targetContainerType)));
		fatalError = true;
	}
	$var($Type, valueRetType, $nc($nc(containerValueSymbol)->type)->getReturnType());
	$var($Type, expectedType, $nc(this->types)->makeArrayType(originalAnnoType));
	bool var$0 = $nc(this->types)->isArray(valueRetType);
	if (!(var$0 && $nc(this->types)->isSameType(expectedType, valueRetType))) {
		$nc(this->log)->error(pos, $($CompilerProperties$Errors::InvalidRepeatableAnnotationValueReturn(targetContainerType, valueRetType, expectedType)));
		fatalError = true;
	}
	return fatalError ? ($Symbol$MethodSymbol*)nullptr : containerValueSymbol;
}

$Attribute$Compound* Annotate::makeContainerAnnotation($List* toBeReplaced, $Annotate$AnnotationContext* ctx, $Symbol* sym, bool isTypeParam) {
	$useLocalCurrentObjectStackCache();
	$var($Attribute$Compound, validRepeated, processRepeatedAnnotations(toBeReplaced, ctx, sym, isTypeParam));
	if (validRepeated != nullptr) {
		$var($ListBuffer, manualContainer, $cast($ListBuffer, $nc($nc(ctx)->annotated)->get($nc(validRepeated->type)->tsym)));
		if (manualContainer != nullptr) {
			$var($JCDiagnostic$DiagnosticPosition, var$0, $cast($JCDiagnostic$DiagnosticPosition, $nc(ctx->pos)->get($(manualContainer->first()))));
			$nc(this->log)->error(var$0, $($CompilerProperties$Errors::InvalidRepeatableAnnotationRepeatedAndContainerPresent($nc($nc(($cast($Attribute$Compound, $(manualContainer->first()))))->type)->tsym)));
		}
	}
	return validRepeated;
}

void Annotate::enterTypeAnnotations($List* annotations, $Env* env, $Symbol* s, $JCDiagnostic$DiagnosticPosition* deferPos, bool isTypeParam) {
	$useLocalCurrentObjectStackCache();
	$Assert::checkNonNull($of(s), "Symbol argument to actualEnterTypeAnnotations is nul/"_s);
	$var($JavaFileObject, prev, $nc(this->log)->useSource($nc($nc(env)->toplevel)->sourcefile));
	$var($JCDiagnostic$DiagnosticPosition, prevLintPos, nullptr);
	if (deferPos != nullptr) {
		$assign(prevLintPos, $nc(this->deferredLintHandler)->setPos(deferPos));
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			annotateNow(s, annotations, env, true, isTypeParam);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (prevLintPos != nullptr) {
				$nc(this->deferredLintHandler)->setPos(prevLintPos);
			}
			$nc(this->log)->useSource(prev);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Annotate::queueScanTreeAndTypeAnnotate($JCTree* tree, $Env* env, $Symbol* sym, $JCDiagnostic$DiagnosticPosition* deferPos) {
	$Assert::checkNonNull(sym);
	normal(static_cast<$Runnable*>($$new(Annotate$$Lambda$lambda$queueScanTreeAndTypeAnnotate$4$4, this, tree, env, sym, deferPos)));
}

void Annotate::annotateTypeSecondStage($JCTree* tree, $List* annotations, $Type* storeAt) {
	typeAnnotation(static_cast<$Runnable*>($$new(Annotate$$Lambda$lambda$annotateTypeSecondStage$5$5, this, annotations, storeAt)));
}

void Annotate::annotateTypeParameterSecondStage($JCTree* tree, $List* annotations) {
	typeAnnotation(static_cast<$Runnable*>($$new(Annotate$$Lambda$lambda$annotateTypeParameterSecondStage$6$6, this, annotations)));
}

$Annotate$AnnotationTypeCompleter* Annotate::annotationTypeSourceCompleter() {
	return this->theSourceCompleter;
}

void Annotate::attributeAnnotationType($Env* env) {
	$useLocalCurrentObjectStackCache();
	$Assert::check($nc($nc(($cast($JCTree$JCClassDecl, $nc(env)->tree)))->sym)->isAnnotationType(), "Trying to annotation type complete a non-annotation type"_s);
	$var($JavaFileObject, prev, $nc(this->log)->useSource($nc($nc(env)->toplevel)->sourcefile));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($JCTree$JCClassDecl, tree, $cast($JCTree$JCClassDecl, $nc(env)->tree));
			$var($Annotate$AnnotationTypeVisitor, v, $new($Annotate$AnnotationTypeVisitor, this, this->attr, this->chk, this->syms, this->typeEnvs));
			v->scanAnnotationType(tree);
			$nc($($nc($nc(tree)->sym)->getAnnotationTypeMetadata()))->setRepeatable(v->repeatable);
			$nc($($nc(tree->sym)->getAnnotationTypeMetadata()))->setTarget(v->target);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->log)->useSource(prev);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$Attribute* Annotate::unfinishedDefaultValue() {
	return this->theUnfinishedDefaultValue;
}

void Annotate::newRound() {
	this->blockCount = 1;
}

$Annotate$Queues* Annotate::setQueues($Annotate$Queues* nue) {
	$var($Annotate$Queues, stored, $new($Annotate$Queues, this->q, this->validateQ, this->typesQ, this->afterTypesQ));
	$set(this, q, $nc(nue)->q);
	$set(this, typesQ, nue->typesQ);
	$set(this, afterTypesQ, nue->afterTypesQ);
	$set(this, validateQ, nue->validateQ);
	return stored;
}

void Annotate::lambda$annotateTypeParameterSecondStage$6($List* annotations) {
	$var($List, compounds, fromAnnotations(annotations));
	int32_t var$0 = $nc(annotations)->size();
	$Assert::check(var$0 == $nc(compounds)->size());
}

void Annotate::lambda$annotateTypeSecondStage$5($List* annotations, $Type* storeAt) {
	$useLocalCurrentObjectStackCache();
	$var($List, compounds, fromAnnotations(annotations));
	int32_t var$0 = $nc(annotations)->size();
	$Assert::check(var$0 == $nc(compounds)->size());
	$init($TypeMetadata$Entry$Kind);
	$nc($($nc(storeAt)->getMetadataOfKind($TypeMetadata$Entry$Kind::ANNOTATIONS)))->combine($$new($TypeMetadata$Annotations, compounds));
}

void Annotate::lambda$queueScanTreeAndTypeAnnotate$4($JCTree* tree, $Env* env, $Symbol* sym, $JCDiagnostic$DiagnosticPosition* deferPos) {
	$nc(tree)->accept($$new($Annotate$TypeAnnotate, this, env, sym, deferPos));
}

void Annotate::lambda$annotateDefaultValueLater$3($Env* localEnv, $JCTree$JCExpression* defaultValue) {
	$useLocalCurrentObjectStackCache();
	$var($JavaFileObject, prev, $nc(this->log)->useSource($nc($nc(localEnv)->toplevel)->sourcefile));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->chk)->validateAnnotationTree(defaultValue);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->log)->useSource(prev);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Annotate::lambda$annotateDefaultValueLater$2($Env* localEnv, $JCDiagnostic$DiagnosticPosition* deferPos, $JCTree$JCExpression* defaultValue, $Symbol$MethodSymbol* m) {
	$useLocalCurrentObjectStackCache();
	$var($JavaFileObject, prev, $nc(this->log)->useSource($nc($nc(localEnv)->toplevel)->sourcefile));
	$var($JCDiagnostic$DiagnosticPosition, prevLintPos, $nc(this->deferredLintHandler)->setPos(deferPos));
	{
		$var($Throwable, var$0, nullptr);
		try {
			enterDefaultValue(defaultValue, localEnv, m);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->deferredLintHandler)->setPos(prevLintPos);
			$nc(this->log)->useSource(prev);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Annotate::lambda$annotateLater$1($Env* localEnv, $List* annotations, $Symbol* s) {
	$useLocalCurrentObjectStackCache();
	$var($JavaFileObject, prev, $nc(this->log)->useSource($nc($nc(localEnv)->toplevel)->sourcefile));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->chk)->validateAnnotations(annotations, $($TreeInfo::declarationFor(s, $nc(localEnv)->tree)), s);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->log)->useSource(prev);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Annotate::lambda$annotateLater$0($Symbol* s, $Env* localEnv, $JCDiagnostic$DiagnosticPosition* deferPos, $List* annotations) {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$Kind);
	$Assert::check($nc(s)->kind == $Kinds$Kind::PCK || $nc(s)->annotationsPendingCompletion());
	$var($JavaFileObject, prev, $nc(this->log)->useSource($nc($nc(localEnv)->toplevel)->sourcefile));
	$var($JCDiagnostic$DiagnosticPosition, prevLintPos, deferPos != nullptr ? $nc(this->deferredLintHandler)->setPos(deferPos) : $nc(this->deferredLintHandler)->immediate());
	$var($Lint, prevLint, deferPos != nullptr ? ($Lint*)nullptr : $nc(this->chk)->setLint(this->lint));
	{
		$var($Throwable, var$0, nullptr);
		try {
			bool var$1 = $nc(s)->hasAnnotations();
			if (var$1 && $nc(annotations)->nonEmpty()) {
				$nc(this->log)->error($nc(($cast($JCTree$JCAnnotation, annotations->head)))->pos$, $($CompilerProperties$Errors::AlreadyAnnotated($($Kinds::kindName(s)), s)));
			}
			$Assert::checkNonNull($of(s), "Symbol argument to actualEnterAnnotations is null"_s);
			annotateNow(s, annotations, localEnv, false, false);
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			if (prevLint != nullptr) {
				$nc(this->chk)->setLint(prevLint);
			}
			$nc(this->deferredLintHandler)->setPos(prevLintPos);
			$nc(this->log)->useSource(prev);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void clinit$Annotate($Class* class$) {
	$assignStatic(Annotate::annotateKey, $new($Context$Key));
}

Annotate::Annotate() {
}

$Class* Annotate::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Annotate$$Lambda$lambda$annotateLater$0::classInfo$.name)) {
			return Annotate$$Lambda$lambda$annotateLater$0::load$(name, initialize);
		}
		if (name->equals(Annotate$$Lambda$lambda$annotateLater$1$1::classInfo$.name)) {
			return Annotate$$Lambda$lambda$annotateLater$1$1::load$(name, initialize);
		}
		if (name->equals(Annotate$$Lambda$lambda$annotateDefaultValueLater$2$2::classInfo$.name)) {
			return Annotate$$Lambda$lambda$annotateDefaultValueLater$2$2::load$(name, initialize);
		}
		if (name->equals(Annotate$$Lambda$lambda$annotateDefaultValueLater$3$3::classInfo$.name)) {
			return Annotate$$Lambda$lambda$annotateDefaultValueLater$3$3::load$(name, initialize);
		}
		if (name->equals(Annotate$$Lambda$lambda$queueScanTreeAndTypeAnnotate$4$4::classInfo$.name)) {
			return Annotate$$Lambda$lambda$queueScanTreeAndTypeAnnotate$4$4::load$(name, initialize);
		}
		if (name->equals(Annotate$$Lambda$lambda$annotateTypeSecondStage$5$5::classInfo$.name)) {
			return Annotate$$Lambda$lambda$annotateTypeSecondStage$5$5::load$(name, initialize);
		}
		if (name->equals(Annotate$$Lambda$lambda$annotateTypeParameterSecondStage$6$6::classInfo$.name)) {
			return Annotate$$Lambda$lambda$annotateTypeParameterSecondStage$6$6::load$(name, initialize);
		}
	}
	$loadClass(Annotate, name, initialize, &_Annotate_ClassInfo_, clinit$Annotate, allocate$Annotate);
	return class$;
}

$Class* Annotate::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com