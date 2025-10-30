#include <com/sun/tools/javac/resources/CompilerProperties.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace resources {

$MethodInfo _CompilerProperties_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CompilerProperties::*)()>(&CompilerProperties::init$))},
	{}
};

$InnerClassInfo _CompilerProperties_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.resources.CompilerProperties$Fragments", "com.sun.tools.javac.resources.CompilerProperties", "Fragments", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.resources.CompilerProperties$Notes", "com.sun.tools.javac.resources.CompilerProperties", "Notes", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.resources.CompilerProperties$Warnings", "com.sun.tools.javac.resources.CompilerProperties", "Warnings", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.resources.CompilerProperties$Errors", "com.sun.tools.javac.resources.CompilerProperties", "Errors", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _CompilerProperties_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.resources.CompilerProperties",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CompilerProperties_MethodInfo_,
	nullptr,
	nullptr,
	_CompilerProperties_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.resources.CompilerProperties$Fragments,com.sun.tools.javac.resources.CompilerProperties$Notes,com.sun.tools.javac.resources.CompilerProperties$Warnings,com.sun.tools.javac.resources.CompilerProperties$Errors"
};

$Object* allocate$CompilerProperties($Class* clazz) {
	return $of($alloc(CompilerProperties));
}

void CompilerProperties::init$() {
}

CompilerProperties::CompilerProperties() {
}

$Class* CompilerProperties::load$($String* name, bool initialize) {
	$loadClass(CompilerProperties, name, initialize, &_CompilerProperties_ClassInfo_, allocate$CompilerProperties);
	return class$;
}

$Class* CompilerProperties::class$ = nullptr;

				} // resources
			} // javac
		} // tools
	} // sun
} // com