#include <com/sun/tools/doclint/DocLint$NoDocLint.h>

#include <com/sun/source/util/JavacTask.h>
#include <com/sun/tools/doclint/DocLint.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

#undef XCHECK_PACKAGE
#undef XMSGS_CUSTOM_PREFIX
#undef XMSGS_OPTION

using $JavacTask = ::com::sun::source::util::JavacTask;
using $DocLint = ::com::sun::tools::doclint::DocLint;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace doclint {

$MethodInfo _DocLint$NoDocLint_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DocLint$NoDocLint::*)()>(&DocLint$NoDocLint::init$))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"init", "(Lcom/sun/source/util/JavacTask;[Ljava/lang/String;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"isValidOption", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DocLint$NoDocLint_InnerClassesInfo_[] = {
	{"com.sun.tools.doclint.DocLint$NoDocLint", "com.sun.tools.doclint.DocLint", "NoDocLint", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DocLint$NoDocLint_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.doclint.DocLint$NoDocLint",
	"com.sun.tools.doclint.DocLint",
	nullptr,
	nullptr,
	_DocLint$NoDocLint_MethodInfo_,
	nullptr,
	nullptr,
	_DocLint$NoDocLint_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.doclint.DocLint"
};

$Object* allocate$DocLint$NoDocLint($Class* clazz) {
	return $of($alloc(DocLint$NoDocLint));
}

void DocLint$NoDocLint::init$() {
	$DocLint::init$();
}

$String* DocLint$NoDocLint::getName() {
	return "doclint-not-available"_s;
}

void DocLint$NoDocLint::init($JavacTask* task, $StringArray* args) {
	$throwNew($IllegalStateException, "doclint not available"_s);
}

bool DocLint$NoDocLint::isValidOption($String* s) {
	$init($DocLint);
	bool var$1 = $nc(s)->equals($DocLint::XMSGS_OPTION);
	bool var$0 = var$1 || $nc(s)->startsWith($DocLint::XMSGS_CUSTOM_PREFIX);
	return var$0 || $nc(s)->startsWith($DocLint::XCHECK_PACKAGE);
}

DocLint$NoDocLint::DocLint$NoDocLint() {
}

$Class* DocLint$NoDocLint::load$($String* name, bool initialize) {
	$loadClass(DocLint$NoDocLint, name, initialize, &_DocLint$NoDocLint_ClassInfo_, allocate$DocLint$NoDocLint);
	return class$;
}

$Class* DocLint$NoDocLint::class$ = nullptr;

			} // doclint
		} // tools
	} // sun
} // com