#include <com/sun/tools/javac/code/Type$ClassType$1.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/List.h>
#include <jcpp.h>

using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
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

$FieldInfo _Type$ClassType$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Type$ClassType;", nullptr, $FINAL | $SYNTHETIC, $field(Type$ClassType$1, this$0)},
	{}
};

$MethodInfo _Type$ClassType$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Type$ClassType;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/TypeMetadata;)V", nullptr, 0, $method(static_cast<void(Type$ClassType$1::*)($Type$ClassType*,$Type*,$1List*,$Symbol$TypeSymbol*,$TypeMetadata*)>(&Type$ClassType$1::init$))},
	{"asElement", "()Ljavax/lang/model/element/Element;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"baseType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"cloneWithMetadata", "(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getEnclosingType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getTypeArguments", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Type$ClassType$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Type$ClassType",
	"cloneWithMetadata",
	"(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/Type$ClassType;"
};

$InnerClassInfo _Type$ClassType$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$ClassType", "com.sun.tools.javac.code.Type", "ClassType", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$ClassType$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Type$ClassType$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Type$ClassType$1",
	"com.sun.tools.javac.code.Type$ClassType",
	nullptr,
	_Type$ClassType$1_FieldInfo_,
	_Type$ClassType$1_MethodInfo_,
	nullptr,
	&_Type$ClassType$1_EnclosingMethodInfo_,
	_Type$ClassType$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$ClassType$1($Class* clazz) {
	return $of($alloc(Type$ClassType$1));
}

void Type$ClassType$1::init$($Type$ClassType* this$0, $Type* outer, $1List* typarams, $Symbol$TypeSymbol* tsym, $TypeMetadata* metadata) {
	$set(this, this$0, this$0);
	$Type$ClassType::init$(outer, typarams, tsym, metadata);
}

$Type* Type$ClassType$1::baseType() {
	return this->this$0->baseType();
}

$1List* Type$ClassType$1::getTypeArguments() {
	return $Type$ClassType::getTypeArguments();
}

$Type* Type$ClassType$1::getEnclosingType() {
	return $Type$ClassType::getEnclosingType();
}

$Symbol$TypeSymbol* Type$ClassType$1::asElement() {
	return $Type$ClassType::asElement();
}

$List* Type$ClassType$1::getAnnotationMirrors() {
	return $Type$ClassType::getAnnotationMirrors();
}

$Type$ClassType* Type$ClassType$1::cloneWithMetadata($TypeMetadata* md) {
	return $Type$ClassType::cloneWithMetadata(md);
}

Type$ClassType$1::Type$ClassType$1() {
}

$Class* Type$ClassType$1::load$($String* name, bool initialize) {
	$loadClass(Type$ClassType$1, name, initialize, &_Type$ClassType$1_ClassInfo_, allocate$Type$ClassType$1);
	return class$;
}

$Class* Type$ClassType$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com