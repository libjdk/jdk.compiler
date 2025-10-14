#ifndef _com_sun_tools_javac_comp_Analyzer$2_h_
#define _com_sun_tools_javac_comp_Analyzer$2_h_
//$ class com.sun.tools.javac.comp.Analyzer$2
//$ extends com.sun.tools.javac.comp.Analyzer$DeferredAnalysisHelper

#include <com/sun/tools/javac/comp/Analyzer$DeferredAnalysisHelper.h>

#pragma push_macro("Q")
#undef Q

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$ClassSymbol;
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
					class Analyzer;
					class Analyzer$RewritingContext;
					class Env;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
		class Queue;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Analyzer$2 : public ::com::sun::tools::javac::comp::Analyzer$DeferredAnalysisHelper {
	$class(Analyzer$2, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Analyzer$DeferredAnalysisHelper)
public:
	Analyzer$2();
	void init$(::com::sun::tools::javac::comp::Analyzer* this$0);
	virtual void flush(::com::sun::tools::javac::comp::Env* flushEnv) override;
	static ::java::util::Queue* lambda$queue$0(::com::sun::tools::javac::code::Symbol$ClassSymbol* k);
	virtual void queue(::com::sun::tools::javac::comp::Analyzer$RewritingContext* rewriting) override;
	::com::sun::tools::javac::comp::Analyzer* this$0 = nullptr;
	::java::util::Map* Q = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("Q")

#endif // _com_sun_tools_javac_comp_Analyzer$2_h_