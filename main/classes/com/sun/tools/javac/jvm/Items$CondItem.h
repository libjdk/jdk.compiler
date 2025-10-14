#ifndef _com_sun_tools_javac_jvm_Items$CondItem_h_
#define _com_sun_tools_javac_jvm_Items$CondItem_h_
//$ class com.sun.tools.javac.jvm.Items$CondItem
//$ extends com.sun.tools.javac.jvm.Items$Item

#include <com/sun/tools/javac/jvm/Items$Item.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {
					class Code$Chain;
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
				namespace tree {
					class JCTree;
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

class $export Items$CondItem : public ::com::sun::tools::javac::jvm::Items$Item {
	$class(Items$CondItem, $NO_CLASS_INIT, ::com::sun::tools::javac::jvm::Items$Item)
public:
	Items$CondItem();
	void init$(::com::sun::tools::javac::jvm::Items* this$0, int32_t opcode, ::com::sun::tools::javac::jvm::Code$Chain* truejumps, ::com::sun::tools::javac::jvm::Code$Chain* falsejumps);
	virtual void drop() override;
	virtual void duplicate() override;
	virtual bool isFalse();
	virtual bool isTrue();
	virtual ::com::sun::tools::javac::jvm::Code$Chain* jumpFalse();
	virtual ::com::sun::tools::javac::jvm::Code$Chain* jumpTrue();
	virtual ::com::sun::tools::javac::jvm::Items$Item* load() override;
	virtual ::com::sun::tools::javac::jvm::Items$CondItem* mkCond() override;
	virtual ::com::sun::tools::javac::jvm::Items$CondItem* negate();
	virtual void stash(int32_t toscode) override;
	virtual $String* toString() override;
	virtual int32_t width() override;
	::com::sun::tools::javac::jvm::Items* this$0 = nullptr;
	::com::sun::tools::javac::jvm::Code$Chain* trueJumps = nullptr;
	::com::sun::tools::javac::jvm::Code$Chain* falseJumps = nullptr;
	int32_t opcode = 0;
	::com::sun::tools::javac::tree::JCTree* tree = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_Items$CondItem_h_