#ifndef _com_sun_tools_javac_comp_Analyzer_h_
#define _com_sun_tools_javac_comp_Analyzer_h_
//$ class com.sun.tools.javac.comp.Analyzer
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Types;
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
					class Analyzer$AnalyzerCopier;
					class Analyzer$DeferredAnalysisHelper;
					class Analyzer$RewritingContext;
					class Analyzer$StatementAnalyzer;
					class ArgumentAttr;
					class Attr;
					class DeferredAttr;
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
					class JCTree$JCStatement;
					class TreeMaker;
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
					class Context;
					class Context$Key;
					class Log;
					class Log$DiagnosticHandler;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class StackTraceElement;
	}
}
namespace java {
	namespace util {
		class EnumSet;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $export Analyzer : public ::java::lang::Object {
	$class(Analyzer, 0, ::java::lang::Object)
public:
	Analyzer();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual void analyze(::com::sun::tools::javac::tree::JCTree$JCStatement* statement, ::com::sun::tools::javac::comp::Env* env);
	virtual void analyzeIfNeeded(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::comp::Env* env);
	virtual ::com::sun::tools::javac::comp::Env* copyEnvIfNeeded(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::comp::Env* env);
	virtual void doAnalysis(::com::sun::tools::javac::comp::Analyzer$RewritingContext* rewriting);
	virtual void flush(::com::sun::tools::javac::comp::Env* flushEnv);
	static ::com::sun::tools::javac::comp::Analyzer* instance(::com::sun::tools::javac::util::Context* context);
	static ::com::sun::tools::javac::util::Log$DiagnosticHandler* lambda$doAnalysis$0(::com::sun::tools::javac::comp::Analyzer$RewritingContext* rewriting);
	static $String* lambda$doAnalysis$1(::java::lang::StackTraceElement* se);
	static ::com::sun::tools::javac::util::Context$Key* analyzerKey;
	::com::sun::tools::javac::code::Types* types = nullptr;
	::com::sun::tools::javac::util::Log* log = nullptr;
	::com::sun::tools::javac::comp::Attr* attr = nullptr;
	::com::sun::tools::javac::comp::DeferredAttr* deferredAttr = nullptr;
	::com::sun::tools::javac::comp::ArgumentAttr* argumentAttr = nullptr;
	::com::sun::tools::javac::tree::TreeMaker* make = nullptr;
	::com::sun::tools::javac::comp::Analyzer$AnalyzerCopier* copier = nullptr;
	bool allowDiamondWithAnonymousClassCreation = false;
	::java::util::EnumSet* analyzerModes = nullptr;
	$Array<::com::sun::tools::javac::comp::Analyzer$StatementAnalyzer>* analyzers = nullptr;
	::com::sun::tools::javac::comp::Analyzer$DeferredAnalysisHelper* flushDeferredHelper = nullptr;
	::com::sun::tools::javac::comp::Analyzer$DeferredAnalysisHelper* queueDeferredHelper = nullptr;
	::com::sun::tools::javac::comp::Analyzer$DeferredAnalysisHelper* deferredAnalysisHelper = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Analyzer_h_