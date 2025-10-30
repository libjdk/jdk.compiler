#include <com/sun/tools/javac/code/Types$ProjectionKind$1.h>

#include <com/sun/tools/javac/code/Types$ProjectionKind.h>
#include <jcpp.h>

#undef DOWNWARDS

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

$MethodInfo _Types$ProjectionKind$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(Types$ProjectionKind$1::*)($String*,int32_t)>(&Types$ProjectionKind$1::init$))},
	{"complement", "()Lcom/sun/tools/javac/code/Types$ProjectionKind;", nullptr, 0},
	{}
};

$EnclosingMethodInfo _Types$ProjectionKind$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Types$ProjectionKind",
	nullptr,
	nullptr
};

$InnerClassInfo _Types$ProjectionKind$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$ProjectionKind", "com.sun.tools.javac.code.Types", "ProjectionKind", $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.tools.javac.code.Types$ProjectionKind$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Types$ProjectionKind$1_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.code.Types$ProjectionKind$1",
	"com.sun.tools.javac.code.Types$ProjectionKind",
	nullptr,
	nullptr,
	_Types$ProjectionKind$1_MethodInfo_,
	nullptr,
	&_Types$ProjectionKind$1_EnclosingMethodInfo_,
	_Types$ProjectionKind$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$ProjectionKind$1($Class* clazz) {
	return $of($alloc(Types$ProjectionKind$1));
}

void Types$ProjectionKind$1::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Types$ProjectionKind::init$($enum$name, $enum$ordinal);
}

$Types$ProjectionKind* Types$ProjectionKind$1::complement() {
	$init($Types$ProjectionKind);
	return $Types$ProjectionKind::DOWNWARDS;
}

Types$ProjectionKind$1::Types$ProjectionKind$1() {
}

$Class* Types$ProjectionKind$1::load$($String* name, bool initialize) {
	$loadClass(Types$ProjectionKind$1, name, initialize, &_Types$ProjectionKind$1_ClassInfo_, allocate$Types$ProjectionKind$1);
	return class$;
}

$Class* Types$ProjectionKind$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com