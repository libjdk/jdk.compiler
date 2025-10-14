#ifndef _com_sun_tools_javac_comp_Analyzer$DeferredAnalysisHelper_h_
#define _com_sun_tools_javac_comp_Analyzer$DeferredAnalysisHelper_h_
//$ interface com.sun.tools.javac.comp.Analyzer$DeferredAnalysisHelper
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Analyzer$RewritingContext;
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
				namespace comp {

class $import Analyzer$DeferredAnalysisHelper : public ::java::lang::Object {
	$interface(Analyzer$DeferredAnalysisHelper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void flush(::com::sun::tools::javac::comp::Env* flushEnv) {}
	virtual void queue(::com::sun::tools::javac::comp::Analyzer$RewritingContext* rewriting) {}
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Analyzer$DeferredAnalysisHelper_h_