#include <com/sun/tools/javac/comp/Resolve$5.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/lang/UnsupportedOperationException.h>
#include <jcpp.h>

#undef CLASS
#undef TYPEVAR

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Resolve$5_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$5, this$0)},
	{"val$intype", "Lcom/sun/tools/javac/code/Type;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$5, val$intype)},
	{"seen", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$TypeSymbol;>;", 0, $field(Resolve$5, seen)},
	{"currentSym", "Lcom/sun/tools/javac/code/Symbol$TypeSymbol;", nullptr, 0, $field(Resolve$5, currentSym)},
	{"prevSym", "Lcom/sun/tools/javac/code/Symbol$TypeSymbol;", nullptr, 0, $field(Resolve$5, prevSym)},
	{}
};

$MethodInfo _Resolve$5_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/code/Type;)V", "()V", 0, $method(static_cast<void(Resolve$5::*)($Resolve*,$Type*)>(&Resolve$5::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Lcom/sun/tools/javac/code/Symbol$TypeSymbol;", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{"symbolFor", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Symbol$TypeSymbol;", nullptr, 0},
	{}
};

$EnclosingMethodInfo _Resolve$5_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Resolve",
	"superclasses",
	"(Lcom/sun/tools/javac/code/Type;)Ljava/lang/Iterable;"
};

$InnerClassInfo _Resolve$5_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$5", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Symbol$TypeSymbol", "com.sun.tools.javac.code.Symbol", "TypeSymbol", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Resolve$5_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$5",
	"java.lang.Object",
	"java.util.Iterator",
	_Resolve$5_FieldInfo_,
	_Resolve$5_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Lcom/sun/tools/javac/code/Symbol$TypeSymbol;>;",
	&_Resolve$5_EnclosingMethodInfo_,
	_Resolve$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$5($Class* clazz) {
	return $of($alloc(Resolve$5));
}

void Resolve$5::init$($Resolve* this$0, $Type* val$intype) {
	$set(this, this$0, this$0);
	$set(this, val$intype, val$intype);
	$set(this, seen, $List::nil());
	$set(this, currentSym, symbolFor(this->val$intype));
	$set(this, prevSym, nullptr);
}

bool Resolve$5::hasNext() {
	if (this->currentSym == $nc(this->this$0->syms)->noSymbol) {
		$set(this, currentSym, symbolFor($($nc(this->this$0->types)->supertype($nc(this->prevSym)->type))));
	}
	return this->currentSym != nullptr;
}

$Object* Resolve$5::next() {
	$set(this, prevSym, this->currentSym);
	$set(this, currentSym, $nc(this->this$0->syms)->noSymbol);
	$Assert::check(this->prevSym != nullptr || this->prevSym != $nc(this->this$0->syms)->noSymbol);
	return $of(this->prevSym);
}

void Resolve$5::remove() {
	$throwNew($UnsupportedOperationException);
}

$Symbol$TypeSymbol* Resolve$5::symbolFor($Type* t$renamed) {
	$var($Type, t, t$renamed);
	$init($TypeTag);
	bool var$0 = !$nc(t)->hasTag($TypeTag::CLASS);
	if (var$0 && !t->hasTag($TypeTag::TYPEVAR)) {
		return nullptr;
	}
	$assign(t, $nc(this->this$0->types)->skipTypeVars(t, false));
	if ($nc(this->seen)->contains($nc(t)->tsym)) {
		return nullptr;
	}
	$set(this, seen, $nc(this->seen)->prepend($nc(t)->tsym));
	return $nc(t)->tsym;
}

Resolve$5::Resolve$5() {
}

$Class* Resolve$5::load$($String* name, bool initialize) {
	$loadClass(Resolve$5, name, initialize, &_Resolve$5_ClassInfo_, allocate$Resolve$5);
	return class$;
}

$Class* Resolve$5::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com