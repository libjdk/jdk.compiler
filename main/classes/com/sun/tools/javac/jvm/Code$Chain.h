#ifndef _com_sun_tools_javac_jvm_Code$Chain_h_
#define _com_sun_tools_javac_jvm_Code$Chain_h_
//$ class com.sun.tools.javac.jvm.Code$Chain
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {
					class Code$State;
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

class $export Code$Chain : public ::java::lang::Object {
	$class(Code$Chain, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Code$Chain();
	void init$(int32_t pc, ::com::sun::tools::javac::jvm::Code$Chain* next, ::com::sun::tools::javac::jvm::Code$State* state);
	int32_t pc = 0;
	::com::sun::tools::javac::jvm::Code$State* state = nullptr;
	::com::sun::tools::javac::jvm::Code$Chain* next = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_Code$Chain_h_