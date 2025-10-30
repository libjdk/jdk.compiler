#include <com/sun/tools/javac/code/Symbol$VarSymbol$1.h>

#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <java/util/List.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/Name.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $1List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Element = ::javax::lang::model::element::Element;
using $1Name = ::javax::lang::model::element::Name;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Symbol$VarSymbol$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Symbol$VarSymbol;", nullptr, $FINAL | $SYNTHETIC, $field(Symbol$VarSymbol$1, this$0)},
	{"val$newOwner", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $FINAL | $SYNTHETIC, $field(Symbol$VarSymbol$1, val$newOwner)},
	{}
};

$MethodInfo _Symbol$VarSymbol$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;JLcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $method(static_cast<void(Symbol$VarSymbol$1::*)($Symbol$VarSymbol*,int64_t,$Name*,$Type*,$Symbol*,$Symbol*)>(&Symbol$VarSymbol$1::init$))},
	{"asType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"baseSymbol", "()Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC},
	{"clone", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getEnclosingElement", "()Ljavax/lang/model/element/Element;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getSimpleName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"poolKey", "(Lcom/sun/tools/javac/code/Types;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Symbol$VarSymbol$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Symbol$VarSymbol",
	"clone",
	"(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Symbol$VarSymbol;"
};

$InnerClassInfo _Symbol$VarSymbol$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Symbol$VarSymbol", "com.sun.tools.javac.code.Symbol", "VarSymbol", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Symbol$VarSymbol$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Symbol$VarSymbol$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Symbol$VarSymbol$1",
	"com.sun.tools.javac.code.Symbol$VarSymbol",
	nullptr,
	_Symbol$VarSymbol$1_FieldInfo_,
	_Symbol$VarSymbol$1_MethodInfo_,
	nullptr,
	&_Symbol$VarSymbol$1_EnclosingMethodInfo_,
	_Symbol$VarSymbol$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Symbol"
};

$Object* allocate$Symbol$VarSymbol$1($Class* clazz) {
	return $of($alloc(Symbol$VarSymbol$1));
}

void Symbol$VarSymbol$1::init$($Symbol$VarSymbol* this$0, int64_t flags, $Name* name, $Type* type, $Symbol* owner, $Symbol* val$newOwner) {
	$set(this, this$0, this$0);
	$set(this, val$newOwner, val$newOwner);
	$Symbol$VarSymbol::init$(flags, name, type, owner);
}

$Symbol* Symbol$VarSymbol$1::baseSymbol() {
	return this->this$0;
}

$Object* Symbol$VarSymbol$1::poolKey($Types* types) {
	return $of($new($Pair, this->val$newOwner, $(baseSymbol())));
}

$Element* Symbol$VarSymbol$1::getEnclosingElement() {
	return $Symbol$VarSymbol::getEnclosingElement();
}

$1Name* Symbol$VarSymbol$1::getSimpleName() {
	return $Symbol$VarSymbol::getSimpleName();
}

$TypeMirror* Symbol$VarSymbol$1::asType() {
	return $Symbol$VarSymbol::asType();
}

$List* Symbol$VarSymbol$1::getAnnotationMirrors() {
	return $Symbol$VarSymbol::getAnnotationMirrors();
}

$Symbol$VarSymbol* Symbol$VarSymbol$1::clone($Symbol* newOwner) {
	return $Symbol$VarSymbol::clone(newOwner);
}

Symbol$VarSymbol$1::Symbol$VarSymbol$1() {
}

$Class* Symbol$VarSymbol$1::load$($String* name, bool initialize) {
	$loadClass(Symbol$VarSymbol$1, name, initialize, &_Symbol$VarSymbol$1_ClassInfo_, allocate$Symbol$VarSymbol$1);
	return class$;
}

$Class* Symbol$VarSymbol$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com