#include <com/sun/tools/javac/comp/Resolve$RecoveryLoadClass.h>

#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$MethodInfo _Resolve$RecoveryLoadClass_MethodInfo_[] = {
	{"loadClass", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Resolve$RecoveryLoadClass_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$RecoveryLoadClass", "com.sun.tools.javac.comp.Resolve", "RecoveryLoadClass", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Resolve$RecoveryLoadClass_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.comp.Resolve$RecoveryLoadClass",
	nullptr,
	nullptr,
	nullptr,
	_Resolve$RecoveryLoadClass_MethodInfo_,
	nullptr,
	nullptr,
	_Resolve$RecoveryLoadClass_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$RecoveryLoadClass($Class* clazz) {
	return $of($alloc(Resolve$RecoveryLoadClass));
}

$Class* Resolve$RecoveryLoadClass::load$($String* name, bool initialize) {
	$loadClass(Resolve$RecoveryLoadClass, name, initialize, &_Resolve$RecoveryLoadClass_ClassInfo_, allocate$Resolve$RecoveryLoadClass);
	return class$;
}

$Class* Resolve$RecoveryLoadClass::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com