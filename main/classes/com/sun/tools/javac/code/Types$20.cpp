#include <com/sun/tools/javac/code/Types$20.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/code/Types$TypeMapping.h>
#include <jcpp.h>

using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $Types$TypeMapping = ::com::sun::tools::javac::code::Types$TypeMapping;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Types$20_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Types$20::*)()>(&Types$20::init$))},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type$TypeVar;", nullptr, $PUBLIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Types$20_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Types",
	nullptr,
	nullptr
};

$InnerClassInfo _Types$20_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$20", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$TypeMapping", "com.sun.tools.javac.code.Types", "TypeMapping", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Types$20_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$20",
	"com.sun.tools.javac.code.Types$TypeMapping",
	nullptr,
	nullptr,
	_Types$20_MethodInfo_,
	"Lcom/sun/tools/javac/code/Types$TypeMapping<Ljava/lang/Void;>;",
	&_Types$20_EnclosingMethodInfo_,
	_Types$20_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$20($Class* clazz) {
	return $of($alloc(Types$20));
}

void Types$20::init$() {
	$Types$TypeMapping::init$();
}

$Type$TypeVar* Types$20::visitTypeVar($Type$TypeVar* t, $Void* _unused) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$TypeSymbol, var$0, $nc(t)->tsym);
	$var($Type, var$1, t->getUpperBound());
	$var($Type, var$2, t->getLowerBound());
	return $new($Type$TypeVar, var$0, var$1, var$2, $(t->getMetadata()));
}

$Object* Types$20::visitTypeVar($Type$TypeVar* t, Object$* _unused) {
	return $of(this->visitTypeVar(t, $cast($Void, _unused)));
}

Types$20::Types$20() {
}

$Class* Types$20::load$($String* name, bool initialize) {
	$loadClass(Types$20, name, initialize, &_Types$20_ClassInfo_, allocate$Types$20);
	return class$;
}

$Class* Types$20::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com