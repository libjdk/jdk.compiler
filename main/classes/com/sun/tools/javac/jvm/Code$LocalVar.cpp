#include <com/sun/tools/javac/jvm/Code$LocalVar.h>

#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/jvm/Code$LocalVar$Range.h>
#include <com/sun/tools/javac/jvm/Code.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef MAX_VALUE

using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Code = ::com::sun::tools::javac::jvm::Code;
using $Code$LocalVar$Range = ::com::sun::tools::javac::jvm::Code$LocalVar$Range;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _Code$LocalVar_FieldInfo_[] = {
	{"sym", "Lcom/sun/tools/javac/code/Symbol$VarSymbol;", nullptr, $FINAL, $field(Code$LocalVar, sym)},
	{"reg", "C", nullptr, $FINAL, $field(Code$LocalVar, reg)},
	{"aliveRanges", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/javac/jvm/Code$LocalVar$Range;>;", 0, $field(Code$LocalVar, aliveRanges)},
	{}
};

$MethodInfo _Code$LocalVar_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;)V", nullptr, 0, $method(static_cast<void(Code$LocalVar::*)($Symbol$VarSymbol*)>(&Code$LocalVar::init$))},
	{"closeRange", "(C)V", nullptr, $PUBLIC},
	{"dup", "()Lcom/sun/tools/javac/jvm/Code$LocalVar;", nullptr, $PUBLIC},
	{"firstRange", "()Lcom/sun/tools/javac/jvm/Code$LocalVar$Range;", nullptr, 0},
	{"getWidestRange", "()Lcom/sun/tools/javac/jvm/Code$LocalVar$Range;", nullptr, $PUBLIC},
	{"hasOpenRange", "()Z", nullptr, $PUBLIC},
	{"isLastRangeInitialized", "()Z", nullptr, $PUBLIC},
	{"lastRange", "()Lcom/sun/tools/javac/jvm/Code$LocalVar$Range;", nullptr, 0},
	{"openRange", "(C)V", nullptr, $PUBLIC},
	{"removeLastRange", "()V", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Code$LocalVar_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.Code$LocalVar", "com.sun.tools.javac.jvm.Code", "LocalVar", $STATIC},
	{"com.sun.tools.javac.jvm.Code$LocalVar$Range", "com.sun.tools.javac.jvm.Code$LocalVar", "Range", 0},
	{}
};

$ClassInfo _Code$LocalVar_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.Code$LocalVar",
	"java.lang.Object",
	nullptr,
	_Code$LocalVar_FieldInfo_,
	_Code$LocalVar_MethodInfo_,
	nullptr,
	nullptr,
	_Code$LocalVar_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.Code"
};

$Object* allocate$Code$LocalVar($Class* clazz) {
	return $of($alloc(Code$LocalVar));
}

void Code$LocalVar::init$($Symbol$VarSymbol* v) {
	$set(this, aliveRanges, $new($ArrayList));
	$set(this, sym, v);
	this->reg = (char16_t)$nc(v)->adr;
}

Code$LocalVar* Code$LocalVar::dup() {
	return $new(Code$LocalVar, this->sym);
}

$Code$LocalVar$Range* Code$LocalVar::firstRange() {
	return $nc(this->aliveRanges)->isEmpty() ? ($Code$LocalVar$Range*)nullptr : $cast($Code$LocalVar$Range, $nc(this->aliveRanges)->get(0));
}

$Code$LocalVar$Range* Code$LocalVar::lastRange() {
	return $nc(this->aliveRanges)->isEmpty() ? ($Code$LocalVar$Range*)nullptr : $cast($Code$LocalVar$Range, $nc(this->aliveRanges)->get($nc(this->aliveRanges)->size() - 1));
}

void Code$LocalVar::removeLastRange() {
	$var($Code$LocalVar$Range, lastRange, this->lastRange());
	if (lastRange != nullptr) {
		$nc(this->aliveRanges)->remove($of(lastRange));
	}
}

$String* Code$LocalVar::toString() {
	$useLocalCurrentObjectStackCache();
	if (this->aliveRanges == nullptr) {
		return "empty local var"_s;
	}
	$var($StringBuilder, sb, $$new($StringBuilder)->append($of(this->sym))->append(" in register "_s)->append((int32_t)this->reg)->append(" \n"_s));
	{
		$var($Iterator, i$, $nc(this->aliveRanges)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Code$LocalVar$Range, r, $cast($Code$LocalVar$Range, i$->next()));
			{
				sb->append(" starts at pc="_s)->append($($Integer::toString(((int32_t)$nc(r)->start_pc))))->append(" length="_s)->append($($Integer::toString(((int32_t)$nc(r)->length))))->append("\n"_s);
			}
		}
	}
	return sb->toString();
}

void Code$LocalVar::openRange(char16_t start) {
	if (!hasOpenRange()) {
		$nc(this->aliveRanges)->add($$new($Code$LocalVar$Range, this, start));
	}
}

void Code$LocalVar::closeRange(char16_t length) {
	if (isLastRangeInitialized() && length > 0) {
		$var($Code$LocalVar$Range, range, lastRange());
		if (range != nullptr) {
			if (range->length == $Character::MAX_VALUE) {
				range->length = length;
			}
		}
	} else {
		removeLastRange();
	}
}

bool Code$LocalVar::hasOpenRange() {
	if ($nc(this->aliveRanges)->isEmpty()) {
		return false;
	}
	return $nc($(lastRange()))->length == $Character::MAX_VALUE;
}

bool Code$LocalVar::isLastRangeInitialized() {
	if ($nc(this->aliveRanges)->isEmpty()) {
		return false;
	}
	return $nc($(lastRange()))->start_pc != $Character::MAX_VALUE;
}

$Code$LocalVar$Range* Code$LocalVar::getWidestRange() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->aliveRanges)->isEmpty()) {
		return $new($Code$LocalVar$Range, this);
	} else {
		$var($Code$LocalVar$Range, firstRange, this->firstRange());
		$var($Code$LocalVar$Range, lastRange, this->lastRange());
		char16_t length = (char16_t)($nc(lastRange)->length + (lastRange->start_pc - $nc(firstRange)->start_pc));
		return $new($Code$LocalVar$Range, this, firstRange->start_pc, length);
	}
}

Code$LocalVar::Code$LocalVar() {
}

$Class* Code$LocalVar::load$($String* name, bool initialize) {
	$loadClass(Code$LocalVar, name, initialize, &_Code$LocalVar_ClassInfo_, allocate$Code$LocalVar);
	return class$;
}

$Class* Code$LocalVar::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com