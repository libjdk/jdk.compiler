#ifndef _com_sun_tools_javac_file_JRTIndex$Entry_h_
#define _com_sun_tools_javac_file_JRTIndex$Entry_h_
//$ class com.sun.tools.javac.file.JRTIndex$Entry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {
					class JRTIndex;
					class JRTIndex$CtSym;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class $import JRTIndex$Entry : public ::java::lang::Object {
	$class(JRTIndex$Entry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JRTIndex$Entry();
	void init$(::com::sun::tools::javac::file::JRTIndex* this$0, ::java::util::Map* files, ::java::util::Set* subdirs, ::com::sun::tools::javac::file::JRTIndex$CtSym* ctSym);
	::com::sun::tools::javac::file::JRTIndex* this$0 = nullptr;
	::java::util::Map* files = nullptr;
	::java::util::Set* subdirs = nullptr;
	::com::sun::tools::javac::file::JRTIndex$CtSym* ctSym = nullptr;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_JRTIndex$Entry_h_