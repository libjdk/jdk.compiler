#ifndef _com_sun_tools_javac_jvm_ClassWriter$StackMapTableFrame$FullFrame_h_
#define _com_sun_tools_javac_jvm_ClassWriter$StackMapTableFrame$FullFrame_h_
//$ class com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame$FullFrame
//$ extends com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame

#include <com/sun/tools/javac/jvm/ClassWriter$StackMapTableFrame.h>
#include <java/lang/Array.h>

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

class $export ClassWriter$StackMapTableFrame$FullFrame : public ::com::sun::tools::javac::jvm::ClassWriter$StackMapTableFrame {
	$class(ClassWriter$StackMapTableFrame$FullFrame, $NO_CLASS_INIT, ::com::sun::tools::javac::jvm::ClassWriter$StackMapTableFrame)
public:
	ClassWriter$StackMapTableFrame$FullFrame();
	void init$(int32_t offsetDelta, $Array<::com::sun::tools::javac::code::Type>* locals, $Array<::com::sun::tools::javac::code::Type>* stack);
	virtual int32_t getFrameType() override;
	virtual void write(::com::sun::tools::javac::jvm::ClassWriter* writer) override;
	int32_t offsetDelta = 0;
	$Array<::com::sun::tools::javac::code::Type>* locals = nullptr;
	$Array<::com::sun::tools::javac::code::Type>* stack = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_ClassWriter$StackMapTableFrame$FullFrame_h_