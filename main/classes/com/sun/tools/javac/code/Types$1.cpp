#include <com/sun/tools/javac/code/Types$1.h>

#include <com/sun/tools/javac/code/BoundKind.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$UnaryVisitor.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

#undef UNBOUND

using $BoundKind = ::com::sun::tools::javac::code::BoundKind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$UnaryVisitor = ::com::sun::tools::javac::code::Types$UnaryVisitor;
using $List = ::com::sun::tools::javac::util::List;
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
				namespace code {

$FieldInfo _Types$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$1, this$0)},
	{}
};

$MethodInfo _Types$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, 0, $method(static_cast<void(Types$1::*)($Types*)>(&Types$1::init$))},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Void;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Void;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Types$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Types",
	nullptr,
	nullptr
};

$InnerClassInfo _Types$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$UnaryVisitor", "com.sun.tools.javac.code.Types", "UnaryVisitor", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Types$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$1",
	"com.sun.tools.javac.code.Types$UnaryVisitor",
	nullptr,
	_Types$1_FieldInfo_,
	_Types$1_MethodInfo_,
	"Lcom/sun/tools/javac/code/Types$UnaryVisitor<Ljava/lang/Boolean;>;",
	&_Types$1_EnclosingMethodInfo_,
	_Types$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$1($Class* clazz) {
	return $of($alloc(Types$1));
}

void Types$1::init$($Types* this$0) {
	$set(this, this$0, this$0);
	$Types$UnaryVisitor::init$();
}

$Boolean* Types$1::visitType($Type* t, $Void* ignored) {
	return $Boolean::valueOf(true);
}

$Boolean* Types$1::visitClassType($Type$ClassType* t, $Void* ignored) {
	$useLocalCurrentObjectStackCache();
	$var($List, parms, $nc($nc($nc(t)->tsym)->type)->allparams());
	$var($List, args, t->allparams());
	while ($nc(parms)->nonEmpty()) {
		$init($BoundKind);
		$var($Type$WildcardType, unb, $new($Type$WildcardType, $nc(this->this$0->syms)->objectType, $BoundKind::UNBOUND, static_cast<$Symbol$TypeSymbol*>($nc(this->this$0->syms)->boundClass), $cast($Type$TypeVar, parms->head)));
		if (!this->this$0->containsType($cast($Type, $nc(args)->head), static_cast<$Type*>(unb))) {
			return $Boolean::valueOf(false);
		}
		$assign(parms, parms->tail);
		$assign(args, $nc(args)->tail);
	}
	return $Boolean::valueOf(true);
}

$Object* Types$1::visitClassType($Type$ClassType* t, Object$* ignored) {
	return $of(this->visitClassType(t, $cast($Void, ignored)));
}

$Object* Types$1::visitType($Type* t, Object$* ignored) {
	return $of(this->visitType(t, $cast($Void, ignored)));
}

Types$1::Types$1() {
}

$Class* Types$1::load$($String* name, bool initialize) {
	$loadClass(Types$1, name, initialize, &_Types$1_ClassInfo_, allocate$Types$1);
	return class$;
}

$Class* Types$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com