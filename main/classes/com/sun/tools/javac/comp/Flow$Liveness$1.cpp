#include <com/sun/tools/javac/comp/Flow$Liveness$1.h>

#include <com/sun/tools/javac/comp/Flow$Liveness.h>
#include <jcpp.h>

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

$MethodInfo _Flow$Liveness$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(Flow$Liveness$1::*)($String*,int32_t)>(&Flow$Liveness$1::init$))},
	{"and", "(Lcom/sun/tools/javac/comp/Flow$Liveness;)Lcom/sun/tools/javac/comp/Flow$Liveness;", nullptr, $PUBLIC},
	{"or", "(Lcom/sun/tools/javac/comp/Flow$Liveness;)Lcom/sun/tools/javac/comp/Flow$Liveness;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Flow$Liveness$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Flow$Liveness",
	nullptr,
	nullptr
};

$InnerClassInfo _Flow$Liveness$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Flow$Liveness", "com.sun.tools.javac.comp.Flow", "Liveness", $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.tools.javac.comp.Flow$Liveness$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Flow$Liveness$1_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.comp.Flow$Liveness$1",
	"com.sun.tools.javac.comp.Flow$Liveness",
	nullptr,
	nullptr,
	_Flow$Liveness$1_MethodInfo_,
	nullptr,
	&_Flow$Liveness$1_EnclosingMethodInfo_,
	_Flow$Liveness$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Flow"
};

$Object* allocate$Flow$Liveness$1($Class* clazz) {
	return $of($alloc(Flow$Liveness$1));
}

void Flow$Liveness$1::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Flow$Liveness::init$($enum$name, $enum$ordinal);
}

$Flow$Liveness* Flow$Liveness$1::or$($Flow$Liveness* other) {
	return this;
}

$Flow$Liveness* Flow$Liveness$1::and$($Flow$Liveness* other) {
	return other;
}

Flow$Liveness$1::Flow$Liveness$1() {
}

$Class* Flow$Liveness$1::load$($String* name, bool initialize) {
	$loadClass(Flow$Liveness$1, name, initialize, &_Flow$Liveness$1_ClassInfo_, allocate$Flow$Liveness$1);
	return class$;
}

$Class* Flow$Liveness$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com