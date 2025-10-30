#include <com/sun/tools/javac/comp/Resolve$12.h>

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

$FieldInfo _Resolve$12_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$12, this$0)},
	{"val$spMethod", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$12, val$spMethod)},
	{}
};

$MethodInfo _Resolve$12_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;JLcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $method(static_cast<void(Resolve$12::*)($Resolve*,int64_t,$Name*,$Type*,$Symbol*,$Symbol*)>(&Resolve$12::init$))},
	{"baseSymbol", "()Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Resolve$12_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Resolve",
	"findPolymorphicSignatureInstance",
	"(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Symbol;"
};

$InnerClassInfo _Resolve$12_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$12", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Symbol$MethodSymbol", "com.sun.tools.javac.code.Symbol", "MethodSymbol", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Resolve$12_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$12",
	"com.sun.tools.javac.code.Symbol$MethodSymbol",
	nullptr,
	_Resolve$12_FieldInfo_,
	_Resolve$12_MethodInfo_,
	nullptr,
	&_Resolve$12_EnclosingMethodInfo_,
	_Resolve$12_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$12($Class* clazz) {
	return $of($alloc(Resolve$12));
}

void Resolve$12::init$($Resolve* this$0, int64_t flags, $Name* name, $Type* type, $Symbol* owner, $Symbol* val$spMethod) {
	$set(this, this$0, this$0);
	$set(this, val$spMethod, val$spMethod);
	$Symbol$MethodSymbol::init$(flags, name, type, owner);
}

$Symbol* Resolve$12::baseSymbol() {
	return this->val$spMethod;
}

Resolve$12::Resolve$12() {
}

$Class* Resolve$12::load$($String* name, bool initialize) {
	$loadClass(Resolve$12, name, initialize, &_Resolve$12_ClassInfo_, allocate$Resolve$12);
	return class$;
}

$Class* Resolve$12::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com