#include <com/sun/tools/javac/code/Printer$1.h>

#include <com/sun/tools/javac/api/Messages.h>
#include <com/sun/tools/javac/code/Printer.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$CapturedType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$ErrorType.h>
#include <com/sun/tools/javac/code/Type$ForAll.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type$ModuleType.h>
#include <com/sun/tools/javac/code/Type$PackageType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef PRIME

using $Messages = ::com::sun::tools::javac::api::Messages;
using $Printer = ::com::sun::tools::javac::code::Printer;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$OperatorSymbol = ::com::sun::tools::javac::code::Symbol$OperatorSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$CapturedType = ::com::sun::tools::javac::code::Type$CapturedType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$ErrorType = ::com::sun::tools::javac::code::Type$ErrorType;
using $Type$ForAll = ::com::sun::tools::javac::code::Type$ForAll;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Type$ModuleType = ::com::sun::tools::javac::code::Type$ModuleType;
using $Type$PackageType = ::com::sun::tools::javac::code::Type$PackageType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Printer$1_FieldInfo_[] = {
	{"val$messages", "Lcom/sun/tools/javac/api/Messages;", nullptr, $FINAL | $SYNTHETIC, $field(Printer$1, val$messages)},
	{}
};

$MethodInfo _Printer$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/api/Messages;)V", nullptr, 0, $method(static_cast<void(Printer$1::*)($Messages*)>(&Printer$1::init$))},
	{"capturedVarId", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"localize", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PROTECTED | $TRANSIENT},
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitCapturedType", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitClassSymbol", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitErrorType", "(Lcom/sun/tools/javac/code/Type$ErrorType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitForAll", "(Lcom/sun/tools/javac/code/Type$ForAll;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitMethodSymbol", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitMethodType", "(Lcom/sun/tools/javac/code/Type$MethodType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitModuleType", "(Lcom/sun/tools/javac/code/Type$ModuleType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitOperatorSymbol", "(Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitPackageSymbol", "(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitPackageType", "(Lcom/sun/tools/javac/code/Type$PackageType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitSymbol", "(Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitTypeSymbol", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitUndetVar", "(Lcom/sun/tools/javac/code/Type$UndetVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitVarSymbol", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Printer$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Printer",
	"createStandardPrinter",
	"(Lcom/sun/tools/javac/api/Messages;)Lcom/sun/tools/javac/code/Printer;"
};

$InnerClassInfo _Printer$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Printer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Printer$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Printer$1",
	"com.sun.tools.javac.code.Printer",
	nullptr,
	_Printer$1_FieldInfo_,
	_Printer$1_MethodInfo_,
	nullptr,
	&_Printer$1_EnclosingMethodInfo_,
	_Printer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Printer"
};

$Object* allocate$Printer$1($Class* clazz) {
	return $of($alloc(Printer$1));
}

void Printer$1::init$($Messages* val$messages) {
	$set(this, val$messages, val$messages);
	$Printer::init$();
}

$String* Printer$1::localize($Locale* locale, $String* key, $ObjectArray* args) {
	return $nc(this->val$messages)->getLocalizedString(locale, key, args);
}

$String* Printer$1::capturedVarId($Type$CapturedType* t, $Locale* locale) {
	return $str({$$str($mod(((int64_t)($nc(t)->hashCode() & (uint64_t)(int64_t)0x00000000FFFFFFFF)), $Printer::PRIME)), ""_s});
}

$Object* Printer$1::visitType($Type* t, Object$* locale) {
	return $of($Printer::visitType(t, $cast($Locale, locale)));
}

$Object* Printer$1::visitErrorType($Type$ErrorType* t, Object$* locale) {
	return $of($Printer::visitErrorType(t, $cast($Locale, locale)));
}

$Object* Printer$1::visitUndetVar($Type$UndetVar* t, Object$* locale) {
	return $of($Printer::visitUndetVar(t, $cast($Locale, locale)));
}

$Object* Printer$1::visitForAll($Type$ForAll* t, Object$* locale) {
	return $of($Printer::visitForAll(t, $cast($Locale, locale)));
}

$Object* Printer$1::visitCapturedType($Type$CapturedType* t, Object$* locale) {
	return $of($Printer::visitCapturedType(t, $cast($Locale, locale)));
}

$Object* Printer$1::visitTypeVar($Type$TypeVar* t, Object$* locale) {
	return $of($Printer::visitTypeVar(t, $cast($Locale, locale)));
}

$Object* Printer$1::visitModuleType($Type$ModuleType* t, Object$* locale) {
	return $of($Printer::visitModuleType(t, $cast($Locale, locale)));
}

$Object* Printer$1::visitPackageType($Type$PackageType* t, Object$* locale) {
	return $of($Printer::visitPackageType(t, $cast($Locale, locale)));
}

$Object* Printer$1::visitMethodType($Type$MethodType* t, Object$* locale) {
	return $of($Printer::visitMethodType(t, $cast($Locale, locale)));
}

$Object* Printer$1::visitArrayType($Type$ArrayType* t, Object$* locale) {
	return $of($Printer::visitArrayType(t, $cast($Locale, locale)));
}

$Object* Printer$1::visitWildcardType($Type$WildcardType* t, Object$* locale) {
	return $of($Printer::visitWildcardType(t, $cast($Locale, locale)));
}

$Object* Printer$1::visitClassType($Type$ClassType* t, Object$* locale) {
	return $of($Printer::visitClassType(t, $cast($Locale, locale)));
}

$Object* Printer$1::visitSymbol($Symbol* s, Object$* locale) {
	return $of($Printer::visitSymbol(s, $cast($Locale, locale)));
}

$Object* Printer$1::visitTypeSymbol($Symbol$TypeSymbol* s, Object$* locale) {
	return $of($Printer::visitTypeSymbol(s, $cast($Locale, locale)));
}

$Object* Printer$1::visitVarSymbol($Symbol$VarSymbol* s, Object$* locale) {
	return $of($Printer::visitVarSymbol(s, $cast($Locale, locale)));
}

$Object* Printer$1::visitOperatorSymbol($Symbol$OperatorSymbol* s, Object$* locale) {
	return $of($Printer::visitOperatorSymbol(s, $cast($Locale, locale)));
}

$Object* Printer$1::visitPackageSymbol($Symbol$PackageSymbol* s, Object$* locale) {
	return $of($Printer::visitPackageSymbol(s, $cast($Locale, locale)));
}

$Object* Printer$1::visitMethodSymbol($Symbol$MethodSymbol* s, Object$* locale) {
	return $of($Printer::visitMethodSymbol(s, $cast($Locale, locale)));
}

$Object* Printer$1::visitClassSymbol($Symbol$ClassSymbol* sym, Object$* locale) {
	return $of($Printer::visitClassSymbol(sym, $cast($Locale, locale)));
}

Printer$1::Printer$1() {
}

$Class* Printer$1::load$($String* name, bool initialize) {
	$loadClass(Printer$1, name, initialize, &_Printer$1_ClassInfo_, allocate$Printer$1);
	return class$;
}

$Class* Printer$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com