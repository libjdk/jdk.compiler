#ifndef _com_sun_tools_javac_comp_Analyzer$DiamondInitializer_h_
#define _com_sun_tools_javac_comp_Analyzer$DiamondInitializer_h_
//$ class com.sun.tools.javac.comp.Analyzer$DiamondInitializer
//$ extends com.sun.tools.javac.comp.Analyzer$StatementAnalyzer

#include <com/sun/tools/javac/comp/Analyzer$StatementAnalyzer.h>

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
					class JCTree$JCNewClass;
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

class $export Analyzer$DiamondInitializer : public ::com::sun::tools::javac::comp::Analyzer$StatementAnalyzer {
	$class(Analyzer$DiamondInitializer, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Analyzer$StatementAnalyzer)
public:
	Analyzer$DiamondInitializer();
	void init$(::com::sun::tools::javac::comp::Analyzer* this$0);
	virtual bool match(::com::sun::tools::javac::tree::JCTree$JCNewClass* tree);
	virtual bool match(::com::sun::tools::javac::tree::JCTree* tree) override;
	virtual void process(::com::sun::tools::javac::tree::JCTree$JCNewClass* oldTree, ::com::sun::tools::javac::tree::JCTree$JCNewClass* newTree, bool hasErrors);
	virtual void process(::com::sun::tools::javac::tree::JCTree* oldTree, ::com::sun::tools::javac::tree::JCTree* newTree, bool hasErrors) override;
	virtual ::com::sun::tools::javac::util::List* rewrite(::com::sun::tools::javac::tree::JCTree$JCNewClass* oldTree);
	virtual ::com::sun::tools::javac::util::List* rewrite(::com::sun::tools::javac::tree::JCTree* oldTree) override;
	::com::sun::tools::javac::comp::Analyzer* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Analyzer$DiamondInitializer_h_