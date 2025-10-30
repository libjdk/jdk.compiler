#include <com/sun/tools/javac/code/Type$StructuralTypeMapping$3.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$StructuralTypeMapping.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <jcpp.h>

using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$StructuralTypeMapping = ::com::sun::tools::javac::code::Type$StructuralTypeMapping;
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

$FieldInfo _Type$StructuralTypeMapping$3_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Type$StructuralTypeMapping;", nullptr, $FINAL | $SYNTHETIC, $field(Type$StructuralTypeMapping$3, this$0)},
	{}
};

$MethodInfo _Type$StructuralTypeMapping$3_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Type$StructuralTypeMapping;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/TypeMetadata;)V", nullptr, 0, $method(static_cast<void(Type$StructuralTypeMapping$3::*)($Type$StructuralTypeMapping*,$Type*,$Symbol$TypeSymbol*,$TypeMetadata*)>(&Type$StructuralTypeMapping$3::init$))},
	{"needsStripping", "()Z", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _Type$StructuralTypeMapping$3_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Type$StructuralTypeMapping",
	"visitArrayType",
	"(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;"
};

$InnerClassInfo _Type$StructuralTypeMapping$3_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$StructuralTypeMapping", "com.sun.tools.javac.code.Type", "StructuralTypeMapping", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.code.Type$StructuralTypeMapping$3", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Type$ArrayType", "com.sun.tools.javac.code.Type", "ArrayType", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Type$StructuralTypeMapping$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Type$StructuralTypeMapping$3",
	"com.sun.tools.javac.code.Type$ArrayType",
	nullptr,
	_Type$StructuralTypeMapping$3_FieldInfo_,
	_Type$StructuralTypeMapping$3_MethodInfo_,
	nullptr,
	&_Type$StructuralTypeMapping$3_EnclosingMethodInfo_,
	_Type$StructuralTypeMapping$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$StructuralTypeMapping$3($Class* clazz) {
	return $of($alloc(Type$StructuralTypeMapping$3));
}

void Type$StructuralTypeMapping$3::init$($Type$StructuralTypeMapping* this$0, $Type* elemtype, $Symbol$TypeSymbol* arrayClass, $TypeMetadata* metadata) {
	$set(this, this$0, this$0);
	$Type$ArrayType::init$(elemtype, arrayClass, metadata);
}

bool Type$StructuralTypeMapping$3::needsStripping() {
	return true;
}

Type$StructuralTypeMapping$3::Type$StructuralTypeMapping$3() {
}

$Class* Type$StructuralTypeMapping$3::load$($String* name, bool initialize) {
	$loadClass(Type$StructuralTypeMapping$3, name, initialize, &_Type$StructuralTypeMapping$3_ClassInfo_, allocate$Type$StructuralTypeMapping$3);
	return class$;
}

$Class* Type$StructuralTypeMapping$3::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com