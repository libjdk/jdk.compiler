#include <com/sun/tools/javac/code/Attribute$Constant.h>

#include <com/sun/tools/javac/code/Attribute$1.h>
#include <com/sun/tools/javac/code/Attribute$Visitor.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/util/Constants.h>
#include <java/lang/AssertionError.h>
#include <javax/lang/model/element/AnnotationValueVisitor.h>
#include <jcpp.h>

using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$1 = ::com::sun::tools::javac::code::Attribute$1;
using $Attribute$Visitor = ::com::sun::tools::javac::code::Attribute$Visitor;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Constants = ::com::sun::tools::javac::util::Constants;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotationValueVisitor = ::javax::lang::model::element::AnnotationValueVisitor;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Attribute$Constant_FieldInfo_[] = {
	{"value", "Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $field(Attribute$Constant, value)},
	{}
};

$MethodInfo _Attribute$Constant_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(Attribute$Constant::*)($Type*,Object$*)>(&Attribute$Constant::init$))},
	{"accept", "(Lcom/sun/tools/javac/code/Attribute$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Ljavax/lang/model/element/AnnotationValueVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/element/AnnotationValueVisitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Attribute$Constant_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Attribute$Constant", "com.sun.tools.javac.code.Attribute", "Constant", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Attribute$Constant_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Attribute$Constant",
	"com.sun.tools.javac.code.Attribute",
	nullptr,
	_Attribute$Constant_FieldInfo_,
	_Attribute$Constant_MethodInfo_,
	nullptr,
	nullptr,
	_Attribute$Constant_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Attribute"
};

$Object* allocate$Attribute$Constant($Class* clazz) {
	return $of($alloc(Attribute$Constant));
}

void Attribute$Constant::accept($Attribute$Visitor* v) {
	$nc(v)->visitConstant(this);
}

void Attribute$Constant::init$($Type* type, Object$* value) {
	$Attribute::init$(type);
	$set(this, value, value);
}

$String* Attribute$Constant::toString() {
	return $Constants::format(this->value, this->type);
}

$Object* Attribute$Constant::getValue() {
	return $of($Constants::decode(this->value, this->type));
}

$Object* Attribute$Constant::accept($AnnotationValueVisitor* v, Object$* p) {
	$useLocalCurrentObjectStackCache();
	{
		$var($String, str, nullptr);
		$var($Object, patt3284$temp, this->value);
		bool var$0 = $instanceOf($String, patt3284$temp);
		if (var$0) {
			$assign(str, $cast($String, patt3284$temp));
			var$0 = true;
		}
		if (var$0) {
			return $of($nc(v)->visitString(str, p));
		}
	}
	if ($instanceOf($Integer, this->value)) {
		int32_t i = $nc(($cast($Integer, this->value)))->intValue();
		$init($Attribute$1);
		switch ($nc($Attribute$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc(($($nc(this->type)->getTag())))->ordinal())) {
		case 1:
			{
				return $of($nc(v)->visitBoolean(i != 0, p));
			}
		case 2:
			{
				return $of($nc(v)->visitChar((char16_t)i, p));
			}
		case 3:
			{
				return $of($nc(v)->visitByte((int8_t)i, p));
			}
		case 4:
			{
				return $of($nc(v)->visitShort((int16_t)i, p));
			}
		case 5:
			{
				return $of($nc(v)->visitInt(i, p));
			}
		}
	}
	$init($Attribute$1);
	switch ($nc($Attribute$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc(($($nc(this->type)->getTag())))->ordinal())) {
	case 6:
		{
			return $of($nc(v)->visitLong($nc(($cast($Long, this->value)))->longValue(), p));
		}
	case 7:
		{
			return $of($nc(v)->visitFloat($nc(($cast($Float, this->value)))->floatValue(), p));
		}
	case 8:
		{
			return $of($nc(v)->visitDouble($nc(($cast($Double, this->value)))->doubleValue(), p));
		}
	}
	$throwNew($AssertionError, $of($$str({"Bad annotation element value: "_s, this->value})));
}

Attribute$Constant::Attribute$Constant() {
}

$Class* Attribute$Constant::load$($String* name, bool initialize) {
	$loadClass(Attribute$Constant, name, initialize, &_Attribute$Constant_ClassInfo_, allocate$Attribute$Constant);
	return class$;
}

$Class* Attribute$Constant::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com