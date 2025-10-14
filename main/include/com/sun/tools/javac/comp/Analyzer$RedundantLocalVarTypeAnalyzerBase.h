#ifndef _com_sun_tools_javac_comp_Analyzer$RedundantLocalVarTypeAnalyzerBase_h_
#define _com_sun_tools_javac_comp_Analyzer$RedundantLocalVarTypeAnalyzerBase_h_
//$ class com.sun.tools.javac.comp.Analyzer$RedundantLocalVarTypeAnalyzerBase
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
					class JCTree$JCVariableDecl;
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

class $import Analyzer$RedundantLocalVarTypeAnalyzerBase : public ::com::sun::tools::javac::comp::Analyzer$StatementAnalyzer {
	$class(Analyzer$RedundantLocalVarTypeAnalyzerBase, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Analyzer$StatementAnalyzer)
public:
	Analyzer$RedundantLocalVarTypeAnalyzerBase();
	void init$(::com::sun::tools::javac::comp::Analyzer* this$0, ::com::sun::tools::javac::tree::JCTree$Tag* tag);
	virtual bool isImplicitlyTyped(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* decl);
	virtual void processVar(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* oldTree, ::com::sun::tools::javac::tree::JCTree$JCVariableDecl* newTree, bool hasErrors);
	virtual ::com::sun::tools::javac::tree::JCTree$JCVariableDecl* rewriteVarType(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* oldTree);
	::com::sun::tools::javac::comp::Analyzer* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Analyzer$RedundantLocalVarTypeAnalyzerBase_h_