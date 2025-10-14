#ifndef _com_sun_tools_sjavac_comp_CompilationService_h_
#define _com_sun_tools_sjavac_comp_CompilationService_h_
//$ class com.sun.tools.sjavac.comp.CompilationService
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {
					class CompilationSubResult;
					class SysInfo;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace comp {

class CompilationService : public ::java::lang::Object {
	$class(CompilationService, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CompilationService();
	void init$();
	virtual ::com::sun::tools::sjavac::server::CompilationSubResult* compile($String* protocolId, $String* invocationId, $StringArray* args, ::java::util::List* explicitSources, ::java::util::Set* sourcesToCompile, ::java::util::Set* visibleSources);
	virtual ::com::sun::tools::sjavac::server::SysInfo* getSysInfo();
	void logJavacInvocation($StringArray* args);
};

				} // comp
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_comp_CompilationService_h_