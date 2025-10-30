#include <com/sun/tools/javac/api/JavacScope$1.h>

#include <com/sun/tools/javac/api/JavacScope.h>
#include <com/sun/tools/javac/code/Scope$CompoundScope.h>
#include <com/sun/tools/javac/code/Scope$ImportScope.h>
#include <com/sun/tools/javac/code/Scope$NamedImportScope.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <java/lang/Iterable.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

#undef VALIDATOR

using $JavacScope = ::com::sun::tools::javac::api::JavacScope;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$CompoundScope = ::com::sun::tools::javac::code::Scope$CompoundScope;
using $Scope$ImportScope = ::com::sun::tools::javac::code::Scope$ImportScope;
using $Scope$NamedImportScope = ::com::sun::tools::javac::code::Scope$NamedImportScope;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Env = ::com::sun::tools::javac::comp::Env;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$MethodInfo _JavacScope$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Env;)V", nullptr, 0, $method(static_cast<void(JavacScope$1::*)($Env*)>(&JavacScope$1::init$))},
	{"getEnclosingScope", "()Lcom/sun/source/tree/Scope;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getLocalElements", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<+Ljavax/lang/model/element/Element;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _JavacScope$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.api.JavacScope",
	"create",
	"(Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/api/JavacScope;"
};

$InnerClassInfo _JavacScope$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.JavacScope$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JavacScope$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.api.JavacScope$1",
	"com.sun.tools.javac.api.JavacScope",
	nullptr,
	nullptr,
	_JavacScope$1_MethodInfo_,
	nullptr,
	&_JavacScope$1_EnclosingMethodInfo_,
	_JavacScope$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.JavacScope"
};

$Object* allocate$JavacScope$1($Class* clazz) {
	return $of($alloc(JavacScope$1));
}

void JavacScope$1::init$($Env* env) {
	$JavacScope::init$(env);
}

$Iterable* JavacScope$1::getLocalElements() {
	$var($Scope$CompoundScope, result, $new($Scope$CompoundScope, $nc($nc(this->env)->toplevel)->packge));
	result->prependSubScope($nc($nc(this->env)->toplevel)->toplevelScope);
	result->prependSubScope($nc($nc(this->env)->toplevel)->namedImportScope);
	$init($JavacScope);
	return result->getSymbols($JavacScope::VALIDATOR);
}

$JavacScope* JavacScope$1::getEnclosingScope() {
	return $JavacScope::getEnclosingScope();
}

JavacScope$1::JavacScope$1() {
}

$Class* JavacScope$1::load$($String* name, bool initialize) {
	$loadClass(JavacScope$1, name, initialize, &_JavacScope$1_ClassInfo_, allocate$JavacScope$1);
	return class$;
}

$Class* JavacScope$1::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com