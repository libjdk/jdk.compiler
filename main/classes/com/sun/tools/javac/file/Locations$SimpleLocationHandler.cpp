#include <com/sun/tools/javac/file/Locations$SimpleLocationHandler.h>

#include <com/sun/tools/javac/file/Locations$BasicLocationHandler.h>
#include <com/sun/tools/javac/file/Locations$SearchPath.h>
#include <com/sun/tools/javac/file/Locations.h>
#include <com/sun/tools/javac/main/Option.h>
#include <java/lang/Iterable.h>
#include <java/nio/file/Path.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/Set.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <jcpp.h>

using $OptionArray = $Array<::com::sun::tools::javac::main::Option>;
using $Locations = ::com::sun::tools::javac::file::Locations;
using $Locations$BasicLocationHandler = ::com::sun::tools::javac::file::Locations$BasicLocationHandler;
using $Locations$SearchPath = ::com::sun::tools::javac::file::Locations$SearchPath;
using $Option = ::com::sun::tools::javac::main::Option;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $Set = ::java::util::Set;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

$FieldInfo _Locations$SimpleLocationHandler_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/file/Locations;", nullptr, $FINAL | $SYNTHETIC, $field(Locations$SimpleLocationHandler, this$0)},
	{"searchPath", "Ljava/util/Collection;", "Ljava/util/Collection<Ljava/nio/file/Path;>;", $PROTECTED, $field(Locations$SimpleLocationHandler, searchPath)},
	{}
};

$MethodInfo _Locations$SimpleLocationHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/file/Locations;Ljavax/tools/JavaFileManager$Location;[Lcom/sun/tools/javac/main/Option;)V", nullptr, $TRANSIENT, $method(static_cast<void(Locations$SimpleLocationHandler::*)($Locations*,$JavaFileManager$Location*,$OptionArray*)>(&Locations$SimpleLocationHandler::init$))},
	{"computePath", "(Ljava/lang/String;)Lcom/sun/tools/javac/file/Locations$SearchPath;", nullptr, $PROTECTED},
	{"contains", "(Ljava/nio/file/Path;)Z", nullptr, 0, nullptr, "java.io.IOException"},
	{"createPath", "()Lcom/sun/tools/javac/file/Locations$SearchPath;", nullptr, $PROTECTED},
	{"getPaths", "()Ljava/util/Collection;", "()Ljava/util/Collection<Ljava/nio/file/Path;>;", 0},
	{"handleOption", "(Lcom/sun/tools/javac/main/Option;Ljava/lang/String;)Z", nullptr, 0},
	{"setPaths", "(Ljava/lang/Iterable;)V", "(Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)V", 0},
	{}
};

$InnerClassInfo _Locations$SimpleLocationHandler_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.Locations$SimpleLocationHandler", "com.sun.tools.javac.file.Locations", "SimpleLocationHandler", $PRIVATE},
	{"com.sun.tools.javac.file.Locations$BasicLocationHandler", "com.sun.tools.javac.file.Locations", "BasicLocationHandler", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Locations$SimpleLocationHandler_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.file.Locations$SimpleLocationHandler",
	"com.sun.tools.javac.file.Locations$BasicLocationHandler",
	nullptr,
	_Locations$SimpleLocationHandler_FieldInfo_,
	_Locations$SimpleLocationHandler_MethodInfo_,
	nullptr,
	nullptr,
	_Locations$SimpleLocationHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.Locations"
};

$Object* allocate$Locations$SimpleLocationHandler($Class* clazz) {
	return $of($alloc(Locations$SimpleLocationHandler));
}

void Locations$SimpleLocationHandler::init$($Locations* this$0, $JavaFileManager$Location* location, $OptionArray* options) {
	$set(this, this$0, this$0);
	$Locations$BasicLocationHandler::init$(location, options);
}

bool Locations$SimpleLocationHandler::handleOption($Option* option, $String* value) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(this->options)->contains(option)) {
		return false;
	}
	this->explicit$ = true;
	$set(this, searchPath, value == nullptr ? ($Collection*)nullptr : $Collections::unmodifiableCollection($(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>(static_cast<$HashSet*>(static_cast<$LinkedHashSet*>($nc($(createPath()))->addFiles(value)))))))));
	return true;
}

$Collection* Locations$SimpleLocationHandler::getPaths() {
	return this->searchPath;
}

void Locations$SimpleLocationHandler::setPaths($Iterable* files) {
	$useLocalCurrentObjectStackCache();
	$var($Locations$SearchPath, p, nullptr);
	if (files == nullptr) {
		$assign(p, computePath(nullptr));
	} else {
		this->explicit$ = true;
		$assign(p, $nc($(createPath()))->addFiles(files));
	}
	$set(this, searchPath, $Collections::unmodifiableCollection(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>(static_cast<$HashSet*>(static_cast<$LinkedHashSet*>(p)))))));
}

$Locations$SearchPath* Locations$SimpleLocationHandler::computePath($String* value) {
	return $nc($(createPath()))->addFiles(value);
}

$Locations$SearchPath* Locations$SimpleLocationHandler::createPath() {
	return $new($Locations$SearchPath, this->this$0);
}

bool Locations$SimpleLocationHandler::contains($Path* file) {
	return this->this$0->contains(this->searchPath, file);
}

Locations$SimpleLocationHandler::Locations$SimpleLocationHandler() {
}

$Class* Locations$SimpleLocationHandler::load$($String* name, bool initialize) {
	$loadClass(Locations$SimpleLocationHandler, name, initialize, &_Locations$SimpleLocationHandler_ClassInfo_, allocate$Locations$SimpleLocationHandler);
	return class$;
}

$Class* Locations$SimpleLocationHandler::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com