#include <com/sun/tools/javac/util/Bits.h>

#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Bits$1.h>
#include <com/sun/tools/javac/util/Bits$BitsState.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef NORMAL
#undef UNKNOWN

using $Assert = ::com::sun::tools::javac::util::Assert;
using $Bits$1 = ::com::sun::tools::javac::util::Bits$1;
using $Bits$BitsState = ::com::sun::tools::javac::util::Bits$BitsState;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _Bits_FieldInfo_[] = {
	{"wordlen", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Bits, wordlen)},
	{"wordshift", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Bits, wordshift)},
	{"wordmask", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Bits, wordmask)},
	{"bits", "[I", nullptr, $PUBLIC, $field(Bits, bits)},
	{"unassignedBits", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Bits, unassignedBits)},
	{"currentState", "Lcom/sun/tools/javac/util/Bits$BitsState;", nullptr, $PROTECTED, $field(Bits, currentState)},
	{}
};

$MethodInfo _Bits_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Bits::*)()>(&Bits::init$))},
	{"<init>", "(Lcom/sun/tools/javac/util/Bits;)V", nullptr, $PUBLIC, $method(static_cast<void(Bits::*)(Bits*)>(&Bits::init$))},
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(Bits::*)(bool)>(&Bits::init$))},
	{"<init>", "([ILcom/sun/tools/javac/util/Bits$BitsState;)V", nullptr, $PROTECTED, $method(static_cast<void(Bits::*)($ints*,$Bits$BitsState*)>(&Bits::init$))},
	{"andSet", "(Lcom/sun/tools/javac/util/Bits;)Lcom/sun/tools/javac/util/Bits;", nullptr, $PUBLIC},
	{"assign", "(Lcom/sun/tools/javac/util/Bits;)Lcom/sun/tools/javac/util/Bits;", nullptr, $PUBLIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"diffSet", "(Lcom/sun/tools/javac/util/Bits;)Lcom/sun/tools/javac/util/Bits;", nullptr, $PUBLIC},
	{"dup", "()Lcom/sun/tools/javac/util/Bits;", nullptr, $PUBLIC},
	{"dupBits", "()[I", nullptr, $PROTECTED},
	{"excl", "(I)V", nullptr, $PUBLIC},
	{"excludeFrom", "(I)V", nullptr, $PUBLIC},
	{"incl", "(I)V", nullptr, $PUBLIC},
	{"inclRange", "(II)V", nullptr, $PUBLIC},
	{"internalAndSet", "(Lcom/sun/tools/javac/util/Bits;)V", nullptr, $PROTECTED},
	{"internalReset", "()V", nullptr, $PROTECTED},
	{"isMember", "(I)Z", nullptr, $PUBLIC},
	{"isReset", "()Z", nullptr, $PUBLIC},
	{"nextBit", "(I)I", nullptr, $PUBLIC},
	{"orSet", "(Lcom/sun/tools/javac/util/Bits;)Lcom/sun/tools/javac/util/Bits;", nullptr, $PUBLIC},
	{"reset", "()V", nullptr, $PUBLIC},
	{"sizeTo", "(I)V", nullptr, $PROTECTED},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"trailingZeroBits", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&Bits::trailingZeroBits))},
	{"xorSet", "(Lcom/sun/tools/javac/util/Bits;)Lcom/sun/tools/javac/util/Bits;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Bits_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.Bits$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.util.Bits$BitsState", "com.sun.tools.javac.util.Bits", "BitsState", $PROTECTED | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Bits_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.Bits",
	"java.lang.Object",
	nullptr,
	_Bits_FieldInfo_,
	_Bits_MethodInfo_,
	nullptr,
	nullptr,
	_Bits_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.Bits$1,com.sun.tools.javac.util.Bits$BitsState"
};

$Object* allocate$Bits($Class* clazz) {
	return $of($alloc(Bits));
}

$ints* Bits::unassignedBits = nullptr;

void Bits::init$() {
	Bits::init$(false);
}

void Bits::init$(Bits* someBits) {
	$useLocalCurrentObjectStackCache();
	$var($ints, var$0, $nc($($nc(someBits)->dup()))->bits);
	Bits::init$(var$0, $($Bits$BitsState::getState(someBits->bits, false)));
}

void Bits::init$(bool reset) {
	Bits::init$(Bits::unassignedBits, $($Bits$BitsState::getState(Bits::unassignedBits, reset)));
}

void Bits::init$($ints* bits, $Bits$BitsState* initState) {
	$set(this, bits, nullptr);
	$set(this, bits, bits);
	$set(this, currentState, initState);
	$init($Bits$1);
	switch ($nc($Bits$1::$SwitchMap$com$sun$tools$javac$util$Bits$BitsState)->get($nc((initState))->ordinal())) {
	case 1:
		{
			$set(this, bits, nullptr);
			break;
		}
	case 2:
		{
			$Assert::check(bits != Bits::unassignedBits);
			break;
		}
	}
}

void Bits::sizeTo(int32_t len) {
	if ($nc(this->bits)->length < len) {
		$set(this, bits, $Arrays::copyOf(this->bits, len));
	}
}

void Bits::clear() {
	$init($Bits$BitsState);
	$Assert::check(this->currentState != $Bits$BitsState::UNKNOWN);
	for (int32_t i = 0; i < $nc(this->bits)->length; ++i) {
		$nc(this->bits)->set(i, 0);
	}
	$set(this, currentState, $Bits$BitsState::NORMAL);
}

void Bits::reset() {
	internalReset();
}

void Bits::internalReset() {
	$set(this, bits, nullptr);
	$init($Bits$BitsState);
	$set(this, currentState, $Bits$BitsState::UNKNOWN);
}

bool Bits::isReset() {
	$init($Bits$BitsState);
	return this->currentState == $Bits$BitsState::UNKNOWN;
}

Bits* Bits::assign(Bits* someBits) {
	$set(this, bits, $nc($($nc(someBits)->dup()))->bits);
	$init($Bits$BitsState);
	$set(this, currentState, $Bits$BitsState::NORMAL);
	return this;
}

Bits* Bits::dup() {
	$init($Bits$BitsState);
	$Assert::check(this->currentState != $Bits$BitsState::UNKNOWN);
	$var(Bits, tmp, $new(Bits));
	$set(tmp, bits, dupBits());
	$set(this, currentState, $Bits$BitsState::NORMAL);
	return tmp;
}

$ints* Bits::dupBits() {
	$var($ints, result, nullptr);
	$init($Bits$BitsState);
	if (this->currentState != $Bits$BitsState::NORMAL) {
		$assign(result, this->bits);
	} else {
		$assign(result, $new($ints, $nc(this->bits)->length));
		$System::arraycopy(this->bits, 0, result, 0, $nc(this->bits)->length);
	}
	return result;
}

void Bits::incl(int32_t x) {
	$init($Bits$BitsState);
	$Assert::check(this->currentState != $Bits$BitsState::UNKNOWN);
	$Assert::check(x >= 0);
	sizeTo(($usr(x, Bits::wordshift)) + 1);
	$nc(this->bits)->set($usr(x, Bits::wordshift), $nc(this->bits)->get($usr(x, Bits::wordshift)) | ($sl(1, (int32_t)(x & (uint32_t)Bits::wordmask))));
	$set(this, currentState, $Bits$BitsState::NORMAL);
}

void Bits::inclRange(int32_t start, int32_t limit) {
	$init($Bits$BitsState);
	$Assert::check(this->currentState != $Bits$BitsState::UNKNOWN);
	sizeTo(($usr(limit, Bits::wordshift)) + 1);
	for (int32_t x = start; x < limit; ++x) {
		$nc(this->bits)->set($usr(x, Bits::wordshift), $nc(this->bits)->get($usr(x, Bits::wordshift)) | ($sl(1, (int32_t)(x & (uint32_t)Bits::wordmask))));
	}
	$set(this, currentState, $Bits$BitsState::NORMAL);
}

void Bits::excludeFrom(int32_t start) {
	$init($Bits$BitsState);
	$Assert::check(this->currentState != $Bits$BitsState::UNKNOWN);
	$var(Bits, temp, $new(Bits));
	temp->sizeTo($nc(this->bits)->length);
	temp->inclRange(0, start);
	internalAndSet(temp);
	$set(this, currentState, $Bits$BitsState::NORMAL);
}

void Bits::excl(int32_t x) {
	$init($Bits$BitsState);
	$Assert::check(this->currentState != $Bits$BitsState::UNKNOWN);
	$Assert::check(x >= 0);
	sizeTo(($usr(x, Bits::wordshift)) + 1);
	$nc(this->bits)->set($usr(x, Bits::wordshift), (int32_t)($nc(this->bits)->get($usr(x, Bits::wordshift)) & (uint32_t)~($sl(1, (int32_t)(x & (uint32_t)Bits::wordmask)))));
	$set(this, currentState, $Bits$BitsState::NORMAL);
}

bool Bits::isMember(int32_t x) {
	$init($Bits$BitsState);
	$Assert::check(this->currentState != $Bits$BitsState::UNKNOWN);
	return 0 <= x && x < ($sl($nc(this->bits)->length, Bits::wordshift)) && ((int32_t)($nc(this->bits)->get($usr(x, Bits::wordshift)) & (uint32_t)($sl(1, (int32_t)(x & (uint32_t)Bits::wordmask))))) != 0;
}

Bits* Bits::andSet(Bits* xs) {
	$init($Bits$BitsState);
	$Assert::check(this->currentState != $Bits$BitsState::UNKNOWN);
	internalAndSet(xs);
	$set(this, currentState, $Bits$BitsState::NORMAL);
	return this;
}

void Bits::internalAndSet(Bits* xs) {
	$init($Bits$BitsState);
	$Assert::check(this->currentState != $Bits$BitsState::UNKNOWN);
	sizeTo($nc($nc(xs)->bits)->length);
	for (int32_t i = 0; i < $nc($nc(xs)->bits)->length; ++i) {
		$nc(this->bits)->set(i, (int32_t)($nc(this->bits)->get(i) & (uint32_t)$nc(xs->bits)->get(i)));
	}
}

Bits* Bits::orSet(Bits* xs) {
	$init($Bits$BitsState);
	$Assert::check(this->currentState != $Bits$BitsState::UNKNOWN);
	sizeTo($nc($nc(xs)->bits)->length);
	for (int32_t i = 0; i < $nc($nc(xs)->bits)->length; ++i) {
		$nc(this->bits)->set(i, $nc(this->bits)->get(i) | $nc(xs->bits)->get(i));
	}
	$set(this, currentState, $Bits$BitsState::NORMAL);
	return this;
}

Bits* Bits::diffSet(Bits* xs) {
	$init($Bits$BitsState);
	$Assert::check(this->currentState != $Bits$BitsState::UNKNOWN);
	for (int32_t i = 0; i < $nc(this->bits)->length; ++i) {
		if (i < $nc($nc(xs)->bits)->length) {
			$nc(this->bits)->set(i, (int32_t)($nc(this->bits)->get(i) & (uint32_t)~$nc(xs->bits)->get(i)));
		}
	}
	$set(this, currentState, $Bits$BitsState::NORMAL);
	return this;
}

Bits* Bits::xorSet(Bits* xs) {
	$init($Bits$BitsState);
	$Assert::check(this->currentState != $Bits$BitsState::UNKNOWN);
	sizeTo($nc($nc(xs)->bits)->length);
	for (int32_t i = 0; i < $nc($nc(xs)->bits)->length; ++i) {
		$nc(this->bits)->set(i, $nc(this->bits)->get(i) ^ $nc(xs->bits)->get(i));
	}
	$set(this, currentState, $Bits$BitsState::NORMAL);
	return this;
}

int32_t Bits::trailingZeroBits(int32_t x) {
	$init(Bits);
	$Assert::check(Bits::wordlen == 32);
	if (x == 0) {
		return 32;
	}
	int32_t n = 1;
	if (((int32_t)(x & (uint32_t)0x0000FFFF)) == 0) {
		n += 16;
		$usrAssign(x, 16);
	}
	if (((int32_t)(x & (uint32_t)255)) == 0) {
		n += 8;
		$usrAssign(x, 8);
	}
	if (((int32_t)(x & (uint32_t)15)) == 0) {
		n += 4;
		$usrAssign(x, 4);
	}
	if (((int32_t)(x & (uint32_t)3)) == 0) {
		n += 2;
		$usrAssign(x, 2);
	}
	return n - ((int32_t)(x & (uint32_t)1));
}

int32_t Bits::nextBit(int32_t x) {
	$init($Bits$BitsState);
	$Assert::check(this->currentState != $Bits$BitsState::UNKNOWN);
	int32_t windex = $usr(x, Bits::wordshift);
	if (windex >= $nc(this->bits)->length) {
		return -1;
	}
	int32_t word = (int32_t)($nc(this->bits)->get(windex) & (uint32_t)~(($sl(1, (int32_t)(x & (uint32_t)Bits::wordmask))) - 1));
	while (true) {
		if (word != 0) {
			return ($sl(windex, Bits::wordshift)) + trailingZeroBits(word);
		}
		++windex;
		if (windex >= $nc(this->bits)->length) {
			return -1;
		}
		word = $nc(this->bits)->get(windex);
	}
}

$String* Bits::toString() {
	if (this->bits != nullptr && $nc(this->bits)->length > 0) {
		$var($chars, digits, $new($chars, $nc(this->bits)->length * Bits::wordlen));
		for (int32_t i = 0; i < $nc(this->bits)->length * Bits::wordlen; ++i) {
			digits->set(i, isMember(i) ? u'1' : u'0');
		}
		return $new($String, digits);
	} else {
		return "[]"_s;
	}
}

void clinit$Bits($Class* class$) {
	$assignStatic(Bits::unassignedBits, $new($ints, 0));
}

Bits::Bits() {
}

$Class* Bits::load$($String* name, bool initialize) {
	$loadClass(Bits, name, initialize, &_Bits_ClassInfo_, clinit$Bits, allocate$Bits);
	return class$;
}

$Class* Bits::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com