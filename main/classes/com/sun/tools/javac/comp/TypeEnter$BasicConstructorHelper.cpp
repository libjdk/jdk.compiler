#include <com/sun/tools/javac/comp/TypeEnter$BasicConstructorHelper.h>

#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type$JCVoidType.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/TypeEnter.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $Type$JCVoidType = ::com::sun::tools::javac::code::Type$JCVoidType;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Types = ::com::sun::tools::javac::code::Types;
using $TypeEnter = ::com::sun::tools::javac::comp::TypeEnter;
using $TypeEnter$DefaultConstructorHelper = ::com::sun::tools::javac::comp::TypeEnter$DefaultConstructorHelper;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _TypeEnter$BasicConstructorHelper_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/TypeEnter;", nullptr, $FINAL | $SYNTHETIC, $field(TypeEnter$BasicConstructorHelper, this$0)},
	{"owner", "Lcom/sun/tools/javac/code/Symbol$TypeSymbol;", nullptr, 0, $field(TypeEnter$BasicConstructorHelper, owner$)},
	{"constructorType", "Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(TypeEnter$BasicConstructorHelper, constructorType$)},
	{"constructorSymbol", "Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, 0, $field(TypeEnter$BasicConstructorHelper, constructorSymbol$)},
	{}
};

$MethodInfo _TypeEnter$BasicConstructorHelper_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/TypeEnter;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)V", nullptr, 0, $method(static_cast<void(TypeEnter$BasicConstructorHelper::*)($TypeEnter*,$Symbol$TypeSymbol*)>(&TypeEnter$BasicConstructorHelper::init$))},
	{"constructorSymbol", "()Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, $PUBLIC},
	{"constructorType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"enclosingType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"owner", "()Lcom/sun/tools/javac/code/Symbol$TypeSymbol;", nullptr, $PUBLIC},
	{"superArgs", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/Name;>;", $PUBLIC},
	{}
};

$InnerClassInfo _TypeEnter$BasicConstructorHelper_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.TypeEnter$BasicConstructorHelper", "com.sun.tools.javac.comp.TypeEnter", "BasicConstructorHelper", 0},
	{"com.sun.tools.javac.comp.TypeEnter$DefaultConstructorHelper", "com.sun.tools.javac.comp.TypeEnter", "DefaultConstructorHelper", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TypeEnter$BasicConstructorHelper_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.TypeEnter$BasicConstructorHelper",
	"java.lang.Object",
	"com.sun.tools.javac.comp.TypeEnter$DefaultConstructorHelper",
	_TypeEnter$BasicConstructorHelper_FieldInfo_,
	_TypeEnter$BasicConstructorHelper_MethodInfo_,
	nullptr,
	nullptr,
	_TypeEnter$BasicConstructorHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.TypeEnter"
};

$Object* allocate$TypeEnter$BasicConstructorHelper($Class* clazz) {
	return $of($alloc(TypeEnter$BasicConstructorHelper));
}

void TypeEnter$BasicConstructorHelper::init$($TypeEnter* this$0, $Symbol$TypeSymbol* owner) {
	$set(this, this$0, this$0);
	$set(this, owner$, owner);
}

$Type* TypeEnter$BasicConstructorHelper::constructorType() {
	$useLocalCurrentObjectStackCache();
	if (this->constructorType$ == nullptr) {
		$var($List, var$0, $List::nil());
		$var($Type, var$1, static_cast<$Type*>($nc(this->this$0->syms)->voidType));
		$set(this, constructorType$, $new($Type$MethodType, var$0, var$1, $($List::nil()), $nc(this->this$0->syms)->methodClass));
	}
	return this->constructorType$;
}

$Symbol$MethodSymbol* TypeEnter$BasicConstructorHelper::constructorSymbol() {
	$useLocalCurrentObjectStackCache();
	if (this->constructorSymbol$ == nullptr) {
		int64_t flags = 0;
		bool var$0 = ((int64_t)($nc($(owner()))->flags() & (uint64_t)(int64_t)16384)) != 0;
		if (var$0 && ($nc($($nc(this->this$0->types)->supertype($nc($(owner()))->type)))->tsym == $nc(this->this$0->syms)->enumSym)) {
			flags = 2 | (int64_t)0x0000001000000000;
		} else {
			flags = ((int64_t)($nc($(owner()))->flags() & (uint64_t)(int64_t)7)) | (int64_t)0x0000001000000000;
		}
		int64_t var$1 = flags;
		$var($Name, var$2, $nc(this->this$0->names)->init);
		$var($Type, var$3, constructorType());
		$set(this, constructorSymbol$, $new($Symbol$MethodSymbol, var$1, var$2, var$3, $(owner())));
	}
	return this->constructorSymbol$;
}

$Type* TypeEnter$BasicConstructorHelper::enclosingType() {
	$init($Type);
	return $Type::noType;
}

$Symbol$TypeSymbol* TypeEnter$BasicConstructorHelper::owner() {
	return this->owner$;
}

$List* TypeEnter$BasicConstructorHelper::superArgs() {
	return $List::nil();
}

TypeEnter$BasicConstructorHelper::TypeEnter$BasicConstructorHelper() {
}

$Class* TypeEnter$BasicConstructorHelper::load$($String* name, bool initialize) {
	$loadClass(TypeEnter$BasicConstructorHelper, name, initialize, &_TypeEnter$BasicConstructorHelper_ClassInfo_, allocate$TypeEnter$BasicConstructorHelper);
	return class$;
}

$Class* TypeEnter$BasicConstructorHelper::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com