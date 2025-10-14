#ifndef _com_sun_tools_javac_platform_JDKPlatformProvider$PlatformDescriptionImpl_h_
#define _com_sun_tools_javac_platform_JDKPlatformProvider$PlatformDescriptionImpl_h_
//$ class com.sun.tools.javac.platform.JDKPlatformProvider$PlatformDescriptionImpl
//$ extends com.sun.tools.javac.platform.PlatformDescription

#include <com/sun/tools/javac/platform/PlatformDescription.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {
					class JavacFileManager;
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
	}
}
namespace javax {
	namespace tools {
		class JavaFileManager;
		class StandardJavaFileManager;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace platform {

class $import JDKPlatformProvider$PlatformDescriptionImpl : public ::com::sun::tools::javac::platform::PlatformDescription {
	$class(JDKPlatformProvider$PlatformDescriptionImpl, $NO_CLASS_INIT, ::com::sun::tools::javac::platform::PlatformDescription)
public:
	JDKPlatformProvider$PlatformDescriptionImpl();
	void init$($String* sourceVersion);
	virtual void close() override;
	virtual ::java::util::List* getAdditionalOptions() override;
	virtual ::java::util::List* getAnnotationProcessors() override;
	virtual ::javax::tools::JavaFileManager* getFileManager() override;
	virtual ::java::util::List* getPlugins() override;
	virtual $String* getSourceVersion() override;
	virtual $String* getTargetVersion() override;
	static ::java::nio::file::Path* lambda$getFileManager$0(::java::nio::file::Path* jrtModules, $String* line);
	static bool lambda$getFileManager$1(::java::nio::file::Path* mod);
	static void lambda$getFileManager$2(::com::sun::tools::javac::file::JavacFileManager* fm, ::java::nio::file::Path* mod);
	static ::java::util::List* lambda$getFileManager$3($String* dummy);
	static void setModule(::javax::tools::StandardJavaFileManager* fm, ::java::nio::file::Path* mod);
	::java::util::Map* ctSym2FileSystem = nullptr;
	$String* sourceVersion = nullptr;
	$String* ctSymVersion = nullptr;
};

				} // platform
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_platform_JDKPlatformProvider$PlatformDescriptionImpl_h_