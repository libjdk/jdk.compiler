#include <com/sun/tools/javac/code/Types$TypeProjection$TypeArgumentProjection$1.h>

#include <com/sun/tools/javac/code/BoundKind.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$TypeProjection$TypeArgumentProjection.h>
#include <jcpp.h>

using $BoundKind = ::com::sun::tools::javac::code::BoundKind;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $Types$TypeProjection$TypeArgumentProjection = ::com::sun::tools::javac::code::Types$TypeProjection$TypeArgumentProjection;
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

$FieldInfo _Types$TypeProjection$TypeArgumentProjection$1_FieldInfo_[] = {
	{"this$2", "Lcom/sun/tools/javac/code/Types$TypeProjection$TypeArgumentProjection;", nullptr, $FINAL | $SYNTHETIC, $field(Types$TypeProjection$TypeArgumentProjection$1, this$2)},
	{}
};

$MethodInfo _Types$TypeProjection$TypeArgumentProjection$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types$TypeProjection$TypeArgumentProjection;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/BoundKind;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)V", nullptr, 0, $method(static_cast<void(Types$TypeProjection$TypeArgumentProjection$1::*)($Types$TypeProjection$TypeArgumentProjection*,$Type*,$BoundKind*,$Symbol$TypeSymbol*)>(&Types$TypeProjection$TypeArgumentProjection$1::init$))},
	{"needsStripping", "()Z", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _Types$TypeProjection$TypeArgumentProjection$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Types$TypeProjection$TypeArgumentProjection",
	"makeWildcard",
	"(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/BoundKind;)Lcom/sun/tools/javac/code/Type;"
};

$InnerClassInfo _Types$TypeProjection$TypeArgumentProjection$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$TypeProjection", "com.sun.tools.javac.code.Types", "TypeProjection", 0},
	{"com.sun.tools.javac.code.Types$TypeProjection$TypeArgumentProjection", "com.sun.tools.javac.code.Types$TypeProjection", "TypeArgumentProjection", 0},
	{"com.sun.tools.javac.code.Types$TypeProjection$TypeArgumentProjection$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Type$WildcardType", "com.sun.tools.javac.code.Type", "WildcardType", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Types$TypeProjection$TypeArgumentProjection$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$TypeProjection$TypeArgumentProjection$1",
	"com.sun.tools.javac.code.Type$WildcardType",
	nullptr,
	_Types$TypeProjection$TypeArgumentProjection$1_FieldInfo_,
	_Types$TypeProjection$TypeArgumentProjection$1_MethodInfo_,
	nullptr,
	&_Types$TypeProjection$TypeArgumentProjection$1_EnclosingMethodInfo_,
	_Types$TypeProjection$TypeArgumentProjection$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$TypeProjection$TypeArgumentProjection$1($Class* clazz) {
	return $of($alloc(Types$TypeProjection$TypeArgumentProjection$1));
}

void Types$TypeProjection$TypeArgumentProjection$1::init$($Types$TypeProjection$TypeArgumentProjection* this$2, $Type* type, $BoundKind* kind, $Symbol$TypeSymbol* tsym) {
	$set(this, this$2, this$2);
	$Type$WildcardType::init$(type, kind, tsym);
}

bool Types$TypeProjection$TypeArgumentProjection$1::needsStripping() {
	return true;
}

Types$TypeProjection$TypeArgumentProjection$1::Types$TypeProjection$TypeArgumentProjection$1() {
}

$Class* Types$TypeProjection$TypeArgumentProjection$1::load$($String* name, bool initialize) {
	$loadClass(Types$TypeProjection$TypeArgumentProjection$1, name, initialize, &_Types$TypeProjection$TypeArgumentProjection$1_ClassInfo_, allocate$Types$TypeProjection$TypeArgumentProjection$1);
	return class$;
}

$Class* Types$TypeProjection$TypeArgumentProjection$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com