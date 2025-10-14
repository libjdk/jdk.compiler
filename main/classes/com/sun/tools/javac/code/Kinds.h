#ifndef _com_sun_tools_javac_code_Kinds_h_
#define _com_sun_tools_javac_code_Kinds_h_
//$ class com.sun.tools.javac.code.Kinds
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class MemberReferenceTree$ReferenceMode;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Kinds$KindName;
					class Symbol;
					class Type;
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

class $export Kinds : public ::java::lang::Object {
	$class(Kinds, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Kinds();
	void init$();
	static ::com::sun::tools::javac::code::Kinds$KindName* kindName(::com::sun::source::tree::MemberReferenceTree$ReferenceMode* mode);
	static ::com::sun::tools::javac::code::Kinds$KindName* kindName(::com::sun::tools::javac::code::Symbol* sym);
	static ::com::sun::tools::javac::code::Kinds$KindName* typeKindName(::com::sun::tools::javac::code::Type* t);
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Kinds_h_