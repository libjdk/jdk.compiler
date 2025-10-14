#ifndef _com_sun_tools_javac_comp_Lower$1Patcher_h_
#define _com_sun_tools_javac_comp_Lower$1Patcher_h_
//$ class com.sun.tools.javac.comp.Lower$1Patcher
//$ extends com.sun.tools.javac.tree.TreeScanner

#include <com/sun/tools/javac/tree/TreeScanner.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Lower;
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
					class JCTree$JCBreak;
					class JCTree$JCClassDecl;
					class JCTree$JCContinue;
					class JCTree$JCYield;
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

class Lower$1Patcher : public ::com::sun::tools::javac::tree::TreeScanner {
	$class(Lower$1Patcher, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeScanner)
public:
	Lower$1Patcher();
	void init$(::com::sun::tools::javac::comp::Lower* this$0, ::com::sun::tools::javac::tree::JCTree* val$src, ::com::sun::tools::javac::tree::JCTree* val$dest);
	virtual void visitBreak(::com::sun::tools::javac::tree::JCTree$JCBreak* tree) override;
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree) override;
	virtual void visitContinue(::com::sun::tools::javac::tree::JCTree$JCContinue* tree) override;
	virtual void visitYield(::com::sun::tools::javac::tree::JCTree$JCYield* tree) override;
	::com::sun::tools::javac::comp::Lower* this$0 = nullptr;
	::com::sun::tools::javac::tree::JCTree* val$dest = nullptr;
	::com::sun::tools::javac::tree::JCTree* val$src = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Lower$1Patcher_h_