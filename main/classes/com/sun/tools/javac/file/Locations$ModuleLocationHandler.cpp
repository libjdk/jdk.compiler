#include <com/sun/tools/javac/file/Locations$ModuleLocationHandler.h>

#include <com/sun/tools/javac/file/Locations$LocationHandler.h>
#include <com/sun/tools/javac/file/Locations.h>
#include <com/sun/tools/javac/main/Option.h>
#include <java/lang/Iterable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/file/Path.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <jcpp.h>

using $Locations = ::com::sun::tools::javac::file::Locations;
using $Locations$LocationHandler = ::com::sun::tools::javac::file::Locations$LocationHandler;
using $Option = ::com::sun::tools::javac::main::Option;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Path = ::java::nio::file::Path;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

$FieldInfo _Locations$ModuleLocationHandler_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/file/Locations;", nullptr, $FINAL | $SYNTHETIC, $field(Locations$ModuleLocationHandler, this$0)},
	{"parent", "Lcom/sun/tools/javac/file/Locations$LocationHandler;", nullptr, $PRIVATE | $FINAL, $field(Locations$ModuleLocationHandler, parent)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Locations$ModuleLocationHandler, name)},
	{"moduleName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Locations$ModuleLocationHandler, moduleName)},
	{"output", "Z", nullptr, $PRIVATE | $FINAL, $field(Locations$ModuleLocationHandler, output)},
	{"explicit", "Z", nullptr, 0, $field(Locations$ModuleLocationHandler, explicit$)},
	{"searchPath", "Ljava/util/Collection;", "Ljava/util/Collection<Ljava/nio/file/Path;>;", 0, $field(Locations$ModuleLocationHandler, searchPath)},
	{}
};

$MethodInfo _Locations$ModuleLocationHandler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/file/Locations;Lcom/sun/tools/javac/file/Locations$LocationHandler;Ljava/lang/String;Ljava/lang/String;Ljava/util/Collection;Z)V", "(Lcom/sun/tools/javac/file/Locations$LocationHandler;Ljava/lang/String;Ljava/lang/String;Ljava/util/Collection<Ljava/nio/file/Path;>;Z)V", 0, $method(static_cast<void(Locations$ModuleLocationHandler::*)($Locations*,$Locations$LocationHandler*,$String*,$String*,$Collection*,bool)>(&Locations$ModuleLocationHandler::init$))},
	{"contains", "(Ljava/nio/file/Path;)Z", nullptr, 0, nullptr, "java.io.IOException"},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPaths", "()Ljava/util/Collection;", "()Ljava/util/Collection<Ljava/nio/file/Path;>;", 0},
	{"handleOption", "(Lcom/sun/tools/javac/main/Option;Ljava/lang/String;)Z", nullptr, 0},
	{"inferModuleName", "()Ljava/lang/String;", nullptr, 0},
	{"isExplicit", "()Z", nullptr, 0},
	{"isOutputLocation", "()Z", nullptr, $PUBLIC},
	{"setPaths", "(Ljava/lang/Iterable;)V", "(Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)V", 0, nullptr, "java.io.IOException"},
	{"setPathsForModule", "(Ljava/lang/String;Ljava/lang/Iterable;)V", "(Ljava/lang/String;Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)V", 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Locations$ModuleLocationHandler_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.Locations$ModuleLocationHandler", "com.sun.tools.javac.file.Locations", "ModuleLocationHandler", $PRIVATE},
	{"com.sun.tools.javac.file.Locations$LocationHandler", "com.sun.tools.javac.file.Locations", "LocationHandler", $PROTECTED | $STATIC | $ABSTRACT},
	{"javax.tools.JavaFileManager$Location", "javax.tools.JavaFileManager", "Location", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Locations$ModuleLocationHandler_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.file.Locations$ModuleLocationHandler",
	"com.sun.tools.javac.file.Locations$LocationHandler",
	"javax.tools.JavaFileManager$Location",
	_Locations$ModuleLocationHandler_FieldInfo_,
	_Locations$ModuleLocationHandler_MethodInfo_,
	nullptr,
	nullptr,
	_Locations$ModuleLocationHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.Locations"
};

$Object* allocate$Locations$ModuleLocationHandler($Class* clazz) {
	return $of($alloc(Locations$ModuleLocationHandler));
}

int32_t Locations$ModuleLocationHandler::hashCode() {
	 return this->$Locations$LocationHandler::hashCode();
}

bool Locations$ModuleLocationHandler::equals(Object$* arg0) {
	 return this->$Locations$LocationHandler::equals(arg0);
}

$Object* Locations$ModuleLocationHandler::clone() {
	 return this->$Locations$LocationHandler::clone();
}

void Locations$ModuleLocationHandler::finalize() {
	this->$Locations$LocationHandler::finalize();
}

void Locations$ModuleLocationHandler::init$($Locations* this$0, $Locations$LocationHandler* parent, $String* name, $String* moduleName, $Collection* searchPath, bool output) {
	$set(this, this$0, this$0);
	$Locations$LocationHandler::init$();
	$set(this, parent, parent);
	$set(this, name, name);
	$set(this, moduleName, moduleName);
	$set(this, searchPath, searchPath);
	this->output = output;
}

$String* Locations$ModuleLocationHandler::getName() {
	return this->name;
}

bool Locations$ModuleLocationHandler::isOutputLocation() {
	return this->output;
}

bool Locations$ModuleLocationHandler::handleOption($Option* option, $String* value) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Collection* Locations$ModuleLocationHandler::getPaths() {
	return $Collections::unmodifiableCollection(this->searchPath);
}

bool Locations$ModuleLocationHandler::isExplicit() {
	return true;
}

void Locations$ModuleLocationHandler::setPaths($Iterable* paths) {
	$nc(this->parent)->setPathsForModule(this->moduleName, paths);
}

void Locations$ModuleLocationHandler::setPathsForModule($String* moduleName, $Iterable* paths) {
	$throwNew($UnsupportedOperationException, $$str({"not supported for "_s, this->name}));
}

$String* Locations$ModuleLocationHandler::inferModuleName() {
	return this->moduleName;
}

bool Locations$ModuleLocationHandler::contains($Path* file) {
	return this->this$0->contains(this->searchPath, file);
}

$String* Locations$ModuleLocationHandler::toString() {
	return this->name;
}

Locations$ModuleLocationHandler::Locations$ModuleLocationHandler() {
}

$Class* Locations$ModuleLocationHandler::load$($String* name, bool initialize) {
	$loadClass(Locations$ModuleLocationHandler, name, initialize, &_Locations$ModuleLocationHandler_ClassInfo_, allocate$Locations$ModuleLocationHandler);
	return class$;
}

$Class* Locations$ModuleLocationHandler::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com