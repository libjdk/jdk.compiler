#ifndef _com_sun_tools_javac_comp_Analyzer$RedundantLocalVarTypeAnalyzerForEach_h_
#define _com_sun_tools_javac_comp_Analyzer$RedundantLocalVarTypeAnalyzerForEach_h_
//$ class com.sun.tools.javac.comp.Analyzer$RedundantLocalVarTypeAnalyzerForEach
//$ extends com.sun.tools.javac.comp.Analyzer$RedundantLocalVarTypeAnalyzerBase

#include <com/sun/tools/javac/comp/Analyzer$RedundantLocalVarTypeAnalyzerBase.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Analyzer;
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
					class JCTree$JCEnhancedForLoop;
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

class $export Analyzer$RedundantLocalVarTypeAnalyzerForEach : public ::com::sun::tools::javac::comp::Analyzer$RedundantLocalVarTypeAnalyzerBase {
	$class(Analyzer$RedundantLocalVarTypeAnalyzerForEach, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Analyzer$RedundantLocalVarTypeAnalyzerBase)
public:
	Analyzer$RedundantLocalVarTypeAnalyzerForEach();
	void init$(::com::sun::tools::javac::comp::Analyzer* this$0);
	virtual bool match(::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop* tree);
	virtual bool match(::com::sun::tools::javac::tree::JCTree* tree) override;
	virtual void process(::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop* oldTree, ::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop* newTree, bool hasErrors);
	virtual void process(::com::sun::tools::javac::tree::JCTree* oldTree, ::com::sun::tools::javac::tree::JCTree* newTree, bool hasErrors) override;
	virtual ::com::sun::tools::javac::util::List* rewrite(::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop* oldTree);
	virtual ::com::sun::tools::javac::util::List* rewrite(::com::sun::tools::javac::tree::JCTree* oldTree) override;
	::com::sun::tools::javac::comp::Analyzer* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Analyzer$RedundantLocalVarTypeAnalyzerForEach_h_