#include <com/sun/tools/javac/code/Type$3.h>

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

$MethodInfo _Type$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Type$3::*)()>(&Type$3::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Type$3_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Type",
	nullptr,
	nullptr
};

$InnerClassInfo _Type$3_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$3", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Type$JCNoType", "com.sun.tools.javac.code.Type", "JCNoType", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Type$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Type$3",
	"com.sun.tools.javac.code.Type$JCNoType",
	nullptr,
	nullptr,
	_Type$3_MethodInfo_,
	nullptr,
	&_Type$3_EnclosingMethodInfo_,
	_Type$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$3($Class* clazz) {
	return $of($alloc(Type$3));
}

void Type$3::init$() {
	$Type$JCNoType::init$();
}

$String* Type$3::toString() {
	return "stuck"_s;
}

Type$3::Type$3() {
}

$Class* Type$3::load$($String* name, bool initialize) {
	$loadClass(Type$3, name, initialize, &_Type$3_ClassInfo_, allocate$Type$3);
	return class$;
}

$Class* Type$3::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com