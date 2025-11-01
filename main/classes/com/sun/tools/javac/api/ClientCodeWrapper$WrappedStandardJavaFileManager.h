#ifndef _com_sun_tools_javac_api_ClientCodeWrapper$WrappedStandardJavaFileManager_h_
#define _com_sun_tools_javac_api_ClientCodeWrapper$WrappedStandardJavaFileManager_h_
//$ class com.sun.tools.javac.api.ClientCodeWrapper$WrappedStandardJavaFileManager
//$ extends com.sun.tools.javac.api.ClientCodeWrapper$WrappedJavaFileManager
//$ implements javax.tools.StandardJavaFileManager

#include <com/sun/tools/javac/api/ClientCodeWrapper$WrappedJavaFileManager.h>
#include <java/lang/Array.h>
#include <javax/tools/StandardJavaFileManager.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {
					class ClientCodeWrapper;
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
		class JavaFileManager$Location;
		class StandardJavaFileManager$PathFactory;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class $export ClientCodeWrapper$WrappedStandardJavaFileManager : public ::com::sun::tools::javac::api::ClientCodeWrapper$WrappedJavaFileManager, public ::javax::tools::StandardJavaFileManager {
	$class(ClientCodeWrapper$WrappedStandardJavaFileManager, $NO_CLASS_INIT, ::com::sun::tools::javac::api::ClientCodeWrapper$WrappedJavaFileManager, ::javax::tools::StandardJavaFileManager)
public:
	ClientCodeWrapper$WrappedStandardJavaFileManager();
	virtual $Object* clone() override;
	virtual void close() override;
	virtual bool contains(::javax::tools::JavaFileManager$Location* location, ::javax::tools::FileObject* file) override;
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
	void init$(::com::sun::tools::javac::api::ClientCodeWrapper* this$0, ::javax::tools::StandardJavaFileManager* clientJavaFileManager);
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
	::com::sun::tools::javac::api::ClientCodeWrapper* this$0 = nullptr;
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_api_ClientCodeWrapper$WrappedStandardJavaFileManager_h_