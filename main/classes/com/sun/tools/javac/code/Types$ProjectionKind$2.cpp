#include <com/sun/tools/javac/code/Types$ProjectionKind$2.h>

#include <com/sun/tools/javac/code/Types$ProjectionKind.h>
#include <jcpp.h>

#undef UPWARDS

using $Types$ProjectionKind = ::com::sun::tools::javac::code::Types$ProjectionKind;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Types$ProjectionKind$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(Types$ProjectionKind$2::*)($String*,int32_t)>(&Types$ProjectionKind$2::init$))},
	{"complement", "()Lcom/sun/tools/javac/code/Types$ProjectionKind;", nullptr, 0},
	{}
};

$EnclosingMethodInfo _Types$ProjectionKind$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Types$ProjectionKind",
	nullptr,
	nullptr
};

$InnerClassInfo _Types$ProjectionKind$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$ProjectionKind", "com.sun.tools.javac.code.Types", "ProjectionKind", $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.tools.javac.code.Types$ProjectionKind$2", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Types$ProjectionKind$2_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.code.Types$ProjectionKind$2",
	"com.sun.tools.javac.code.Types$ProjectionKind",
	nullptr,
	nullptr,
	_Types$ProjectionKind$2_MethodInfo_,
	nullptr,
	&_Types$ProjectionKind$2_EnclosingMethodInfo_,
	_Types$ProjectionKind$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$ProjectionKind$2($Class* clazz) {
	return $of($alloc(Types$ProjectionKind$2));
}

void Types$ProjectionKind$2::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Types$ProjectionKind::init$($enum$name, $enum$ordinal);
}

$Types$ProjectionKind* Types$ProjectionKind$2::complement() {
	$init($Types$ProjectionKind);
	return $Types$ProjectionKind::UPWARDS;
}

Types$ProjectionKind$2::Types$ProjectionKind$2() {
}

$Class* Types$ProjectionKind$2::load$($String* name, bool initialize) {
	$loadClass(Types$ProjectionKind$2, name, initialize, &_Types$ProjectionKind$2_ClassInfo_, allocate$Types$ProjectionKind$2);
	return class$;
}

$Class* Types$ProjectionKind$2::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com