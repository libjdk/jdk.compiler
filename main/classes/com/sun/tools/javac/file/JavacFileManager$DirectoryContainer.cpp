#include <com/sun/tools/javac/file/JavacFileManager$DirectoryContainer.h>

#include <com/sun/tools/javac/file/BaseFileManager.h>
#include <com/sun/tools/javac/file/FSInfo.h>
#include <com/sun/tools/javac/file/JavacFileManager$SortFiles.h>
#include <com/sun/tools/javac/file/JavacFileManager.h>
#include <com/sun/tools/javac/file/PathFileObject.h>
#include <com/sun/tools/javac/file/RelativePath$RelativeDirectory.h>
#include <com/sun/tools/javac/file/RelativePath$RelativeFile.h>
#include <com/sun/tools/javac/file/RelativePath.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <java/io/IOException.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Iterable.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/InvalidPathException.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Collection.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <java/util/stream/Stream.h>
#include <javax/lang/model/SourceVersion.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $BaseFileManager = ::com::sun::tools::javac::file::BaseFileManager;
using $FSInfo = ::com::sun::tools::javac::file::FSInfo;
using $JavacFileManager = ::com::sun::tools::javac::file::JavacFileManager;
using $JavacFileManager$Container = ::com::sun::tools::javac::file::JavacFileManager$Container;
using $JavacFileManager$SortFiles = ::com::sun::tools::javac::file::JavacFileManager$SortFiles;
using $PathFileObject = ::com::sun::tools::javac::file::PathFileObject;
using $RelativePath = ::com::sun::tools::javac::file::RelativePath;
using $RelativePath$RelativeDirectory = ::com::sun::tools::javac::file::RelativePath$RelativeDirectory;
using $RelativePath$RelativeFile = ::com::sun::tools::javac::file::RelativePath$RelativeFile;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $IOException = ::java::io::IOException;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Files = ::java::nio::file::Files;
using $InvalidPathException = ::java::nio::file::InvalidPathException;
using $LinkOption = ::java::nio::file::LinkOption;
using $Path = ::java::nio::file::Path;
using $AbstractCollection = ::java::util::AbstractCollection;
using $Collection = ::java::util::Collection;
using $Comparator = ::java::util::Comparator;
using $Iterator = ::java::util::Iterator;
using $1List = ::java::util::List;
using $Set = ::java::util::Set;
using $BaseStream = ::java::util::stream::BaseStream;
using $Stream = ::java::util::stream::Stream;
using $SourceVersion = ::javax::lang::model::SourceVersion;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

$FieldInfo _JavacFileManager$DirectoryContainer_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/file/JavacFileManager;", nullptr, $FINAL | $SYNTHETIC, $field(JavacFileManager$DirectoryContainer, this$0)},
	{"directory", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $FINAL, $field(JavacFileManager$DirectoryContainer, directory)},
	{}
};

$MethodInfo _JavacFileManager$DirectoryContainer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/file/JavacFileManager;Ljava/nio/file/Path;)V", nullptr, $PUBLIC, $method(static_cast<void(JavacFileManager$DirectoryContainer::*)($JavacFileManager*,$Path*)>(&JavacFileManager$DirectoryContainer::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getFileObject", "(Ljava/nio/file/Path;Lcom/sun/tools/javac/file/RelativePath$RelativeFile;)Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"indexedDirectories", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<Lcom/sun/tools/javac/file/RelativePath$RelativeDirectory;>;", $PUBLIC},
	{"list", "(Ljava/nio/file/Path;Lcom/sun/tools/javac/file/RelativePath$RelativeDirectory;Ljava/util/Set;ZLcom/sun/tools/javac/util/ListBuffer;)V", "(Ljava/nio/file/Path;Lcom/sun/tools/javac/file/RelativePath$RelativeDirectory;Ljava/util/Set<Ljavax/tools/JavaFileObject$Kind;>;ZLcom/sun/tools/javac/util/ListBuffer<Ljavax/tools/JavaFileObject;>;)V", $PUBLIC, nullptr, "java.io.IOException"},
	{"maintainsDirectoryIndex", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JavacFileManager$DirectoryContainer_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.JavacFileManager$DirectoryContainer", "com.sun.tools.javac.file.JavacFileManager", "DirectoryContainer", $PRIVATE | $FINAL},
	{"com.sun.tools.javac.file.JavacFileManager$Container", "com.sun.tools.javac.file.JavacFileManager", "Container", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JavacFileManager$DirectoryContainer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.tools.javac.file.JavacFileManager$DirectoryContainer",
	"java.lang.Object",
	"com.sun.tools.javac.file.JavacFileManager$Container",
	_JavacFileManager$DirectoryContainer_FieldInfo_,
	_JavacFileManager$DirectoryContainer_MethodInfo_,
	nullptr,
	nullptr,
	_JavacFileManager$DirectoryContainer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.JavacFileManager"
};

$Object* allocate$JavacFileManager$DirectoryContainer($Class* clazz) {
	return $of($alloc(JavacFileManager$DirectoryContainer));
}

void JavacFileManager$DirectoryContainer::init$($JavacFileManager* this$0, $Path* directory) {
	$set(this, this$0, this$0);
	$set(this, directory, directory);
}

void JavacFileManager$DirectoryContainer::list($Path* userPath, $RelativePath$RelativeDirectory* subdirectory, $Set* fileKinds, bool recurse, $ListBuffer* resultList) {
	$useLocalCurrentObjectStackCache();
	$var($Path, d, nullptr);
	try {
		$assign(d, $nc(subdirectory)->resolveAgainst(userPath));
	} catch ($InvalidPathException& ignore) {
		return;
	}
	if (!$Files::exists(d, $$new($LinkOptionArray, 0))) {
		return;
	}
	if (!this->this$0->caseMapCheck(d, subdirectory)) {
		return;
	}
	$var($1List, files, nullptr);
	try {
		$var($Stream, s, $Files::list(d));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$assign(files, $nc((this->this$0->sortFiles == nullptr ? s : $($nc(s)->sorted(this->this$0->sortFiles))))->toList());
				} catch ($Throwable& t$) {
					if (s != nullptr) {
						try {
							s->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				if (s != nullptr) {
					s->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($IOException& ignore) {
		return;
	}
	{
		$var($Iterator, i$, $nc(files)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Path, f, $cast($Path, i$->next()));
			{
				$var($String, fname, $nc($($nc(f)->getFileName()))->toString());
				if ($nc(fname)->endsWith("/"_s)) {
					$assign(fname, fname->substring(0, fname->length() - 1));
				}
				if ($Files::isDirectory(f, $$new($LinkOptionArray, 0))) {
					if (recurse && $SourceVersion::isIdentifier(fname)) {
						list(userPath, $$new($RelativePath$RelativeDirectory, subdirectory, fname), fileKinds, recurse, resultList);
					}
				} else if (this->this$0->isValidFile(fname, fileKinds)) {
					try {
						$var($RelativePath$RelativeFile, file, $new($RelativePath$RelativeFile, subdirectory, fname));
						$var($JavaFileObject, fe, $PathFileObject::forDirectoryPath(this->this$0, $(file->resolveAgainst(this->directory)), userPath, file));
						$nc(resultList)->append(fe);
					} catch ($InvalidPathException& e) {
						$throwNew($IOException, $$str({"error accessing directory "_s, this->directory, e}));
					}
				}
			}
		}
	}
}

$JavaFileObject* JavacFileManager$DirectoryContainer::getFileObject($Path* userPath, $RelativePath$RelativeFile* name) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($Path, f, $nc(name)->resolveAgainst(userPath));
		if ($Files::exists(f, $$new($LinkOptionArray, 0))) {
			return $PathFileObject::forSimplePath(this->this$0, $($nc(this->this$0->fsInfo)->getCanonicalFile(f)), f);
		}
	} catch ($InvalidPathException& ignore) {
	}
	return nullptr;
}

void JavacFileManager$DirectoryContainer::close() {
}

bool JavacFileManager$DirectoryContainer::maintainsDirectoryIndex() {
	return false;
}

$Iterable* JavacFileManager$DirectoryContainer::indexedDirectories() {
	return static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($List::nil())));
}

JavacFileManager$DirectoryContainer::JavacFileManager$DirectoryContainer() {
}

$Class* JavacFileManager$DirectoryContainer::load$($String* name, bool initialize) {
	$loadClass(JavacFileManager$DirectoryContainer, name, initialize, &_JavacFileManager$DirectoryContainer_ClassInfo_, allocate$JavacFileManager$DirectoryContainer);
	return class$;
}

$Class* JavacFileManager$DirectoryContainer::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com