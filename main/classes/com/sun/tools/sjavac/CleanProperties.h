#ifndef _com_sun_tools_sjavac_CleanProperties_h_
#define _com_sun_tools_sjavac_CleanProperties_h_
//$ class com.sun.tools.sjavac.CleanProperties
//$ extends com.sun.tools.sjavac.Transformer

#include <com/sun/tools/sjavac/Transformer.h>

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
	namespace io {
		class File;
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

class CleanProperties : public ::com::sun::tools::sjavac::Transformer {
	$class(CleanProperties, $NO_CLASS_INIT, ::com::sun::tools::sjavac::Transformer)
public:
	CleanProperties();
	void init$();
	virtual bool clean($String* pkgName, $String* pkgNameF, ::java::io::File* src, ::java::io::File* destRoot, int32_t debugLevel, ::java::util::Map* packageArtifacts);
	virtual void setExtra($String* e) override;
	virtual void setExtra(::com::sun::tools::sjavac::options::Options* a) override;
	virtual bool transform(::com::sun::tools::sjavac::comp::CompilationService* sjavac, ::java::util::Map* pkgSrcs, ::java::util::Set* visibleSrcs, ::java::util::Map* oldPackageDependencies, ::java::net::URI* destRoot, ::java::util::Map* packageArtifacts, ::java::util::Map* packageDependencies, ::java::util::Map* packageCpDependencies, ::java::util::Map* packagePublicApis, ::java::util::Map* dependencyPublicApis, int32_t debugLevel, bool incremental, int32_t numCores) override;
};

			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_CleanProperties_h_