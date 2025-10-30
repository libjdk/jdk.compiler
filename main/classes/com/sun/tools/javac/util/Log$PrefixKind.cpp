#include <com/sun/tools/javac/util/Log$PrefixKind.h>

#include <com/sun/tools/javac/util/Log.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef COMPILER_MISC
#undef JAVAC

using $Log$PrefixKindArray = $Array<::com::sun::tools::javac::util::Log$PrefixKind>;
using $Log = ::com::sun::tools::javac::util::Log;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _Log$PrefixKind_FieldInfo_[] = {
	{"JAVAC", "Lcom/sun/tools/javac/util/Log$PrefixKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Log$PrefixKind, JAVAC)},
	{"COMPILER_MISC", "Lcom/sun/tools/javac/util/Log$PrefixKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Log$PrefixKind, COMPILER_MISC)},
	{"$VALUES", "[Lcom/sun/tools/javac/util/Log$PrefixKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Log$PrefixKind, $VALUES)},
	{"value", "Ljava/lang/String;", nullptr, $FINAL, $field(Log$PrefixKind, value)},
	{}
};

$MethodInfo _Log$PrefixKind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/util/Log$PrefixKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Log$PrefixKindArray*(*)()>(&Log$PrefixKind::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "(Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(Log$PrefixKind::*)($String*,int32_t,$String*)>(&Log$PrefixKind::init$))},
	{"key", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(Log$PrefixKind::*)($String*)>(&Log$PrefixKind::key))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/Log$PrefixKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Log$PrefixKind*(*)($String*)>(&Log$PrefixKind::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/util/Log$PrefixKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Log$PrefixKindArray*(*)()>(&Log$PrefixKind::values))},
	{}
};

$InnerClassInfo _Log$PrefixKind_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.Log$PrefixKind", "com.sun.tools.javac.util.Log", "PrefixKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Log$PrefixKind_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.util.Log$PrefixKind",
	"java.lang.Enum",
	nullptr,
	_Log$PrefixKind_FieldInfo_,
	_Log$PrefixKind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/util/Log$PrefixKind;>;",
	nullptr,
	_Log$PrefixKind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.Log"
};

$Object* allocate$Log$PrefixKind($Class* clazz) {
	return $of($alloc(Log$PrefixKind));
}

Log$PrefixKind* Log$PrefixKind::JAVAC = nullptr;
Log$PrefixKind* Log$PrefixKind::COMPILER_MISC = nullptr;
$Log$PrefixKindArray* Log$PrefixKind::$VALUES = nullptr;

$Log$PrefixKindArray* Log$PrefixKind::$values() {
	$init(Log$PrefixKind);
	return $new($Log$PrefixKindArray, {
		Log$PrefixKind::JAVAC,
		Log$PrefixKind::COMPILER_MISC
	});
}

$Log$PrefixKindArray* Log$PrefixKind::values() {
	$init(Log$PrefixKind);
	return $cast($Log$PrefixKindArray, Log$PrefixKind::$VALUES->clone());
}

Log$PrefixKind* Log$PrefixKind::valueOf($String* name) {
	$init(Log$PrefixKind);
	return $cast(Log$PrefixKind, $Enum::valueOf(Log$PrefixKind::class$, name));
}

void Log$PrefixKind::init$($String* $enum$name, int32_t $enum$ordinal, $String* v) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, value, v);
}

$String* Log$PrefixKind::key($String* k) {
	return $str({this->value, k});
}

void clinit$Log$PrefixKind($Class* class$) {
	$assignStatic(Log$PrefixKind::JAVAC, $new(Log$PrefixKind, "JAVAC"_s, 0, "javac."_s));
	$assignStatic(Log$PrefixKind::COMPILER_MISC, $new(Log$PrefixKind, "COMPILER_MISC"_s, 1, "compiler.misc."_s));
	$assignStatic(Log$PrefixKind::$VALUES, Log$PrefixKind::$values());
}

Log$PrefixKind::Log$PrefixKind() {
}

$Class* Log$PrefixKind::load$($String* name, bool initialize) {
	$loadClass(Log$PrefixKind, name, initialize, &_Log$PrefixKind_ClassInfo_, clinit$Log$PrefixKind, allocate$Log$PrefixKind);
	return class$;
}

$Class* Log$PrefixKind::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com