#ifndef _com_sun_tools_javac_comp_Analyzer$TreeRewriter_h_
#define _com_sun_tools_javac_comp_Analyzer$TreeRewriter_h_
//$ class com.sun.tools.javac.comp.Analyzer$TreeRewriter
//$ extends com.sun.tools.javac.comp.Analyzer$AnalyzerCopier

#include <com/sun/tools/javac/comp/Analyzer$AnalyzerCopier.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class VariableTree;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Analyzer;
					class Analyzer$RewritingContext;
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
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Void;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import Analyzer$TreeRewriter : public ::com::sun::tools::javac::comp::Analyzer$AnalyzerCopier {
	$class(Analyzer$TreeRewriter, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Analyzer$AnalyzerCopier)
public:
	Analyzer$TreeRewriter();
	using ::com::sun::tools::javac::comp::Analyzer$AnalyzerCopier::copy;
	void init$(::com::sun::tools::javac::comp::Analyzer* this$0, ::com::sun::tools::javac::comp::Analyzer$RewritingContext* rewriting, ::com::sun::tools::javac::tree::JCTree* wrappedTree);
	virtual ::com::sun::tools::javac::tree::JCTree* copy(::com::sun::tools::javac::tree::JCTree* tree, ::java::lang::Void* _unused);
	virtual ::com::sun::tools::javac::tree::JCTree* copy(::com::sun::tools::javac::tree::JCTree* tree, Object$* _unused) override;
	virtual ::com::sun::tools::javac::tree::JCTree* visitVariable(::com::sun::source::tree::VariableTree* node, ::java::lang::Void* p);
	virtual $Object* visitVariable(::com::sun::source::tree::VariableTree* node, Object$* p) override;
	::com::sun::tools::javac::comp::Analyzer* this$0 = nullptr;
	::com::sun::tools::javac::comp::Analyzer$RewritingContext* rewriting = nullptr;
	::com::sun::tools::javac::tree::JCTree* wrappedTree = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Analyzer$TreeRewriter_h_