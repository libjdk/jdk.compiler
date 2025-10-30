#include <com/sun/tools/javac/code/Type$JCPrimitiveType$1.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$JCPrimitiveType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/List.h>
#include <jcpp.h>

using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$JCPrimitiveType = ::com::sun::tools::javac::code::Type$JCPrimitiveType;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
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

$FieldInfo _Type$JCPrimitiveType$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Type$JCPrimitiveType;", nullptr, $FINAL | $SYNTHETIC, $field(Type$JCPrimitiveType$1, this$0)},
	{}
};

$MethodInfo _Type$JCPrimitiveType$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Type$JCPrimitiveType;Lcom/sun/tools/javac/code/TypeTag;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/TypeMetadata;)V", nullptr, 0, $method(static_cast<void(Type$JCPrimitiveType$1::*)($Type$JCPrimitiveType*,$TypeTag*,$Symbol$TypeSymbol*,$TypeMetadata*)>(&Type$JCPrimitiveType$1::init$))},
	{"baseType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"cloneWithMetadata", "(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Type$JCPrimitiveType$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Type$JCPrimitiveType",
	"cloneWithMetadata",
	"(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/Type$JCPrimitiveType;"
};

$InnerClassInfo _Type$JCPrimitiveType$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$JCPrimitiveType", "com.sun.tools.javac.code.Type", "JCPrimitiveType", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$JCPrimitiveType$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Type$JCPrimitiveType$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Type$JCPrimitiveType$1",
	"com.sun.tools.javac.code.Type$JCPrimitiveType",
	nullptr,
	_Type$JCPrimitiveType$1_FieldInfo_,
	_Type$JCPrimitiveType$1_MethodInfo_,
	nullptr,
	&_Type$JCPrimitiveType$1_EnclosingMethodInfo_,
	_Type$JCPrimitiveType$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$JCPrimitiveType$1($Class* clazz) {
	return $of($alloc(Type$JCPrimitiveType$1));
}

void Type$JCPrimitiveType$1::init$($Type$JCPrimitiveType* this$0, $TypeTag* tag, $Symbol$TypeSymbol* tsym, $TypeMetadata* metadata) {
	$set(this, this$0, this$0);
	$Type$JCPrimitiveType::init$(tag, tsym, metadata);
}

$Type* Type$JCPrimitiveType$1::baseType() {
	return this->this$0->baseType();
}

$List* Type$JCPrimitiveType$1::getAnnotationMirrors() {
	return $Type$JCPrimitiveType::getAnnotationMirrors();
}

$Type$JCPrimitiveType* Type$JCPrimitiveType$1::cloneWithMetadata($TypeMetadata* md) {
	return $Type$JCPrimitiveType::cloneWithMetadata(md);
}

Type$JCPrimitiveType$1::Type$JCPrimitiveType$1() {
}

$Class* Type$JCPrimitiveType$1::load$($String* name, bool initialize) {
	$loadClass(Type$JCPrimitiveType$1, name, initialize, &_Type$JCPrimitiveType$1_ClassInfo_, allocate$Type$JCPrimitiveType$1);
	return class$;
}

$Class* Type$JCPrimitiveType$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com