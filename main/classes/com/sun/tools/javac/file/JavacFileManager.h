#ifndef _com_sun_tools_javac_file_JavacFileManager_h_
#define _com_sun_tools_javac_file_JavacFileManager_h_
//$ class com.sun.tools.javac.file.JavacFileManager
//$ extends com.sun.tools.javac.file.BaseFileManager
//$ implements javax.tools.StandardJavaFileManager

#include <com/sun/tools/javac/file/BaseFileManager.h>
#include <java/lang/Array.h>
#include <javax/tools/StandardJavaFileManager.h>

#pragma push_macro("FOLLOW_LINKS_OPTIONS")
#undef FOLLOW_LINKS_OPTIONS
#pragma push_macro("MISSING_CONTAINER")
#undef MISSING_CONTAINER
#pragma push_macro("NO_FILE_VISIT_OPTIONS")
#undef NO_FILE_VISIT_OPTIONS
#pragma push_macro("SOURCE_OR_CLASS")
#undef SOURCE_OR_CLASS

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {
					class FSInfo;
					class JRTIndex;
					class JavacFileManager$Container;
					class JavacFileManager$SortFiles;
					class RelativePath;
					class RelativePath$RelativeDirectory;
					class RelativePath$RelativeFile;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {
					class Option;
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
	namespace io {
		class File;
		class IOException;
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
		class Iterable;
	}
}
namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace nio {
		class CharBuffer;
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
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class Iterator;
		class List;
		class Map;
		class ServiceLoader;
		class Set;
	}
}
namespace javax {
	namespace tools {
		class FileObject;
		class JavaFileManager;
		class JavaFileManager$Location;
		class JavaFileObject;
		class JavaFileObject$Kind;
		class StandardJavaFileManager$PathFactory;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class $export JavacFileManager : public ::com::sun::tools::javac::file::BaseFileManager, public ::javax::tools::StandardJavaFileManager {
	$class(JavacFileManager, 0, ::com::sun::tools::javac::file::BaseFileManager, ::javax::tools::StandardJavaFileManager)
public:
	JavacFileManager();
	using ::com::sun::tools::javac::file::BaseFileManager::getClassLoader;
	using ::javax::tools::StandardJavaFileManager::getJavaFileObjectsFromPaths;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual bool handleOption($String* current, ::java::util::Iterator* remaining) override;
	virtual int32_t hashCode() override;
	virtual int32_t isSupportedOption($String* option) override;
	void init$(::com::sun::tools::javac::util::Context* context, bool register$, ::java::nio::charset::Charset* charset);
	static ::java::lang::Iterable* asFiles(::java::lang::Iterable* paths);
	virtual ::java::nio::file::Path* asPath(::javax::tools::FileObject* file) override;
	static ::java::lang::Iterable* asPaths(::java::lang::Iterable* files);
	bool caseMapCheck(::java::nio::file::Path* f, ::com::sun::tools::javac::file::RelativePath* name);
	void checkModuleOrientedOrOutputLocation(::javax::tools::JavaFileManager$Location* location);
	void checkNotModuleOrientedLocation(::javax::tools::JavaFileManager$Location* location);
	void checkOutputLocation(::javax::tools::JavaFileManager$Location* location);
	void clearCachesForLocation(::javax::tools::JavaFileManager$Location* location);
	virtual void close() override;
	virtual bool contains(::javax::tools::JavaFileManager$Location* location, ::javax::tools::FileObject* fo) override;
	virtual void flush() override;
	virtual ::java::lang::ClassLoader* getClassLoader(::javax::tools::JavaFileManager$Location* location) override;
	::java::nio::file::Path* getClassOutDir();
	virtual ::com::sun::tools::javac::file::JavacFileManager$Container* getContainer(::java::nio::file::Path* path);
	virtual ::javax::tools::FileObject* getFileForInput(::javax::tools::JavaFileManager$Location* location, $String* packageName, $String* relativeName) override;
	::javax::tools::JavaFileObject* getFileForInput(::javax::tools::JavaFileManager$Location* location, ::com::sun::tools::javac::file::RelativePath$RelativeFile* name);
	virtual ::javax::tools::JavaFileObject* getFileForOutput($String* classname, ::javax::tools::JavaFileObject$Kind* kind, ::javax::tools::JavaFileObject* sibling);
	virtual ::javax::tools::FileObject* getFileForOutput(::javax::tools::JavaFileManager$Location* location, $String* packageName, $String* relativeName, ::javax::tools::FileObject* sibling) override;
	::javax::tools::JavaFileObject* getFileForOutput(::javax::tools::JavaFileManager$Location* location, ::com::sun::tools::javac::file::RelativePath$RelativeFile* fileName, ::javax::tools::FileObject* sibling);
	::com::sun::tools::javac::file::JRTIndex* getJRTIndex();
	virtual ::javax::tools::JavaFileObject* getJavaFileForInput(::javax::tools::JavaFileManager$Location* location, $String* className, ::javax::tools::JavaFileObject$Kind* kind) override;
	virtual ::javax::tools::JavaFileObject* getJavaFileForOutput(::javax::tools::JavaFileManager$Location* location, $String* className, ::javax::tools::JavaFileObject$Kind* kind, ::javax::tools::FileObject* sibling) override;
	virtual ::javax::tools::JavaFileObject* getJavaFileObject($String* name);
	virtual ::javax::tools::JavaFileObject* getJavaFileObject(::java::nio::file::Path* file);
	virtual ::java::lang::Iterable* getJavaFileObjects($StringArray* names) override;
	virtual ::java::lang::Iterable* getJavaFileObjects($Array<::java::io::File>* files) override;
	virtual ::java::lang::Iterable* getJavaFileObjects($Array<::java::nio::file::Path>* paths) override;
	virtual ::java::lang::Iterable* getJavaFileObjectsFromFiles(::java::lang::Iterable* files) override;
	virtual ::java::lang::Iterable* getJavaFileObjectsFromPaths(::java::util::Collection* paths) override;
	virtual ::java::lang::Iterable* getJavaFileObjectsFromStrings(::java::lang::Iterable* names) override;
	virtual ::java::lang::Iterable* getLocation(::javax::tools::JavaFileManager$Location* location) override;
	virtual ::java::lang::Iterable* getLocationAsPaths(::javax::tools::JavaFileManager$Location* location) override;
	virtual ::javax::tools::JavaFileManager$Location* getLocationForModule(::javax::tools::JavaFileManager$Location* location, $String* moduleName) override;
	virtual ::javax::tools::JavaFileManager$Location* getLocationForModule(::javax::tools::JavaFileManager$Location* location, ::javax::tools::JavaFileObject* fo) override;
	static $String* getMessage(::java::io::IOException* e);
	::java::nio::file::Path* getPath($String* first, $StringArray* more);
	static $String* getRelativeName(::java::io::File* file);
	virtual ::java::util::ServiceLoader* getServiceLoader(::javax::tools::JavaFileManager$Location* location, $Class* service) override;
	::java::nio::file::Path* getSourceOutDir();
	virtual bool handleOption(::com::sun::tools::javac::main::Option* option, $String* value) override;
	virtual bool hasExplicitLocation(::javax::tools::JavaFileManager$Location* location);
	virtual bool hasLocation(::javax::tools::JavaFileManager$Location* location) override;
	::java::util::Map* indexPathsAndContainersByRelativeDirectory(::javax::tools::JavaFileManager$Location* location);
	virtual $String* inferBinaryName(::javax::tools::JavaFileManager$Location* location, ::javax::tools::JavaFileObject* file) override;
	virtual $String* inferModuleName(::javax::tools::JavaFileManager$Location* location) override;
	static bool isRelativeUri(::java::net::URI* uri);
	static bool isRelativeUri($String* u);
	virtual bool isSameFile(::javax::tools::FileObject* a, ::javax::tools::FileObject* b) override;
	virtual bool isSymbolFileEnabled();
	bool isValidFile($String* s, ::java::util::Set* fileKinds);
	static bool isValidName($String* name);
	static ::java::util::Iterator* lambda$asFiles$5(::java::lang::Iterable* paths);
	static ::java::util::Iterator* lambda$asPaths$4(::java::lang::Iterable* files);
	static ::java::util::List* lambda$indexPathsAndContainersByRelativeDirectory$2(::java::util::List* nonIndexingContainers, ::com::sun::tools::javac::file::RelativePath$RelativeDirectory* d);
	static void lambda$indexPathsAndContainersByRelativeDirectory$3(::java::util::List* pathAndContainerList);
	::java::util::List* lambda$pathsAndContainers$1(::javax::tools::JavaFileManager$Location* location, ::com::sun::tools::javac::file::RelativePath$RelativeDirectory* d);
	static ::javax::tools::JavaFileManager* lambda$preRegister$0(::com::sun::tools::javac::util::Context* c);
	virtual ::java::lang::Iterable* list(::javax::tools::JavaFileManager$Location* location, $String* packageName, ::java::util::Set* kinds, bool recurse) override;
	virtual ::java::lang::Iterable* listLocationsForModules(::javax::tools::JavaFileManager$Location* location) override;
	::java::util::List* pathsAndContainers(::javax::tools::JavaFileManager$Location* location, ::com::sun::tools::javac::file::RelativePath$RelativeDirectory* relativeDirectory);
	::java::util::List* pathsAndContainers(::javax::tools::JavaFileManager$Location* location);
	static void preRegister(::com::sun::tools::javac::util::Context* context);
	static void printAscii($String* format, $ObjectArray* args);
	virtual void setContext(::com::sun::tools::javac::util::Context* context) override;
	virtual void setLocation(::javax::tools::JavaFileManager$Location* location, ::java::lang::Iterable* searchpath) override;
	virtual void setLocationForModule(::javax::tools::JavaFileManager$Location* location, $String* moduleName, ::java::util::Collection* paths) override;
	virtual void setLocationFromPaths(::javax::tools::JavaFileManager$Location* location, ::java::util::Collection* searchpath) override;
	virtual void setPathFactory(::javax::tools::StandardJavaFileManager$PathFactory* f) override;
	virtual void setSymbolFileEnabled(bool b);
	static void testName($String* name, bool isValidPackageName, bool isValidClassName);
	static $chars* toArray(::java::nio::CharBuffer* buffer);
	virtual $String* toString() override;
	static void validateClassName($String* className);
	static void validatePackageName($String* packageName);
	::com::sun::tools::javac::file::FSInfo* fsInfo = nullptr;
	static ::java::util::Set* SOURCE_OR_CLASS;
	bool symbolFileEnabled = false;
	::javax::tools::StandardJavaFileManager$PathFactory* pathFactory = nullptr;
	::com::sun::tools::javac::file::JavacFileManager$SortFiles* sortFiles = nullptr;
	::java::util::Map* pathsAndContainersByLocationAndRelativeDirectory = nullptr;
	::java::util::Map* nonIndexingContainersByLocation = nullptr;
	::java::util::Map* containers = nullptr;
	static ::com::sun::tools::javac::file::JavacFileManager$Container* MISSING_CONTAINER;
	::com::sun::tools::javac::file::JRTIndex* jrtIndex = nullptr;
	static ::java::util::Set* NO_FILE_VISIT_OPTIONS;
	static ::java::util::Set* FOLLOW_LINKS_OPTIONS;
	static bool fileSystemIsCaseSensitive;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("FOLLOW_LINKS_OPTIONS")
#pragma pop_macro("MISSING_CONTAINER")
#pragma pop_macro("NO_FILE_VISIT_OPTIONS")
#pragma pop_macro("SOURCE_OR_CLASS")

#endif // _com_sun_tools_javac_file_JavacFileManager_h_