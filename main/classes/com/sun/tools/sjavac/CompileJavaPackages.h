#ifndef _com_sun_tools_sjavac_CompileJavaPackages_h_
#define _com_sun_tools_sjavac_CompileJavaPackages_h_
//$ class com.sun.tools.sjavac.CompileJavaPackages
//$ extends com.sun.tools.sjavac.Transformer

#include <com/sun/tools/sjavac/Transformer.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				class CompileChunk;
				class Log;
			}
		}
	}
}
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
namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {
					class CompilationSubResult;
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

class CompileJavaPackages : public ::com::sun::tools::sjavac::Transformer {
	$class(CompileJavaPackages, $NO_CLASS_INIT, ::com::sun::tools::sjavac::Transformer)
public:
	CompileJavaPackages();
	void init$();
	virtual $Array<::com::sun::tools::sjavac::CompileChunk>* createCompileChunks(::java::util::Map* pkgSrcs, ::java::util::Map* oldPackageDependents, int32_t numCompiles, int32_t sourcesPerCompile);
	::com::sun::tools::sjavac::server::CompilationSubResult* lambda$transform$0(::com::sun::tools::sjavac::Log* log, ::com::sun::tools::sjavac::comp::CompilationService* sjavac, $String* chunkId, ::com::sun::tools::sjavac::CompileChunk* cc, ::java::util::Set* visibleSources, Object$* lock);
	virtual void setExtra($String* e) override;
	virtual void setExtra(::com::sun::tools::sjavac::options::Options* a) override;
	virtual bool transform(::com::sun::tools::sjavac::comp::CompilationService* sjavac, ::java::util::Map* pkgSrcs, ::java::util::Set* visibleSources, ::java::util::Map* oldPackageDependents, ::java::net::URI* destRoot, ::java::util::Map* packageArtifacts, ::java::util::Map* packageDependencies, ::java::util::Map* packageCpDependencies, ::java::util::Map* packagePubapis, ::java::util::Map* dependencyPubapis, int32_t debugLevel, bool incremental, int32_t numCores) override;
	static const int32_t limitOnConcurrency = 3;
	::com::sun::tools::sjavac::options::Options* args = nullptr;
};

			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_CompileJavaPackages_h_