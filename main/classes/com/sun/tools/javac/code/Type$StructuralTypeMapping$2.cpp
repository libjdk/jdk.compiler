#include <com/sun/tools/javac/code/Type$StructuralTypeMapping$2.h>

#include <com/sun/tools/javac/code/BoundKind.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$StructuralTypeMapping.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <jcpp.h>

using $BoundKind = ::com::sun::tools::javac::code::BoundKind;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$StructuralTypeMapping = ::com::sun::tools::javac::code::Type$StructuralTypeMapping;
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

$FieldInfo _Type$StructuralTypeMapping$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Type$StructuralTypeMapping;", nullptr, $FINAL | $SYNTHETIC, $field(Type$StructuralTypeMapping$2, this$0)},
	{}
};

$MethodInfo _Type$StructuralTypeMapping$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Type$StructuralTypeMapping;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/BoundKind;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Type$TypeVar;Lcom/sun/tools/javac/code/TypeMetadata;)V", nullptr, 0, $method(static_cast<void(Type$StructuralTypeMapping$2::*)($Type$StructuralTypeMapping*,$Type*,$BoundKind*,$Symbol$TypeSymbol*,$Type$TypeVar*,$TypeMetadata*)>(&Type$StructuralTypeMapping$2::init$))},
	{"needsStripping", "()Z", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _Type$StructuralTypeMapping$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Type$StructuralTypeMapping",
	"visitWildcardType",
	"(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;"
};

$InnerClassInfo _Type$StructuralTypeMapping$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$StructuralTypeMapping", "com.sun.tools.javac.code.Type", "StructuralTypeMapping", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.code.Type$StructuralTypeMapping$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Type$WildcardType", "com.sun.tools.javac.code.Type", "WildcardType", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Type$StructuralTypeMapping$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Type$StructuralTypeMapping$2",
	"com.sun.tools.javac.code.Type$WildcardType",
	nullptr,
	_Type$StructuralTypeMapping$2_FieldInfo_,
	_Type$StructuralTypeMapping$2_MethodInfo_,
	nullptr,
	&_Type$StructuralTypeMapping$2_EnclosingMethodInfo_,
	_Type$StructuralTypeMapping$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$StructuralTypeMapping$2($Class* clazz) {
	return $of($alloc(Type$StructuralTypeMapping$2));
}

void Type$StructuralTypeMapping$2::init$($Type$StructuralTypeMapping* this$0, $Type* type, $BoundKind* kind, $Symbol$TypeSymbol* tsym, $Type$TypeVar* bound, $TypeMetadata* metadata) {
	$set(this, this$0, this$0);
	$Type$WildcardType::init$(type, kind, tsym, bound, metadata);
}

bool Type$StructuralTypeMapping$2::needsStripping() {
	return true;
}

Type$StructuralTypeMapping$2::Type$StructuralTypeMapping$2() {
}

$Class* Type$StructuralTypeMapping$2::load$($String* name, bool initialize) {
	$loadClass(Type$StructuralTypeMapping$2, name, initialize, &_Type$StructuralTypeMapping$2_ClassInfo_, allocate$Type$StructuralTypeMapping$2);
	return class$;
}

$Class* Type$StructuralTypeMapping$2::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com