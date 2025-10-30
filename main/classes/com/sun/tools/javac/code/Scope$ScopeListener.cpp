#include <com/sun/tools/javac/code/Scope$ScopeListener.h>

#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <jcpp.h>

using $Scope = ::com::sun::tools::javac::code::Scope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Scope$ScopeListener_MethodInfo_[] = {
	{"symbolAdded", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Scope;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"symbolRemoved", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Scope;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Scope$ScopeListener_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Scope$ScopeListener", "com.sun.tools.javac.code.Scope", "ScopeListener", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Scope$ScopeListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.code.Scope$ScopeListener",
	nullptr,
	nullptr,
	nullptr,
	_Scope$ScopeListener_MethodInfo_,
	nullptr,
	nullptr,
	_Scope$ScopeListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Scope"
};

$Object* allocate$Scope$ScopeListener($Class* clazz) {
	return $of($alloc(Scope$ScopeListener));
}

$Class* Scope$ScopeListener::load$($String* name, bool initialize) {
	$loadClass(Scope$ScopeListener, name, initialize, &_Scope$ScopeListener_ClassInfo_, allocate$Scope$ScopeListener);
	return class$;
}

$Class* Scope$ScopeListener::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com