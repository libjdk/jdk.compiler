#include <com/sun/tools/javac/code/Type$JCPrimitiveType$2.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$JCPrimitiveType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/List.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
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

$FieldInfo _Type$JCPrimitiveType$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Type$JCPrimitiveType;", nullptr, $FINAL | $SYNTHETIC, $field(Type$JCPrimitiveType$2, this$0)},
	{"val$value", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(Type$JCPrimitiveType$2, val$value)},
	{}
};

$MethodInfo _Type$JCPrimitiveType$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Type$JCPrimitiveType;Lcom/sun/tools/javac/code/TypeTag;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/TypeMetadata;Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(Type$JCPrimitiveType$2::*)($Type$JCPrimitiveType*,$TypeTag*,$Symbol$TypeSymbol*,$TypeMetadata*,Object$*)>(&Type$JCPrimitiveType$2::init$))},
	{"baseType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"cloneWithMetadata", "(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"constValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Type$JCPrimitiveType$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Type$JCPrimitiveType",
	"constType",
	"(Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;"
};

$InnerClassInfo _Type$JCPrimitiveType$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$JCPrimitiveType", "com.sun.tools.javac.code.Type", "JCPrimitiveType", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$JCPrimitiveType$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Type$JCPrimitiveType$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Type$JCPrimitiveType$2",
	"com.sun.tools.javac.code.Type$JCPrimitiveType",
	nullptr,
	_Type$JCPrimitiveType$2_FieldInfo_,
	_Type$JCPrimitiveType$2_MethodInfo_,
	nullptr,
	&_Type$JCPrimitiveType$2_EnclosingMethodInfo_,
	_Type$JCPrimitiveType$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$JCPrimitiveType$2($Class* clazz) {
	return $of($alloc(Type$JCPrimitiveType$2));
}

void Type$JCPrimitiveType$2::init$($Type$JCPrimitiveType* this$0, $TypeTag* tag, $Symbol$TypeSymbol* tsym, $TypeMetadata* metadata, Object$* val$value) {
	$set(this, this$0, this$0);
	$set(this, val$value, val$value);
	$Type$JCPrimitiveType::init$(tag, tsym, metadata);
}

$Object* Type$JCPrimitiveType$2::constValue() {
	return $of(this->val$value);
}

$Type* Type$JCPrimitiveType$2::baseType() {
	return $nc(this->tsym)->type;
}

$List* Type$JCPrimitiveType$2::getAnnotationMirrors() {
	return $Type$JCPrimitiveType::getAnnotationMirrors();
}

$Type$JCPrimitiveType* Type$JCPrimitiveType$2::cloneWithMetadata($TypeMetadata* md) {
	return $Type$JCPrimitiveType::cloneWithMetadata(md);
}

Type$JCPrimitiveType$2::Type$JCPrimitiveType$2() {
}

$Class* Type$JCPrimitiveType$2::load$($String* name, bool initialize) {
	$loadClass(Type$JCPrimitiveType$2, name, initialize, &_Type$JCPrimitiveType$2_ClassInfo_, allocate$Type$JCPrimitiveType$2);
	return class$;
}

$Class* Type$JCPrimitiveType$2::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com