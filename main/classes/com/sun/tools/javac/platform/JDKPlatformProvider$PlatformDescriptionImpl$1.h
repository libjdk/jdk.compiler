#ifndef _com_sun_tools_javac_platform_JDKPlatformProvider$PlatformDescriptionImpl$1_h_
#define _com_sun_tools_javac_platform_JDKPlatformProvider$PlatformDescriptionImpl$1_h_
//$ class com.sun.tools.javac.platform.JDKPlatformProvider$PlatformDescriptionImpl$1
//$ extends com.sun.tools.javac.file.JavacFileManager

#include <com/sun/tools/javac/file/JavacFileManager.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace platform {
					class JDKPlatformProvider$PlatformDescriptionImpl;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class Context;
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
		namespace charset {
			class Charset;
		}
	}
}
namespace java {
	namespace util {
		class Iterator;
		class Set;
	}
}
namespace javax {
	namespace tools {
		class JavaFileManager$Location;
		class JavaFileObject;
		class JavaFileObject$Kind;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace platform {

class JDKPlatformProvider$PlatformDescriptionImpl$1 : public ::com::sun::tools::javac::file::JavacFileManager {
	$class(JDKPlatformProvider$PlatformDescriptionImpl$1, $NO_CLASS_INIT, ::com::sun::tools::javac::file::JavacFileManager)
public:
	JDKPlatformProvider$PlatformDescriptionImpl$1();
	using ::com::sun::tools::javac::file::JavacFileManager::getClassLoader;
	using ::com::sun::tools::javac::file::JavacFileManager::getJavaFileObjectsFromPaths;
	using ::com::sun::tools::javac::file::JavacFileManager::handleOption;
	void init$(::com::sun::tools::javac::platform::JDKPlatformProvider$PlatformDescriptionImpl* this$0, ::com::sun::tools::javac::util::Context* context, bool register$, ::java::nio::charset::Charset* charset);
	virtual ::javax::tools::JavaFileObject* getJavaFileForInput(::javax::tools::JavaFileManager$Location* location, $String* className, ::javax::tools::JavaFileObject$Kind* kind) override;
	virtual bool hasLocation(::javax::tools::JavaFileManager$Location* location) override;
	virtual $String* inferBinaryName(::javax::tools::JavaFileManager$Location* location, ::javax::tools::JavaFileObject* file) override;
	::java::util::Iterator* lambda$list$0(::java::lang::Iterable* listed, ::java::util::Set* kinds);
	virtual ::java::lang::Iterable* list(::javax::tools::JavaFileManager$Location* location, $String* packageName, ::java::util::Set* kinds, bool recurse) override;
	::com::sun::tools::javac::platform::JDKPlatformProvider$PlatformDescriptionImpl* this$0 = nullptr;
};

				} // platform
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_platform_JDKPlatformProvider$PlatformDescriptionImpl$1_h_