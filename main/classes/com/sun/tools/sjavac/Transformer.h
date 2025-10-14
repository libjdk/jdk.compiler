#ifndef _com_sun_tools_sjavac_Transformer_h_
#define _com_sun_tools_sjavac_Transformer_h_
//$ interface com.sun.tools.sjavac.Transformer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace comp {
					class CompilationService;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace options {
					class Options;
				}
			}
		}
	}
}
namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {

class Transformer : public ::java::lang::Object {
	$interface(Transformer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void setExtra($String* e) {}
	virtual void setExtra(::com::sun::tools::sjavac::options::Options* args) {}
	virtual bool transform(::com::sun::tools::sjavac::comp::CompilationService* sjavac, ::java::util::Map* pkgSrcs, ::java::util::Set* visibleSources, ::java::util::Map* oldPackageDependencies, ::java::net::URI* destRoot, ::java::util::Map* packageArtifacts, ::java::util::Map* packageDependencies, ::java::util::Map* packageCpDependencies, ::java::util::Map* packagePublicApis, ::java::util::Map* dependencyApis, int32_t debugLevel, bool incremental, int32_t numCores) {return false;}
};

			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_Transformer_h_