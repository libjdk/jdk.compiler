#include <com/sun/tools/javac/code/Type$1.h>

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

$MethodInfo _Type$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Type$1::*)()>(&Type$1::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Type$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Type",
	nullptr,
	nullptr
};

$InnerClassInfo _Type$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Type$JCNoType", "com.sun.tools.javac.code.Type", "JCNoType", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Type$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Type$1",
	"com.sun.tools.javac.code.Type$JCNoType",
	nullptr,
	nullptr,
	_Type$1_MethodInfo_,
	nullptr,
	&_Type$1_EnclosingMethodInfo_,
	_Type$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$1($Class* clazz) {
	return $of($alloc(Type$1));
}

void Type$1::init$() {
	$Type$JCNoType::init$();
}

$String* Type$1::toString() {
	return "none"_s;
}

Type$1::Type$1() {
}

$Class* Type$1::load$($String* name, bool initialize) {
	$loadClass(Type$1, name, initialize, &_Type$1_ClassInfo_, allocate$Type$1);
	return class$;
}

$Class* Type$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com