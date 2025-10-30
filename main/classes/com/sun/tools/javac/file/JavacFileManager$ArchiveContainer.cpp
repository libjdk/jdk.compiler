#include <com/sun/tools/javac/file/JavacFileManager$ArchiveContainer.h>

#include <com/sun/tools/javac/file/BaseFileManager.h>
#include <com/sun/tools/javac/file/FSInfo.h>
#include <com/sun/tools/javac/file/JavacFileManager$ArchiveContainer$1.h>
#include <com/sun/tools/javac/file/JavacFileManager$ArchiveContainer$2.h>
#include <com/sun/tools/javac/file/JavacFileManager.h>
#include <com/sun/tools/javac/file/PathFileObject.h>
#include <com/sun/tools/javac/file/RelativePath$RelativeDirectory.h>
#include <com/sun/tools/javac/file/RelativePath$RelativeFile.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <java/lang/CharSequence.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Iterable.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileSystems.h>
#include <java/nio/file/FileVisitor.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/SimpleFileVisitor.h>
#include <java/nio/file/spi/FileSystemProvider.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/lang/model/SourceVersion.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef FOLLOW_LINKS_OPTIONS
#undef MAX_VALUE
#undef NO_FILE_VISIT_OPTIONS

using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $BaseFileManager = ::com::sun::tools::javac::file::BaseFileManager;
using $FSInfo = ::com::sun::tools::javac::file::FSInfo;
using $JavacFileManager = ::com::sun::tools::javac::file::JavacFileManager;
using $JavacFileManager$ArchiveContainer$1 = ::com::sun::tools::javac::file::JavacFileManager$ArchiveContainer$1;
using $JavacFileManager$ArchiveContainer$2 = ::com::sun::tools::javac::file::JavacFileManager$ArchiveContainer$2;
using $JavacFileManager$Container = ::com::sun::tools::javac::file::JavacFileManager$Container;
using $PathFileObject = ::com::sun::tools::javac::file::PathFileObject;
using $RelativePath$RelativeDirectory = ::com::sun::tools::javac::file::RelativePath$RelativeDirectory;
using $RelativePath$RelativeFile = ::com::sun::tools::javac::file::RelativePath$RelativeFile;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystem = ::java::nio::file::FileSystem;
using $FileSystems = ::java::nio::file::FileSystems;
using $FileVisitor = ::java::nio::file::FileVisitor;
using $Files = ::java::nio::file::Files;
using $LinkOption = ::java::nio::file::LinkOption;
using $Path = ::java::nio::file::Path;
using $SimpleFileVisitor = ::java::nio::file::SimpleFileVisitor;
using $FileSystemProvider = ::java::nio::file::spi::FileSystemProvider;
using $AbstractMap = ::java::util::AbstractMap;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $SourceVersion = ::javax::lang::model::SourceVersion;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

$FieldInfo _JavacFileManager$ArchiveContainer_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/file/JavacFileManager;", nullptr, $FINAL | $SYNTHETIC, $field(JavacFileManager$ArchiveContainer, this$0)},
	{"archivePath", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $FINAL, $field(JavacFileManager$ArchiveContainer, archivePath)},
	{"fileSystem", "Ljava/nio/file/FileSystem;", nullptr, $PRIVATE | $FINAL, $field(JavacFileManager$ArchiveContainer, fileSystem)},
	{"packages", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/file/RelativePath$RelativeDirectory;Ljava/nio/file/Path;>;", $PRIVATE | $FINAL, $field(JavacFileManager$ArchiveContainer, packages)},
	{}
};

$MethodInfo _JavacFileManager$ArchiveContainer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/file/JavacFileManager;Ljava/nio/file/Path;)V", nullptr, $PUBLIC, $method(static_cast<void(JavacFileManager$ArchiveContainer::*)($JavacFileManager*,$Path*)>(&JavacFileManager$ArchiveContainer::init$)), "java.io.IOException,java.nio.file.ProviderNotFoundException,java.lang.SecurityException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getFileObject", "(Ljava/nio/file/Path;Lcom/sun/tools/javac/file/RelativePath$RelativeFile;)Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"indexedDirectories", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<Lcom/sun/tools/javac/file/RelativePath$RelativeDirectory;>;", $PUBLIC},
	{"isValid", "(Ljava/nio/file/Path;)Z", nullptr, $PRIVATE, $method(static_cast<bool(JavacFileManager$ArchiveContainer::*)($Path*)>(&JavacFileManager$ArchiveContainer::isValid))},
	{"list", "(Ljava/nio/file/Path;Lcom/sun/tools/javac/file/RelativePath$RelativeDirectory;Ljava/util/Set;ZLcom/sun/tools/javac/util/ListBuffer;)V", "(Ljava/nio/file/Path;Lcom/sun/tools/javac/file/RelativePath$RelativeDirectory;Ljava/util/Set<Ljavax/tools/JavaFileObject$Kind;>;ZLcom/sun/tools/javac/util/ListBuffer<Ljavax/tools/JavaFileObject;>;)V", $PUBLIC, nullptr, "java.io.IOException"},
	{"maintainsDirectoryIndex", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JavacFileManager$ArchiveContainer_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.JavacFileManager$ArchiveContainer", "com.sun.tools.javac.file.JavacFileManager", "ArchiveContainer", $PRIVATE | $FINAL},
	{"com.sun.tools.javac.file.JavacFileManager$Container", "com.sun.tools.javac.file.JavacFileManager", "Container", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.file.JavacFileManager$ArchiveContainer$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.file.JavacFileManager$ArchiveContainer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JavacFileManager$ArchiveContainer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.tools.javac.file.JavacFileManager$ArchiveContainer",
	"java.lang.Object",
	"com.sun.tools.javac.file.JavacFileManager$Container",
	_JavacFileManager$ArchiveContainer_FieldInfo_,
	_JavacFileManager$ArchiveContainer_MethodInfo_,
	nullptr,
	nullptr,
	_JavacFileManager$ArchiveContainer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.JavacFileManager"
};

$Object* allocate$JavacFileManager$ArchiveContainer($Class* clazz) {
	return $of($alloc(JavacFileManager$ArchiveContainer));
}

void JavacFileManager$ArchiveContainer::init$($JavacFileManager* this$0, $Path* archivePath) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$set(this, archivePath, archivePath);
	if (this$0->multiReleaseValue != nullptr && $nc($($nc(archivePath)->toString()))->endsWith(".jar"_s)) {
		$var($Map, env, $Collections::singletonMap("multi-release"_s, this$0->multiReleaseValue));
		$var($FileSystemProvider, jarFSProvider, $nc(this$0->fsInfo)->getJarFSProvider());
		$Assert::checkNonNull($of(jarFSProvider), "should have been caught before!"_s);
		$set(this, fileSystem, $nc(jarFSProvider)->newFileSystem(archivePath, env));
	} else {
		$set(this, fileSystem, $FileSystems::newFileSystem(archivePath, ($ClassLoader*)nullptr));
	}
	$set(this, packages, $new($HashMap));
	{
		$var($Iterator, i$, $nc($($nc(this->fileSystem)->getRootDirectories()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Path, root, $cast($Path, i$->next()));
			{
				$init($JavacFileManager);
				$Files::walkFileTree(root, $JavacFileManager::NO_FILE_VISIT_OPTIONS, $Integer::MAX_VALUE, $$new($JavacFileManager$ArchiveContainer$1, this, this$0, root));
			}
		}
	}
}

void JavacFileManager$ArchiveContainer::list($Path* userPath, $RelativePath$RelativeDirectory* subdirectory, $Set* fileKinds, bool recurse, $ListBuffer* resultList) {
	$useLocalCurrentObjectStackCache();
	$var($Path, resolvedSubdirectory, $cast($Path, $nc(this->packages)->get(subdirectory)));
	if (resolvedSubdirectory == nullptr) {
		return;
	}
	int32_t maxDepth = (recurse ? $Integer::MAX_VALUE : 1);
	$init($JavacFileManager);
	$Files::walkFileTree(resolvedSubdirectory, $JavacFileManager::FOLLOW_LINKS_OPTIONS, maxDepth, $$new($JavacFileManager$ArchiveContainer$2, this, fileKinds, resultList));
}

bool JavacFileManager$ArchiveContainer::isValid($Path* fileName) {
	if (fileName == nullptr) {
		return true;
	} else {
		$var($String, name, $nc(fileName)->toString());
		if ($nc(name)->endsWith("/"_s)) {
			$assign(name, name->substring(0, name->length() - 1));
		}
		return $SourceVersion::isIdentifier(name);
	}
}

$JavaFileObject* JavacFileManager$ArchiveContainer::getFileObject($Path* userPath, $RelativePath$RelativeFile* name) {
	$useLocalCurrentObjectStackCache();
	$var($RelativePath$RelativeDirectory, root, $nc(name)->dirname());
	$var($Path, packagepath, $cast($Path, $nc(this->packages)->get(root)));
	if (packagepath != nullptr) {
		$var($Path, relpath, packagepath->resolve($(name->basename())));
		if ($Files::exists(relpath, $$new($LinkOptionArray, 0))) {
			return $PathFileObject::forJarPath(this->this$0, relpath, userPath);
		}
	}
	return nullptr;
}

void JavacFileManager$ArchiveContainer::close() {
	$nc(this->fileSystem)->close();
}

bool JavacFileManager$ArchiveContainer::maintainsDirectoryIndex() {
	return true;
}

$Iterable* JavacFileManager$ArchiveContainer::indexedDirectories() {
	return $nc(this->packages)->keySet();
}

JavacFileManager$ArchiveContainer::JavacFileManager$ArchiveContainer() {
}

$Class* JavacFileManager$ArchiveContainer::load$($String* name, bool initialize) {
	$loadClass(JavacFileManager$ArchiveContainer, name, initialize, &_JavacFileManager$ArchiveContainer_ClassInfo_, allocate$JavacFileManager$ArchiveContainer);
	return class$;
}

$Class* JavacFileManager$ArchiveContainer::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com