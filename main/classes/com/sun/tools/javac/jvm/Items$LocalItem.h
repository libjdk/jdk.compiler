#ifndef _com_sun_tools_javac_jvm_Items$LocalItem_h_
#define _com_sun_tools_javac_jvm_Items$LocalItem_h_
//$ class com.sun.tools.javac.jvm.Items$LocalItem
//$ extends com.sun.tools.javac.jvm.Items$Item

#include <com/sun/tools/javac/jvm/Items$Item.h>

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

class $export Items$LocalItem : public ::com::sun::tools::javac::jvm::Items$Item {
	$class(Items$LocalItem, $NO_CLASS_INIT, ::com::sun::tools::javac::jvm::Items$Item)
public:
	Items$LocalItem();
	void init$(::com::sun::tools::javac::jvm::Items* this$0, ::com::sun::tools::javac::code::Type* type, int32_t reg);
	virtual void incr(int32_t x);
	virtual ::com::sun::tools::javac::jvm::Items$Item* load() override;
	virtual void store() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::jvm::Items* this$0 = nullptr;
	int32_t reg = 0;
	::com::sun::tools::javac::code::Type* type = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_Items$LocalItem_h_