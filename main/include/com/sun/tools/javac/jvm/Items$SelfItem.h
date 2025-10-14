#ifndef _com_sun_tools_javac_jvm_Items$SelfItem_h_
#define _com_sun_tools_javac_jvm_Items$SelfItem_h_
//$ class com.sun.tools.javac.jvm.Items$SelfItem
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

class $import Items$SelfItem : public ::com::sun::tools::javac::jvm::Items$Item {
	$class(Items$SelfItem, $NO_CLASS_INIT, ::com::sun::tools::javac::jvm::Items$Item)
public:
	Items$SelfItem();
	void init$(::com::sun::tools::javac::jvm::Items* this$0, bool isSuper);
	virtual ::com::sun::tools::javac::jvm::Items$Item* load() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::jvm::Items* this$0 = nullptr;
	bool isSuper = false;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_Items$SelfItem_h_