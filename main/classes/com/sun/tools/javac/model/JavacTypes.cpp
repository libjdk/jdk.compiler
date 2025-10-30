#include <com/sun/tools/javac/model/JavacTypes.h>

#include <com/sun/tools/javac/code/BoundKind.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type$JCPrimitiveType.h>
#include <com/sun/tools/javac/code/Type$JCVoidType.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/model/JavacTypes$1.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/io/Serializable.h>
#include <java/lang/Enum.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collections.h>
#include <java/util/EnumSet.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <java/util/stream/Stream.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ElementKind.h>
#include <javax/lang/model/element/Modifier.h>
#include <javax/lang/model/element/TypeElement.h>
#include <javax/lang/model/type/ArrayType.h>
#include <javax/lang/model/type/DeclaredType.h>
#include <javax/lang/model/type/ErrorType.h>
#include <javax/lang/model/type/ExecutableType.h>
#include <javax/lang/model/type/NoType.h>
#include <javax/lang/model/type/NullType.h>
#include <javax/lang/model/type/PrimitiveType.h>
#include <javax/lang/model/type/ReferenceType.h>
#include <javax/lang/model/type/TypeKind.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/lang/model/type/WildcardType.h>
#include <jcpp.h>

#undef DECLARED
#undef EXECUTABLE
#undef EXEC_OR_PKG_OR_MOD
#undef EXTENDS
#undef METHOD
#undef MODULE
#undef MTH
#undef PACKAGE
#undef PRIVATE
#undef STATIC
#undef SUPER
#undef UNBOUND
#undef WILDCARD

using $TypeMirrorArray = $Array<::javax::lang::model::type::TypeMirror>;
using $BoundKind = ::com::sun::tools::javac::code::BoundKind;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $Type$JCPrimitiveType = ::com::sun::tools::javac::code::Type$JCPrimitiveType;
using $Type$JCVoidType = ::com::sun::tools::javac::code::Type$JCVoidType;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $1Types = ::com::sun::tools::javac::code::Types;
using $JavacTypes$1 = ::com::sun::tools::javac::model::JavacTypes$1;
using $Context = ::com::sun::tools::javac::util::Context;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $EnumSet = ::java::util::EnumSet;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $1List = ::java::util::List;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;
using $Stream = ::java::util::stream::Stream;
using $Element = ::javax::lang::model::element::Element;
using $ElementKind = ::javax::lang::model::element::ElementKind;
using $Modifier = ::javax::lang::model::element::Modifier;
using $TypeElement = ::javax::lang::model::element::TypeElement;
using $ArrayType = ::javax::lang::model::type::ArrayType;
using $DeclaredType = ::javax::lang::model::type::DeclaredType;
using $ErrorType = ::javax::lang::model::type::ErrorType;
using $ExecutableType = ::javax::lang::model::type::ExecutableType;
using $NoType = ::javax::lang::model::type::NoType;
using $NullType = ::javax::lang::model::type::NullType;
using $PrimitiveType = ::javax::lang::model::type::PrimitiveType;
using $ReferenceType = ::javax::lang::model::type::ReferenceType;
using $TypeKind = ::javax::lang::model::type::TypeKind;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $WildcardType = ::javax::lang::model::type::WildcardType;
using $Types = ::javax::lang::model::util::Types;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace model {

class JavacTypes$$Lambda$stripMetadataIfNeeded : public $Function {
	$class(JavacTypes$$Lambda$stripMetadataIfNeeded, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($Type, inst$)->stripMetadataIfNeeded());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacTypes$$Lambda$stripMetadataIfNeeded>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavacTypes$$Lambda$stripMetadataIfNeeded::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavacTypes$$Lambda$stripMetadataIfNeeded::*)()>(&JavacTypes$$Lambda$stripMetadataIfNeeded::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacTypes$$Lambda$stripMetadataIfNeeded::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.model.JavacTypes$$Lambda$stripMetadataIfNeeded",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* JavacTypes$$Lambda$stripMetadataIfNeeded::load$($String* name, bool initialize) {
	$loadClass(JavacTypes$$Lambda$stripMetadataIfNeeded, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacTypes$$Lambda$stripMetadataIfNeeded::class$ = nullptr;

$FieldInfo _JavacTypes_FieldInfo_[] = {
	{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $PRIVATE | $FINAL, $field(JavacTypes, syms)},
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, $PRIVATE | $FINAL, $field(JavacTypes, types)},
	{"EXEC_OR_PKG_OR_MOD", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/lang/model/type/TypeKind;>;", $PRIVATE | $STATIC | $FINAL, $staticField(JavacTypes, EXEC_OR_PKG_OR_MOD)},
	{}
};

$MethodInfo _JavacTypes_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(JavacTypes::*)($Context*)>(&JavacTypes::init$))},
	{"asElement", "(Ljavax/lang/model/type/TypeMirror;)Ljavax/lang/model/element/Element;", nullptr, $PUBLIC},
	{"asMemberOf", "(Ljavax/lang/model/type/DeclaredType;Ljavax/lang/model/element/Element;)Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC},
	{"boxedClass", "(Ljavax/lang/model/type/PrimitiveType;)Ljavax/lang/model/element/TypeElement;", nullptr, $PUBLIC},
	{"capture", "(Ljavax/lang/model/type/TypeMirror;)Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC},
	{"cast", "(Ljava/lang/Class;Ljava/lang/Object;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;Ljava/lang/Object;)TT;", $PRIVATE | $STATIC, $method(static_cast<$Object*(*)($Class*,Object$*)>(&JavacTypes::cast))},
	{"contains", "(Ljavax/lang/model/type/TypeMirror;Ljavax/lang/model/type/TypeMirror;)Z", nullptr, $PUBLIC},
	{"directSupertypes", "(Ljavax/lang/model/type/TypeMirror;)Ljava/util/List;", "(Ljavax/lang/model/type/TypeMirror;)Ljava/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC},
	{"erasure", "(Ljavax/lang/model/type/TypeMirror;)Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC},
	{"getArrayType", "(Ljavax/lang/model/type/TypeMirror;)Ljavax/lang/model/type/ArrayType;", nullptr, $PUBLIC},
	{"getDeclaredType", "(Ljavax/lang/model/element/TypeElement;[Ljavax/lang/model/type/TypeMirror;)Ljavax/lang/model/type/DeclaredType;", nullptr, $PUBLIC | $TRANSIENT},
	{"getDeclaredType", "(Ljavax/lang/model/type/DeclaredType;Ljavax/lang/model/element/TypeElement;[Ljavax/lang/model/type/TypeMirror;)Ljavax/lang/model/type/DeclaredType;", nullptr, $PUBLIC | $TRANSIENT},
	{"getDeclaredType0", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;[Ljavax/lang/model/type/TypeMirror;)Ljavax/lang/model/type/DeclaredType;", nullptr, $PRIVATE | $TRANSIENT, $method(static_cast<$DeclaredType*(JavacTypes::*)($Type*,$Symbol$ClassSymbol*,$TypeMirrorArray*)>(&JavacTypes::getDeclaredType0))},
	{"getNoType", "(Ljavax/lang/model/type/TypeKind;)Ljavax/lang/model/type/NoType;", nullptr, $PUBLIC},
	{"getNullType", "()Ljavax/lang/model/type/NullType;", nullptr, $PUBLIC},
	{"getOverriddenMethods", "(Ljavax/lang/model/element/Element;)Ljava/util/Set;", "(Ljavax/lang/model/element/Element;)Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol$MethodSymbol;>;", $PUBLIC},
	{"getPrimitiveType", "(Ljavax/lang/model/type/TypeKind;)Ljavax/lang/model/type/PrimitiveType;", nullptr, $PUBLIC},
	{"getWildcardType", "(Ljavax/lang/model/type/TypeMirror;Ljavax/lang/model/type/TypeMirror;)Ljavax/lang/model/type/WildcardType;", nullptr, $PUBLIC},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/model/JavacTypes;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JavacTypes*(*)($Context*)>(&JavacTypes::instance))},
	{"isAssignable", "(Ljavax/lang/model/type/TypeMirror;Ljavax/lang/model/type/TypeMirror;)Z", nullptr, $PUBLIC},
	{"isSameType", "(Ljavax/lang/model/type/TypeMirror;Ljavax/lang/model/type/TypeMirror;)Z", nullptr, $PUBLIC},
	{"isSubsignature", "(Ljavax/lang/model/type/ExecutableType;Ljavax/lang/model/type/ExecutableType;)Z", nullptr, $PUBLIC},
	{"isSubtype", "(Ljavax/lang/model/type/TypeMirror;Ljavax/lang/model/type/TypeMirror;)Z", nullptr, $PUBLIC},
	{"unboxedType", "(Ljavax/lang/model/type/TypeMirror;)Ljavax/lang/model/type/PrimitiveType;", nullptr, $PUBLIC},
	{"validateTypeNotIn", "(Ljavax/lang/model/type/TypeMirror;Ljava/util/Set;)V", "(Ljavax/lang/model/type/TypeMirror;Ljava/util/Set<Ljavax/lang/model/type/TypeKind;>;)V", $PRIVATE, $method(static_cast<void(JavacTypes::*)($TypeMirror*,$Set*)>(&JavacTypes::validateTypeNotIn))},
	{}
};

$InnerClassInfo _JavacTypes_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.model.JavacTypes$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _JavacTypes_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.model.JavacTypes",
	"java.lang.Object",
	"javax.lang.model.util.Types",
	_JavacTypes_FieldInfo_,
	_JavacTypes_MethodInfo_,
	nullptr,
	nullptr,
	_JavacTypes_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.model.JavacTypes$1"
};

$Object* allocate$JavacTypes($Class* clazz) {
	return $of($alloc(JavacTypes));
}

$Set* JavacTypes::EXEC_OR_PKG_OR_MOD = nullptr;

JavacTypes* JavacTypes::instance($Context* context) {
	$init(JavacTypes);
	$var(JavacTypes, instance, $cast(JavacTypes, $nc(context)->get(JavacTypes::class$)));
	if (instance == nullptr) {
		$assign(instance, $new(JavacTypes, context));
	}
	return instance;
}

void JavacTypes::init$($Context* context) {
	$nc(context)->put(JavacTypes::class$, $of(this));
	$set(this, syms, $Symtab::instance(context));
	$set(this, types, $1Types::instance(context));
}

$Element* JavacTypes::asElement($TypeMirror* t) {
	$useLocalCurrentObjectStackCache();
	$init($JavacTypes$1);
	{
		$var($Type, type, nullptr)
		switch ($nc($JavacTypes$1::$SwitchMap$javax$lang$model$type$TypeKind)->get($nc(($($nc(t)->getKind())))->ordinal())) {
		case 1:
			{}
		case 2:
			{}
		case 3:
			{}
		case 4:
			{
				$load($Type);
				$assign(type, $cast($Type, cast($Type::class$, t)));
				return $nc(type)->asElement();
			}
		default:
			{
				return nullptr;
			}
		}
	}
}

bool JavacTypes::isSameType($TypeMirror* t1, $TypeMirror* t2) {
	$init($TypeKind);
	bool var$0 = $nc(t1)->getKind() == $TypeKind::WILDCARD;
	if (var$0 || $nc(t2)->getKind() == $TypeKind::WILDCARD) {
		return false;
	}
	return $nc(this->types)->isSameType($cast($Type, t1), $cast($Type, t2));
}

bool JavacTypes::isSubtype($TypeMirror* t1, $TypeMirror* t2) {
	validateTypeNotIn(t1, JavacTypes::EXEC_OR_PKG_OR_MOD);
	validateTypeNotIn(t2, JavacTypes::EXEC_OR_PKG_OR_MOD);
	return $nc(this->types)->isSubtype($cast($Type, t1), $cast($Type, t2));
}

bool JavacTypes::isAssignable($TypeMirror* t1, $TypeMirror* t2) {
	validateTypeNotIn(t1, JavacTypes::EXEC_OR_PKG_OR_MOD);
	validateTypeNotIn(t2, JavacTypes::EXEC_OR_PKG_OR_MOD);
	return $nc(this->types)->isAssignable($cast($Type, t1), $cast($Type, t2));
}

bool JavacTypes::contains($TypeMirror* t1, $TypeMirror* t2) {
	validateTypeNotIn(t1, JavacTypes::EXEC_OR_PKG_OR_MOD);
	validateTypeNotIn(t2, JavacTypes::EXEC_OR_PKG_OR_MOD);
	return $nc(this->types)->containsType($cast($Type, t1), $cast($Type, t2));
}

bool JavacTypes::isSubsignature($ExecutableType* m1, $ExecutableType* m2) {
	return $nc(this->types)->isSubSignature($cast($Type, m1), $cast($Type, m2));
}

$1List* JavacTypes::directSupertypes($TypeMirror* t) {
	$useLocalCurrentObjectStackCache();
	validateTypeNotIn(t, JavacTypes::EXEC_OR_PKG_OR_MOD);
	$var($Type, ty, $cast($Type, t));
	return $nc($($nc($($nc($($nc(this->types)->directSupertypes(ty)))->stream()))->map(static_cast<$Function*>($$new(JavacTypes$$Lambda$stripMetadataIfNeeded)))))->toList();
}

$TypeMirror* JavacTypes::erasure($TypeMirror* t) {
	$useLocalCurrentObjectStackCache();
	$TypeKind* kind = $nc(t)->getKind();
	$init($TypeKind);
	if (kind == $TypeKind::PACKAGE || kind == $TypeKind::MODULE) {
		$throwNew($IllegalArgumentException, $(t->toString()));
	}
	return $nc($($nc(this->types)->erasure($cast($Type, t))))->stripMetadataIfNeeded();
}

$TypeElement* JavacTypes::boxedClass($PrimitiveType* p) {
	return $as($TypeElement, $nc(this->types)->boxedClass($cast($Type, p)));
}

$PrimitiveType* JavacTypes::unboxedType($TypeMirror* t) {
	$useLocalCurrentObjectStackCache();
	$init($TypeKind);
	if ($nc(t)->getKind() != $TypeKind::DECLARED) {
		$throwNew($IllegalArgumentException, $(t->toString()));
	}
	$var($Type, unboxed, $nc(this->types)->unboxedType($cast($Type, t)));
	if (!$nc(unboxed)->isPrimitive()) {
		$throwNew($IllegalArgumentException, $($nc(t)->toString()));
	}
	return $cast($PrimitiveType, unboxed);
}

$TypeMirror* JavacTypes::capture($TypeMirror* t) {
	validateTypeNotIn(t, JavacTypes::EXEC_OR_PKG_OR_MOD);
	return $nc($($nc(this->types)->capture($cast($Type, t))))->stripMetadataIfNeeded();
}

$PrimitiveType* JavacTypes::getPrimitiveType($TypeKind* kind) {
	$init($JavacTypes$1);
	switch ($nc($JavacTypes$1::$SwitchMap$javax$lang$model$type$TypeKind)->get($nc((kind))->ordinal())) {
	case 5:
		{
			return $nc(this->syms)->booleanType;
		}
	case 6:
		{
			return $nc(this->syms)->byteType;
		}
	case 7:
		{
			return $nc(this->syms)->shortType;
		}
	case 8:
		{
			return $nc(this->syms)->intType;
		}
	case 9:
		{
			return $nc(this->syms)->longType;
		}
	case 10:
		{
			return $nc(this->syms)->charType;
		}
	case 11:
		{
			return $nc(this->syms)->floatType;
		}
	case 12:
		{
			return $nc(this->syms)->doubleType;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Not a primitive type: "_s, kind}));
		}
	}
}

$NullType* JavacTypes::getNullType() {
	return $cast($NullType, $nc(this->syms)->botType);
}

$NoType* JavacTypes::getNoType($TypeKind* kind) {
	$init($JavacTypes$1);
	switch ($nc($JavacTypes$1::$SwitchMap$javax$lang$model$type$TypeKind)->get($nc((kind))->ordinal())) {
	case 13:
		{
			return $nc(this->syms)->voidType;
		}
	case 14:
		{
			$init($Type);
			return $Type::noType;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $(kind->toString()));
		}
	}
}

$ArrayType* JavacTypes::getArrayType($TypeMirror* componentType) {
	$useLocalCurrentObjectStackCache();
	$init($JavacTypes$1);
	switch ($nc($JavacTypes$1::$SwitchMap$javax$lang$model$type$TypeKind)->get($nc(($($nc(componentType)->getKind())))->ordinal())) {
	case 13:
		{}
	case 15:
		{}
	case 16:
		{}
	case 17:
		{}
	case 18:
		{
			$throwNew($IllegalArgumentException, $(componentType->toString()));
		}
	}
	return $new($Type$ArrayType, $cast($Type, componentType), $nc(this->syms)->arrayClass);
}

$WildcardType* JavacTypes::getWildcardType($TypeMirror* extendsBound, $TypeMirror* superBound) {
	$useLocalCurrentObjectStackCache();
	$BoundKind* bkind = nullptr;
	$var($Type, bound, nullptr);
	if (extendsBound == nullptr && superBound == nullptr) {
		$init($BoundKind);
		bkind = $BoundKind::UNBOUND;
		$assign(bound, $nc(this->syms)->objectType);
	} else if (superBound == nullptr) {
		$init($BoundKind);
		bkind = $BoundKind::EXTENDS;
		$assign(bound, $cast($Type, extendsBound));
	} else if (extendsBound == nullptr) {
		$init($BoundKind);
		bkind = $BoundKind::SUPER;
		$assign(bound, $cast($Type, superBound));
	} else {
		$throwNew($IllegalArgumentException, "Extends and super bounds cannot both be provided"_s);
	}
	$init($JavacTypes$1);
	switch ($nc($JavacTypes$1::$SwitchMap$javax$lang$model$type$TypeKind)->get($nc(($($nc(bound)->getKind())))->ordinal())) {
	case 19:
		{}
	case 1:
		{}
	case 3:
		{}
	case 4:
		{
			return $new($Type$WildcardType, bound, bkind, $nc(this->syms)->boundClass);
		}
	default:
		{
			$throwNew($IllegalArgumentException, $(bound->toString()));
		}
	}
}

$DeclaredType* JavacTypes::getDeclaredType($TypeElement* typeElem, $TypeMirrorArray* typeArgs) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$ClassSymbol, sym, $cast($Symbol$ClassSymbol, typeElem));
	if ($nc(typeArgs)->length == 0) {
		return $cast($DeclaredType, $nc(sym)->erasure(this->types));
	}
	if ($nc($($nc($nc(sym)->type)->getEnclosingType()))->isParameterized()) {
		$throwNew($IllegalArgumentException, $(sym->toString()));
	}
	return getDeclaredType0($($nc($nc(sym)->type)->getEnclosingType()), sym, typeArgs);
}

$DeclaredType* JavacTypes::getDeclaredType($DeclaredType* enclosing, $TypeElement* typeElem, $TypeMirrorArray* typeArgs) {
	$useLocalCurrentObjectStackCache();
	if (enclosing == nullptr) {
		return getDeclaredType(typeElem, typeArgs);
	}
	$var($Symbol$ClassSymbol, sym, $cast($Symbol$ClassSymbol, typeElem));
	$var($Type, outer, $cast($Type, enclosing));
	if (!$equals($nc(outer)->tsym, $nc($nc(sym)->owner)->enclClass())) {
		$throwNew($IllegalArgumentException, $($nc($of(enclosing))->toString()));
	}
	if (!$nc(outer)->isParameterized()) {
		return getDeclaredType(typeElem, typeArgs);
	}
	return getDeclaredType0(outer, sym, typeArgs);
}

$DeclaredType* JavacTypes::getDeclaredType0($Type* outer, $Symbol$ClassSymbol* sym, $TypeMirrorArray* typeArgs) {
	$useLocalCurrentObjectStackCache();
	if ($nc(typeArgs)->length != $nc($($nc($nc(sym)->type)->getTypeArguments()))->length()) {
		$throwNew($IllegalArgumentException, "Incorrect number of type arguments"_s);
	}
	$var($ListBuffer, targs, $new($ListBuffer));
	{
		$var($TypeMirrorArray, arr$, typeArgs);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($TypeMirror, t, arr$->get(i$));
			{
				if (!($instanceOf($ReferenceType, t) || $instanceOf($WildcardType, t))) {
					$throwNew($IllegalArgumentException, $($nc(t)->toString()));
				}
				targs->append($cast($Type, t));
			}
		}
	}
	return static_cast<$DeclaredType*>($as($ErrorType, $new($Type$ClassType, outer, $(targs->toList()), sym)));
}

$TypeMirror* JavacTypes::asMemberOf($DeclaredType* containing, $Element* element) {
	$useLocalCurrentObjectStackCache();
	$var($Type, site, $cast($Type, containing));
	$var($Symbol, sym, $cast($Symbol, element));
	if ($nc(this->types)->asSuper(site, $($cast($Symbol, $nc(sym)->getEnclosingElement()))) == nullptr) {
		$throwNew($IllegalArgumentException, $$str({sym, "@"_s, site}));
	}
	return $nc(this->types)->memberType(site, sym);
}

void JavacTypes::validateTypeNotIn($TypeMirror* t, $Set* invalidKinds) {
	$useLocalCurrentObjectStackCache();
	if ($nc(invalidKinds)->contains($($nc(t)->getKind()))) {
		$throwNew($IllegalArgumentException, $($nc(t)->toString()));
	}
}

$Object* JavacTypes::cast($Class* clazz, Object$* o) {
	$init(JavacTypes);
	if (!$nc(clazz)->isInstance(o)) {
		$throwNew($IllegalArgumentException, $($nc($of(o))->toString()));
	}
	return $of($nc(clazz)->cast(o));
}

$Set* JavacTypes::getOverriddenMethods($Element* elem) {
	$useLocalCurrentObjectStackCache();
	$init($ElementKind);
	bool var$1 = $nc(elem)->getKind() != $ElementKind::METHOD;
	$init($Modifier);
	bool var$0 = var$1 || $nc($($nc(elem)->getModifiers()))->contains($Modifier::STATIC);
	if (var$0 || $nc($($nc(elem)->getModifiers()))->contains($Modifier::PRIVATE)) {
		return $Collections::emptySet();
	}
	$var($Symbol$MethodSymbol, methodSymbol, nullptr);
	bool var$2 = $instanceOf($Symbol$MethodSymbol, elem);
	if (var$2) {
		$assign(methodSymbol, $cast($Symbol$MethodSymbol, elem));
		var$2 = true;
	}
	if (!(var$2)) {
		$throwNew($IllegalArgumentException);
	}
	$var($Symbol$ClassSymbol, origin, $cast($Symbol$ClassSymbol, $nc(methodSymbol)->owner));
	$var($Set, results, $new($LinkedHashSet));
	{
		$var($Iterator, i$, $nc($($nc(this->types)->closure($nc(origin)->type)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				if (t != $nc(origin)->type) {
					$var($Symbol$ClassSymbol, c, $cast($Symbol$ClassSymbol, $nc(t)->tsym));
					{
						$var($Iterator, i$, $nc($($nc($($nc(c)->members()))->getSymbolsByName(methodSymbol->name)))->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($Symbol, sym, $cast($Symbol, i$->next()));
							{
								$init($Kinds$Kind);
								if ($nc(sym)->kind == $Kinds$Kind::MTH && methodSymbol->overrides(sym, origin, this->types, true)) {
									results->add($cast($Symbol$MethodSymbol, sym));
								}
							}
						}
					}
				}
			}
		}
	}
	return results;
}

void clinit$JavacTypes($Class* class$) {
	$init($TypeKind);
	$assignStatic(JavacTypes::EXEC_OR_PKG_OR_MOD, $EnumSet::of($TypeKind::EXECUTABLE, $TypeKind::PACKAGE, $TypeKind::MODULE));
}

JavacTypes::JavacTypes() {
}

$Class* JavacTypes::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JavacTypes$$Lambda$stripMetadataIfNeeded::classInfo$.name)) {
			return JavacTypes$$Lambda$stripMetadataIfNeeded::load$(name, initialize);
		}
	}
	$loadClass(JavacTypes, name, initialize, &_JavacTypes_ClassInfo_, clinit$JavacTypes, allocate$JavacTypes);
	return class$;
}

$Class* JavacTypes::class$ = nullptr;

				} // model
			} // javac
		} // tools
	} // sun
} // com