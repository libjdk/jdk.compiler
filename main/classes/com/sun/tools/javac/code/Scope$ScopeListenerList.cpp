#include <com/sun/tools/javac/code/Scope$ScopeListenerList.h>

#include <com/sun/tools/javac/code/Scope$ScopeListener.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <java/lang/ref/WeakReference.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$ScopeListener = ::com::sun::tools::javac::code::Scope$ScopeListener;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Scope$ScopeListenerList_FieldInfo_[] = {
	{"listeners", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Ljava/lang/ref/WeakReference<Lcom/sun/tools/javac/code/Scope$ScopeListener;>;>;", 0, $field(Scope$ScopeListenerList, listeners)},
	{}
};

$MethodInfo _Scope$ScopeListenerList_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Scope$ScopeListenerList::*)()>(&Scope$ScopeListenerList::init$))},
	{"add", "(Lcom/sun/tools/javac/code/Scope$ScopeListener;)V", nullptr, 0},
	{"symbolAdded", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Scope;)V", nullptr, 0},
	{"symbolRemoved", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Scope;)V", nullptr, 0},
	{"walkReferences", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Scope;Z)V", nullptr, $PRIVATE, $method(static_cast<void(Scope$ScopeListenerList::*)($Symbol*,$Scope*,bool)>(&Scope$ScopeListenerList::walkReferences))},
	{}
};

$InnerClassInfo _Scope$ScopeListenerList_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Scope$ScopeListenerList", "com.sun.tools.javac.code.Scope", "ScopeListenerList", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Scope$ScopeListenerList_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Scope$ScopeListenerList",
	"java.lang.Object",
	nullptr,
	_Scope$ScopeListenerList_FieldInfo_,
	_Scope$ScopeListenerList_MethodInfo_,
	nullptr,
	nullptr,
	_Scope$ScopeListenerList_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Scope"
};

$Object* allocate$Scope$ScopeListenerList($Class* clazz) {
	return $of($alloc(Scope$ScopeListenerList));
}

void Scope$ScopeListenerList::init$() {
	$set(this, listeners, $List::nil());
}

void Scope$ScopeListenerList::add($Scope$ScopeListener* sl) {
	$set(this, listeners, $nc(this->listeners)->prepend($$new($WeakReference, sl)));
}

void Scope$ScopeListenerList::symbolAdded($Symbol* sym, $Scope* scope) {
	walkReferences(sym, scope, false);
}

void Scope$ScopeListenerList::symbolRemoved($Symbol* sym, $Scope* scope) {
	walkReferences(sym, scope, true);
}

void Scope$ScopeListenerList::walkReferences($Symbol* sym, $Scope* scope, bool isRemove) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, newListeners, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(this->listeners)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($WeakReference, wsl, $cast($WeakReference, i$->next()));
			{
				$var($Scope$ScopeListener, sl, $cast($Scope$ScopeListener, $nc(wsl)->get()));
				if (sl != nullptr) {
					if (isRemove) {
						sl->symbolRemoved(sym, scope);
					} else {
						sl->symbolAdded(sym, scope);
					}
					newListeners->add(wsl);
				}
			}
		}
	}
	$set(this, listeners, newListeners->toList());
}

Scope$ScopeListenerList::Scope$ScopeListenerList() {
}

$Class* Scope$ScopeListenerList::load$($String* name, bool initialize) {
	$loadClass(Scope$ScopeListenerList, name, initialize, &_Scope$ScopeListenerList_ClassInfo_, allocate$Scope$ScopeListenerList);
	return class$;
}

$Class* Scope$ScopeListenerList::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com