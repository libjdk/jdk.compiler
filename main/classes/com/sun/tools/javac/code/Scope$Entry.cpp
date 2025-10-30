#include <com/sun/tools/javac/code/Scope$Entry.h>

#include <com/sun/tools/javac/code/Scope$ScopeImpl.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$ScopeImpl = ::com::sun::tools::javac::code::Scope$ScopeImpl;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Scope$Entry_FieldInfo_[] = {
	{"sym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $field(Scope$Entry, sym)},
	{"shadowed", "Lcom/sun/tools/javac/code/Scope$Entry;", nullptr, $PRIVATE, $field(Scope$Entry, shadowed)},
	{"nextSibling", "Lcom/sun/tools/javac/code/Scope$Entry;", nullptr, $PUBLIC, $field(Scope$Entry, nextSibling)},
	{"prevSibling", "Lcom/sun/tools/javac/code/Scope$Entry;", nullptr, $PUBLIC, $field(Scope$Entry, prevSibling)},
	{"scope", "Lcom/sun/tools/javac/code/Scope$ScopeImpl;", nullptr, $PUBLIC, $field(Scope$Entry, scope)},
	{}
};

$MethodInfo _Scope$Entry_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Scope$Entry;Lcom/sun/tools/javac/code/Scope$Entry;Lcom/sun/tools/javac/code/Scope$ScopeImpl;)V", nullptr, $PUBLIC, $method(static_cast<void(Scope$Entry::*)($Symbol*,Scope$Entry*,Scope$Entry*,$Scope$ScopeImpl*)>(&Scope$Entry::init$))},
	{"next", "()Lcom/sun/tools/javac/code/Scope$Entry;", nullptr, $PUBLIC},
	{"next", "(Ljava/util/function/Predicate;)Lcom/sun/tools/javac/code/Scope$Entry;", "(Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;)Lcom/sun/tools/javac/code/Scope$Entry;", $PUBLIC},
	{}
};

$InnerClassInfo _Scope$Entry_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Scope$Entry", "com.sun.tools.javac.code.Scope", "Entry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Scope$Entry_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Scope$Entry",
	"java.lang.Object",
	nullptr,
	_Scope$Entry_FieldInfo_,
	_Scope$Entry_MethodInfo_,
	nullptr,
	nullptr,
	_Scope$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Scope"
};

$Object* allocate$Scope$Entry($Class* clazz) {
	return $of($alloc(Scope$Entry));
}

void Scope$Entry::init$($Symbol* sym, Scope$Entry* shadowed, Scope$Entry* nextSibling, $Scope$ScopeImpl* scope) {
	$set(this, sym, sym);
	$set(this, shadowed, shadowed);
	$set(this, nextSibling, nextSibling);
	$set(this, scope, scope);
	if (nextSibling != nullptr) {
		$set(nextSibling, prevSibling, this);
	}
}

Scope$Entry* Scope$Entry::next() {
	return this->shadowed;
}

Scope$Entry* Scope$Entry::next($Predicate* sf) {
	if ($nc(this->shadowed)->sym == nullptr || sf == nullptr || $nc(sf)->test($nc(this->shadowed)->sym)) {
		return this->shadowed;
	} else {
		return $nc(this->shadowed)->next(sf);
	}
}

Scope$Entry::Scope$Entry() {
}

$Class* Scope$Entry::load$($String* name, bool initialize) {
	$loadClass(Scope$Entry, name, initialize, &_Scope$Entry_ClassInfo_, allocate$Scope$Entry);
	return class$;
}

$Class* Scope$Entry::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com