#ifndef _com_sun_tools_javac_comp_Infer$1_h_
#define _com_sun_tools_javac_comp_Infer$1_h_
//$ class com.sun.tools.javac.comp.Infer$1
//$ extends com.sun.tools.javac.code.Type$StructuralTypeMapping

#include <com/sun/tools/javac/code/Type$StructuralTypeMapping.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class Type$TypeVar;
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
				namespace comp {

class Infer$1 : public ::com::sun::tools::javac::code::Type$StructuralTypeMapping {
	$class(Infer$1, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$StructuralTypeMapping)
public:
	Infer$1();
	void init$(::com::sun::tools::javac::comp::Infer* this$0);
	using ::com::sun::tools::javac::code::Type$StructuralTypeMapping::visit;
	virtual ::com::sun::tools::javac::code::Type* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* tv, ::java::lang::Void* aVoid);
	virtual $Object* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* tv, Object$* aVoid) override;
	::com::sun::tools::javac::comp::Infer* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Infer$1_h_