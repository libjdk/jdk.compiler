#include <com/sun/tools/javac/comp/Flow$Liveness$3.h>

#include <com/sun/tools/javac/comp/Flow$Liveness.h>
#include <jcpp.h>

#undef ALIVE
#undef DEAD

using $Flow$Liveness = ::com::sun::tools::javac::comp::Flow$Liveness;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$MethodInfo _Flow$Liveness$3_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(Flow$Liveness$3::*)($String*,int32_t)>(&Flow$Liveness$3::init$))},
	{"and", "(Lcom/sun/tools/javac/comp/Flow$Liveness;)Lcom/sun/tools/javac/comp/Flow$Liveness;", nullptr, $PUBLIC},
	{"or", "(Lcom/sun/tools/javac/comp/Flow$Liveness;)Lcom/sun/tools/javac/comp/Flow$Liveness;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Flow$Liveness$3_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Flow$Liveness",
	nullptr,
	nullptr
};

$InnerClassInfo _Flow$Liveness$3_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Flow$Liveness", "com.sun.tools.javac.comp.Flow", "Liveness", $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.tools.javac.comp.Flow$Liveness$3", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Flow$Liveness$3_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.comp.Flow$Liveness$3",
	"com.sun.tools.javac.comp.Flow$Liveness",
	nullptr,
	nullptr,
	_Flow$Liveness$3_MethodInfo_,
	nullptr,
	&_Flow$Liveness$3_EnclosingMethodInfo_,
	_Flow$Liveness$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Flow"
};

$Object* allocate$Flow$Liveness$3($Class* clazz) {
	return $of($alloc(Flow$Liveness$3));
}

void Flow$Liveness$3::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Flow$Liveness::init$($enum$name, $enum$ordinal);
}

$Flow$Liveness* Flow$Liveness$3::or$($Flow$Liveness* other) {
	$init($Flow$Liveness);
	if (other == $Flow$Liveness::ALIVE) {
		return $Flow$Liveness::ALIVE;
	} else {
		return this;
	}
}

$Flow$Liveness* Flow$Liveness$3::and$($Flow$Liveness* other) {
	$init($Flow$Liveness);
	if (other == $Flow$Liveness::DEAD) {
		return $Flow$Liveness::DEAD;
	} else {
		return this;
	}
}

Flow$Liveness$3::Flow$Liveness$3() {
}

$Class* Flow$Liveness$3::load$($String* name, bool initialize) {
	$loadClass(Flow$Liveness$3, name, initialize, &_Flow$Liveness$3_ClassInfo_, allocate$Flow$Liveness$3);
	return class$;
}

$Class* Flow$Liveness$3::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com