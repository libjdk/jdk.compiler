#include <com/sun/tools/javac/comp/Attr$CheckMode$1.h>

#include <com/sun/tools/javac/comp/Attr$CheckMode.h>
#include <jcpp.h>

using $Attr$CheckMode = ::com::sun::tools::javac::comp::Attr$CheckMode;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$MethodInfo _Attr$CheckMode$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(Attr$CheckMode$1::*)($String*,int32_t)>(&Attr$CheckMode$1::init$))},
	{"updateTreeType", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Attr$CheckMode$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Attr$CheckMode",
	nullptr,
	nullptr
};

$InnerClassInfo _Attr$CheckMode$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Attr$CheckMode", "com.sun.tools.javac.comp.Attr", "CheckMode", $STATIC | $ENUM},
	{"com.sun.tools.javac.comp.Attr$CheckMode$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Attr$CheckMode$1_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.comp.Attr$CheckMode$1",
	"com.sun.tools.javac.comp.Attr$CheckMode",
	nullptr,
	nullptr,
	_Attr$CheckMode$1_MethodInfo_,
	nullptr,
	&_Attr$CheckMode$1_EnclosingMethodInfo_,
	_Attr$CheckMode$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Attr"
};

$Object* allocate$Attr$CheckMode$1($Class* clazz) {
	return $of($alloc(Attr$CheckMode$1));
}

void Attr$CheckMode$1::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Attr$CheckMode::init$($enum$name, $enum$ordinal);
}

bool Attr$CheckMode$1::updateTreeType() {
	return false;
}

Attr$CheckMode$1::Attr$CheckMode$1() {
}

$Class* Attr$CheckMode$1::load$($String* name, bool initialize) {
	$loadClass(Attr$CheckMode$1, name, initialize, &_Attr$CheckMode$1_ClassInfo_, allocate$Attr$CheckMode$1);
	return class$;
}

$Class* Attr$CheckMode$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com