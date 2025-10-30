#include <com/sun/tools/javac/jvm/Items$LocalItem.h>

#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$JCPrimitiveType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/jvm/Code.h>
#include <com/sun/tools/javac/jvm/Items$Item.h>
#include <com/sun/tools/javac/jvm/Items.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <jcpp.h>

using $Items$ItemArray = $Array<::com::sun::tools::javac::jvm::Items$Item>;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$JCPrimitiveType = ::com::sun::tools::javac::code::Type$JCPrimitiveType;
using $Code = ::com::sun::tools::javac::jvm::Code;
using $Items = ::com::sun::tools::javac::jvm::Items;
using $Items$Item = ::com::sun::tools::javac::jvm::Items$Item;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _Items$LocalItem_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/Items;", nullptr, $FINAL | $SYNTHETIC, $field(Items$LocalItem, this$0)},
	{"reg", "I", nullptr, 0, $field(Items$LocalItem, reg)},
	{"type", "Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(Items$LocalItem, type)},
	{}
};

$MethodInfo _Items$LocalItem_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/Items;Lcom/sun/tools/javac/code/Type;I)V", nullptr, 0, $method(static_cast<void(Items$LocalItem::*)($Items*,$Type*,int32_t)>(&Items$LocalItem::init$))},
	{"incr", "(I)V", nullptr, 0},
	{"load", "()Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, 0},
	{"store", "()V", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Items$LocalItem_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.Items$LocalItem", "com.sun.tools.javac.jvm.Items", "LocalItem", 0},
	{"com.sun.tools.javac.jvm.Items$Item", "com.sun.tools.javac.jvm.Items", "Item", $ABSTRACT},
	{}
};

$ClassInfo _Items$LocalItem_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.Items$LocalItem",
	"com.sun.tools.javac.jvm.Items$Item",
	nullptr,
	_Items$LocalItem_FieldInfo_,
	_Items$LocalItem_MethodInfo_,
	nullptr,
	nullptr,
	_Items$LocalItem_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.Items"
};

$Object* allocate$Items$LocalItem($Class* clazz) {
	return $of($alloc(Items$LocalItem));
}

void Items$LocalItem::init$($Items* this$0, $Type* type, int32_t reg) {
	$set(this, this$0, this$0);
	$Items$Item::init$(this$0, $Code::typecode(type));
	$Assert::check(reg >= 0);
	$set(this, type, type);
	this->reg = reg;
}

$Items$Item* Items$LocalItem::load() {
	if (this->reg <= 3) {
		$nc(this->this$0->code)->emitop0(26 + $Code::truncate(this->typecode) * 4 + this->reg);
	} else {
		$nc(this->this$0->code)->emitop1w(21 + $Code::truncate(this->typecode), this->reg);
	}
	return $nc(this->this$0->stackItem)->get(this->typecode);
}

void Items$LocalItem::store() {
	if (this->reg <= 3) {
		$nc(this->this$0->code)->emitop0(59 + $Code::truncate(this->typecode) * 4 + this->reg);
	} else {
		$nc(this->this$0->code)->emitop1w(54 + $Code::truncate(this->typecode), this->reg);
	}
	$nc(this->this$0->code)->setDefined(this->reg);
}

void Items$LocalItem::incr(int32_t x) {
	$useLocalCurrentObjectStackCache();
	if (this->typecode == 0 && x >= -32768 && x <= 32767) {
		$nc(this->this$0->code)->emitop1w(132, this->reg, x);
	} else {
		load();
		if (x >= 0) {
			$nc($(this->this$0->makeImmediateItem($nc(this->this$0->syms)->intType, $($Integer::valueOf(x)))))->load();
			$nc(this->this$0->code)->emitop0(96);
		} else {
			$nc($(this->this$0->makeImmediateItem($nc(this->this$0->syms)->intType, $($Integer::valueOf(-x)))))->load();
			$nc(this->this$0->code)->emitop0(100);
		}
		$nc($(this->this$0->makeStackItem($nc(this->this$0->syms)->intType)))->coerce(this->typecode);
		store();
	}
}

$String* Items$LocalItem::toString() {
	return $str({"localItem(type="_s, this->type, "; reg="_s, $$str(this->reg), ")"_s});
}

Items$LocalItem::Items$LocalItem() {
}

$Class* Items$LocalItem::load$($String* name, bool initialize) {
	$loadClass(Items$LocalItem, name, initialize, &_Items$LocalItem_ClassInfo_, allocate$Items$LocalItem);
	return class$;
}

$Class* Items$LocalItem::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com