#ifndef _com_sun_tools_sjavac_CompileProperties_h_
#define _com_sun_tools_sjavac_CompileProperties_h_
//$ class com.sun.tools.sjavac.CompileProperties
//$ extends com.sun.tools.sjavac.Transformer

#include <com/sun/tools/sjavac/Transformer.h>
#include <java/lang/Array.h>

#pragma push_macro("FORMAT")
#undef FORMAT

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

class CompileProperties : public ::com::sun::tools::sjavac::Transformer {
	$class(CompileProperties, 0, ::com::sun::tools::sjavac::Transformer)
public:
	CompileProperties();
	void init$();
	virtual bool compile($String* pkgName, $String* pkgNameF, ::java::io::File* src, ::java::io::File* destRoot, int32_t debugLevel, ::java::util::Map* packageArtifacts);
	static $String* escape($String* theString);
	virtual void setExtra($String* e) override;
	virtual void setExtra(::com::sun::tools::sjavac::options::Options* a) override;
	static char16_t toHex(int32_t nibble);
	virtual bool transform(::com::sun::tools::sjavac::comp::CompilationService* compilationService, ::java::util::Map* pkgSrcs, ::java::util::Set* visibleSrcs, ::java::util::Map* oldPackageDependents, ::java::net::URI* destRoot, ::java::util::Map* packageArtifacts, ::java::util::Map* packageDependencies, ::java::util::Map* packageCpDependencies, ::java::util::Map* packagePublicApis, ::java::util::Map* dependencyPublicApis, int32_t debugLevel, bool incremental, int32_t numCores) override;
	$String* extra = nullptr;
	static $String* FORMAT;
	static $chars* hexDigit;
};

			} // sjavac
		} // tools
	} // sun
} // com

#pragma pop_macro("FORMAT")

#endif // _com_sun_tools_sjavac_CompileProperties_h_