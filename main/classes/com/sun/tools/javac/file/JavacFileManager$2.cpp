#include <com/sun/tools/javac/file/JavacFileManager$2.h>

#include <com/sun/tools/javac/file/JavacFileManager.h>
#include <java/io/File.h>
#include <java/lang/Iterable.h>
#include <java/nio/file/Path.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $JavacFileManager = ::com::sun::tools::javac::file::JavacFileManager;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

$FieldInfo _JavacFileManager$2_FieldInfo_[] = {
	{"val$files", "Ljava/lang/Iterable;", nullptr, $FINAL | $SYNTHETIC, $field(JavacFileManager$2, val$files)},
	{"iter", "Ljava/util/Iterator;", "Ljava/util/Iterator<+Ljava/io/File;>;", 0, $field(JavacFileManager$2, iter)},
	{}
};

$MethodInfo _JavacFileManager$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Iterable;)V", "()V", 0, $method(static_cast<void(JavacFileManager$2::*)($Iterable*)>(&JavacFileManager$2::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JavacFileManager$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.file.JavacFileManager",
	"asPaths",
	"(Ljava/lang/Iterable;)Ljava/lang/Iterable;"
};

$InnerClassInfo _JavacFileManager$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.JavacFileManager$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JavacFileManager$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.file.JavacFileManager$2",
	"java.lang.Object",
	"java.util.Iterator",
	_JavacFileManager$2_FieldInfo_,
	_JavacFileManager$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/nio/file/Path;>;",
	&_JavacFileManager$2_EnclosingMethodInfo_,
	_JavacFileManager$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.JavacFileManager"
};

$Object* allocate$JavacFileManager$2($Class* clazz) {
	return $of($alloc(JavacFileManager$2));
}

void JavacFileManager$2::init$($Iterable* val$files) {
	$set(this, val$files, val$files);
	$set(this, iter, $nc(this->val$files)->iterator());
}

bool JavacFileManager$2::hasNext() {
	return $nc(this->iter)->hasNext();
}

$Object* JavacFileManager$2::next() {
	return $of($nc(($cast($File, $($nc(this->iter)->next()))))->toPath());
}

JavacFileManager$2::JavacFileManager$2() {
}

$Class* JavacFileManager$2::load$($String* name, bool initialize) {
	$loadClass(JavacFileManager$2, name, initialize, &_JavacFileManager$2_ClassInfo_, allocate$JavacFileManager$2);
	return class$;
}

$Class* JavacFileManager$2::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com