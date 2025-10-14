#ifndef _com_sun_tools_javac_comp_DeferredAttr$OverloadStuckPolicy_h_
#define _com_sun_tools_javac_comp_DeferredAttr$OverloadStuckPolicy_h_
//$ class com.sun.tools.javac.comp.DeferredAttr$OverloadStuckPolicy
//$ extends com.sun.tools.javac.comp.DeferredAttr$CheckStuckPolicy

#include <com/sun/tools/javac/comp/DeferredAttr$CheckStuckPolicy.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Attr$ResultInfo;
					class DeferredAttr;
					class DeferredAttr$DeferredType;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree$JCLambda;
					class JCTree$JCMemberReference;
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

class $export DeferredAttr$OverloadStuckPolicy : public ::com::sun::tools::javac::comp::DeferredAttr$CheckStuckPolicy {
	$class(DeferredAttr$OverloadStuckPolicy, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::DeferredAttr$CheckStuckPolicy)
public:
	DeferredAttr$OverloadStuckPolicy();
	void init$(::com::sun::tools::javac::comp::DeferredAttr* this$0, ::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo, ::com::sun::tools::javac::comp::DeferredAttr$DeferredType* dt);
	virtual bool isStuck() override;
	using ::com::sun::tools::javac::comp::DeferredAttr$CheckStuckPolicy::scan;
	virtual void visitLambda(::com::sun::tools::javac::tree::JCTree$JCLambda* tree) override;
	virtual void visitReference(::com::sun::tools::javac::tree::JCTree$JCMemberReference* tree) override;
	::com::sun::tools::javac::comp::DeferredAttr* this$0 = nullptr;
	bool stuck = false;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_DeferredAttr$OverloadStuckPolicy_h_