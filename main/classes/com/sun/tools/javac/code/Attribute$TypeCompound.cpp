#include <com/sun/tools/javac/code/Attribute$TypeCompound.h>

#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeAnnotationPosition.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeAnnotationPosition = ::com::sun::tools::javac::code::TypeAnnotationPosition;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Attribute$TypeCompound_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Attribute$Compound;Lcom/sun/tools/javac/code/TypeAnnotationPosition;)V", nullptr, $PUBLIC, $method(static_cast<void(Attribute$TypeCompound::*)($Attribute$Compound*,$TypeAnnotationPosition*)>(&Attribute$TypeCompound::init$))},
	{"<init>", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/TypeAnnotationPosition;)V", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Attribute;>;>;Lcom/sun/tools/javac/code/TypeAnnotationPosition;)V", $PUBLIC, $method(static_cast<void(Attribute$TypeCompound::*)($Type*,$List*,$TypeAnnotationPosition*)>(&Attribute$TypeCompound::init$))},
	{}
};

$InnerClassInfo _Attribute$TypeCompound_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Attribute$TypeCompound", "com.sun.tools.javac.code.Attribute", "TypeCompound", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Attribute$Compound", "com.sun.tools.javac.code.Attribute", "Compound", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Attribute$TypeCompound_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Attribute$TypeCompound",
	"com.sun.tools.javac.code.Attribute$Compound",
	nullptr,
	nullptr,
	_Attribute$TypeCompound_MethodInfo_,
	nullptr,
	nullptr,
	_Attribute$TypeCompound_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Attribute"
};

$Object* allocate$Attribute$TypeCompound($Class* clazz) {
	return $of($alloc(Attribute$TypeCompound));
}

void Attribute$TypeCompound::init$($Attribute$Compound* compound, $TypeAnnotationPosition* position) {
	$Attribute$Compound::init$($nc(compound)->type, compound->values, position);
}

void Attribute$TypeCompound::init$($Type* type, $List* values, $TypeAnnotationPosition* position) {
	$Attribute$Compound::init$(type, values, position);
}

Attribute$TypeCompound::Attribute$TypeCompound() {
}

$Class* Attribute$TypeCompound::load$($String* name, bool initialize) {
	$loadClass(Attribute$TypeCompound, name, initialize, &_Attribute$TypeCompound_ClassInfo_, allocate$Attribute$TypeCompound);
	return class$;
}

$Class* Attribute$TypeCompound::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com