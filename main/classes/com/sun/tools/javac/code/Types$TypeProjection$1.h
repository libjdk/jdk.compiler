#ifndef _com_sun_tools_javac_code_Types$TypeProjection$1_h_
#define _com_sun_tools_javac_code_Types$TypeProjection$1_h_
//$ class com.sun.tools.javac.code.Types$TypeProjection$1
//$ extends com.sun.tools.javac.code.Type$ClassType

#include <com/sun/tools/javac/code/Type$ClassType.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$TypeSymbol;
					class Type;
					class TypeMetadata;
					class Types$TypeProjection;
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
					class List;
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

class Types$TypeProjection$1 : public ::com::sun::tools::javac::code::Type$ClassType {
	$class(Types$TypeProjection$1, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$ClassType)
public:
	Types$TypeProjection$1();
	void init$(::com::sun::tools::javac::code::Types$TypeProjection* this$1, ::com::sun::tools::javac::code::Type* outer, ::com::sun::tools::javac::util::List* typarams, ::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym, ::com::sun::tools::javac::code::TypeMetadata* metadata);
	virtual bool needsStripping() override;
	::com::sun::tools::javac::code::Types$TypeProjection* this$1 = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$TypeProjection$1_h_