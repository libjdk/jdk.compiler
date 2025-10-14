#ifndef _com_sun_tools_javac_jvm_ClassWriter$StackMapTableFrame$SameFrame_h_
#define _com_sun_tools_javac_jvm_ClassWriter$StackMapTableFrame$SameFrame_h_
//$ class com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame$SameFrame
//$ extends com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame

#include <com/sun/tools/javac/jvm/ClassWriter$StackMapTableFrame.h>

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

class $import ClassWriter$StackMapTableFrame$SameFrame : public ::com::sun::tools::javac::jvm::ClassWriter$StackMapTableFrame {
	$class(ClassWriter$StackMapTableFrame$SameFrame, $NO_CLASS_INIT, ::com::sun::tools::javac::jvm::ClassWriter$StackMapTableFrame)
public:
	ClassWriter$StackMapTableFrame$SameFrame();
	void init$(int32_t offsetDelta);
	virtual int32_t getFrameType() override;
	virtual void write(::com::sun::tools::javac::jvm::ClassWriter* writer) override;
	int32_t offsetDelta = 0;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_ClassWriter$StackMapTableFrame$SameFrame_h_