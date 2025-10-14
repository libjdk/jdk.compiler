#ifndef _com_sun_tools_sjavac_Util_h_
#define _com_sun_tools_sjavac_Util_h_
//$ class com.sun.tools.sjavac.Util
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class Map;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Function;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {

class Util : public ::java::lang::Object {
	$class(Util, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Util();
	void init$();
	static $String* cleanSubOptions(::java::util::Set* allowedSubOptions, $String* s);
	static bool extractBooleanOption($String* opName, $String* s, bool deflt);
	static int32_t extractIntOption($String* opName, $String* s);
	static int32_t extractIntOption($String* opName, $String* s, int32_t deflt);
	static $String* extractStringOption($String* opName, $String* s);
	static $String* extractStringOption($String* opName, $String* s, $String* deflt);
	static $String* extractStringOptionLine($String* opName, $String* s, $String* deflt);
	static $String* extractStringOptionWithDelimiter($String* opName, $String* s, $String* deflt, char16_t delimiter);
	static $String* fileSuffix(::java::nio::file::Path* file);
	static $String* findServerSettings($StringArray* args);
	static ::java::util::stream::Stream* getLines($String* str);
	static $String* getStackTrace($Throwable* t);
	static ::java::util::Map* indexBy(::java::util::Collection* c, ::java::util::function::Function* indexFunction);
	static ::java::util::Set* intersection(::java::util::Collection* c1, ::java::util::Collection* c2);
	static $String* justPackageName($String* pkgName);
	static $Object* lambda$indexBy$0(Object$* o);
	static $String* normalizeDriveLetter($String* file);
	static ::java::io::File* pathToFile(::java::nio::file::Path* path);
	static $String* pkgNameOfClassName($String* fqClassName);
	static ::java::util::Set* set($StringArray* ss);
	static ::java::util::Set* subtract(::java::util::Set* orig, ::java::util::Set* toSubtract);
	static $String* toFileSystemPath($String* pkgId);
	static ::java::util::Set* union$(::java::util::Set* s1, ::java::util::Set* s2);
};

			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_Util_h_