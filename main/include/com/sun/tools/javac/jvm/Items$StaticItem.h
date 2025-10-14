#ifndef _com_sun_tools_javac_jvm_Items$StaticItem_h_
#define _com_sun_tools_javac_jvm_Items$StaticItem_h_
//$ class com.sun.tools.javac.jvm.Items$StaticItem
//$ extends com.sun.tools.javac.jvm.Items$Item

#include <com/sun/tools/javac/jvm/Items$Item.h>

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

class $import Items$StaticItem : public ::com::sun::tools::javac::jvm::Items$Item {
	$class(Items$StaticItem, $NO_CLASS_INIT, ::com::sun::tools::javac::jvm::Items$Item)
public:
	Items$StaticItem();
	void init$(::com::sun::tools::javac::jvm::Items* this$0, ::com::sun::tools::javac::code::Symbol* member);
	virtual ::com::sun::tools::javac::jvm::Items$Item* invoke() override;
	virtual ::com::sun::tools::javac::jvm::Items$Item* load() override;
	virtual void store() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::jvm::Items* this$0 = nullptr;
	::com::sun::tools::javac::code::Symbol* member = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_Items$StaticItem_h_