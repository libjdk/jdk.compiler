#ifndef _com_sun_tools_javac_jvm_Items$Item_h_
#define _com_sun_tools_javac_jvm_Items$Item_h_
//$ class com.sun.tools.javac.jvm.Items$Item
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $import Items$Item : public ::java::lang::Object {
	$class(Items$Item, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Items$Item();
	void init$(::com::sun::tools::javac::jvm::Items* this$0, int32_t typecode);
	virtual ::com::sun::tools::javac::jvm::Items$Item* coerce(int32_t targetcode);
	virtual ::com::sun::tools::javac::jvm::Items$Item* coerce(::com::sun::tools::javac::code::Type* targettype);
	virtual void drop();
	virtual void duplicate();
	virtual ::com::sun::tools::javac::jvm::Items$Item* invoke();
	virtual ::com::sun::tools::javac::jvm::Items$Item* load();
	virtual ::com::sun::tools::javac::jvm::Items$CondItem* mkCond();
	virtual void stash(int32_t toscode);
	virtual void store();
	virtual $String* toString() override;
	virtual int32_t width();
	::com::sun::tools::javac::jvm::Items* this$0 = nullptr;
	int32_t typecode = 0;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_Items$Item_h_