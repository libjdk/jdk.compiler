#include <com/sun/tools/javac/file/Locations$BasicLocationHandler.h>

#include <com/sun/tools/javac/file/Locations$LocationHandler.h>
#include <com/sun/tools/javac/file/Locations.h>
#include <com/sun/tools/javac/main/Option.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/IOException.h>
#include <java/lang/Iterable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <java/util/AbstractSet.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/EnumSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <jcpp.h>

using $OptionArray = $Array<::com::sun::tools::javac::main::Option>;
using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $Locations = ::com::sun::tools::javac::file::Locations;
using $Locations$LocationHandler = ::com::sun::tools::javac::file::Locations$LocationHandler;
using $Option = ::com::sun::tools::javac::main::Option;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Files = ::java::nio::file::Files;
using $LinkOption = ::java::nio::file::LinkOption;
using $Path = ::java::nio::file::Path;
using $AbstractSet = ::java::util::AbstractSet;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $EnumSet = ::java::util::EnumSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

$FieldInfo _Locations$BasicLocationHandler_FieldInfo_[] = {
	{"location", "Ljavax/tools/JavaFileManager$Location;", nullptr, $FINAL, $field(Locations$BasicLocationHandler, location)},
	{"options", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/main/Option;>;", $FINAL, $field(Locations$BasicLocationHandler, options)},
	{"explicit", "Z", nullptr, 0, $field(Locations$BasicLocationHandler, explicit$)},
	{}
};

$MethodInfo _Locations$BasicLocationHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/tools/JavaFileManager$Location;[Lcom/sun/tools/javac/main/Option;)V", nullptr, $PROTECTED | $TRANSIENT, $method(static_cast<void(Locations$BasicLocationHandler::*)($JavaFileManager$Location*,$OptionArray*)>(&Locations$BasicLocationHandler::init$))},
	{"checkDirectory", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"checkSingletonDirectory", "(Ljava/lang/Iterable;)Ljava/nio/file/Path;", "(Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)Ljava/nio/file/Path;", $PROTECTED, nullptr, "java.io.IOException"},
	{"isExplicit", "()Z", nullptr, 0},
	{"setPathsForModule", "(Ljava/lang/String;Ljava/lang/Iterable;)V", "(Ljava/lang/String;Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)V", 0, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _Locations$BasicLocationHandler_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.Locations$BasicLocationHandler", "com.sun.tools.javac.file.Locations", "BasicLocationHandler", $PRIVATE | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.file.Locations$LocationHandler", "com.sun.tools.javac.file.Locations", "LocationHandler", $PROTECTED | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Locations$BasicLocationHandler_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.file.Locations$BasicLocationHandler",
	"com.sun.tools.javac.file.Locations$LocationHandler",
	nullptr,
	_Locations$BasicLocationHandler_FieldInfo_,
	_Locations$BasicLocationHandler_MethodInfo_,
	nullptr,
	nullptr,
	_Locations$BasicLocationHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.Locations"
};

$Object* allocate$Locations$BasicLocationHandler($Class* clazz) {
	return $of($alloc(Locations$BasicLocationHandler));
}

void Locations$BasicLocationHandler::init$($JavaFileManager$Location* location, $OptionArray* options) {
	$Locations$LocationHandler::init$();
	$set(this, location, location);
	$load($Option);
	$set(this, options, $nc(options)->length == 0 ? static_cast<$Set*>($EnumSet::noneOf($Option::class$)) : static_cast<$Set*>($EnumSet::copyOf($(static_cast<$Collection*>($Arrays::asList(options))))));
}

void Locations$BasicLocationHandler::setPathsForModule($String* moduleName, $Iterable* files) {
	$throwNew($UnsupportedOperationException, $$str({"not supported for "_s, this->location}));
}

$Path* Locations$BasicLocationHandler::checkSingletonDirectory($Iterable* paths) {
	$useLocalCurrentObjectStackCache();
	$var($Iterator, pathIter, $nc(paths)->iterator());
	if (!$nc(pathIter)->hasNext()) {
		$throwNew($IllegalArgumentException, "empty path for directory"_s);
	}
	$var($Path, path, $cast($Path, $nc(pathIter)->next()));
	if (pathIter->hasNext()) {
		$throwNew($IllegalArgumentException, "path too long for directory"_s);
	}
	checkDirectory(path);
	return path;
}

$Path* Locations$BasicLocationHandler::checkDirectory($Path* path) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(path);
	if (!$Files::exists(path, $$new($LinkOptionArray, 0))) {
		$throwNew($FileNotFoundException, $$str({path, ": does not exist"_s}));
	}
	if (!$Files::isDirectory(path, $$new($LinkOptionArray, 0))) {
		$throwNew($IOException, $$str({path, ": not a directory"_s}));
	}
	return path;
}

bool Locations$BasicLocationHandler::isExplicit() {
	return this->explicit$;
}

Locations$BasicLocationHandler::Locations$BasicLocationHandler() {
}

$Class* Locations$BasicLocationHandler::load$($String* name, bool initialize) {
	$loadClass(Locations$BasicLocationHandler, name, initialize, &_Locations$BasicLocationHandler_ClassInfo_, allocate$Locations$BasicLocationHandler);
	return class$;
}

$Class* Locations$BasicLocationHandler::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com