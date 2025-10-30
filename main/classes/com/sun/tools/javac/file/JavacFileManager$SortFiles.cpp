#include <com/sun/tools/javac/file/JavacFileManager$SortFiles.h>

#include <com/sun/tools/javac/file/JavacFileManager$SortFiles$1.h>
#include <com/sun/tools/javac/file/JavacFileManager$SortFiles$2.h>
#include <com/sun/tools/javac/file/JavacFileManager.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef FORWARD
#undef REVERSE

using $JavacFileManager$SortFilesArray = $Array<::com::sun::tools::javac::file::JavacFileManager$SortFiles>;
using $JavacFileManager = ::com::sun::tools::javac::file::JavacFileManager;
using $JavacFileManager$SortFiles$1 = ::com::sun::tools::javac::file::JavacFileManager$SortFiles$1;
using $JavacFileManager$SortFiles$2 = ::com::sun::tools::javac::file::JavacFileManager$SortFiles$2;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

$FieldInfo _JavacFileManager$SortFiles_FieldInfo_[] = {
	{"FORWARD", "Lcom/sun/tools/javac/file/JavacFileManager$SortFiles;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavacFileManager$SortFiles, FORWARD)},
	{"REVERSE", "Lcom/sun/tools/javac/file/JavacFileManager$SortFiles;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavacFileManager$SortFiles, REVERSE)},
	{"$VALUES", "[Lcom/sun/tools/javac/file/JavacFileManager$SortFiles;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(JavacFileManager$SortFiles, $VALUES)},
	{}
};

$MethodInfo _JavacFileManager$SortFiles_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/file/JavacFileManager$SortFiles;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$JavacFileManager$SortFilesArray*(*)()>(&JavacFileManager$SortFiles::$values))},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(JavacFileManager$SortFiles::*)($String*,int32_t)>(&JavacFileManager$SortFiles::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/file/JavacFileManager$SortFiles;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JavacFileManager$SortFiles*(*)($String*)>(&JavacFileManager$SortFiles::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/file/JavacFileManager$SortFiles;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavacFileManager$SortFilesArray*(*)()>(&JavacFileManager$SortFiles::values))},
	{}
};

$InnerClassInfo _JavacFileManager$SortFiles_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.JavacFileManager$SortFiles", "com.sun.tools.javac.file.JavacFileManager", "SortFiles", $PROTECTED | $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.tools.javac.file.JavacFileManager$SortFiles$2", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.file.JavacFileManager$SortFiles$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _JavacFileManager$SortFiles_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT | $ENUM,
	"com.sun.tools.javac.file.JavacFileManager$SortFiles",
	"java.lang.Enum",
	"java.util.Comparator",
	_JavacFileManager$SortFiles_FieldInfo_,
	_JavacFileManager$SortFiles_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/file/JavacFileManager$SortFiles;>;Ljava/util/Comparator<Ljava/nio/file/Path;>;",
	nullptr,
	_JavacFileManager$SortFiles_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.JavacFileManager"
};

$Object* allocate$JavacFileManager$SortFiles($Class* clazz) {
	return $of($alloc(JavacFileManager$SortFiles));
}

$String* JavacFileManager$SortFiles::toString() {
	 return this->$Enum::toString();
}

bool JavacFileManager$SortFiles::equals(Object$* arg0) {
	 return this->$Enum::equals(arg0);
}

int32_t JavacFileManager$SortFiles::hashCode() {
	 return this->$Enum::hashCode();
}

$Object* JavacFileManager$SortFiles::clone() {
	 return this->$Enum::clone();
}

void JavacFileManager$SortFiles::finalize() {
	this->$Enum::finalize();
}

JavacFileManager$SortFiles* JavacFileManager$SortFiles::FORWARD = nullptr;
JavacFileManager$SortFiles* JavacFileManager$SortFiles::REVERSE = nullptr;
$JavacFileManager$SortFilesArray* JavacFileManager$SortFiles::$VALUES = nullptr;

$JavacFileManager$SortFilesArray* JavacFileManager$SortFiles::$values() {
	$init(JavacFileManager$SortFiles);
	return $new($JavacFileManager$SortFilesArray, {
		JavacFileManager$SortFiles::FORWARD,
		JavacFileManager$SortFiles::REVERSE
	});
}

$JavacFileManager$SortFilesArray* JavacFileManager$SortFiles::values() {
	$init(JavacFileManager$SortFiles);
	return $cast($JavacFileManager$SortFilesArray, JavacFileManager$SortFiles::$VALUES->clone());
}

JavacFileManager$SortFiles* JavacFileManager$SortFiles::valueOf($String* name) {
	$init(JavacFileManager$SortFiles);
	return $cast(JavacFileManager$SortFiles, $Enum::valueOf(JavacFileManager$SortFiles::class$, name));
}

void JavacFileManager$SortFiles::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$JavacFileManager$SortFiles($Class* class$) {
	$assignStatic(JavacFileManager$SortFiles::FORWARD, $new($JavacFileManager$SortFiles$1, "FORWARD"_s, 0));
	$assignStatic(JavacFileManager$SortFiles::REVERSE, $new($JavacFileManager$SortFiles$2, "REVERSE"_s, 1));
	$assignStatic(JavacFileManager$SortFiles::$VALUES, JavacFileManager$SortFiles::$values());
}

JavacFileManager$SortFiles::JavacFileManager$SortFiles() {
}

$Class* JavacFileManager$SortFiles::load$($String* name, bool initialize) {
	$loadClass(JavacFileManager$SortFiles, name, initialize, &_JavacFileManager$SortFiles_ClassInfo_, clinit$JavacFileManager$SortFiles, allocate$JavacFileManager$SortFiles);
	return class$;
}

$Class* JavacFileManager$SortFiles::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com