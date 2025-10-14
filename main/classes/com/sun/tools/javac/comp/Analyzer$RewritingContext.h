#ifndef _com_sun_tools_javac_comp_Analyzer$RewritingContext_h_
#define _com_sun_tools_javac_comp_Analyzer$RewritingContext_h_
//$ class com.sun.tools.javac.comp.Analyzer$RewritingContext
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Analyzer;
					class Analyzer$StatementAnalyzer;
					class Env;
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
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class JCDiagnostic;
					class Log$DeferredDiagnosticHandler;
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

class $export Analyzer$RewritingContext : public ::java::lang::Object {
	$class(Analyzer$RewritingContext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Analyzer$RewritingContext();
	void init$(::com::sun::tools::javac::comp::Analyzer* this$0, ::com::sun::tools::javac::tree::JCTree* originalTree, ::com::sun::tools::javac::tree::JCTree* oldTree, ::com::sun::tools::javac::tree::JCTree* replacement, ::com::sun::tools::javac::comp::Analyzer$StatementAnalyzer* analyzer, ::com::sun::tools::javac::comp::Env* env);
	virtual ::com::sun::tools::javac::util::Log$DeferredDiagnosticHandler* diagHandler();
	bool lambda$diagHandler$0(::com::sun::tools::javac::util::JCDiagnostic* d);
	::com::sun::tools::javac::comp::Analyzer* this$0 = nullptr;
	::com::sun::tools::javac::tree::JCTree* originalTree = nullptr;
	::com::sun::tools::javac::tree::JCTree* oldTree = nullptr;
	::com::sun::tools::javac::tree::JCTree* replacement = nullptr;
	bool erroneous = false;
	::com::sun::tools::javac::comp::Env* env = nullptr;
	::com::sun::tools::javac::comp::Analyzer$StatementAnalyzer* analyzer = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Analyzer$RewritingContext_h_