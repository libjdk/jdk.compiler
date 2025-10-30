#include <com/sun/tools/javac/jvm/Code$State.h>

#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$JCPrimitiveType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/jvm/Code$1.h>
#include <com/sun/tools/javac/jvm/Code$LocalVar.h>
#include <com/sun/tools/javac/jvm/Code.h>
#include <com/sun/tools/javac/jvm/UninitializedType.h>
#include <com/sun/tools/javac/util/ArrayUtils.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Bits.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/util/List.h>
#include <jcpp.h>

using $TypeArray = $Array<::com::sun::tools::javac::code::Type>;
using $Code$LocalVarArray = $Array<::com::sun::tools::javac::jvm::Code$LocalVar>;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$JCPrimitiveType = ::com::sun::tools::javac::code::Type$JCPrimitiveType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Code = ::com::sun::tools::javac::jvm::Code;
using $Code$1 = ::com::sun::tools::javac::jvm::Code$1;
using $Code$LocalVar = ::com::sun::tools::javac::jvm::Code$LocalVar;
using $UninitializedType = ::com::sun::tools::javac::jvm::UninitializedType;
using $ArrayUtils = ::com::sun::tools::javac::util::ArrayUtils;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Bits = ::com::sun::tools::javac::util::Bits;
using $PrintStream = ::java::io::PrintStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _Code$State_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/Code;", nullptr, $FINAL | $SYNTHETIC, $field(Code$State, this$0)},
	{"defined", "Lcom/sun/tools/javac/util/Bits;", nullptr, 0, $field(Code$State, defined)},
	{"stack", "[Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(Code$State, stack)},
	{"stacksize", "I", nullptr, 0, $field(Code$State, stacksize)},
	{"locks", "[I", nullptr, 0, $field(Code$State, locks)},
	{"nlocks", "I", nullptr, 0, $field(Code$State, nlocks)},
	{}
};

$MethodInfo _Code$State_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/Code;)V", nullptr, 0, $method(static_cast<void(Code$State::*)($Code*)>(&Code$State::init$))},
	{"dump", "()V", nullptr, 0},
	{"dump", "(I)V", nullptr, 0},
	{"dup", "()Lcom/sun/tools/javac/jvm/Code$State;", nullptr, 0},
	{"error", "()Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"forceStackTop", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, 0},
	{"join", "(Lcom/sun/tools/javac/jvm/Code$State;)Lcom/sun/tools/javac/jvm/Code$State;", nullptr, 0},
	{"lock", "(I)V", nullptr, 0},
	{"markInitialized", "(Lcom/sun/tools/javac/jvm/UninitializedType;)V", nullptr, 0},
	{"peek", "()Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"pop", "(I)V", nullptr, 0},
	{"pop", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, 0},
	{"pop1", "()Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"pop2", "()Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"push", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, 0},
	{"unlock", "(I)V", nullptr, 0},
	{}
};

$InnerClassInfo _Code$State_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.Code$State", "com.sun.tools.javac.jvm.Code", "State", 0},
	{}
};

$ClassInfo _Code$State_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.Code$State",
	"java.lang.Object",
	"java.lang.Cloneable",
	_Code$State_FieldInfo_,
	_Code$State_MethodInfo_,
	nullptr,
	nullptr,
	_Code$State_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.Code"
};

$Object* allocate$Code$State($Class* clazz) {
	return $of($alloc(Code$State));
}

void Code$State::init$($Code* this$0) {
	$set(this, this$0, this$0);
	$set(this, defined, $new($Bits));
	$set(this, stack, $new($TypeArray, 16));
}

Code$State* Code$State::dup() {
	$useLocalCurrentObjectStackCache();
	try {
		$var(Code$State, state, $cast(Code$State, $Cloneable::clone()));
		$set($nc(state), defined, $new($Bits, this->defined));
		$set(state, stack, $cast($TypeArray, $nc(this->stack)->clone()));
		if (this->locks != nullptr) {
			$set(state, locks, $cast($ints, $nc(this->locks)->clone()));
		}
		if (this->this$0->debugCode) {
			$nc($System::err)->println($$str({"duping state "_s, this}));
			dump();
		}
		return state;
	} catch ($CloneNotSupportedException& ex) {
		$throwNew($AssertionError, $of(ex));
	}
	$shouldNotReachHere();
}

void Code$State::lock(int32_t register$) {
	if (this->locks == nullptr) {
		$set(this, locks, $new($ints, 20));
	} else {
		$set(this, locks, $ArrayUtils::ensureCapacity(this->locks, this->nlocks));
	}
	$nc(this->locks)->set(this->nlocks, register$);
	++this->nlocks;
}

void Code$State::unlock(int32_t register$) {
	--this->nlocks;
	$Assert::check($nc(this->locks)->get(this->nlocks) == register$);
	$nc(this->locks)->set(this->nlocks, -1);
}

void Code$State::push($Type* t$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Type, t, t$renamed);
	if (this->this$0->debugCode) {
		$nc($System::err)->println($$str({"   pushing "_s, t}));
	}
	$init($Code$1);
	switch ($nc($Code$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc(($($nc(t)->getTag())))->ordinal())) {
	case 9:
		{
			return;
		}
	case 1:
		{}
	case 3:
		{}
	case 2:
		{}
	case 8:
		{
			$assign(t, $nc(this->this$0->syms)->intType);
			break;
		}
	default:
		{
			break;
		}
	}
	$set(this, stack, $fcast($TypeArray, $ArrayUtils::ensureCapacity(this->stack, this->stacksize + 2)));
	$nc(this->stack)->set(this->stacksize++, t);
	switch ($Code::width(t)) {
	case 1:
		{
			break;
		}
	case 2:
		{
			$nc(this->stack)->set(this->stacksize++, nullptr);
			break;
		}
	default:
		{
			$throwNew($AssertionError, $of(t));
		}
	}
	if (this->stacksize > this->this$0->max_stack) {
		this->this$0->max_stack = this->stacksize;
	}
}

$Type* Code$State::pop1() {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->debugCode) {
		$nc($System::err)->println($$str({"   popping "_s, $$str(1)}));
	}
	--this->stacksize;
	$var($Type, result, $nc(this->stack)->get(this->stacksize));
	$nc(this->stack)->set(this->stacksize, nullptr);
	$Assert::check(result != nullptr && $Code::width(result) == 1);
	return result;
}

$Type* Code$State::peek() {
	return $nc(this->stack)->get(this->stacksize - 1);
}

$Type* Code$State::pop2() {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->debugCode) {
		$nc($System::err)->println($$str({"   popping "_s, $$str(2)}));
	}
	this->stacksize -= 2;
	$var($Type, result, $nc(this->stack)->get(this->stacksize));
	$nc(this->stack)->set(this->stacksize, nullptr);
	$Assert::check($nc(this->stack)->get(this->stacksize + 1) == nullptr && result != nullptr && $Code::width(result) == 2);
	return result;
}

void Code$State::pop(int32_t n) {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->debugCode) {
		$nc($System::err)->println($$str({"   popping "_s, $$str(n)}));
	}
	while (n > 0) {
		$nc(this->stack)->set(--this->stacksize, nullptr);
		--n;
	}
}

void Code$State::pop($Type* t) {
	pop($Code::width(t));
}

void Code$State::forceStackTop($Type* t) {
	$useLocalCurrentObjectStackCache();
	if (!this->this$0->alive) {
		return;
	}
	$init($Code$1);
	{
		int32_t width = 0;
		$var($Type, old, nullptr)
		switch ($nc($Code$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc(($($nc(t)->getTag())))->ordinal())) {
		case 10:
			{}
		case 11:
			{
				width = $Code::width(t);
				$assign(old, $nc(this->stack)->get(this->stacksize - width));
				$var($Type, var$0, $nc(this->this$0->types)->erasure(old));
				$Assert::check($nc(this->this$0->types)->isSubtype(var$0, $($nc(this->this$0->types)->erasure(t))));
				$nc(this->stack)->set(this->stacksize - width, t);
				break;
			}
		default:
			{}
		}
	}
}

void Code$State::markInitialized($UninitializedType* old) {
	$useLocalCurrentObjectStackCache();
	$var($Type, newtype, $nc(old)->initializedType());
	for (int32_t i = 0; i < this->stacksize; ++i) {
		if ($equals($nc(this->stack)->get(i), old)) {
			$nc(this->stack)->set(i, newtype);
		}
	}
	for (int32_t i = 0; i < $nc(this->this$0->lvar)->length; ++i) {
		$var($Code$LocalVar, lv, $nc(this->this$0->lvar)->get(i));
		if (lv != nullptr && $equals($nc(lv->sym)->type, old)) {
			$var($Symbol$VarSymbol, sym, lv->sym);
			$assign(sym, $nc(sym)->clone(sym->owner));
			$set(sym, type, newtype);
			$var($Code$LocalVar, newlv, $nc(this->this$0->lvar)->set(i, $$new($Code$LocalVar, sym)));
			$set($nc(newlv), aliveRanges, lv->aliveRanges);
		}
	}
}

Code$State* Code$State::join(Code$State* other) {
	$useLocalCurrentObjectStackCache();
	$nc(this->defined)->andSet($nc(other)->defined);
	$Assert::check(this->stacksize == $nc(other)->stacksize && this->nlocks == other->nlocks);
	for (int32_t i = 0; i < this->stacksize;) {
		$var($Type, t, $nc(this->stack)->get(i));
		$var($Type, tother, $nc($nc(other)->stack)->get(i));
		$var($Type, result, t == tother ? t : $nc(this->this$0->types)->isSubtype(t, tother) ? tother : $nc(this->this$0->types)->isSubtype(tother, t) ? t : error());
		int32_t w = $Code::width(result);
		$nc(this->stack)->set(i, result);
		if (w == 2) {
			$Assert::checkNull($nc(this->stack)->get(i + 1));
		}
		i += w;
	}
	return this;
}

$Type* Code$State::error() {
	$throwNew($AssertionError, $of("inconsistent stack types at join point"_s));
	$shouldNotReachHere();
}

void Code$State::dump() {
	dump(-1);
}

void Code$State::dump(int32_t pc) {
	$useLocalCurrentObjectStackCache();
	$nc($System::err)->print($$str({"stackMap for "_s, $nc(this->this$0->meth)->owner, "."_s, this->this$0->meth}));
	if (pc == -1) {
		$nc($System::out)->println();
	} else {
		$nc($System::out)->println($$str({" at "_s, $$str(pc)}));
	}
	$nc($System::err)->println(" stack (from bottom):"_s);
	for (int32_t i = 0; i < this->stacksize; ++i) {
		$nc($System::err)->println($$str({"  "_s, $$str(i), ": "_s, $nc(this->stack)->get(i)}));
	}
	int32_t lastLocal = 0;
	for (int32_t i = this->this$0->max_locals - 1; i >= 0; --i) {
		if ($nc(this->defined)->isMember(i)) {
			lastLocal = i;
			break;
		}
	}
	if (lastLocal >= 0) {
		$nc($System::err)->println(" locals:"_s);
	}
	for (int32_t i = 0; i <= lastLocal; ++i) {
		$nc($System::err)->print($$str({"  "_s, $$str(i), ": "_s}));
		if ($nc(this->defined)->isMember(i)) {
			$var($Code$LocalVar, var, $nc(this->this$0->lvar)->get(i));
			if (var == nullptr) {
				$nc($System::err)->println("(none)"_s);
			} else if ($nc(var)->sym == nullptr) {
				$nc($System::err)->println("UNKNOWN!"_s);
			} else {
				$var($String, var$0, $$str({""_s, var->sym, " of type "_s}));
				$nc($System::err)->println($$concat(var$0, $($nc(var->sym)->erasure(this->this$0->types))));
			}
		} else {
			$nc($System::err)->println("undefined"_s);
		}
	}
	if (this->nlocks != 0) {
		$nc($System::err)->print(" locks:"_s);
		for (int32_t i = 0; i < this->nlocks; ++i) {
			$nc($System::err)->print($$str({" "_s, $$str($nc(this->locks)->get(i))}));
		}
		$nc($System::err)->println();
	}
}

Code$State::Code$State() {
}

$Class* Code$State::load$($String* name, bool initialize) {
	$loadClass(Code$State, name, initialize, &_Code$State_ClassInfo_, allocate$Code$State);
	return class$;
}

$Class* Code$State::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com