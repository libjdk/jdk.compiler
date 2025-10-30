#include <com/sun/tools/javac/file/JavacFileManager$3.h>

#include <com/sun/tools/javac/file/JavacFileManager.h>
#include <java/io/File.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Iterable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/file/Path.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $JavacFileManager = ::com::sun::tools::javac::file::JavacFileManager;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Path = ::java::nio::file::Path;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

$FieldInfo _JavacFileManager$3_FieldInfo_[] = {
	{"val$paths", "Ljava/lang/Iterable;", nullptr, $FINAL | $SYNTHETIC, $field(JavacFileManager$3, val$paths)},
	{"iter", "Ljava/util/Iterator;", "Ljava/util/Iterator<+Ljava/nio/file/Path;>;", 0, $field(JavacFileManager$3, iter)},
	{}
};

$MethodInfo _JavacFileManager$3_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Iterable;)V", "()V", 0, $method(static_cast<void(JavacFileManager$3::*)($Iterable*)>(&JavacFileManager$3::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/io/File;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JavacFileManager$3_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.file.JavacFileManager",
	"asFiles",
	"(Ljava/lang/Iterable;)Ljava/lang/Iterable;"
};

$InnerClassInfo _JavacFileManager$3_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.JavacFileManager$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JavacFileManager$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.file.JavacFileManager$3",
	"java.lang.Object",
	"java.util.Iterator",
	_JavacFileManager$3_FieldInfo_,
	_JavacFileManager$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/io/File;>;",
	&_JavacFileManager$3_EnclosingMethodInfo_,
	_JavacFileManager$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.JavacFileManager"
};

$Object* allocate$JavacFileManager$3($Class* clazz) {
	return $of($alloc(JavacFileManager$3));
}

void JavacFileManager$3::init$($Iterable* val$paths) {
	$set(this, val$paths, val$paths);
	$set(this, iter, $nc(this->val$paths)->iterator());
}

bool JavacFileManager$3::hasNext() {
	return $nc(this->iter)->hasNext();
}

$Object* JavacFileManager$3::next() {
	try {
		return $of($nc(($cast($Path, $($nc(this->iter)->next()))))->toFile());
	} catch ($UnsupportedOperationException& e) {
		$throwNew($IllegalStateException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

JavacFileManager$3::JavacFileManager$3() {
}

$Class* JavacFileManager$3::load$($String* name, bool initialize) {
	$loadClass(JavacFileManager$3, name, initialize, &_JavacFileManager$3_ClassInfo_, allocate$JavacFileManager$3);
	return class$;
}

$Class* JavacFileManager$3::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com