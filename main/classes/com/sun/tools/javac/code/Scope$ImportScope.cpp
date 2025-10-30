#include <com/sun/tools/javac/code/Scope$ImportScope.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Scope$CompoundScope.h>
#include <com/sun/tools/javac/code/Scope$FilterImportScope.h>
#include <com/sun/tools/javac/code/Scope$ImportScope$1.h>
#include <com/sun/tools/javac/code/Scope$ScopeListener.h>
#include <com/sun/tools/javac/code/Scope$ScopeListenerList.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <java/lang/Iterable.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef TYP

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$CompoundScope = ::com::sun::tools::javac::code::Scope$CompoundScope;
using $Scope$FilterImportScope = ::com::sun::tools::javac::code::Scope$FilterImportScope;
using $Scope$ImportScope$1 = ::com::sun::tools::javac::code::Scope$ImportScope$1;
using $Scope$ScopeListener = ::com::sun::tools::javac::code::Scope$ScopeListener;
using $Scope$ScopeListenerList = ::com::sun::tools::javac::code::Scope$ScopeListenerList;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Scope$ImportScope_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Scope$ImportScope::*)($Symbol*)>(&Scope$ImportScope::init$))},
	{"finalizeScope", "()V", nullptr, $PUBLIC},
	{"finalizeSingleScope", "(Lcom/sun/tools/javac/code/Scope;)Lcom/sun/tools/javac/code/Scope;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _Scope$ImportScope_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Scope$ImportScope", "com.sun.tools.javac.code.Scope", "ImportScope", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Scope$CompoundScope", "com.sun.tools.javac.code.Scope", "CompoundScope", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Scope$ImportScope$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Scope$ImportScope_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Scope$ImportScope",
	"com.sun.tools.javac.code.Scope$CompoundScope",
	nullptr,
	nullptr,
	_Scope$ImportScope_MethodInfo_,
	nullptr,
	nullptr,
	_Scope$ImportScope_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Scope"
};

$Object* allocate$Scope$ImportScope($Class* clazz) {
	return $of($alloc(Scope$ImportScope));
}

void Scope$ImportScope::init$($Symbol* owner) {
	$Scope$CompoundScope::init$(owner);
}

void Scope$ImportScope::finalizeScope() {
	{
		$var($List, scopes, $nc(this->subScopes)->toList());
		for (; $nc(scopes)->nonEmpty(); $assign(scopes, $nc(scopes)->tail)) {
			$set(scopes, head, finalizeSingleScope($cast($Scope, scopes->head)));
		}
	}
}

$Scope* Scope$ImportScope::finalizeSingleScope($Scope* impScope) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Scope$FilterImportScope, filterImportScope, nullptr);
		bool var$1 = $instanceOf($Scope$FilterImportScope, impScope);
		if (var$1) {
			$assign(filterImportScope, $cast($Scope$FilterImportScope, impScope));
			var$1 = true;
		}
		$init($Kinds$Kind);
		bool var$0 = var$1 && $nc($nc(impScope)->owner)->kind == $Kinds$Kind::TYP;
		if (var$0 && $nc(filterImportScope)->isStaticallyImported()) {
			$var($Scope$WriteableScope, finalized, $Scope$WriteableScope::create(impScope->owner));
			{
				$var($Iterator, i$, $nc($(impScope->getSymbols()))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Symbol, sym, $cast($Symbol, i$->next()));
					{
						$nc(finalized)->enter(sym);
					}
				}
			}
			$nc($nc(finalized)->listeners)->add($$new($Scope$ImportScope$1, this));
			return finalized;
		}
	}
	return impScope;
}

Scope$ImportScope::Scope$ImportScope() {
}

$Class* Scope$ImportScope::load$($String* name, bool initialize) {
	$loadClass(Scope$ImportScope, name, initialize, &_Scope$ImportScope_ClassInfo_, allocate$Scope$ImportScope);
	return class$;
}

$Class* Scope$ImportScope::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com