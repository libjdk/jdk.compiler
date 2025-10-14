#ifndef _com_sun_tools_javac_code_Types$20_h_
#define _com_sun_tools_javac_code_Types$20_h_
//$ class com.sun.tools.javac.code.Types$20
//$ extends com.sun.tools.javac.code.Types$TypeMapping

#include <com/sun/tools/javac/code/Types$TypeMapping.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type$TypeVar;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Void;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Types$20 : public ::com::sun::tools::javac::code::Types$TypeMapping {
	$class(Types$20, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$TypeMapping)
public:
	Types$20();
	void init$();
	using ::com::sun::tools::javac::code::Types$TypeMapping::visit;
	virtual ::com::sun::tools::javac::code::Type$TypeVar* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, ::java::lang::Void* _unused);
	virtual $Object* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, Object$* _unused) override;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$20_h_