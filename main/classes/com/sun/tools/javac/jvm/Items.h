#ifndef _com_sun_tools_javac_jvm_Items_h_
#define _com_sun_tools_javac_jvm_Items_h_
//$ class com.sun.tools.javac.jvm.Items
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Symbol$VarSymbol;
					class Symtab;
					class Type;
					class Types;
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
					class Code;
					class Code$Chain;
					class Items$CondItem;
					class Items$Item;
					class Items$LocalItem;
					class PoolWriter;
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

class $export Items : public ::java::lang::Object {
	$class(Items, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Items();
	void init$(::com::sun::tools::javac::jvm::PoolWriter* poolWriter, ::com::sun::tools::javac::jvm::Code* code, ::com::sun::tools::javac::code::Symtab* syms, ::com::sun::tools::javac::code::Types* types);
	virtual ::com::sun::tools::javac::jvm::Items$Item* makeAssignItem(::com::sun::tools::javac::jvm::Items$Item* lhs);
	virtual ::com::sun::tools::javac::jvm::Items$CondItem* makeCondItem(int32_t opcode, ::com::sun::tools::javac::jvm::Code$Chain* trueJumps, ::com::sun::tools::javac::jvm::Code$Chain* falseJumps);
	virtual ::com::sun::tools::javac::jvm::Items$CondItem* makeCondItem(int32_t opcode);
	virtual ::com::sun::tools::javac::jvm::Items$Item* makeDynamicItem(::com::sun::tools::javac::code::Symbol* member);
	virtual ::com::sun::tools::javac::jvm::Items$Item* makeImmediateItem(::com::sun::tools::javac::code::Type* type, Object$* value);
	virtual ::com::sun::tools::javac::jvm::Items$Item* makeIndexedItem(::com::sun::tools::javac::code::Type* type);
	virtual ::com::sun::tools::javac::jvm::Items$LocalItem* makeLocalItem(::com::sun::tools::javac::code::Symbol$VarSymbol* v);
	::com::sun::tools::javac::jvm::Items$LocalItem* makeLocalItem(::com::sun::tools::javac::code::Type* type, int32_t reg);
	virtual ::com::sun::tools::javac::jvm::Items$Item* makeMemberItem(::com::sun::tools::javac::code::Symbol* member, bool nonvirtual);
	virtual ::com::sun::tools::javac::jvm::Items$Item* makeStackItem(::com::sun::tools::javac::code::Type* type);
	virtual ::com::sun::tools::javac::jvm::Items$Item* makeStaticItem(::com::sun::tools::javac::code::Symbol* member);
	virtual ::com::sun::tools::javac::jvm::Items$Item* makeSuperItem();
	virtual ::com::sun::tools::javac::jvm::Items$Item* makeThisItem();
	virtual ::com::sun::tools::javac::jvm::Items$Item* makeVoidItem();
	::com::sun::tools::javac::jvm::PoolWriter* poolWriter = nullptr;
	::com::sun::tools::javac::jvm::Code* code = nullptr;
	::com::sun::tools::javac::code::Symtab* syms = nullptr;
	::com::sun::tools::javac::code::Types* types = nullptr;
	::com::sun::tools::javac::jvm::Items$Item* voidItem = nullptr;
	::com::sun::tools::javac::jvm::Items$Item* thisItem = nullptr;
	::com::sun::tools::javac::jvm::Items$Item* superItem = nullptr;
	$Array<::com::sun::tools::javac::jvm::Items$Item>* stackItem = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_Items_h_