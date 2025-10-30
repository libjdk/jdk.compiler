#include <com/sun/tools/javac/file/JavacFileManager$Container.h>

#include <com/sun/tools/javac/file/JavacFileManager.h>
#include <com/sun/tools/javac/file/RelativePath$RelativeDirectory.h>
#include <com/sun/tools/javac/file/RelativePath$RelativeFile.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <java/nio/file/Path.h>
#include <java/util/Set.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $JavacFileManager = ::com::sun::tools::javac::file::JavacFileManager;
using $RelativePath$RelativeDirectory = ::com::sun::tools::javac::file::RelativePath$RelativeDirectory;
using $RelativePath$RelativeFile = ::com::sun::tools::javac::file::RelativePath$RelativeFile;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $Set = ::java::util::Set;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

$MethodInfo _JavacFileManager$Container_MethodInfo_[] = {
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getFileObject", "(Ljava/nio/file/Path;Lcom/sun/tools/javac/file/RelativePath$RelativeFile;)Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"indexedDirectories", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<Lcom/sun/tools/javac/file/RelativePath$RelativeDirectory;>;", $PUBLIC | $ABSTRACT},
	{"list", "(Ljava/nio/file/Path;Lcom/sun/tools/javac/file/RelativePath$RelativeDirectory;Ljava/util/Set;ZLcom/sun/tools/javac/util/ListBuffer;)V", "(Ljava/nio/file/Path;Lcom/sun/tools/javac/file/RelativePath$RelativeDirectory;Ljava/util/Set<Ljavax/tools/JavaFileObject$Kind;>;ZLcom/sun/tools/javac/util/ListBuffer<Ljavax/tools/JavaFileObject;>;)V", $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"maintainsDirectoryIndex", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _JavacFileManager$Container_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.JavacFileManager$Container", "com.sun.tools.javac.file.JavacFileManager", "Container", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JavacFileManager$Container_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.file.JavacFileManager$Container",
	nullptr,
	nullptr,
	nullptr,
	_JavacFileManager$Container_MethodInfo_,
	nullptr,
	nullptr,
	_JavacFileManager$Container_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.JavacFileManager"
};

$Object* allocate$JavacFileManager$Container($Class* clazz) {
	return $of($alloc(JavacFileManager$Container));
}

$Class* JavacFileManager$Container::load$($String* name, bool initialize) {
	$loadClass(JavacFileManager$Container, name, initialize, &_JavacFileManager$Container_ClassInfo_, allocate$JavacFileManager$Container);
	return class$;
}

$Class* JavacFileManager$Container::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com