#include <com/sun/tools/javac/code/Type$4.h>

#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$StructuralTypeMapping.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$DefaultTypeVisitor.h>
#include <com/sun/tools/javac/code/Types$TypeMapping.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$StructuralTypeMapping = ::com::sun::tools::javac::code::Type$StructuralTypeMapping;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $Types$DefaultTypeVisitor = ::com::sun::tools::javac::code::Types$DefaultTypeVisitor;
using $Types$TypeMapping = ::com::sun::tools::javac::code::Types$TypeMapping;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Type$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Type$4::*)()>(&Type$4::init$))},
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Type$4_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Type",
	nullptr,
	nullptr
};

$InnerClassInfo _Type$4_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$4", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Type$StructuralTypeMapping", "com.sun.tools.javac.code.Type", "StructuralTypeMapping", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Type$4_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Type$4",
	"com.sun.tools.javac.code.Type$StructuralTypeMapping",
	nullptr,
	nullptr,
	_Type$4_MethodInfo_,
	"Lcom/sun/tools/javac/code/Type$StructuralTypeMapping<Ljava/lang/Void;>;",
	&_Type$4_EnclosingMethodInfo_,
	_Type$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$4($Class* clazz) {
	return $of($alloc(Type$4));
}

void Type$4::init$() {
	$Type$StructuralTypeMapping::init$();
}

$Type* Type$4::visitClassType($Type$ClassType* t, $Void* aVoid) {
	return $cast($Type, $Type$StructuralTypeMapping::visitClassType($cast($Type$ClassType, $($nc(t)->typeNoMetadata())), aVoid));
}

$Type* Type$4::visitArrayType($Type$ArrayType* t, $Void* aVoid) {
	return $cast($Type, $Type$StructuralTypeMapping::visitArrayType($cast($Type$ArrayType, $($nc(t)->typeNoMetadata())), aVoid));
}

$Type* Type$4::visitTypeVar($Type$TypeVar* t, $Void* aVoid) {
	return $cast($Type, $Type$StructuralTypeMapping::visitTypeVar($cast($Type$TypeVar, $($nc(t)->typeNoMetadata())), aVoid));
}

$Type* Type$4::visitWildcardType($Type$WildcardType* wt, $Void* aVoid) {
	return $cast($Type, $Type$StructuralTypeMapping::visitWildcardType($cast($Type$WildcardType, $($nc(wt)->typeNoMetadata())), aVoid));
}

$Object* Type$4::visitArrayType($Type$ArrayType* t, Object$* aVoid) {
	return $of(this->visitArrayType(t, $cast($Void, aVoid)));
}

$Object* Type$4::visitWildcardType($Type$WildcardType* wt, Object$* aVoid) {
	return $of(this->visitWildcardType(wt, $cast($Void, aVoid)));
}

$Object* Type$4::visitClassType($Type$ClassType* t, Object$* aVoid) {
	return $of(this->visitClassType(t, $cast($Void, aVoid)));
}

$Object* Type$4::visitTypeVar($Type$TypeVar* t, Object$* aVoid) {
	return $of(this->visitTypeVar(t, $cast($Void, aVoid)));
}

Type$4::Type$4() {
}

$Class* Type$4::load$($String* name, bool initialize) {
	$loadClass(Type$4, name, initialize, &_Type$4_ClassInfo_, allocate$Type$4);
	return class$;
}

$Class* Type$4::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com