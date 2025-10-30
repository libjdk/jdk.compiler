#include <com/sun/tools/javac/file/Locations$PatchModulesLocationHandler.h>

#include <com/sun/tools/javac/file/Locations$BasicLocationHandler.h>
#include <com/sun/tools/javac/file/Locations$LocationHandler.h>
#include <com/sun/tools/javac/file/Locations$ModuleLocationHandler.h>
#include <com/sun/tools/javac/file/Locations$ModuleTable.h>
#include <com/sun/tools/javac/file/Locations$SearchPath.h>
#include <com/sun/tools/javac/file/Locations.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/Log.h>
#include <java/lang/Iterable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/file/Path.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/Set.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/StandardLocation.h>
#include <jcpp.h>

#undef PATCH_MODULE
#undef PATCH_MODULE_PATH

using $OptionArray = $Array<::com::sun::tools::javac::main::Option>;
using $Locations = ::com::sun::tools::javac::file::Locations;
using $Locations$BasicLocationHandler = ::com::sun::tools::javac::file::Locations$BasicLocationHandler;
using $Locations$LocationHandler = ::com::sun::tools::javac::file::Locations$LocationHandler;
using $Locations$ModuleLocationHandler = ::com::sun::tools::javac::file::Locations$ModuleLocationHandler;
using $Locations$ModuleTable = ::com::sun::tools::javac::file::Locations$ModuleTable;
using $Locations$SearchPath = ::com::sun::tools::javac::file::Locations$SearchPath;
using $Option = ::com::sun::tools::javac::main::Option;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $Log = ::com::sun::tools::javac::util::Log;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Path = ::java::nio::file::Path;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $Set = ::java::util::Set;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $StandardLocation = ::javax::tools::StandardLocation;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

$FieldInfo _Locations$PatchModulesLocationHandler_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/file/Locations;", nullptr, $FINAL | $SYNTHETIC, $field(Locations$PatchModulesLocationHandler, this$0)},
	{"moduleTable", "Lcom/sun/tools/javac/file/Locations$ModuleTable;", nullptr, $PRIVATE | $FINAL, $field(Locations$PatchModulesLocationHandler, moduleTable)},
	{}
};

$MethodInfo _Locations$PatchModulesLocationHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/file/Locations;)V", nullptr, 0, $method(static_cast<void(Locations$PatchModulesLocationHandler::*)($Locations*)>(&Locations$PatchModulesLocationHandler::init$))},
	{"contains", "(Ljava/nio/file/Path;)Z", nullptr, 0, nullptr, "java.io.IOException"},
	{"getLocationForModule", "(Ljava/lang/String;)Ljavax/tools/JavaFileManager$Location;", nullptr, 0, nullptr, "java.io.IOException"},
	{"getLocationForModule", "(Ljava/nio/file/Path;)Ljavax/tools/JavaFileManager$Location;", nullptr, 0, nullptr, "java.io.IOException"},
	{"getPaths", "()Ljava/util/Collection;", "()Ljava/util/Collection<Ljava/nio/file/Path;>;", 0},
	{"handleOption", "(Lcom/sun/tools/javac/main/Option;Ljava/lang/String;)Z", nullptr, 0},
	{"isSet", "()Z", nullptr, 0},
	{"listLocationsForModules", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<Ljava/util/Set<Ljavax/tools/JavaFileManager$Location;>;>;", 0, nullptr, "java.io.IOException"},
	{"setPaths", "(Ljava/lang/Iterable;)V", "(Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)V", 0, nullptr, "java.io.IOException"},
	{"setPathsForModule", "(Ljava/lang/String;Ljava/lang/Iterable;)V", "(Ljava/lang/String;Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)V", 0, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _Locations$PatchModulesLocationHandler_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.Locations$PatchModulesLocationHandler", "com.sun.tools.javac.file.Locations", "PatchModulesLocationHandler", $PRIVATE},
	{"com.sun.tools.javac.file.Locations$BasicLocationHandler", "com.sun.tools.javac.file.Locations", "BasicLocationHandler", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Locations$PatchModulesLocationHandler_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.file.Locations$PatchModulesLocationHandler",
	"com.sun.tools.javac.file.Locations$BasicLocationHandler",
	nullptr,
	_Locations$PatchModulesLocationHandler_FieldInfo_,
	_Locations$PatchModulesLocationHandler_MethodInfo_,
	nullptr,
	nullptr,
	_Locations$PatchModulesLocationHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.Locations"
};

$Object* allocate$Locations$PatchModulesLocationHandler($Class* clazz) {
	return $of($alloc(Locations$PatchModulesLocationHandler));
}

void Locations$PatchModulesLocationHandler::init$($Locations* this$0) {
	$set(this, this$0, this$0);
	$init($StandardLocation);
	$init($Option);
	$Locations$BasicLocationHandler::init$($StandardLocation::PATCH_MODULE_PATH, $$new($OptionArray, {$Option::PATCH_MODULE}));
	$set(this, moduleTable, $new($Locations$ModuleTable, this->this$0));
}

bool Locations$PatchModulesLocationHandler::handleOption($Option* option, $String* value) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(this->options)->contains(option)) {
		return false;
	}
	this->explicit$ = true;
	$nc(this->moduleTable)->clear();
	{
		$var($StringArray, arr$, $nc(value)->split($cstr({'\0'})));
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, v, arr$->get(i$));
			{
				int32_t eq = $nc(v)->indexOf((int32_t)u'=');
				if (eq > 0) {
					$var($String, moduleName, v->substring(0, eq));
					$var($Locations$SearchPath, mPatchPath, $$new($Locations$SearchPath, this->this$0)->addFiles($(v->substring(eq + 1))));
					$var($String, name, $str({$($nc(this->location)->getName()), "["_s, moduleName, "]"_s}));
					$var($Locations$ModuleLocationHandler, h, $new($Locations$ModuleLocationHandler, this->this$0, this, name, moduleName, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>(static_cast<$HashSet*>(static_cast<$LinkedHashSet*>(mPatchPath))))), false));
					$nc(this->moduleTable)->add(h);
				} else {
					$nc(this->this$0->log)->error($($CompilerProperties$Errors::LocnInvalidArgForXpatch(value)));
				}
			}
		}
	}
	return true;
}

bool Locations$PatchModulesLocationHandler::isSet() {
	return !$nc(this->moduleTable)->isEmpty();
}

$Collection* Locations$PatchModulesLocationHandler::getPaths() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

void Locations$PatchModulesLocationHandler::setPaths($Iterable* files) {
	$throwNew($UnsupportedOperationException);
}

void Locations$PatchModulesLocationHandler::setPathsForModule($String* moduleName, $Iterable* files) {
	$throwNew($UnsupportedOperationException);
}

$JavaFileManager$Location* Locations$PatchModulesLocationHandler::getLocationForModule($String* name) {
	return $nc(this->moduleTable)->get(name);
}

$JavaFileManager$Location* Locations$PatchModulesLocationHandler::getLocationForModule($Path* file) {
	return $nc(this->moduleTable)->get(file);
}

$Iterable* Locations$PatchModulesLocationHandler::listLocationsForModules() {
	return $Collections::singleton($($nc(this->moduleTable)->locations()));
}

bool Locations$PatchModulesLocationHandler::contains($Path* file) {
	return $nc(this->moduleTable)->contains(file);
}

Locations$PatchModulesLocationHandler::Locations$PatchModulesLocationHandler() {
}

$Class* Locations$PatchModulesLocationHandler::load$($String* name, bool initialize) {
	$loadClass(Locations$PatchModulesLocationHandler, name, initialize, &_Locations$PatchModulesLocationHandler_ClassInfo_, allocate$Locations$PatchModulesLocationHandler);
	return class$;
}

$Class* Locations$PatchModulesLocationHandler::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com