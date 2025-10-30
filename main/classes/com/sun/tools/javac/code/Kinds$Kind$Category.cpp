#include <com/sun/tools/javac/code/Kinds$Kind$Category.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Kinds.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef BASIC
#undef ERROR
#undef RESOLUTION
#undef RESOLUTION_TARGET

using $Kinds$Kind$CategoryArray = $Array<::com::sun::tools::javac::code::Kinds$Kind$Category>;
using $Kinds = ::com::sun::tools::javac::code::Kinds;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Kinds$Kind$Category_FieldInfo_[] = {
	{"BASIC", "Lcom/sun/tools/javac/code/Kinds$Kind$Category;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$Kind$Category, BASIC)},
	{"ERROR", "Lcom/sun/tools/javac/code/Kinds$Kind$Category;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$Kind$Category, ERROR)},
	{"RESOLUTION", "Lcom/sun/tools/javac/code/Kinds$Kind$Category;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$Kind$Category, RESOLUTION)},
	{"RESOLUTION_TARGET", "Lcom/sun/tools/javac/code/Kinds$Kind$Category;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Kinds$Kind$Category, RESOLUTION_TARGET)},
	{"$VALUES", "[Lcom/sun/tools/javac/code/Kinds$Kind$Category;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Kinds$Kind$Category, $VALUES)},
	{}
};

$MethodInfo _Kinds$Kind$Category_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/code/Kinds$Kind$Category;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Kinds$Kind$CategoryArray*(*)()>(&Kinds$Kind$Category::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Kinds$Kind$Category::*)($String*,int32_t)>(&Kinds$Kind$Category::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/code/Kinds$Kind$Category;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Kinds$Kind$Category*(*)($String*)>(&Kinds$Kind$Category::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/code/Kinds$Kind$Category;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Kinds$Kind$CategoryArray*(*)()>(&Kinds$Kind$Category::values))},
	{}
};

$InnerClassInfo _Kinds$Kind$Category_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Kinds$Kind", "com.sun.tools.javac.code.Kinds", "Kind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.code.Kinds$Kind$Category", "com.sun.tools.javac.code.Kinds$Kind", "Category", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Kinds$Kind$Category_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.code.Kinds$Kind$Category",
	"java.lang.Enum",
	nullptr,
	_Kinds$Kind$Category_FieldInfo_,
	_Kinds$Kind$Category_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/code/Kinds$Kind$Category;>;",
	nullptr,
	_Kinds$Kind$Category_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Kinds"
};

$Object* allocate$Kinds$Kind$Category($Class* clazz) {
	return $of($alloc(Kinds$Kind$Category));
}

Kinds$Kind$Category* Kinds$Kind$Category::BASIC = nullptr;
Kinds$Kind$Category* Kinds$Kind$Category::ERROR = nullptr;
Kinds$Kind$Category* Kinds$Kind$Category::RESOLUTION = nullptr;
Kinds$Kind$Category* Kinds$Kind$Category::RESOLUTION_TARGET = nullptr;
$Kinds$Kind$CategoryArray* Kinds$Kind$Category::$VALUES = nullptr;

$Kinds$Kind$CategoryArray* Kinds$Kind$Category::$values() {
	$init(Kinds$Kind$Category);
	return $new($Kinds$Kind$CategoryArray, {
		Kinds$Kind$Category::BASIC,
		Kinds$Kind$Category::ERROR,
		Kinds$Kind$Category::RESOLUTION,
		Kinds$Kind$Category::RESOLUTION_TARGET
	});
}

$Kinds$Kind$CategoryArray* Kinds$Kind$Category::values() {
	$init(Kinds$Kind$Category);
	return $cast($Kinds$Kind$CategoryArray, Kinds$Kind$Category::$VALUES->clone());
}

Kinds$Kind$Category* Kinds$Kind$Category::valueOf($String* name) {
	$init(Kinds$Kind$Category);
	return $cast(Kinds$Kind$Category, $Enum::valueOf(Kinds$Kind$Category::class$, name));
}

void Kinds$Kind$Category::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Kinds$Kind$Category($Class* class$) {
	$assignStatic(Kinds$Kind$Category::BASIC, $new(Kinds$Kind$Category, "BASIC"_s, 0));
	$assignStatic(Kinds$Kind$Category::ERROR, $new(Kinds$Kind$Category, "ERROR"_s, 1));
	$assignStatic(Kinds$Kind$Category::RESOLUTION, $new(Kinds$Kind$Category, "RESOLUTION"_s, 2));
	$assignStatic(Kinds$Kind$Category::RESOLUTION_TARGET, $new(Kinds$Kind$Category, "RESOLUTION_TARGET"_s, 3));
	$assignStatic(Kinds$Kind$Category::$VALUES, Kinds$Kind$Category::$values());
}

Kinds$Kind$Category::Kinds$Kind$Category() {
}

$Class* Kinds$Kind$Category::load$($String* name, bool initialize) {
	$loadClass(Kinds$Kind$Category, name, initialize, &_Kinds$Kind$Category_ClassInfo_, clinit$Kinds$Kind$Category, allocate$Kinds$Kind$Category);
	return class$;
}

$Class* Kinds$Kind$Category::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com