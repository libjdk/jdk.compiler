#include <com/sun/tools/javac/jvm/Profile$1.h>

#include <com/sun/tools/javac/jvm/Profile.h>
#include <com/sun/tools/javac/jvm/Target.h>
#include <jcpp.h>

using $Profile = ::com::sun::tools::javac::jvm::Profile;
using $Target = ::com::sun::tools::javac::jvm::Target;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$MethodInfo _Profile$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(Profile$1::*)($String*,int32_t)>(&Profile$1::init$))},
	{"isValid", "(Lcom/sun/tools/javac/jvm/Target;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Profile$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.jvm.Profile",
	nullptr,
	nullptr
};

$InnerClassInfo _Profile$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.Profile$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Profile$1_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.jvm.Profile$1",
	"com.sun.tools.javac.jvm.Profile",
	nullptr,
	nullptr,
	_Profile$1_MethodInfo_,
	nullptr,
	&_Profile$1_EnclosingMethodInfo_,
	_Profile$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.Profile"
};

$Object* allocate$Profile$1($Class* clazz) {
	return $of($alloc(Profile$1));
}

void Profile$1::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Profile::init$($enum$name, $enum$ordinal);
}

bool Profile$1::isValid($Target* t) {
	return true;
}

Profile$1::Profile$1() {
}

$Class* Profile$1::load$($String* name, bool initialize) {
	$loadClass(Profile$1, name, initialize, &_Profile$1_ClassInfo_, allocate$Profile$1);
	return class$;
}

$Class* Profile$1::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com