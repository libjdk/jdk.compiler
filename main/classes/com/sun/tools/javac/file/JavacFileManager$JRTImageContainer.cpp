#include <com/sun/tools/javac/file/JavacFileManager$JRTImageContainer.h>

#include <com/sun/tools/javac/file/BaseFileManager.h>
#include <com/sun/tools/javac/file/JRTIndex$CtSym.h>
#include <com/sun/tools/javac/file/JRTIndex$Entry.h>
#include <com/sun/tools/javac/file/JRTIndex.h>
#include <com/sun/tools/javac/file/JavacFileManager.h>
#include <com/sun/tools/javac/file/PathFileObject.h>
#include <com/sun/tools/javac/file/RelativePath$RelativeDirectory.h>
#include <com/sun/tools/javac/file/RelativePath$RelativeFile.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log.h>
#include <java/io/IOException.h>
#include <java/lang/Iterable.h>
#include <java/nio/file/Path.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $BaseFileManager = ::com::sun::tools::javac::file::BaseFileManager;
using $JRTIndex = ::com::sun::tools::javac::file::JRTIndex;
using $JRTIndex$CtSym = ::com::sun::tools::javac::file::JRTIndex$CtSym;
using $JRTIndex$Entry = ::com::sun::tools::javac::file::JRTIndex$Entry;
using $JavacFileManager = ::com::sun::tools::javac::file::JavacFileManager;
using $JavacFileManager$Container = ::com::sun::tools::javac::file::JavacFileManager$Container;
using $PathFileObject = ::com::sun::tools::javac::file::PathFileObject;
using $RelativePath$RelativeDirectory = ::com::sun::tools::javac::file::RelativePath$RelativeDirectory;
using $RelativePath$RelativeFile = ::com::sun::tools::javac::file::RelativePath$RelativeFile;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $AbstractCollection = ::java::util::AbstractCollection;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

$FieldInfo _JavacFileManager$JRTImageContainer_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/file/JavacFileManager;", nullptr, $FINAL | $SYNTHETIC, $field(JavacFileManager$JRTImageContainer, this$0)},
	{}
};

$MethodInfo _JavacFileManager$JRTImageContainer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/file/JavacFileManager;)V", nullptr, $PRIVATE, $method(static_cast<void(JavacFileManager$JRTImageContainer::*)($JavacFileManager*)>(&JavacFileManager$JRTImageContainer::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getFileObject", "(Ljava/nio/file/Path;Lcom/sun/tools/javac/file/RelativePath$RelativeFile;)Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"indexedDirectories", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<Lcom/sun/tools/javac/file/RelativePath$RelativeDirectory;>;", $PUBLIC},
	{"list", "(Ljava/nio/file/Path;Lcom/sun/tools/javac/file/RelativePath$RelativeDirectory;Ljava/util/Set;ZLcom/sun/tools/javac/util/ListBuffer;)V", "(Ljava/nio/file/Path;Lcom/sun/tools/javac/file/RelativePath$RelativeDirectory;Ljava/util/Set<Ljavax/tools/JavaFileObject$Kind;>;ZLcom/sun/tools/javac/util/ListBuffer<Ljavax/tools/JavaFileObject;>;)V", $PUBLIC, nullptr, "java.io.IOException"},
	{"maintainsDirectoryIndex", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JavacFileManager$JRTImageContainer_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.JavacFileManager$JRTImageContainer", "com.sun.tools.javac.file.JavacFileManager", "JRTImageContainer", $PRIVATE | $FINAL},
	{"com.sun.tools.javac.file.JavacFileManager$Container", "com.sun.tools.javac.file.JavacFileManager", "Container", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JavacFileManager$JRTImageContainer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.tools.javac.file.JavacFileManager$JRTImageContainer",
	"java.lang.Object",
	"com.sun.tools.javac.file.JavacFileManager$Container",
	_JavacFileManager$JRTImageContainer_FieldInfo_,
	_JavacFileManager$JRTImageContainer_MethodInfo_,
	nullptr,
	nullptr,
	_JavacFileManager$JRTImageContainer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.JavacFileManager"
};

$Object* allocate$JavacFileManager$JRTImageContainer($Class* clazz) {
	return $of($alloc(JavacFileManager$JRTImageContainer));
}

void JavacFileManager$JRTImageContainer::init$($JavacFileManager* this$0) {
	$set(this, this$0, this$0);
}

void JavacFileManager$JRTImageContainer::list($Path* userPath, $RelativePath$RelativeDirectory* subdirectory, $Set* fileKinds, bool recurse, $ListBuffer* resultList) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($JRTIndex$Entry, e, $nc($(this->this$0->getJRTIndex()))->getEntry(subdirectory));
		if (this->this$0->symbolFileEnabled && $nc($nc(e)->ctSym)->hidden) {
			return;
		}
		{
			$var($Iterator, i$, $nc($($nc($nc(e)->files)->values()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Path, file, $cast($Path, i$->next()));
				{
					if ($nc(fileKinds)->contains($($BaseFileManager::getKind(file)))) {
						$var($JavaFileObject, fe, $PathFileObject::forJRTPath(this->this$0, file));
						$nc(resultList)->append(fe);
					}
				}
			}
		}
		if (recurse) {
			{
				$var($Iterator, i$, $nc(e->subdirs)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($RelativePath$RelativeDirectory, rd, $cast($RelativePath$RelativeDirectory, i$->next()));
					{
						list(userPath, rd, fileKinds, recurse, resultList);
					}
				}
			}
		}
	} catch ($IOException& ex) {
		ex->printStackTrace($System::err);
		$nc(this->this$0->log)->error($($CompilerProperties$Errors::ErrorReadingFile(userPath, $($JavacFileManager::getMessage(ex)))));
	}
}

$JavaFileObject* JavacFileManager$JRTImageContainer::getFileObject($Path* userPath, $RelativePath$RelativeFile* name) {
	$useLocalCurrentObjectStackCache();
	$var($JRTIndex$Entry, e, $nc($(this->this$0->getJRTIndex()))->getEntry($($nc(name)->dirname())));
	if (this->this$0->symbolFileEnabled && $nc($nc(e)->ctSym)->hidden) {
		return nullptr;
	}
	$var($Path, p, $cast($Path, $nc($nc(e)->files)->get($($nc(name)->basename()))));
	if (p != nullptr) {
		return $PathFileObject::forJRTPath(this->this$0, p);
	} else {
		return nullptr;
	}
}

void JavacFileManager$JRTImageContainer::close() {
}

bool JavacFileManager$JRTImageContainer::maintainsDirectoryIndex() {
	return false;
}

$Iterable* JavacFileManager$JRTImageContainer::indexedDirectories() {
	return static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($List::nil())));
}

JavacFileManager$JRTImageContainer::JavacFileManager$JRTImageContainer() {
}

$Class* JavacFileManager$JRTImageContainer::load$($String* name, bool initialize) {
	$loadClass(JavacFileManager$JRTImageContainer, name, initialize, &_JavacFileManager$JRTImageContainer_ClassInfo_, allocate$JavacFileManager$JRTImageContainer);
	return class$;
}

$Class* JavacFileManager$JRTImageContainer::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com