#include <com/sun/tools/javac/file/JavacFileManager$SortFiles$1.h>

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

$MethodInfo _JavacFileManager$SortFiles$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(JavacFileManager$SortFiles$1::*)($String*,int32_t)>(&JavacFileManager$SortFiles$1::init$))},
	{"compare", "(Ljava/nio/file/Path;Ljava/nio/file/Path;)I", nullptr, $PUBLIC, $method(static_cast<int32_t(JavacFileManager$SortFiles$1::*)($Path*,$Path*)>(&JavacFileManager$SortFiles$1::compare))},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _JavacFileManager$SortFiles$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.file.JavacFileManager$SortFiles",
	nullptr,
	nullptr
};

$InnerClassInfo _JavacFileManager$SortFiles$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.JavacFileManager$SortFiles", "com.sun.tools.javac.file.JavacFileManager", "SortFiles", $PROTECTED | $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.tools.javac.file.JavacFileManager$SortFiles$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _JavacFileManager$SortFiles$1_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.file.JavacFileManager$SortFiles$1",
	"com.sun.tools.javac.file.JavacFileManager$SortFiles",
	nullptr,
	nullptr,
	_JavacFileManager$SortFiles$1_MethodInfo_,
	nullptr,
	&_JavacFileManager$SortFiles$1_EnclosingMethodInfo_,
	_JavacFileManager$SortFiles$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.JavacFileManager"
};

$Object* allocate$JavacFileManager$SortFiles$1($Class* clazz) {
	return $of($alloc(JavacFileManager$SortFiles$1));
}

void JavacFileManager$SortFiles$1::init$($String* $enum$name, int32_t $enum$ordinal) {
	$JavacFileManager$SortFiles::init$($enum$name, $enum$ordinal);
}

int32_t JavacFileManager$SortFiles$1::compare($Path* f1, $Path* f2) {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc(f1)->getFileName()))->compareTo($($nc(f2)->getFileName()));
}

int32_t JavacFileManager$SortFiles$1::compare(Object$* f1, Object$* f2) {
	return this->compare($cast($Path, f1), $cast($Path, f2));
}

JavacFileManager$SortFiles$1::JavacFileManager$SortFiles$1() {
}

$Class* JavacFileManager$SortFiles$1::load$($String* name, bool initialize) {
	$loadClass(JavacFileManager$SortFiles$1, name, initialize, &_JavacFileManager$SortFiles$1_ClassInfo_, allocate$JavacFileManager$SortFiles$1);
	return class$;
}

$Class* JavacFileManager$SortFiles$1::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com