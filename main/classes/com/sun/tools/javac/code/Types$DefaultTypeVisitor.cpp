#include <com/sun/tools/javac/code/Types$DefaultTypeVisitor.h>

#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$CapturedType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$DelegatedType.h>
#include <com/sun/tools/javac/code/Type$ErrorType.h>
#include <com/sun/tools/javac/code/Type$ForAll.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type$ModuleType.h>
#include <com/sun/tools/javac/code/Type$PackageType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type$Visitor.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$CapturedType = ::com::sun::tools::javac::code::Type$CapturedType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$DelegatedType = ::com::sun::tools::javac::code::Type$DelegatedType;
using $Type$ErrorType = ::com::sun::tools::javac::code::Type$ErrorType;
using $Type$ForAll = ::com::sun::tools::javac::code::Type$ForAll;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Type$ModuleType = ::com::sun::tools::javac::code::Type$ModuleType;
using $Type$PackageType = ::com::sun::tools::javac::code::Type$PackageType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$Visitor = ::com::sun::tools::javac::code::Type$Visitor;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $Types = ::com::sun::tools::javac::code::Types;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Types$DefaultTypeVisitor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Types$DefaultTypeVisitor::*)()>(&Types$DefaultTypeVisitor::init$))},
	{"visit", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type;TS;)TR;", $PUBLIC | $FINAL, $method(static_cast<$Object*(Types$DefaultTypeVisitor::*)($Type*,Object$*)>(&Types$DefaultTypeVisitor::visit))},
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type$ArrayType;TS;)TR;", $PUBLIC},
	{"visitCapturedType", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type$CapturedType;TS;)TR;", $PUBLIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type$ClassType;TS;)TR;", $PUBLIC},
	{"visitErrorType", "(Lcom/sun/tools/javac/code/Type$ErrorType;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type$ErrorType;TS;)TR;", $PUBLIC},
	{"visitForAll", "(Lcom/sun/tools/javac/code/Type$ForAll;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type$ForAll;TS;)TR;", $PUBLIC},
	{"visitMethodType", "(Lcom/sun/tools/javac/code/Type$MethodType;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type$MethodType;TS;)TR;", $PUBLIC},
	{"visitModuleType", "(Lcom/sun/tools/javac/code/Type$ModuleType;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type$ModuleType;TS;)TR;", $PUBLIC},
	{"visitPackageType", "(Lcom/sun/tools/javac/code/Type$PackageType;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type$PackageType;TS;)TR;", $PUBLIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type$TypeVar;TS;)TR;", $PUBLIC},
	{"visitUndetVar", "(Lcom/sun/tools/javac/code/Type$UndetVar;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type$UndetVar;TS;)TR;", $PUBLIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type$WildcardType;TS;)TR;", $PUBLIC},
	{}
};

$InnerClassInfo _Types$DefaultTypeVisitor_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$DefaultTypeVisitor", "com.sun.tools.javac.code.Types", "DefaultTypeVisitor", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.code.Type$Visitor", "com.sun.tools.javac.code.Type", "Visitor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Types$DefaultTypeVisitor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.code.Types$DefaultTypeVisitor",
	"java.lang.Object",
	"com.sun.tools.javac.code.Type$Visitor",
	nullptr,
	_Types$DefaultTypeVisitor_MethodInfo_,
	"<R:Ljava/lang/Object;S:Ljava/lang/Object;>Ljava/lang/Object;Lcom/sun/tools/javac/code/Type$Visitor<TR;TS;>;",
	nullptr,
	_Types$DefaultTypeVisitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$DefaultTypeVisitor($Class* clazz) {
	return $of($alloc(Types$DefaultTypeVisitor));
}

void Types$DefaultTypeVisitor::init$() {
}

$Object* Types$DefaultTypeVisitor::visit($Type* t, Object$* s) {
	return $of($nc(t)->accept(static_cast<$Type$Visitor*>(this), s));
}

$Object* Types$DefaultTypeVisitor::visitClassType($Type$ClassType* t, Object$* s) {
	return $of(visitType(t, s));
}

$Object* Types$DefaultTypeVisitor::visitWildcardType($Type$WildcardType* t, Object$* s) {
	return $of(visitType(t, s));
}

$Object* Types$DefaultTypeVisitor::visitArrayType($Type$ArrayType* t, Object$* s) {
	return $of(visitType(t, s));
}

$Object* Types$DefaultTypeVisitor::visitMethodType($Type$MethodType* t, Object$* s) {
	return $of(visitType(t, s));
}

$Object* Types$DefaultTypeVisitor::visitPackageType($Type$PackageType* t, Object$* s) {
	return $of(visitType(t, s));
}

$Object* Types$DefaultTypeVisitor::visitModuleType($Type$ModuleType* t, Object$* s) {
	return $of(visitType(t, s));
}

$Object* Types$DefaultTypeVisitor::visitTypeVar($Type$TypeVar* t, Object$* s) {
	return $of(visitType(t, s));
}

$Object* Types$DefaultTypeVisitor::visitCapturedType($Type$CapturedType* t, Object$* s) {
	return $of(visitType(t, s));
}

$Object* Types$DefaultTypeVisitor::visitForAll($Type$ForAll* t, Object$* s) {
	return $of(visitType(t, s));
}

$Object* Types$DefaultTypeVisitor::visitUndetVar($Type$UndetVar* t, Object$* s) {
	return $of(visitType(t, s));
}

$Object* Types$DefaultTypeVisitor::visitErrorType($Type$ErrorType* t, Object$* s) {
	return $of(visitType(t, s));
}

Types$DefaultTypeVisitor::Types$DefaultTypeVisitor() {
}

$Class* Types$DefaultTypeVisitor::load$($String* name, bool initialize) {
	$loadClass(Types$DefaultTypeVisitor, name, initialize, &_Types$DefaultTypeVisitor_ClassInfo_, allocate$Types$DefaultTypeVisitor);
	return class$;
}

$Class* Types$DefaultTypeVisitor::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com