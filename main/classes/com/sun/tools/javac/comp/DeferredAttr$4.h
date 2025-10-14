#ifndef _com_sun_tools_javac_comp_DeferredAttr$4_h_
#define _com_sun_tools_javac_comp_DeferredAttr$4_h_
//$ class com.sun.tools.javac.comp.DeferredAttr$4
//$ extends com.sun.tools.javac.comp.DeferredAttr$DeferredStuckPolicy

#include <com/sun/tools/javac/comp/DeferredAttr$DeferredStuckPolicy.h>

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
	namespace util {
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class DeferredAttr$4 : public ::com::sun::tools::javac::comp::DeferredAttr$DeferredStuckPolicy {
	$class(DeferredAttr$4, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::DeferredAttr$DeferredStuckPolicy)
public:
	DeferredAttr$4();
	void init$(::com::sun::tools::javac::comp::DeferredAttr* this$0);
	virtual ::java::util::Set* depVars() override;
	virtual bool isStuck() override;
	virtual ::java::util::Set* stuckVars() override;
	::com::sun::tools::javac::comp::DeferredAttr* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_DeferredAttr$4_h_