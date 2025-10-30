#include <com/sun/tools/javac/code/Type$CapturedType$1.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$CapturedType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <jcpp.h>

using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$CapturedType = ::com::sun::tools::javac::code::Type$CapturedType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Type$CapturedType$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Type$CapturedType;", nullptr, $FINAL | $SYNTHETIC, $field(Type$CapturedType$1, this$0)},
	{}
};

$MethodInfo _Type$CapturedType$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Type$CapturedType;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type$WildcardType;Lcom/sun/tools/javac/code/TypeMetadata;)V", nullptr, 0, $method(static_cast<void(Type$CapturedType$1::*)($Type$CapturedType*,$Symbol$TypeSymbol*,$Type*,$Type*,$Type*,$Type$WildcardType*,$TypeMetadata*)>(&Type$CapturedType$1::init$))},
	{"baseType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"cloneWithMetadata", "(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/Type$TypeVar;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getUpperBound", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"setUpperBound", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Type$CapturedType$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Type$CapturedType",
	"cloneWithMetadata",
	"(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/Type$CapturedType;"
};

$InnerClassInfo _Type$CapturedType$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$CapturedType", "com.sun.tools.javac.code.Type", "CapturedType", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$CapturedType$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Type$CapturedType$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Type$CapturedType$1",
	"com.sun.tools.javac.code.Type$CapturedType",
	nullptr,
	_Type$CapturedType$1_FieldInfo_,
	_Type$CapturedType$1_MethodInfo_,
	nullptr,
	&_Type$CapturedType$1_EnclosingMethodInfo_,
	_Type$CapturedType$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$CapturedType$1($Class* clazz) {
	return $of($alloc(Type$CapturedType$1));
}

void Type$CapturedType$1::init$($Type$CapturedType* this$0, $Symbol$TypeSymbol* tsym, $Type* bound, $Type* upper, $Type* lower, $Type$WildcardType* wildcard, $TypeMetadata* metadata) {
	$set(this, this$0, this$0);
	$Type$CapturedType::init$(tsym, bound, upper, lower, wildcard, metadata);
}

$Type* Type$CapturedType$1::baseType() {
	return this->this$0->baseType();
}

$Type* Type$CapturedType$1::getUpperBound() {
	return this->this$0->getUpperBound();
}

void Type$CapturedType$1::setUpperBound($Type* bound) {
	this->this$0->setUpperBound(bound);
}

$Type$CapturedType* Type$CapturedType$1::cloneWithMetadata($TypeMetadata* md) {
	return $Type$CapturedType::cloneWithMetadata(md);
}

Type$CapturedType$1::Type$CapturedType$1() {
}

$Class* Type$CapturedType$1::load$($String* name, bool initialize) {
	$loadClass(Type$CapturedType$1, name, initialize, &_Type$CapturedType$1_ClassInfo_, allocate$Type$CapturedType$1);
	return class$;
}

$Class* Type$CapturedType$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com