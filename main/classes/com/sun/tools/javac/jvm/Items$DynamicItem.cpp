#include <com/sun/tools/javac/jvm/Items$DynamicItem.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$DynamicMethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$DynamicVarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/jvm/Code.h>
#include <com/sun/tools/javac/jvm/Items$Item.h>
#include <com/sun/tools/javac/jvm/Items$StaticItem.h>
#include <com/sun/tools/javac/jvm/Items.h>
#include <com/sun/tools/javac/jvm/PoolConstant$LoadableConstant.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <jcpp.h>

#undef MTH
#undef VAR

using $Items$ItemArray = $Array<::com::sun::tools::javac::jvm::Items$Item>;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$DynamicMethodSymbol = ::com::sun::tools::javac::code::Symbol$DynamicMethodSymbol;
using $Symbol$DynamicVarSymbol = ::com::sun::tools::javac::code::Symbol$DynamicVarSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Types = ::com::sun::tools::javac::code::Types;
using $Code = ::com::sun::tools::javac::jvm::Code;
using $Items = ::com::sun::tools::javac::jvm::Items;
using $Items$Item = ::com::sun::tools::javac::jvm::Items$Item;
using $Items$StaticItem = ::com::sun::tools::javac::jvm::Items$StaticItem;
using $PoolConstant$LoadableConstant = ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant;
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

$FieldInfo _Items$DynamicItem_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/Items;", nullptr, $FINAL | $SYNTHETIC, $field(Items$DynamicItem, this$0)},
	{}
};

$MethodInfo _Items$DynamicItem_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/Items;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $method(static_cast<void(Items$DynamicItem::*)($Items*,$Symbol*)>(&Items$DynamicItem::init$))},
	{"invoke", "()Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, 0},
	{"load", "()Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, 0},
	{"store", "()V", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Items$DynamicItem_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.Items$DynamicItem", "com.sun.tools.javac.jvm.Items", "DynamicItem", 0},
	{"com.sun.tools.javac.jvm.Items$StaticItem", "com.sun.tools.javac.jvm.Items", "StaticItem", 0},
	{}
};

$ClassInfo _Items$DynamicItem_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.Items$DynamicItem",
	"com.sun.tools.javac.jvm.Items$StaticItem",
	nullptr,
	_Items$DynamicItem_FieldInfo_,
	_Items$DynamicItem_MethodInfo_,
	nullptr,
	nullptr,
	_Items$DynamicItem_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.Items"
};

$Object* allocate$Items$DynamicItem($Class* clazz) {
	return $of($alloc(Items$DynamicItem));
}

void Items$DynamicItem::init$($Items* this$0, $Symbol* member) {
	$set(this, this$0, this$0);
	$Items$StaticItem::init$(this$0, member);
}

$Items$Item* Items$DynamicItem::load() {
	$init($Kinds$Kind);
	$Assert::check($nc(this->member)->kind == $Kinds$Kind::VAR);
	$var($Type, type, $nc(this->member)->erasure(this->this$0->types));
	int32_t rescode = $Code::typecode(type);
	$nc(this->this$0->code)->emitLdc($cast($Symbol$DynamicVarSymbol, this->member));
	return $nc(this->this$0->stackItem)->get(rescode);
}

void Items$DynamicItem::store() {
	$Assert::error("this method shouldn\'t be invoked"_s);
}

$Items$Item* Items$DynamicItem::invoke() {
	$init($Kinds$Kind);
	$Assert::check($nc(this->member)->kind == $Kinds$Kind::MTH);
	$var($Type$MethodType, mtype, $cast($Type$MethodType, $nc(this->member)->erasure(this->this$0->types)));
	int32_t rescode = $Code::typecode($nc(mtype)->restype);
	$nc(this->this$0->code)->emitInvokedynamic($cast($Symbol$DynamicMethodSymbol, this->member), mtype);
	return $nc(this->this$0->stackItem)->get(rescode);
}

$String* Items$DynamicItem::toString() {
	return $str({"dynamic("_s, this->member, ")"_s});
}

Items$DynamicItem::Items$DynamicItem() {
}

$Class* Items$DynamicItem::load$($String* name, bool initialize) {
	$loadClass(Items$DynamicItem, name, initialize, &_Items$DynamicItem_ClassInfo_, allocate$Items$DynamicItem);
	return class$;
}

$Class* Items$DynamicItem::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com