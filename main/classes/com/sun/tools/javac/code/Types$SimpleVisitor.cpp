#include <com/sun/tools/javac/code/Types$SimpleVisitor.h>

#include <com/sun/tools/javac/code/Type$CapturedType.h>
#include <com/sun/tools/javac/code/Type$ForAll.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$DefaultTypeVisitor.h>
#include <com/sun/tools/javac/code/Types.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$CapturedType = ::com::sun::tools::javac::code::Type$CapturedType;
using $Type$DelegatedType = ::com::sun::tools::javac::code::Type$DelegatedType;
using $Type$ForAll = ::com::sun::tools::javac::code::Type$ForAll;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$DefaultTypeVisitor = ::com::sun::tools::javac::code::Types$DefaultTypeVisitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Types$SimpleVisitor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Types$SimpleVisitor::*)()>(&Types$SimpleVisitor::init$))},
	{"visitCapturedType", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type$CapturedType;TS;)TR;", $PUBLIC},
	{"visitForAll", "(Lcom/sun/tools/javac/code/Type$ForAll;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type$ForAll;TS;)TR;", $PUBLIC},
	{"visitUndetVar", "(Lcom/sun/tools/javac/code/Type$UndetVar;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/code/Type$UndetVar;TS;)TR;", $PUBLIC},
	{}
};

$InnerClassInfo _Types$SimpleVisitor_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$SimpleVisitor", "com.sun.tools.javac.code.Types", "SimpleVisitor", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.code.Types$DefaultTypeVisitor", "com.sun.tools.javac.code.Types", "DefaultTypeVisitor", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Types$SimpleVisitor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.code.Types$SimpleVisitor",
	"com.sun.tools.javac.code.Types$DefaultTypeVisitor",
	nullptr,
	nullptr,
	_Types$SimpleVisitor_MethodInfo_,
	"<R:Ljava/lang/Object;S:Ljava/lang/Object;>Lcom/sun/tools/javac/code/Types$DefaultTypeVisitor<TR;TS;>;",
	nullptr,
	_Types$SimpleVisitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$SimpleVisitor($Class* clazz) {
	return $of($alloc(Types$SimpleVisitor));
}

void Types$SimpleVisitor::init$() {
	$Types$DefaultTypeVisitor::init$();
}

$Object* Types$SimpleVisitor::visitCapturedType($Type$CapturedType* t, Object$* s) {
	return $of(visitTypeVar(t, s));
}

$Object* Types$SimpleVisitor::visitForAll($Type$ForAll* t, Object$* s) {
	return $of(visit($nc(t)->qtype, s));
}

$Object* Types$SimpleVisitor::visitUndetVar($Type$UndetVar* t, Object$* s) {
	return $of(visit($nc(t)->qtype, s));
}

Types$SimpleVisitor::Types$SimpleVisitor() {
}

$Class* Types$SimpleVisitor::load$($String* name, bool initialize) {
	$loadClass(Types$SimpleVisitor, name, initialize, &_Types$SimpleVisitor_ClassInfo_, allocate$Types$SimpleVisitor);
	return class$;
}

$Class* Types$SimpleVisitor::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com