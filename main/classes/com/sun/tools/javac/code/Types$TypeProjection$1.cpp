#include <com/sun/tools/javac/code/Types$TypeProjection$1.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/code/Types$TypeProjection.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $Types$TypeProjection = ::com::sun::tools::javac::code::Types$TypeProjection;
using $List = ::com::sun::tools::javac::util::List;
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

$FieldInfo _Types$TypeProjection$1_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/code/Types$TypeProjection;", nullptr, $FINAL | $SYNTHETIC, $field(Types$TypeProjection$1, this$1)},
	{}
};

$MethodInfo _Types$TypeProjection$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types$TypeProjection;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/TypeMetadata;)V", nullptr, 0, $method(static_cast<void(Types$TypeProjection$1::*)($Types$TypeProjection*,$Type*,$List*,$Symbol$TypeSymbol*,$TypeMetadata*)>(&Types$TypeProjection$1::init$))},
	{"needsStripping", "()Z", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _Types$TypeProjection$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Types$TypeProjection",
	"visitClassType",
	"(Lcom/sun/tools/javac/code/Type$ClassType;Lcom/sun/tools/javac/code/Types$ProjectionKind;)Lcom/sun/tools/javac/code/Type;"
};

$InnerClassInfo _Types$TypeProjection$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$TypeProjection", "com.sun.tools.javac.code.Types", "TypeProjection", 0},
	{"com.sun.tools.javac.code.Types$TypeProjection$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Type$ClassType", "com.sun.tools.javac.code.Type", "ClassType", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Types$ProjectionKind", "com.sun.tools.javac.code.Types", "ProjectionKind", $STATIC | $ABSTRACT | $ENUM},
	{}
};

$ClassInfo _Types$TypeProjection$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$TypeProjection$1",
	"com.sun.tools.javac.code.Type$ClassType",
	nullptr,
	_Types$TypeProjection$1_FieldInfo_,
	_Types$TypeProjection$1_MethodInfo_,
	nullptr,
	&_Types$TypeProjection$1_EnclosingMethodInfo_,
	_Types$TypeProjection$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$TypeProjection$1($Class* clazz) {
	return $of($alloc(Types$TypeProjection$1));
}

void Types$TypeProjection$1::init$($Types$TypeProjection* this$1, $Type* outer, $List* typarams, $Symbol$TypeSymbol* tsym, $TypeMetadata* metadata) {
	$set(this, this$1, this$1);
	$Type$ClassType::init$(outer, typarams, tsym, metadata);
}

bool Types$TypeProjection$1::needsStripping() {
	return true;
}

Types$TypeProjection$1::Types$TypeProjection$1() {
}

$Class* Types$TypeProjection$1::load$($String* name, bool initialize) {
	$loadClass(Types$TypeProjection$1, name, initialize, &_Types$TypeProjection$1_ClassInfo_, allocate$Types$TypeProjection$1);
	return class$;
}

$Class* Types$TypeProjection$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com