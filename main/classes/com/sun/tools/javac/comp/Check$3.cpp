#include <com/sun/tools/javac/comp/Check$3.h>

#include <com/sun/tools/javac/code/Type$CapturedType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$UnaryVisitor.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$CapturedType = ::com::sun::tools::javac::code::Type$CapturedType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $Types$UnaryVisitor = ::com::sun::tools::javac::code::Types$UnaryVisitor;
using $Check = ::com::sun::tools::javac::comp::Check;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Check$3_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Check;", nullptr, $FINAL | $SYNTHETIC, $field(Check$3, this$0)},
	{}
};

$MethodInfo _Check$3_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Check;)V", nullptr, 0, $method(static_cast<void(Check$3::*)($Check*)>(&Check$3::init$))},
	{"visitCapturedType", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/lang/Void;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitCapturedType", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Void;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Void;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Void;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Check$3_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Check",
	nullptr,
	nullptr
};

$InnerClassInfo _Check$3_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Check$3", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$UnaryVisitor", "com.sun.tools.javac.code.Types", "UnaryVisitor", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Check$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Check$3",
	"com.sun.tools.javac.code.Types$UnaryVisitor",
	nullptr,
	_Check$3_FieldInfo_,
	_Check$3_MethodInfo_,
	"Lcom/sun/tools/javac/code/Types$UnaryVisitor<Ljava/lang/Boolean;>;",
	&_Check$3_EnclosingMethodInfo_,
	_Check$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Check"
};

$Object* allocate$Check$3($Class* clazz) {
	return $of($alloc(Check$3));
}

void Check$3::init$($Check* this$0) {
	$set(this, this$0, this$0);
	$Types$UnaryVisitor::init$();
}

$Boolean* Check$3::visitType($Type* t, $Void* s) {
	return $Boolean::valueOf($nc(t)->isErroneous());
}

$Boolean* Check$3::visitTypeVar($Type$TypeVar* t, $Void* s) {
	return $cast($Boolean, visit($($nc(t)->getUpperBound())));
}

$Boolean* Check$3::visitCapturedType($Type$CapturedType* t, $Void* s) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(($cast($Boolean, $(visit($($nc(t)->getUpperBound()))))))->booleanValue();
	return $Boolean::valueOf(var$0 || $nc(($cast($Boolean, $(visit($($nc(t)->getLowerBound()))))))->booleanValue());
}

$Boolean* Check$3::visitWildcardType($Type$WildcardType* t, $Void* s) {
	return $cast($Boolean, visit($nc(t)->type));
}

$Object* Check$3::visitCapturedType($Type$CapturedType* t, Object$* s) {
	return $of(this->visitCapturedType(t, $cast($Void, s)));
}

$Object* Check$3::visitTypeVar($Type$TypeVar* t, Object$* s) {
	return $of(this->visitTypeVar(t, $cast($Void, s)));
}

$Object* Check$3::visitWildcardType($Type$WildcardType* t, Object$* s) {
	return $of(this->visitWildcardType(t, $cast($Void, s)));
}

$Object* Check$3::visitType($Type* t, Object$* s) {
	return $of(this->visitType(t, $cast($Void, s)));
}

Check$3::Check$3() {
}

$Class* Check$3::load$($String* name, bool initialize) {
	$loadClass(Check$3, name, initialize, &_Check$3_ClassInfo_, allocate$Check$3);
	return class$;
}

$Class* Check$3::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com