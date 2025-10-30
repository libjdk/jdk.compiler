#include <com/sun/tools/javac/code/Attribute$Enum.h>

#include <com/sun/tools/javac/code/Attribute$Visitor.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <javax/lang/model/element/AnnotationValueVisitor.h>
#include <javax/lang/model/element/VariableElement.h>
#include <jcpp.h>

using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Visitor = ::com::sun::tools::javac::code::Attribute$Visitor;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotationValueVisitor = ::javax::lang::model::element::AnnotationValueVisitor;
using $VariableElement = ::javax::lang::model::element::VariableElement;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Attribute$Enum_FieldInfo_[] = {
	{"value", "Lcom/sun/tools/javac/code/Symbol$VarSymbol;", nullptr, $PUBLIC, $field(Attribute$Enum, value)},
	{}
};

$MethodInfo _Attribute$Enum_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$VarSymbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Attribute$Enum::*)($Type*,$Symbol$VarSymbol*)>(&Attribute$Enum::init$))},
	{"accept", "(Lcom/sun/tools/javac/code/Attribute$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Ljavax/lang/model/element/AnnotationValueVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/element/AnnotationValueVisitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"getValue", "()Lcom/sun/tools/javac/code/Symbol$VarSymbol;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Attribute$Enum_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Attribute$Enum", "com.sun.tools.javac.code.Attribute", "Enum", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Attribute$Enum_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Attribute$Enum",
	"com.sun.tools.javac.code.Attribute",
	nullptr,
	_Attribute$Enum_FieldInfo_,
	_Attribute$Enum_MethodInfo_,
	nullptr,
	nullptr,
	_Attribute$Enum_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Attribute"
};

$Object* allocate$Attribute$Enum($Class* clazz) {
	return $of($alloc(Attribute$Enum));
}

void Attribute$Enum::init$($Type* type, $Symbol$VarSymbol* value) {
	$Attribute::init$(type);
	$set(this, value, $cast($Symbol$VarSymbol, $Assert::checkNonNull(value)));
}

void Attribute$Enum::accept($Attribute$Visitor* v) {
	$nc(v)->visitEnum(this);
}

$String* Attribute$Enum::toString() {
	return $nc(this->value)->toString();
}

$Object* Attribute$Enum::getValue() {
	return $of(this->value);
}

$Object* Attribute$Enum::accept($AnnotationValueVisitor* v, Object$* p) {
	return $of($nc(v)->visitEnumConstant(this->value, p));
}

Attribute$Enum::Attribute$Enum() {
}

$Class* Attribute$Enum::load$($String* name, bool initialize) {
	$loadClass(Attribute$Enum, name, initialize, &_Attribute$Enum_ClassInfo_, allocate$Attribute$Enum);
	return class$;
}

$Class* Attribute$Enum::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com