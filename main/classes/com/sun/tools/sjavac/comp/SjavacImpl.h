#ifndef _com_sun_tools_sjavac_comp_SjavacImpl_h_
#define _com_sun_tools_sjavac_comp_SjavacImpl_h_
//$ class com.sun.tools.sjavac.comp.SjavacImpl
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
				class Module;
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
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace comp {

class SjavacImpl : public ::com::sun::tools::sjavac::server::Sjavac {
	$class(SjavacImpl, $NO_CLASS_INIT, ::com::sun::tools::sjavac::server::Sjavac)
public:
	SjavacImpl();
	void init$();
	virtual ::com::sun::tools::javac::main::Main$Result* compile($StringArray* args) override;
	static bool createIfMissing(::java::nio::file::Path* dir);
	static void findSourceFiles(::java::util::List* sourceLocations, ::java::util::Set* sourceTypes, ::java::util::Map* foundFiles, ::java::util::Map* foundModules, ::com::sun::tools::sjavac::Module* currentModule, bool permitSourcesInDefaultPackage, bool inLinksrc);
	static bool isOverlapping(::java::nio::file::Path* p1, ::java::nio::file::Path* p2);
	static bool lambda$compile$0($String* arg);
	static $StringArray* lambda$compile$1(int32_t x$0);
	static void printRound(int32_t round);
	virtual void shutdown() override;
	static bool srcDstOverlap(::java::util::List* locs, ::java::nio::file::Path* dest);
	static bool validateOptions(::com::sun::tools::sjavac::options::Options* options);
};

				} // comp
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_comp_SjavacImpl_h_