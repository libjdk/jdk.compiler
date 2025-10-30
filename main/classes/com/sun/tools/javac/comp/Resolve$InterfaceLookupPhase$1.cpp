#include <com/sun/tools/javac/comp/Resolve$InterfaceLookupPhase$1.h>

#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/Resolve$InterfaceLookupPhase.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <jcpp.h>

#undef DEFAULT_OK

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$InterfaceLookupPhase = ::com::sun::tools::javac::comp::Resolve$InterfaceLookupPhase;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$MethodInfo _Resolve$InterfaceLookupPhase$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(Resolve$InterfaceLookupPhase$1::*)($String*,int32_t)>(&Resolve$InterfaceLookupPhase$1::init$))},
	{"update", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Resolve;)Lcom/sun/tools/javac/comp/Resolve$InterfaceLookupPhase;", nullptr, 0},
	{}
};

$EnclosingMethodInfo _Resolve$InterfaceLookupPhase$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Resolve$InterfaceLookupPhase",
	nullptr,
	nullptr
};

$InnerClassInfo _Resolve$InterfaceLookupPhase$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$InterfaceLookupPhase", "com.sun.tools.javac.comp.Resolve", "InterfaceLookupPhase", $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.tools.javac.comp.Resolve$InterfaceLookupPhase$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Resolve$InterfaceLookupPhase$1_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.comp.Resolve$InterfaceLookupPhase$1",
	"com.sun.tools.javac.comp.Resolve$InterfaceLookupPhase",
	nullptr,
	nullptr,
	_Resolve$InterfaceLookupPhase$1_MethodInfo_,
	nullptr,
	&_Resolve$InterfaceLookupPhase$1_EnclosingMethodInfo_,
	_Resolve$InterfaceLookupPhase$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$InterfaceLookupPhase$1($Class* clazz) {
	return $of($alloc(Resolve$InterfaceLookupPhase$1));
}

void Resolve$InterfaceLookupPhase$1::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Resolve$InterfaceLookupPhase::init$($enum$name, $enum$ordinal);
}

$Resolve$InterfaceLookupPhase* Resolve$InterfaceLookupPhase$1::update($Symbol* s, $Resolve* rs) {
	if (((int64_t)($nc(s)->flags() & (uint64_t)(int64_t)((1024 | 512) | 16384))) != 0) {
		return this;
	} else {
		$init($Resolve$InterfaceLookupPhase);
		return $Resolve$InterfaceLookupPhase::DEFAULT_OK;
	}
}

Resolve$InterfaceLookupPhase$1::Resolve$InterfaceLookupPhase$1() {
}

$Class* Resolve$InterfaceLookupPhase$1::load$($String* name, bool initialize) {
	$loadClass(Resolve$InterfaceLookupPhase$1, name, initialize, &_Resolve$InterfaceLookupPhase$1_ClassInfo_, allocate$Resolve$InterfaceLookupPhase$1);
	return class$;
}

$Class* Resolve$InterfaceLookupPhase$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com