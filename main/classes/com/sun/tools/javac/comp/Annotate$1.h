#ifndef _com_sun_tools_javac_comp_Annotate$1_h_
#define _com_sun_tools_javac_comp_Annotate$1_h_
//$ class com.sun.tools.javac.comp.Annotate$1
//$ extends com.sun.tools.javac.comp.MemberEnter$InitTreeVisitor

#include <com/sun/tools/javac/comp/MemberEnter$InitTreeVisitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Annotate;
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
					class JCTree$JCArrayTypeTree;
					class JCTree$JCPrimitiveTypeTree;
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

class Annotate$1 : public ::com::sun::tools::javac::comp::MemberEnter$InitTreeVisitor {
	$class(Annotate$1, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::MemberEnter$InitTreeVisitor)
public:
	Annotate$1();
	void init$(::com::sun::tools::javac::comp::Annotate* this$0);
	virtual void visitTypeArray(::com::sun::tools::javac::tree::JCTree$JCArrayTypeTree* that) override;
	virtual void visitTypeIdent(::com::sun::tools::javac::tree::JCTree$JCPrimitiveTypeTree* that) override;
	::com::sun::tools::javac::comp::Annotate* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Annotate$1_h_