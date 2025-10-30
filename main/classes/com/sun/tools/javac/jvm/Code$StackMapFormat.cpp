#include <com/sun/tools/javac/jvm/Code$StackMapFormat.h>

#include <com/sun/tools/javac/jvm/Code$StackMapFormat$1.h>
#include <com/sun/tools/javac/jvm/Code$StackMapFormat$2.h>
#include <com/sun/tools/javac/jvm/Code.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef CLDC
#undef NONE

using $Code$StackMapFormatArray = $Array<::com::sun::tools::javac::jvm::Code$StackMapFormat>;
using $Code = ::com::sun::tools::javac::jvm::Code;
using $Code$StackMapFormat$1 = ::com::sun::tools::javac::jvm::Code$StackMapFormat$1;
using $Code$StackMapFormat$2 = ::com::sun::tools::javac::jvm::Code$StackMapFormat$2;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
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

$FieldInfo _Code$StackMapFormat_FieldInfo_[] = {
	{"NONE", "Lcom/sun/tools/javac/jvm/Code$StackMapFormat;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Code$StackMapFormat, NONE)},
	{"CLDC", "Lcom/sun/tools/javac/jvm/Code$StackMapFormat;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Code$StackMapFormat, CLDC)},
	{"JSR202", "Lcom/sun/tools/javac/jvm/Code$StackMapFormat;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Code$StackMapFormat, JSR202)},
	{"$VALUES", "[Lcom/sun/tools/javac/jvm/Code$StackMapFormat;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Code$StackMapFormat, $VALUES)},
	{}
};

$MethodInfo _Code$StackMapFormat_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/jvm/Code$StackMapFormat;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Code$StackMapFormatArray*(*)()>(&Code$StackMapFormat::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Code$StackMapFormat::*)($String*,int32_t)>(&Code$StackMapFormat::init$))},
	{"getAttributeName", "(Lcom/sun/tools/javac/util/Names;)Lcom/sun/tools/javac/util/Name;", nullptr, 0},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/jvm/Code$StackMapFormat;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Code$StackMapFormat*(*)($String*)>(&Code$StackMapFormat::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/jvm/Code$StackMapFormat;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Code$StackMapFormatArray*(*)()>(&Code$StackMapFormat::values))},
	{}
};

$InnerClassInfo _Code$StackMapFormat_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.Code$StackMapFormat", "com.sun.tools.javac.jvm.Code", "StackMapFormat", $PUBLIC | $STATIC | $ENUM},
	{"com.sun.tools.javac.jvm.Code$StackMapFormat$2", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.jvm.Code$StackMapFormat$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Code$StackMapFormat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.jvm.Code$StackMapFormat",
	"java.lang.Enum",
	nullptr,
	_Code$StackMapFormat_FieldInfo_,
	_Code$StackMapFormat_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/jvm/Code$StackMapFormat;>;",
	nullptr,
	_Code$StackMapFormat_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.Code"
};

$Object* allocate$Code$StackMapFormat($Class* clazz) {
	return $of($alloc(Code$StackMapFormat));
}

Code$StackMapFormat* Code$StackMapFormat::NONE = nullptr;
Code$StackMapFormat* Code$StackMapFormat::CLDC = nullptr;
Code$StackMapFormat* Code$StackMapFormat::JSR202 = nullptr;
$Code$StackMapFormatArray* Code$StackMapFormat::$VALUES = nullptr;

$Code$StackMapFormatArray* Code$StackMapFormat::$values() {
	$init(Code$StackMapFormat);
	return $new($Code$StackMapFormatArray, {
		Code$StackMapFormat::NONE,
		Code$StackMapFormat::CLDC,
		Code$StackMapFormat::JSR202
	});
}

$Code$StackMapFormatArray* Code$StackMapFormat::values() {
	$init(Code$StackMapFormat);
	return $cast($Code$StackMapFormatArray, Code$StackMapFormat::$VALUES->clone());
}

Code$StackMapFormat* Code$StackMapFormat::valueOf($String* name) {
	$init(Code$StackMapFormat);
	return $cast(Code$StackMapFormat, $Enum::valueOf(Code$StackMapFormat::class$, name));
}

void Code$StackMapFormat::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

$Name* Code$StackMapFormat::getAttributeName($Names* names) {
	return $nc(names)->empty;
}

void clinit$Code$StackMapFormat($Class* class$) {
	$assignStatic(Code$StackMapFormat::NONE, $new(Code$StackMapFormat, "NONE"_s, 0));
	$assignStatic(Code$StackMapFormat::CLDC, $new($Code$StackMapFormat$1, "CLDC"_s, 1));
	$assignStatic(Code$StackMapFormat::JSR202, $new($Code$StackMapFormat$2, "JSR202"_s, 2));
	$assignStatic(Code$StackMapFormat::$VALUES, Code$StackMapFormat::$values());
}

Code$StackMapFormat::Code$StackMapFormat() {
}

$Class* Code$StackMapFormat::load$($String* name, bool initialize) {
	$loadClass(Code$StackMapFormat, name, initialize, &_Code$StackMapFormat_ClassInfo_, clinit$Code$StackMapFormat, allocate$Code$StackMapFormat);
	return class$;
}

$Class* Code$StackMapFormat::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com