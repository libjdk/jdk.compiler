#include <com/sun/tools/javac/code/TypeAnnotations$TypeAnnotationPositions$1.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$CapturedType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$DelegatedType.h>
#include <com/sun/tools/javac/code/Type$ErrorType.h>
#include <com/sun/tools/javac/code/Type$ForAll.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type$ModuleType.h>
#include <com/sun/tools/javac/code/Type$PackageType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type$Visitor.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeAnnotations$TypeAnnotationPositions.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$CapturedType = ::com::sun::tools::javac::code::Type$CapturedType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$DelegatedType = ::com::sun::tools::javac::code::Type$DelegatedType;
using $Type$ErrorType = ::com::sun::tools::javac::code::Type$ErrorType;
using $Type$ForAll = ::com::sun::tools::javac::code::Type$ForAll;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Type$ModuleType = ::com::sun::tools::javac::code::Type$ModuleType;
using $Type$PackageType = ::com::sun::tools::javac::code::Type$PackageType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$Visitor = ::com::sun::tools::javac::code::Type$Visitor;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $TypeAnnotations$TypeAnnotationPositions = ::com::sun::tools::javac::code::TypeAnnotations$TypeAnnotationPositions;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $List = ::com::sun::tools::javac::util::List;
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

$FieldInfo _TypeAnnotations$TypeAnnotationPositions$1_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/code/TypeAnnotations$TypeAnnotationPositions;", nullptr, $FINAL | $SYNTHETIC, $field(TypeAnnotations$TypeAnnotationPositions$1, this$1)},
	{"val$stopAt", "Lcom/sun/tools/javac/code/Type;", nullptr, $FINAL | $SYNTHETIC, $field(TypeAnnotations$TypeAnnotationPositions$1, val$stopAt)},
	{}
};

$MethodInfo _TypeAnnotations$TypeAnnotationPositions$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/TypeAnnotations$TypeAnnotationPositions;Lcom/sun/tools/javac/code/Type;)V", "()V", 0, $method(static_cast<void(TypeAnnotations$TypeAnnotationPositions$1::*)($TypeAnnotations$TypeAnnotationPositions*,$Type*)>(&TypeAnnotations$TypeAnnotationPositions$1::init$))},
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type$ArrayType;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;)Lcom/sun/tools/javac/code/Type;", $PUBLIC},
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitCapturedType", "(Lcom/sun/tools/javac/code/Type$CapturedType;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type$CapturedType;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;)Lcom/sun/tools/javac/code/Type;", $PUBLIC},
	{"visitCapturedType", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type$ClassType;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;)Lcom/sun/tools/javac/code/Type;", $PUBLIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitErrorType", "(Lcom/sun/tools/javac/code/Type$ErrorType;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type$ErrorType;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;)Lcom/sun/tools/javac/code/Type;", $PUBLIC},
	{"visitErrorType", "(Lcom/sun/tools/javac/code/Type$ErrorType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitForAll", "(Lcom/sun/tools/javac/code/Type$ForAll;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type$ForAll;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;)Lcom/sun/tools/javac/code/Type;", $PUBLIC},
	{"visitForAll", "(Lcom/sun/tools/javac/code/Type$ForAll;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitMethodType", "(Lcom/sun/tools/javac/code/Type$MethodType;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type$MethodType;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;)Lcom/sun/tools/javac/code/Type;", $PUBLIC},
	{"visitMethodType", "(Lcom/sun/tools/javac/code/Type$MethodType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitModuleType", "(Lcom/sun/tools/javac/code/Type$ModuleType;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type$ModuleType;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;)Lcom/sun/tools/javac/code/Type;", $PUBLIC},
	{"visitModuleType", "(Lcom/sun/tools/javac/code/Type$ModuleType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitPackageType", "(Lcom/sun/tools/javac/code/Type$PackageType;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type$PackageType;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;)Lcom/sun/tools/javac/code/Type;", $PUBLIC},
	{"visitPackageType", "(Lcom/sun/tools/javac/code/Type$PackageType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;)Lcom/sun/tools/javac/code/Type;", $PUBLIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type$TypeVar;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;)Lcom/sun/tools/javac/code/Type;", $PUBLIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitUndetVar", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;)Lcom/sun/tools/javac/code/Type;", $PUBLIC},
	{"visitUndetVar", "(Lcom/sun/tools/javac/code/Type$UndetVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type$WildcardType;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;)Lcom/sun/tools/javac/code/Type;", $PUBLIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _TypeAnnotations$TypeAnnotationPositions$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.TypeAnnotations$TypeAnnotationPositions",
	"typeWithAnnotations",
	"(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type;"
};

$InnerClassInfo _TypeAnnotations$TypeAnnotationPositions$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.TypeAnnotations$TypeAnnotationPositions", "com.sun.tools.javac.code.TypeAnnotations", "TypeAnnotationPositions", $PRIVATE},
	{"com.sun.tools.javac.code.TypeAnnotations$TypeAnnotationPositions$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Type$Visitor", "com.sun.tools.javac.code.Type", "Visitor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.code.Attribute$TypeCompound", "com.sun.tools.javac.code.Attribute", "TypeCompound", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TypeAnnotations$TypeAnnotationPositions$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.TypeAnnotations$TypeAnnotationPositions$1",
	"java.lang.Object",
	"com.sun.tools.javac.code.Type$Visitor",
	_TypeAnnotations$TypeAnnotationPositions$1_FieldInfo_,
	_TypeAnnotations$TypeAnnotationPositions$1_MethodInfo_,
	"Ljava/lang/Object;Lcom/sun/tools/javac/code/Type$Visitor<Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;>;",
	&_TypeAnnotations$TypeAnnotationPositions$1_EnclosingMethodInfo_,
	_TypeAnnotations$TypeAnnotationPositions$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.TypeAnnotations"
};

$Object* allocate$TypeAnnotations$TypeAnnotationPositions$1($Class* clazz) {
	return $of($alloc(TypeAnnotations$TypeAnnotationPositions$1));
}

void TypeAnnotations$TypeAnnotationPositions$1::init$($TypeAnnotations$TypeAnnotationPositions* this$1, $Type* val$stopAt) {
	$set(this, this$1, this$1);
	$set(this, val$stopAt, val$stopAt);
}

$Type* TypeAnnotations$TypeAnnotationPositions$1::visitClassType($Type$ClassType* t, $List* s) {
	$useLocalCurrentObjectStackCache();
	$init($Type);
	if ($equals(t, this->val$stopAt) || $equals($nc(t)->getEnclosingType(), $Type::noType)) {
		return t->annotatedType(s);
	} else {
		$var($Type, var$0, $cast($Type, $nc($(t->getEnclosingType()))->accept(static_cast<$Type$Visitor*>(this), $of(s))));
		$var($List, var$1, t->typarams_field);
		$var($Symbol$TypeSymbol, var$2, t->tsym);
		$var($Type$ClassType, ret, $new($Type$ClassType, var$0, var$1, var$2, $(t->getMetadata())));
		$set(ret, all_interfaces_field, t->all_interfaces_field);
		$set(ret, allparams_field, t->allparams_field);
		$set(ret, interfaces_field, t->interfaces_field);
		ret->rank_field = t->rank_field;
		$set(ret, supertype_field, t->supertype_field);
		return ret;
	}
}

$Type* TypeAnnotations$TypeAnnotationPositions$1::visitWildcardType($Type$WildcardType* t, $List* s) {
	return $nc(t)->annotatedType(s);
}

$Type* TypeAnnotations$TypeAnnotationPositions$1::visitArrayType($Type$ArrayType* t, $List* s) {
	$useLocalCurrentObjectStackCache();
	$var($Type, var$0, $cast($Type, $nc($nc(t)->elemtype)->accept(static_cast<$Type$Visitor*>(this), $of(s))));
	$var($Symbol$TypeSymbol, var$1, t->tsym);
	$var($Type$ArrayType, ret, $new($Type$ArrayType, var$0, var$1, $(t->getMetadata())));
	return ret;
}

$Type* TypeAnnotations$TypeAnnotationPositions$1::visitMethodType($Type$MethodType* t, $List* s) {
	return t;
}

$Type* TypeAnnotations$TypeAnnotationPositions$1::visitPackageType($Type$PackageType* t, $List* s) {
	return t;
}

$Type* TypeAnnotations$TypeAnnotationPositions$1::visitTypeVar($Type$TypeVar* t, $List* s) {
	return $nc(t)->annotatedType(s);
}

$Type* TypeAnnotations$TypeAnnotationPositions$1::visitModuleType($Type$ModuleType* t, $List* s) {
	return $nc(t)->annotatedType(s);
}

$Type* TypeAnnotations$TypeAnnotationPositions$1::visitCapturedType($Type$CapturedType* t, $List* s) {
	return $nc(t)->annotatedType(s);
}

$Type* TypeAnnotations$TypeAnnotationPositions$1::visitForAll($Type$ForAll* t, $List* s) {
	return t;
}

$Type* TypeAnnotations$TypeAnnotationPositions$1::visitUndetVar($Type$UndetVar* t, $List* s) {
	return t;
}

$Type* TypeAnnotations$TypeAnnotationPositions$1::visitErrorType($Type$ErrorType* t, $List* s) {
	return $nc(t)->annotatedType(s);
}

$Type* TypeAnnotations$TypeAnnotationPositions$1::visitType($Type* t, $List* s) {
	return $nc(t)->annotatedType(s);
}

$Object* TypeAnnotations$TypeAnnotationPositions$1::visitType($Type* t, Object$* s) {
	return $of(this->visitType(t, $cast($List, s)));
}

$Object* TypeAnnotations$TypeAnnotationPositions$1::visitErrorType($Type$ErrorType* t, Object$* s) {
	return $of(this->visitErrorType(t, $cast($List, s)));
}

$Object* TypeAnnotations$TypeAnnotationPositions$1::visitUndetVar($Type$UndetVar* t, Object$* s) {
	return $of(this->visitUndetVar(t, $cast($List, s)));
}

$Object* TypeAnnotations$TypeAnnotationPositions$1::visitForAll($Type$ForAll* t, Object$* s) {
	return $of(this->visitForAll(t, $cast($List, s)));
}

$Object* TypeAnnotations$TypeAnnotationPositions$1::visitCapturedType($Type$CapturedType* t, Object$* s) {
	return $of(this->visitCapturedType(t, $cast($List, s)));
}

$Object* TypeAnnotations$TypeAnnotationPositions$1::visitTypeVar($Type$TypeVar* t, Object$* s) {
	return $of(this->visitTypeVar(t, $cast($List, s)));
}

$Object* TypeAnnotations$TypeAnnotationPositions$1::visitModuleType($Type$ModuleType* t, Object$* s) {
	return $of(this->visitModuleType(t, $cast($List, s)));
}

$Object* TypeAnnotations$TypeAnnotationPositions$1::visitPackageType($Type$PackageType* t, Object$* s) {
	return $of(this->visitPackageType(t, $cast($List, s)));
}

$Object* TypeAnnotations$TypeAnnotationPositions$1::visitMethodType($Type$MethodType* t, Object$* s) {
	return $of(this->visitMethodType(t, $cast($List, s)));
}

$Object* TypeAnnotations$TypeAnnotationPositions$1::visitArrayType($Type$ArrayType* t, Object$* s) {
	return $of(this->visitArrayType(t, $cast($List, s)));
}

$Object* TypeAnnotations$TypeAnnotationPositions$1::visitWildcardType($Type$WildcardType* t, Object$* s) {
	return $of(this->visitWildcardType(t, $cast($List, s)));
}

$Object* TypeAnnotations$TypeAnnotationPositions$1::visitClassType($Type$ClassType* t, Object$* s) {
	return $of(this->visitClassType(t, $cast($List, s)));
}

TypeAnnotations$TypeAnnotationPositions$1::TypeAnnotations$TypeAnnotationPositions$1() {
}

$Class* TypeAnnotations$TypeAnnotationPositions$1::load$($String* name, bool initialize) {
	$loadClass(TypeAnnotations$TypeAnnotationPositions$1, name, initialize, &_TypeAnnotations$TypeAnnotationPositions$1_ClassInfo_, allocate$TypeAnnotations$TypeAnnotationPositions$1);
	return class$;
}

$Class* TypeAnnotations$TypeAnnotationPositions$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com