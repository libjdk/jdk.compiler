#ifndef _com_sun_tools_sjavac_comp_SmartFileManager_h_
#define _com_sun_tools_sjavac_comp_SmartFileManager_h_
//$ class com.sun.tools.sjavac.comp.SmartFileManager
//$ extends javax.tools.ForwardingJavaFileManager

#include <javax/tools/ForwardingJavaFileManager.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class ListBuffer;
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
namespace javax {
	namespace tools {
		class FileObject;
		class JavaFileManager;
		class JavaFileManager$Location;
		class JavaFileObject;
		class JavaFileObject$Kind;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace comp {

class SmartFileManager : public ::javax::tools::ForwardingJavaFileManager {
	$class(SmartFileManager, $NO_CLASS_INIT, ::javax::tools::ForwardingJavaFileManager)
public:
	SmartFileManager();
	using ::javax::tools::ForwardingJavaFileManager::getLocationForModule;
	void init$(::javax::tools::JavaFileManager* fileManager);
	virtual void addArtifact($String* pkgName, ::java::net::URI* art);
	virtual void cleanArtifacts();
	virtual ::javax::tools::FileObject* getFileForInput(::javax::tools::JavaFileManager$Location* location, $String* packageName, $String* relativeName) override;
	virtual ::javax::tools::FileObject* getFileForOutput(::javax::tools::JavaFileManager$Location* location, $String* packageName, $String* relativeName, ::javax::tools::FileObject* sibling) override;
	virtual ::javax::tools::JavaFileObject* getJavaFileForInput(::javax::tools::JavaFileManager$Location* location, $String* className, ::javax::tools::JavaFileObject$Kind* kind) override;
	virtual ::javax::tools::JavaFileObject* getJavaFileForOutput(::javax::tools::JavaFileManager$Location* location, $String* className, ::javax::tools::JavaFileObject$Kind* kind, ::javax::tools::FileObject* sibling) override;
	virtual ::javax::tools::JavaFileManager$Location* getLocationForModule(::javax::tools::JavaFileManager$Location* location, ::javax::tools::JavaFileObject* fo) override;
	virtual ::java::util::Map* getPackageArtifacts();
	virtual $String* inferBinaryName(::javax::tools::JavaFileManager$Location* location, ::javax::tools::JavaFileObject* file) override;
	bool isModuleInfo(::javax::tools::FileObject* fo);
	virtual bool isSameFile(::javax::tools::FileObject* a, ::javax::tools::FileObject* b) override;
	virtual ::java::lang::Iterable* list(::javax::tools::JavaFileManager$Location* location, $String* packageName, ::java::util::Set* kinds, bool recurse) override;
	static ::javax::tools::FileObject* locUnwrap(::javax::tools::FileObject* fo);
	static ::javax::tools::JavaFileObject* locUnwrap(::javax::tools::JavaFileObject* fo);
	static ::javax::tools::JavaFileObject* locWrap(::javax::tools::JavaFileObject* jfo, ::javax::tools::JavaFileManager$Location* loc);
	static ::javax::tools::FileObject* locWrap(::javax::tools::FileObject* fo, ::javax::tools::JavaFileManager$Location* loc);
	static ::com::sun::tools::javac::util::ListBuffer* locWrapMany(::java::lang::Iterable* jfos, ::javax::tools::JavaFileManager$Location* loc);
	static $String* packageNameFromFileName($String* fn);
	virtual void setSymbolFileEnabled(bool b);
	virtual void setVisibleSources(::java::util::Set* s);
	::java::util::Set* visibleSources = nullptr;
	::java::util::Map* packageArtifacts = nullptr;
};

				} // comp
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_comp_SmartFileManager_h_