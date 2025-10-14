#ifndef _com_sun_tools_javac_jvm_ClassWriter$StackMapTableFrame_h_
#define _com_sun_tools_javac_jvm_ClassWriter$StackMapTableFrame_h_
//$ class com.sun.tools.javac.jvm.ClassWriter$StackMapTableFrame
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class Types;
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
					class Code$StackMapFrame;
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

class $import ClassWriter$StackMapTableFrame : public ::java::lang::Object {
	$class(ClassWriter$StackMapTableFrame, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ClassWriter$StackMapTableFrame();
	void init$();
	static int32_t compare($Array<::com::sun::tools::javac::code::Type>* arr1, $Array<::com::sun::tools::javac::code::Type>* arr2, ::com::sun::tools::javac::code::Types* types);
	virtual int32_t getFrameType() {return 0;}
	static ::com::sun::tools::javac::jvm::ClassWriter$StackMapTableFrame* getInstance(::com::sun::tools::javac::jvm::Code$StackMapFrame* this_frame, int32_t prev_pc, $Array<::com::sun::tools::javac::code::Type>* prev_locals, ::com::sun::tools::javac::code::Types* types);
	static bool isInt(::com::sun::tools::javac::code::Type* t);
	static bool isSameType(::com::sun::tools::javac::code::Type* t1, ::com::sun::tools::javac::code::Type* t2, ::com::sun::tools::javac::code::Types* types);
	virtual void write(::com::sun::tools::javac::jvm::ClassWriter* writer);
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_ClassWriter$StackMapTableFrame_h_