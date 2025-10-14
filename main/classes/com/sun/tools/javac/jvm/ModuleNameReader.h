#ifndef _com_sun_tools_javac_jvm_ModuleNameReader_h_
#define _com_sun_tools_javac_jvm_ModuleNameReader_h_
//$ class com.sun.tools.javac.jvm.ModuleNameReader
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("INITIAL_BUFFER_SIZE")
#undef INITIAL_BUFFER_SIZE

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {
					class PoolReader;
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
					class ByteBuffer;
					class Name$NameMapper;
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
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
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
				namespace jvm {

class $export ModuleNameReader : public ::java::lang::Object {
	$class(ModuleNameReader, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ModuleNameReader();
	void init$();
	virtual void checkZero(int32_t count, $String* name);
	static $String* lambda$utf8Mapper$0($bytes* buf, int32_t offset, int32_t len);
	virtual char16_t nextChar();
	virtual int32_t nextInt();
	virtual $String* readModuleName(::java::nio::file::Path* p);
	virtual $String* readModuleName(::javax::tools::JavaFileObject* jfo);
	virtual $String* readModuleName(::java::io::InputStream* in);
	virtual ::com::sun::tools::javac::util::Name$NameMapper* utf8Mapper(bool internalize);
	static const int32_t INITIAL_BUFFER_SIZE = 0x0000FFF0;
	::com::sun::tools::javac::util::ByteBuffer* buf = nullptr;
	int32_t bp = 0;
	::com::sun::tools::javac::jvm::PoolReader* reader = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("INITIAL_BUFFER_SIZE")

#endif // _com_sun_tools_javac_jvm_ModuleNameReader_h_