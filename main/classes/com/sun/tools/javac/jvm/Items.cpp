#include <com/sun/tools/javac/jvm/Items.h>

#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/jvm/Code$Chain.h>
#include <com/sun/tools/javac/jvm/Code.h>
#include <com/sun/tools/javac/jvm/Items$1.h>
#include <com/sun/tools/javac/jvm/Items$AssignItem.h>
#include <com/sun/tools/javac/jvm/Items$CondItem.h>
#include <com/sun/tools/javac/jvm/Items$DynamicItem.h>
#include <com/sun/tools/javac/jvm/Items$ImmediateItem.h>
#include <com/sun/tools/javac/jvm/Items$IndexedItem.h>
#include <com/sun/tools/javac/jvm/Items$Item.h>
#include <com/sun/tools/javac/jvm/Items$LocalItem.h>
#include <com/sun/tools/javac/jvm/Items$MemberItem.h>
#include <com/sun/tools/javac/jvm/Items$SelfItem.h>
#include <com/sun/tools/javac/jvm/Items$StackItem.h>
#include <com/sun/tools/javac/jvm/Items$StaticItem.h>
#include <com/sun/tools/javac/jvm/PoolWriter.h>
#include <jcpp.h>

using $Items$ItemArray = $Array<::com::sun::tools::javac::jvm::Items$Item>;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Code = ::com::sun::tools::javac::jvm::Code;
using $Code$Chain = ::com::sun::tools::javac::jvm::Code$Chain;
using $Items$1 = ::com::sun::tools::javac::jvm::Items$1;
using $Items$AssignItem = ::com::sun::tools::javac::jvm::Items$AssignItem;
using $Items$CondItem = ::com::sun::tools::javac::jvm::Items$CondItem;
using $Items$DynamicItem = ::com::sun::tools::javac::jvm::Items$DynamicItem;
using $Items$ImmediateItem = ::com::sun::tools::javac::jvm::Items$ImmediateItem;
using $Items$IndexedItem = ::com::sun::tools::javac::jvm::Items$IndexedItem;
using $Items$Item = ::com::sun::tools::javac::jvm::Items$Item;
using $Items$LocalItem = ::com::sun::tools::javac::jvm::Items$LocalItem;
using $Items$MemberItem = ::com::sun::tools::javac::jvm::Items$MemberItem;
using $Items$SelfItem = ::com::sun::tools::javac::jvm::Items$SelfItem;
using $Items$StackItem = ::com::sun::tools::javac::jvm::Items$StackItem;
using $Items$StaticItem = ::com::sun::tools::javac::jvm::Items$StaticItem;
using $PoolWriter = ::com::sun::tools::javac::jvm::PoolWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _Items_FieldInfo_[] = {
	{"poolWriter", "Lcom/sun/tools/javac/jvm/PoolWriter;", nullptr, 0, $field(Items, poolWriter)},
	{"code", "Lcom/sun/tools/javac/jvm/Code;", nullptr, 0, $field(Items, code)},
	{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, 0, $field(Items, syms)},
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, 0, $field(Items, types)},
	{"voidItem", "Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, $PRIVATE | $FINAL, $field(Items, voidItem)},
	{"thisItem", "Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, $PRIVATE | $FINAL, $field(Items, thisItem)},
	{"superItem", "Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, $PRIVATE | $FINAL, $field(Items, superItem)},
	{"stackItem", "[Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, $PRIVATE | $FINAL, $field(Items, stackItem)},
	{}
};

$MethodInfo _Items_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/PoolWriter;Lcom/sun/tools/javac/jvm/Code;Lcom/sun/tools/javac/code/Symtab;Lcom/sun/tools/javac/code/Types;)V", nullptr, $PUBLIC, $method(static_cast<void(Items::*)($PoolWriter*,$Code*,$Symtab*,$Types*)>(&Items::init$))},
	{"makeAssignItem", "(Lcom/sun/tools/javac/jvm/Items$Item;)Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, 0},
	{"makeCondItem", "(ILcom/sun/tools/javac/jvm/Code$Chain;Lcom/sun/tools/javac/jvm/Code$Chain;)Lcom/sun/tools/javac/jvm/Items$CondItem;", nullptr, 0},
	{"makeCondItem", "(I)Lcom/sun/tools/javac/jvm/Items$CondItem;", nullptr, 0},
	{"makeDynamicItem", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, 0},
	{"makeImmediateItem", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, 0},
	{"makeIndexedItem", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, 0},
	{"makeLocalItem", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;)Lcom/sun/tools/javac/jvm/Items$LocalItem;", nullptr, 0},
	{"makeLocalItem", "(Lcom/sun/tools/javac/code/Type;I)Lcom/sun/tools/javac/jvm/Items$LocalItem;", nullptr, $PRIVATE, $method(static_cast<$Items$LocalItem*(Items::*)($Type*,int32_t)>(&Items::makeLocalItem))},
	{"makeMemberItem", "(Lcom/sun/tools/javac/code/Symbol;Z)Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, 0},
	{"makeStackItem", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, 0},
	{"makeStaticItem", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, 0},
	{"makeSuperItem", "()Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, 0},
	{"makeThisItem", "()Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, 0},
	{"makeVoidItem", "()Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, 0},
	{}
};

$InnerClassInfo _Items_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.Items$CondItem", "com.sun.tools.javac.jvm.Items", "CondItem", 0},
	{"com.sun.tools.javac.jvm.Items$AssignItem", "com.sun.tools.javac.jvm.Items", "AssignItem", 0},
	{"com.sun.tools.javac.jvm.Items$ImmediateItem", "com.sun.tools.javac.jvm.Items", "ImmediateItem", 0},
	{"com.sun.tools.javac.jvm.Items$MemberItem", "com.sun.tools.javac.jvm.Items", "MemberItem", 0},
	{"com.sun.tools.javac.jvm.Items$DynamicItem", "com.sun.tools.javac.jvm.Items", "DynamicItem", 0},
	{"com.sun.tools.javac.jvm.Items$StaticItem", "com.sun.tools.javac.jvm.Items", "StaticItem", 0},
	{"com.sun.tools.javac.jvm.Items$LocalItem", "com.sun.tools.javac.jvm.Items", "LocalItem", 0},
	{"com.sun.tools.javac.jvm.Items$SelfItem", "com.sun.tools.javac.jvm.Items", "SelfItem", 0},
	{"com.sun.tools.javac.jvm.Items$IndexedItem", "com.sun.tools.javac.jvm.Items", "IndexedItem", 0},
	{"com.sun.tools.javac.jvm.Items$StackItem", "com.sun.tools.javac.jvm.Items", "StackItem", 0},
	{"com.sun.tools.javac.jvm.Items$Item", "com.sun.tools.javac.jvm.Items", "Item", $ABSTRACT},
	{"com.sun.tools.javac.jvm.Items$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Items_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.jvm.Items",
	"java.lang.Object",
	nullptr,
	_Items_FieldInfo_,
	_Items_MethodInfo_,
	nullptr,
	nullptr,
	_Items_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.Items$CondItem,com.sun.tools.javac.jvm.Items$AssignItem,com.sun.tools.javac.jvm.Items$ImmediateItem,com.sun.tools.javac.jvm.Items$MemberItem,com.sun.tools.javac.jvm.Items$DynamicItem,com.sun.tools.javac.jvm.Items$StaticItem,com.sun.tools.javac.jvm.Items$LocalItem,com.sun.tools.javac.jvm.Items$SelfItem,com.sun.tools.javac.jvm.Items$IndexedItem,com.sun.tools.javac.jvm.Items$StackItem,com.sun.tools.javac.jvm.Items$Item,com.sun.tools.javac.jvm.Items$1"
};

$Object* allocate$Items($Class* clazz) {
	return $of($alloc(Items));
}

void Items::init$($PoolWriter* poolWriter, $Code* code, $Symtab* syms, $Types* types) {
	$useLocalCurrentObjectStackCache();
	$set(this, stackItem, $new($Items$ItemArray, 9));
	$set(this, code, code);
	$set(this, poolWriter, poolWriter);
	$set(this, types, types);
	$set(this, voidItem, $new($Items$1, this, 8));
	$set(this, thisItem, $new($Items$SelfItem, this, false));
	$set(this, superItem, $new($Items$SelfItem, this, true));
	for (int32_t i = 0; i < 8; ++i) {
		$nc(this->stackItem)->set(i, $$new($Items$StackItem, this, i));
	}
	$nc(this->stackItem)->set(8, this->voidItem);
	$set(this, syms, syms);
}

$Items$Item* Items::makeVoidItem() {
	return this->voidItem;
}

$Items$Item* Items::makeThisItem() {
	return this->thisItem;
}

$Items$Item* Items::makeSuperItem() {
	return this->superItem;
}

$Items$Item* Items::makeStackItem($Type* type) {
	return $nc(this->stackItem)->get($Code::typecode(type));
}

$Items$Item* Items::makeDynamicItem($Symbol* member) {
	return $new($Items$DynamicItem, this, member);
}

$Items$Item* Items::makeIndexedItem($Type* type) {
	return $new($Items$IndexedItem, this, type);
}

$Items$LocalItem* Items::makeLocalItem($Symbol$VarSymbol* v) {
	return $new($Items$LocalItem, this, $($nc(v)->erasure(this->types)), v->adr);
}

$Items$LocalItem* Items::makeLocalItem($Type* type, int32_t reg) {
	return $new($Items$LocalItem, this, type, reg);
}

$Items$Item* Items::makeStaticItem($Symbol* member) {
	return $new($Items$StaticItem, this, member);
}

$Items$Item* Items::makeMemberItem($Symbol* member, bool nonvirtual) {
	return $new($Items$MemberItem, this, member, nonvirtual);
}

$Items$Item* Items::makeImmediateItem($Type* type, Object$* value) {
	return $new($Items$ImmediateItem, this, type, value);
}

$Items$Item* Items::makeAssignItem($Items$Item* lhs) {
	return $new($Items$AssignItem, this, lhs);
}

$Items$CondItem* Items::makeCondItem(int32_t opcode, $Code$Chain* trueJumps, $Code$Chain* falseJumps) {
	return $new($Items$CondItem, this, opcode, trueJumps, falseJumps);
}

$Items$CondItem* Items::makeCondItem(int32_t opcode) {
	return makeCondItem(opcode, nullptr, nullptr);
}

Items::Items() {
}

$Class* Items::load$($String* name, bool initialize) {
	$loadClass(Items, name, initialize, &_Items_ClassInfo_, allocate$Items);
	return class$;
}

$Class* Items::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com