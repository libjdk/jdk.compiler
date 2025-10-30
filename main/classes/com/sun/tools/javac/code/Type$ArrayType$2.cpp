#include <com/sun/tools/javac/code/Type$ArrayType$2.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/List.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $1List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Type$ArrayType$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Type$ArrayType;", nullptr, $FINAL | $SYNTHETIC, $field(Type$ArrayType$2, this$0)},
	{}
};

$MethodInfo _Type$ArrayType$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Type$ArrayType;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/TypeMetadata;)V", nullptr, 0, $method(static_cast<void(Type$ArrayType$2::*)($Type$ArrayType*,$Type*,$Symbol$TypeSymbol*,$TypeMetadata*)>(&Type$ArrayType$2::init$))},
	{"cloneWithMetadata", "(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getComponentType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"isVarargs", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Type$ArrayType$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Type$ArrayType",
	"makeVarargs",
	"()Lcom/sun/tools/javac/code/Type$ArrayType;"
};

$InnerClassInfo _Type$ArrayType$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$ArrayType", "com.sun.tools.javac.code.Type", "ArrayType", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$ArrayType$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Type$ArrayType$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Type$ArrayType$2",
	"com.sun.tools.javac.code.Type$ArrayType",
	nullptr,
	_Type$ArrayType$2_FieldInfo_,
	_Type$ArrayType$2_MethodInfo_,
	nullptr,
	&_Type$ArrayType$2_EnclosingMethodInfo_,
	_Type$ArrayType$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$ArrayType$2($Class* clazz) {
	return $of($alloc(Type$ArrayType$2));
}

void Type$ArrayType$2::init$($Type$ArrayType* this$0, $Type* elemtype, $Symbol$TypeSymbol* arrayClass, $TypeMetadata* metadata) {
	$set(this, this$0, this$0);
	$Type$ArrayType::init$(elemtype, arrayClass, metadata);
}

bool Type$ArrayType$2::isVarargs() {
	return true;
}

$TypeMirror* Type$ArrayType$2::getComponentType() {
	return $Type$ArrayType::getComponentType();
}

$List* Type$ArrayType$2::getAnnotationMirrors() {
	return $Type$ArrayType::getAnnotationMirrors();
}

$Type$ArrayType* Type$ArrayType$2::cloneWithMetadata($TypeMetadata* md) {
	return $Type$ArrayType::cloneWithMetadata(md);
}

Type$ArrayType$2::Type$ArrayType$2() {
}

$Class* Type$ArrayType$2::load$($String* name, bool initialize) {
	$loadClass(Type$ArrayType$2, name, initialize, &_Type$ArrayType$2_ClassInfo_, allocate$Type$ArrayType$2);
	return class$;
}

$Class* Type$ArrayType$2::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com