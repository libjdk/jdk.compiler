#include <com/sun/tools/javac/util/Constants.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/util/Constants$1.h>
#include <com/sun/tools/javac/util/Convert.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Constants$1 = ::com::sun::tools::javac::util::Constants$1;
using $Convert = ::com::sun::tools::javac::util::Convert;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Enum = ::java::lang::Enum;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$MethodInfo _Constants_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Constants::*)()>(&Constants::init$))},
	{"decode", "(Ljava/lang/Object;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Object*(*)(Object$*,$Type*)>(&Constants::decode))},
	{"format", "(Ljava/lang/Object;Lcom/sun/tools/javac/code/Type;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(Object$*,$Type*)>(&Constants::format))},
	{"format", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(Object$*)>(&Constants::format))},
	{"formatByte", "(B)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(int8_t)>(&Constants::formatByte))},
	{"formatChar", "(C)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(char16_t)>(&Constants::formatChar))},
	{"formatDouble", "(D)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(double)>(&Constants::formatDouble))},
	{"formatFloat", "(F)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(float)>(&Constants::formatFloat))},
	{"formatLong", "(J)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(int64_t)>(&Constants::formatLong))},
	{"formatShort", "(S)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(int16_t)>(&Constants::formatShort))},
	{"formatString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&Constants::formatString))},
	{}
};

$InnerClassInfo _Constants_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.Constants$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _Constants_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.Constants",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Constants_MethodInfo_,
	nullptr,
	nullptr,
	_Constants_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.Constants$1"
};

$Object* allocate$Constants($Class* clazz) {
	return $of($alloc(Constants));
}

void Constants::init$() {
}

$Object* Constants::decode(Object$* value, $Type* type) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Integer, intVal, nullptr);
		bool var$0 = $instanceOf($Integer, value);
		if (var$0) {
			$assign(intVal, $cast($Integer, value));
			var$0 = true;
		}
		if (var$0) {
			int32_t i = $nc(intVal)->intValue();
			$init($Constants$1);
			switch ($nc($Constants$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc(($($nc(type)->getTag())))->ordinal())) {
			case 1:
				{
					return $of($Boolean::valueOf(i != 0));
				}
			case 2:
				{
					return $of($Character::valueOf((char16_t)i));
				}
			case 3:
				{
					return $of($Byte::valueOf((int8_t)i));
				}
			case 4:
				{
					return $of($Short::valueOf((int16_t)i));
				}
			}
		}
	}
	return $of(value);
}

$String* Constants::format(Object$* value$renamed, $Type* type) {
	$useLocalCurrentObjectStackCache();
	$var($Object, value, value$renamed);
	$assign(value, decode(value, type));
	$init($Constants$1);
	switch ($nc($Constants$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc(($($nc(type)->getTag())))->ordinal())) {
	case 3:
		{
			return formatByte($nc(($cast($Byte, value)))->byteValue());
		}
	case 5:
		{
			return formatLong($nc(($cast($Long, value)))->longValue());
		}
	case 6:
		{
			return formatFloat($nc(($cast($Float, value)))->floatValue());
		}
	case 7:
		{
			return formatDouble($nc(($cast($Double, value)))->doubleValue());
		}
	case 2:
		{
			return formatChar($nc(($cast($Character, value)))->charValue());
		}
	}
	{
		$var($String, str, nullptr);
		bool var$0 = $instanceOf($String, value);
		if (var$0) {
			$assign(str, $cast($String, value));
			var$0 = true;
		}
		if (var$0) {
			return formatString(str);
		}
	}
	return $str({value, ""_s});
}

$String* Constants::format(Object$* value) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Byte, byteVal, nullptr);
		bool var$0 = $instanceOf($Byte, value);
		if (var$0) {
			$assign(byteVal, $cast($Byte, value));
			var$0 = true;
		}
		if (var$0) {
			return formatByte($nc(byteVal)->byteValue());
		}
	}
	{
		$var($Short, shortVal, nullptr);
		bool var$1 = $instanceOf($Short, value);
		if (var$1) {
			$assign(shortVal, $cast($Short, value));
			var$1 = true;
		}
		if (var$1) {
			return formatShort($nc(shortVal)->shortValue());
		}
	}
	{
		$var($Long, longVal, nullptr);
		bool var$2 = $instanceOf($Long, value);
		if (var$2) {
			$assign(longVal, $cast($Long, value));
			var$2 = true;
		}
		if (var$2) {
			return formatLong($nc(longVal)->longValue());
		}
	}
	{
		$var($Float, floatVal, nullptr);
		bool var$3 = $instanceOf($Float, value);
		if (var$3) {
			$assign(floatVal, $cast($Float, value));
			var$3 = true;
		}
		if (var$3) {
			return formatFloat($nc(floatVal)->floatValue());
		}
	}
	{
		$var($Double, doubleVal, nullptr);
		bool var$4 = $instanceOf($Double, value);
		if (var$4) {
			$assign(doubleVal, $cast($Double, value));
			var$4 = true;
		}
		if (var$4) {
			return formatDouble($nc(doubleVal)->doubleValue());
		}
	}
	{
		$var($Character, charVal, nullptr);
		bool var$5 = $instanceOf($Character, value);
		if (var$5) {
			$assign(charVal, $cast($Character, value));
			var$5 = true;
		}
		if (var$5) {
			return formatChar($nc(charVal)->charValue());
		}
	}
	{
		$var($String, strVal, nullptr);
		bool var$6 = $instanceOf($String, value);
		if (var$6) {
			$assign(strVal, $cast($String, value));
			var$6 = true;
		}
		if (var$6) {
			return formatString(strVal);
		}
	}
	if ($instanceOf($Integer, value) || $instanceOf($Boolean, value)) {
		return $nc($of(value))->toString();
	} else {
		$throwNew($IllegalArgumentException, $$str({"Argument is not a primitive type or a string; it "_s, ((value == nullptr) ? "is a null value."_s : $$str({"has class "_s, $($nc($of(value))->getClass()->getName())})), "."_s}));
	}
}

$String* Constants::formatByte(int8_t b) {
	$useLocalCurrentObjectStackCache();
	return $String::format("(byte)0x%02x"_s, $$new($ObjectArray, {$($of($Byte::valueOf(b)))}));
}

$String* Constants::formatShort(int16_t s) {
	$useLocalCurrentObjectStackCache();
	return $String::format("(short)%d"_s, $$new($ObjectArray, {$($of($Short::valueOf(s)))}));
}

$String* Constants::formatLong(int64_t lng) {
	return $str({$$str(lng), "L"_s});
}

$String* Constants::formatFloat(float f) {
	if ($Float::isNaN(f)) {
		return "0.0f/0.0f"_s;
	} else if ($Float::isInfinite(f)) {
		return (f < 0) ? "-1.0f/0.0f"_s : "1.0f/0.0f"_s;
	} else {
		return $str({$$str(f), "f"_s});
	}
}

$String* Constants::formatDouble(double d) {
	if ($Double::isNaN(d)) {
		return "0.0/0.0"_s;
	} else if ($Double::isInfinite(d)) {
		return (d < 0) ? "-1.0/0.0"_s : "1.0/0.0"_s;
	} else {
		return $str({$$str(d), ""_s});
	}
}

$String* Constants::formatChar(char16_t c) {
	$useLocalCurrentObjectStackCache();
	return $str({$$str(u'\''), $($Convert::quote(c)), $$str(u'\'')});
}

$String* Constants::formatString($String* s) {
	$useLocalCurrentObjectStackCache();
	return $str({$$str(u'\"'), $($Convert::quote(s)), $$str(u'\"')});
}

Constants::Constants() {
}

$Class* Constants::load$($String* name, bool initialize) {
	$loadClass(Constants, name, initialize, &_Constants_ClassInfo_, allocate$Constants);
	return class$;
}

$Class* Constants::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com