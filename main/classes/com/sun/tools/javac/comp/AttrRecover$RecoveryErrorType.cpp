#include <com/sun/tools/javac/comp/AttrRecover$RecoveryErrorType.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$ErrorType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/AttrRecover.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ErrorType = ::com::sun::tools::javac::code::Type$ErrorType;
using $AttrRecover = ::com::sun::tools::javac::comp::AttrRecover;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _AttrRecover$RecoveryErrorType_FieldInfo_[] = {
	{"candidateSymbol", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC | $FINAL, $field(AttrRecover$RecoveryErrorType, candidateSymbol)},
	{}
};

$MethodInfo _AttrRecover$RecoveryErrorType_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Type$ErrorType;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(AttrRecover$RecoveryErrorType::*)($Type$ErrorType*,$Symbol*)>(&AttrRecover$RecoveryErrorType::init$))},
	{}
};

$InnerClassInfo _AttrRecover$RecoveryErrorType_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.AttrRecover$RecoveryErrorType", "com.sun.tools.javac.comp.AttrRecover", "RecoveryErrorType", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.code.Type$ErrorType", "com.sun.tools.javac.code.Type", "ErrorType", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _AttrRecover$RecoveryErrorType_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.AttrRecover$RecoveryErrorType",
	"com.sun.tools.javac.code.Type$ErrorType",
	nullptr,
	_AttrRecover$RecoveryErrorType_FieldInfo_,
	_AttrRecover$RecoveryErrorType_MethodInfo_,
	nullptr,
	nullptr,
	_AttrRecover$RecoveryErrorType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.AttrRecover"
};

$Object* allocate$AttrRecover$RecoveryErrorType($Class* clazz) {
	return $of($alloc(AttrRecover$RecoveryErrorType));
}

void AttrRecover$RecoveryErrorType::init$($Type$ErrorType* original, $Symbol* candidateSymbol) {
	$Type$ErrorType::init$($($nc(original)->getOriginalType()), original->tsym);
	$set(this, candidateSymbol, candidateSymbol);
}

AttrRecover$RecoveryErrorType::AttrRecover$RecoveryErrorType() {
}

$Class* AttrRecover$RecoveryErrorType::load$($String* name, bool initialize) {
	$loadClass(AttrRecover$RecoveryErrorType, name, initialize, &_AttrRecover$RecoveryErrorType_ClassInfo_, allocate$AttrRecover$RecoveryErrorType);
	return class$;
}

$Class* AttrRecover$RecoveryErrorType::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com