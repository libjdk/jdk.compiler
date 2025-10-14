#ifndef _com_sun_tools_javac_util_DefinedBy_h_
#define _com_sun_tools_javac_util_DefinedBy_h_
//$ interface com.sun.tools.javac.util.DefinedBy
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class DefinedBy$Api;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $export DefinedBy : public ::java::lang::annotation::Annotation {
	$interface(DefinedBy, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual ::com::sun::tools::javac::util::DefinedBy$Api* value() {return nullptr;}
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_DefinedBy_h_