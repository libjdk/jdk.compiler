#include <com/sun/tools/javac/code/Types$MostSpecificReturnCheck$2.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$MostSpecificReturnCheck.h>
#include <com/sun/tools/javac/code/Types.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$MostSpecificReturnCheck = ::com::sun::tools::javac::code::Types$MostSpecificReturnCheck;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Types$MostSpecificReturnCheck$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(Types$MostSpecificReturnCheck$2::*)($String*,int32_t)>(&Types$MostSpecificReturnCheck$2::init$))},
	{"test", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Types;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Types$MostSpecificReturnCheck$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Types$MostSpecificReturnCheck",
	nullptr,
	nullptr
};

$InnerClassInfo _Types$MostSpecificReturnCheck$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$MostSpecificReturnCheck", "com.sun.tools.javac.code.Types", "MostSpecificReturnCheck", $PUBLIC | $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.tools.javac.code.Types$MostSpecificReturnCheck$2", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Types$MostSpecificReturnCheck$2_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.code.Types$MostSpecificReturnCheck$2",
	"com.sun.tools.javac.code.Types$MostSpecificReturnCheck",
	nullptr,
	nullptr,
	_Types$MostSpecificReturnCheck$2_MethodInfo_,
	nullptr,
	&_Types$MostSpecificReturnCheck$2_EnclosingMethodInfo_,
	_Types$MostSpecificReturnCheck$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$MostSpecificReturnCheck$2($Class* clazz) {
	return $of($alloc(Types$MostSpecificReturnCheck$2));
}

void Types$MostSpecificReturnCheck$2::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Types$MostSpecificReturnCheck::init$($enum$name, $enum$ordinal);
}

bool Types$MostSpecificReturnCheck$2::test($Type* mt1, $Type* mt2, $Types* types) {
	return $nc(types)->returnTypeSubstitutable(mt1, mt2);
}

Types$MostSpecificReturnCheck$2::Types$MostSpecificReturnCheck$2() {
}

$Class* Types$MostSpecificReturnCheck$2::load$($String* name, bool initialize) {
	$loadClass(Types$MostSpecificReturnCheck$2, name, initialize, &_Types$MostSpecificReturnCheck$2_ClassInfo_, allocate$Types$MostSpecificReturnCheck$2);
	return class$;
}

$Class* Types$MostSpecificReturnCheck$2::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com