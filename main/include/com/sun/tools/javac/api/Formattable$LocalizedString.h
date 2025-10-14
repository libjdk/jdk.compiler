#ifndef _com_sun_tools_javac_api_Formattable$LocalizedString_h_
#define _com_sun_tools_javac_api_Formattable$LocalizedString_h_
//$ class com.sun.tools.javac.api.Formattable$LocalizedString
//$ extends com.sun.tools.javac.api.Formattable

#include <com/sun/tools/javac/api/Formattable.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {
					class Messages;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class $import Formattable$LocalizedString : public ::com::sun::tools::javac::api::Formattable {
	$class(Formattable$LocalizedString, $NO_CLASS_INIT, ::com::sun::tools::javac::api::Formattable)
public:
	Formattable$LocalizedString();
	void init$($String* key);
	virtual $String* getKind() override;
	virtual $String* toString(::java::util::Locale* l, ::com::sun::tools::javac::api::Messages* messages) override;
	virtual $String* toString() override;
	$String* key = nullptr;
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_api_Formattable$LocalizedString_h_