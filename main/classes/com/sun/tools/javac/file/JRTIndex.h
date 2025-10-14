#ifndef _com_sun_tools_javac_file_JRTIndex_h_
#define _com_sun_tools_javac_file_JRTIndex_h_
//$ class com.sun.tools.javac.file.JRTIndex
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {
					class JRTIndex$CtSym;
					class JRTIndex$Entry;
					class RelativePath$RelativeDirectory;
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
		class CharSequence;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class FileSystem;
		}
	}
}
namespace java {
	namespace util {
		class Map;
		class ResourceBundle;
	}
}
namespace javax {
	namespace tools {
		class FileObject;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class $export JRTIndex : public ::java::lang::Object {
	$class(JRTIndex, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JRTIndex();
	void init$();
	::com::sun::tools::javac::file::JRTIndex$CtSym* getCtInfo(::com::sun::tools::javac::file::RelativePath$RelativeDirectory* dir);
	virtual ::com::sun::tools::javac::file::JRTIndex$CtSym* getCtSym(::java::lang::CharSequence* packageName);
	virtual ::com::sun::tools::javac::file::JRTIndex$Entry* getEntry(::com::sun::tools::javac::file::RelativePath$RelativeDirectory* rd);
	static ::com::sun::tools::javac::file::JRTIndex* getSharedInstance();
	static ::com::sun::tools::javac::file::JRTIndex* instance(::com::sun::tools::javac::util::Context* context);
	static bool isAvailable();
	virtual bool isInJRT(::javax::tools::FileObject* fo);
	static ::com::sun::tools::javac::file::JRTIndex* sharedInstance;
	::java::nio::file::FileSystem* jrtfs = nullptr;
	::java::util::Map* entries = nullptr;
	::java::util::ResourceBundle* ctBundle = nullptr;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_JRTIndex_h_