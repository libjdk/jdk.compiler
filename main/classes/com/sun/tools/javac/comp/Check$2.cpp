#include <com/sun/tools/javac/comp/Check$2.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$CapturedType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$DefaultTypeVisitor.h>
#include <com/sun/tools/javac/code/Types$SimpleVisitor.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$CapturedType = ::com::sun::tools::javac::code::Type$CapturedType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $Types$DefaultTypeVisitor = ::com::sun::tools::javac::code::Types$DefaultTypeVisitor;
using $Types$SimpleVisitor = ::com::sun::tools::javac::code::Types$SimpleVisitor;
using $List = ::com::sun::tools::javac::util::List;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$MethodInfo _Check$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Check$2::*)()>(&Check$2::init$))},
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/Void;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitCapturedType", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/lang/Void;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitCapturedType", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Void;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Void;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Void;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Void;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Check$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Check",
	nullptr,
	nullptr
};

$InnerClassInfo _Check$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Check$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$SimpleVisitor", "com.sun.tools.javac.code.Types", "SimpleVisitor", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Check$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Check$2",
	"com.sun.tools.javac.code.Types$SimpleVisitor",
	nullptr,
	nullptr,
	_Check$2_MethodInfo_,
	"Lcom/sun/tools/javac/code/Types$SimpleVisitor<Ljava/lang/Boolean;Ljava/lang/Void;>;",
	&_Check$2_EnclosingMethodInfo_,
	_Check$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Check"
};

$Object* allocate$Check$2($Class* clazz) {
	return $of($alloc(Check$2));
}

void Check$2::init$() {
	$Types$SimpleVisitor::init$();
}

$Boolean* Check$2::visitType($Type* t, $Void* s) {
	return $Boolean::valueOf(true);
}

$Boolean* Check$2::visitClassType($Type$ClassType* t, $Void* s) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(t)->isUnion();
	if (var$0 || $nc(t)->isIntersection()) {
		return $Boolean::valueOf(false);
	}
	{
		$var($Iterator, i$, $nc($($nc(t)->allparams()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, targ, $cast($Type, i$->next()));
			{
				if (!$nc(($cast($Boolean, $(visit(targ, s)))))->booleanValue()) {
					return $Boolean::valueOf(false);
				}
			}
		}
	}
	return $Boolean::valueOf(true);
}

$Boolean* Check$2::visitTypeVar($Type$TypeVar* t, $Void* s) {
	return $Boolean::valueOf(((int64_t)($nc($nc(t)->tsym)->flags() & (uint64_t)(int64_t)4096)) == 0);
}

$Boolean* Check$2::visitCapturedType($Type$CapturedType* t, $Void* s) {
	return $Boolean::valueOf(false);
}

$Boolean* Check$2::visitArrayType($Type$ArrayType* t, $Void* s) {
	return $cast($Boolean, visit($nc(t)->elemtype, s));
}

$Boolean* Check$2::visitWildcardType($Type$WildcardType* t, $Void* s) {
	return $cast($Boolean, visit($nc(t)->type, s));
}

$Object* Check$2::visitCapturedType($Type$CapturedType* t, Object$* s) {
	return $of(this->visitCapturedType(t, $cast($Void, s)));
}

$Object* Check$2::visitTypeVar($Type$TypeVar* t, Object$* s) {
	return $of(this->visitTypeVar(t, $cast($Void, s)));
}

$Object* Check$2::visitArrayType($Type$ArrayType* t, Object$* s) {
	return $of(this->visitArrayType(t, $cast($Void, s)));
}

$Object* Check$2::visitWildcardType($Type$WildcardType* t, Object$* s) {
	return $of(this->visitWildcardType(t, $cast($Void, s)));
}

$Object* Check$2::visitClassType($Type$ClassType* t, Object$* s) {
	return $of(this->visitClassType(t, $cast($Void, s)));
}

$Object* Check$2::visitType($Type* t, Object$* s) {
	return $of(this->visitType(t, $cast($Void, s)));
}

Check$2::Check$2() {
}

$Class* Check$2::load$($String* name, bool initialize) {
	$loadClass(Check$2, name, initialize, &_Check$2_ClassInfo_, allocate$Check$2);
	return class$;
}

$Class* Check$2::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com