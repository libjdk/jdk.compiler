#ifndef _com_sun_tools_javac_file_PathFileObject_h_
#define _com_sun_tools_javac_file_PathFileObject_h_
//$ class com.sun.tools.javac.file.PathFileObject
//$ extends javax.tools.JavaFileObject

#include <javax/tools/JavaFileObject.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {
					class BaseFileManager;
					class RelativePath;
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
		class Reader;
		class Writer;
	}
}
namespace java {
	namespace lang {
		class CharSequence;
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
		namespace file {
			class FileSystem;
			class Path;
		}
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class Modifier;
				class NestingKind;
			}
		}
	}
}
namespace javax {
	namespace tools {
		class FileObject;
		class JavaFileObject$Kind;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class $import PathFileObject : public ::javax::tools::JavaFileObject {
	$class(PathFileObject, 0, ::javax::tools::JavaFileObject)
public:
	PathFileObject();
	void init$(::com::sun::tools::javac::file::BaseFileManager* fileManager, ::java::nio::file::Path* path);
	virtual bool delete$() override;
	void ensureParentDirectoriesExist();
	virtual bool equals(Object$* other) override;
	static ::com::sun::tools::javac::file::PathFileObject* forDirectoryPath(::com::sun::tools::javac::file::BaseFileManager* fileManager, ::java::nio::file::Path* path, ::java::nio::file::Path* userPackageRootDir, ::com::sun::tools::javac::file::RelativePath* relativePath);
	static ::com::sun::tools::javac::file::PathFileObject* forJRTPath(::com::sun::tools::javac::file::BaseFileManager* fileManager, ::java::nio::file::Path* path);
	static ::com::sun::tools::javac::file::PathFileObject* forJarPath(::com::sun::tools::javac::file::BaseFileManager* fileManager, ::java::nio::file::Path* path, ::java::nio::file::Path* userJarPath);
	static ::com::sun::tools::javac::file::PathFileObject* forSimplePath(::com::sun::tools::javac::file::BaseFileManager* fileManager, ::java::nio::file::Path* path, ::java::nio::file::Path* userPath);
	virtual ::javax::lang::model::element::Modifier* getAccessLevel() override;
	virtual ::java::lang::CharSequence* getCharContent(bool ignoreEncodingErrors) override;
	virtual ::javax::tools::JavaFileObject$Kind* getKind() override;
	virtual int64_t getLastModified() override;
	virtual ::javax::lang::model::element::NestingKind* getNestingKind() override;
	virtual ::java::nio::file::Path* getPath();
	virtual $String* getShortName();
	virtual ::com::sun::tools::javac::file::PathFileObject* getSibling($String* basename) {return nullptr;}
	static $String* getSimpleName(::javax::tools::FileObject* fo);
	virtual int32_t hashCode() override;
	virtual $String* inferBinaryName(::java::lang::Iterable* paths) {return nullptr;}
	virtual bool isNameCompatible($String* simpleName, ::javax::tools::JavaFileObject$Kind* kind) override;
	virtual bool isPathNameCompatible(::java::nio::file::Path* p, $String* simpleName, ::javax::tools::JavaFileObject$Kind* kind);
	virtual bool isSameFile(::com::sun::tools::javac::file::PathFileObject* other);
	virtual ::java::io::InputStream* openInputStream() override;
	virtual ::java::io::OutputStream* openOutputStream() override;
	virtual ::java::io::Reader* openReader(bool ignoreEncodingErrors) override;
	virtual ::java::io::Writer* openWriter() override;
	static $String* removeExtension($String* fileName);
	static $String* toBinaryName(::com::sun::tools::javac::file::RelativePath* relativePath);
	static $String* toBinaryName(::java::nio::file::Path* relativePath);
	static $String* toBinaryName($String* relativePath, $String* sep);
	virtual $String* toString() override;
	virtual ::java::net::URI* toUri() override;
	static ::java::nio::file::FileSystem* defaultFileSystem;
	static bool isMacOS;
	::com::sun::tools::javac::file::BaseFileManager* fileManager = nullptr;
	::java::nio::file::Path* path = nullptr;
	bool hasParents = false;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_PathFileObject_h_