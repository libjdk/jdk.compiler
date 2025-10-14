#ifndef _com_sun_tools_javac_jvm_Items$ImmediateItem_h_
#define _com_sun_tools_javac_jvm_Items$ImmediateItem_h_
//$ class com.sun.tools.javac.jvm.Items$ImmediateItem
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
					class Items$CondItem;
					class PoolConstant$LoadableConstant;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Number;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class $import Items$ImmediateItem : public ::com::sun::tools::javac::jvm::Items$Item {
	$class(Items$ImmediateItem, $NO_CLASS_INIT, ::com::sun::tools::javac::jvm::Items$Item)
public:
	Items$ImmediateItem();
	using ::com::sun::tools::javac::jvm::Items$Item::coerce;
	void init$(::com::sun::tools::javac::jvm::Items* this$0, ::com::sun::tools::javac::code::Type* type, Object$* value);
	virtual ::com::sun::tools::javac::jvm::Items$Item* coerce(int32_t targetcode) override;
	bool isPosZero(float x);
	bool isPosZero(double x);
	void ldc();
	virtual ::com::sun::tools::javac::jvm::Items$Item* load() override;
	virtual ::com::sun::tools::javac::jvm::Items$CondItem* mkCond() override;
	::java::lang::Number* numericValue();
	virtual $String* toString() override;
	::com::sun::tools::javac::jvm::Items* this$0 = nullptr;
	::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant* value = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_Items$ImmediateItem_h_