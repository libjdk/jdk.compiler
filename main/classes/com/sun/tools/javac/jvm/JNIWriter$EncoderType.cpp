#include <com/sun/tools/javac/jvm/JNIWriter$EncoderType.h>

#include <com/sun/tools/javac/jvm/JNIWriter.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef CLASS
#undef FIELD
#undef FIELDSTUB
#undef JNI
#undef SIGNATURE

using $JNIWriter$EncoderTypeArray = $Array<::com::sun::tools::javac::jvm::JNIWriter$EncoderType>;
using $JNIWriter = ::com::sun::tools::javac::jvm::JNIWriter;
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

$FieldInfo _JNIWriter$EncoderType_FieldInfo_[] = {
	{"CLASS", "Lcom/sun/tools/javac/jvm/JNIWriter$EncoderType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JNIWriter$EncoderType, CLASS)},
	{"FIELDSTUB", "Lcom/sun/tools/javac/jvm/JNIWriter$EncoderType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JNIWriter$EncoderType, FIELDSTUB)},
	{"FIELD", "Lcom/sun/tools/javac/jvm/JNIWriter$EncoderType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JNIWriter$EncoderType, FIELD)},
	{"JNI", "Lcom/sun/tools/javac/jvm/JNIWriter$EncoderType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JNIWriter$EncoderType, JNI)},
	{"SIGNATURE", "Lcom/sun/tools/javac/jvm/JNIWriter$EncoderType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JNIWriter$EncoderType, SIGNATURE)},
	{"$VALUES", "[Lcom/sun/tools/javac/jvm/JNIWriter$EncoderType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(JNIWriter$EncoderType, $VALUES)},
	{}
};

$MethodInfo _JNIWriter$EncoderType_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/jvm/JNIWriter$EncoderType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$JNIWriter$EncoderTypeArray*(*)()>(&JNIWriter$EncoderType::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(JNIWriter$EncoderType::*)($String*,int32_t)>(&JNIWriter$EncoderType::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/jvm/JNIWriter$EncoderType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JNIWriter$EncoderType*(*)($String*)>(&JNIWriter$EncoderType::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/jvm/JNIWriter$EncoderType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JNIWriter$EncoderTypeArray*(*)()>(&JNIWriter$EncoderType::values))},
	{}
};

$InnerClassInfo _JNIWriter$EncoderType_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.JNIWriter$EncoderType", "com.sun.tools.javac.jvm.JNIWriter", "EncoderType", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _JNIWriter$EncoderType_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.jvm.JNIWriter$EncoderType",
	"java.lang.Enum",
	nullptr,
	_JNIWriter$EncoderType_FieldInfo_,
	_JNIWriter$EncoderType_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/jvm/JNIWriter$EncoderType;>;",
	nullptr,
	_JNIWriter$EncoderType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.JNIWriter"
};

$Object* allocate$JNIWriter$EncoderType($Class* clazz) {
	return $of($alloc(JNIWriter$EncoderType));
}

JNIWriter$EncoderType* JNIWriter$EncoderType::CLASS = nullptr;
JNIWriter$EncoderType* JNIWriter$EncoderType::FIELDSTUB = nullptr;
JNIWriter$EncoderType* JNIWriter$EncoderType::FIELD = nullptr;
JNIWriter$EncoderType* JNIWriter$EncoderType::JNI = nullptr;
JNIWriter$EncoderType* JNIWriter$EncoderType::SIGNATURE = nullptr;
$JNIWriter$EncoderTypeArray* JNIWriter$EncoderType::$VALUES = nullptr;

$JNIWriter$EncoderTypeArray* JNIWriter$EncoderType::$values() {
	$init(JNIWriter$EncoderType);
	return $new($JNIWriter$EncoderTypeArray, {
		JNIWriter$EncoderType::CLASS,
		JNIWriter$EncoderType::FIELDSTUB,
		JNIWriter$EncoderType::FIELD,
		JNIWriter$EncoderType::JNI,
		JNIWriter$EncoderType::SIGNATURE
	});
}

$JNIWriter$EncoderTypeArray* JNIWriter$EncoderType::values() {
	$init(JNIWriter$EncoderType);
	return $cast($JNIWriter$EncoderTypeArray, JNIWriter$EncoderType::$VALUES->clone());
}

JNIWriter$EncoderType* JNIWriter$EncoderType::valueOf($String* name) {
	$init(JNIWriter$EncoderType);
	return $cast(JNIWriter$EncoderType, $Enum::valueOf(JNIWriter$EncoderType::class$, name));
}

void JNIWriter$EncoderType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$JNIWriter$EncoderType($Class* class$) {
	$assignStatic(JNIWriter$EncoderType::CLASS, $new(JNIWriter$EncoderType, "CLASS"_s, 0));
	$assignStatic(JNIWriter$EncoderType::FIELDSTUB, $new(JNIWriter$EncoderType, "FIELDSTUB"_s, 1));
	$assignStatic(JNIWriter$EncoderType::FIELD, $new(JNIWriter$EncoderType, "FIELD"_s, 2));
	$assignStatic(JNIWriter$EncoderType::JNI, $new(JNIWriter$EncoderType, "JNI"_s, 3));
	$assignStatic(JNIWriter$EncoderType::SIGNATURE, $new(JNIWriter$EncoderType, "SIGNATURE"_s, 4));
	$assignStatic(JNIWriter$EncoderType::$VALUES, JNIWriter$EncoderType::$values());
}

JNIWriter$EncoderType::JNIWriter$EncoderType() {
}

$Class* JNIWriter$EncoderType::load$($String* name, bool initialize) {
	$loadClass(JNIWriter$EncoderType, name, initialize, &_JNIWriter$EncoderType_ClassInfo_, clinit$JNIWriter$EncoderType, allocate$JNIWriter$EncoderType);
	return class$;
}

$Class* JNIWriter$EncoderType::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com