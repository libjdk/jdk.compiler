#include <com/sun/tools/javac/comp/Modules$PackageNameFinder.h>

#include <com/sun/tools/javac/comp/Modules.h>
#include <com/sun/tools/javac/util/Name.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $Modules = ::com::sun::tools::javac::comp::Modules;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$MethodInfo _Modules$PackageNameFinder_MethodInfo_[] = {
	{"findPackageNameOf", "(Ljavax/tools/JavaFileObject;)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Modules$PackageNameFinder_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Modules$PackageNameFinder", "com.sun.tools.javac.comp.Modules", "PackageNameFinder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Modules$PackageNameFinder_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.comp.Modules$PackageNameFinder",
	nullptr,
	nullptr,
	nullptr,
	_Modules$PackageNameFinder_MethodInfo_,
	nullptr,
	nullptr,
	_Modules$PackageNameFinder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Modules"
};

$Object* allocate$Modules$PackageNameFinder($Class* clazz) {
	return $of($alloc(Modules$PackageNameFinder));
}

$Class* Modules$PackageNameFinder::load$($String* name, bool initialize) {
	$loadClass(Modules$PackageNameFinder, name, initialize, &_Modules$PackageNameFinder_ClassInfo_, allocate$Modules$PackageNameFinder);
	return class$;
}

$Class* Modules$PackageNameFinder::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com