#include <com/sun/tools/javac/code/Types$16.h>

#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$UnaryVisitor.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$UnaryVisitor = ::com::sun::tools::javac::code::Types$UnaryVisitor;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $List = ::com::sun::tools::javac::util::List;
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
				namespace code {

$FieldInfo _Types$16_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$16, this$0)},
	{}
};

$MethodInfo _Types$16_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, 0, $method(static_cast<void(Types$16::*)($Types*)>(&Types$16::init$))},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Void;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Void;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Void;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Void;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Void;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Void;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Types$16_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Types",
	nullptr,
	nullptr
};

$InnerClassInfo _Types$16_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$16", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$UnaryVisitor", "com.sun.tools.javac.code.Types", "UnaryVisitor", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Types$16_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$16",
	"com.sun.tools.javac.code.Types$UnaryVisitor",
	nullptr,
	_Types$16_FieldInfo_,
	_Types$16_MethodInfo_,
	"Lcom/sun/tools/javac/code/Types$UnaryVisitor<Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;>;",
	&_Types$16_EnclosingMethodInfo_,
	_Types$16_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$16($Class* clazz) {
	return $of($alloc(Types$16));
}

void Types$16::init$($Types* this$0) {
	$set(this, this$0, this$0);
	$Types$UnaryVisitor::init$();
}

$List* Types$16::visitType($Type* t, $Void* ignored) {
	return $List::nil();
}

$List* Types$16::visitClassType($Type$ClassType* t, $Void* ignored) {
	$useLocalCurrentObjectStackCache();
	if ($nc(t)->interfaces_field == nullptr) {
		$var($List, interfaces, $nc(($cast($Symbol$ClassSymbol, t->tsym)))->getInterfaces());
		if (t->interfaces_field == nullptr) {
			$Assert::check(!$equals(t, $nc(t->tsym)->type), $of(t));
			$var($List, actuals, t->allparams());
			$var($List, formals, $nc($nc(t->tsym)->type)->allparams());
			if (t->hasErasedSupertypes()) {
				$set(t, interfaces_field, this->this$0->erasureRecursive(interfaces));
			} else if ($nc(formals)->nonEmpty()) {
				$set(t, interfaces_field, this->this$0->subst(interfaces, formals, actuals));
			} else {
				$set(t, interfaces_field, interfaces);
			}
		}
	}
	return $nc(t)->interfaces_field;
}

$List* Types$16::visitTypeVar($Type$TypeVar* t, $Void* ignored) {
	$useLocalCurrentObjectStackCache();
	if ($nc($($nc(t)->getUpperBound()))->isCompound()) {
		return this->this$0->interfaces($(t->getUpperBound()));
	}
	if ($nc($($nc(t)->getUpperBound()))->isInterface()) {
		return $List::of($(t->getUpperBound()));
	}
	return $List::nil();
}

$Object* Types$16::visitTypeVar($Type$TypeVar* t, Object$* ignored) {
	return $of(this->visitTypeVar(t, $cast($Void, ignored)));
}

$Object* Types$16::visitClassType($Type$ClassType* t, Object$* ignored) {
	return $of(this->visitClassType(t, $cast($Void, ignored)));
}

$Object* Types$16::visitType($Type* t, Object$* ignored) {
	return $of(this->visitType(t, $cast($Void, ignored)));
}

Types$16::Types$16() {
}

$Class* Types$16::load$($String* name, bool initialize) {
	$loadClass(Types$16, name, initialize, &_Types$16_ClassInfo_, allocate$Types$16);
	return class$;
}

$Class* Types$16::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com