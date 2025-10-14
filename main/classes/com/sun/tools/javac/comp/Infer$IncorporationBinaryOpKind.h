#ifndef _com_sun_tools_javac_comp_Infer$IncorporationBinaryOpKind_h_
#define _com_sun_tools_javac_comp_Infer$IncorporationBinaryOpKind_h_
//$ class com.sun.tools.javac.comp.Infer$IncorporationBinaryOpKind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("IS_SAME_TYPE")
#undef IS_SAME_TYPE
#pragma push_macro("IS_SUBTYPE")
#undef IS_SUBTYPE

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class Types;
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
					class Warner;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $export Infer$IncorporationBinaryOpKind : public ::java::lang::Enum {
	$class(Infer$IncorporationBinaryOpKind, 0, ::java::lang::Enum)
public:
	Infer$IncorporationBinaryOpKind();
	static $Array<::com::sun::tools::javac::comp::Infer$IncorporationBinaryOpKind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool apply(::com::sun::tools::javac::code::Type* op1, ::com::sun::tools::javac::code::Type* op2, ::com::sun::tools::javac::util::Warner* warn, ::com::sun::tools::javac::code::Types* types) {return false;}
	static ::com::sun::tools::javac::comp::Infer$IncorporationBinaryOpKind* valueOf($String* name);
	static $Array<::com::sun::tools::javac::comp::Infer$IncorporationBinaryOpKind>* values();
	static ::com::sun::tools::javac::comp::Infer$IncorporationBinaryOpKind* IS_SUBTYPE;
	static ::com::sun::tools::javac::comp::Infer$IncorporationBinaryOpKind* IS_SAME_TYPE;
	static $Array<::com::sun::tools::javac::comp::Infer$IncorporationBinaryOpKind>* $VALUES;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("IS_SAME_TYPE")
#pragma pop_macro("IS_SUBTYPE")

#endif // _com_sun_tools_javac_comp_Infer$IncorporationBinaryOpKind_h_