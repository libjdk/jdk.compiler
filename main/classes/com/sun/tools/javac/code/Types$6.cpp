#include <com/sun/tools/javac/code/Types$6.h>

#include <com/sun/tools/javac/code/Type$DelegatedType.h>
#include <com/sun/tools/javac/code/Type$ErrorType.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$TypeRelation.h>
#include <com/sun/tools/javac/code/Types.h>
#include <jcpp.h>

#undef WILDCARD

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$DelegatedType = ::com::sun::tools::javac::code::Type$DelegatedType;
using $Type$ErrorType = ::com::sun::tools::javac::code::Type$ErrorType;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$TypeRelation = ::com::sun::tools::javac::code::Types$TypeRelation;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Types$6_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$6, this$0)},
	{}
};

$MethodInfo _Types$6_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, 0, $method(static_cast<void(Types$6::*)($Types*)>(&Types$6::init$))},
	{"visitErrorType", "(Lcom/sun/tools/javac/code/Type$ErrorType;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitErrorType", "(Lcom/sun/tools/javac/code/Type$ErrorType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitUndetVar", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitUndetVar", "(Lcom/sun/tools/javac/code/Type$UndetVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Types$6_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Types",
	nullptr,
	nullptr
};

$InnerClassInfo _Types$6_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$6", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$TypeRelation", "com.sun.tools.javac.code.Types", "TypeRelation", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Types$6_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$6",
	"com.sun.tools.javac.code.Types$TypeRelation",
	nullptr,
	_Types$6_FieldInfo_,
	_Types$6_MethodInfo_,
	nullptr,
	&_Types$6_EnclosingMethodInfo_,
	_Types$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$6($Class* clazz) {
	return $of($alloc(Types$6));
}

void Types$6::init$($Types* this$0) {
	$set(this, this$0, this$0);
	$Types$TypeRelation::init$();
}

$Boolean* Types$6::visitType($Type* t, $Type* s) {
	if ($nc(s)->isPartial()) {
		return $Boolean::valueOf(this->this$0->containedBy(s, t));
	} else {
		return $Boolean::valueOf(this->this$0->isSameType(t, s));
	}
}

$Boolean* Types$6::visitWildcardType($Type$WildcardType* t, $Type* s) {
	$useLocalCurrentObjectStackCache();
	if ($nc(s)->isPartial()) {
		return $Boolean::valueOf(this->this$0->containedBy(s, t));
	} else {
		bool var$1 = this->this$0->isSameWildcard(t, s);
		bool var$0 = var$1 || this->this$0->isCaptureOf(s, t);
		if (!var$0) {
			bool var$3 = $nc(t)->isExtendsBound();
			if (!var$3) {
				$var($Type, var$4, this->this$0->wildLowerBound(t));
				var$3 = this->this$0->isSubtypeNoCapture(var$4, $(this->this$0->wildLowerBound(s)));
			}
			bool var$2 = (var$3);
			if (var$2) {
				bool var$5 = $nc(t)->isSuperBound();
				if (!var$5) {
					$var($Type, var$6, this->this$0->wildUpperBound(s));
					var$5 = this->this$0->isSubtypeNoCapture(var$6, $(this->this$0->wildUpperBound(t)));
				}
				var$2 = (var$5);
			}
			var$0 = (var$2);
		}
		return $Boolean::valueOf(var$0);
	}
}

$Boolean* Types$6::visitUndetVar($Type$UndetVar* t, $Type* s) {
	$init($TypeTag);
	if (!$nc(s)->hasTag($TypeTag::WILDCARD)) {
		return $Boolean::valueOf(this->this$0->isSameType(t, s));
	} else {
		return $Boolean::valueOf(false);
	}
}

$Boolean* Types$6::visitErrorType($Type$ErrorType* t, $Type* s) {
	return $Boolean::valueOf(true);
}

$Object* Types$6::visitUndetVar($Type$UndetVar* t, Object$* s) {
	return $of(this->visitUndetVar(t, $cast($Type, s)));
}

$Object* Types$6::visitErrorType($Type$ErrorType* t, Object$* s) {
	return $of(this->visitErrorType(t, $cast($Type, s)));
}

$Object* Types$6::visitWildcardType($Type$WildcardType* t, Object$* s) {
	return $of(this->visitWildcardType(t, $cast($Type, s)));
}

$Object* Types$6::visitType($Type* t, Object$* s) {
	return $of(this->visitType(t, $cast($Type, s)));
}

Types$6::Types$6() {
}

$Class* Types$6::load$($String* name, bool initialize) {
	$loadClass(Types$6, name, initialize, &_Types$6_ClassInfo_, allocate$Types$6);
	return class$;
}

$Class* Types$6::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com