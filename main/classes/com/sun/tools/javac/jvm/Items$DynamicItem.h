#ifndef _com_sun_tools_javac_jvm_Items$DynamicItem_h_
#define _com_sun_tools_javac_jvm_Items$DynamicItem_h_
//$ class com.sun.tools.javac.jvm.Items$DynamicItem
//$ extends com.sun.tools.javac.jvm.Items$StaticItem

#include <com/sun/tools/javac/jvm/Items$StaticItem.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
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
					class Items;
					class Items$Item;
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

class $export Items$DynamicItem : public ::com::sun::tools::javac::jvm::Items$StaticItem {
	$class(Items$DynamicItem, $NO_CLASS_INIT, ::com::sun::tools::javac::jvm::Items$StaticItem)
public:
	Items$DynamicItem();
	void init$(::com::sun::tools::javac::jvm::Items* this$0, ::com::sun::tools::javac::code::Symbol* member);
	virtual ::com::sun::tools::javac::jvm::Items$Item* invoke() override;
	virtual ::com::sun::tools::javac::jvm::Items$Item* load() override;
	virtual void store() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::jvm::Items* this$0 = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_Items$DynamicItem_h_