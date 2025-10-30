#include <com/sun/tools/javac/code/Type$2.h>

#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <jcpp.h>

using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Type$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Type$2::*)()>(&Type$2::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Type$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Type",
	nullptr,
	nullptr
};

$InnerClassInfo _Type$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Type$JCNoType", "com.sun.tools.javac.code.Type", "JCNoType", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Type$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Type$2",
	"com.sun.tools.javac.code.Type$JCNoType",
	nullptr,
	nullptr,
	_Type$2_MethodInfo_,
	nullptr,
	&_Type$2_EnclosingMethodInfo_,
	_Type$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$2($Class* clazz) {
	return $of($alloc(Type$2));
}

void Type$2::init$() {
	$Type$JCNoType::init$();
}

$String* Type$2::toString() {
	return "recovery"_s;
}

Type$2::Type$2() {
}

$Class* Type$2::load$($String* name, bool initialize) {
	$loadClass(Type$2, name, initialize, &_Type$2_ClassInfo_, allocate$Type$2);
	return class$;
}

$Class* Type$2::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com