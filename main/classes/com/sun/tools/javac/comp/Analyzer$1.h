#ifndef _com_sun_tools_javac_comp_Analyzer$1_h_
#define _com_sun_tools_javac_comp_Analyzer$1_h_
//$ class com.sun.tools.javac.comp.Analyzer$1
//$ extends com.sun.tools.javac.comp.Analyzer$DeferredAnalysisHelper

#include <com/sun/tools/javac/comp/Analyzer$DeferredAnalysisHelper.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Analyzer;
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

class Analyzer$1 : public ::com::sun::tools::javac::comp::Analyzer$DeferredAnalysisHelper {
	$class(Analyzer$1, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Analyzer$DeferredAnalysisHelper)
public:
	Analyzer$1();
	void init$(::com::sun::tools::javac::comp::Analyzer* this$0);
	virtual void flush(::com::sun::tools::javac::comp::Env* flushEnv) override;
	virtual void queue(::com::sun::tools::javac::comp::Analyzer$RewritingContext* rewriting) override;
	::com::sun::tools::javac::comp::Analyzer* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Analyzer$1_h_