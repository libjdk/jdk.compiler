#include <com/sun/tools/javac/resources/LauncherProperties.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace resources {

$MethodInfo _LauncherProperties_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LauncherProperties::*)()>(&LauncherProperties::init$))},
	{}
};

$InnerClassInfo _LauncherProperties_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.resources.LauncherProperties$Errors", "com.sun.tools.javac.resources.LauncherProperties", "Errors", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _LauncherProperties_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.resources.LauncherProperties",
	"java.lang.Object",
	nullptr,
	nullptr,
	_LauncherProperties_MethodInfo_,
	nullptr,
	nullptr,
	_LauncherProperties_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.resources.LauncherProperties$Errors"
};

$Object* allocate$LauncherProperties($Class* clazz) {
	return $of($alloc(LauncherProperties));
}

void LauncherProperties::init$() {
}

LauncherProperties::LauncherProperties() {
}

$Class* LauncherProperties::load$($String* name, bool initialize) {
	$loadClass(LauncherProperties, name, initialize, &_LauncherProperties_ClassInfo_, allocate$LauncherProperties);
	return class$;
}

$Class* LauncherProperties::class$ = nullptr;

				} // resources
			} // javac
		} // tools
	} // sun
} // com