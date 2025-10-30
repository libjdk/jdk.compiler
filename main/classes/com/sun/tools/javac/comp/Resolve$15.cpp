#include <com/sun/tools/javac/comp/Resolve$15.h>

#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Resolve$15_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$15, this$0)},
	{"val$sym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$15, val$sym)},
	{}
};

$MethodInfo _Resolve$15_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;JLcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $method(static_cast<void(Resolve$15::*)($Resolve*,int64_t,$Name*,$Type*,$Symbol*,$Symbol*)>(&Resolve$15::init$))},
	{"baseSymbol", "()Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Resolve$15_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Resolve",
	"findDiamond",
	"(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;ZZ)Lcom/sun/tools/javac/code/Symbol;"
};

$InnerClassInfo _Resolve$15_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$15", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Symbol$MethodSymbol", "com.sun.tools.javac.code.Symbol", "MethodSymbol", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Resolve$15_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$15",
	"com.sun.tools.javac.code.Symbol$MethodSymbol",
	nullptr,
	_Resolve$15_FieldInfo_,
	_Resolve$15_MethodInfo_,
	nullptr,
	&_Resolve$15_EnclosingMethodInfo_,
	_Resolve$15_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$15($Class* clazz) {
	return $of($alloc(Resolve$15));
}

void Resolve$15::init$($Resolve* this$0, int64_t flags, $Name* name, $Type* type, $Symbol* owner, $Symbol* val$sym) {
	$set(this, this$0, this$0);
	$set(this, val$sym, val$sym);
	$Symbol$MethodSymbol::init$(flags, name, type, owner);
}

$Symbol* Resolve$15::baseSymbol() {
	return this->val$sym;
}

Resolve$15::Resolve$15() {
}

$Class* Resolve$15::load$($String* name, bool initialize) {
	$loadClass(Resolve$15, name, initialize, &_Resolve$15_ClassInfo_, allocate$Resolve$15);
	return class$;
}

$Class* Resolve$15::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com