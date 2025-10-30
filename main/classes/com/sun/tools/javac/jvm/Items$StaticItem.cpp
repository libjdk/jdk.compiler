#include <com/sun/tools/javac/jvm/Items$StaticItem.h>

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

using $Items$ItemArray = $Array<::com::sun::tools::javac::jvm::Items$Item>;
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

class Items$StaticItem$$Lambda$putMember : public $ToIntBiFunction {
	$class(Items$StaticItem$$Lambda$putMember, $NO_CLASS_INIT, $ToIntBiFunction)
public:
	void init$() {
	}
	virtual int32_t applyAsInt(Object$* inst$, Object$* s) override {
		 return $sure($PoolWriter, inst$)->putMember($cast($Symbol, s));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Items$StaticItem$$Lambda$putMember>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Items$StaticItem$$Lambda$putMember::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Items$StaticItem$$Lambda$putMember::*)()>(&Items$StaticItem$$Lambda$putMember::init$))},
	{"applyAsInt", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{}
};
$ClassInfo Items$StaticItem$$Lambda$putMember::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.jvm.Items$StaticItem$$Lambda$putMember",
	"java.lang.Object",
	"java.util.function.ToIntBiFunction",
	nullptr,
	methodInfos
};
$Class* Items$StaticItem$$Lambda$putMember::load$($String* name, bool initialize) {
	$loadClass(Items$StaticItem$$Lambda$putMember, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Items$StaticItem$$Lambda$putMember::class$ = nullptr;

$FieldInfo _Items$StaticItem_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/Items;", nullptr, $FINAL | $SYNTHETIC, $field(Items$StaticItem, this$0)},
	{"member", "Lcom/sun/tools/javac/code/Symbol;", nullptr, 0, $field(Items$StaticItem, member)},
	{}
};

$MethodInfo _Items$StaticItem_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/Items;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $method(static_cast<void(Items$StaticItem::*)($Items*,$Symbol*)>(&Items$StaticItem::init$))},
	{"invoke", "()Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, 0},
	{"load", "()Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, 0},
	{"store", "()V", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Items$StaticItem_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.Items$StaticItem", "com.sun.tools.javac.jvm.Items", "StaticItem", 0},
	{"com.sun.tools.javac.jvm.Items$Item", "com.sun.tools.javac.jvm.Items", "Item", $ABSTRACT},
	{}
};

$ClassInfo _Items$StaticItem_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.Items$StaticItem",
	"com.sun.tools.javac.jvm.Items$Item",
	nullptr,
	_Items$StaticItem_FieldInfo_,
	_Items$StaticItem_MethodInfo_,
	nullptr,
	nullptr,
	_Items$StaticItem_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.Items"
};

$Object* allocate$Items$StaticItem($Class* clazz) {
	return $of($alloc(Items$StaticItem));
}

void Items$StaticItem::init$($Items* this$0, $Symbol* member) {
	$set(this, this$0, this$0);
	$Items$Item::init$(this$0, $Code::typecode($($nc(member)->erasure(this$0->types))));
	$set(this, member, member);
}

$Items$Item* Items$StaticItem::load() {
	$nc(this->this$0->code)->emitop2(178, static_cast<$PoolConstant*>(this->member), static_cast<$ToIntBiFunction*>($$new(Items$StaticItem$$Lambda$putMember)));
	return $nc(this->this$0->stackItem)->get(this->typecode);
}

void Items$StaticItem::store() {
	$nc(this->this$0->code)->emitop2(179, static_cast<$PoolConstant*>(this->member), static_cast<$ToIntBiFunction*>($$new(Items$StaticItem$$Lambda$putMember)));
}

$Items$Item* Items$StaticItem::invoke() {
	$var($Type$MethodType, mtype, $cast($Type$MethodType, $nc(this->member)->erasure(this->this$0->types)));
	int32_t rescode = $Code::typecode($nc(mtype)->restype);
	$nc(this->this$0->code)->emitInvokestatic(this->member, mtype);
	return $nc(this->this$0->stackItem)->get(rescode);
}

$String* Items$StaticItem::toString() {
	return $str({"static("_s, this->member, ")"_s});
}

Items$StaticItem::Items$StaticItem() {
}

$Class* Items$StaticItem::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Items$StaticItem$$Lambda$putMember::classInfo$.name)) {
			return Items$StaticItem$$Lambda$putMember::load$(name, initialize);
		}
	}
	$loadClass(Items$StaticItem, name, initialize, &_Items$StaticItem_ClassInfo_, allocate$Items$StaticItem);
	return class$;
}

$Class* Items$StaticItem::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com