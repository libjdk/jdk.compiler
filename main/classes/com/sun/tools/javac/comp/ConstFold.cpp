#include <com/sun/tools/javac/comp/ConstFold.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$JCPrimitiveType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/comp/ConstFold$1.h>
#include <com/sun/tools/javac/jvm/ByteCodes.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <java/lang/Number.h>
#include <jcpp.h>

#undef BOOLEAN

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$JCPrimitiveType = ::com::sun::tools::javac::code::Type$JCPrimitiveType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $ConstFold$1 = ::com::sun::tools::javac::comp::ConstFold$1;
using $ByteCodes = ::com::sun::tools::javac::jvm::ByteCodes;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $ArithmeticException = ::java::lang::ArithmeticException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _ConstFold_FieldInfo_[] = {
	{"constFoldKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/comp/ConstFold;>;", $PROTECTED | $STATIC | $FINAL, $staticField(ConstFold, constFoldKey)},
	{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $PRIVATE, $field(ConstFold, syms)},
	{"minusOne", "Ljava/lang/Integer;", nullptr, $STATIC | $FINAL, $staticField(ConstFold, minusOne)},
	{"zero", "Ljava/lang/Integer;", nullptr, $STATIC | $FINAL, $staticField(ConstFold, zero)},
	{"one", "Ljava/lang/Integer;", nullptr, $STATIC | $FINAL, $staticField(ConstFold, one)},
	{}
};

$MethodInfo _ConstFold_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PRIVATE, $method(static_cast<void(ConstFold::*)($Context*)>(&ConstFold::init$))},
	{"b2i", "(Z)Ljava/lang/Integer;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Integer*(*)(bool)>(&ConstFold::b2i))},
	{"coerce", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"doubleValue", "(Ljava/lang/Object;)D", nullptr, $PRIVATE | $STATIC, $method(static_cast<double(*)(Object$*)>(&ConstFold::doubleValue))},
	{"floatValue", "(Ljava/lang/Object;)F", nullptr, $PRIVATE | $STATIC, $method(static_cast<float(*)(Object$*)>(&ConstFold::floatValue))},
	{"fold1", "(ILcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"fold2", "(ILcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/comp/ConstFold;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ConstFold*(*)($Context*)>(&ConstFold::instance))},
	{"intValue", "(Ljava/lang/Object;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(Object$*)>(&ConstFold::intValue))},
	{"longValue", "(Ljava/lang/Object;)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(Object$*)>(&ConstFold::longValue))},
	{}
};

$InnerClassInfo _ConstFold_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.ConstFold$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _ConstFold_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.ConstFold",
	"java.lang.Object",
	nullptr,
	_ConstFold_FieldInfo_,
	_ConstFold_MethodInfo_,
	nullptr,
	nullptr,
	_ConstFold_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.ConstFold$1"
};

$Object* allocate$ConstFold($Class* clazz) {
	return $of($alloc(ConstFold));
}

$Context$Key* ConstFold::constFoldKey = nullptr;
$Integer* ConstFold::minusOne = nullptr;
$Integer* ConstFold::zero = nullptr;
$Integer* ConstFold::one = nullptr;

ConstFold* ConstFold::instance($Context* context) {
	$init(ConstFold);
	$var(ConstFold, instance, $cast(ConstFold, $nc(context)->get(ConstFold::constFoldKey)));
	if (instance == nullptr) {
		$assign(instance, $new(ConstFold, context));
	}
	return instance;
}

void ConstFold::init$($Context* context) {
	$nc(context)->put(ConstFold::constFoldKey, $of(this));
	$set(this, syms, $Symtab::instance(context));
}

$Integer* ConstFold::b2i(bool b) {
	$init(ConstFold);
	return b ? ConstFold::one : ConstFold::zero;
}

int32_t ConstFold::intValue(Object$* x) {
	$init(ConstFold);
	return $nc(($cast($Number, x)))->intValue();
}

int64_t ConstFold::longValue(Object$* x) {
	$init(ConstFold);
	return $nc(($cast($Number, x)))->longValue();
}

float ConstFold::floatValue(Object$* x) {
	$init(ConstFold);
	return $nc(($cast($Number, x)))->floatValue();
}

double ConstFold::doubleValue(Object$* x) {
	$init(ConstFold);
	return $nc(($cast($Number, x)))->doubleValue();
}

$Type* ConstFold::fold1(int32_t opcode, $Type* operand) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($Object, od, $nc(operand)->constValue());
		switch (opcode) {
		case 0:
			{
				return operand;
			}
		case 116:
			{
				return $nc($nc(this->syms)->intType)->constType($($Integer::valueOf(-intValue(od))));
			}
		case 130:
			{
				return $nc($nc(this->syms)->intType)->constType($($Integer::valueOf(~intValue(od))));
			}
		case 257:
			{
				return $nc($nc(this->syms)->booleanType)->constType($(b2i(intValue(od) == 0)));
			}
		case 153:
			{
				return $nc($nc(this->syms)->booleanType)->constType($(b2i(intValue(od) == 0)));
			}
		case 154:
			{
				return $nc($nc(this->syms)->booleanType)->constType($(b2i(intValue(od) != 0)));
			}
		case 155:
			{
				return $nc($nc(this->syms)->booleanType)->constType($(b2i(intValue(od) < 0)));
			}
		case 157:
			{
				return $nc($nc(this->syms)->booleanType)->constType($(b2i(intValue(od) > 0)));
			}
		case 158:
			{
				return $nc($nc(this->syms)->booleanType)->constType($(b2i(intValue(od) <= 0)));
			}
		case 156:
			{
				return $nc($nc(this->syms)->booleanType)->constType($(b2i(intValue(od) >= 0)));
			}
		case 117:
			{
				return $nc($nc(this->syms)->longType)->constType($($Long::valueOf(-longValue(od))));
			}
		case 131:
			{
				return $nc($nc(this->syms)->longType)->constType($($Long::valueOf(~longValue(od))));
			}
		case 118:
			{
				return $nc($nc(this->syms)->floatType)->constType($($Float::valueOf(-floatValue(od))));
			}
		case 119:
			{
				return $nc($nc(this->syms)->doubleType)->constType($($Double::valueOf(-doubleValue(od))));
			}
		default:
			{
				return nullptr;
			}
		}
	} catch ($ArithmeticException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$Type* ConstFold::fold2(int32_t opcode, $Type* left, $Type* right) {
	$useLocalCurrentObjectStackCache();
	try {
		if (opcode > $ByteCodes::preMask) {
			$var($Type, t1, fold2($sr(opcode, $ByteCodes::preShift), left, right));
			return ($nc(t1)->constValue() == nullptr) ? t1 : fold1((int32_t)(opcode & (uint32_t)$ByteCodes::preMask), t1);
		} else {
			$var($Object, l, $nc(left)->constValue());
			$var($Object, r, $nc(right)->constValue());
			switch (opcode) {
			case 96:
				{
					int32_t var$0 = intValue(l);
					return $nc($nc(this->syms)->intType)->constType($($Integer::valueOf(var$0 + intValue(r))));
				}
			case 100:
				{
					int32_t var$1 = intValue(l);
					return $nc($nc(this->syms)->intType)->constType($($Integer::valueOf(var$1 - intValue(r))));
				}
			case 104:
				{
					int32_t var$2 = intValue(l);
					return $nc($nc(this->syms)->intType)->constType($($Integer::valueOf(var$2 * intValue(r))));
				}
			case 108:
				{
					int32_t var$3 = intValue(l);
					return $nc($nc(this->syms)->intType)->constType($($Integer::valueOf($div(var$3, intValue(r)))));
				}
			case 112:
				{
					int32_t var$4 = intValue(l);
					return $nc($nc(this->syms)->intType)->constType($($Integer::valueOf($mod(var$4, intValue(r)))));
				}
			case 126:
				{
					$init($TypeTag);
					int32_t var$5 = intValue(l);
					return $nc((left->hasTag($TypeTag::BOOLEAN) ? $nc(this->syms)->booleanType : $nc(this->syms)->intType))->constType($($Integer::valueOf((int32_t)(var$5 & (uint32_t)intValue(r)))));
				}
			case 258:
				{
					int32_t var$6 = intValue(l);
					return $nc($nc(this->syms)->booleanType)->constType($(b2i(((int32_t)(var$6 & (uint32_t)intValue(r))) != 0)));
				}
			case 128:
				{
					$init($TypeTag);
					int32_t var$7 = intValue(l);
					return $nc((left->hasTag($TypeTag::BOOLEAN) ? $nc(this->syms)->booleanType : $nc(this->syms)->intType))->constType($($Integer::valueOf(var$7 | intValue(r))));
				}
			case 259:
				{
					int32_t var$8 = intValue(l);
					return $nc($nc(this->syms)->booleanType)->constType($(b2i((var$8 | intValue(r)) != 0)));
				}
			case 130:
				{
					$init($TypeTag);
					int32_t var$9 = intValue(l);
					return $nc((left->hasTag($TypeTag::BOOLEAN) ? $nc(this->syms)->booleanType : $nc(this->syms)->intType))->constType($($Integer::valueOf(var$9 ^ intValue(r))));
				}
			case 120:
				{}
			case 270:
				{
					int32_t var$10 = intValue(l);
					return $nc($nc(this->syms)->intType)->constType($($Integer::valueOf($sl(var$10, intValue(r)))));
				}
			case 122:
				{}
			case 272:
				{
					int32_t var$11 = intValue(l);
					return $nc($nc(this->syms)->intType)->constType($($Integer::valueOf($sr(var$11, intValue(r)))));
				}
			case 124:
				{}
			case 274:
				{
					int32_t var$12 = intValue(l);
					return $nc($nc(this->syms)->intType)->constType($($Integer::valueOf($usr(var$12, intValue(r)))));
				}
			case 159:
				{
					int32_t var$13 = intValue(l);
					return $nc($nc(this->syms)->booleanType)->constType($(b2i(var$13 == intValue(r))));
				}
			case 160:
				{
					int32_t var$14 = intValue(l);
					return $nc($nc(this->syms)->booleanType)->constType($(b2i(var$14 != intValue(r))));
				}
			case 161:
				{
					int32_t var$15 = intValue(l);
					return $nc($nc(this->syms)->booleanType)->constType($(b2i(var$15 < intValue(r))));
				}
			case 163:
				{
					int32_t var$16 = intValue(l);
					return $nc($nc(this->syms)->booleanType)->constType($(b2i(var$16 > intValue(r))));
				}
			case 164:
				{
					int32_t var$17 = intValue(l);
					return $nc($nc(this->syms)->booleanType)->constType($(b2i(var$17 <= intValue(r))));
				}
			case 162:
				{
					int32_t var$18 = intValue(l);
					return $nc($nc(this->syms)->booleanType)->constType($(b2i(var$18 >= intValue(r))));
				}
			case 97:
				{
					int64_t var$19 = longValue(l);
					return $nc($nc(this->syms)->longType)->constType($($Long::valueOf(var$19 + longValue(r))));
				}
			case 101:
				{
					int64_t var$20 = longValue(l);
					return $nc($nc(this->syms)->longType)->constType($($Long::valueOf(var$20 - longValue(r))));
				}
			case 105:
				{
					int64_t var$21 = longValue(l);
					return $nc($nc(this->syms)->longType)->constType($($Long::valueOf(var$21 * longValue(r))));
				}
			case 109:
				{
					int64_t var$22 = longValue(l);
					return $nc($nc(this->syms)->longType)->constType($($Long::valueOf($div(var$22, longValue(r)))));
				}
			case 113:
				{
					int64_t var$23 = longValue(l);
					return $nc($nc(this->syms)->longType)->constType($($Long::valueOf($mod(var$23, longValue(r)))));
				}
			case 127:
				{
					int64_t var$24 = longValue(l);
					return $nc($nc(this->syms)->longType)->constType($($Long::valueOf((int64_t)(var$24 & (uint64_t)longValue(r)))));
				}
			case 129:
				{
					int64_t var$25 = longValue(l);
					return $nc($nc(this->syms)->longType)->constType($($Long::valueOf(var$25 | longValue(r))));
				}
			case 131:
				{
					int64_t var$26 = longValue(l);
					return $nc($nc(this->syms)->longType)->constType($($Long::valueOf(var$26 ^ longValue(r))));
				}
			case 121:
				{}
			case 271:
				{
					int64_t var$27 = longValue(l);
					return $nc($nc(this->syms)->longType)->constType($($Long::valueOf($sl(var$27, intValue(r)))));
				}
			case 123:
				{}
			case 273:
				{
					int64_t var$28 = longValue(l);
					return $nc($nc(this->syms)->longType)->constType($($Long::valueOf($sr(var$28, intValue(r)))));
				}
			case 125:
				{
					int64_t var$29 = longValue(l);
					return $nc($nc(this->syms)->longType)->constType($($Long::valueOf($usr(var$29, intValue(r)))));
				}
			case 148:
				{
					int64_t var$30 = longValue(l);
					if (var$30 < longValue(r)) {
						return $nc($nc(this->syms)->intType)->constType(ConstFold::minusOne);
					} else {
						int64_t var$32 = longValue(l);
						if (var$32 > longValue(r)) {
							return $nc($nc(this->syms)->intType)->constType(ConstFold::one);
						} else {
							return $nc($nc(this->syms)->intType)->constType(ConstFold::zero);
						}
					}
				}
			case 98:
				{
					float var$33 = floatValue(l);
					return $nc($nc(this->syms)->floatType)->constType($($Float::valueOf(var$33 + floatValue(r))));
				}
			case 102:
				{
					float var$34 = floatValue(l);
					return $nc($nc(this->syms)->floatType)->constType($($Float::valueOf(var$34 - floatValue(r))));
				}
			case 106:
				{
					float var$35 = floatValue(l);
					return $nc($nc(this->syms)->floatType)->constType($($Float::valueOf(var$35 * floatValue(r))));
				}
			case 110:
				{
					float var$36 = floatValue(l);
					return $nc($nc(this->syms)->floatType)->constType($($Float::valueOf(var$36 / floatValue(r))));
				}
			case 114:
				{
					return $nc($nc(this->syms)->floatType)->constType($($Float::valueOf($Float::mod(floatValue(l), floatValue(r)))));
				}
			case 150:
				{}
			case 149:
				{
					float var$37 = floatValue(l);
					if (var$37 < floatValue(r)) {
						return $nc($nc(this->syms)->intType)->constType(ConstFold::minusOne);
					} else {
						float var$39 = floatValue(l);
						if (var$39 > floatValue(r)) {
							return $nc($nc(this->syms)->intType)->constType(ConstFold::one);
						} else {
							float var$41 = floatValue(l);
							if (var$41 == floatValue(r)) {
								return $nc($nc(this->syms)->intType)->constType(ConstFold::zero);
							} else if (opcode == 150) {
								return $nc($nc(this->syms)->intType)->constType(ConstFold::one);
							} else {
								return $nc($nc(this->syms)->intType)->constType(ConstFold::minusOne);
							}
						}
					}
				}
			case 99:
				{
					double var$42 = doubleValue(l);
					return $nc($nc(this->syms)->doubleType)->constType($($Double::valueOf(var$42 + doubleValue(r))));
				}
			case 103:
				{
					double var$43 = doubleValue(l);
					return $nc($nc(this->syms)->doubleType)->constType($($Double::valueOf(var$43 - doubleValue(r))));
				}
			case 107:
				{
					double var$44 = doubleValue(l);
					return $nc($nc(this->syms)->doubleType)->constType($($Double::valueOf(var$44 * doubleValue(r))));
				}
			case 111:
				{
					double var$45 = doubleValue(l);
					return $nc($nc(this->syms)->doubleType)->constType($($Double::valueOf(var$45 / doubleValue(r))));
				}
			case 115:
				{
					return $nc($nc(this->syms)->doubleType)->constType($($Double::valueOf($Double::mod(doubleValue(l), doubleValue(r)))));
				}
			case 152:
				{}
			case 151:
				{
					double var$46 = doubleValue(l);
					if (var$46 < doubleValue(r)) {
						return $nc($nc(this->syms)->intType)->constType(ConstFold::minusOne);
					} else {
						double var$48 = doubleValue(l);
						if (var$48 > doubleValue(r)) {
							return $nc($nc(this->syms)->intType)->constType(ConstFold::one);
						} else {
							double var$50 = doubleValue(l);
							if (var$50 == doubleValue(r)) {
								return $nc($nc(this->syms)->intType)->constType(ConstFold::zero);
							} else if (opcode == 152) {
								return $nc($nc(this->syms)->intType)->constType(ConstFold::one);
							} else {
								return $nc($nc(this->syms)->intType)->constType(ConstFold::minusOne);
							}
						}
					}
				}
			case 165:
				{
					return $nc($nc(this->syms)->booleanType)->constType($(b2i($nc($of(l))->equals(r))));
				}
			case 166:
				{
					return $nc($nc(this->syms)->booleanType)->constType($(b2i(!$nc($of(l))->equals(r))));
				}
			case 256:
				{
					$var($String, var$51, $(left->stringValue()));
					return $nc($nc(this->syms)->stringType)->constType($$concat(var$51, $(right->stringValue())));
				}
			default:
				{
					return nullptr;
				}
			}
		}
	} catch ($ArithmeticException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$Type* ConstFold::coerce($Type* etype, $Type* ttype) {
	$useLocalCurrentObjectStackCache();
	if ($nc($nc(etype)->tsym)->type == $nc($nc(ttype)->tsym)->type) {
		return etype;
	}
	if ($nc(etype)->isNumeric()) {
		$var($Object, n, etype->constValue());
		$init($ConstFold$1);
		switch ($nc($ConstFold$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc(($($nc(ttype)->getTag())))->ordinal())) {
		case 1:
			{
				return $nc($nc(this->syms)->byteType)->constType($($Integer::valueOf(0 + (int8_t)intValue(n))));
			}
		case 2:
			{
				return $nc($nc(this->syms)->charType)->constType($($Integer::valueOf(0 + (char16_t)intValue(n))));
			}
		case 3:
			{
				return $nc($nc(this->syms)->shortType)->constType($($Integer::valueOf(0 + (int16_t)intValue(n))));
			}
		case 4:
			{
				return $nc($nc(this->syms)->intType)->constType($($Integer::valueOf(intValue(n))));
			}
		case 5:
			{
				return $nc($nc(this->syms)->longType)->constType($($Long::valueOf(longValue(n))));
			}
		case 6:
			{
				return $nc($nc(this->syms)->floatType)->constType($($Float::valueOf(floatValue(n))));
			}
		case 7:
			{
				return $nc($nc(this->syms)->doubleType)->constType($($Double::valueOf(doubleValue(n))));
			}
		}
	}
	return ttype;
}

void clinit$ConstFold($Class* class$) {
	$assignStatic(ConstFold::constFoldKey, $new($Context$Key));
	$assignStatic(ConstFold::minusOne, $Integer::valueOf(-1));
	$assignStatic(ConstFold::zero, $Integer::valueOf(0));
	$assignStatic(ConstFold::one, $Integer::valueOf(1));
}

ConstFold::ConstFold() {
}

$Class* ConstFold::load$($String* name, bool initialize) {
	$loadClass(ConstFold, name, initialize, &_ConstFold_ClassInfo_, clinit$ConstFold, allocate$ConstFold);
	return class$;
}

$Class* ConstFold::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com