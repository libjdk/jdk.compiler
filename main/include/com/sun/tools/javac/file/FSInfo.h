#ifndef _com_sun_tools_javac_file_FSInfo_h_
#define _com_sun_tools_javac_file_FSInfo_h_
//$ class com.sun.tools.javac.file.FSInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
	namespace net {
		class URL;
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
	namespace nio {
		namespace file {
			namespace spi {
				class FileSystemProvider;
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class $import FSInfo : public ::java::lang::Object {
	$class(FSInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FSInfo();
	void init$();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual bool exists(::java::nio::file::Path* file);
	virtual ::java::nio::file::Path* getCanonicalFile(::java::nio::file::Path* file);
	virtual ::java::util::List* getJarClassPath(::java::nio::file::Path* file);
	virtual ::java::nio::file::spi::FileSystemProvider* getJarFSProvider();
	static ::com::sun::tools::javac::file::FSInfo* instance(::com::sun::tools::javac::util::Context* context);
	virtual bool isDirectory(::java::nio::file::Path* file);
	virtual bool isFile(::java::nio::file::Path* file);
	static ::java::net::URL* tryResolveFile(::java::net::URL* base, $String* input);
	::java::nio::file::spi::FileSystemProvider* jarFSProvider = nullptr;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_FSInfo_h_