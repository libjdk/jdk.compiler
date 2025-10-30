#include <com/sun/tools/javac/file/JavacFileManager$ArchiveContainer$2.h>

#include <com/sun/tools/javac/file/BaseFileManager.h>
#include <com/sun/tools/javac/file/JavacFileManager$ArchiveContainer.h>
#include <com/sun/tools/javac/file/JavacFileManager.h>
#include <com/sun/tools/javac/file/PathFileObject.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <java/nio/file/FileVisitResult.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/SimpleFileVisitor.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <java/util/Set.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef CONTINUE
#undef SKIP_SUBTREE

using $BaseFileManager = ::com::sun::tools::javac::file::BaseFileManager;
using $JavacFileManager = ::com::sun::tools::javac::file::JavacFileManager;
using $JavacFileManager$ArchiveContainer = ::com::sun::tools::javac::file::JavacFileManager$ArchiveContainer;
using $PathFileObject = ::com::sun::tools::javac::file::PathFileObject;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileVisitResult = ::java::nio::file::FileVisitResult;
using $Path = ::java::nio::file::Path;
using $SimpleFileVisitor = ::java::nio::file::SimpleFileVisitor;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $Set = ::java::util::Set;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

$FieldInfo _JavacFileManager$ArchiveContainer$2_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/file/JavacFileManager$ArchiveContainer;", nullptr, $FINAL | $SYNTHETIC, $field(JavacFileManager$ArchiveContainer$2, this$1)},
	{"val$resultList", "Lcom/sun/tools/javac/util/ListBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(JavacFileManager$ArchiveContainer$2, val$resultList)},
	{"val$fileKinds", "Ljava/util/Set;", nullptr, $FINAL | $SYNTHETIC, $field(JavacFileManager$ArchiveContainer$2, val$fileKinds)},
	{}
};

$MethodInfo _JavacFileManager$ArchiveContainer$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/file/JavacFileManager$ArchiveContainer;Ljava/util/Set;Lcom/sun/tools/javac/util/ListBuffer;)V", nullptr, 0, $method(static_cast<void(JavacFileManager$ArchiveContainer$2::*)($JavacFileManager$ArchiveContainer*,$Set*,$ListBuffer*)>(&JavacFileManager$ArchiveContainer$2::init$))},
	{"preVisitDirectory", "(Ljava/nio/file/Path;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC},
	{"preVisitDirectory", "(Ljava/lang/Object;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"visitFile", "(Ljava/nio/file/Path;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC},
	{"visitFile", "(Ljava/lang/Object;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _JavacFileManager$ArchiveContainer$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.file.JavacFileManager$ArchiveContainer",
	"list",
	"(Ljava/nio/file/Path;Lcom/sun/tools/javac/file/RelativePath$RelativeDirectory;Ljava/util/Set;ZLcom/sun/tools/javac/util/ListBuffer;)V"
};

$InnerClassInfo _JavacFileManager$ArchiveContainer$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.JavacFileManager$ArchiveContainer", "com.sun.tools.javac.file.JavacFileManager", "ArchiveContainer", $PRIVATE | $FINAL},
	{"com.sun.tools.javac.file.JavacFileManager$ArchiveContainer$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.file.RelativePath$RelativeDirectory", "com.sun.tools.javac.file.RelativePath", "RelativeDirectory", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JavacFileManager$ArchiveContainer$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.file.JavacFileManager$ArchiveContainer$2",
	"java.nio.file.SimpleFileVisitor",
	nullptr,
	_JavacFileManager$ArchiveContainer$2_FieldInfo_,
	_JavacFileManager$ArchiveContainer$2_MethodInfo_,
	"Ljava/nio/file/SimpleFileVisitor<Ljava/nio/file/Path;>;",
	&_JavacFileManager$ArchiveContainer$2_EnclosingMethodInfo_,
	_JavacFileManager$ArchiveContainer$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.JavacFileManager"
};

$Object* allocate$JavacFileManager$ArchiveContainer$2($Class* clazz) {
	return $of($alloc(JavacFileManager$ArchiveContainer$2));
}

void JavacFileManager$ArchiveContainer$2::init$($JavacFileManager$ArchiveContainer* this$1, $Set* val$fileKinds, $ListBuffer* val$resultList) {
	$set(this, this$1, this$1);
	$set(this, val$fileKinds, val$fileKinds);
	$set(this, val$resultList, val$resultList);
	$SimpleFileVisitor::init$();
}

$FileVisitResult* JavacFileManager$ArchiveContainer$2::preVisitDirectory($Path* dir, $BasicFileAttributes* attrs) {
	if (this->this$1->isValid($($nc(dir)->getFileName()))) {
		$init($FileVisitResult);
		return $FileVisitResult::CONTINUE;
	} else {
		$init($FileVisitResult);
		return $FileVisitResult::SKIP_SUBTREE;
	}
}

$FileVisitResult* JavacFileManager$ArchiveContainer$2::visitFile($Path* file, $BasicFileAttributes* attrs) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(attrs)->isRegularFile();
	if (var$0 && $nc(this->val$fileKinds)->contains($($BaseFileManager::getKind($($nc($($nc(file)->getFileName()))->toString()))))) {
		$var($JavaFileObject, fe, $PathFileObject::forJarPath(this->this$1->this$0, file, this->this$1->archivePath));
		$nc(this->val$resultList)->append(fe);
	}
	$init($FileVisitResult);
	return $FileVisitResult::CONTINUE;
}

$FileVisitResult* JavacFileManager$ArchiveContainer$2::visitFile(Object$* file, $BasicFileAttributes* attrs) {
	return this->visitFile($cast($Path, file), attrs);
}

$FileVisitResult* JavacFileManager$ArchiveContainer$2::preVisitDirectory(Object$* dir, $BasicFileAttributes* attrs) {
	return this->preVisitDirectory($cast($Path, dir), attrs);
}

JavacFileManager$ArchiveContainer$2::JavacFileManager$ArchiveContainer$2() {
}

$Class* JavacFileManager$ArchiveContainer$2::load$($String* name, bool initialize) {
	$loadClass(JavacFileManager$ArchiveContainer$2, name, initialize, &_JavacFileManager$ArchiveContainer$2_ClassInfo_, allocate$JavacFileManager$ArchiveContainer$2);
	return class$;
}

$Class* JavacFileManager$ArchiveContainer$2::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com