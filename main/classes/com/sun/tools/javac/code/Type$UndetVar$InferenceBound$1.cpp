#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound$1.h>

#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>
#include <jcpp.h>

#undef UPPER

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

$MethodInfo _Type$UndetVar$InferenceBound$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(Type$UndetVar$InferenceBound$1::*)($String*,int32_t)>(&Type$UndetVar$InferenceBound$1::init$))},
	{"complement", "()Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Type$UndetVar$InferenceBound$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Type$UndetVar$InferenceBound",
	nullptr,
	nullptr
};

$InnerClassInfo _Type$UndetVar$InferenceBound$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$UndetVar", "com.sun.tools.javac.code.Type", "UndetVar", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$UndetVar$InferenceBound", "com.sun.tools.javac.code.Type$UndetVar", "InferenceBound", $PUBLIC | $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.tools.javac.code.Type$UndetVar$InferenceBound$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Type$UndetVar$InferenceBound$1_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.code.Type$UndetVar$InferenceBound$1",
	"com.sun.tools.javac.code.Type$UndetVar$InferenceBound",
	nullptr,
	nullptr,
	_Type$UndetVar$InferenceBound$1_MethodInfo_,
	nullptr,
	&_Type$UndetVar$InferenceBound$1_EnclosingMethodInfo_,
	_Type$UndetVar$InferenceBound$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$UndetVar$InferenceBound$1($Class* clazz) {
	return $of($alloc(Type$UndetVar$InferenceBound$1));
}

void Type$UndetVar$InferenceBound$1::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Type$UndetVar$InferenceBound::init$($enum$name, $enum$ordinal);
}

$Type$UndetVar$InferenceBound* Type$UndetVar$InferenceBound$1::complement() {
	$init($Type$UndetVar$InferenceBound);
	return $Type$UndetVar$InferenceBound::UPPER;
}

Type$UndetVar$InferenceBound$1::Type$UndetVar$InferenceBound$1() {
}

$Class* Type$UndetVar$InferenceBound$1::load$($String* name, bool initialize) {
	$loadClass(Type$UndetVar$InferenceBound$1, name, initialize, &_Type$UndetVar$InferenceBound$1_ClassInfo_, allocate$Type$UndetVar$InferenceBound$1);
	return class$;
}

$Class* Type$UndetVar$InferenceBound$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com