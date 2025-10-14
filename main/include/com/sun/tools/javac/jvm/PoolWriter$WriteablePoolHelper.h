#ifndef _com_sun_tools_javac_jvm_PoolWriter$WriteablePoolHelper_h_
#define _com_sun_tools_javac_jvm_PoolWriter$WriteablePoolHelper_h_
//$ class com.sun.tools.javac.jvm.PoolWriter$WriteablePoolHelper
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {
					class PoolConstant;
					class PoolWriter;
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
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class ArrayDeque;
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class $import PoolWriter$WriteablePoolHelper : public ::java::lang::Object {
	$class(PoolWriter$WriteablePoolHelper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PoolWriter$WriteablePoolHelper();
	void init$(::com::sun::tools::javac::jvm::PoolWriter* this$0);
	virtual void reset();
	virtual void writeConstant(::com::sun::tools::javac::jvm::PoolConstant* c);
	int32_t writeIfNeeded(::com::sun::tools::javac::jvm::PoolConstant* p);
	::com::sun::tools::javac::jvm::PoolWriter* this$0 = nullptr;
	::java::util::Map* keysToPos = nullptr;
	::com::sun::tools::javac::util::ByteBuffer* poolbuf = nullptr;
	int32_t currentIndex = 0;
	::java::util::ArrayDeque* todo = nullptr;
	$String* overflowString = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_PoolWriter$WriteablePoolHelper_h_