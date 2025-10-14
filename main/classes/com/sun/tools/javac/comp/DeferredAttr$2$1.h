#ifndef _com_sun_tools_javac_comp_DeferredAttr$2$1_h_
#define _com_sun_tools_javac_comp_DeferredAttr$2$1_h_
//$ class com.sun.tools.javac.comp.DeferredAttr$2$1
//$ extends com.sun.tools.javac.tree.JCTree$JCMemberReference

#include <com/sun/tools/javac/tree/JCTree$JCMemberReference.h>

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
				namespace comp {
					class DeferredAttr$2;
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
					class JCTree$JCExpression;
					class JCTree$JCMemberReference$OverloadKind;
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
					class Name;
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

class DeferredAttr$2$1 : public ::com::sun::tools::javac::tree::JCTree$JCMemberReference {
	$class(DeferredAttr$2$1, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCMemberReference)
public:
	DeferredAttr$2$1();
	void init$(::com::sun::tools::javac::comp::DeferredAttr$2* this$1, ::com::sun::source::tree::MemberReferenceTree$ReferenceMode* mode, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::tree::JCTree$JCExpression* expr, ::com::sun::tools::javac::util::List* typeargs, ::com::sun::tools::javac::tree::JCTree$JCMemberReference* val$t);
	virtual ::com::sun::tools::javac::tree::JCTree$JCMemberReference$OverloadKind* getOverloadKind() override;
	virtual void setOverloadKind(::com::sun::tools::javac::tree::JCTree$JCMemberReference$OverloadKind* overloadKind) override;
	::com::sun::tools::javac::comp::DeferredAttr$2* this$1 = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCMemberReference* val$t = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_DeferredAttr$2$1_h_