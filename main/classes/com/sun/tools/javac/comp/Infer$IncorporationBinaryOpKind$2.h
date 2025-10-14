#ifndef _com_sun_tools_javac_comp_Infer$IncorporationBinaryOpKind$2_h_
#define _com_sun_tools_javac_comp_Infer$IncorporationBinaryOpKind$2_h_
//$ class com.sun.tools.javac.comp.Infer$IncorporationBinaryOpKind$2
//$ extends com.sun.tools.javac.comp.Infer$IncorporationBinaryOpKind

#include <com/sun/tools/javac/comp/Infer$IncorporationBinaryOpKind.h>

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

class Infer$IncorporationBinaryOpKind$2 : public ::com::sun::tools::javac::comp::Infer$IncorporationBinaryOpKind {
	$class(Infer$IncorporationBinaryOpKind$2, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Infer$IncorporationBinaryOpKind)
public:
	Infer$IncorporationBinaryOpKind$2();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool apply(::com::sun::tools::javac::code::Type* op1, ::com::sun::tools::javac::code::Type* op2, ::com::sun::tools::javac::util::Warner* warn, ::com::sun::tools::javac::code::Types* types) override;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Infer$IncorporationBinaryOpKind$2_h_