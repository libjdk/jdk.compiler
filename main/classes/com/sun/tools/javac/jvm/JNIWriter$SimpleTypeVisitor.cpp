#include <com/sun/tools/javac/jvm/JNIWriter$SimpleTypeVisitor.h>

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
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/jvm/JNIWriter.h>
#include <jcpp.h>

#undef DEFAULT_VALUE

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
using $JNIWriter = ::com::sun::tools::javac::jvm::JNIWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _JNIWriter$SimpleTypeVisitor_FieldInfo_[] = {
	{"DEFAULT_VALUE", "Ljava/lang/Object;", "TR;", $PROTECTED | $FINAL, $field(JNIWriter$SimpleTypeVisitor, DEFAULT_VALUE)},
	{}
};

$MethodInfo _JNIWriter$SimpleTypeVisitor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(JNIWriter$SimpleTypeVisitor::*)()>(&JNIWriter$SimpleTypeVisitor::init$))},
	{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED, $method(static_cast<void(JNIWriter$SimpleTypeVisitor::*)(Object$*)>(&JNIWriter$SimpleTypeVisitor::init$))},
	{"defaultAction", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type;TP;)TR;", $PROTECTED},
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type$ArrayType;TP;)TR;", $PUBLIC},
	{"visitCapturedType", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type$CapturedType;TP;)TR;", $PUBLIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type$ClassType;TP;)TR;", $PUBLIC},
	{"visitErrorType", "(Lcom/sun/tools/javac/code/Type$ErrorType;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type$ErrorType;TP;)TR;", $PUBLIC},
	{"visitForAll", "(Lcom/sun/tools/javac/code/Type$ForAll;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type$ForAll;TP;)TR;", $PUBLIC},
	{"visitMethodType", "(Lcom/sun/tools/javac/code/Type$MethodType;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type$MethodType;TP;)TR;", $PUBLIC},
	{"visitModuleType", "(Lcom/sun/tools/javac/code/Type$ModuleType;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type$ModuleType;TP;)TR;", $PUBLIC},
	{"visitPackageType", "(Lcom/sun/tools/javac/code/Type$PackageType;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type$PackageType;TP;)TR;", $PUBLIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type;TP;)TR;", $PUBLIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type$TypeVar;TP;)TR;", $PUBLIC},
	{"visitUndetVar", "(Lcom/sun/tools/javac/code/Type$UndetVar;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type$UndetVar;TP;)TR;", $PUBLIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type$WildcardType;TP;)TR;", $PUBLIC},
	{}
};

$InnerClassInfo _JNIWriter$SimpleTypeVisitor_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.JNIWriter$SimpleTypeVisitor", "com.sun.tools.javac.jvm.JNIWriter", "SimpleTypeVisitor", $STATIC},
	{"com.sun.tools.javac.code.Type$Visitor", "com.sun.tools.javac.code.Type", "Visitor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JNIWriter$SimpleTypeVisitor_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.JNIWriter$SimpleTypeVisitor",
	"java.lang.Object",
	"com.sun.tools.javac.code.Type$Visitor",
	_JNIWriter$SimpleTypeVisitor_FieldInfo_,
	_JNIWriter$SimpleTypeVisitor_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljava/lang/Object;Lcom/sun/tools/javac/code/Type$Visitor<TR;TP;>;",
	nullptr,
	_JNIWriter$SimpleTypeVisitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.JNIWriter"
};

$Object* allocate$JNIWriter$SimpleTypeVisitor($Class* clazz) {
	return $of($alloc(JNIWriter$SimpleTypeVisitor));
}

void JNIWriter$SimpleTypeVisitor::init$() {
	$set(this, DEFAULT_VALUE, nullptr);
}

void JNIWriter$SimpleTypeVisitor::init$(Object$* defaultValue) {
	$set(this, DEFAULT_VALUE, defaultValue);
}

$Object* JNIWriter$SimpleTypeVisitor::defaultAction($Type* t, Object$* p) {
	return $of(this->DEFAULT_VALUE);
}

$Object* JNIWriter$SimpleTypeVisitor::visitClassType($Type$ClassType* t, Object$* p) {
	return $of(defaultAction(t, p));
}

$Object* JNIWriter$SimpleTypeVisitor::visitWildcardType($Type$WildcardType* t, Object$* p) {
	return $of(defaultAction(t, p));
}

$Object* JNIWriter$SimpleTypeVisitor::visitArrayType($Type$ArrayType* t, Object$* p) {
	return $of(defaultAction(t, p));
}

$Object* JNIWriter$SimpleTypeVisitor::visitMethodType($Type$MethodType* t, Object$* p) {
	return $of(defaultAction(t, p));
}

$Object* JNIWriter$SimpleTypeVisitor::visitPackageType($Type$PackageType* t, Object$* p) {
	return $of(defaultAction(t, p));
}

$Object* JNIWriter$SimpleTypeVisitor::visitTypeVar($Type$TypeVar* t, Object$* p) {
	return $of(defaultAction(t, p));
}

$Object* JNIWriter$SimpleTypeVisitor::visitCapturedType($Type$CapturedType* t, Object$* p) {
	return $of(defaultAction(t, p));
}

$Object* JNIWriter$SimpleTypeVisitor::visitForAll($Type$ForAll* t, Object$* p) {
	return $of(defaultAction(t, p));
}

$Object* JNIWriter$SimpleTypeVisitor::visitUndetVar($Type$UndetVar* t, Object$* p) {
	return $of(defaultAction(t, p));
}

$Object* JNIWriter$SimpleTypeVisitor::visitErrorType($Type$ErrorType* t, Object$* p) {
	return $of(defaultAction(t, p));
}

$Object* JNIWriter$SimpleTypeVisitor::visitType($Type* t, Object$* p) {
	return $of(defaultAction(t, p));
}

$Object* JNIWriter$SimpleTypeVisitor::visitModuleType($Type$ModuleType* t, Object$* p) {
	return $of(defaultAction(t, p));
}

JNIWriter$SimpleTypeVisitor::JNIWriter$SimpleTypeVisitor() {
}

$Class* JNIWriter$SimpleTypeVisitor::load$($String* name, bool initialize) {
	$loadClass(JNIWriter$SimpleTypeVisitor, name, initialize, &_JNIWriter$SimpleTypeVisitor_ClassInfo_, allocate$JNIWriter$SimpleTypeVisitor);
	return class$;
}

$Class* JNIWriter$SimpleTypeVisitor::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com