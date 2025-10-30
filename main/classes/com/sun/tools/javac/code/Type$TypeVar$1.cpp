#include <com/sun/tools/javac/code/Type$TypeVar$1.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/List.h>
#include <jcpp.h>

using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $1List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Type$TypeVar$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Type$TypeVar;", nullptr, $FINAL | $SYNTHETIC, $field(Type$TypeVar$1, this$0)},
	{}
};

$MethodInfo _Type$TypeVar$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Type$TypeVar;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/TypeMetadata;)V", nullptr, 0, $method(static_cast<void(Type$TypeVar$1::*)($Type$TypeVar*,$Symbol$TypeSymbol*,$Type*,$Type*,$TypeMetadata*)>(&Type$TypeVar$1::init$))},
	{"asElement", "()Ljavax/lang/model/element/Element;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"baseType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"cloneWithMetadata", "(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getLowerBound", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getUpperBound", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"setUpperBound", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Type$TypeVar$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Type$TypeVar",
	"cloneWithMetadata",
	"(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/Type$TypeVar;"
};

$InnerClassInfo _Type$TypeVar$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$TypeVar", "com.sun.tools.javac.code.Type", "TypeVar", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$TypeVar$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Type$TypeVar$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Type$TypeVar$1",
	"com.sun.tools.javac.code.Type$TypeVar",
	nullptr,
	_Type$TypeVar$1_FieldInfo_,
	_Type$TypeVar$1_MethodInfo_,
	nullptr,
	&_Type$TypeVar$1_EnclosingMethodInfo_,
	_Type$TypeVar$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$TypeVar$1($Class* clazz) {
	return $of($alloc(Type$TypeVar$1));
}

void Type$TypeVar$1::init$($Type$TypeVar* this$0, $Symbol$TypeSymbol* tsym, $Type* bound, $Type* lower, $TypeMetadata* metadata) {
	$set(this, this$0, this$0);
	$Type$TypeVar::init$(tsym, bound, lower, metadata);
}

$Type* Type$TypeVar$1::baseType() {
	return this->this$0->baseType();
}

$Type* Type$TypeVar$1::getUpperBound() {
	return this->this$0->getUpperBound();
}

void Type$TypeVar$1::setUpperBound($Type* bound) {
	this->this$0->setUpperBound(bound);
}

$Type* Type$TypeVar$1::getLowerBound() {
	return $Type$TypeVar::getLowerBound();
}

$Symbol$TypeSymbol* Type$TypeVar$1::asElement() {
	return $Type$TypeVar::asElement();
}

$List* Type$TypeVar$1::getAnnotationMirrors() {
	return $Type$TypeVar::getAnnotationMirrors();
}

$Type$TypeVar* Type$TypeVar$1::cloneWithMetadata($TypeMetadata* md) {
	return $Type$TypeVar::cloneWithMetadata(md);
}

Type$TypeVar$1::Type$TypeVar$1() {
}

$Class* Type$TypeVar$1::load$($String* name, bool initialize) {
	$loadClass(Type$TypeVar$1, name, initialize, &_Type$TypeVar$1_ClassInfo_, allocate$Type$TypeVar$1);
	return class$;
}

$Class* Type$TypeVar$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com