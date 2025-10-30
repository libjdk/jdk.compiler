#include <com/sun/tools/javac/code/Attribute$UnresolvedClass.h>

#include <com/sun/tools/javac/code/Attribute$Error.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Type.h>
#include <jcpp.h>

using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Error = ::com::sun::tools::javac::code::Attribute$Error;
using $Type = ::com::sun::tools::javac::code::Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Attribute$UnresolvedClass_FieldInfo_[] = {
	{"classType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Attribute$UnresolvedClass, classType)},
	{}
};

$MethodInfo _Attribute$UnresolvedClass_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(static_cast<void(Attribute$UnresolvedClass::*)($Type*,$Type*)>(&Attribute$UnresolvedClass::init$))},
	{}
};

$InnerClassInfo _Attribute$UnresolvedClass_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Attribute$UnresolvedClass", "com.sun.tools.javac.code.Attribute", "UnresolvedClass", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Attribute$Error", "com.sun.tools.javac.code.Attribute", "Error", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Attribute$UnresolvedClass_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Attribute$UnresolvedClass",
	"com.sun.tools.javac.code.Attribute$Error",
	nullptr,
	_Attribute$UnresolvedClass_FieldInfo_,
	_Attribute$UnresolvedClass_MethodInfo_,
	nullptr,
	nullptr,
	_Attribute$UnresolvedClass_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Attribute"
};

$Object* allocate$Attribute$UnresolvedClass($Class* clazz) {
	return $of($alloc(Attribute$UnresolvedClass));
}

void Attribute$UnresolvedClass::init$($Type* type, $Type* classType) {
	$Attribute$Error::init$(type);
	$set(this, classType, classType);
}

Attribute$UnresolvedClass::Attribute$UnresolvedClass() {
}

$Class* Attribute$UnresolvedClass::load$($String* name, bool initialize) {
	$loadClass(Attribute$UnresolvedClass, name, initialize, &_Attribute$UnresolvedClass_ClassInfo_, allocate$Attribute$UnresolvedClass);
	return class$;
}

$Class* Attribute$UnresolvedClass::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com