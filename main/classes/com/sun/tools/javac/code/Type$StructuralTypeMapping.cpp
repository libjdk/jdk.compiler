#include <com/sun/tools/javac/code/Type$StructuralTypeMapping.h>

#include <com/sun/tools/javac/code/BoundKind.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$ForAll.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type$StructuralTypeMapping$1.h>
#include <com/sun/tools/javac/code/Type$StructuralTypeMapping$2.h>
#include <com/sun/tools/javac/code/Type$StructuralTypeMapping$3.h>
#include <com/sun/tools/javac/code/Type$StructuralTypeMapping$4.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/code/Types$DefaultTypeVisitor.h>
#include <com/sun/tools/javac/code/Types$TypeMapping.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $BoundKind = ::com::sun::tools::javac::code::BoundKind;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$DelegatedType = ::com::sun::tools::javac::code::Type$DelegatedType;
using $Type$ForAll = ::com::sun::tools::javac::code::Type$ForAll;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Type$StructuralTypeMapping$1 = ::com::sun::tools::javac::code::Type$StructuralTypeMapping$1;
using $Type$StructuralTypeMapping$2 = ::com::sun::tools::javac::code::Type$StructuralTypeMapping$2;
using $Type$StructuralTypeMapping$3 = ::com::sun::tools::javac::code::Type$StructuralTypeMapping$3;
using $Type$StructuralTypeMapping$4 = ::com::sun::tools::javac::code::Type$StructuralTypeMapping$4;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $Types$DefaultTypeVisitor = ::com::sun::tools::javac::code::Types$DefaultTypeVisitor;
using $Types$TypeMapping = ::com::sun::tools::javac::code::Types$TypeMapping;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Type$StructuralTypeMapping_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Type$StructuralTypeMapping::*)()>(&Type$StructuralTypeMapping::init$))},
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type$ArrayType;TS;)Lcom/sun/tools/javac/code/Type;", $PUBLIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type$ClassType;TS;)Lcom/sun/tools/javac/code/Type;", $PUBLIC},
	{"visitForAll", "(Lcom/sun/tools/javac/code/Type$ForAll;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type$ForAll;TS;)Lcom/sun/tools/javac/code/Type;", $PUBLIC},
	{"visitMethodType", "(Lcom/sun/tools/javac/code/Type$MethodType;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type$MethodType;TS;)Lcom/sun/tools/javac/code/Type;", $PUBLIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type$WildcardType;TS;)Lcom/sun/tools/javac/code/Type;", $PUBLIC},
	{}
};

$InnerClassInfo _Type$StructuralTypeMapping_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$StructuralTypeMapping", "com.sun.tools.javac.code.Type", "StructuralTypeMapping", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.code.Types$TypeMapping", "com.sun.tools.javac.code.Types", "TypeMapping", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$StructuralTypeMapping$4", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Type$StructuralTypeMapping$3", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Type$StructuralTypeMapping$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Type$StructuralTypeMapping$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Type$StructuralTypeMapping_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.code.Type$StructuralTypeMapping",
	"com.sun.tools.javac.code.Types$TypeMapping",
	nullptr,
	nullptr,
	_Type$StructuralTypeMapping_MethodInfo_,
	"<S:Ljava/lang/Object;>Lcom/sun/tools/javac/code/Types$TypeMapping<TS;>;",
	nullptr,
	_Type$StructuralTypeMapping_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$StructuralTypeMapping($Class* clazz) {
	return $of($alloc(Type$StructuralTypeMapping));
}

void Type$StructuralTypeMapping::init$() {
	$Types$TypeMapping::init$();
}

$Object* Type$StructuralTypeMapping::visitClassType($Type$ClassType* t, Object$* s) {
	$useLocalCurrentObjectStackCache();
	$var($Type, outer, $nc(t)->getEnclosingType());
	$var($Type, outer1, $cast($Type, visit(outer, s)));
	$var($List, typarams, t->getTypeArguments());
	$var($List, typarams1, visit(typarams, s));
	if (outer1 == outer && typarams1 == typarams) {
		return $of(t);
	} else {
		return $of($new($Type$StructuralTypeMapping$1, this, outer1, typarams1, t->tsym, t->metadata));
	}
}

$Object* Type$StructuralTypeMapping::visitWildcardType($Type$WildcardType* wt, Object$* s) {
	$var($Type, t, $nc(wt)->type);
	if (t != nullptr) {
		$assign(t, $cast($Type, visit(t, s)));
	}
	if (t == wt->type) {
		return $of(wt);
	} else {
		return $of($new($Type$StructuralTypeMapping$2, this, t, wt->kind, wt->tsym, wt->bound, wt->metadata));
	}
}

$Object* Type$StructuralTypeMapping::visitArrayType($Type$ArrayType* t, Object$* s) {
	$useLocalCurrentObjectStackCache();
	$var($Type, elemtype, $nc(t)->elemtype);
	$var($Type, elemtype1, $cast($Type, visit(elemtype, s)));
	if (elemtype1 == elemtype) {
		return $of(t);
	} else {
		return $of($new($Type$StructuralTypeMapping$3, this, elemtype1, t->tsym, t->metadata));
	}
}

$Object* Type$StructuralTypeMapping::visitMethodType($Type$MethodType* t, Object$* s) {
	$useLocalCurrentObjectStackCache();
	$var($List, argtypes, $nc(t)->argtypes$);
	$var($Type, restype, t->restype);
	$var($List, thrown, t->thrown);
	$var($List, argtypes1, visit(argtypes, s));
	$var($Type, restype1, $cast($Type, visit(restype, s)));
	$var($List, thrown1, visit(thrown, s));
	if (argtypes1 == argtypes && restype1 == restype && thrown1 == thrown) {
		return $of(t);
	} else {
		return $of($new($Type$StructuralTypeMapping$4, this, argtypes1, restype1, thrown1, t->tsym));
	}
}

$Object* Type$StructuralTypeMapping::visitForAll($Type$ForAll* t, Object$* s) {
	return $of($cast($Type, visit($nc(t)->qtype, s)));
}

Type$StructuralTypeMapping::Type$StructuralTypeMapping() {
}

$Class* Type$StructuralTypeMapping::load$($String* name, bool initialize) {
	$loadClass(Type$StructuralTypeMapping, name, initialize, &_Type$StructuralTypeMapping_ClassInfo_, allocate$Type$StructuralTypeMapping);
	return class$;
}

$Class* Type$StructuralTypeMapping::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com