#include <com/sun/tools/javac/jvm/Items$IndexedItem.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/jvm/ByteCodes.h>
#include <com/sun/tools/javac/jvm/Code.h>
#include <com/sun/tools/javac/jvm/Items$Item.h>
#include <com/sun/tools/javac/jvm/Items.h>
#include <jcpp.h>

using $Items$ItemArray = $Array<::com::sun::tools::javac::jvm::Items$Item>;
using $Type = ::com::sun::tools::javac::code::Type;
using $ByteCodes = ::com::sun::tools::javac::jvm::ByteCodes;
using $Code = ::com::sun::tools::javac::jvm::Code;
using $Items = ::com::sun::tools::javac::jvm::Items;
using $Items$Item = ::com::sun::tools::javac::jvm::Items$Item;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _Items$IndexedItem_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/Items;", nullptr, $FINAL | $SYNTHETIC, $field(Items$IndexedItem, this$0)},
	{}
};

$MethodInfo _Items$IndexedItem_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/Items;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0, $method(static_cast<void(Items$IndexedItem::*)($Items*,$Type*)>(&Items$IndexedItem::init$))},
	{"drop", "()V", nullptr, 0},
	{"duplicate", "()V", nullptr, 0},
	{"load", "()Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, 0},
	{"stash", "(I)V", nullptr, 0},
	{"store", "()V", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"width", "()I", nullptr, 0},
	{}
};

$InnerClassInfo _Items$IndexedItem_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.Items$IndexedItem", "com.sun.tools.javac.jvm.Items", "IndexedItem", 0},
	{"com.sun.tools.javac.jvm.Items$Item", "com.sun.tools.javac.jvm.Items", "Item", $ABSTRACT},
	{}
};

$ClassInfo _Items$IndexedItem_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.Items$IndexedItem",
	"com.sun.tools.javac.jvm.Items$Item",
	nullptr,
	_Items$IndexedItem_FieldInfo_,
	_Items$IndexedItem_MethodInfo_,
	nullptr,
	nullptr,
	_Items$IndexedItem_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.Items"
};

$Object* allocate$Items$IndexedItem($Class* clazz) {
	return $of($alloc(Items$IndexedItem));
}

void Items$IndexedItem::init$($Items* this$0, $Type* type) {
	$set(this, this$0, this$0);
	$Items$Item::init$(this$0, $Code::typecode(type));
}

$Items$Item* Items$IndexedItem::load() {
	$nc(this->this$0->code)->emitop0(46 + this->typecode);
	return $nc(this->this$0->stackItem)->get(this->typecode);
}

void Items$IndexedItem::store() {
	$nc(this->this$0->code)->emitop0(79 + this->typecode);
}

void Items$IndexedItem::duplicate() {
	$nc(this->this$0->code)->emitop0(92);
}

void Items$IndexedItem::drop() {
	$nc(this->this$0->code)->emitop0(88);
}

void Items$IndexedItem::stash(int32_t toscode) {
	$nc(this->this$0->code)->emitop0(91 + 3 * ($Code::width(toscode) - 1));
}

int32_t Items$IndexedItem::width() {
	return 2;
}

$String* Items$IndexedItem::toString() {
	$init($ByteCodes);
	return $str({"indexed("_s, $nc($ByteCodes::typecodeNames)->get(this->typecode), ")"_s});
}

Items$IndexedItem::Items$IndexedItem() {
}

$Class* Items$IndexedItem::load$($String* name, bool initialize) {
	$loadClass(Items$IndexedItem, name, initialize, &_Items$IndexedItem_ClassInfo_, allocate$Items$IndexedItem);
	return class$;
}

$Class* Items$IndexedItem::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com