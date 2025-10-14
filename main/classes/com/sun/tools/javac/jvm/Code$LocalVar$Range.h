#ifndef _com_sun_tools_javac_jvm_Code$LocalVar$Range_h_
#define _com_sun_tools_javac_jvm_Code$LocalVar$Range_h_
//$ class com.sun.tools.javac.jvm.Code$LocalVar$Range
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {
					class Code$LocalVar;
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

class $export Code$LocalVar$Range : public ::java::lang::Object {
	$class(Code$LocalVar$Range, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Code$LocalVar$Range();
	void init$(::com::sun::tools::javac::jvm::Code$LocalVar* this$0);
	void init$(::com::sun::tools::javac::jvm::Code$LocalVar* this$0, char16_t start);
	void init$(::com::sun::tools::javac::jvm::Code$LocalVar* this$0, char16_t start, char16_t length);
	virtual bool closed();
	virtual $String* toString() override;
	::com::sun::tools::javac::jvm::Code$LocalVar* this$0 = nullptr;
	char16_t start_pc = 0;
	char16_t length = 0;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_Code$LocalVar$Range_h_