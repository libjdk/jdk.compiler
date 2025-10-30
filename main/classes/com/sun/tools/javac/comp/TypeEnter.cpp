#include <com/sun/tools/javac/comp/TypeEnter.h>

#include <com/sun/tools/javac/code/DeferredLintHandler.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Lint.h>
#include <com/sun/tools/javac/code/Preview.h>
#include <com/sun/tools/javac/code/Scope$ImportScope.h>
#include <com/sun/tools/javac/code/Scope$NamedImportScope.h>
#include <com/sun/tools/javac/code/Scope$StarImportScope.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Source$Feature.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$Completer.h>
#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeAnnotations.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Annotate.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/Enter.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/MemberEnter.h>
#include <com/sun/tools/javac/comp/Todo.h>
#include <com/sun/tools/javac/comp/TypeEnter$DefaultConstructorHelper.h>
#include <com/sun/tools/javac/comp/TypeEnter$ImportsPhase.h>
#include <com/sun/tools/javac/comp/TypeEnvs.h>
#include <com/sun/tools/javac/tree/JCTree$JCAnnotation.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssign.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpressionStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCLiteral.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodInvocation.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/Dependencies$CompletionCause.h>
#include <com/sun/tools/javac/util/Dependencies.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/io/Serializable.h>
#include <java/lang/Iterable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef ASSIGN
#undef COMPOUND
#undef DEPRECATED
#undef DEPRECATED_ANNOTATION
#undef DEPRECATION_ON_IMPORT
#undef LITERAL
#undef MEMBER_ENTER
#undef MTH
#undef NONE
#undef PREVIEW_API
#undef PREVIEW_REFLECTIVE
#undef TRUE
#undef TYPE_ANNOTATIONS

using $DeferredLintHandler = ::com::sun::tools::javac::code::DeferredLintHandler;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Lint = ::com::sun::tools::javac::code::Lint;
using $Preview = ::com::sun::tools::javac::code::Preview;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$ImportScope = ::com::sun::tools::javac::code::Scope$ImportScope;
using $Scope$NamedImportScope = ::com::sun::tools::javac::code::Scope$NamedImportScope;
using $Scope$StarImportScope = ::com::sun::tools::javac::code::Scope$StarImportScope;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Source = ::com::sun::tools::javac::code::Source;
using $Source$Feature = ::com::sun::tools::javac::code::Source$Feature;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$Completer = ::com::sun::tools::javac::code::Symbol$Completer;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeAnnotations = ::com::sun::tools::javac::code::TypeAnnotations;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Annotate = ::com::sun::tools::javac::comp::Annotate;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Check = ::com::sun::tools::javac::comp::Check;
using $Enter = ::com::sun::tools::javac::comp::Enter;
using $Env = ::com::sun::tools::javac::comp::Env;
using $MemberEnter = ::com::sun::tools::javac::comp::MemberEnter;
using $Todo = ::com::sun::tools::javac::comp::Todo;
using $TypeEnter$DefaultConstructorHelper = ::com::sun::tools::javac::comp::TypeEnter$DefaultConstructorHelper;
using $TypeEnter$ImportsPhase = ::com::sun::tools::javac::comp::TypeEnter$ImportsPhase;
using $TypeEnter$Phase = ::com::sun::tools::javac::comp::TypeEnter$Phase;
using $TypeEnvs = ::com::sun::tools::javac::comp::TypeEnvs;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCAnnotation = ::com::sun::tools::javac::tree::JCTree$JCAnnotation;
using $JCTree$JCAssign = ::com::sun::tools::javac::tree::JCTree$JCAssign;
using $JCTree$JCBlock = ::com::sun::tools::javac::tree::JCTree$JCBlock;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCExpressionStatement = ::com::sun::tools::javac::tree::JCTree$JCExpressionStatement;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCLiteral = ::com::sun::tools::javac::tree::JCTree$JCLiteral;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCMethodInvocation = ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation;
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $Dependencies = ::com::sun::tools::javac::util::Dependencies;
using $Dependencies$CompletionCause = ::com::sun::tools::javac::util::Dependencies$CompletionCause;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class TypeEnter$$Lambda$lambda$ensureImportsChecked$0 : public $Runnable {
	$class(TypeEnter$$Lambda$lambda$ensureImportsChecked$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(TypeEnter* inst, $JCTree$JCCompilationUnit* tree, $Env* topEnv) {
		$set(this, inst$, inst);
		$set(this, tree, tree);
		$set(this, topEnv, topEnv);
	}
	virtual void run() override {
		$nc(inst$)->lambda$ensureImportsChecked$0(tree, topEnv);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TypeEnter$$Lambda$lambda$ensureImportsChecked$0>());
	}
	TypeEnter* inst$ = nullptr;
	$JCTree$JCCompilationUnit* tree = nullptr;
	$Env* topEnv = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TypeEnter$$Lambda$lambda$ensureImportsChecked$0::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TypeEnter$$Lambda$lambda$ensureImportsChecked$0, inst$)},
	{"tree", "Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;", nullptr, $PUBLIC, $field(TypeEnter$$Lambda$lambda$ensureImportsChecked$0, tree)},
	{"topEnv", "Lcom/sun/tools/javac/comp/Env;", nullptr, $PUBLIC, $field(TypeEnter$$Lambda$lambda$ensureImportsChecked$0, topEnv)},
	{}
};
$MethodInfo TypeEnter$$Lambda$lambda$ensureImportsChecked$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/TypeEnter;Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;Lcom/sun/tools/javac/comp/Env;)V", nullptr, $PUBLIC, $method(static_cast<void(TypeEnter$$Lambda$lambda$ensureImportsChecked$0::*)(TypeEnter*,$JCTree$JCCompilationUnit*,$Env*)>(&TypeEnter$$Lambda$lambda$ensureImportsChecked$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TypeEnter$$Lambda$lambda$ensureImportsChecked$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.TypeEnter$$Lambda$lambda$ensureImportsChecked$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* TypeEnter$$Lambda$lambda$ensureImportsChecked$0::load$($String* name, bool initialize) {
	$loadClass(TypeEnter$$Lambda$lambda$ensureImportsChecked$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TypeEnter$$Lambda$lambda$ensureImportsChecked$0::class$ = nullptr;

class TypeEnter$$Lambda$lambda$complete$1$1 : public $Runnable {
	$class(TypeEnter$$Lambda$lambda$complete$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TypeEnter::lambda$complete$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TypeEnter$$Lambda$lambda$complete$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TypeEnter$$Lambda$lambda$complete$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TypeEnter$$Lambda$lambda$complete$1$1::*)()>(&TypeEnter$$Lambda$lambda$complete$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TypeEnter$$Lambda$lambda$complete$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.TypeEnter$$Lambda$lambda$complete$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TypeEnter$$Lambda$lambda$complete$1$1::load$($String* name, bool initialize) {
	$loadClass(TypeEnter$$Lambda$lambda$complete$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TypeEnter$$Lambda$lambda$complete$1$1::class$ = nullptr;

class TypeEnter$$Lambda$lambda$lookupMethod$2$2 : public $Predicate {
	$class(TypeEnter$$Lambda$lambda$lookupMethod$2$2, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* s) override {
		 return TypeEnter::lambda$lookupMethod$2($cast($Symbol, s));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TypeEnter$$Lambda$lambda$lookupMethod$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TypeEnter$$Lambda$lambda$lookupMethod$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TypeEnter$$Lambda$lambda$lookupMethod$2$2::*)()>(&TypeEnter$$Lambda$lambda$lookupMethod$2$2::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo TypeEnter$$Lambda$lambda$lookupMethod$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.TypeEnter$$Lambda$lambda$lookupMethod$2$2",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* TypeEnter$$Lambda$lambda$lookupMethod$2$2::load$($String* name, bool initialize) {
	$loadClass(TypeEnter$$Lambda$lambda$lookupMethod$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TypeEnter$$Lambda$lambda$lookupMethod$2$2::class$ = nullptr;

class TypeEnter$$Lambda$Ident$3 : public $Function {
	$class(TypeEnter$$Lambda$Ident$3, $NO_CLASS_INIT, $Function)
public:
	void init$($TreeMaker* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* name) override {
		 return $of($nc(inst$)->Ident($cast($Name, name)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TypeEnter$$Lambda$Ident$3>());
	}
	$TreeMaker* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TypeEnter$$Lambda$Ident$3::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TypeEnter$$Lambda$Ident$3, inst$)},
	{}
};
$MethodInfo TypeEnter$$Lambda$Ident$3::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/tree/TreeMaker;)V", nullptr, $PUBLIC, $method(static_cast<void(TypeEnter$$Lambda$Ident$3::*)($TreeMaker*)>(&TypeEnter$$Lambda$Ident$3::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo TypeEnter$$Lambda$Ident$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.TypeEnter$$Lambda$Ident$3",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* TypeEnter$$Lambda$Ident$3::load$($String* name, bool initialize) {
	$loadClass(TypeEnter$$Lambda$Ident$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TypeEnter$$Lambda$Ident$3::class$ = nullptr;

class TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$3$4 : public $Predicate {
	$class(TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$3$4, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* e) override {
		 return TypeEnter::lambda$setFlagIfAttributeTrue$3($cast($JCTree$JCExpression, e));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$3$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$3$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$3$4::*)()>(&TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$3$4::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$3$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$3$4",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$3$4::load$($String* name, bool initialize) {
	$loadClass(TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$3$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$3$4::class$ = nullptr;

class TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$4$5 : public $Function {
	$class(TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$4$5, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* e) override {
		 return $of(TypeEnter::lambda$setFlagIfAttributeTrue$4($cast($JCTree$JCExpression, e)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$4$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$4$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$4$5::*)()>(&TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$4$5::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$4$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$4$5",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$4$5::load$($String* name, bool initialize) {
	$loadClass(TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$4$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$4$5::class$ = nullptr;

class TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$5$6 : public $Predicate {
	$class(TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$5$6, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Name* attribute) {
		$set(this, attribute, attribute);
	}
	virtual bool test(Object$* assign) override {
		 return TypeEnter::lambda$setFlagIfAttributeTrue$5(attribute, $cast($JCTree$JCAssign, assign));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$5$6>());
	}
	$Name* attribute = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$5$6::fieldInfos[2] = {
	{"attribute", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC, $field(TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$5$6, attribute)},
	{}
};
$MethodInfo TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$5$6::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Name;)V", nullptr, $PUBLIC, $method(static_cast<void(TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$5$6::*)($Name*)>(&TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$5$6::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$5$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$5$6",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$5$6::load$($String* name, bool initialize) {
	$loadClass(TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$5$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$5$6::class$ = nullptr;

class TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$6$7 : public $Consumer {
	$class(TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$6$7, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Symbol* sym, int64_t flag) {
		$set(this, sym, sym);
		this->flag = flag;
	}
	virtual void accept(Object$* assign) override {
		TypeEnter::lambda$setFlagIfAttributeTrue$6(sym, flag, $cast($JCTree$JCAssign, assign));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$6$7>());
	}
	$Symbol* sym = nullptr;
	int64_t flag = 0;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$6$7::fieldInfos[3] = {
	{"sym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $field(TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$6$7, sym)},
	{"flag", "J", nullptr, $PUBLIC, $field(TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$6$7, flag)},
	{}
};
$MethodInfo TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$6$7::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol;J)V", nullptr, $PUBLIC, $method(static_cast<void(TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$6$7::*)($Symbol*,int64_t)>(&TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$6$7::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$6$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$6$7",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$6$7::load$($String* name, bool initialize) {
	$loadClass(TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$6$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$6$7::class$ = nullptr;

$FieldInfo _TypeEnter_FieldInfo_[] = {
	{"typeEnterKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/comp/TypeEnter;>;", $PROTECTED | $STATIC | $FINAL, $staticField(TypeEnter, typeEnterKey)},
	{"checkClash", "Z", nullptr, $STATIC | $FINAL, $constField(TypeEnter, checkClash)},
	{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, $PRIVATE | $FINAL, $field(TypeEnter, names)},
	{"enter", "Lcom/sun/tools/javac/comp/Enter;", nullptr, $PRIVATE | $FINAL, $field(TypeEnter, enter)},
	{"memberEnter", "Lcom/sun/tools/javac/comp/MemberEnter;", nullptr, $PRIVATE | $FINAL, $field(TypeEnter, memberEnter)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $PRIVATE | $FINAL, $field(TypeEnter, log)},
	{"chk", "Lcom/sun/tools/javac/comp/Check;", nullptr, $PRIVATE | $FINAL, $field(TypeEnter, chk)},
	{"attr", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $PRIVATE | $FINAL, $field(TypeEnter, attr)},
	{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $PRIVATE | $FINAL, $field(TypeEnter, syms)},
	{"make", "Lcom/sun/tools/javac/tree/TreeMaker;", nullptr, $PRIVATE | $FINAL, $field(TypeEnter, make)},
	{"todo", "Lcom/sun/tools/javac/comp/Todo;", nullptr, $PRIVATE | $FINAL, $field(TypeEnter, todo)},
	{"annotate", "Lcom/sun/tools/javac/comp/Annotate;", nullptr, $PRIVATE | $FINAL, $field(TypeEnter, annotate)},
	{"typeAnnotations", "Lcom/sun/tools/javac/code/TypeAnnotations;", nullptr, $PRIVATE | $FINAL, $field(TypeEnter, typeAnnotations)},
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, $PRIVATE | $FINAL, $field(TypeEnter, types)},
	{"diags", "Lcom/sun/tools/javac/util/JCDiagnostic$Factory;", nullptr, $PRIVATE | $FINAL, $field(TypeEnter, diags)},
	{"deferredLintHandler", "Lcom/sun/tools/javac/code/DeferredLintHandler;", nullptr, $PRIVATE | $FINAL, $field(TypeEnter, deferredLintHandler)},
	{"lint", "Lcom/sun/tools/javac/code/Lint;", nullptr, $PRIVATE | $FINAL, $field(TypeEnter, lint)},
	{"typeEnvs", "Lcom/sun/tools/javac/comp/TypeEnvs;", nullptr, $PRIVATE | $FINAL, $field(TypeEnter, typeEnvs)},
	{"dependencies", "Lcom/sun/tools/javac/util/Dependencies;", nullptr, $PRIVATE | $FINAL, $field(TypeEnter, dependencies)},
	{"preview", "Lcom/sun/tools/javac/code/Preview;", nullptr, $PRIVATE | $FINAL, $field(TypeEnter, preview)},
	{"allowTypeAnnos", "Z", nullptr, 0, $field(TypeEnter, allowTypeAnnos)},
	{"allowDeprecationOnImport", "Z", nullptr, 0, $field(TypeEnter, allowDeprecationOnImport)},
	{"completionEnabled", "Z", nullptr, 0, $field(TypeEnter, completionEnabled)},
	{"completeClass", "Lcom/sun/tools/javac/comp/TypeEnter$ImportsPhase;", nullptr, $PRIVATE | $FINAL, $field(TypeEnter, completeClass)},
	{"topLevelPhase", "Lcom/sun/tools/javac/comp/TypeEnter$Phase;", nullptr, $PRIVATE, $field(TypeEnter, topLevelPhase)},
	{}
};

$MethodInfo _TypeEnter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(TypeEnter::*)($Context*)>(&TypeEnter::init$))},
	{"complete", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.code.Symbol$CompletionFailure"},
	{"defaultConstructor", "(Lcom/sun/tools/javac/tree/TreeMaker;Lcom/sun/tools/javac/comp/TypeEnter$DefaultConstructorHelper;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, 0},
	{"ensureImportsChecked", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;>;)V", $PROTECTED},
	{"finishImports", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;Ljava/lang/Runnable;)V", nullptr, 0},
	{"handleDeprecatedAnnotations", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Symbol;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;Lcom/sun/tools/javac/code/Symbol;)V", $PRIVATE, $method(static_cast<void(TypeEnter::*)($List*,$Symbol*)>(&TypeEnter::handleDeprecatedAnnotations))},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/comp/TypeEnter;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TypeEnter*(*)($Context*)>(&TypeEnter::instance))},
	{"lambda$complete$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&TypeEnter::lambda$complete$1))},
	{"lambda$ensureImportsChecked$0", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;Lcom/sun/tools/javac/comp/Env;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(TypeEnter::*)($JCTree$JCCompilationUnit*,$Env*)>(&TypeEnter::lambda$ensureImportsChecked$0))},
	{"lambda$lookupMethod$2", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Symbol*)>(&TypeEnter::lambda$lookupMethod$2))},
	{"lambda$setFlagIfAttributeTrue$3", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($JCTree$JCExpression*)>(&TypeEnter::lambda$setFlagIfAttributeTrue$3))},
	{"lambda$setFlagIfAttributeTrue$4", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCAssign;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$JCTree$JCAssign*(*)($JCTree$JCExpression*)>(&TypeEnter::lambda$setFlagIfAttributeTrue$4))},
	{"lambda$setFlagIfAttributeTrue$5", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/tree/JCTree$JCAssign;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Name*,$JCTree$JCAssign*)>(&TypeEnter::lambda$setFlagIfAttributeTrue$5))},
	{"lambda$setFlagIfAttributeTrue$6", "(Lcom/sun/tools/javac/code/Symbol;JLcom/sun/tools/javac/tree/JCTree$JCAssign;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Symbol*,int64_t,$JCTree$JCAssign*)>(&TypeEnter::lambda$setFlagIfAttributeTrue$6))},
	{"lookupMethod", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", $PRIVATE, $method(static_cast<$Symbol$MethodSymbol*(TypeEnter::*)($Symbol$TypeSymbol*,$Name*,$List*)>(&TypeEnter::lookupMethod))},
	{"markDeprecated", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PUBLIC},
	{"setFlagIfAttributeTrue", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/Name;J)V", nullptr, $PRIVATE, $method(static_cast<void(TypeEnter::*)($JCTree$JCAnnotation*,$Symbol*,$Name*,int64_t)>(&TypeEnter::setFlagIfAttributeTrue))},
	{}
};

$InnerClassInfo _TypeEnter_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Symbol$Completer", "com.sun.tools.javac.code.Symbol", "Completer", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.comp.TypeEnter$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.comp.TypeEnter$RecordConstructorHelper", "com.sun.tools.javac.comp.TypeEnter", "RecordConstructorHelper", 0},
	{"com.sun.tools.javac.comp.TypeEnter$AnonClassConstructorHelper", "com.sun.tools.javac.comp.TypeEnter", "AnonClassConstructorHelper", 0},
	{"com.sun.tools.javac.comp.TypeEnter$BasicConstructorHelper", "com.sun.tools.javac.comp.TypeEnter", "BasicConstructorHelper", 0},
	{"com.sun.tools.javac.comp.TypeEnter$DefaultConstructorHelper", "com.sun.tools.javac.comp.TypeEnter", "DefaultConstructorHelper", $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.comp.TypeEnter$MembersPhase", "com.sun.tools.javac.comp.TypeEnter", "MembersPhase", $PRIVATE | $FINAL},
	{"com.sun.tools.javac.comp.TypeEnter$RecordPhase", "com.sun.tools.javac.comp.TypeEnter", "RecordPhase", $PRIVATE | $FINAL},
	{"com.sun.tools.javac.comp.TypeEnter$AbstractMembersPhase", "com.sun.tools.javac.comp.TypeEnter", "AbstractMembersPhase", $PRIVATE | $ABSTRACT},
	{"com.sun.tools.javac.comp.TypeEnter$HeaderPhase", "com.sun.tools.javac.comp.TypeEnter", "HeaderPhase", $PRIVATE | $FINAL},
	{"com.sun.tools.javac.comp.TypeEnter$PermitsPhase", "com.sun.tools.javac.comp.TypeEnter", "PermitsPhase", $PRIVATE | $FINAL},
	{"com.sun.tools.javac.comp.TypeEnter$HierarchyPhase", "com.sun.tools.javac.comp.TypeEnter", "HierarchyPhase", $PRIVATE | $FINAL},
	{"com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase", "com.sun.tools.javac.comp.TypeEnter", "AbstractHeaderPhase", $PRIVATE | $ABSTRACT},
	{"com.sun.tools.javac.comp.TypeEnter$ImportsPhase", "com.sun.tools.javac.comp.TypeEnter", "ImportsPhase", $PRIVATE | $FINAL},
	{"com.sun.tools.javac.comp.TypeEnter$Phase", "com.sun.tools.javac.comp.TypeEnter", "Phase", $ABSTRACT},
	{}
};

$ClassInfo _TypeEnter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.TypeEnter",
	"java.lang.Object",
	"com.sun.tools.javac.code.Symbol$Completer",
	_TypeEnter_FieldInfo_,
	_TypeEnter_MethodInfo_,
	nullptr,
	nullptr,
	_TypeEnter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.TypeEnter$1,com.sun.tools.javac.comp.TypeEnter$RecordConstructorHelper,com.sun.tools.javac.comp.TypeEnter$AnonClassConstructorHelper,com.sun.tools.javac.comp.TypeEnter$BasicConstructorHelper,com.sun.tools.javac.comp.TypeEnter$DefaultConstructorHelper,com.sun.tools.javac.comp.TypeEnter$MembersPhase,com.sun.tools.javac.comp.TypeEnter$RecordPhase,com.sun.tools.javac.comp.TypeEnter$AbstractMembersPhase,com.sun.tools.javac.comp.TypeEnter$HeaderPhase,com.sun.tools.javac.comp.TypeEnter$PermitsPhase,com.sun.tools.javac.comp.TypeEnter$HierarchyPhase,com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase,com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase$Synthesizer,com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase$Synthesizer$2,com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase$Synthesizer$1,com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase$1,com.sun.tools.javac.comp.TypeEnter$ImportsPhase,com.sun.tools.javac.comp.TypeEnter$Phase"
};

$Object* allocate$TypeEnter($Class* clazz) {
	return $of($alloc(TypeEnter));
}

$Context$Key* TypeEnter::typeEnterKey = nullptr;

TypeEnter* TypeEnter::instance($Context* context) {
	$init(TypeEnter);
	$var(TypeEnter, instance, $cast(TypeEnter, $nc(context)->get(TypeEnter::typeEnterKey)));
	if (instance == nullptr) {
		$assign(instance, $new(TypeEnter, context));
	}
	return instance;
}

void TypeEnter::init$($Context* context) {
	this->completionEnabled = true;
	$set(this, completeClass, $new($TypeEnter$ImportsPhase, this));
	$nc(context)->put(TypeEnter::typeEnterKey, $of(this));
	$set(this, names, $Names::instance(context));
	$set(this, enter, $Enter::instance(context));
	$set(this, memberEnter, $MemberEnter::instance(context));
	$set(this, log, $Log::instance(context));
	$set(this, chk, $Check::instance(context));
	$set(this, attr, $Attr::instance(context));
	$set(this, syms, $Symtab::instance(context));
	$set(this, make, $TreeMaker::instance(context));
	$set(this, todo, $Todo::instance(context));
	$set(this, annotate, $Annotate::instance(context));
	$set(this, typeAnnotations, $TypeAnnotations::instance(context));
	$set(this, types, $Types::instance(context));
	$set(this, diags, $JCDiagnostic$Factory::instance(context));
	$set(this, deferredLintHandler, $DeferredLintHandler::instance(context));
	$set(this, lint, $Lint::instance(context));
	$set(this, typeEnvs, $TypeEnvs::instance(context));
	$set(this, dependencies, $Dependencies::instance(context));
	$set(this, preview, $Preview::instance(context));
	$Source* source = $Source::instance(context);
	$init($Source$Feature);
	this->allowTypeAnnos = $Source$Feature::TYPE_ANNOTATIONS->allowedInSource(source);
	this->allowDeprecationOnImport = $Source$Feature::DEPRECATION_ON_IMPORT->allowedInSource(source);
}

void TypeEnter::ensureImportsChecked($List* trees) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(trees)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree$JCCompilationUnit, tree, $cast($JCTree$JCCompilationUnit, i$->next()));
			{
				if (!$nc($nc(tree)->starImportScope)->isFilled()) {
					$var($Env, topEnv, $nc(this->enter)->topLevelEnv(tree));
					finishImports(tree, static_cast<$Runnable*>($$new(TypeEnter$$Lambda$lambda$ensureImportsChecked$0, this, tree, topEnv)));
				}
			}
		}
	}
}

void TypeEnter::complete($Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	if (!this->completionEnabled) {
		$Assert::check(((int64_t)($nc(sym)->flags() & (uint64_t)(int64_t)$Flags::COMPOUND)) == 0);
		$set($nc(sym), completer, this);
		return;
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->annotate)->blockAnnotations();
			$nc(sym)->flags_field |= 0x10000000;
			$var($List, queue, nullptr);
			$init($Dependencies$CompletionCause);
			$nc(this->dependencies)->push($cast($Symbol$ClassSymbol, sym), $Dependencies$CompletionCause::MEMBER_ENTER);
			{
				$var($Throwable, var$1, nullptr);
				try {
					$assign(queue, $nc(this->completeClass)->completeEnvs($($List::of($($nc(this->typeEnvs)->get($cast($Symbol$ClassSymbol, sym)))))));
				} catch ($Throwable& var$2) {
					$assign(var$1, var$2);
				} /*finally*/ {
					$nc(this->dependencies)->pop();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
			if (!$nc(queue)->isEmpty()) {
				$var($Set, seen, $new($HashSet));
				{
					$var($Iterator, i$, queue->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Env, env, $cast($Env, i$->next()));
						{
							bool var$3 = $nc($nc($nc(env)->toplevel)->defs)->contains(env->enclClass);
							if (var$3 && seen->add(env->toplevel)) {
								finishImports(env->toplevel, static_cast<$Runnable*>($$new(TypeEnter$$Lambda$lambda$complete$1$1)));
							}
						}
					}
				}
			}
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} /*finally*/ {
			$nc(this->annotate)->unblockAnnotations();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TypeEnter::finishImports($JCTree$JCCompilationUnit* toplevel, $Runnable* resolve) {
	$useLocalCurrentObjectStackCache();
	$var($JavaFileObject, prev, $nc(this->log)->useSource($nc(toplevel)->sourcefile));
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(resolve)->run();
				$nc(this->chk)->checkImportsUnique(toplevel);
				$nc(this->chk)->checkImportsResolvable(toplevel);
				$nc(this->chk)->checkImportedPackagesObservable(toplevel);
				$nc($nc(toplevel)->namedImportScope)->finalizeScope();
				$nc(toplevel->starImportScope)->finalizeScope();
			} catch ($Symbol$CompletionFailure& cf) {
				$nc(this->chk)->completionError($($nc(toplevel)->pos()), cf);
			}
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

$Symbol$MethodSymbol* TypeEnter::lookupMethod($Symbol$TypeSymbol* tsym, $Name* name, $List* argtypes) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($nc($($nc(tsym)->members()))->getSymbolsByName(name, static_cast<$Predicate*>($$new(TypeEnter$$Lambda$lambda$lookupMethod$2$2)))))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, s, $cast($Symbol, i$->next()));
			{
				if ($nc(this->types)->isSameTypes($($nc($nc(s)->type)->getParameterTypes()), argtypes)) {
					return $cast($Symbol$MethodSymbol, s);
				}
			}
		}
	}
	return nullptr;
}

$JCTree* TypeEnter::defaultConstructor($TreeMaker* make, $TypeEnter$DefaultConstructorHelper* helper) {
	$useLocalCurrentObjectStackCache();
	$var($Type, initType, $nc(helper)->constructorType());
	$var($Symbol$MethodSymbol, initSym, helper->constructorSymbol());
	$var($ListBuffer, stats, $new($ListBuffer));
	if ($nc($(helper->owner()))->type != $nc(this->syms)->objectType) {
		$var($JCTree$JCExpression, meth, nullptr);
		$init($TypeTag);
		if (!$nc($(helper->enclosingType()))->hasTag($TypeTag::NONE)) {
			$assign(meth, $nc(make)->Select($(static_cast<$JCTree$JCExpression*>(make->Ident($cast($Symbol, $nc($nc(initSym)->params$)->head)))), $nc(this->names)->_super));
		} else {
			$assign(meth, $nc(make)->Ident($nc(this->names)->_super));
		}
		$var($List, typeargs, $nc($($nc(initType)->getTypeArguments()))->nonEmpty() ? $nc(make)->Types($($nc(initType)->getTypeArguments())) : ($List*)nullptr);
		$var($JCTree$JCStatement, superCall, make->Exec($(make->Apply(typeargs, meth, $($nc($(helper->superArgs()))->map(static_cast<$Function*>($$new(TypeEnter$$Lambda$Ident$3, static_cast<$TreeMaker*>(make)))))))));
		stats->add(superCall);
	}
	$var($JCTree$JCMethodDecl, result, $nc(make)->MethodDef(initSym, $(make->Block(0, $(stats->toList())))));
	return helper->finalAdjustment(result);
}

void TypeEnter::markDeprecated($Symbol* sym, $List* annotations, $Env* env) {
	$nc(this->attr)->attribAnnotationTypes(annotations, env);
	handleDeprecatedAnnotations(annotations, sym);
}

void TypeEnter::handleDeprecatedAnnotations($List* annotations, $Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	{
		$var($List, al, annotations);
		for (; !$nc(al)->isEmpty(); $assign(al, $nc(al)->tail)) {
			$var($JCTree$JCAnnotation, a, $cast($JCTree$JCAnnotation, al->head));
			if ($nc($nc(a)->annotationType)->type == $nc(this->syms)->deprecatedType) {
				$nc(sym)->flags_field |= ($Flags::DEPRECATED | $Flags::DEPRECATED_ANNOTATION);
				setFlagIfAttributeTrue(a, sym, $nc(this->names)->forRemoval, 0x0080000000000000);
			} else if ($nc(a->annotationType)->type == $nc(this->syms)->previewFeatureType) {
				$nc(sym)->flags_field |= $Flags::PREVIEW_API;
				setFlagIfAttributeTrue(a, sym, $nc(this->names)->reflective, $Flags::PREVIEW_REFLECTIVE);
			}
		}
	}
}

void TypeEnter::setFlagIfAttributeTrue($JCTree$JCAnnotation* a, $Symbol* sym, $Name* attribute, int64_t flag) {
	$useLocalCurrentObjectStackCache();
	$nc($($nc($($nc($($nc($($nc($($nc($nc(a)->args)->stream()))->filter(static_cast<$Predicate*>($$new(TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$3$4)))))->map(static_cast<$Function*>($$new(TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$4$5)))))->filter(static_cast<$Predicate*>($$new(TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$5$6, attribute)))))->findFirst()))->ifPresent(static_cast<$Consumer*>($$new(TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$6$7, sym, flag)));
}

void TypeEnter::lambda$setFlagIfAttributeTrue$6($Symbol* sym, int64_t flag, $JCTree$JCAssign* assign) {
	$init(TypeEnter);
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCExpression, rhs, $TreeInfo::skipParens($nc(assign)->rhs));
	$init($JCTree$Tag);
	bool var$0 = $nc(rhs)->hasTag($JCTree$Tag::LITERAL);
	$init($Boolean);
	if (var$0 && $nc($Boolean::TRUE)->equals($($nc(($cast($JCTree$JCLiteral, rhs)))->getValue()))) {
		$nc(sym)->flags_field |= flag;
	}
}

bool TypeEnter::lambda$setFlagIfAttributeTrue$5($Name* attribute, $JCTree$JCAssign* assign) {
	$init(TypeEnter);
	return $TreeInfo::name($nc(assign)->lhs) == attribute;
}

$JCTree$JCAssign* TypeEnter::lambda$setFlagIfAttributeTrue$4($JCTree$JCExpression* e) {
	$init(TypeEnter);
	return $cast($JCTree$JCAssign, e);
}

bool TypeEnter::lambda$setFlagIfAttributeTrue$3($JCTree$JCExpression* e) {
	$init(TypeEnter);
	$init($JCTree$Tag);
	return $nc(e)->hasTag($JCTree$Tag::ASSIGN);
}

bool TypeEnter::lambda$lookupMethod$2($Symbol* s) {
	$init(TypeEnter);
	$init($Kinds$Kind);
	return $nc(s)->kind == $Kinds$Kind::MTH;
}

void TypeEnter::lambda$complete$1() {
	$init(TypeEnter);
}

void TypeEnter::lambda$ensureImportsChecked$0($JCTree$JCCompilationUnit* tree, $Env* topEnv) {
	$nc(this->completeClass)->resolveImports(tree, topEnv);
}

void clinit$TypeEnter($Class* class$) {
	$assignStatic(TypeEnter::typeEnterKey, $new($Context$Key));
}

TypeEnter::TypeEnter() {
}

$Class* TypeEnter::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TypeEnter$$Lambda$lambda$ensureImportsChecked$0::classInfo$.name)) {
			return TypeEnter$$Lambda$lambda$ensureImportsChecked$0::load$(name, initialize);
		}
		if (name->equals(TypeEnter$$Lambda$lambda$complete$1$1::classInfo$.name)) {
			return TypeEnter$$Lambda$lambda$complete$1$1::load$(name, initialize);
		}
		if (name->equals(TypeEnter$$Lambda$lambda$lookupMethod$2$2::classInfo$.name)) {
			return TypeEnter$$Lambda$lambda$lookupMethod$2$2::load$(name, initialize);
		}
		if (name->equals(TypeEnter$$Lambda$Ident$3::classInfo$.name)) {
			return TypeEnter$$Lambda$Ident$3::load$(name, initialize);
		}
		if (name->equals(TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$3$4::classInfo$.name)) {
			return TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$3$4::load$(name, initialize);
		}
		if (name->equals(TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$4$5::classInfo$.name)) {
			return TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$4$5::load$(name, initialize);
		}
		if (name->equals(TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$5$6::classInfo$.name)) {
			return TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$5$6::load$(name, initialize);
		}
		if (name->equals(TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$6$7::classInfo$.name)) {
			return TypeEnter$$Lambda$lambda$setFlagIfAttributeTrue$6$7::load$(name, initialize);
		}
	}
	$loadClass(TypeEnter, name, initialize, &_TypeEnter_ClassInfo_, clinit$TypeEnter, allocate$TypeEnter);
	return class$;
}

$Class* TypeEnter::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com