#include <com/sun/tools/javac/jvm/ClassFile$Version.h>

#include <com/sun/tools/javac/jvm/ClassFile.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef MAX
#undef MIN

using $ClassFile$VersionArray = $Array<::com::sun::tools::javac::jvm::ClassFile$Version>;
using $ClassFile = ::com::sun::tools::javac::jvm::ClassFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _ClassFile$Version_FieldInfo_[] = {
	{"V45_3", "Lcom/sun/tools/javac/jvm/ClassFile$Version;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ClassFile$Version, V45_3)},
	{"V49", "Lcom/sun/tools/javac/jvm/ClassFile$Version;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ClassFile$Version, V49)},
	{"V50", "Lcom/sun/tools/javac/jvm/ClassFile$Version;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ClassFile$Version, V50)},
	{"V51", "Lcom/sun/tools/javac/jvm/ClassFile$Version;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ClassFile$Version, V51)},
	{"V52", "Lcom/sun/tools/javac/jvm/ClassFile$Version;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ClassFile$Version, V52)},
	{"V53", "Lcom/sun/tools/javac/jvm/ClassFile$Version;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ClassFile$Version, V53)},
	{"V54", "Lcom/sun/tools/javac/jvm/ClassFile$Version;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ClassFile$Version, V54)},
	{"V55", "Lcom/sun/tools/javac/jvm/ClassFile$Version;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ClassFile$Version, V55)},
	{"V56", "Lcom/sun/tools/javac/jvm/ClassFile$Version;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ClassFile$Version, V56)},
	{"V57", "Lcom/sun/tools/javac/jvm/ClassFile$Version;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ClassFile$Version, V57)},
	{"V58", "Lcom/sun/tools/javac/jvm/ClassFile$Version;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ClassFile$Version, V58)},
	{"V59", "Lcom/sun/tools/javac/jvm/ClassFile$Version;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ClassFile$Version, V59)},
	{"V60", "Lcom/sun/tools/javac/jvm/ClassFile$Version;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ClassFile$Version, V60)},
	{"V61", "Lcom/sun/tools/javac/jvm/ClassFile$Version;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ClassFile$Version, V61)},
	{"$VALUES", "[Lcom/sun/tools/javac/jvm/ClassFile$Version;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ClassFile$Version, $VALUES)},
	{"major", "I", nullptr, $PUBLIC | $FINAL, $field(ClassFile$Version, major)},
	{"minor", "I", nullptr, $PUBLIC | $FINAL, $field(ClassFile$Version, minor)},
	{"MIN", "Lcom/sun/tools/javac/jvm/ClassFile$Version;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ClassFile$Version, MIN$)},
	{"MAX", "Lcom/sun/tools/javac/jvm/ClassFile$Version;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ClassFile$Version, MAX$)},
	{}
};

$MethodInfo _ClassFile$Version_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/jvm/ClassFile$Version;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ClassFile$VersionArray*(*)()>(&ClassFile$Version::$values))},
	{"<init>", "(Ljava/lang/String;III)V", "(II)V", $PRIVATE, $method(static_cast<void(ClassFile$Version::*)($String*,int32_t,int32_t,int32_t)>(&ClassFile$Version::init$))},
	{"MAX", "()Lcom/sun/tools/javac/jvm/ClassFile$Version;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ClassFile$Version*(*)()>(&ClassFile$Version::MAX))},
	{"MIN", "()Lcom/sun/tools/javac/jvm/ClassFile$Version;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ClassFile$Version*(*)()>(&ClassFile$Version::MIN))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/jvm/ClassFile$Version;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ClassFile$Version*(*)($String*)>(&ClassFile$Version::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/jvm/ClassFile$Version;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ClassFile$VersionArray*(*)()>(&ClassFile$Version::values))},
	{}
};

$InnerClassInfo _ClassFile$Version_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassFile$Version", "com.sun.tools.javac.jvm.ClassFile", "Version", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _ClassFile$Version_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.jvm.ClassFile$Version",
	"java.lang.Enum",
	nullptr,
	_ClassFile$Version_FieldInfo_,
	_ClassFile$Version_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/jvm/ClassFile$Version;>;",
	nullptr,
	_ClassFile$Version_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassFile"
};

$Object* allocate$ClassFile$Version($Class* clazz) {
	return $of($alloc(ClassFile$Version));
}

ClassFile$Version* ClassFile$Version::V45_3 = nullptr;
ClassFile$Version* ClassFile$Version::V49 = nullptr;
ClassFile$Version* ClassFile$Version::V50 = nullptr;
ClassFile$Version* ClassFile$Version::V51 = nullptr;
ClassFile$Version* ClassFile$Version::V52 = nullptr;
ClassFile$Version* ClassFile$Version::V53 = nullptr;
ClassFile$Version* ClassFile$Version::V54 = nullptr;
ClassFile$Version* ClassFile$Version::V55 = nullptr;
ClassFile$Version* ClassFile$Version::V56 = nullptr;
ClassFile$Version* ClassFile$Version::V57 = nullptr;
ClassFile$Version* ClassFile$Version::V58 = nullptr;
ClassFile$Version* ClassFile$Version::V59 = nullptr;
ClassFile$Version* ClassFile$Version::V60 = nullptr;
ClassFile$Version* ClassFile$Version::V61 = nullptr;
$ClassFile$VersionArray* ClassFile$Version::$VALUES = nullptr;
ClassFile$Version* ClassFile$Version::MIN$ = nullptr;
ClassFile$Version* ClassFile$Version::MAX$ = nullptr;

$ClassFile$VersionArray* ClassFile$Version::$values() {
	$init(ClassFile$Version);
	return $new($ClassFile$VersionArray, {
		ClassFile$Version::V45_3,
		ClassFile$Version::V49,
		ClassFile$Version::V50,
		ClassFile$Version::V51,
		ClassFile$Version::V52,
		ClassFile$Version::V53,
		ClassFile$Version::V54,
		ClassFile$Version::V55,
		ClassFile$Version::V56,
		ClassFile$Version::V57,
		ClassFile$Version::V58,
		ClassFile$Version::V59,
		ClassFile$Version::V60,
		ClassFile$Version::V61
	});
}

$ClassFile$VersionArray* ClassFile$Version::values() {
	$init(ClassFile$Version);
	return $cast($ClassFile$VersionArray, ClassFile$Version::$VALUES->clone());
}

ClassFile$Version* ClassFile$Version::valueOf($String* name) {
	$init(ClassFile$Version);
	return $cast(ClassFile$Version, $Enum::valueOf(ClassFile$Version::class$, name));
}

void ClassFile$Version::init$($String* $enum$name, int32_t $enum$ordinal, int32_t major, int32_t minor) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->major = major;
	this->minor = minor;
}

ClassFile$Version* ClassFile$Version::MIN() {
	$init(ClassFile$Version);
	return ClassFile$Version::MIN$;
}

ClassFile$Version* ClassFile$Version::MAX() {
	$init(ClassFile$Version);
	return ClassFile$Version::MAX$;
}

void clinit$ClassFile$Version($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(ClassFile$Version::V45_3, $new(ClassFile$Version, "V45_3"_s, 0, 45, 3));
	$assignStatic(ClassFile$Version::V49, $new(ClassFile$Version, "V49"_s, 1, 49, 0));
	$assignStatic(ClassFile$Version::V50, $new(ClassFile$Version, "V50"_s, 2, 50, 0));
	$assignStatic(ClassFile$Version::V51, $new(ClassFile$Version, "V51"_s, 3, 51, 0));
	$assignStatic(ClassFile$Version::V52, $new(ClassFile$Version, "V52"_s, 4, 52, 0));
	$assignStatic(ClassFile$Version::V53, $new(ClassFile$Version, "V53"_s, 5, 53, 0));
	$assignStatic(ClassFile$Version::V54, $new(ClassFile$Version, "V54"_s, 6, 54, 0));
	$assignStatic(ClassFile$Version::V55, $new(ClassFile$Version, "V55"_s, 7, 55, 0));
	$assignStatic(ClassFile$Version::V56, $new(ClassFile$Version, "V56"_s, 8, 56, 0));
	$assignStatic(ClassFile$Version::V57, $new(ClassFile$Version, "V57"_s, 9, 57, 0));
	$assignStatic(ClassFile$Version::V58, $new(ClassFile$Version, "V58"_s, 10, 58, 0));
	$assignStatic(ClassFile$Version::V59, $new(ClassFile$Version, "V59"_s, 11, 59, 0));
	$assignStatic(ClassFile$Version::V60, $new(ClassFile$Version, "V60"_s, 12, 60, 0));
	$assignStatic(ClassFile$Version::V61, $new(ClassFile$Version, "V61"_s, 13, 61, 0));
	$assignStatic(ClassFile$Version::$VALUES, ClassFile$Version::$values());
	$assignStatic(ClassFile$Version::MIN$, $nc($(ClassFile$Version::values()))->get(0));
	$assignStatic(ClassFile$Version::MAX$, $nc($(ClassFile$Version::values()))->get($nc($(ClassFile$Version::values()))->length - 1));
}

ClassFile$Version::ClassFile$Version() {
}

$Class* ClassFile$Version::load$($String* name, bool initialize) {
	$loadClass(ClassFile$Version, name, initialize, &_ClassFile$Version_ClassInfo_, clinit$ClassFile$Version, allocate$ClassFile$Version);
	return class$;
}

$Class* ClassFile$Version::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com