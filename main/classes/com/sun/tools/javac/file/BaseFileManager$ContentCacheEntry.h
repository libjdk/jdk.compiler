#ifndef _com_sun_tools_javac_file_BaseFileManager$ContentCacheEntry_h_
#define _com_sun_tools_javac_file_BaseFileManager$ContentCacheEntry_h_
//$ class com.sun.tools.javac.file.BaseFileManager$ContentCacheEntry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace ref {
			class SoftReference;
		}
	}
}
namespace java {
	namespace nio {
		class CharBuffer;
	}
}
namespace javax {
	namespace tools {
		class JavaFileObject;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class $export BaseFileManager$ContentCacheEntry : public ::java::lang::Object {
	$class(BaseFileManager$ContentCacheEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	BaseFileManager$ContentCacheEntry();
	void init$(::javax::tools::JavaFileObject* file, ::java::nio::CharBuffer* cb);
	virtual ::java::nio::CharBuffer* getValue();
	virtual bool isValid(::javax::tools::JavaFileObject* file);
	int64_t timestamp = 0;
	::java::lang::ref::SoftReference* ref = nullptr;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_BaseFileManager$ContentCacheEntry_h_