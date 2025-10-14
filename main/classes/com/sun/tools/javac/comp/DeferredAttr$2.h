#ifndef _com_sun_tools_javac_comp_DeferredAttr$2_h_
#define _com_sun_tools_javac_comp_DeferredAttr$2_h_
//$ class com.sun.tools.javac.comp.DeferredAttr$2
//$ extends com.sun.tools.javac.tree.TreeCopier

#include <com/sun/tools/javac/tree/TreeCopier.h>

#pragma push_macro("M")
#undef M

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class MemberReferenceTree;
				class NewClassTree;
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
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree;
					class TreeMaker;
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

class DeferredAttr$2 : public ::com::sun::tools::javac::tree::TreeCopier {
	$class(DeferredAttr$2, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeCopier)
public:
	DeferredAttr$2();
	void init$(::com::sun::tools::javac::comp::DeferredAttr* this$0, ::com::sun::tools::javac::tree::TreeMaker* M);
	virtual ::com::sun::tools::javac::tree::JCTree* visitMemberReference(::com::sun::source::tree::MemberReferenceTree* node, ::java::lang::Void* p);
	virtual $Object* visitMemberReference(::com::sun::source::tree::MemberReferenceTree* node, Object$* p) override;
	virtual ::com::sun::tools::javac::tree::JCTree* visitNewClass(::com::sun::source::tree::NewClassTree* node, ::java::lang::Void* p);
	virtual $Object* visitNewClass(::com::sun::source::tree::NewClassTree* node, Object$* p) override;
	::com::sun::tools::javac::comp::DeferredAttr* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("M")

#endif // _com_sun_tools_javac_comp_DeferredAttr$2_h_