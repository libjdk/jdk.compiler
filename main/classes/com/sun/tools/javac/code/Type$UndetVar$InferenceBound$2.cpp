#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound$2.h>

#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>
#include <jcpp.h>

#undef EQ

using $Type$UndetVar$InferenceBound = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Type$UndetVar$InferenceBound$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(Type$UndetVar$InferenceBound$2::*)($String*,int32_t)>(&Type$UndetVar$InferenceBound$2::init$))},
	{"complement", "()Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Type$UndetVar$InferenceBound$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Type$UndetVar$InferenceBound",
	nullptr,
	nullptr
};

$InnerClassInfo _Type$UndetVar$InferenceBound$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$UndetVar", "com.sun.tools.javac.code.Type", "UndetVar", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$UndetVar$InferenceBound", "com.sun.tools.javac.code.Type$UndetVar", "InferenceBound", $PUBLIC | $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.tools.javac.code.Type$UndetVar$InferenceBound$2", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Type$UndetVar$InferenceBound$2_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.code.Type$UndetVar$InferenceBound$2",
	"com.sun.tools.javac.code.Type$UndetVar$InferenceBound",
	nullptr,
	nullptr,
	_Type$UndetVar$InferenceBound$2_MethodInfo_,
	nullptr,
	&_Type$UndetVar$InferenceBound$2_EnclosingMethodInfo_,
	_Type$UndetVar$InferenceBound$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$UndetVar$InferenceBound$2($Class* clazz) {
	return $of($alloc(Type$UndetVar$InferenceBound$2));
}

void Type$UndetVar$InferenceBound$2::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Type$UndetVar$InferenceBound::init$($enum$name, $enum$ordinal);
}

$Type$UndetVar$InferenceBound* Type$UndetVar$InferenceBound$2::complement() {
	$init($Type$UndetVar$InferenceBound);
	return $Type$UndetVar$InferenceBound::EQ;
}

Type$UndetVar$InferenceBound$2::Type$UndetVar$InferenceBound$2() {
}

$Class* Type$UndetVar$InferenceBound$2::load$($String* name, bool initialize) {
	$loadClass(Type$UndetVar$InferenceBound$2, name, initialize, &_Type$UndetVar$InferenceBound$2_ClassInfo_, allocate$Type$UndetVar$InferenceBound$2);
	return class$;
}

$Class* Type$UndetVar$InferenceBound$2::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com