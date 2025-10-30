#include <com/sun/tools/javac/util/MatchingUtils.h>

#include <java/lang/CharSequence.h>
#include <java/util/regex/Pattern.h>
#include <javax/lang/model/SourceVersion.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Pattern = ::java::util::regex::Pattern;
using $SourceVersion = ::javax::lang::model::SourceVersion;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _MatchingUtils_FieldInfo_[] = {
	{"allMatchesString", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MatchingUtils, allMatchesString)},
	{"allMatches", "Ljava/util/regex/Pattern;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MatchingUtils, allMatches)},
	{}
};

$MethodInfo _MatchingUtils_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MatchingUtils::*)()>(&MatchingUtils::init$))},
	{"isValidImportString", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*)>(&MatchingUtils::isValidImportString))},
	{"validImportStringToPattern", "(Ljava/lang/String;)Ljava/util/regex/Pattern;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Pattern*(*)($String*)>(&MatchingUtils::validImportStringToPattern))},
	{"validImportStringToPatternString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&MatchingUtils::validImportStringToPatternString))},
	{}
};

$ClassInfo _MatchingUtils_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.MatchingUtils",
	"java.lang.Object",
	nullptr,
	_MatchingUtils_FieldInfo_,
	_MatchingUtils_MethodInfo_
};

$Object* allocate$MatchingUtils($Class* clazz) {
	return $of($alloc(MatchingUtils));
}

$String* MatchingUtils::allMatchesString = nullptr;
$Pattern* MatchingUtils::allMatches = nullptr;

void MatchingUtils::init$() {
}

bool MatchingUtils::isValidImportString($String* s) {
	$init(MatchingUtils);
	$useLocalCurrentObjectStackCache();
	if ($nc(s)->equals("*"_s)) {
		return true;
	}
	bool valid = true;
	$var($String, t, s);
	int32_t index = $nc(t)->indexOf((int32_t)u'*');
	if (index != -1) {
		if (index == t->length() - 1) {
			if (index - 1 >= 0) {
				valid = t->charAt(index - 1) == u'.';
				$assign(t, t->substring(0, t->length() - 2));
			}
		} else {
			return false;
		}
	}
	if (valid) {
		$var($StringArray, javaIds, t->split("\\."_s, t->length() + 2));
		{
			$var($StringArray, arr$, javaIds);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, javaId, arr$->get(i$));
				valid &= $SourceVersion::isIdentifier(javaId);
			}
		}
	}
	return valid;
}

$String* MatchingUtils::validImportStringToPatternString($String* s) {
	$init(MatchingUtils);
	$useLocalCurrentObjectStackCache();
	if ($nc(s)->equals("*"_s)) {
		return MatchingUtils::allMatchesString;
	} else {
		$var($String, s_prime, s->replace(static_cast<$CharSequence*>("."_s), static_cast<$CharSequence*>("\\."_s)));
		if (s_prime->endsWith("*"_s)) {
			$assign(s_prime, $str({$(s_prime->substring(0, s_prime->length() - 1)), ".+"_s}));
		}
		return s_prime;
	}
}

$Pattern* MatchingUtils::validImportStringToPattern($String* s) {
	$init(MatchingUtils);
	$var($String, pattern, validImportStringToPatternString(s));
	if (pattern == MatchingUtils::allMatchesString) {
		return MatchingUtils::allMatches;
	} else {
		return $Pattern::compile(pattern);
	}
}

void clinit$MatchingUtils($Class* class$) {
	$assignStatic(MatchingUtils::allMatchesString, ".*"_s);
	$assignStatic(MatchingUtils::allMatches, $Pattern::compile(MatchingUtils::allMatchesString));
}

MatchingUtils::MatchingUtils() {
}

$Class* MatchingUtils::load$($String* name, bool initialize) {
	$loadClass(MatchingUtils, name, initialize, &_MatchingUtils_ClassInfo_, clinit$MatchingUtils, allocate$MatchingUtils);
	return class$;
}

$Class* MatchingUtils::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com