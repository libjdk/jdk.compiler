#include <com/sun/tools/javac/platform/PlatformProvider$PlatformNotSupported.h>

#include <com/sun/tools/javac/platform/PlatformProvider.h>
#include <jcpp.h>

using $PlatformProvider = ::com::sun::tools::javac::platform::PlatformProvider;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace platform {

$FieldInfo _PlatformProvider$PlatformNotSupported_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PlatformProvider$PlatformNotSupported, serialVersionUID)},
	{}
};

$MethodInfo _PlatformProvider$PlatformNotSupported_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PlatformProvider$PlatformNotSupported::*)()>(&PlatformProvider$PlatformNotSupported::init$))},
	{}
};

$InnerClassInfo _PlatformProvider$PlatformNotSupported_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.platform.PlatformProvider$PlatformNotSupported", "com.sun.tools.javac.platform.PlatformProvider", "PlatformNotSupported", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PlatformProvider$PlatformNotSupported_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.platform.PlatformProvider$PlatformNotSupported",
	"java.lang.Exception",
	nullptr,
	_PlatformProvider$PlatformNotSupported_FieldInfo_,
	_PlatformProvider$PlatformNotSupported_MethodInfo_,
	nullptr,
	nullptr,
	_PlatformProvider$PlatformNotSupported_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.platform.PlatformProvider"
};

$Object* allocate$PlatformProvider$PlatformNotSupported($Class* clazz) {
	return $of($alloc(PlatformProvider$PlatformNotSupported));
}

void PlatformProvider$PlatformNotSupported::init$() {
	$Exception::init$();
}

PlatformProvider$PlatformNotSupported::PlatformProvider$PlatformNotSupported() {
}

PlatformProvider$PlatformNotSupported::PlatformProvider$PlatformNotSupported(const PlatformProvider$PlatformNotSupported& e) : $Exception(e) {
}

void PlatformProvider$PlatformNotSupported::throw$() {
	throw *this;
}

$Class* PlatformProvider$PlatformNotSupported::load$($String* name, bool initialize) {
	$loadClass(PlatformProvider$PlatformNotSupported, name, initialize, &_PlatformProvider$PlatformNotSupported_ClassInfo_, allocate$PlatformProvider$PlatformNotSupported);
	return class$;
}

$Class* PlatformProvider$PlatformNotSupported::class$ = nullptr;

				} // platform
			} // javac
		} // tools
	} // sun
} // com