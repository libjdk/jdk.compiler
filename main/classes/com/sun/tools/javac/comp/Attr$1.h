#ifndef _com_sun_tools_javac_comp_Attr$1_h_
#define _com_sun_tools_javac_comp_Attr$1_h_
//$ class com.sun.tools.javac.comp.Attr$1
//$ extends com.sun.tools.javac.tree.TreeScanner

#include <com/sun/tools/javac/tree/TreeScanner.h>

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
					class JCTree$JCClassDecl;
					class JCTree$JCLambda;
					class JCTree$JCSwitchExpression;
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
				namespace util {
					class ListBuffer;
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

class Attr$1 : public ::com::sun::tools::javac::tree::TreeScanner {
	$class(Attr$1, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeScanner)
public:
	Attr$1();
	void init$(::com::sun::tools::javac::comp::Attr* this$0, ::com::sun::tools::javac::tree::JCTree$JCSwitchExpression* val$tree, ::com::sun::tools::javac::util::ListBuffer* val$caseTypePositions, ::com::sun::tools::javac::util::ListBuffer* val$caseTypes);
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree) override;
	virtual void visitLambda(::com::sun::tools::javac::tree::JCTree$JCLambda* tree) override;
	virtual void visitYield(::com::sun::tools::javac::tree::JCTree$JCYield* brk) override;
	::com::sun::tools::javac::comp::Attr* this$0 = nullptr;
	::com::sun::tools::javac::util::ListBuffer* val$caseTypes = nullptr;
	::com::sun::tools::javac::util::ListBuffer* val$caseTypePositions = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCSwitchExpression* val$tree = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Attr$1_h_