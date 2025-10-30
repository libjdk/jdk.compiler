#include <com/sun/tools/doclint/DocLint$1.h>

#include <com/sun/tools/doclint/DocLint$NoDocLint.h>
#include <jcpp.h>

using $DocLint = ::com::sun::tools::doclint::DocLint;
using $DocLint$NoDocLint = ::com::sun::tools::doclint::DocLint$NoDocLint;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ServiceLoader$Provider = ::java::util::ServiceLoader$Provider;

namespace com {
	namespace sun {
		namespace tools {
			namespace doclint {

$MethodInfo _DocLint$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DocLint$1::*)()>(&DocLint$1::init$))},
	{"get", "()Lcom/sun/tools/doclint/DocLint;", nullptr, $PUBLIC},
	{"type", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Lcom/sun/tools/doclint/DocLint;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _DocLint$1_EnclosingMethodInfo_ = {
	"com.sun.tools.doclint.DocLint",
	"newDocLint",
	"()Lcom/sun/tools/doclint/DocLint;"
};

$InnerClassInfo _DocLint$1_InnerClassesInfo_[] = {
	{"com.sun.tools.doclint.DocLint$1", nullptr, nullptr, 0},
	{"java.util.ServiceLoader$Provider", "java.util.ServiceLoader", "Provider", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DocLint$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.doclint.DocLint$1",
	"java.lang.Object",
	"java.util.ServiceLoader$Provider",
	nullptr,
	_DocLint$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/ServiceLoader$Provider<Lcom/sun/tools/doclint/DocLint;>;",
	&_DocLint$1_EnclosingMethodInfo_,
	_DocLint$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.doclint.DocLint"
};

$Object* allocate$DocLint$1($Class* clazz) {
	return $of($alloc(DocLint$1));
}

void DocLint$1::init$() {
}

$Class* DocLint$1::type() {
	$load($DocLint$NoDocLint);
	return $DocLint$NoDocLint::class$;
}

$Object* DocLint$1::get() {
	return $of($new($DocLint$NoDocLint));
}

DocLint$1::DocLint$1() {
}

$Class* DocLint$1::load$($String* name, bool initialize) {
	$loadClass(DocLint$1, name, initialize, &_DocLint$1_ClassInfo_, allocate$DocLint$1);
	return class$;
}

$Class* DocLint$1::class$ = nullptr;

			} // doclint
		} // tools
	} // sun
} // com