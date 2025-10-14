#ifndef _com_sun_tools_javac_comp_Attr$4_h_
#define _com_sun_tools_javac_comp_Attr$4_h_
//$ class com.sun.tools.javac.comp.Attr$4
//$ extends com.sun.tools.javac.tree.TreeTranslator

#include <com/sun/tools/javac/tree/TreeTranslator.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Attr;
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
					class JCTree$JCTypeApply;
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

class Attr$4 : public ::com::sun::tools::javac::tree::TreeTranslator {
	$class(Attr$4, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeTranslator)
public:
	Attr$4();
	void init$(::com::sun::tools::javac::comp::Attr* this$0);
	virtual void visitTypeApply(::com::sun::tools::javac::tree::JCTree$JCTypeApply* tree) override;
	::com::sun::tools::javac::comp::Attr* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Attr$4_h_