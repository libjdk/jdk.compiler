#include <com/sun/tools/javac/code/Attribute$Visitor.h>

#include <com/sun/tools/javac/code/Attribute$Array.h>
#include <com/sun/tools/javac/code/Attribute$Class.h>
#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/Attribute$Constant.h>
#include <com/sun/tools/javac/code/Attribute$Enum.h>
#include <com/sun/tools/javac/code/Attribute$Error.h>
#include <jcpp.h>

using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Array = ::com::sun::tools::javac::code::Attribute$Array;
using $Attribute$Class = ::com::sun::tools::javac::code::Attribute$Class;
using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Attribute$Constant = ::com::sun::tools::javac::code::Attribute$Constant;
using $Attribute$Enum = ::com::sun::tools::javac::code::Attribute$Enum;
using $Attribute$Error = ::com::sun::tools::javac::code::Attribute$Error;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Attribute$Visitor_MethodInfo_[] = {
	{"visitArray", "(Lcom/sun/tools/javac/code/Attribute$Array;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitClass", "(Lcom/sun/tools/javac/code/Attribute$Class;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitCompound", "(Lcom/sun/tools/javac/code/Attribute$Compound;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitConstant", "(Lcom/sun/tools/javac/code/Attribute$Constant;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitEnum", "(Lcom/sun/tools/javac/code/Attribute$Enum;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitError", "(Lcom/sun/tools/javac/code/Attribute$Error;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Attribute$Visitor_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Attribute$Visitor", "com.sun.tools.javac.code.Attribute", "Visitor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Attribute$Visitor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.code.Attribute$Visitor",
	nullptr,
	nullptr,
	nullptr,
	_Attribute$Visitor_MethodInfo_,
	nullptr,
	nullptr,
	_Attribute$Visitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Attribute"
};

$Object* allocate$Attribute$Visitor($Class* clazz) {
	return $of($alloc(Attribute$Visitor));
}

$Class* Attribute$Visitor::load$($String* name, bool initialize) {
	$loadClass(Attribute$Visitor, name, initialize, &_Attribute$Visitor_ClassInfo_, allocate$Attribute$Visitor);
	return class$;
}

$Class* Attribute$Visitor::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com