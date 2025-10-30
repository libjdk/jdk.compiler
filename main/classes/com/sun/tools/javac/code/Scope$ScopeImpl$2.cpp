#include <com/sun/tools/javac/code/Scope$ScopeImpl$2.h>

#include <com/sun/tools/javac/code/Scope$Entry.h>
#include <com/sun/tools/javac/code/Scope$LookupKind.h>
#include <com/sun/tools/javac/code/Scope$ScopeImpl.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

#undef RECURSIVE

using $Scope$Entry = ::com::sun::tools::javac::code::Scope$Entry;
using $Scope$LookupKind = ::com::sun::tools::javac::code::Scope$LookupKind;
using $Scope$ScopeImpl = ::com::sun::tools::javac::code::Scope$ScopeImpl;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Scope$ScopeImpl$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Scope$ScopeImpl;", nullptr, $FINAL | $SYNTHETIC, $field(Scope$ScopeImpl$2, this$0)},
	{"val$lookupKind", "Lcom/sun/tools/javac/code/Scope$LookupKind;", nullptr, $FINAL | $SYNTHETIC, $field(Scope$ScopeImpl$2, val$lookupKind)},
	{"val$sf", "Ljava/util/function/Predicate;", nullptr, $FINAL | $SYNTHETIC, $field(Scope$ScopeImpl$2, val$sf)},
	{"val$name", "Lcom/sun/tools/javac/util/Name;", nullptr, $FINAL | $SYNTHETIC, $field(Scope$ScopeImpl$2, val$name)},
	{"currentEntry", "Lcom/sun/tools/javac/code/Scope$Entry;", nullptr, 0, $field(Scope$ScopeImpl$2, currentEntry)},
	{"seenRemoveCount", "I", nullptr, 0, $field(Scope$ScopeImpl$2, seenRemoveCount)},
	{}
};

$MethodInfo _Scope$ScopeImpl$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Scope$ScopeImpl;Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)V", "()V", 0, $method(static_cast<void(Scope$ScopeImpl$2::*)($Scope$ScopeImpl*,$Name*,$Predicate*,$Scope$LookupKind*)>(&Scope$ScopeImpl$2::init$))},
	{"doNext", "()Lcom/sun/tools/javac/code/Symbol;", nullptr, $PRIVATE, $method(static_cast<$Symbol*(Scope$ScopeImpl$2::*)()>(&Scope$ScopeImpl$2::doNext))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Scope$ScopeImpl$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Scope$ScopeImpl",
	"getSymbolsByName",
	"(Lcom/sun/tools/javac/util/Name;Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable;"
};

$InnerClassInfo _Scope$ScopeImpl$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Scope$ScopeImpl", "com.sun.tools.javac.code.Scope", "ScopeImpl", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.code.Scope$ScopeImpl$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Scope$LookupKind", "com.sun.tools.javac.code.Scope", "LookupKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Scope$ScopeImpl$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Scope$ScopeImpl$2",
	"java.lang.Object",
	"java.util.Iterator",
	_Scope$ScopeImpl$2_FieldInfo_,
	_Scope$ScopeImpl$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Lcom/sun/tools/javac/code/Symbol;>;",
	&_Scope$ScopeImpl$2_EnclosingMethodInfo_,
	_Scope$ScopeImpl$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Scope"
};

$Object* allocate$Scope$ScopeImpl$2($Class* clazz) {
	return $of($alloc(Scope$ScopeImpl$2));
}

void Scope$ScopeImpl$2::init$($Scope$ScopeImpl* this$0, $Name* val$name, $Predicate* val$sf, $Scope$LookupKind* val$lookupKind) {
	$set(this, this$0, this$0);
	$set(this, val$name, val$name);
	$set(this, val$sf, val$sf);
	$set(this, val$lookupKind, val$lookupKind);
	$set(this, currentEntry, this->this$0->lookup(this->val$name, this->val$sf));
	this->seenRemoveCount = $nc(this->currentEntry)->scope != nullptr ? $nc($nc(this->currentEntry)->scope)->removeCount : -1;
}

bool Scope$ScopeImpl$2::hasNext() {
	if ($nc(this->currentEntry)->scope != nullptr && this->seenRemoveCount != $nc($nc(this->currentEntry)->scope)->removeCount && !$nc($nc(this->currentEntry)->scope)->includes($nc(this->currentEntry)->sym)) {
		doNext();
	}
	$init($Scope$LookupKind);
	return $nc(this->currentEntry)->scope != nullptr && (this->val$lookupKind == $Scope$LookupKind::RECURSIVE || $nc(this->currentEntry)->scope == this->this$0);
}

$Object* Scope$ScopeImpl$2::next() {
	if (!hasNext()) {
		$throwNew($NoSuchElementException);
	}
	return $of(doNext());
}

$Symbol* Scope$ScopeImpl$2::doNext() {
	$var($Scope$Entry, prevEntry, this->currentEntry);
	$set(this, currentEntry, $nc(this->currentEntry)->next(this->val$sf));
	return $nc(prevEntry)->sym;
}

void Scope$ScopeImpl$2::remove() {
	$throwNew($UnsupportedOperationException);
}

Scope$ScopeImpl$2::Scope$ScopeImpl$2() {
}

$Class* Scope$ScopeImpl$2::load$($String* name, bool initialize) {
	$loadClass(Scope$ScopeImpl$2, name, initialize, &_Scope$ScopeImpl$2_ClassInfo_, allocate$Scope$ScopeImpl$2);
	return class$;
}

$Class* Scope$ScopeImpl$2::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com