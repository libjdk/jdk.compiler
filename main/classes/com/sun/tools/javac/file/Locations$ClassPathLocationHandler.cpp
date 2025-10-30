#include <com/sun/tools/javac/file/Locations$ClassPathLocationHandler.h>

#include <com/sun/tools/javac/file/Locations$SearchPath.h>
#include <com/sun/tools/javac/file/Locations$SimpleLocationHandler.h>
#include <com/sun/tools/javac/file/Locations.h>
#include <com/sun/tools/javac/main/Option.h>
#include <java/lang/Iterable.h>
#include <java/nio/file/Path.h>
#include <java/util/Collection.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/StandardLocation.h>
#include <jcpp.h>

#undef CLASS_PATH

using $OptionArray = $Array<::com::sun::tools::javac::main::Option>;
using $Locations = ::com::sun::tools::javac::file::Locations;
using $Locations$SearchPath = ::com::sun::tools::javac::file::Locations$SearchPath;
using $Locations$SimpleLocationHandler = ::com::sun::tools::javac::file::Locations$SimpleLocationHandler;
using $Option = ::com::sun::tools::javac::main::Option;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $Collection = ::java::util::Collection;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $StandardLocation = ::javax::tools::StandardLocation;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

$FieldInfo _Locations$ClassPathLocationHandler_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/file/Locations;", nullptr, $FINAL | $SYNTHETIC, $field(Locations$ClassPathLocationHandler, this$0)},
	{}
};

$MethodInfo _Locations$ClassPathLocationHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/file/Locations;)V", nullptr, 0, $method(static_cast<void(Locations$ClassPathLocationHandler::*)($Locations*)>(&Locations$ClassPathLocationHandler::init$))},
	{"computePath", "(Ljava/lang/String;)Lcom/sun/tools/javac/file/Locations$SearchPath;", nullptr, $PROTECTED},
	{"createPath", "()Lcom/sun/tools/javac/file/Locations$SearchPath;", nullptr, $PROTECTED},
	{"getPaths", "()Ljava/util/Collection;", "()Ljava/util/Collection<Ljava/nio/file/Path;>;", 0},
	{"lazy", "()V", nullptr, $PRIVATE, $method(static_cast<void(Locations$ClassPathLocationHandler::*)()>(&Locations$ClassPathLocationHandler::lazy))},
	{}
};

$InnerClassInfo _Locations$ClassPathLocationHandler_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.Locations$ClassPathLocationHandler", "com.sun.tools.javac.file.Locations", "ClassPathLocationHandler", $PRIVATE},
	{"com.sun.tools.javac.file.Locations$SimpleLocationHandler", "com.sun.tools.javac.file.Locations", "SimpleLocationHandler", $PRIVATE},
	{}
};

$ClassInfo _Locations$ClassPathLocationHandler_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.file.Locations$ClassPathLocationHandler",
	"com.sun.tools.javac.file.Locations$SimpleLocationHandler",
	nullptr,
	_Locations$ClassPathLocationHandler_FieldInfo_,
	_Locations$ClassPathLocationHandler_MethodInfo_,
	nullptr,
	nullptr,
	_Locations$ClassPathLocationHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.Locations"
};

$Object* allocate$Locations$ClassPathLocationHandler($Class* clazz) {
	return $of($alloc(Locations$ClassPathLocationHandler));
}

void Locations$ClassPathLocationHandler::init$($Locations* this$0) {
	$set(this, this$0, this$0);
	$init($StandardLocation);
	$init($Option);
	$Locations$SimpleLocationHandler::init$(this$0, $StandardLocation::CLASS_PATH, $$new($OptionArray, {$Option::CLASS_PATH}));
}

$Collection* Locations$ClassPathLocationHandler::getPaths() {
	lazy();
	return this->searchPath;
}

$Locations$SearchPath* Locations$ClassPathLocationHandler::computePath($String* value) {
	$useLocalCurrentObjectStackCache();
	$var($String, cp, value);
	if (cp == nullptr) {
		$assign(cp, $System::getProperty("env.class.path"_s));
	}
	if (cp == nullptr && $System::getProperty("application.home"_s) == nullptr) {
		$assign(cp, $System::getProperty("java.class.path"_s));
	}
	if (cp == nullptr) {
		$assign(cp, "."_s);
	}
	return $nc($(createPath()))->addFiles(cp);
}

$Locations$SearchPath* Locations$ClassPathLocationHandler::createPath() {
	$useLocalCurrentObjectStackCache();
	return $nc($($$new($Locations$SearchPath, this->this$0)->expandJarClassPaths(true)))->emptyPathDefault($(this->this$0->getPath("."_s, $$new($StringArray, 0))));
}

void Locations$ClassPathLocationHandler::lazy() {
	if (this->searchPath == nullptr) {
		setPaths(nullptr);
	}
}

Locations$ClassPathLocationHandler::Locations$ClassPathLocationHandler() {
}

$Class* Locations$ClassPathLocationHandler::load$($String* name, bool initialize) {
	$loadClass(Locations$ClassPathLocationHandler, name, initialize, &_Locations$ClassPathLocationHandler_ClassInfo_, allocate$Locations$ClassPathLocationHandler);
	return class$;
}

$Class* Locations$ClassPathLocationHandler::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com