#include <com/sun/tools/javac/code/Types$14.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$ErasedClassType.h>
#include <com/sun/tools/javac/code/Type$StructuralTypeMapping.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata$Entry$Kind.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/code/Types$25.h>
#include <com/sun/tools/javac/code/Types$TypeMapping.h>
#include <com/sun/tools/javac/code/Types.h>
#include <javax/lang/model/type/TypeKind.h>
#include <jcpp.h>

#undef ANNOTATIONS
#undef EMPTY

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$ErasedClassType = ::com::sun::tools::javac::code::Type$ErasedClassType;
using $Type$StructuralTypeMapping = ::com::sun::tools::javac::code::Type$StructuralTypeMapping;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $TypeMetadata$Entry$Kind = ::com::sun::tools::javac::code::TypeMetadata$Entry$Kind;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$25 = ::com::sun::tools::javac::code::Types$25;
using $Types$TypeMapping = ::com::sun::tools::javac::code::Types$TypeMapping;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeKind = ::javax::lang::model::type::TypeKind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Types$14_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$14, this$0)},
	{}
};

$MethodInfo _Types$14_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, 0, $method(static_cast<void(Types$14::*)($Types*)>(&Types$14::init$))},
	{"combineMetadata", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $method(static_cast<$Type*(Types$14::*)($Type*,$Type*)>(&Types$14::combineMetadata))},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Boolean;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Boolean;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Boolean;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Boolean;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Types$14_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Types",
	nullptr,
	nullptr
};

$InnerClassInfo _Types$14_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$14", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Type$StructuralTypeMapping", "com.sun.tools.javac.code.Type", "StructuralTypeMapping", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Types$14_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$14",
	"com.sun.tools.javac.code.Type$StructuralTypeMapping",
	nullptr,
	_Types$14_FieldInfo_,
	_Types$14_MethodInfo_,
	"Lcom/sun/tools/javac/code/Type$StructuralTypeMapping<Ljava/lang/Boolean;>;",
	&_Types$14_EnclosingMethodInfo_,
	_Types$14_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$14($Class* clazz) {
	return $of($alloc(Types$14));
}

void Types$14::init$($Types* this$0) {
	$set(this, this$0, this$0);
	$Type$StructuralTypeMapping::init$();
}

$Type* Types$14::combineMetadata($Type* s, $Type* t) {
	$useLocalCurrentObjectStackCache();
	$init($TypeMetadata);
	if ($nc(t)->getMetadata() != $TypeMetadata::EMPTY) {
		$init($Types$25);
		switch ($nc($Types$25::$SwitchMap$javax$lang$model$type$TypeKind)->get($nc(($($nc(s)->getKind())))->ordinal())) {
		case 1:
			{}
		case 2:
			{}
		case 3:
			{}
		case 4:
			{}
		case 5:
			{}
		case 6:
			{}
		case 7:
			{}
		case 8:
			{
				return s;
			}
		default:
			{
				$init($TypeMetadata$Entry$Kind);
				return s->cloneWithMetadata($($nc($(s->getMetadata()))->without($TypeMetadata$Entry$Kind::ANNOTATIONS)));
			}
		}
	} else {
		return s;
	}
}

$Type* Types$14::visitType($Type* t, $Boolean* recurse) {
	if ($nc(t)->isPrimitive()) {
		return t;
	} else {
		return combineMetadata(t, t);
	}
}

$Type* Types$14::visitWildcardType($Type$WildcardType* t, $Boolean* recurse) {
	$useLocalCurrentObjectStackCache();
	$var($Type, var$0, this->this$0->wildUpperBound(t));
	$var($Type, erased, this->this$0->erasure(var$0, $nc(recurse)->booleanValue()));
	return combineMetadata(erased, t);
}

$Type* Types$14::visitClassType($Type$ClassType* t, $Boolean* recurse) {
	$useLocalCurrentObjectStackCache();
	$var($Type, erased, $nc($nc(t)->tsym)->erasure(this->this$0));
	if ($nc((recurse))->booleanValue()) {
		$var($Type, var$0, $nc(erased)->getEnclosingType());
		$var($Symbol$TypeSymbol, var$1, erased->tsym);
		$init($TypeMetadata$Entry$Kind);
		$assign(erased, $new($Type$ErasedClassType, var$0, var$1, $($nc($(t->getMetadata()))->without($TypeMetadata$Entry$Kind::ANNOTATIONS))));
		return erased;
	} else {
		return combineMetadata(erased, t);
	}
}

$Type* Types$14::visitTypeVar($Type$TypeVar* t, $Boolean* recurse) {
	$useLocalCurrentObjectStackCache();
	$var($Type, var$0, $nc(t)->getUpperBound());
	$var($Type, erased, this->this$0->erasure(var$0, $nc(recurse)->booleanValue()));
	return combineMetadata(erased, t);
}

$Object* Types$14::visitWildcardType($Type$WildcardType* t, Object$* recurse) {
	return $of(this->visitWildcardType(t, $cast($Boolean, recurse)));
}

$Object* Types$14::visitClassType($Type$ClassType* t, Object$* recurse) {
	return $of(this->visitClassType(t, $cast($Boolean, recurse)));
}

$Object* Types$14::visitType($Type* t, Object$* recurse) {
	return $of(this->visitType(t, $cast($Boolean, recurse)));
}

$Object* Types$14::visitTypeVar($Type$TypeVar* t, Object$* recurse) {
	return $of(this->visitTypeVar(t, $cast($Boolean, recurse)));
}

Types$14::Types$14() {
}

$Class* Types$14::load$($String* name, bool initialize) {
	$loadClass(Types$14, name, initialize, &_Types$14_ClassInfo_, allocate$Types$14);
	return class$;
}

$Class* Types$14::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com