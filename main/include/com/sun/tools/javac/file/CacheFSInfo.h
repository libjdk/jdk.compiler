#ifndef _com_sun_tools_javac_file_CacheFSInfo_h_
#define _com_sun_tools_javac_file_CacheFSInfo_h_
//$ class com.sun.tools.javac.file.CacheFSInfo
//$ extends com.sun.tools.javac.file.FSInfo

#include <com/sun/tools/javac/file/FSInfo.h>

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
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Optional;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class $import CacheFSInfo : public ::com::sun::tools::javac::file::FSInfo {
	$class(CacheFSInfo, $NO_CLASS_INIT, ::com::sun::tools::javac::file::FSInfo)
public:
	CacheFSInfo();
	void init$();
	virtual void clearCache();
	virtual bool exists(::java::nio::file::Path* file) override;
	virtual ::java::util::Optional* getAttributes(::java::nio::file::Path* file);
	virtual ::java::nio::file::Path* getCanonicalFile(::java::nio::file::Path* file) override;
	virtual ::java::util::List* getJarClassPath(::java::nio::file::Path* file) override;
	virtual bool isDirectory(::java::nio::file::Path* file) override;
	virtual bool isFile(::java::nio::file::Path* file) override;
	::java::nio::file::Path* lambda$getCanonicalFile$1(::java::nio::file::Path* x$0);
	static ::com::sun::tools::javac::file::FSInfo* lambda$preRegister$0(::com::sun::tools::javac::util::Context* c);
	virtual ::java::util::Optional* maybeReadAttributes(::java::nio::file::Path* file);
	static void preRegister(::com::sun::tools::javac::util::Context* context);
	::java::util::concurrent::ConcurrentHashMap* canonicalPathCache = nullptr;
	::java::util::concurrent::ConcurrentHashMap* attributeCache = nullptr;
	::java::util::concurrent::ConcurrentHashMap* jarClassPathCache = nullptr;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_CacheFSInfo_h_