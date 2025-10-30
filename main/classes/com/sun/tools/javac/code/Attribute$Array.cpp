#include <com/sun/tools/javac/code/Attribute$Array.h>

#include <com/sun/tools/javac/code/Attribute$Visitor.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeAnnotationPosition.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/List.h>
#include <javax/lang/model/element/AnnotationValueVisitor.h>
#include <jcpp.h>

using $AttributeArray = $Array<::com::sun::tools::javac::code::Attribute>;
using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Visitor = ::com::sun::tools::javac::code::Attribute$Visitor;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeAnnotationPosition = ::com::sun::tools::javac::code::TypeAnnotationPosition;
using $1List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $AnnotationValueVisitor = ::javax::lang::model::element::AnnotationValueVisitor;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Attribute$Array_FieldInfo_[] = {
	{"values", "[Lcom/sun/tools/javac/code/Attribute;", nullptr, $PUBLIC | $FINAL, $field(Attribute$Array, values)},
	{}
};

$MethodInfo _Attribute$Array_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Type;[Lcom/sun/tools/javac/code/Attribute;)V", nullptr, $PUBLIC, $method(static_cast<void(Attribute$Array::*)($Type*,$AttributeArray*)>(&Attribute$Array::init$))},
	{"<init>", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute;>;)V", $PUBLIC, $method(static_cast<void(Attribute$Array::*)($Type*,$1List*)>(&Attribute$Array::init$))},
	{"accept", "(Lcom/sun/tools/javac/code/Attribute$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Ljavax/lang/model/element/AnnotationValueVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/element/AnnotationValueVisitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"getPosition", "()Lcom/sun/tools/javac/code/TypeAnnotationPosition;", nullptr, $PUBLIC},
	{"getValue", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute;>;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Attribute$Array_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Attribute$Array", "com.sun.tools.javac.code.Attribute", "Array", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Attribute$Array_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Attribute$Array",
	"com.sun.tools.javac.code.Attribute",
	nullptr,
	_Attribute$Array_FieldInfo_,
	_Attribute$Array_MethodInfo_,
	nullptr,
	nullptr,
	_Attribute$Array_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Attribute"
};

$Object* allocate$Attribute$Array($Class* clazz) {
	return $of($alloc(Attribute$Array));
}

void Attribute$Array::init$($Type* type, $AttributeArray* values) {
	$Attribute::init$(type);
	$set(this, values, values);
}

void Attribute$Array::init$($Type* type, $1List* values) {
	$Attribute::init$(type);
	$set(this, values, $fcast($AttributeArray, $nc(values)->toArray($$new($AttributeArray, values->size()))));
}

void Attribute$Array::accept($Attribute$Visitor* v) {
	$nc(v)->visitArray(this);
}

$String* Attribute$Array::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	buf->append(u'{');
	bool first = true;
	{
		$var($AttributeArray, arr$, this->values);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Attribute, value, arr$->get(i$));
			{
				if (!first) {
					buf->append(", "_s);
				}
				first = false;
				buf->append($of(value));
			}
		}
	}
	buf->append(u'}');
	return buf->toString();
}

$Object* Attribute$Array::getValue() {
	return $of($1List::from(this->values));
}

$Object* Attribute$Array::accept($AnnotationValueVisitor* v, Object$* p) {
	return $of($nc(v)->visitArray($($cast($List, getValue())), p));
}

$TypeAnnotationPosition* Attribute$Array::getPosition() {
	if ($nc(this->values)->length != 0) {
		return $nc($nc(this->values)->get(0))->getPosition();
	} else {
		return nullptr;
	}
}

Attribute$Array::Attribute$Array() {
}

$Class* Attribute$Array::load$($String* name, bool initialize) {
	$loadClass(Attribute$Array, name, initialize, &_Attribute$Array_ClassInfo_, allocate$Attribute$Array);
	return class$;
}

$Class* Attribute$Array::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com