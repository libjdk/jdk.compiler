#include <com/sun/tools/sjavac/Log$Level.h>

#include <com/sun/tools/sjavac/Log.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef DEBUG
#undef ERROR
#undef INFO
#undef TRACE
#undef WARN

using $Log$LevelArray = $Array<::com::sun::tools::sjavac::Log$Level>;
using $Log = ::com::sun::tools::sjavac::Log;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {

$FieldInfo _Log$Level_FieldInfo_[] = {
	{"ERROR", "Lcom/sun/tools/sjavac/Log$Level;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Log$Level, ERROR)},
	{"WARN", "Lcom/sun/tools/sjavac/Log$Level;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Log$Level, WARN)},
	{"INFO", "Lcom/sun/tools/sjavac/Log$Level;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Log$Level, INFO)},
	{"DEBUG", "Lcom/sun/tools/sjavac/Log$Level;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Log$Level, DEBUG)},
	{"TRACE", "Lcom/sun/tools/sjavac/Log$Level;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Log$Level, TRACE)},
	{"$VALUES", "[Lcom/sun/tools/sjavac/Log$Level;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Log$Level, $VALUES)},
	{}
};

$MethodInfo _Log$Level_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/sjavac/Log$Level;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Log$LevelArray*(*)()>(&Log$Level::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Log$Level::*)($String*,int32_t)>(&Log$Level::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/sjavac/Log$Level;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Log$Level*(*)($String*)>(&Log$Level::valueOf))},
	{"values", "()[Lcom/sun/tools/sjavac/Log$Level;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Log$LevelArray*(*)()>(&Log$Level::values))},
	{}
};

$InnerClassInfo _Log$Level_InnerClassesInfo_[] = {
	{"com.sun.tools.sjavac.Log$Level", "com.sun.tools.sjavac.Log", "Level", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Log$Level_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.sjavac.Log$Level",
	"java.lang.Enum",
	nullptr,
	_Log$Level_FieldInfo_,
	_Log$Level_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/sjavac/Log$Level;>;",
	nullptr,
	_Log$Level_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.sjavac.Log"
};

$Object* allocate$Log$Level($Class* clazz) {
	return $of($alloc(Log$Level));
}

Log$Level* Log$Level::ERROR = nullptr;
Log$Level* Log$Level::WARN = nullptr;
Log$Level* Log$Level::INFO = nullptr;
Log$Level* Log$Level::DEBUG = nullptr;
Log$Level* Log$Level::TRACE = nullptr;
$Log$LevelArray* Log$Level::$VALUES = nullptr;

$Log$LevelArray* Log$Level::$values() {
	$init(Log$Level);
	return $new($Log$LevelArray, {
		Log$Level::ERROR,
		Log$Level::WARN,
		Log$Level::INFO,
		Log$Level::DEBUG,
		Log$Level::TRACE
	});
}

$Log$LevelArray* Log$Level::values() {
	$init(Log$Level);
	return $cast($Log$LevelArray, Log$Level::$VALUES->clone());
}

Log$Level* Log$Level::valueOf($String* name) {
	$init(Log$Level);
	return $cast(Log$Level, $Enum::valueOf(Log$Level::class$, name));
}

void Log$Level::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Log$Level($Class* class$) {
	$assignStatic(Log$Level::ERROR, $new(Log$Level, "ERROR"_s, 0));
	$assignStatic(Log$Level::WARN, $new(Log$Level, "WARN"_s, 1));
	$assignStatic(Log$Level::INFO, $new(Log$Level, "INFO"_s, 2));
	$assignStatic(Log$Level::DEBUG, $new(Log$Level, "DEBUG"_s, 3));
	$assignStatic(Log$Level::TRACE, $new(Log$Level, "TRACE"_s, 4));
	$assignStatic(Log$Level::$VALUES, Log$Level::$values());
}

Log$Level::Log$Level() {
}

$Class* Log$Level::load$($String* name, bool initialize) {
	$loadClass(Log$Level, name, initialize, &_Log$Level_ClassInfo_, clinit$Log$Level, allocate$Log$Level);
	return class$;
}

$Class* Log$Level::class$ = nullptr;

			} // sjavac
		} // tools
	} // sun
} // com