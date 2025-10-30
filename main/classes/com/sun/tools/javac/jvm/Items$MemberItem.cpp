#include <com/sun/tools/javac/jvm/Items$MemberItem.h>

#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/jvm/Code.h>
#include <com/sun/tools/javac/jvm/Items$Item.h>
#include <com/sun/tools/javac/jvm/Items.h>
#include <com/sun/tools/javac/jvm/PoolConstant.h>
#include <com/sun/tools/javac/jvm/PoolWriter.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/ToIntBiFunction.h>
#include <jcpp.h>

#undef INTERFACE

using $Items$ItemArray = $Array<::com::sun::tools::javac::jvm::Items$Item>;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Types = ::com::sun::tools::javac::code::Types;
using $Code = ::com::sun::tools::javac::jvm::Code;
using $Items = ::com::sun::tools::javac::jvm::Items;
using $Items$Item = ::com::sun::tools::javac::jvm::Items$Item;
using $PoolConstant = ::com::sun::tools::javac::jvm::PoolConstant;
using $PoolWriter = ::com::sun::tools::javac::jvm::PoolWriter;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $ToIntBiFunction = ::java::util::function::ToIntBiFunction;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class Items$MemberItem$$Lambda$putMember : public $ToIntBiFunction {
	$class(Items$MemberItem$$Lambda$putMember, $NO_CLASS_INIT, $ToIntBiFunction)
public:
	void init$() {
	}
	virtual int32_t applyAsInt(Object$* inst$, Object$* s) override {
		 return $sure($PoolWriter, inst$)->putMember($cast($Symbol, s));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Items$MemberItem$$Lambda$putMember>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Items$MemberItem$$Lambda$putMember::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Items$MemberItem$$Lambda$putMember::*)()>(&Items$MemberItem$$Lambda$putMember::init$))},
	{"applyAsInt", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{}
};
$ClassInfo Items$MemberItem$$Lambda$putMember::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.jvm.Items$MemberItem$$Lambda$putMember",
	"java.lang.Object",
	"java.util.function.ToIntBiFunction",
	nullptr,
	methodInfos
};
$Class* Items$MemberItem$$Lambda$putMember::load$($String* name, bool initialize) {
	$loadClass(Items$MemberItem$$Lambda$putMember, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Items$MemberItem$$Lambda$putMember::class$ = nullptr;

$FieldInfo _Items$MemberItem_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/Items;", nullptr, $FINAL | $SYNTHETIC, $field(Items$MemberItem, this$0)},
	{"member", "Lcom/sun/tools/javac/code/Symbol;", nullptr, 0, $field(Items$MemberItem, member)},
	{"nonvirtual", "Z", nullptr, 0, $field(Items$MemberItem, nonvirtual)},
	{}
};

$MethodInfo _Items$MemberItem_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/Items;Lcom/sun/tools/javac/code/Symbol;Z)V", nullptr, 0, $method(static_cast<void(Items$MemberItem::*)($Items*,$Symbol*,bool)>(&Items$MemberItem::init$))},
	{"drop", "()V", nullptr, 0},
	{"duplicate", "()V", nullptr, 0},
	{"invoke", "()Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, 0},
	{"load", "()Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, 0},
	{"stash", "(I)V", nullptr, 0},
	{"store", "()V", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"width", "()I", nullptr, 0},
	{}
};

$InnerClassInfo _Items$MemberItem_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.Items$MemberItem", "com.sun.tools.javac.jvm.Items", "MemberItem", 0},
	{"com.sun.tools.javac.jvm.Items$Item", "com.sun.tools.javac.jvm.Items", "Item", $ABSTRACT},
	{}
};

$ClassInfo _Items$MemberItem_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.Items$MemberItem",
	"com.sun.tools.javac.jvm.Items$Item",
	nullptr,
	_Items$MemberItem_FieldInfo_,
	_Items$MemberItem_MethodInfo_,
	nullptr,
	nullptr,
	_Items$MemberItem_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.Items"
};

$Object* allocate$Items$MemberItem($Class* clazz) {
	return $of($alloc(Items$MemberItem));
}

void Items$MemberItem::init$($Items* this$0, $Symbol* member, bool nonvirtual) {
	$set(this, this$0, this$0);
	$Items$Item::init$(this$0, $Code::typecode($($nc(member)->erasure(this$0->types))));
	$set(this, member, member);
	this->nonvirtual = nonvirtual;
}

$Items$Item* Items$MemberItem::load() {
	$nc(this->this$0->code)->emitop2(180, static_cast<$PoolConstant*>(this->member), static_cast<$ToIntBiFunction*>($$new(Items$MemberItem$$Lambda$putMember)));
	return $nc(this->this$0->stackItem)->get(this->typecode);
}

void Items$MemberItem::store() {
	$nc(this->this$0->code)->emitop2(181, static_cast<$PoolConstant*>(this->member), static_cast<$ToIntBiFunction*>($$new(Items$MemberItem$$Lambda$putMember)));
}

$Items$Item* Items$MemberItem::invoke() {
	$var($Type$MethodType, mtype, $cast($Type$MethodType, $nc(this->member)->externalType(this->this$0->types)));
	int32_t rescode = $Code::typecode($nc(mtype)->restype);
	if (((int64_t)($nc($nc(this->member)->owner)->flags() & (uint64_t)(int64_t)$Flags::INTERFACE)) != 0 && !this->nonvirtual) {
		$nc(this->this$0->code)->emitInvokeinterface(this->member, mtype);
	} else if (this->nonvirtual) {
		$nc(this->this$0->code)->emitInvokespecial(this->member, mtype);
	} else {
		$nc(this->this$0->code)->emitInvokevirtual(this->member, mtype);
	}
	return $nc(this->this$0->stackItem)->get(rescode);
}

void Items$MemberItem::duplicate() {
	$nc($nc(this->this$0->stackItem)->get(4))->duplicate();
}

void Items$MemberItem::drop() {
	$nc($nc(this->this$0->stackItem)->get(4))->drop();
}

void Items$MemberItem::stash(int32_t toscode) {
	$nc($nc(this->this$0->stackItem)->get(4))->stash(toscode);
}

int32_t Items$MemberItem::width() {
	return 1;
}

$String* Items$MemberItem::toString() {
	return $str({"member("_s, this->member, (this->nonvirtual ? " nonvirtual)"_s : ")"_s)});
}

Items$MemberItem::Items$MemberItem() {
}

$Class* Items$MemberItem::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Items$MemberItem$$Lambda$putMember::classInfo$.name)) {
			return Items$MemberItem$$Lambda$putMember::load$(name, initialize);
		}
	}
	$loadClass(Items$MemberItem, name, initialize, &_Items$MemberItem_ClassInfo_, allocate$Items$MemberItem);
	return class$;
}

$Class* Items$MemberItem::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com