#ifndef _com_sun_tools_javac_main_DelegatingJavaFileManager_h_
#define _com_sun_tools_javac_main_DelegatingJavaFileManager_h_
//$ class com.sun.tools.javac.main.DelegatingJavaFileManager
//$ extends javax.tools.JavaFileManager

#include <javax/tools/JavaFileManager.h>

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
		class ClassLoader;
		class Iterable;
	}
}
namespace java {
	namespace util {
		class Iterator;
		class ServiceLoader;
		class Set;
	}
}
namespace javax {
	namespace tools {
		class FileObject;
		class JavaFileManager$Location;
		class JavaFileObject;
		class JavaFileObject$Kind;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

class $export DelegatingJavaFileManager : public ::javax::tools::JavaFileManager {
	$class(DelegatingJavaFileManager, $NO_CLASS_INIT, ::javax::tools::JavaFileManager)
public:
	DelegatingJavaFileManager();
	void init$(::javax::tools::JavaFileManager* releaseFM, ::javax::tools::JavaFileManager* baseFM);
	virtual void close() override;
	virtual bool contains(::javax::tools::JavaFileManager$Location* location, ::javax::tools::FileObject* fo) override;
	::javax::tools::JavaFileManager* delegate(::javax::tools::JavaFileManager$Location* location);
	virtual void flush() override;
	virtual ::javax::tools::JavaFileManager* getBaseFileManager();
	virtual ::java::lang::ClassLoader* getClassLoader(::javax::tools::JavaFileManager$Location* location) override;
	virtual ::javax::tools::FileObject* getFileForInput(::javax::tools::JavaFileManager$Location* location, $String* packageName, $String* relativeName) override;
	virtual ::javax::tools::FileObject* getFileForOutput(::javax::tools::JavaFileManager$Location* location, $String* packageName, $String* relativeName, ::javax::tools::FileObject* sibling) override;
	virtual ::javax::tools::JavaFileObject* getJavaFileForInput(::javax::tools::JavaFileManager$Location* location, $String* className, ::javax::tools::JavaFileObject$Kind* kind) override;
	virtual ::javax::tools::JavaFileObject* getJavaFileForOutput(::javax::tools::JavaFileManager$Location* location, $String* className, ::javax::tools::JavaFileObject$Kind* kind, ::javax::tools::FileObject* sibling) override;
	virtual ::javax::tools::JavaFileManager$Location* getLocationForModule(::javax::tools::JavaFileManager$Location* location, $String* moduleName) override;
	virtual ::javax::tools::JavaFileManager$Location* getLocationForModule(::javax::tools::JavaFileManager$Location* location, ::javax::tools::JavaFileObject* fo) override;
	virtual ::java::util::ServiceLoader* getServiceLoader(::javax::tools::JavaFileManager$Location* location, $Class* service) override;
	virtual bool handleOption($String* current, ::java::util::Iterator* remaining) override;
	virtual bool hasLocation(::javax::tools::JavaFileManager$Location* location) override;
	virtual $String* inferBinaryName(::javax::tools::JavaFileManager$Location* location, ::javax::tools::JavaFileObject* file) override;
	virtual $String* inferModuleName(::javax::tools::JavaFileManager$Location* location) override;
	static void installReleaseFileManager(::com::sun::tools::javac::util::Context* context, ::javax::tools::JavaFileManager* releaseFM, ::javax::tools::JavaFileManager* originalFM);
	virtual bool isSameFile(::javax::tools::FileObject* a, ::javax::tools::FileObject* b) override;
	virtual int32_t isSupportedOption($String* option) override;
	virtual ::java::lang::Iterable* list(::javax::tools::JavaFileManager$Location* location, $String* packageName, ::java::util::Set* kinds, bool recurse) override;
	virtual ::java::lang::Iterable* listLocationsForModules(::javax::tools::JavaFileManager$Location* location) override;
	::javax::tools::JavaFileManager* releaseFM = nullptr;
	::javax::tools::JavaFileManager* baseFM = nullptr;
};

				} // main
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_main_DelegatingJavaFileManager_h_