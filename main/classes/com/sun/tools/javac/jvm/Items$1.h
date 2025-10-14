#ifndef _com_sun_tools_javac_jvm_Items$1_h_
#define _com_sun_tools_javac_jvm_Items$1_h_
//$ class com.sun.tools.javac.jvm.Items$1
//$ extends com.sun.tools.javac.jvm.Items$Item

#include <com/sun/tools/javac/jvm/Items$Item.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {
					class Items;
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

class Items$1 : public ::com::sun::tools::javac::jvm::Items$Item {
	$class(Items$1, $NO_CLASS_INIT, ::com::sun::tools::javac::jvm::Items$Item)
public:
	Items$1();
	void init$(::com::sun::tools::javac::jvm::Items* this$0, int32_t typecode);
	virtual $String* toString() override;
	::com::sun::tools::javac::jvm::Items* this$0 = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_Items$1_h_