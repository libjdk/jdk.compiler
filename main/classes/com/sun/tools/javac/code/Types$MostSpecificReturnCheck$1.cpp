#include <com/sun/tools/javac/code/Types$MostSpecificReturnCheck$1.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$MostSpecificReturnCheck.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$MostSpecificReturnCheck = ::com::sun::tools::javac::code::Types$MostSpecificReturnCheck;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Types$MostSpecificReturnCheck$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(Types$MostSpecificReturnCheck$1::*)($String*,int32_t)>(&Types$MostSpecificReturnCheck$1::init$))},
	{"test", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Types;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Types$MostSpecificReturnCheck$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Types$MostSpecificReturnCheck",
	nullptr,
	nullptr
};

$InnerClassInfo _Types$MostSpecificReturnCheck$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$MostSpecificReturnCheck", "com.sun.tools.javac.code.Types", "MostSpecificReturnCheck", $PUBLIC | $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.tools.javac.code.Types$MostSpecificReturnCheck$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Types$MostSpecificReturnCheck$1_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.code.Types$MostSpecificReturnCheck$1",
	"com.sun.tools.javac.code.Types$MostSpecificReturnCheck",
	nullptr,
	nullptr,
	_Types$MostSpecificReturnCheck$1_MethodInfo_,
	nullptr,
	&_Types$MostSpecificReturnCheck$1_EnclosingMethodInfo_,
	_Types$MostSpecificReturnCheck$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$MostSpecificReturnCheck$1($Class* clazz) {
	return $of($alloc(Types$MostSpecificReturnCheck$1));
}

void Types$MostSpecificReturnCheck$1::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Types$MostSpecificReturnCheck::init$($enum$name, $enum$ordinal);
}

bool Types$MostSpecificReturnCheck$1::test($Type* mt1, $Type* mt2, $Types* types) {
	$useLocalCurrentObjectStackCache();
	$var($List, tvars, $nc(mt1)->getTypeArguments());
	$var($List, svars, $nc(mt2)->getTypeArguments());
	$var($Type, t, mt1->getReturnType());
	$var($Type, s, $nc(types)->subst($(mt2->getReturnType()), svars, tvars));
	bool var$0 = types->isSameType(t, s);
	if (!var$0) {
		bool var$2 = !$nc(t)->isPrimitive();
		bool var$1 = var$2 && !$nc(s)->isPrimitive();
		var$0 = var$1 && types->isSubtype(t, s);
	}
	return var$0;
}

Types$MostSpecificReturnCheck$1::Types$MostSpecificReturnCheck$1() {
}

$Class* Types$MostSpecificReturnCheck$1::load$($String* name, bool initialize) {
	$loadClass(Types$MostSpecificReturnCheck$1, name, initialize, &_Types$MostSpecificReturnCheck$1_ClassInfo_, allocate$Types$MostSpecificReturnCheck$1);
	return class$;
}

$Class* Types$MostSpecificReturnCheck$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com