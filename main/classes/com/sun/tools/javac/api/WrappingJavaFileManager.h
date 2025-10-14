#ifndef _com_sun_tools_javac_api_WrappingJavaFileManager_h_
#define _com_sun_tools_javac_api_WrappingJavaFileManager_h_
//$ class com.sun.tools.javac.api.WrappingJavaFileManager
//$ extends javax.tools.ForwardingJavaFileManager

#include <javax/tools/ForwardingJavaFileManager.h>

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
			namespace javac {
				namespace api {

class $export WrappingJavaFileManager : public ::javax::tools::ForwardingJavaFileManager {
	$class(WrappingJavaFileManager, $NO_CLASS_INIT, ::javax::tools::ForwardingJavaFileManager)
public:
	WrappingJavaFileManager();
	void init$(::javax::tools::JavaFileManager* fileManager);
	virtual bool contains(::javax::tools::JavaFileManager$Location* location, ::javax::tools::FileObject* file) override;
	virtual ::javax::tools::FileObject* getFileForInput(::javax::tools::JavaFileManager$Location* location, $String* packageName, $String* relativeName) override;
	virtual ::javax::tools::FileObject* getFileForOutput(::javax::tools::JavaFileManager$Location* location, $String* packageName, $String* relativeName, ::javax::tools::FileObject* sibling) override;
	virtual ::javax::tools::JavaFileObject* getJavaFileForInput(::javax::tools::JavaFileManager$Location* location, $String* className, ::javax::tools::JavaFileObject$Kind* kind) override;
	virtual ::javax::tools::JavaFileObject* getJavaFileForOutput(::javax::tools::JavaFileManager$Location* location, $String* className, ::javax::tools::JavaFileObject$Kind* kind, ::javax::tools::FileObject* sibling) override;
	virtual $String* inferBinaryName(::javax::tools::JavaFileManager$Location* location, ::javax::tools::JavaFileObject* file) override;
	virtual ::java::lang::Iterable* list(::javax::tools::JavaFileManager$Location* location, $String* packageName, ::java::util::Set* kinds, bool recurse) override;
	virtual ::javax::tools::FileObject* unwrap(::javax::tools::FileObject* fileObject);
	virtual ::javax::tools::JavaFileObject* unwrap(::javax::tools::JavaFileObject* fileObject);
	virtual ::java::net::URI* unwrap(::java::net::URI* uri);
	virtual ::javax::tools::FileObject* wrap(::javax::tools::FileObject* fileObject);
	virtual ::javax::tools::JavaFileObject* wrap(::javax::tools::JavaFileObject* fileObject);
	virtual ::java::lang::Iterable* wrap(::java::lang::Iterable* fileObjects);
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_api_WrappingJavaFileManager_h_