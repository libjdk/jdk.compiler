#ifndef _com_sun_tools_javac_main_DelegatingJavaFileManager$DelegatingSJFM_h_
#define _com_sun_tools_javac_main_DelegatingJavaFileManager$DelegatingSJFM_h_
//$ class com.sun.tools.javac.main.DelegatingJavaFileManager$DelegatingSJFM
//$ extends com.sun.tools.javac.main.DelegatingJavaFileManager
//$ implements javax.tools.StandardJavaFileManager

#include <com/sun/tools/javac/main/DelegatingJavaFileManager.h>
#include <java/lang/Array.h>
#include <javax/tools/StandardJavaFileManager.h>

namespace java {
	namespace io {
		class File;
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
		class Collection;
	}
}
namespace javax {
	namespace tools {
		class FileObject;
		class JavaFileManager;
		class JavaFileManager$Location;
		class StandardJavaFileManager$PathFactory;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

class DelegatingJavaFileManager$DelegatingSJFM : public ::com::sun::tools::javac::main::DelegatingJavaFileManager, public ::javax::tools::StandardJavaFileManager {
	$class(DelegatingJavaFileManager$DelegatingSJFM, $NO_CLASS_INIT, ::com::sun::tools::javac::main::DelegatingJavaFileManager, ::javax::tools::StandardJavaFileManager)
public:
	DelegatingJavaFileManager$DelegatingSJFM();
	virtual $Object* clone() override;
	virtual void close() override;
	virtual bool contains(::javax::tools::JavaFileManager$Location* location, ::javax::tools::FileObject* fo) override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual void flush() override;
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
	virtual int32_t hashCode() override;
	virtual $String* inferBinaryName(::javax::tools::JavaFileManager$Location* location, ::javax::tools::JavaFileObject* file) override;
	virtual $String* inferModuleName(::javax::tools::JavaFileManager$Location* location) override;
	void init$(::javax::tools::JavaFileManager* releaseFM, ::javax::tools::StandardJavaFileManager* baseSJFM);
	virtual ::java::nio::file::Path* asPath(::javax::tools::FileObject* file) override;
	virtual ::java::lang::Iterable* getJavaFileObjects($Array<::java::io::File>* files) override;
	virtual ::java::lang::Iterable* getJavaFileObjects($Array<::java::nio::file::Path>* paths) override;
	virtual ::java::lang::Iterable* getJavaFileObjects($StringArray* names) override;
	virtual ::java::lang::Iterable* getJavaFileObjectsFromFiles(::java::lang::Iterable* files) override;
	virtual ::java::lang::Iterable* getJavaFileObjectsFromPaths(::java::util::Collection* paths) override;
	virtual ::java::lang::Iterable* getJavaFileObjectsFromPaths(::java::lang::Iterable* paths) override;
	virtual ::java::lang::Iterable* getJavaFileObjectsFromStrings(::java::lang::Iterable* names) override;
	virtual ::java::lang::Iterable* getLocation(::javax::tools::JavaFileManager$Location* location) override;
	virtual ::java::lang::Iterable* getLocationAsPaths(::javax::tools::JavaFileManager$Location* location) override;
	virtual bool isSameFile(::javax::tools::FileObject* a, ::javax::tools::FileObject* b) override;
	virtual int32_t isSupportedOption($String* option) override;
	virtual ::java::lang::Iterable* list(::javax::tools::JavaFileManager$Location* location, $String* packageName, ::java::util::Set* kinds, bool recurse) override;
	virtual ::java::lang::Iterable* listLocationsForModules(::javax::tools::JavaFileManager$Location* location) override;
	virtual void setLocation(::javax::tools::JavaFileManager$Location* location, ::java::lang::Iterable* files) override;
	virtual void setLocationForModule(::javax::tools::JavaFileManager$Location* location, $String* moduleName, ::java::util::Collection* paths) override;
	virtual void setLocationFromPaths(::javax::tools::JavaFileManager$Location* location, ::java::util::Collection* paths) override;
	virtual void setPathFactory(::javax::tools::StandardJavaFileManager$PathFactory* f) override;
	virtual $String* toString() override;
	::javax::tools::StandardJavaFileManager* baseSJFM = nullptr;
};

				} // main
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_main_DelegatingJavaFileManager$DelegatingSJFM_h_