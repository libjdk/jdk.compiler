#ifndef _com_sun_tools_javac_comp_Analyzer$StatementAnalyzer_h_
#define _com_sun_tools_javac_comp_Analyzer$StatementAnalyzer_h_
//$ class com.sun.tools.javac.comp.Analyzer$StatementAnalyzer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Analyzer;
					class Analyzer$AnalyzerMode;
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

class $import Analyzer$StatementAnalyzer : public ::java::lang::Object {
	$class(Analyzer$StatementAnalyzer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Analyzer$StatementAnalyzer();
	void init$(::com::sun::tools::javac::comp::Analyzer* this$0, ::com::sun::tools::javac::comp::Analyzer$AnalyzerMode* mode, ::com::sun::tools::javac::tree::JCTree$Tag* tag);
	virtual bool isEnabled();
	virtual bool match(::com::sun::tools::javac::tree::JCTree* tree) {return false;}
	virtual void process(::com::sun::tools::javac::tree::JCTree* oldTree, ::com::sun::tools::javac::tree::JCTree* newTree, bool hasErrors) {}
	virtual ::com::sun::tools::javac::util::List* rewrite(::com::sun::tools::javac::tree::JCTree* oldTree) {return nullptr;}
	::com::sun::tools::javac::comp::Analyzer* this$0 = nullptr;
	::com::sun::tools::javac::comp::Analyzer$AnalyzerMode* mode = nullptr;
	::com::sun::tools::javac::tree::JCTree$Tag* tag = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Analyzer$StatementAnalyzer_h_