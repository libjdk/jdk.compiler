#ifndef _com_sun_tools_javac_file_BaseFileManager$ByteBufferCache_h_
#define _com_sun_tools_javac_file_BaseFileManager$ByteBufferCache_h_
//$ class com.sun.tools.javac.file.BaseFileManager$ByteBufferCache
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class BaseFileManager$ByteBufferCache : public ::java::lang::Object {
	$class(BaseFileManager$ByteBufferCache, $NO_CLASS_INIT, ::java::lang::Object)
public:
	BaseFileManager$ByteBufferCache();
	void init$();
	virtual ::java::nio::ByteBuffer* get(int32_t capacity);
	virtual void put(::java::nio::ByteBuffer* x);
	::java::nio::ByteBuffer* cached = nullptr;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_BaseFileManager$ByteBufferCache_h_