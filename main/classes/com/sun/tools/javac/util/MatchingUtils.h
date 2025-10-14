#ifndef _com_sun_tools_javac_util_MatchingUtils_h_
#define _com_sun_tools_javac_util_MatchingUtils_h_
//$ class com.sun.tools.javac.util.MatchingUtils
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $export MatchingUtils : public ::java::lang::Object {
	$class(MatchingUtils, 0, ::java::lang::Object)
public:
	MatchingUtils();
	void init$();
	static bool isValidImportString($String* s);
	static ::java::util::regex::Pattern* validImportStringToPattern($String* s);
	static $String* validImportStringToPatternString($String* s);
	static $String* allMatchesString;
	static ::java::util::regex::Pattern* allMatches;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_MatchingUtils_h_