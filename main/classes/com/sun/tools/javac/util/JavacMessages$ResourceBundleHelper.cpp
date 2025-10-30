#include <com/sun/tools/javac/util/JavacMessages$ResourceBundleHelper.h>

#include <com/sun/tools/javac/util/JavacMessages.h>
#include <java/util/Locale.h>
#include <java/util/ResourceBundle.h>
#include <jcpp.h>

using $JavacMessages = ::com::sun::tools::javac::util::JavacMessages;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $ResourceBundle = ::java::util::ResourceBundle;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$MethodInfo _JavacMessages$ResourceBundleHelper_MethodInfo_[] = {
	{"getResourceBundle", "(Ljava/util/Locale;)Ljava/util/ResourceBundle;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _JavacMessages$ResourceBundleHelper_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.JavacMessages$ResourceBundleHelper", "com.sun.tools.javac.util.JavacMessages", "ResourceBundleHelper", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JavacMessages$ResourceBundleHelper_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.util.JavacMessages$ResourceBundleHelper",
	nullptr,
	nullptr,
	nullptr,
	_JavacMessages$ResourceBundleHelper_MethodInfo_,
	nullptr,
	nullptr,
	_JavacMessages$ResourceBundleHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.JavacMessages"
};

$Object* allocate$JavacMessages$ResourceBundleHelper($Class* clazz) {
	return $of($alloc(JavacMessages$ResourceBundleHelper));
}

$Class* JavacMessages$ResourceBundleHelper::load$($String* name, bool initialize) {
	$loadClass(JavacMessages$ResourceBundleHelper, name, initialize, &_JavacMessages$ResourceBundleHelper_ClassInfo_, allocate$JavacMessages$ResourceBundleHelper);
	return class$;
}

$Class* JavacMessages$ResourceBundleHelper::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com