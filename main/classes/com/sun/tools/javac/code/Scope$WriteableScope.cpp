#include <com/sun/tools/javac/code/Scope$WriteableScope.h>

#include <com/sun/tools/javac/code/Scope$ScopeImpl.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <jcpp.h>

using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$ScopeImpl = ::com::sun::tools::javac::code::Scope$ScopeImpl;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Scope$WriteableScope_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Scope$WriteableScope::*)($Symbol*)>(&Scope$WriteableScope::init$))},
	{"create", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Scope$WriteableScope;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Scope$WriteableScope*(*)($Symbol*)>(&Scope$WriteableScope::create))},
	{"dup", "()Lcom/sun/tools/javac/code/Scope$WriteableScope;", nullptr, $PUBLIC | $FINAL, $method(static_cast<Scope$WriteableScope*(Scope$WriteableScope::*)()>(&Scope$WriteableScope::dup))},
	{"dup", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Scope$WriteableScope;", nullptr, $PUBLIC | $ABSTRACT},
	{"dupUnshared", "()Lcom/sun/tools/javac/code/Scope$WriteableScope;", nullptr, $PUBLIC | $FINAL, $method(static_cast<Scope$WriteableScope*(Scope$WriteableScope::*)()>(&Scope$WriteableScope::dupUnshared))},
	{"dupUnshared", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Scope$WriteableScope;", nullptr, $PUBLIC | $ABSTRACT},
	{"enter", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"enterIfAbsent", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"leave", "()Lcom/sun/tools/javac/code/Scope$WriteableScope;", nullptr, $PUBLIC | $ABSTRACT},
	{"remove", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Scope$WriteableScope_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Scope$WriteableScope", "com.sun.tools.javac.code.Scope", "WriteableScope", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Scope$WriteableScope_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.code.Scope$WriteableScope",
	"com.sun.tools.javac.code.Scope",
	nullptr,
	nullptr,
	_Scope$WriteableScope_MethodInfo_,
	nullptr,
	nullptr,
	_Scope$WriteableScope_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Scope"
};

$Object* allocate$Scope$WriteableScope($Class* clazz) {
	return $of($alloc(Scope$WriteableScope));
}

void Scope$WriteableScope::init$($Symbol* owner) {
	$Scope::init$(owner);
}

Scope$WriteableScope* Scope$WriteableScope::dup() {
	return dup(this->owner);
}

Scope$WriteableScope* Scope$WriteableScope::dupUnshared() {
	return dupUnshared(this->owner);
}

Scope$WriteableScope* Scope$WriteableScope::create($Symbol* owner) {
	$init(Scope$WriteableScope);
	return $new($Scope$ScopeImpl, owner);
}

Scope$WriteableScope::Scope$WriteableScope() {
}

$Class* Scope$WriteableScope::load$($String* name, bool initialize) {
	$loadClass(Scope$WriteableScope, name, initialize, &_Scope$WriteableScope_ClassInfo_, allocate$Scope$WriteableScope);
	return class$;
}

$Class* Scope$WriteableScope::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com