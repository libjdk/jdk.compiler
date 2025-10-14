#ifndef _com_sun_tools_javac_platform_JDKPlatformProvider_h_
#define _com_sun_tools_javac_platform_JDKPlatformProvider_h_
//$ class com.sun.tools.javac.platform.JDKPlatformProvider
//$ extends com.sun.tools.javac.platform.PlatformProvider

#include <com/sun/tools/javac/platform/PlatformProvider.h>
#include <java/lang/Array.h>

#pragma push_macro("NUMERICAL_COMPARATOR")
#undef NUMERICAL_COMPARATOR
#pragma push_macro("SUPPORTED_JAVA_PLATFORM_VERSIONS")
#undef SUPPORTED_JAVA_PLATFORM_VERSIONS

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {
					class Target;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace platform {
					class PlatformDescription;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Iterable;
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
		class Comparator;
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace platform {

class $export JDKPlatformProvider : public ::com::sun::tools::javac::platform::PlatformProvider {
	$class(JDKPlatformProvider, 0, ::com::sun::tools::javac::platform::PlatformProvider)
public:
	JDKPlatformProvider();
	void init$();
	static ::java::nio::file::Path* findCtSym();
	virtual ::com::sun::tools::javac::platform::PlatformDescription* getPlatform($String* platformName, $String* options) override;
	virtual ::java::lang::Iterable* getSupportedPlatformNames() override;
	static int32_t lambda$static$0($String* s1, $String* s2);
	static $String* targetNumericVersion(::com::sun::tools::javac::jvm::Target* target);
	static $StringArray* symbolFileLocation;
	static ::java::util::Set* SUPPORTED_JAVA_PLATFORM_VERSIONS;
	static ::java::util::Comparator* NUMERICAL_COMPARATOR;
};

				} // platform
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("NUMERICAL_COMPARATOR")
#pragma pop_macro("SUPPORTED_JAVA_PLATFORM_VERSIONS")

#endif // _com_sun_tools_javac_platform_JDKPlatformProvider_h_