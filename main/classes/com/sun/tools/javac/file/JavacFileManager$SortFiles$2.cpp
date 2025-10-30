#include <com/sun/tools/javac/file/JavacFileManager$SortFiles$2.h>

#include <com/sun/tools/javac/file/JavacFileManager$SortFiles.h>
#include <java/nio/file/Path.h>
#include <jcpp.h>

using $JavacFileManager$SortFiles = ::com::sun::tools::javac::file::JavacFileManager$SortFiles;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

$MethodInfo _JavacFileManager$SortFiles$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(JavacFileManager$SortFiles$2::*)($String*,int32_t)>(&JavacFileManager$SortFiles$2::init$))},
	{"compare", "(Ljava/nio/file/Path;Ljava/nio/file/Path;)I", nullptr, $PUBLIC, $method(static_cast<int32_t(JavacFileManager$SortFiles$2::*)($Path*,$Path*)>(&JavacFileManager$SortFiles$2::compare))},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _JavacFileManager$SortFiles$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.file.JavacFileManager$SortFiles",
	nullptr,
	nullptr
};

$InnerClassInfo _JavacFileManager$SortFiles$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.JavacFileManager$SortFiles", "com.sun.tools.javac.file.JavacFileManager", "SortFiles", $PROTECTED | $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.tools.javac.file.JavacFileManager$SortFiles$2", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _JavacFileManager$SortFiles$2_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.file.JavacFileManager$SortFiles$2",
	"com.sun.tools.javac.file.JavacFileManager$SortFiles",
	nullptr,
	nullptr,
	_JavacFileManager$SortFiles$2_MethodInfo_,
	nullptr,
	&_JavacFileManager$SortFiles$2_EnclosingMethodInfo_,
	_JavacFileManager$SortFiles$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.JavacFileManager"
};

$Object* allocate$JavacFileManager$SortFiles$2($Class* clazz) {
	return $of($alloc(JavacFileManager$SortFiles$2));
}

void JavacFileManager$SortFiles$2::init$($String* $enum$name, int32_t $enum$ordinal) {
	$JavacFileManager$SortFiles::init$($enum$name, $enum$ordinal);
}

int32_t JavacFileManager$SortFiles$2::compare($Path* f1, $Path* f2) {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc(f2)->getFileName()))->compareTo($($nc(f1)->getFileName()));
}

int32_t JavacFileManager$SortFiles$2::compare(Object$* f1, Object$* f2) {
	return this->compare($cast($Path, f1), $cast($Path, f2));
}

JavacFileManager$SortFiles$2::JavacFileManager$SortFiles$2() {
}

$Class* JavacFileManager$SortFiles$2::load$($String* name, bool initialize) {
	$loadClass(JavacFileManager$SortFiles$2, name, initialize, &_JavacFileManager$SortFiles$2_ClassInfo_, allocate$JavacFileManager$SortFiles$2);
	return class$;
}

$Class* JavacFileManager$SortFiles$2::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com