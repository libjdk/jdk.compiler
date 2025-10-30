#include <com/sun/tools/javac/code/Attribute$Error.h>

#include <com/sun/tools/javac/code/Attribute$Visitor.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Type.h>
#include <javax/lang/model/element/AnnotationValueVisitor.h>
#include <jcpp.h>

using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Visitor = ::com::sun::tools::javac::code::Attribute$Visitor;
using $Type = ::com::sun::tools::javac::code::Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotationValueVisitor = ::javax::lang::model::element::AnnotationValueVisitor;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Attribute$Error_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(static_cast<void(Attribute$Error::*)($Type*)>(&Attribute$Error::init$))},
	{"accept", "(Lcom/sun/tools/javac/code/Attribute$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Ljavax/lang/model/element/AnnotationValueVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/element/AnnotationValueVisitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"getValue", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Attribute$Error_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Attribute$Error", "com.sun.tools.javac.code.Attribute", "Error", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Attribute$Error_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Attribute$Error",
	"com.sun.tools.javac.code.Attribute",
	nullptr,
	nullptr,
	_Attribute$Error_MethodInfo_,
	nullptr,
	nullptr,
	_Attribute$Error_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Attribute"
};

$Object* allocate$Attribute$Error($Class* clazz) {
	return $of($alloc(Attribute$Error));
}

void Attribute$Error::init$($Type* type) {
	$Attribute::init$(type);
}

void Attribute$Error::accept($Attribute$Visitor* v) {
	$nc(v)->visitError(this);
}

$String* Attribute$Error::toString() {
	return "<error>"_s;
}

$Object* Attribute$Error::getValue() {
	return $of(toString());
}

$Object* Attribute$Error::accept($AnnotationValueVisitor* v, Object$* p) {
	return $of($nc(v)->visitString($(toString()), p));
}

Attribute$Error::Attribute$Error() {
}

$Class* Attribute$Error::load$($String* name, bool initialize) {
	$loadClass(Attribute$Error, name, initialize, &_Attribute$Error_ClassInfo_, allocate$Attribute$Error);
	return class$;
}

$Class* Attribute$Error::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com