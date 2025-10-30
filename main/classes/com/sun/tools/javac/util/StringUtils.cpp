#include <com/sun/tools/javac/util/StringUtils.h>

#include <java/lang/CharSequence.h>
#include <java/util/Locale.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

#undef CASE_INSENSITIVE
#undef US

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$MethodInfo _StringUtils_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StringUtils::*)()>(&StringUtils::init$))},
	{"indexOfIgnoreCase", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($String*,$String*)>(&StringUtils::indexOfIgnoreCase))},
	{"indexOfIgnoreCase", "(Ljava/lang/String;Ljava/lang/String;I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($String*,$String*,int32_t)>(&StringUtils::indexOfIgnoreCase))},
	{"toLowerCase", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&StringUtils::toLowerCase))},
	{"toUpperCase", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&StringUtils::toUpperCase))},
	{}
};

$ClassInfo _StringUtils_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.StringUtils",
	"java.lang.Object",
	nullptr,
	nullptr,
	_StringUtils_MethodInfo_
};

$Object* allocate$StringUtils($Class* clazz) {
	return $of($alloc(StringUtils));
}

void StringUtils::init$() {
}

$String* StringUtils::toLowerCase($String* source) {
	$init($Locale);
	return $nc(source)->toLowerCase($Locale::US);
}

$String* StringUtils::toUpperCase($String* source) {
	$init($Locale);
	return $nc(source)->toUpperCase($Locale::US);
}

int32_t StringUtils::indexOfIgnoreCase($String* text, $String* str) {
	return indexOfIgnoreCase(text, str, 0);
}

int32_t StringUtils::indexOfIgnoreCase($String* text, $String* str, int32_t startIndex) {
	$useLocalCurrentObjectStackCache();
	$var($Matcher, m, $nc($($Pattern::compile($($Pattern::quote(str)), $Pattern::CASE_INSENSITIVE)))->matcher(text));
	return $nc(m)->find(startIndex) ? $nc(m)->start() : -1;
}

StringUtils::StringUtils() {
}

$Class* StringUtils::load$($String* name, bool initialize) {
	$loadClass(StringUtils, name, initialize, &_StringUtils_ClassInfo_, allocate$StringUtils);
	return class$;
}

$Class* StringUtils::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com