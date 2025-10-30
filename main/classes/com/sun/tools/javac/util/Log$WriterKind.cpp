#include <com/sun/tools/javac/util/Log$WriterKind.h>

#include <com/sun/tools/javac/util/Log.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ERROR
#undef NOTICE
#undef STDERR
#undef STDOUT
#undef WARNING

using $Log$WriterKindArray = $Array<::com::sun::tools::javac::util::Log$WriterKind>;
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

$FieldInfo _Log$WriterKind_FieldInfo_[] = {
	{"NOTICE", "Lcom/sun/tools/javac/util/Log$WriterKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Log$WriterKind, NOTICE)},
	{"WARNING", "Lcom/sun/tools/javac/util/Log$WriterKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Log$WriterKind, WARNING)},
	{"ERROR", "Lcom/sun/tools/javac/util/Log$WriterKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Log$WriterKind, ERROR)},
	{"STDOUT", "Lcom/sun/tools/javac/util/Log$WriterKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Log$WriterKind, STDOUT)},
	{"STDERR", "Lcom/sun/tools/javac/util/Log$WriterKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Log$WriterKind, STDERR)},
	{"$VALUES", "[Lcom/sun/tools/javac/util/Log$WriterKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Log$WriterKind, $VALUES)},
	{}
};

$MethodInfo _Log$WriterKind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/util/Log$WriterKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Log$WriterKindArray*(*)()>(&Log$WriterKind::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Log$WriterKind::*)($String*,int32_t)>(&Log$WriterKind::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/Log$WriterKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Log$WriterKind*(*)($String*)>(&Log$WriterKind::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/util/Log$WriterKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Log$WriterKindArray*(*)()>(&Log$WriterKind::values))},
	{}
};

$InnerClassInfo _Log$WriterKind_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.Log$WriterKind", "com.sun.tools.javac.util.Log", "WriterKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Log$WriterKind_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.util.Log$WriterKind",
	"java.lang.Enum",
	nullptr,
	_Log$WriterKind_FieldInfo_,
	_Log$WriterKind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/util/Log$WriterKind;>;",
	nullptr,
	_Log$WriterKind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.Log"
};

$Object* allocate$Log$WriterKind($Class* clazz) {
	return $of($alloc(Log$WriterKind));
}

Log$WriterKind* Log$WriterKind::NOTICE = nullptr;
Log$WriterKind* Log$WriterKind::WARNING = nullptr;
Log$WriterKind* Log$WriterKind::ERROR = nullptr;
Log$WriterKind* Log$WriterKind::STDOUT = nullptr;
Log$WriterKind* Log$WriterKind::STDERR = nullptr;
$Log$WriterKindArray* Log$WriterKind::$VALUES = nullptr;

$Log$WriterKindArray* Log$WriterKind::$values() {
	$init(Log$WriterKind);
	return $new($Log$WriterKindArray, {
		Log$WriterKind::NOTICE,
		Log$WriterKind::WARNING,
		Log$WriterKind::ERROR,
		Log$WriterKind::STDOUT,
		Log$WriterKind::STDERR
	});
}

$Log$WriterKindArray* Log$WriterKind::values() {
	$init(Log$WriterKind);
	return $cast($Log$WriterKindArray, Log$WriterKind::$VALUES->clone());
}

Log$WriterKind* Log$WriterKind::valueOf($String* name) {
	$init(Log$WriterKind);
	return $cast(Log$WriterKind, $Enum::valueOf(Log$WriterKind::class$, name));
}

void Log$WriterKind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Log$WriterKind($Class* class$) {
	$assignStatic(Log$WriterKind::NOTICE, $new(Log$WriterKind, "NOTICE"_s, 0));
	$assignStatic(Log$WriterKind::WARNING, $new(Log$WriterKind, "WARNING"_s, 1));
	$assignStatic(Log$WriterKind::ERROR, $new(Log$WriterKind, "ERROR"_s, 2));
	$assignStatic(Log$WriterKind::STDOUT, $new(Log$WriterKind, "STDOUT"_s, 3));
	$assignStatic(Log$WriterKind::STDERR, $new(Log$WriterKind, "STDERR"_s, 4));
	$assignStatic(Log$WriterKind::$VALUES, Log$WriterKind::$values());
}

Log$WriterKind::Log$WriterKind() {
}

$Class* Log$WriterKind::load$($String* name, bool initialize) {
	$loadClass(Log$WriterKind, name, initialize, &_Log$WriterKind_ClassInfo_, clinit$Log$WriterKind, allocate$Log$WriterKind);
	return class$;
}

$Class* Log$WriterKind::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com