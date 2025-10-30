#include <com/sun/tools/javac/util/DiagnosticSource$1.h>

#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <jcpp.h>

using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$MethodInfo _DiagnosticSource$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DiagnosticSource$1::*)()>(&DiagnosticSource$1::init$))},
	{"findLine", "(I)Z", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _DiagnosticSource$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.util.DiagnosticSource",
	nullptr,
	nullptr
};

$InnerClassInfo _DiagnosticSource$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.DiagnosticSource$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DiagnosticSource$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.util.DiagnosticSource$1",
	"com.sun.tools.javac.util.DiagnosticSource",
	nullptr,
	nullptr,
	_DiagnosticSource$1_MethodInfo_,
	nullptr,
	&_DiagnosticSource$1_EnclosingMethodInfo_,
	_DiagnosticSource$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.DiagnosticSource"
};

$Object* allocate$DiagnosticSource$1($Class* clazz) {
	return $of($alloc(DiagnosticSource$1));
}

void DiagnosticSource$1::init$() {
	$DiagnosticSource::init$();
}

bool DiagnosticSource$1::findLine(int32_t pos) {
	return false;
}

DiagnosticSource$1::DiagnosticSource$1() {
}

$Class* DiagnosticSource$1::load$($String* name, bool initialize) {
	$loadClass(DiagnosticSource$1, name, initialize, &_DiagnosticSource$1_ClassInfo_, allocate$DiagnosticSource$1);
	return class$;
}

$Class* DiagnosticSource$1::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com