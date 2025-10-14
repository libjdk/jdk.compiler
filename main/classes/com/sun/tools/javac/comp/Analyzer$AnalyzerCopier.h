#ifndef _com_sun_tools_javac_comp_Analyzer$AnalyzerCopier_h_
#define _com_sun_tools_javac_comp_Analyzer$AnalyzerCopier_h_
//$ class com.sun.tools.javac.comp.Analyzer$AnalyzerCopier
//$ extends com.sun.tools.javac.tree.TreeCopier

#include <com/sun/tools/javac/tree/TreeCopier.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class LambdaExpressionTree;
				class NewClassTree;
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

class $export Analyzer$AnalyzerCopier : public ::com::sun::tools::javac::tree::TreeCopier {
	$class(Analyzer$AnalyzerCopier, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeCopier)
public:
	Analyzer$AnalyzerCopier();
	void init$(::com::sun::tools::javac::comp::Analyzer* this$0);
	static void lambda$visitLambdaExpression$0(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* p);
	virtual ::com::sun::tools::javac::tree::JCTree* visitLambdaExpression(::com::sun::source::tree::LambdaExpressionTree* node, ::java::lang::Void* _unused);
	virtual $Object* visitLambdaExpression(::com::sun::source::tree::LambdaExpressionTree* node, Object$* _unused) override;
	virtual ::com::sun::tools::javac::tree::JCTree* visitNewClass(::com::sun::source::tree::NewClassTree* node, ::java::lang::Void* aVoid);
	virtual $Object* visitNewClass(::com::sun::source::tree::NewClassTree* node, Object$* aVoid) override;
	::com::sun::tools::javac::comp::Analyzer* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Analyzer$AnalyzerCopier_h_