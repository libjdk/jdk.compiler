#ifndef _com_sun_tools_javac_comp_Check$1SpecialTreeVisitor_h_
#define _com_sun_tools_javac_comp_Check$1SpecialTreeVisitor_h_
//$ class com.sun.tools.javac.comp.Check$1SpecialTreeVisitor
//$ extends com.sun.tools.javac.tree.JCTree$Visitor

#include <com/sun/tools/javac/tree/JCTree$Visitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Check;
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
					class JCTree$JCVariableDecl;
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

class Check$1SpecialTreeVisitor : public ::com::sun::tools::javac::tree::JCTree$Visitor {
	$class(Check$1SpecialTreeVisitor, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$Visitor)
public:
	Check$1SpecialTreeVisitor();
	void init$(::com::sun::tools::javac::comp::Check* this$0);
	virtual void visitTree(::com::sun::tools::javac::tree::JCTree* tree) override;
	virtual void visitVarDef(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* tree) override;
	::com::sun::tools::javac::comp::Check* this$0 = nullptr;
	bool specialized = false;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Check$1SpecialTreeVisitor_h_