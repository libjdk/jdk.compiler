#include <com/sun/tools/javac/jvm/Items$CondItem.h>

#include <com/sun/tools/javac/jvm/CRTable.h>
#include <com/sun/tools/javac/jvm/Code$Chain.h>
#include <com/sun/tools/javac/jvm/Code.h>
#include <com/sun/tools/javac/jvm/Items$Item.h>
#include <com/sun/tools/javac/jvm/Items.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <java/lang/AssertionError.h>
#include <jcpp.h>

#undef CRT_BRANCH_FALSE
#undef CRT_BRANCH_TRUE

using $Items$ItemArray = $Array<::com::sun::tools::javac::jvm::Items$Item>;
using $CRTable = ::com::sun::tools::javac::jvm::CRTable;
using $Code = ::com::sun::tools::javac::jvm::Code;
using $Code$Chain = ::com::sun::tools::javac::jvm::Code$Chain;
using $Items = ::com::sun::tools::javac::jvm::Items;
using $Items$Item = ::com::sun::tools::javac::jvm::Items$Item;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _Items$CondItem_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/Items;", nullptr, $FINAL | $SYNTHETIC, $field(Items$CondItem, this$0)},
	{"trueJumps", "Lcom/sun/tools/javac/jvm/Code$Chain;", nullptr, 0, $field(Items$CondItem, trueJumps)},
	{"falseJumps", "Lcom/sun/tools/javac/jvm/Code$Chain;", nullptr, 0, $field(Items$CondItem, falseJumps)},
	{"opcode", "I", nullptr, 0, $field(Items$CondItem, opcode)},
	{"tree", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, 0, $field(Items$CondItem, tree)},
	{}
};

$MethodInfo _Items$CondItem_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/Items;ILcom/sun/tools/javac/jvm/Code$Chain;Lcom/sun/tools/javac/jvm/Code$Chain;)V", nullptr, 0, $method(static_cast<void(Items$CondItem::*)($Items*,int32_t,$Code$Chain*,$Code$Chain*)>(&Items$CondItem::init$))},
	{"drop", "()V", nullptr, 0},
	{"duplicate", "()V", nullptr, 0},
	{"isFalse", "()Z", nullptr, 0},
	{"isTrue", "()Z", nullptr, 0},
	{"jumpFalse", "()Lcom/sun/tools/javac/jvm/Code$Chain;", nullptr, 0},
	{"jumpTrue", "()Lcom/sun/tools/javac/jvm/Code$Chain;", nullptr, 0},
	{"load", "()Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, 0},
	{"mkCond", "()Lcom/sun/tools/javac/jvm/Items$CondItem;", nullptr, 0},
	{"negate", "()Lcom/sun/tools/javac/jvm/Items$CondItem;", nullptr, 0},
	{"stash", "(I)V", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"width", "()I", nullptr, 0},
	{}
};

$InnerClassInfo _Items$CondItem_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.Items$CondItem", "com.sun.tools.javac.jvm.Items", "CondItem", 0},
	{"com.sun.tools.javac.jvm.Items$Item", "com.sun.tools.javac.jvm.Items", "Item", $ABSTRACT},
	{}
};

$ClassInfo _Items$CondItem_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.Items$CondItem",
	"com.sun.tools.javac.jvm.Items$Item",
	nullptr,
	_Items$CondItem_FieldInfo_,
	_Items$CondItem_MethodInfo_,
	nullptr,
	nullptr,
	_Items$CondItem_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.Items"
};

$Object* allocate$Items$CondItem($Class* clazz) {
	return $of($alloc(Items$CondItem));
}

void Items$CondItem::init$($Items* this$0, int32_t opcode, $Code$Chain* truejumps, $Code$Chain* falsejumps) {
	$set(this, this$0, this$0);
	$Items$Item::init$(this$0, 5);
	this->opcode = opcode;
	$set(this, trueJumps, truejumps);
	$set(this, falseJumps, falsejumps);
}

$Items$Item* Items$CondItem::load() {
	$useLocalCurrentObjectStackCache();
	$var($Code$Chain, trueChain, nullptr);
	$var($Code$Chain, falseChain, jumpFalse());
	if (!isFalse()) {
		$nc(this->this$0->code)->resolve(this->trueJumps);
		$nc(this->this$0->code)->emitop0(4);
		$assign(trueChain, $nc(this->this$0->code)->branch(167));
	}
	if (falseChain != nullptr) {
		$nc(this->this$0->code)->resolve(falseChain);
		$nc(this->this$0->code)->emitop0(3);
	}
	$nc(this->this$0->code)->resolve(trueChain);
	return $nc(this->this$0->stackItem)->get(this->typecode);
}

void Items$CondItem::duplicate() {
	$nc($(load()))->duplicate();
}

void Items$CondItem::drop() {
	$nc($(load()))->drop();
}

void Items$CondItem::stash(int32_t toscode) {
	$Assert::error();
}

Items$CondItem* Items$CondItem::mkCond() {
	return this;
}

$Code$Chain* Items$CondItem::jumpTrue() {
	$useLocalCurrentObjectStackCache();
	if (this->tree == nullptr) {
		return $Code::mergeChains(this->trueJumps, $($nc(this->this$0->code)->branch(this->opcode)));
	}
	int32_t startpc = $nc(this->this$0->code)->curCP();
	$var($Code$Chain, c, $Code::mergeChains(this->trueJumps, $($nc(this->this$0->code)->branch(this->opcode))));
	$nc($nc(this->this$0->code)->crt)->put(this->tree, $CRTable::CRT_BRANCH_TRUE, startpc, $nc(this->this$0->code)->curCP());
	return c;
}

$Code$Chain* Items$CondItem::jumpFalse() {
	$useLocalCurrentObjectStackCache();
	if (this->tree == nullptr) {
		return $Code::mergeChains(this->falseJumps, $($nc(this->this$0->code)->branch($Code::negate(this->opcode))));
	}
	int32_t startpc = $nc(this->this$0->code)->curCP();
	$var($Code$Chain, c, $Code::mergeChains(this->falseJumps, $($nc(this->this$0->code)->branch($Code::negate(this->opcode)))));
	$nc($nc(this->this$0->code)->crt)->put(this->tree, $CRTable::CRT_BRANCH_FALSE, startpc, $nc(this->this$0->code)->curCP());
	return c;
}

Items$CondItem* Items$CondItem::negate() {
	$var(Items$CondItem, c, $new(Items$CondItem, this->this$0, $Code::negate(this->opcode), this->falseJumps, this->trueJumps));
	$set(c, tree, this->tree);
	return c;
}

int32_t Items$CondItem::width() {
	$throwNew($AssertionError);
	$shouldNotReachHere();
}

bool Items$CondItem::isTrue() {
	return this->falseJumps == nullptr && this->opcode == 167;
}

bool Items$CondItem::isFalse() {
	return this->trueJumps == nullptr && this->opcode == 168;
}

$String* Items$CondItem::toString() {
	return $str({"cond("_s, $($Code::mnem(this->opcode)), ")"_s});
}

Items$CondItem::Items$CondItem() {
}

$Class* Items$CondItem::load$($String* name, bool initialize) {
	$loadClass(Items$CondItem, name, initialize, &_Items$CondItem_ClassInfo_, allocate$Items$CondItem);
	return class$;
}

$Class* Items$CondItem::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com