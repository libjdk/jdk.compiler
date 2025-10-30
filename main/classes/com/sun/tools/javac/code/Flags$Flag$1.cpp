#include <com/sun/tools/javac/code/Flags$Flag$1.h>

#include <com/sun/tools/javac/code/Flags$Flag.h>
#include <jcpp.h>

using $Flags$Flag = ::com::sun::tools::javac::code::Flags$Flag;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Flags$Flag$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;IJ)V", nullptr, $PRIVATE, $method(static_cast<void(Flags$Flag$1::*)($String*,int32_t,int64_t)>(&Flags$Flag$1::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Flags$Flag$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Flags$Flag",
	nullptr,
	nullptr
};

$InnerClassInfo _Flags$Flag$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Flags$Flag", "com.sun.tools.javac.code.Flags", "Flag", $PUBLIC | $STATIC | $ENUM},
	{"com.sun.tools.javac.code.Flags$Flag$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Flags$Flag$1_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.code.Flags$Flag$1",
	"com.sun.tools.javac.code.Flags$Flag",
	nullptr,
	nullptr,
	_Flags$Flag$1_MethodInfo_,
	nullptr,
	&_Flags$Flag$1_EnclosingMethodInfo_,
	_Flags$Flag$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Flags"
};

$Object* allocate$Flags$Flag$1($Class* clazz) {
	return $of($alloc(Flags$Flag$1));
}

void Flags$Flag$1::init$($String* $enum$name, int32_t $enum$ordinal, int64_t flag) {
	$Flags$Flag::init$($enum$name, $enum$ordinal, flag);
}

$String* Flags$Flag$1::toString() {
	return "non-sealed"_s;
}

Flags$Flag$1::Flags$Flag$1() {
}

$Class* Flags$Flag$1::load$($String* name, bool initialize) {
	$loadClass(Flags$Flag$1, name, initialize, &_Flags$Flag$1_ClassInfo_, allocate$Flags$Flag$1);
	return class$;
}

$Class* Flags$Flag$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com