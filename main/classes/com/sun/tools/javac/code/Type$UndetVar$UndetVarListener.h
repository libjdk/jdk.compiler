#ifndef _com_sun_tools_javac_code_Type$UndetVar$UndetVarListener_h_
#define _com_sun_tools_javac_code_Type$UndetVar$UndetVarListener_h_
//$ interface com.sun.tools.javac.code.Type$UndetVar$UndetVarListener
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class Type$UndetVar;
					class Type$UndetVar$InferenceBound;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export Type$UndetVar$UndetVarListener : public ::java::lang::Object {
	$interface(Type$UndetVar$UndetVarListener, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void varBoundChanged(::com::sun::tools::javac::code::Type$UndetVar* uv, ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound* ib, ::com::sun::tools::javac::code::Type* bound, bool update) {}
	virtual void varInstantiated(::com::sun::tools::javac::code::Type$UndetVar* uv);
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Type$UndetVar$UndetVarListener_h_