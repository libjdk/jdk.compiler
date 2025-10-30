#include <com/sun/tools/javac/code/Symbol$MethodSymbol$1.h>

#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
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

using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $1List = ::java::util::List;
using $Element = ::javax::lang::model::element::Element;
using $1Name = ::javax::lang::model::element::Name;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Symbol$MethodSymbol$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, $FINAL | $SYNTHETIC, $field(Symbol$MethodSymbol$1, this$0)},
	{"val$newOwner", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $FINAL | $SYNTHETIC, $field(Symbol$MethodSymbol$1, val$newOwner)},
	{}
};

$MethodInfo _Symbol$MethodSymbol$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;JLcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $method(static_cast<void(Symbol$MethodSymbol$1::*)($Symbol$MethodSymbol*,int64_t,$Name*,$Type*,$Symbol*,$Symbol*)>(&Symbol$MethodSymbol$1::init$))},
	{"asType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"baseSymbol", "()Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC},
	{"clone", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getDefaultValue", "()Ljavax/lang/model/element/AnnotationValue;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getEnclosingElement", "()Ljavax/lang/model/element/Element;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getParameters", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getReceiverType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getReturnType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getSimpleName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getThrownTypes", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getTypeParameters", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"poolKey", "(Lcom/sun/tools/javac/code/Types;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Symbol$MethodSymbol$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Symbol$MethodSymbol",
	"clone",
	"(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Symbol$MethodSymbol;"
};

$InnerClassInfo _Symbol$MethodSymbol$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Symbol$MethodSymbol", "com.sun.tools.javac.code.Symbol", "MethodSymbol", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Symbol$MethodSymbol$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Symbol$MethodSymbol$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Symbol$MethodSymbol$1",
	"com.sun.tools.javac.code.Symbol$MethodSymbol",
	nullptr,
	_Symbol$MethodSymbol$1_FieldInfo_,
	_Symbol$MethodSymbol$1_MethodInfo_,
	nullptr,
	&_Symbol$MethodSymbol$1_EnclosingMethodInfo_,
	_Symbol$MethodSymbol$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Symbol"
};

$Object* allocate$Symbol$MethodSymbol$1($Class* clazz) {
	return $of($alloc(Symbol$MethodSymbol$1));
}

void Symbol$MethodSymbol$1::init$($Symbol$MethodSymbol* this$0, int64_t flags, $Name* name, $Type* type, $Symbol* owner, $Symbol* val$newOwner) {
	$set(this, this$0, this$0);
	$set(this, val$newOwner, val$newOwner);
	$Symbol$MethodSymbol::init$(flags, name, type, owner);
}

$Symbol* Symbol$MethodSymbol$1::baseSymbol() {
	return this->this$0;
}

$Object* Symbol$MethodSymbol$1::poolKey($Types* types) {
	return $of($new($Pair, this->val$newOwner, $(baseSymbol())));
}

$1Name* Symbol$MethodSymbol$1::getSimpleName() {
	return $Symbol$MethodSymbol::getSimpleName();
}

$Attribute* Symbol$MethodSymbol$1::getDefaultValue() {
	return $Symbol$MethodSymbol::getDefaultValue();
}

$List* Symbol$MethodSymbol$1::getThrownTypes() {
	return $Symbol$MethodSymbol::getThrownTypes();
}

$Type* Symbol$MethodSymbol$1::getReceiverType() {
	return $Symbol$MethodSymbol::getReceiverType();
}

$List* Symbol$MethodSymbol$1::getParameters() {
	return $Symbol$MethodSymbol::getParameters();
}

$Type* Symbol$MethodSymbol$1::getReturnType() {
	return $Symbol$MethodSymbol::getReturnType();
}

$List* Symbol$MethodSymbol$1::getTypeParameters() {
	return $Symbol$MethodSymbol::getTypeParameters();
}

$TypeMirror* Symbol$MethodSymbol$1::asType() {
	return $Symbol$MethodSymbol::asType();
}

$1List* Symbol$MethodSymbol$1::getAnnotationMirrors() {
	return $Symbol$MethodSymbol::getAnnotationMirrors();
}

$Element* Symbol$MethodSymbol$1::getEnclosingElement() {
	return $Symbol$MethodSymbol::getEnclosingElement();
}

$Symbol$MethodSymbol* Symbol$MethodSymbol$1::clone($Symbol* newOwner) {
	return $Symbol$MethodSymbol::clone(newOwner);
}

Symbol$MethodSymbol$1::Symbol$MethodSymbol$1() {
}

$Class* Symbol$MethodSymbol$1::load$($String* name, bool initialize) {
	$loadClass(Symbol$MethodSymbol$1, name, initialize, &_Symbol$MethodSymbol$1_ClassInfo_, allocate$Symbol$MethodSymbol$1);
	return class$;
}

$Class* Symbol$MethodSymbol$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com