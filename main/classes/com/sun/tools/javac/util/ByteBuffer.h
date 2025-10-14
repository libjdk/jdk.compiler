#ifndef _com_sun_tools_javac_util_ByteBuffer_h_
#define _com_sun_tools_javac_util_ByteBuffer_h_
//$ class com.sun.tools.javac.util.ByteBuffer
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class Name;
					class Names;
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class InputStream;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $export ByteBuffer : public ::java::lang::Object {
	$class(ByteBuffer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ByteBuffer();
	void init$();
	void init$(int32_t initialSize);
	virtual void appendByte(int32_t b);
	virtual void appendBytes($bytes* bs, int32_t start, int32_t len);
	virtual void appendBytes($bytes* bs);
	virtual void appendChar(int32_t x);
	virtual void appendDouble(double x);
	virtual void appendFloat(float x);
	virtual void appendInt(int32_t x);
	virtual void appendLong(int64_t x);
	virtual void appendName(::com::sun::tools::javac::util::Name* name);
	virtual void appendStream(::java::io::InputStream* is);
	virtual int8_t getByte(int32_t bp);
	virtual char16_t getChar(int32_t bp);
	virtual double getDouble(int32_t bp);
	virtual float getFloat(int32_t bp);
	virtual int32_t getInt(int32_t bp);
	virtual int64_t getLong(int32_t bp);
	virtual void reset();
	virtual ::com::sun::tools::javac::util::Name* toName(::com::sun::tools::javac::util::Names* names);
	$bytes* elems = nullptr;
	int32_t length = 0;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_ByteBuffer_h_