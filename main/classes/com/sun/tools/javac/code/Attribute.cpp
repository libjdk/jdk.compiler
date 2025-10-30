#include <com/sun/tools/javac/code/Attribute.h>

#include <com/sun/tools/javac/code/Attribute$Visitor.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeAnnotationPosition.h>
#include <java/lang/UnsupportedOperationException.h>
#include <javax/lang/model/element/AnnotationValueVisitor.h>
#include <jcpp.h>

using $Attribute$Visitor = ::com::sun::tools::javac::code::Attribute$Visitor;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeAnnotationPosition = ::com::sun::tools::javac::code::TypeAnnotationPosition;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AnnotationValue = ::javax::lang::model::element::AnnotationValue;
using $AnnotationValueVisitor = ::javax::lang::model::element::AnnotationValueVisitor;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Attribute_FieldInfo_[] = {
	{"type", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Attribute, type)},
	{}
};

$MethodInfo _Attribute_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(static_cast<void(Attribute::*)($Type*)>(&Attribute::init$))},
	{"accept", "(Lcom/sun/tools/javac/code/Attribute$Visitor;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"accept", "(Ljavax/lang/model/element/AnnotationValueVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/element/AnnotationValueVisitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"getPosition", "()Lcom/sun/tools/javac/code/TypeAnnotationPosition;", nullptr, $PUBLIC},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"isSynthesized", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Attribute_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Attribute$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.code.Attribute$RetentionPolicy", "com.sun.tools.javac.code.Attribute", "RetentionPolicy", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.code.Attribute$Visitor", "com.sun.tools.javac.code.Attribute", "Visitor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.code.Attribute$UnresolvedClass", "com.sun.tools.javac.code.Attribute", "UnresolvedClass", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Attribute$Error", "com.sun.tools.javac.code.Attribute", "Error", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Attribute$Enum", "com.sun.tools.javac.code.Attribute", "Enum", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Attribute$Array", "com.sun.tools.javac.code.Attribute", "Array", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Attribute$TypeCompound", "com.sun.tools.javac.code.Attribute", "TypeCompound", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Attribute$Compound", "com.sun.tools.javac.code.Attribute", "Compound", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Attribute$Class", "com.sun.tools.javac.code.Attribute", "Class", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Attribute$Constant", "com.sun.tools.javac.code.Attribute", "Constant", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Attribute_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.code.Attribute",
	"java.lang.Object",
	"javax.lang.model.element.AnnotationValue",
	_Attribute_FieldInfo_,
	_Attribute_MethodInfo_,
	nullptr,
	nullptr,
	_Attribute_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Attribute$1,com.sun.tools.javac.code.Attribute$RetentionPolicy,com.sun.tools.javac.code.Attribute$Visitor,com.sun.tools.javac.code.Attribute$UnresolvedClass,com.sun.tools.javac.code.Attribute$Error,com.sun.tools.javac.code.Attribute$Enum,com.sun.tools.javac.code.Attribute$Array,com.sun.tools.javac.code.Attribute$TypeCompound,com.sun.tools.javac.code.Attribute$Compound,com.sun.tools.javac.code.Attribute$Class,com.sun.tools.javac.code.Attribute$Constant"
};

$Object* allocate$Attribute($Class* clazz) {
	return $of($alloc(Attribute));
}

void Attribute::init$($Type* type) {
	$set(this, type, type);
}

$Object* Attribute::getValue() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Object* Attribute::accept($AnnotationValueVisitor* v, Object$* p) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool Attribute::isSynthesized() {
	return false;
}

$TypeAnnotationPosition* Attribute::getPosition() {
	return nullptr;
}

Attribute::Attribute() {
}

$Class* Attribute::load$($String* name, bool initialize) {
	$loadClass(Attribute, name, initialize, &_Attribute_ClassInfo_, allocate$Attribute);
	return class$;
}

$Class* Attribute::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com