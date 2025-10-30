#include <com/sun/tools/javac/jvm/Items$ImmediateItem.h>

#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$JCPrimitiveType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/jvm/Code.h>
#include <com/sun/tools/javac/jvm/Items$CondItem.h>
#include <com/sun/tools/javac/jvm/Items$Item.h>
#include <com/sun/tools/javac/jvm/Items.h>
#include <com/sun/tools/javac/jvm/PoolConstant$LoadableConstant$BasicConstant.h>
#include <com/sun/tools/javac/jvm/PoolConstant$LoadableConstant.h>
#include <com/sun/tools/javac/jvm/PoolConstant.h>
#include <com/sun/tools/javac/jvm/PoolWriter.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <java/io/Serializable.h>
#include <java/lang/Number.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/ToIntBiFunction.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_VALUE

using $Items$ItemArray = $Array<::com::sun::tools::javac::jvm::Items$Item>;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$JCPrimitiveType = ::com::sun::tools::javac::code::Type$JCPrimitiveType;
using $Code = ::com::sun::tools::javac::jvm::Code;
using $Items = ::com::sun::tools::javac::jvm::Items;
using $Items$CondItem = ::com::sun::tools::javac::jvm::Items$CondItem;
using $Items$Item = ::com::sun::tools::javac::jvm::Items$Item;
using $PoolConstant = ::com::sun::tools::javac::jvm::PoolConstant;
using $PoolConstant$LoadableConstant = ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant;
using $PoolConstant$LoadableConstant$BasicConstant = ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant$BasicConstant;
using $PoolWriter = ::com::sun::tools::javac::jvm::PoolWriter;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Serializable = ::java::io::Serializable;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $Short = ::java::lang::Short;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
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

class Items$ImmediateItem$$Lambda$putConstant : public $ToIntBiFunction {
	$class(Items$ImmediateItem$$Lambda$putConstant, $NO_CLASS_INIT, $ToIntBiFunction)
public:
	void init$() {
	}
	virtual int32_t applyAsInt(Object$* inst$, Object$* c) override {
		 return $sure($PoolWriter, inst$)->putConstant($cast($PoolConstant$LoadableConstant, c));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Items$ImmediateItem$$Lambda$putConstant>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Items$ImmediateItem$$Lambda$putConstant::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Items$ImmediateItem$$Lambda$putConstant::*)()>(&Items$ImmediateItem$$Lambda$putConstant::init$))},
	{"applyAsInt", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{}
};
$ClassInfo Items$ImmediateItem$$Lambda$putConstant::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.jvm.Items$ImmediateItem$$Lambda$putConstant",
	"java.lang.Object",
	"java.util.function.ToIntBiFunction",
	nullptr,
	methodInfos
};
$Class* Items$ImmediateItem$$Lambda$putConstant::load$($String* name, bool initialize) {
	$loadClass(Items$ImmediateItem$$Lambda$putConstant, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Items$ImmediateItem$$Lambda$putConstant::class$ = nullptr;

$FieldInfo _Items$ImmediateItem_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/Items;", nullptr, $FINAL | $SYNTHETIC, $field(Items$ImmediateItem, this$0)},
	{"value", "Lcom/sun/tools/javac/jvm/PoolConstant$LoadableConstant;", nullptr, $FINAL, $field(Items$ImmediateItem, value)},
	{}
};

$MethodInfo _Items$ImmediateItem_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/Items;Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(Items$ImmediateItem::*)($Items*,$Type*,Object$*)>(&Items$ImmediateItem::init$))},
	{"coerce", "(I)Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, 0},
	{"isPosZero", "(F)Z", nullptr, $PRIVATE, $method(static_cast<bool(Items$ImmediateItem::*)(float)>(&Items$ImmediateItem::isPosZero))},
	{"isPosZero", "(D)Z", nullptr, $PRIVATE, $method(static_cast<bool(Items$ImmediateItem::*)(double)>(&Items$ImmediateItem::isPosZero))},
	{"ldc", "()V", nullptr, $PRIVATE, $method(static_cast<void(Items$ImmediateItem::*)()>(&Items$ImmediateItem::ldc))},
	{"load", "()Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, 0},
	{"mkCond", "()Lcom/sun/tools/javac/jvm/Items$CondItem;", nullptr, 0},
	{"numericValue", "()Ljava/lang/Number;", nullptr, $PRIVATE, $method(static_cast<$Number*(Items$ImmediateItem::*)()>(&Items$ImmediateItem::numericValue))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Items$ImmediateItem_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.Items$ImmediateItem", "com.sun.tools.javac.jvm.Items", "ImmediateItem", 0},
	{"com.sun.tools.javac.jvm.Items$Item", "com.sun.tools.javac.jvm.Items", "Item", $ABSTRACT},
	{}
};

$ClassInfo _Items$ImmediateItem_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.Items$ImmediateItem",
	"com.sun.tools.javac.jvm.Items$Item",
	nullptr,
	_Items$ImmediateItem_FieldInfo_,
	_Items$ImmediateItem_MethodInfo_,
	nullptr,
	nullptr,
	_Items$ImmediateItem_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.Items"
};

$Object* allocate$Items$ImmediateItem($Class* clazz) {
	return $of($alloc(Items$ImmediateItem));
}

void Items$ImmediateItem::init$($Items* this$0, $Type* type, Object$* value) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$Items$Item::init$(this$0, $Code::typecode(type));
	switch (this->typecode) {
	case 5:
		{}
	case 7:
		{}
	case 6:
		{}
	case 0:
		{
			$set(this, value, $PoolConstant$LoadableConstant::Int($nc(($cast($Integer, value)))->intValue()));
			break;
		}
	case 1:
		{
			$set(this, value, $PoolConstant$LoadableConstant::Long($nc(($cast($Long, value)))->longValue()));
			break;
		}
	case 2:
		{
			$set(this, value, $PoolConstant$LoadableConstant::Float($nc(($cast($Float, value)))->floatValue()));
			break;
		}
	case 3:
		{
			$set(this, value, $PoolConstant$LoadableConstant::Double($nc(($cast($Double, value)))->doubleValue()));
			break;
		}
	case 4:
		{
			$set(this, value, $PoolConstant$LoadableConstant::String($cast($String, value)));
			break;
		}
	default:
		{
			$throwNew($UnsupportedOperationException, $$str({"unsupported tag: "_s, $$str(this->typecode)}));
		}
	}
}

void Items$ImmediateItem::ldc() {
	if (this->typecode == 1 || this->typecode == 3) {
		$nc(this->this$0->code)->emitop2(20, static_cast<$PoolConstant*>(this->value), static_cast<$ToIntBiFunction*>($$new(Items$ImmediateItem$$Lambda$putConstant)));
	} else {
		$nc(this->this$0->code)->emitLdc(this->value);
	}
}

$Number* Items$ImmediateItem::numericValue() {
	return $cast($Number, $nc(($cast($PoolConstant$LoadableConstant$BasicConstant, this->value)))->data);
}

$Items$Item* Items$ImmediateItem::load() {
	$useLocalCurrentObjectStackCache();
	{
		int32_t ival = 0;
		int64_t lval = 0;
		float fval = 0;
		double dval = 0;
		switch (this->typecode) {
		case 0:
			{}
		case 5:
			{}
		case 7:
			{}
		case 6:
			{
				ival = $nc($(numericValue()))->intValue();
				if (-1 <= ival && ival <= 5) {
					$nc(this->this$0->code)->emitop0(3 + ival);
				} else if ($Byte::MIN_VALUE <= ival && ival <= $Byte::MAX_VALUE) {
					$nc(this->this$0->code)->emitop1(16, ival);
				} else if ($Short::MIN_VALUE <= ival && ival <= $Short::MAX_VALUE) {
					$nc(this->this$0->code)->emitop2(17, ival);
				} else {
					ldc();
				}
				break;
			}
		case 1:
			{
				lval = $nc($(numericValue()))->longValue();
				if (lval == 0 || lval == 1) {
					$nc(this->this$0->code)->emitop0(9 + (int32_t)lval);
				} else {
					ldc();
				}
				break;
			}
		case 2:
			{
				fval = $nc($(numericValue()))->floatValue();
				if (isPosZero(fval) || fval == 1.0 || fval == 2.0) {
					$nc(this->this$0->code)->emitop0(11 + $cast(int32_t, fval));
				} else {
					ldc();
				}
				break;
			}
		case 3:
			{
				dval = $nc($(numericValue()))->doubleValue();
				if (isPosZero(dval) || dval == 1.0) {
					$nc(this->this$0->code)->emitop0(14 + $cast(int32_t, dval));
				} else {
					ldc();
				}
				break;
			}
		case 4:
			{
				ldc();
				break;
			}
		default:
			{
				$Assert::error();
			}
		}
	}
	return $nc(this->this$0->stackItem)->get(this->typecode);
}

bool Items$ImmediateItem::isPosZero(float x) {
	return x == 0.0f && 1.0f / x > 0.0f;
}

bool Items$ImmediateItem::isPosZero(double x) {
	return x == 0.0 && 1.0 / x > 0.0;
}

$Items$CondItem* Items$ImmediateItem::mkCond() {
	int32_t ival = $nc($(numericValue()))->intValue();
	return this->this$0->makeCondItem(ival != 0 ? 167 : 168);
}

$Items$Item* Items$ImmediateItem::coerce(int32_t targetcode) {
	$useLocalCurrentObjectStackCache();
	if (this->typecode == targetcode) {
		return this;
	} else {
		switch (targetcode) {
		case 0:
			{
				if ($Code::truncate(this->typecode) == 0) {
					return this;
				} else {
					return $new(Items$ImmediateItem, this->this$0, $nc(this->this$0->syms)->intType, $($Integer::valueOf($nc($(numericValue()))->intValue())));
				}
			}
		case 1:
			{
				return $new(Items$ImmediateItem, this->this$0, $nc(this->this$0->syms)->longType, $($Long::valueOf($nc($(numericValue()))->longValue())));
			}
		case 2:
			{
				return $new(Items$ImmediateItem, this->this$0, $nc(this->this$0->syms)->floatType, $($Float::valueOf($nc($(numericValue()))->floatValue())));
			}
		case 3:
			{
				return $new(Items$ImmediateItem, this->this$0, $nc(this->this$0->syms)->doubleType, $($Double::valueOf($nc($(numericValue()))->doubleValue())));
			}
		case 5:
			{
				return $new(Items$ImmediateItem, this->this$0, $nc(this->this$0->syms)->byteType, $($Integer::valueOf((int32_t)(int8_t)$nc($(numericValue()))->intValue())));
			}
		case 6:
			{
				return $new(Items$ImmediateItem, this->this$0, $nc(this->this$0->syms)->charType, $($Integer::valueOf((int32_t)(char16_t)$nc($(numericValue()))->intValue())));
			}
		case 7:
			{
				return $new(Items$ImmediateItem, this->this$0, $nc(this->this$0->syms)->shortType, $($Integer::valueOf((int32_t)(int16_t)$nc($(numericValue()))->intValue())));
			}
		default:
			{
				return $Items$Item::coerce(targetcode);
			}
		}
	}
}

$String* Items$ImmediateItem::toString() {
	return $str({"immediate("_s, this->value, ")"_s});
}

Items$ImmediateItem::Items$ImmediateItem() {
}

$Class* Items$ImmediateItem::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Items$ImmediateItem$$Lambda$putConstant::classInfo$.name)) {
			return Items$ImmediateItem$$Lambda$putConstant::load$(name, initialize);
		}
	}
	$loadClass(Items$ImmediateItem, name, initialize, &_Items$ImmediateItem_ClassInfo_, allocate$Items$ImmediateItem);
	return class$;
}

$Class* Items$ImmediateItem::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com