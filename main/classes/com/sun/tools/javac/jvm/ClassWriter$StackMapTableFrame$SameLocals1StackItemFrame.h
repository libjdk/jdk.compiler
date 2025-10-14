#ifndef _com_sun_tools_javac_jvm_ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame_h_
#define _com_sun_tools_javac_jvm_ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame_h_
//$ class com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame
//$ extends com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame

#include <com/sun/tools/javac/jvm/ClassWriter$StackMapTableFrame.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {
					class ClassWriter;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class $export ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame : public ::com::sun::tools::javac::jvm::ClassWriter$StackMapTableFrame {
	$class(ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame, $NO_CLASS_INIT, ::com::sun::tools::javac::jvm::ClassWriter$StackMapTableFrame)
public:
	ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame();
	void init$(int32_t offsetDelta, ::com::sun::tools::javac::code::Type* stack);
	virtual int32_t getFrameType() override;
	virtual void write(::com::sun::tools::javac::jvm::ClassWriter* writer) override;
	int32_t offsetDelta = 0;
	::com::sun::tools::javac::code::Type* stack = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_ClassWriter$StackMapTableFrame$SameLocals1StackItemFrame_h_