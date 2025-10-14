#ifndef _com_sun_tools_javac_comp_DeferredAttr$3_h_
#define _com_sun_tools_javac_comp_DeferredAttr$3_h_
//$ class com.sun.tools.javac.comp.DeferredAttr$3
//$ extends com.sun.tools.javac.code.Types$TypeMapping

#include <com/sun/tools/javac/code/Types$TypeMapping.h>

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
					class DeferredAttr;
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

class DeferredAttr$3 : public ::com::sun::tools::javac::code::Types$TypeMapping {
	$class(DeferredAttr$3, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$TypeMapping)
public:
	DeferredAttr$3();
	void init$(::com::sun::tools::javac::comp::DeferredAttr* this$0);
	using ::com::sun::tools::javac::code::Types$TypeMapping::visit;
	virtual ::com::sun::tools::javac::code::Type* visitType(::com::sun::tools::javac::code::Type* t, ::java::lang::Void* v);
	virtual $Object* visitType(::com::sun::tools::javac::code::Type* t, Object$* v) override;
	::com::sun::tools::javac::comp::DeferredAttr* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_DeferredAttr$3_h_