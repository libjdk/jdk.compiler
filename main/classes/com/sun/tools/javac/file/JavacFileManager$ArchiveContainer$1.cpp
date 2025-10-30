#include <com/sun/tools/javac/file/JavacFileManager$ArchiveContainer$1.h>

#include <com/sun/tools/javac/file/JavacFileManager$ArchiveContainer.h>
#include <com/sun/tools/javac/file/JavacFileManager.h>
#include <com/sun/tools/javac/file/RelativePath$RelativeDirectory.h>
#include <java/nio/file/FileVisitResult.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/SimpleFileVisitor.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef CONTINUE
#undef SKIP_SUBTREE

using $JavacFileManager = ::com::sun::tools::javac::file::JavacFileManager;
using $JavacFileManager$ArchiveContainer = ::com::sun::tools::javac::file::JavacFileManager$ArchiveContainer;
using $RelativePath$RelativeDirectory = ::com::sun::tools::javac::file::RelativePath$RelativeDirectory;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileVisitResult = ::java::nio::file::FileVisitResult;
using $Path = ::java::nio::file::Path;
using $SimpleFileVisitor = ::java::nio::file::SimpleFileVisitor;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

$FieldInfo _JavacFileManager$ArchiveContainer$1_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/file/JavacFileManager$ArchiveContainer;", nullptr, $FINAL | $SYNTHETIC, $field(JavacFileManager$ArchiveContainer$1, this$1)},
	{"val$root", "Ljava/nio/file/Path;", nullptr, $FINAL | $SYNTHETIC, $field(JavacFileManager$ArchiveContainer$1, val$root)},
	{"val$this$0", "Lcom/sun/tools/javac/file/JavacFileManager;", nullptr, $FINAL | $SYNTHETIC, $field(JavacFileManager$ArchiveContainer$1, val$this$0)},
	{}
};

$MethodInfo _JavacFileManager$ArchiveContainer$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/file/JavacFileManager$ArchiveContainer;Lcom/sun/tools/javac/file/JavacFileManager;Ljava/nio/file/Path;)V", nullptr, 0, $method(static_cast<void(JavacFileManager$ArchiveContainer$1::*)($JavacFileManager$ArchiveContainer*,$JavacFileManager*,$Path*)>(&JavacFileManager$ArchiveContainer$1::init$))},
	{"preVisitDirectory", "(Ljava/nio/file/Path;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC},
	{"preVisitDirectory", "(Ljava/lang/Object;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _JavacFileManager$ArchiveContainer$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.file.JavacFileManager$ArchiveContainer",
	"<init>",
	"(Lcom/sun/tools/javac/file/JavacFileManager;Ljava/nio/file/Path;)V"
};

$InnerClassInfo _JavacFileManager$ArchiveContainer$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.JavacFileManager$ArchiveContainer", "com.sun.tools.javac.file.JavacFileManager", "ArchiveContainer", $PRIVATE | $FINAL},
	{"com.sun.tools.javac.file.JavacFileManager$ArchiveContainer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JavacFileManager$ArchiveContainer$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.file.JavacFileManager$ArchiveContainer$1",
	"java.nio.file.SimpleFileVisitor",
	nullptr,
	_JavacFileManager$ArchiveContainer$1_FieldInfo_,
	_JavacFileManager$ArchiveContainer$1_MethodInfo_,
	"Ljava/nio/file/SimpleFileVisitor<Ljava/nio/file/Path;>;",
	&_JavacFileManager$ArchiveContainer$1_EnclosingMethodInfo_,
	_JavacFileManager$ArchiveContainer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.JavacFileManager"
};

$Object* allocate$JavacFileManager$ArchiveContainer$1($Class* clazz) {
	return $of($alloc(JavacFileManager$ArchiveContainer$1));
}

void JavacFileManager$ArchiveContainer$1::init$($JavacFileManager$ArchiveContainer* this$1, $JavacFileManager* val$this$0, $Path* val$root) {
	$set(this, this$1, this$1);
	$set(this, val$this$0, val$this$0);
	$set(this, val$root, val$root);
	$SimpleFileVisitor::init$();
}

$FileVisitResult* JavacFileManager$ArchiveContainer$1::preVisitDirectory($Path* dir, $BasicFileAttributes* attrs) {
	$useLocalCurrentObjectStackCache();
	if (this->this$1->isValid($($nc(dir)->getFileName()))) {
		$nc(this->this$1->packages)->put($$new($RelativePath$RelativeDirectory, $($nc($($nc(this->val$root)->relativize(dir)))->toString())), dir);
		$init($FileVisitResult);
		return $FileVisitResult::CONTINUE;
	} else {
		$init($FileVisitResult);
		return $FileVisitResult::SKIP_SUBTREE;
	}
}

$FileVisitResult* JavacFileManager$ArchiveContainer$1::preVisitDirectory(Object$* dir, $BasicFileAttributes* attrs) {
	return this->preVisitDirectory($cast($Path, dir), attrs);
}

JavacFileManager$ArchiveContainer$1::JavacFileManager$ArchiveContainer$1() {
}

$Class* JavacFileManager$ArchiveContainer$1::load$($String* name, bool initialize) {
	$loadClass(JavacFileManager$ArchiveContainer$1, name, initialize, &_JavacFileManager$ArchiveContainer$1_ClassInfo_, allocate$JavacFileManager$ArchiveContainer$1);
	return class$;
}

$Class* JavacFileManager$ArchiveContainer$1::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com