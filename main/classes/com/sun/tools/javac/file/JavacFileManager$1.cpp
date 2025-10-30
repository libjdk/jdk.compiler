#include <com/sun/tools/javac/file/JavacFileManager$1.h>

#include <com/sun/tools/javac/file/RelativePath$RelativeDirectory.h>
#include <com/sun/tools/javac/file/RelativePath$RelativeFile.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <java/lang/Iterable.h>
#include <java/nio/file/Path.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Collection.h>
#include <java/util/Set.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $JavacFileManager$Container = ::com::sun::tools::javac::file::JavacFileManager$Container;
using $RelativePath$RelativeDirectory = ::com::sun::tools::javac::file::RelativePath$RelativeDirectory;
using $RelativePath$RelativeFile = ::com::sun::tools::javac::file::RelativePath$RelativeFile;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $AbstractCollection = ::java::util::AbstractCollection;
using $Collection = ::java::util::Collection;
using $Set = ::java::util::Set;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

$MethodInfo _JavacFileManager$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JavacFileManager$1::*)()>(&JavacFileManager$1::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getFileObject", "(Ljava/nio/file/Path;Lcom/sun/tools/javac/file/RelativePath$RelativeFile;)Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"indexedDirectories", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<Lcom/sun/tools/javac/file/RelativePath$RelativeDirectory;>;", $PUBLIC},
	{"list", "(Ljava/nio/file/Path;Lcom/sun/tools/javac/file/RelativePath$RelativeDirectory;Ljava/util/Set;ZLcom/sun/tools/javac/util/ListBuffer;)V", "(Ljava/nio/file/Path;Lcom/sun/tools/javac/file/RelativePath$RelativeDirectory;Ljava/util/Set<Ljavax/tools/JavaFileObject$Kind;>;ZLcom/sun/tools/javac/util/ListBuffer<Ljavax/tools/JavaFileObject;>;)V", $PUBLIC, nullptr, "java.io.IOException"},
	{"maintainsDirectoryIndex", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JavacFileManager$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.file.JavacFileManager",
	nullptr,
	nullptr
};

$InnerClassInfo _JavacFileManager$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.JavacFileManager$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.file.JavacFileManager$Container", "com.sun.tools.javac.file.JavacFileManager", "Container", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JavacFileManager$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.file.JavacFileManager$1",
	"java.lang.Object",
	"com.sun.tools.javac.file.JavacFileManager$Container",
	nullptr,
	_JavacFileManager$1_MethodInfo_,
	nullptr,
	&_JavacFileManager$1_EnclosingMethodInfo_,
	_JavacFileManager$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.JavacFileManager"
};

$Object* allocate$JavacFileManager$1($Class* clazz) {
	return $of($alloc(JavacFileManager$1));
}

void JavacFileManager$1::init$() {
}

void JavacFileManager$1::list($Path* userPath, $RelativePath$RelativeDirectory* subdirectory, $Set* fileKinds, bool recurse, $ListBuffer* resultList) {
}

$JavaFileObject* JavacFileManager$1::getFileObject($Path* userPath, $RelativePath$RelativeFile* name) {
	return nullptr;
}

void JavacFileManager$1::close() {
}

bool JavacFileManager$1::maintainsDirectoryIndex() {
	return false;
}

$Iterable* JavacFileManager$1::indexedDirectories() {
	return static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($List::nil())));
}

JavacFileManager$1::JavacFileManager$1() {
}

$Class* JavacFileManager$1::load$($String* name, bool initialize) {
	$loadClass(JavacFileManager$1, name, initialize, &_JavacFileManager$1_ClassInfo_, allocate$JavacFileManager$1);
	return class$;
}

$Class* JavacFileManager$1::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com