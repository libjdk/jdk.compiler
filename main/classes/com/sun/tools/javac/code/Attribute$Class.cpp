#include <com/sun/tools/javac/code/Attribute$Class.h>

#include <com/sun/tools/javac/code/Attribute$Visitor.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/List.h>
#include <javax/lang/model/element/AnnotationValueVisitor.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Visitor = ::com::sun::tools::javac::code::Attribute$Visitor;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Types = ::com::sun::tools::javac::code::Types;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotationValueVisitor = ::javax::lang::model::element::AnnotationValueVisitor;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Attribute$Class_FieldInfo_[] = {
	{"classType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Attribute$Class, classType)},
	{}
};

$MethodInfo _Attribute$Class_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(static_cast<void(Attribute$Class::*)($Types*,$Type*)>(&Attribute$Class::init$))},
	{"accept", "(Lcom/sun/tools/javac/code/Attribute$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Ljavax/lang/model/element/AnnotationValueVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/element/AnnotationValueVisitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"getValue", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"makeClassType", "(Lcom/sun/tools/javac/code/Types;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $STATIC, $method(static_cast<$Type*(*)($Types*,$Type*)>(&Attribute$Class::makeClassType))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Attribute$Class_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Attribute$Class", "com.sun.tools.javac.code.Attribute", "Class", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Attribute$Class_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Attribute$Class",
	"com.sun.tools.javac.code.Attribute",
	nullptr,
	_Attribute$Class_FieldInfo_,
	_Attribute$Class_MethodInfo_,
	nullptr,
	nullptr,
	_Attribute$Class_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Attribute"
};

$Object* allocate$Attribute$Class($Class* clazz) {
	return $of($alloc(Attribute$Class));
}

void Attribute$Class::accept($Attribute$Visitor* v) {
	$nc(v)->visitClass(this);
}

void Attribute$Class::init$($Types* types, $Type* type) {
	$Attribute::init$($(makeClassType(types, type)));
	$set(this, classType, type);
}

$Type* Attribute$Class::makeClassType($Types* types, $Type* type) {
	$init(Attribute$Class);
	$useLocalCurrentObjectStackCache();
	$var($Type, arg, $nc(type)->isPrimitive() ? $nc($($nc(types)->boxedClass(type)))->type : types->erasure(type));
	$var($Type, var$0, $nc($nc(types->syms)->classType)->getEnclosingType());
	return $new($Type$ClassType, var$0, $($List::of(arg)), $nc($nc(types->syms)->classType)->tsym);
}

$String* Attribute$Class::toString() {
	return $str({this->classType, ".class"_s});
}

$Object* Attribute$Class::getValue() {
	return $of(this->classType);
}

$Object* Attribute$Class::accept($AnnotationValueVisitor* v, Object$* p) {
	return $of($nc(v)->visitType(this->classType, p));
}

Attribute$Class::Attribute$Class() {
}

$Class* Attribute$Class::load$($String* name, bool initialize) {
	$loadClass(Attribute$Class, name, initialize, &_Attribute$Class_ClassInfo_, allocate$Attribute$Class);
	return class$;
}

$Class* Attribute$Class::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com