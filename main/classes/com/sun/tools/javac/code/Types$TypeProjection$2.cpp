#include <com/sun/tools/javac/code/Types$TypeProjection$2.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/code/Types$TypeProjection.h>
#include <jcpp.h>

using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $Types$TypeProjection = ::com::sun::tools::javac::code::Types$TypeProjection;
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

$FieldInfo _Types$TypeProjection$2_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/code/Types$TypeProjection;", nullptr, $FINAL | $SYNTHETIC, $field(Types$TypeProjection$2, this$1)},
	{}
};

$MethodInfo _Types$TypeProjection$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types$TypeProjection;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/TypeMetadata;)V", nullptr, 0, $method(static_cast<void(Types$TypeProjection$2::*)($Types$TypeProjection*,$Type*,$Symbol$TypeSymbol*,$TypeMetadata*)>(&Types$TypeProjection$2::init$))},
	{"needsStripping", "()Z", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _Types$TypeProjection$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Types$TypeProjection",
	"visitArrayType",
	"(Lcom/sun/tools/javac/code/Type$ArrayType;Lcom/sun/tools/javac/code/Types$ProjectionKind;)Lcom/sun/tools/javac/code/Type;"
};

$InnerClassInfo _Types$TypeProjection$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$TypeProjection", "com.sun.tools.javac.code.Types", "TypeProjection", 0},
	{"com.sun.tools.javac.code.Types$TypeProjection$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Type$ArrayType", "com.sun.tools.javac.code.Type", "ArrayType", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Types$ProjectionKind", "com.sun.tools.javac.code.Types", "ProjectionKind", $STATIC | $ABSTRACT | $ENUM},
	{}
};

$ClassInfo _Types$TypeProjection$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$TypeProjection$2",
	"com.sun.tools.javac.code.Type$ArrayType",
	nullptr,
	_Types$TypeProjection$2_FieldInfo_,
	_Types$TypeProjection$2_MethodInfo_,
	nullptr,
	&_Types$TypeProjection$2_EnclosingMethodInfo_,
	_Types$TypeProjection$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$TypeProjection$2($Class* clazz) {
	return $of($alloc(Types$TypeProjection$2));
}

void Types$TypeProjection$2::init$($Types$TypeProjection* this$1, $Type* elemtype, $Symbol$TypeSymbol* arrayClass, $TypeMetadata* metadata) {
	$set(this, this$1, this$1);
	$Type$ArrayType::init$(elemtype, arrayClass, metadata);
}

bool Types$TypeProjection$2::needsStripping() {
	return true;
}

Types$TypeProjection$2::Types$TypeProjection$2() {
}

$Class* Types$TypeProjection$2::load$($String* name, bool initialize) {
	$loadClass(Types$TypeProjection$2, name, initialize, &_Types$TypeProjection$2_ClassInfo_, allocate$Types$TypeProjection$2);
	return class$;
}

$Class* Types$TypeProjection$2::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com