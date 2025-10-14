#ifndef _com_sun_tools_javac_jvm_Items$StackItem_h_
#define _com_sun_tools_javac_jvm_Items$StackItem_h_
//$ class com.sun.tools.javac.jvm.Items$StackItem
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

class $export Items$StackItem : public ::com::sun::tools::javac::jvm::Items$Item {
	$class(Items$StackItem, $NO_CLASS_INIT, ::com::sun::tools::javac::jvm::Items$Item)
public:
	Items$StackItem();
	void init$(::com::sun::tools::javac::jvm::Items* this$0, int32_t typecode);
	virtual void drop() override;
	virtual void duplicate() override;
	virtual ::com::sun::tools::javac::jvm::Items$Item* load() override;
	virtual void stash(int32_t toscode) override;
	virtual $String* toString() override;
	virtual int32_t width() override;
	::com::sun::tools::javac::jvm::Items* this$0 = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_Items$StackItem_h_