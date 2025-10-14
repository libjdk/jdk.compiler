#ifndef _com_sun_tools_javac_comp_AttrRecover$1$1_h_
#define _com_sun_tools_javac_comp_AttrRecover$1$1_h_
//$ class com.sun.tools.javac.comp.AttrRecover$1$1
//$ extends com.sun.tools.javac.tree.TreeTranslator

#include <com/sun/tools/javac/tree/TreeTranslator.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class AttrRecover$1;
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
					class JCTree$JCErroneous;
					class JCTree$JCReturn;
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

class AttrRecover$1$1 : public ::com::sun::tools::javac::tree::TreeTranslator {
	$class(AttrRecover$1$1, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeTranslator)
public:
	AttrRecover$1$1();
	void init$(::com::sun::tools::javac::comp::AttrRecover$1* this$1, ::com::sun::tools::javac::tree::JCTree$JCErroneous* val$err, ::com::sun::tools::javac::tree::JCTree$JCReturn* val$tree);
	using ::com::sun::tools::javac::tree::TreeTranslator::translate;
	virtual ::com::sun::tools::javac::tree::JCTree* translate(::com::sun::tools::javac::tree::JCTree* t) override;
	::com::sun::tools::javac::comp::AttrRecover$1* this$1 = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCReturn* val$tree = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCErroneous* val$err = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_AttrRecover$1$1_h_