#include <com/sun/tools/javac/code/Scope$ScopeImpl$1.h>

#include <com/sun/tools/javac/code/Scope$Entry.h>
#include <com/sun/tools/javac/code/Scope$LookupKind.h>
#include <com/sun/tools/javac/code/Scope$ScopeImpl.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

#undef RECURSIVE

using $Scope$Entry = ::com::sun::tools::javac::code::Scope$Entry;
using $Scope$LookupKind = ::com::sun::tools::javac::code::Scope$LookupKind;
using $Scope$ScopeImpl = ::com::sun::tools::javac::code::Scope$ScopeImpl;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Scope$ScopeImpl$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Scope$ScopeImpl;", nullptr, $FINAL | $SYNTHETIC, $field(Scope$ScopeImpl$1, this$0)},
	{"val$sf", "Ljava/util/function/Predicate;", nullptr, $FINAL | $SYNTHETIC, $field(Scope$ScopeImpl$1, val$sf)},
	{"val$lookupKind", "Lcom/sun/tools/javac/code/Scope$LookupKind;", nullptr, $FINAL | $SYNTHETIC, $field(Scope$ScopeImpl$1, val$lookupKind)},
	{"currScope", "Lcom/sun/tools/javac/code/Scope$ScopeImpl;", nullptr, $PRIVATE, $field(Scope$ScopeImpl$1, currScope)},
	{"currEntry", "Lcom/sun/tools/javac/code/Scope$Entry;", nullptr, $PRIVATE, $field(Scope$ScopeImpl$1, currEntry)},
	{"seenRemoveCount", "I", nullptr, $PRIVATE, $field(Scope$ScopeImpl$1, seenRemoveCount)},
	{}
};

$MethodInfo _Scope$ScopeImpl$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Scope$ScopeImpl;Lcom/sun/tools/javac/code/Scope$LookupKind;Ljava/util/function/Predicate;)V", "()V", 0, $method(static_cast<void(Scope$ScopeImpl$1::*)($Scope$ScopeImpl*,$Scope$LookupKind*,$Predicate*)>(&Scope$ScopeImpl$1::init$))},
	{"doNext", "()Lcom/sun/tools/javac/code/Symbol;", nullptr, $PRIVATE, $method(static_cast<$Symbol*(Scope$ScopeImpl$1::*)()>(&Scope$ScopeImpl$1::doNext))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC},
	{"skipToNextMatchingEntry", "()V", nullptr, 0},
	{"update", "()V", nullptr, $PRIVATE, $method(static_cast<void(Scope$ScopeImpl$1::*)()>(&Scope$ScopeImpl$1::update))},
	{}
};

$EnclosingMethodInfo _Scope$ScopeImpl$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Scope$ScopeImpl",
	"getSymbols",
	"(Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable;"
};

$InnerClassInfo _Scope$ScopeImpl$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Scope$ScopeImpl", "com.sun.tools.javac.code.Scope", "ScopeImpl", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.code.Scope$ScopeImpl$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Scope$LookupKind", "com.sun.tools.javac.code.Scope", "LookupKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Scope$ScopeImpl$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Scope$ScopeImpl$1",
	"java.lang.Object",
	"java.util.Iterator",
	_Scope$ScopeImpl$1_FieldInfo_,
	_Scope$ScopeImpl$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Lcom/sun/tools/javac/code/Symbol;>;",
	&_Scope$ScopeImpl$1_EnclosingMethodInfo_,
	_Scope$ScopeImpl$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Scope"
};

$Object* allocate$Scope$ScopeImpl$1($Class* clazz) {
	return $of($alloc(Scope$ScopeImpl$1));
}

void Scope$ScopeImpl$1::init$($Scope$ScopeImpl* this$0, $Scope$LookupKind* val$lookupKind, $Predicate* val$sf) {
	$set(this, this$0, this$0);
	$set(this, val$lookupKind, val$lookupKind);
	$set(this, val$sf, val$sf);
	$set(this, currScope, this->this$0);
	$set(this, currEntry, this->this$0->elems);
	this->seenRemoveCount = $nc(this->currScope)->removeCount;
	{
		update();
	}
}

bool Scope$ScopeImpl$1::hasNext() {
	if (this->seenRemoveCount != $nc(this->currScope)->removeCount && this->currEntry != nullptr && !$nc($nc(this->currEntry)->scope)->includes($nc(this->currEntry)->sym)) {
		doNext();
		this->seenRemoveCount = $nc(this->currScope)->removeCount;
	}
	return this->currEntry != nullptr;
}

$Object* Scope$ScopeImpl$1::next() {
	if (!hasNext()) {
		$throwNew($NoSuchElementException);
	}
	return $of(doNext());
}

$Symbol* Scope$ScopeImpl$1::doNext() {
	$var($Symbol, sym, this->currEntry == nullptr ? ($Symbol*)nullptr : $nc(this->currEntry)->sym);
	if (this->currEntry != nullptr) {
		$set(this, currEntry, $nc(this->currEntry)->nextSibling);
	}
	update();
	return sym;
}

void Scope$ScopeImpl$1::update() {
	skipToNextMatchingEntry();
	$init($Scope$LookupKind);
	if (this->val$lookupKind == $Scope$LookupKind::RECURSIVE) {
		while (this->currEntry == nullptr && $nc(this->currScope)->next != nullptr) {
			$set(this, currScope, $nc(this->currScope)->next);
			$set(this, currEntry, $nc(this->currScope)->elems);
			this->seenRemoveCount = $nc(this->currScope)->removeCount;
			skipToNextMatchingEntry();
		}
	}
}

void Scope$ScopeImpl$1::skipToNextMatchingEntry() {
	while (this->currEntry != nullptr && this->val$sf != nullptr && !$nc(this->val$sf)->test($nc(this->currEntry)->sym)) {
		$set(this, currEntry, $nc(this->currEntry)->nextSibling);
	}
}

Scope$ScopeImpl$1::Scope$ScopeImpl$1() {
}

$Class* Scope$ScopeImpl$1::load$($String* name, bool initialize) {
	$loadClass(Scope$ScopeImpl$1, name, initialize, &_Scope$ScopeImpl$1_ClassInfo_, allocate$Scope$ScopeImpl$1);
	return class$;
}

$Class* Scope$ScopeImpl$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com