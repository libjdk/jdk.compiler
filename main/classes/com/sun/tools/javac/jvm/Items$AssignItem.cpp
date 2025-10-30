#include <com/sun/tools/javac/jvm/Items$AssignItem.h>

#include <com/sun/tools/javac/jvm/Code.h>
#include <com/sun/tools/javac/jvm/Items$Item.h>
#include <com/sun/tools/javac/jvm/Items.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <jcpp.h>

using $Items$ItemArray = $Array<::com::sun::tools::javac::jvm::Items$Item>;
using $Code = ::com::sun::tools::javac::jvm::Code;
using $Items = ::com::sun::tools::javac::jvm::Items;
using $Items$Item = ::com::sun::tools::javac::jvm::Items$Item;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _Items$AssignItem_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/Items;", nullptr, $FINAL | $SYNTHETIC, $field(Items$AssignItem, this$0)},
	{"lhs", "Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, 0, $field(Items$AssignItem, lhs)},
	{}
};

$MethodInfo _Items$AssignItem_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/Items;Lcom/sun/tools/javac/jvm/Items$Item;)V", nullptr, 0, $method(static_cast<void(Items$AssignItem::*)($Items*,$Items$Item*)>(&Items$AssignItem::init$))},
	{"drop", "()V", nullptr, 0},
	{"duplicate", "()V", nullptr, 0},
	{"load", "()Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, 0},
	{"stash", "(I)V", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"width", "()I", nullptr, 0},
	{}
};

$InnerClassInfo _Items$AssignItem_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.Items$AssignItem", "com.sun.tools.javac.jvm.Items", "AssignItem", 0},
	{"com.sun.tools.javac.jvm.Items$Item", "com.sun.tools.javac.jvm.Items", "Item", $ABSTRACT},
	{}
};

$ClassInfo _Items$AssignItem_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.Items$AssignItem",
	"com.sun.tools.javac.jvm.Items$Item",
	nullptr,
	_Items$AssignItem_FieldInfo_,
	_Items$AssignItem_MethodInfo_,
	nullptr,
	nullptr,
	_Items$AssignItem_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.Items"
};

$Object* allocate$Items$AssignItem($Class* clazz) {
	return $of($alloc(Items$AssignItem));
}

void Items$AssignItem::init$($Items* this$0, $Items$Item* lhs) {
	$set(this, this$0, this$0);
	$Items$Item::init$(this$0, $nc(lhs)->typecode);
	$set(this, lhs, lhs);
}

$Items$Item* Items$AssignItem::load() {
	$nc(this->lhs)->stash(this->typecode);
	$nc(this->lhs)->store();
	return $nc(this->this$0->stackItem)->get(this->typecode);
}

void Items$AssignItem::duplicate() {
	$nc($(load()))->duplicate();
}

void Items$AssignItem::drop() {
	$nc(this->lhs)->store();
}

void Items$AssignItem::stash(int32_t toscode) {
	$Assert::error();
}

int32_t Items$AssignItem::width() {
	int32_t var$0 = $nc(this->lhs)->width();
	return var$0 + $Code::width(this->typecode);
}

$String* Items$AssignItem::toString() {
	return $str({"assign(lhs = "_s, this->lhs, ")"_s});
}

Items$AssignItem::Items$AssignItem() {
}

$Class* Items$AssignItem::load$($String* name, bool initialize) {
	$loadClass(Items$AssignItem, name, initialize, &_Items$AssignItem_ClassInfo_, allocate$Items$AssignItem);
	return class$;
}

$Class* Items$AssignItem::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com