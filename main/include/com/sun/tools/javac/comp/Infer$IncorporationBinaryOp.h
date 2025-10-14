#ifndef _com_sun_tools_javac_comp_Infer$IncorporationBinaryOp_h_
#define _com_sun_tools_javac_comp_Infer$IncorporationBinaryOp_h_
//$ class com.sun.tools.javac.comp.Infer$IncorporationBinaryOp
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
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
				namespace comp {
					class Infer;
					class Infer$IncorporationBinaryOpKind;
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

class $import Infer$IncorporationBinaryOp : public ::java::lang::Object {
	$class(Infer$IncorporationBinaryOp, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Infer$IncorporationBinaryOp();
	void init$(::com::sun::tools::javac::comp::Infer* this$0, ::com::sun::tools::javac::comp::Infer$IncorporationBinaryOpKind* opKind, ::com::sun::tools::javac::code::Type* op1, ::com::sun::tools::javac::code::Type* op2);
	virtual bool apply(::com::sun::tools::javac::util::Warner* warn);
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	::com::sun::tools::javac::comp::Infer* this$0 = nullptr;
	::com::sun::tools::javac::comp::Infer$IncorporationBinaryOpKind* opKind = nullptr;
	::com::sun::tools::javac::code::Type* op1 = nullptr;
	::com::sun::tools::javac::code::Type* op2 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Infer$IncorporationBinaryOp_h_