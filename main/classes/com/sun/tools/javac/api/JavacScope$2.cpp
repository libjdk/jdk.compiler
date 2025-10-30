#include <com/sun/tools/javac/api/JavacScope$2.h>

#include <com/sun/tools/javac/api/JavacScope.h>
#include <com/sun/tools/javac/code/Scope$StarImportScope.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <java/lang/Iterable.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

#undef VALIDATOR

using $JavacScope = ::com::sun::tools::javac::api::JavacScope;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$StarImportScope = ::com::sun::tools::javac::code::Scope$StarImportScope;
using $Env = ::com::sun::tools::javac::comp::Env;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$FieldInfo _JavacScope$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/api/JavacScope;", nullptr, $FINAL | $SYNTHETIC, $field(JavacScope$2, this$0)},
	{}
};

$MethodInfo _JavacScope$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/api/JavacScope;Lcom/sun/tools/javac/comp/Env;)V", nullptr, 0, $method(static_cast<void(JavacScope$2::*)($JavacScope*,$Env*)>(&JavacScope$2::init$))},
	{"getEnclosingScope", "()Lcom/sun/tools/javac/api/JavacScope;", nullptr, $PUBLIC},
	{"getLocalElements", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<+Ljavax/lang/model/element/Element;>;", $PUBLIC},
	{"isStarImportScope", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JavacScope$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.api.JavacScope",
	"getEnclosingScope",
	"()Lcom/sun/tools/javac/api/JavacScope;"
};

$InnerClassInfo _JavacScope$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.JavacScope$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JavacScope$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.api.JavacScope$2",
	"com.sun.tools.javac.api.JavacScope",
	nullptr,
	_JavacScope$2_FieldInfo_,
	_JavacScope$2_MethodInfo_,
	nullptr,
	&_JavacScope$2_EnclosingMethodInfo_,
	_JavacScope$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.JavacScope"
};

$Object* allocate$JavacScope$2($Class* clazz) {
	return $of($alloc(JavacScope$2));
}

void JavacScope$2::init$($JavacScope* this$0, $Env* env) {
	$set(this, this$0, this$0);
	$JavacScope::init$(env);
}

bool JavacScope$2::isStarImportScope() {
	return true;
}

$JavacScope* JavacScope$2::getEnclosingScope() {
	return nullptr;
}

$Iterable* JavacScope$2::getLocalElements() {
	$init($JavacScope);
	return $nc($nc($nc(this->env)->toplevel)->starImportScope)->getSymbols($JavacScope::VALIDATOR);
}

JavacScope$2::JavacScope$2() {
}

$Class* JavacScope$2::load$($String* name, bool initialize) {
	$loadClass(JavacScope$2, name, initialize, &_JavacScope$2_ClassInfo_, allocate$JavacScope$2);
	return class$;
}

$Class* JavacScope$2::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com