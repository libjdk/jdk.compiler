#ifndef _com_sun_tools_javac_comp_Flow$SnippetBreakAnalyzer_h_
#define _com_sun_tools_javac_comp_Flow$SnippetBreakAnalyzer_h_
//$ class com.sun.tools.javac.comp.Flow$SnippetBreakAnalyzer
//$ extends com.sun.tools.javac.comp.Flow$AliveAnalyzer

#include <com/sun/tools/javac/comp/Flow$AliveAnalyzer.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Flow;
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
					class JCTree$JCBreak;
					class JCTree$JCDoWhileLoop;
					class JCTree$JCEnhancedForLoop;
					class JCTree$JCForLoop;
					class JCTree$JCLabeledStatement;
					class JCTree$JCWhileLoop;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import Flow$SnippetBreakAnalyzer : public ::com::sun::tools::javac::comp::Flow$AliveAnalyzer {
	$class(Flow$SnippetBreakAnalyzer, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Flow$AliveAnalyzer)
public:
	Flow$SnippetBreakAnalyzer();
	void init$(::com::sun::tools::javac::comp::Flow* this$0);
	virtual bool breaksOut();
	using ::com::sun::tools::javac::comp::Flow$AliveAnalyzer::scan;
	virtual void visitBreak(::com::sun::tools::javac::tree::JCTree$JCBreak* tree) override;
	virtual void visitDoLoop(::com::sun::tools::javac::tree::JCTree$JCDoWhileLoop* tree) override;
	virtual void visitForLoop(::com::sun::tools::javac::tree::JCTree$JCForLoop* tree) override;
	virtual void visitForeachLoop(::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop* tree) override;
	virtual void visitLabelled(::com::sun::tools::javac::tree::JCTree$JCLabeledStatement* tree) override;
	virtual void visitWhileLoop(::com::sun::tools::javac::tree::JCTree$JCWhileLoop* tree) override;
	::com::sun::tools::javac::comp::Flow* this$0 = nullptr;
	::java::util::Set* seenTrees = nullptr;
	bool breaksOut$ = false;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Flow$SnippetBreakAnalyzer_h_