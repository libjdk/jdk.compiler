#ifndef _com_sun_tools_javac_jvm_PoolReader$ImmutablePoolHelper_h_
#define _com_sun_tools_javac_jvm_PoolReader$ImmutablePoolHelper_h_
//$ class com.sun.tools.javac.jvm.PoolReader$ImmutablePoolHelper
//$ extends java.lang.Object

#include <java/lang/Array.h>

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
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class BitSet;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class $export PoolReader$ImmutablePoolHelper : public ::java::lang::Object {
	$class(PoolReader$ImmutablePoolHelper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PoolReader$ImmutablePoolHelper();
	void init$(::com::sun::tools::javac::jvm::PoolReader* this$0, ::com::sun::tools::javac::util::ByteBuffer* poolbuf, $ints* offsets);
	int32_t checkIndex(int32_t index);
	virtual int32_t offset(int32_t index);
	virtual $Object* readIfNeeded(int32_t index, ::java::util::BitSet* expectedTags);
	virtual int32_t tag(int32_t index);
	::com::sun::tools::javac::jvm::PoolReader* this$0 = nullptr;
	$ObjectArray* values = nullptr;
	$ints* offsets = nullptr;
	::com::sun::tools::javac::util::ByteBuffer* poolbuf = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_PoolReader$ImmutablePoolHelper_h_