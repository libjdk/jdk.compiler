#ifndef _com_sun_tools_sjavac_comp_PooledSjavac_h_
#define _com_sun_tools_sjavac_comp_PooledSjavac_h_
//$ class com.sun.tools.sjavac.comp.PooledSjavac
//$ extends com.sun.tools.sjavac.server.Sjavac

#include <com/sun/tools/sjavac/server/Sjavac.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {
					class Main$Result;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				class Log;
			}
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ExecutorService;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace comp {

class PooledSjavac : public ::com::sun::tools::sjavac::server::Sjavac {
	$class(PooledSjavac, $NO_CLASS_INIT, ::com::sun::tools::sjavac::server::Sjavac)
public:
	PooledSjavac();
	void init$(::com::sun::tools::sjavac::server::Sjavac* delegate, int32_t poolsize);
	virtual ::com::sun::tools::javac::main::Main$Result* compile($StringArray* args) override;
	::com::sun::tools::javac::main::Main$Result* lambda$compile$0(::com::sun::tools::sjavac::Log* log, $StringArray* args);
	virtual void shutdown() override;
	::com::sun::tools::sjavac::server::Sjavac* delegate = nullptr;
	::java::util::concurrent::ExecutorService* pool = nullptr;
};

				} // comp
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_comp_PooledSjavac_h_