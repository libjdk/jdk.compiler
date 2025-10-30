#include <com/sun/tools/javac/api/JavacScope.h>

#include <com/sun/tools/javac/api/JavacScope$1.h>
#include <com/sun/tools/javac/api/JavacScope$2.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/AttrContext.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <java/io/Serializable.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/Predicate.h>
#include <javax/lang/model/element/ExecutableElement.h>
#include <javax/lang/model/element/TypeElement.h>
#include <jcpp.h>

#undef ERR
#undef VALIDATOR

using $Scope = ::com::sun::source::tree::Scope;
using $JavacScope$1 = ::com::sun::tools::javac::api::JavacScope$1;
using $JavacScope$2 = ::com::sun::tools::javac::api::JavacScope$2;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $AttrContext = ::com::sun::tools::javac::comp::AttrContext;
using $Env = ::com::sun::tools::javac::comp::Env;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Predicate = ::java::util::function::Predicate;
using $ExecutableElement = ::javax::lang::model::element::ExecutableElement;
using $TypeElement = ::javax::lang::model::element::TypeElement;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class JavacScope$$Lambda$lambda$static$0 : public $Predicate {
	$class(JavacScope$$Lambda$lambda$static$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* sym) override {
		 return JavacScope::lambda$static$0($cast($Symbol, sym));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacScope$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavacScope$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavacScope$$Lambda$lambda$static$0::*)()>(&JavacScope$$Lambda$lambda$static$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacScope$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.api.JavacScope$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* JavacScope$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(JavacScope$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacScope$$Lambda$lambda$static$0::class$ = nullptr;

$FieldInfo _JavacScope_FieldInfo_[] = {
	{"VALIDATOR", "Ljava/util/function/Predicate;", "Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;", $PRIVATE | $STATIC | $FINAL, $staticField(JavacScope, VALIDATOR)},
	{"env", "Lcom/sun/tools/javac/comp/Env;", "Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PROTECTED | $FINAL, $field(JavacScope, env)},
	{}
};

$MethodInfo _JavacScope_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PRIVATE, $method(static_cast<void(JavacScope::*)($Env*)>(&JavacScope::init$))},
	{"create", "(Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/api/JavacScope;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/api/JavacScope;", $STATIC, $method(static_cast<JavacScope*(*)($Env*)>(&JavacScope::create))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getEnclosingClass", "()Ljavax/lang/model/element/TypeElement;", nullptr, $PUBLIC},
	{"getEnclosingMethod", "()Ljavax/lang/model/element/ExecutableElement;", nullptr, $PUBLIC},
	{"getEnclosingScope", "()Lcom/sun/tools/javac/api/JavacScope;", nullptr, $PUBLIC},
	{"getEnv", "()Lcom/sun/tools/javac/comp/Env;", "()Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PUBLIC},
	{"getLocalElements", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<+Ljavax/lang/model/element/Element;>;", $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isStarImportScope", "()Z", nullptr, $PUBLIC},
	{"lambda$static$0", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Symbol*)>(&JavacScope::lambda$static$0))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JavacScope_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.JavacScope$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.api.JavacScope$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JavacScope_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.api.JavacScope",
	"java.lang.Object",
	"com.sun.source.tree.Scope",
	_JavacScope_FieldInfo_,
	_JavacScope_MethodInfo_,
	nullptr,
	nullptr,
	_JavacScope_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.JavacScope$2,com.sun.tools.javac.api.JavacScope$1"
};

$Object* allocate$JavacScope($Class* clazz) {
	return $of($alloc(JavacScope));
}

$Predicate* JavacScope::VALIDATOR = nullptr;

JavacScope* JavacScope::create($Env* env) {
	$init(JavacScope);
	if ($nc(env)->outer == nullptr || $nc(env)->outer == env) {
		return $new($JavacScope$1, env);
	} else {
		return $new(JavacScope, env);
	}
}

void JavacScope::init$($Env* env) {
	$set(this, env, $cast($Env, $Assert::checkNonNull(env)));
}

JavacScope* JavacScope::getEnclosingScope() {
	if ($nc(this->env)->outer != nullptr && $nc(this->env)->outer != this->env) {
		return create($nc(this->env)->outer);
	} else {
		return $new($JavacScope$2, this, this->env);
	}
}

$TypeElement* JavacScope::getEnclosingClass() {
	return ($nc(this->env)->outer == nullptr || $nc(this->env)->outer == this->env ? ($TypeElement*)nullptr : $as($TypeElement, $nc($nc(this->env)->enclClass)->sym));
}

$ExecutableElement* JavacScope::getEnclosingMethod() {
	return ($nc(this->env)->enclMethod == nullptr ? ($ExecutableElement*)nullptr : $as($ExecutableElement, $nc($nc(this->env)->enclMethod)->sym));
}

$Iterable* JavacScope::getLocalElements() {
	return $nc(($cast($AttrContext, $nc(this->env)->info)))->getLocalElements();
}

$Env* JavacScope::getEnv() {
	return this->env;
}

bool JavacScope::isStarImportScope() {
	return false;
}

bool JavacScope::equals(Object$* other) {
	$var(JavacScope, javacScope, nullptr);
	bool var$2 = $instanceOf(JavacScope, other);
	if (var$2) {
		$assign(javacScope, $cast(JavacScope, other));
		var$2 = true;
	}
	bool var$1 = var$2;
	bool var$0 = var$1 && $nc($of(this->env))->equals($nc(javacScope)->env);
	if (var$0) {
		bool var$3 = isStarImportScope();
		var$0 = var$3 == $nc(javacScope)->isStarImportScope();
	}
	return var$0;
}

int32_t JavacScope::hashCode() {
	int32_t var$0 = $nc($of(this->env))->hashCode();
	return var$0 + (isStarImportScope() ? 1 : 0);
}

$String* JavacScope::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({"JavacScope[env="_s, this->env, ",starImport="_s}));
	$var($String, var$0, $$concat(var$1, $$str(isStarImportScope())));
	return $concat(var$0, "]");
}

bool JavacScope::lambda$static$0($Symbol* sym) {
	$init(JavacScope);
	$nc(sym)->apiComplete();
	$init($Kinds$Kind);
	return sym->kind != $Kinds$Kind::ERR;
}

void clinit$JavacScope($Class* class$) {
	$assignStatic(JavacScope::VALIDATOR, static_cast<$Predicate*>($new(JavacScope$$Lambda$lambda$static$0)));
}

JavacScope::JavacScope() {
}

$Class* JavacScope::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JavacScope$$Lambda$lambda$static$0::classInfo$.name)) {
			return JavacScope$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$loadClass(JavacScope, name, initialize, &_JavacScope_ClassInfo_, clinit$JavacScope, allocate$JavacScope);
	return class$;
}

$Class* JavacScope::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com