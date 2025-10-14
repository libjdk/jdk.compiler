#ifndef _com_sun_tools_javac_code_MissingInfoHandler_h_
#define _com_sun_tools_javac_code_MissingInfoHandler_h_
//$ class com.sun.tools.javac.code.MissingInfoHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace source {
			namespace util {
				class ParameterNameProvider;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$ParamSymbol;
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
					class Context;
					class Context$Key;
					class Name;
					class Names;
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

class $import MissingInfoHandler : public ::java::lang::Object {
	$class(MissingInfoHandler, 0, ::java::lang::Object)
public:
	MissingInfoHandler();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual ::com::sun::tools::javac::util::Name* getParameterName(::com::sun::tools::javac::code::Symbol$ParamSymbol* parameter);
	static ::com::sun::tools::javac::code::MissingInfoHandler* instance(::com::sun::tools::javac::util::Context* context);
	virtual void setDelegate(::com::sun::source::util::ParameterNameProvider* delegate);
	static ::com::sun::tools::javac::util::Context$Key* missingInfoHandlerWrapperKey;
	::com::sun::tools::javac::util::Names* names = nullptr;
	::com::sun::source::util::ParameterNameProvider* parameterNameProvider = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_MissingInfoHandler_h_