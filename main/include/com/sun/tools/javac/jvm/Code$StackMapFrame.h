#ifndef _com_sun_tools_javac_jvm_Code$StackMapFrame_h_
#define _com_sun_tools_javac_jvm_Code$StackMapFrame_h_
//$ class com.sun.tools.javac.jvm.Code$StackMapFrame
//$ extends java.lang.Object

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

class $import Code$StackMapFrame : public ::java::lang::Object {
	$class(Code$StackMapFrame, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Code$StackMapFrame();
	void init$();
	int32_t pc = 0;
	$Array<::com::sun::tools::javac::code::Type>* locals = nullptr;
	$Array<::com::sun::tools::javac::code::Type>* stack = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_Code$StackMapFrame_h_