#include <com/sun/tools/javac/code/Types$HasSameArgs.h>

#include <com/sun/tools/javac/code/Type$ErrorType.h>
#include <com/sun/tools/javac/code/Type$ForAll.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$DefaultTypeVisitor.h>
#include <com/sun/tools/javac/code/Types$TypeRelation.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/lang/AssertionError.h>
#include <jcpp.h>

#undef FORALL
#undef METHOD

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$DelegatedType = ::com::sun::tools::javac::code::Type$DelegatedType;
using $Type$ErrorType = ::com::sun::tools::javac::code::Type$ErrorType;
using $Type$ForAll = ::com::sun::tools::javac::code::Type$ForAll;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$DefaultTypeVisitor = ::com::sun::tools::javac::code::Types$DefaultTypeVisitor;
using $Types$TypeRelation = ::com::sun::tools::javac::code::Types$TypeRelation;
using $List = ::com::sun::tools::javac::util::List;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Types$HasSameArgs_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$HasSameArgs, this$0)},
	{"strict", "Z", nullptr, 0, $field(Types$HasSameArgs, strict)},
	{}
};

$MethodInfo _Types$HasSameArgs_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;Z)V", nullptr, $PUBLIC, $method(static_cast<void(Types$HasSameArgs::*)($Types*,bool)>(&Types$HasSameArgs::init$))},
	{"visitErrorType", "(Lcom/sun/tools/javac/code/Type$ErrorType;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitErrorType", "(Lcom/sun/tools/javac/code/Type$ErrorType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitForAll", "(Lcom/sun/tools/javac/code/Type$ForAll;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitForAll", "(Lcom/sun/tools/javac/code/Type$ForAll;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitMethodType", "(Lcom/sun/tools/javac/code/Type$MethodType;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitMethodType", "(Lcom/sun/tools/javac/code/Type$MethodType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Types$HasSameArgs_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$HasSameArgs", "com.sun.tools.javac.code.Types", "HasSameArgs", $PRIVATE},
	{"com.sun.tools.javac.code.Types$TypeRelation", "com.sun.tools.javac.code.Types", "TypeRelation", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Types$HasSameArgs_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$HasSameArgs",
	"com.sun.tools.javac.code.Types$TypeRelation",
	nullptr,
	_Types$HasSameArgs_FieldInfo_,
	_Types$HasSameArgs_MethodInfo_,
	nullptr,
	nullptr,
	_Types$HasSameArgs_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$HasSameArgs($Class* clazz) {
	return $of($alloc(Types$HasSameArgs));
}

void Types$HasSameArgs::init$($Types* this$0, bool strict) {
	$set(this, this$0, this$0);
	$Types$TypeRelation::init$();
	this->strict = strict;
}

$Boolean* Types$HasSameArgs::visitType($Type* t, $Type* s) {
	$throwNew($AssertionError);
	$shouldNotReachHere();
}

$Boolean* Types$HasSameArgs::visitMethodType($Type$MethodType* t, $Type* s) {
	$init($TypeTag);
	bool var$0 = $nc(s)->hasTag($TypeTag::METHOD);
	return $Boolean::valueOf(var$0 && this->this$0->containsTypeEquivalent($nc(t)->argtypes$, $(s->getParameterTypes())));
}

$Boolean* Types$HasSameArgs::visitForAll($Type$ForAll* t, $Type* s) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	if (!$nc(s)->hasTag($TypeTag::FORALL)) {
		return $Boolean::valueOf(this->strict ? false : $nc($(visitMethodType($($nc(t)->asMethodType()), s)))->booleanValue());
	}
	$var($Type$ForAll, forAll, $cast($Type$ForAll, s));
	bool var$0 = this->this$0->hasSameBounds(t, forAll);
	return $Boolean::valueOf(var$0 && $nc(($cast($Boolean, $(visit($nc(t)->qtype, $(this->this$0->subst($nc(forAll)->qtype, forAll->tvars, t->tvars)))))))->booleanValue());
}

$Boolean* Types$HasSameArgs::visitErrorType($Type$ErrorType* t, $Type* s) {
	return $Boolean::valueOf(false);
}

$Object* Types$HasSameArgs::visitForAll($Type$ForAll* t, Object$* s) {
	return $of(this->visitForAll(t, $cast($Type, s)));
}

$Object* Types$HasSameArgs::visitErrorType($Type$ErrorType* t, Object$* s) {
	return $of(this->visitErrorType(t, $cast($Type, s)));
}

$Object* Types$HasSameArgs::visitMethodType($Type$MethodType* t, Object$* s) {
	return $of(this->visitMethodType(t, $cast($Type, s)));
}

$Object* Types$HasSameArgs::visitType($Type* t, Object$* s) {
	return $of(this->visitType(t, $cast($Type, s)));
}

Types$HasSameArgs::Types$HasSameArgs() {
}

$Class* Types$HasSameArgs::load$($String* name, bool initialize) {
	$loadClass(Types$HasSameArgs, name, initialize, &_Types$HasSameArgs_ClassInfo_, allocate$Types$HasSameArgs);
	return class$;
}

$Class* Types$HasSameArgs::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com