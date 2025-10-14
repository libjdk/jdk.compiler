#ifndef _com_sun_tools_javac_comp_Flow$BaseAnalyzer$JumpKind$2_h_
#define _com_sun_tools_javac_comp_Flow$BaseAnalyzer$JumpKind$2_h_
//$ class com.sun.tools.javac.comp.Flow$BaseAnalyzer$JumpKind$2
//$ extends com.sun.tools.javac.comp.Flow$BaseAnalyzer$JumpKind

#include <com/sun/tools/javac/comp/Flow$BaseAnalyzer$JumpKind.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree;
					class JCTree$Tag;
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

class Flow$BaseAnalyzer$JumpKind$2 : public ::com::sun::tools::javac::comp::Flow$BaseAnalyzer$JumpKind {
	$class(Flow$BaseAnalyzer$JumpKind$2, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Flow$BaseAnalyzer$JumpKind)
public:
	Flow$BaseAnalyzer$JumpKind$2();
	void init$($String* $enum$name, int32_t $enum$ordinal, ::com::sun::tools::javac::tree::JCTree$Tag* treeTag);
	virtual ::com::sun::tools::javac::tree::JCTree* getTarget(::com::sun::tools::javac::tree::JCTree* tree) override;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Flow$BaseAnalyzer$JumpKind$2_h_