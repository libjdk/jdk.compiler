#include <com/sun/tools/javac/platform/PlatformProvider.h>

#include <com/sun/tools/javac/platform/PlatformDescription.h>
#include <java/lang/Iterable.h>
#include <jcpp.h>

using $PlatformDescription = ::com::sun::tools::javac::platform::PlatformDescription;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace platform {

$MethodInfo _PlatformProvider_MethodInfo_[] = {
	{"getPlatform", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/tools/javac/platform/PlatformDescription;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.tools.javac.platform.PlatformProvider$PlatformNotSupported"},
	{"getSupportedPlatformNames", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _PlatformProvider_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.platform.PlatformProvider$PlatformNotSupported", "com.sun.tools.javac.platform.PlatformProvider", "PlatformNotSupported", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PlatformProvider_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.platform.PlatformProvider",
	nullptr,
	nullptr,
	nullptr,
	_PlatformProvider_MethodInfo_,
	nullptr,
	nullptr,
	_PlatformProvider_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.platform.PlatformProvider$PlatformNotSupported"
};

$Object* allocate$PlatformProvider($Class* clazz) {
	return $of($alloc(PlatformProvider));
}

$Class* PlatformProvider::load$($String* name, bool initialize) {
	$loadClass(PlatformProvider, name, initialize, &_PlatformProvider_ClassInfo_, allocate$PlatformProvider);
	return class$;
}

$Class* PlatformProvider::class$ = nullptr;

				} // platform
			} // javac
		} // tools
	} // sun
} // com