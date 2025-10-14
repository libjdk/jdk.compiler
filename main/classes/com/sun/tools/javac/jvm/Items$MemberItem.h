#ifndef _com_sun_tools_javac_jvm_Items$MemberItem_h_
#define _com_sun_tools_javac_jvm_Items$MemberItem_h_
//$ class com.sun.tools.javac.jvm.Items$MemberItem
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

class $export Items$MemberItem : public ::com::sun::tools::javac::jvm::Items$Item {
	$class(Items$MemberItem, $NO_CLASS_INIT, ::com::sun::tools::javac::jvm::Items$Item)
public:
	Items$MemberItem();
	void init$(::com::sun::tools::javac::jvm::Items* this$0, ::com::sun::tools::javac::code::Symbol* member, bool nonvirtual);
	virtual void drop() override;
	virtual void duplicate() override;
	virtual ::com::sun::tools::javac::jvm::Items$Item* invoke() override;
	virtual ::com::sun::tools::javac::jvm::Items$Item* load() override;
	virtual void stash(int32_t toscode) override;
	virtual void store() override;
	virtual $String* toString() override;
	virtual int32_t width() override;
	::com::sun::tools::javac::jvm::Items* this$0 = nullptr;
	::com::sun::tools::javac::code::Symbol* member = nullptr;
	bool nonvirtual = false;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_Items$MemberItem_h_