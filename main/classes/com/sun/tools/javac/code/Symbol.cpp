#include <com/sun/tools/javac/code/Symbol.h>

#include <com/sun/tools/javac/code/AnnoConstruct.h>
#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Kinds$KindSelector.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$1.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$Completer.h>
#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeVariableSymbol.h>
#include <com/sun/tools/javac/code/Symbol$Visitor.h>
#include <com/sun/tools/javac/code/SymbolMetadata.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name$Table.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Iterable.h>
#include <java/lang/annotation/Annotation.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ElementKind.h>
#include <javax/lang/model/element/Name.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

#undef CLASS
#undef MTH
#undef NULL_COMPLETER
#undef OTHER
#undef PCK
#undef TYP
#undef TYPEVAR
#undef TYPE_PARAMETER
#undef VAL_MTH

using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $AnnoConstruct = ::com::sun::tools::javac::code::AnnoConstruct;
using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $DeferredCompletionFailureHandler = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Kinds$KindSelector = ::com::sun::tools::javac::code::Kinds$KindSelector;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol$1 = ::com::sun::tools::javac::code::Symbol$1;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$Completer = ::com::sun::tools::javac::code::Symbol$Completer;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$TypeVariableSymbol = ::com::sun::tools::javac::code::Symbol$TypeVariableSymbol;
using $Symbol$Visitor = ::com::sun::tools::javac::code::Symbol$Visitor;
using $SymbolMetadata = ::com::sun::tools::javac::code::SymbolMetadata;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $PoolConstant = ::com::sun::tools::javac::jvm::PoolConstant;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $1Name = ::com::sun::tools::javac::util::Name;
using $Name$Table = ::com::sun::tools::javac::util::Name$Table;
using $Names = ::com::sun::tools::javac::util::Names;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $Iterator = ::java::util::Iterator;
using $1List = ::java::util::List;
using $Set = ::java::util::Set;
using $Element = ::javax::lang::model::element::Element;
using $ElementKind = ::javax::lang::model::element::ElementKind;
using $Name = ::javax::lang::model::element::Name;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Symbol_FieldInfo_[] = {
	{"kind", "Lcom/sun/tools/javac/code/Kinds$Kind;", nullptr, $PUBLIC, $field(Symbol, kind)},
	{"flags_field", "J", nullptr, $PUBLIC, $field(Symbol, flags_field)},
	{"name", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC, $field(Symbol, name)},
	{"type", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Symbol, type)},
	{"owner", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $field(Symbol, owner)},
	{"completer", "Lcom/sun/tools/javac/code/Symbol$Completer;", nullptr, $PUBLIC, $field(Symbol, completer)},
	{"erasure_field", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Symbol, erasure_field)},
	{"metadata", "Lcom/sun/tools/javac/code/SymbolMetadata;", nullptr, $PROTECTED, $field(Symbol, metadata)},
	{}
};

$MethodInfo _Symbol_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/code/Kinds$Kind;JLcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Symbol::*)($Kinds$Kind*,int64_t,$1Name*,$Type*,Symbol*)>(&Symbol::init$))},
	{"accept", "(Lcom/sun/tools/javac/code/Symbol$Visitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Lcom/sun/tools/javac/code/Symbol$Visitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"annotationsPendingCompletion", "()Z", nullptr, $PUBLIC},
	{"apiComplete", "()V", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.code.Symbol$CompletionFailure"},
	{"appendAttributes", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$Compound;>;)V", $PUBLIC},
	{"appendClassInitTypeAttributes", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;)V", $PUBLIC},
	{"appendInitTypeAttributes", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;)V", $PUBLIC},
	{"appendUniqueTypeAttributes", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;)V", $PUBLIC},
	{"asMemberOf", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Types;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC},
	{"asType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"attribute", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Attribute$Compound;", nullptr, $PUBLIC},
	{"baseSymbol", "()Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC},
	{"clone", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC},
	{"complete", "()V", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.code.Symbol$CompletionFailure"},
	{"enclClass", "()Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC},
	{"erasure", "(Lcom/sun/tools/javac/code/Types;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"exists", "()Z", nullptr, $PUBLIC},
	{"externalType", "(Lcom/sun/tools/javac/code/Types;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"flags", "()J", nullptr, $PUBLIC},
	{"flatName", "()Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{"getAnnotationMirrors", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$Compound;>;", $PUBLIC},
	{"getClassInitTypeAttributes", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;", $PUBLIC},
	{"getDeclarationAttributes", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$Compound;>;", $PUBLIC},
	{"getEnclosedElements", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/tools/javac/code/Symbol;>;", $PUBLIC},
	{"getEnclosingElement", "()Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC},
	{"getInitTypeAttributes", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;", $PUBLIC},
	{"getKind", "()Ljavax/lang/model/element/ElementKind;", nullptr, $PUBLIC},
	{"getMetadata", "()Lcom/sun/tools/javac/code/SymbolMetadata;", nullptr, $PUBLIC},
	{"getModifiers", "()Ljava/util/Set;", "()Ljava/util/Set<Ljavax/lang/model/element/Modifier;>;", $PUBLIC},
	{"getQualifiedName", "()Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{"getRawAttributes", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$Compound;>;", $PUBLIC},
	{"getRawTypeAttributes", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;", $PUBLIC},
	{"getSimpleName", "()Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{"getTypeParameters", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$TypeVariableSymbol;>;", $PUBLIC},
	{"hasAnnotations", "()Z", nullptr, $PUBLIC},
	{"hasDeprecatedAnnotation", "()Z", nullptr, $PUBLIC},
	{"hasOuterInstance", "()Z", nullptr, $PUBLIC},
	{"hasTypeAnnotations", "()Z", nullptr, $PUBLIC},
	{"hiddenIn", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Types;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Symbol::*)($Symbol$ClassSymbol*,$Types*)>(&Symbol::hiddenIn))},
	{"hiddenInInternal", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Types;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PRIVATE, $method(static_cast<Symbol*(Symbol::*)($Symbol$ClassSymbol*,$Types*)>(&Symbol::hiddenInInternal))},
	{"initedMetadata", "()Lcom/sun/tools/javac/code/SymbolMetadata;", nullptr, $PRIVATE, $method(static_cast<$SymbolMetadata*(Symbol::*)()>(&Symbol::initedMetadata))},
	{"isAbstract", "()Z", nullptr, $PUBLIC},
	{"isAccessibleIn", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Types;)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Symbol::*)(Symbol*,$Types*)>(&Symbol::isAccessibleIn))},
	{"isAnonymous", "()Z", nullptr, $PUBLIC},
	{"isCompleted", "()Z", nullptr, $PUBLIC},
	{"isConstructor", "()Z", nullptr, $PUBLIC},
	{"isDeprecatableViaAnnotation", "()Z", nullptr, $PUBLIC},
	{"isDeprecated", "()Z", nullptr, $PUBLIC},
	{"isDeprecatedForRemoval", "()Z", nullptr, $PUBLIC},
	{"isDirectlyOrIndirectlyLocal", "()Z", nullptr, $PUBLIC},
	{"isDynamic", "()Z", nullptr, $PUBLIC},
	{"isEnclosedBy", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Z", nullptr, $PUBLIC},
	{"isEnum", "()Z", nullptr, $PUBLIC},
	{"isFinal", "()Z", nullptr, $PUBLIC},
	{"isInheritedIn", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Types;)Z", nullptr, $PUBLIC},
	{"isInner", "()Z", nullptr, $PUBLIC},
	{"isInterface", "()Z", nullptr, $PUBLIC},
	{"isMemberOf", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Types;)Z", nullptr, $PUBLIC},
	{"isNonSealed", "()Z", nullptr, $PUBLIC},
	{"isPreviewApi", "()Z", nullptr, $PUBLIC},
	{"isPrivate", "()Z", nullptr, $PUBLIC},
	{"isPublic", "()Z", nullptr, $PUBLIC},
	{"isSealed", "()Z", nullptr, $PUBLIC},
	{"isStatic", "()Z", nullptr, $PUBLIC},
	{"isSubClass", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Types;)Z", nullptr, $PUBLIC},
	{"location", "()Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC},
	{"location", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Types;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC},
	{"members", "()Lcom/sun/tools/javac/code/Scope$WriteableScope;", nullptr, $PUBLIC},
	{"outermostClass", "()Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC},
	{"overrides", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Types;Z)Z", nullptr, $PUBLIC},
	{"packge", "()Lcom/sun/tools/javac/code/Symbol$PackageSymbol;", nullptr, $PUBLIC},
	{"poolTag", "()I", nullptr, $PUBLIC},
	{"prependAttributes", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$Compound;>;)V", $PUBLIC},
	{"resetAnnotations", "()V", nullptr, $PUBLIC},
	{"setAttributes", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC},
	{"setClassInitTypeAttributes", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;)V", $PUBLIC},
	{"setDeclarationAttributes", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$Compound;>;)V", $PUBLIC},
	{"setInitTypeAttributes", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;)V", $PUBLIC},
	{"setTypeAttributes", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;)V", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Symbol_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Symbol$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.code.Symbol$Visitor", "com.sun.tools.javac.code.Symbol", "Visitor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.code.Symbol$CompletionFailure", "com.sun.tools.javac.code.Symbol", "CompletionFailure", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Symbol$Completer", "com.sun.tools.javac.code.Symbol", "Completer", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.code.Symbol$OperatorSymbol", "com.sun.tools.javac.code.Symbol", "OperatorSymbol", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Symbol$MethodHandleSymbol", "com.sun.tools.javac.code.Symbol", "MethodHandleSymbol", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Symbol$DynamicVarSymbol", "com.sun.tools.javac.code.Symbol", "DynamicVarSymbol", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Symbol$DynamicMethodSymbol", "com.sun.tools.javac.code.Symbol", "DynamicMethodSymbol", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Symbol$MethodSymbol", "com.sun.tools.javac.code.Symbol", "MethodSymbol", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Symbol$BindingSymbol", "com.sun.tools.javac.code.Symbol", "BindingSymbol", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Symbol$ParamSymbol", "com.sun.tools.javac.code.Symbol", "ParamSymbol", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Symbol$RecordComponent", "com.sun.tools.javac.code.Symbol", "RecordComponent", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Symbol$VarSymbol", "com.sun.tools.javac.code.Symbol", "VarSymbol", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Symbol$ClassSymbol", "com.sun.tools.javac.code.Symbol", "ClassSymbol", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Symbol$RootPackageSymbol", "com.sun.tools.javac.code.Symbol", "RootPackageSymbol", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Symbol$PackageSymbol", "com.sun.tools.javac.code.Symbol", "PackageSymbol", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Symbol$ModuleResolutionFlags", "com.sun.tools.javac.code.Symbol", "ModuleResolutionFlags", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.code.Symbol$ModuleFlags", "com.sun.tools.javac.code.Symbol", "ModuleFlags", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.code.Symbol$ModuleSymbol", "com.sun.tools.javac.code.Symbol", "ModuleSymbol", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Symbol$TypeVariableSymbol", "com.sun.tools.javac.code.Symbol", "TypeVariableSymbol", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Symbol$TypeSymbol", "com.sun.tools.javac.code.Symbol", "TypeSymbol", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.code.Symbol$DelegatedSymbol", "com.sun.tools.javac.code.Symbol", "DelegatedSymbol", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Symbol_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.code.Symbol",
	"com.sun.tools.javac.code.AnnoConstruct",
	"com.sun.tools.javac.jvm.PoolConstant,javax.lang.model.element.Element",
	_Symbol_FieldInfo_,
	_Symbol_MethodInfo_,
	nullptr,
	nullptr,
	_Symbol_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Symbol$1,com.sun.tools.javac.code.Symbol$Visitor,com.sun.tools.javac.code.Symbol$CompletionFailure,com.sun.tools.javac.code.Symbol$Completer,com.sun.tools.javac.code.Symbol$Completer$1,com.sun.tools.javac.code.Symbol$OperatorSymbol,com.sun.tools.javac.code.Symbol$OperatorSymbol$AccessCode,com.sun.tools.javac.code.Symbol$MethodHandleSymbol,com.sun.tools.javac.code.Symbol$DynamicVarSymbol,com.sun.tools.javac.code.Symbol$DynamicMethodSymbol,com.sun.tools.javac.code.Symbol$MethodSymbol,com.sun.tools.javac.code.Symbol$MethodSymbol$1,com.sun.tools.javac.code.Symbol$BindingSymbol,com.sun.tools.javac.code.Symbol$ParamSymbol,com.sun.tools.javac.code.Symbol$RecordComponent,com.sun.tools.javac.code.Symbol$VarSymbol,com.sun.tools.javac.code.Symbol$VarSymbol$1,com.sun.tools.javac.code.Symbol$ClassSymbol,com.sun.tools.javac.code.Symbol$RootPackageSymbol,com.sun.tools.javac.code.Symbol$PackageSymbol,com.sun.tools.javac.code.Symbol$ModuleResolutionFlags,com.sun.tools.javac.code.Symbol$ModuleFlags,com.sun.tools.javac.code.Symbol$ModuleSymbol,com.sun.tools.javac.code.Symbol$TypeVariableSymbol,com.sun.tools.javac.code.Symbol$TypeSymbol,com.sun.tools.javac.code.Symbol$DelegatedSymbol"
};

$Object* allocate$Symbol($Class* clazz) {
	return $of($alloc(Symbol));
}

$AnnotationArray* Symbol::getAnnotationsByType($Class* annoType) {
	 return this->$AnnoConstruct::getAnnotationsByType(annoType);
}

$Annotation* Symbol::getAnnotation($Class* annoType) {
	 return this->$AnnoConstruct::getAnnotation(annoType);
}

int32_t Symbol::hashCode() {
	 return this->$AnnoConstruct::hashCode();
}

bool Symbol::equals(Object$* arg0) {
	 return this->$AnnoConstruct::equals(arg0);
}

$Object* Symbol::clone() {
	 return this->$AnnoConstruct::clone();
}

void Symbol::finalize() {
	this->$AnnoConstruct::finalize();
}

int64_t Symbol::flags() {
	return this->flags_field;
}

$List* Symbol::getRawAttributes() {
	return (this->metadata == nullptr) ? $List::nil() : $nc(this->metadata)->getDeclarationAttributes();
}

$List* Symbol::getRawTypeAttributes() {
	return (this->metadata == nullptr) ? $List::nil() : $nc(this->metadata)->getTypeAttributes();
}

$Attribute$Compound* Symbol::attribute(Symbol* anno) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($(getRawAttributes()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Attribute$Compound, a, $cast($Attribute$Compound, i$->next()));
			{
				if ($equals($nc($nc(a)->type)->tsym, anno)) {
					return a;
				}
			}
		}
	}
	return nullptr;
}

bool Symbol::annotationsPendingCompletion() {
	return this->metadata == nullptr ? false : $nc(this->metadata)->pendingCompletion();
}

void Symbol::appendAttributes($List* l) {
	if ($nc(l)->nonEmpty()) {
		$nc($(initedMetadata()))->append(l);
	}
}

void Symbol::appendClassInitTypeAttributes($List* l) {
	if ($nc(l)->nonEmpty()) {
		$nc($(initedMetadata()))->appendClassInitTypeAttributes(l);
	}
}

void Symbol::appendInitTypeAttributes($List* l) {
	if ($nc(l)->nonEmpty()) {
		$nc($(initedMetadata()))->appendInitTypeAttributes(l);
	}
}

void Symbol::appendUniqueTypeAttributes($List* l) {
	if ($nc(l)->nonEmpty()) {
		$nc($(initedMetadata()))->appendUniqueTypes(l);
	}
}

$List* Symbol::getClassInitTypeAttributes() {
	return (this->metadata == nullptr) ? $List::nil() : $nc(this->metadata)->getClassInitTypeAttributes();
}

$List* Symbol::getInitTypeAttributes() {
	return (this->metadata == nullptr) ? $List::nil() : $nc(this->metadata)->getInitTypeAttributes();
}

void Symbol::setInitTypeAttributes($List* l) {
	$nc($(initedMetadata()))->setInitTypeAttributes(l);
}

void Symbol::setClassInitTypeAttributes($List* l) {
	$nc($(initedMetadata()))->setClassInitTypeAttributes(l);
}

$List* Symbol::getDeclarationAttributes() {
	return (this->metadata == nullptr) ? $List::nil() : $nc(this->metadata)->getDeclarationAttributes();
}

bool Symbol::hasAnnotations() {
	return (this->metadata != nullptr && !$nc(this->metadata)->isEmpty());
}

bool Symbol::hasTypeAnnotations() {
	return (this->metadata != nullptr && !$nc(this->metadata)->isTypesEmpty());
}

bool Symbol::isCompleted() {
	return $nc(this->completer)->isTerminal();
}

void Symbol::prependAttributes($List* l) {
	if ($nc(l)->nonEmpty()) {
		$nc($(initedMetadata()))->prepend(l);
	}
}

void Symbol::resetAnnotations() {
	$nc($(initedMetadata()))->reset();
}

void Symbol::setAttributes(Symbol* other) {
	if (this->metadata != nullptr || $nc(other)->metadata != nullptr) {
		$nc($(initedMetadata()))->setAttributes(other->metadata);
	}
}

void Symbol::setDeclarationAttributes($List* a) {
	if (this->metadata != nullptr || $nc(a)->nonEmpty()) {
		$nc($(initedMetadata()))->setDeclarationAttributes(a);
	}
}

void Symbol::setTypeAttributes($List* a) {
	if (this->metadata != nullptr || $nc(a)->nonEmpty()) {
		if (this->metadata == nullptr) {
			$set(this, metadata, $new($SymbolMetadata, this));
		}
		$nc(this->metadata)->setTypeAttributes(a);
	}
}

$SymbolMetadata* Symbol::initedMetadata() {
	if (this->metadata == nullptr) {
		$set(this, metadata, $new($SymbolMetadata, this));
	}
	return this->metadata;
}

$SymbolMetadata* Symbol::getMetadata() {
	return this->metadata;
}

void Symbol::init$($Kinds$Kind* kind, int64_t flags, $1Name* name, $Type* type, Symbol* owner) {
	$AnnoConstruct::init$();
	$set(this, kind, kind);
	this->flags_field = flags;
	$set(this, type, type);
	$set(this, owner, owner);
	$init($Symbol$Completer);
	$set(this, completer, $Symbol$Completer::NULL_COMPLETER);
	$set(this, erasure_field, nullptr);
	$set(this, name, name);
}

int32_t Symbol::poolTag() {
	$throwNew($AssertionError, $of("Invalid pool entry"_s));
	$shouldNotReachHere();
}

Symbol* Symbol::clone(Symbol* newOwner) {
	$throwNew($AssertionError);
	$shouldNotReachHere();
}

$Object* Symbol::accept($Symbol$Visitor* v, Object$* p) {
	return $of($nc(v)->visitSymbol(this, p));
}

$String* Symbol::toString() {
	return $nc(this->name)->toString();
}

Symbol* Symbol::location() {
	bool var$0 = $nc(this->owner)->name == nullptr;
	if (!var$0) {
		bool var$1 = $nc($nc(this->owner)->name)->isEmpty();
		$init($Kinds$Kind);
		var$0 = (var$1 && ((int64_t)($nc(this->owner)->flags() & (uint64_t)(int64_t)0x00100000)) == 0 && $nc(this->owner)->kind != $Kinds$Kind::PCK && $nc(this->owner)->kind != $Kinds$Kind::TYP);
	}
	if (var$0) {
		return nullptr;
	}
	return this->owner;
}

Symbol* Symbol::location($Type* site, $Types* types) {
	if ($nc(this->owner)->name == nullptr || $nc($nc(this->owner)->name)->isEmpty()) {
		return location();
	}
	$init($TypeTag);
	if ($nc($nc(this->owner)->type)->hasTag($TypeTag::CLASS)) {
		$var($Type, ownertype, $nc(types)->asOuterSuper(site, this->owner));
		if (ownertype != nullptr) {
			return ownertype->tsym;
		}
	}
	return this->owner;
}

Symbol* Symbol::baseSymbol() {
	return this;
}

$Type* Symbol::erasure($Types* types) {
	if (this->erasure_field == nullptr) {
		$set(this, erasure_field, $nc(types)->erasure(this->type));
	}
	return this->erasure_field;
}

$Type* Symbol::externalType($Types* types) {
	$useLocalCurrentObjectStackCache();
	$var($Type, t, erasure(types));
	if (this->name == $nc($nc($nc(this->name)->table)->names)->init && $nc(this->owner)->hasOuterInstance()) {
		$var($Type, outerThisType, $nc(types)->erasure($($nc($nc(this->owner)->type)->getEnclosingType())));
		$var($List, var$0, $nc($($nc(t)->getParameterTypes()))->prepend(outerThisType));
		$var($Type, var$1, t->getReturnType());
		return $new($Type$MethodType, var$0, var$1, $(t->getThrownTypes()), t->tsym);
	} else {
		return t;
	}
}

bool Symbol::isDeprecated() {
	return ((int64_t)(this->flags_field & (uint64_t)(int64_t)0x00020000)) != 0;
}

bool Symbol::hasDeprecatedAnnotation() {
	return ((int64_t)(this->flags_field & (uint64_t)(int64_t)0x0040000000000000)) != 0;
}

bool Symbol::isDeprecatedForRemoval() {
	return ((int64_t)(this->flags_field & (uint64_t)(int64_t)0x0080000000000000)) != 0;
}

bool Symbol::isPreviewApi() {
	return ((int64_t)(this->flags_field & (uint64_t)(int64_t)0x0100000000000000)) != 0;
}

bool Symbol::isDeprecatableViaAnnotation() {
	$init($Symbol$1);
	switch ($nc($Symbol$1::$SwitchMap$javax$lang$model$element$ElementKind)->get($nc(($(getKind())))->ordinal())) {
	case 1:
		{}
	case 2:
		{}
	case 3:
		{}
	case 4:
		{}
	case 5:
		{
			return false;
		}
	default:
		{
			return true;
		}
	}
}

bool Symbol::isStatic() {
	bool var$0 = ((int64_t)(flags() & (uint64_t)(int64_t)8)) != 0;
	$init($Kinds$Kind);
	return var$0 || ((int64_t)($nc(this->owner)->flags() & (uint64_t)(int64_t)512)) != 0 && this->kind != $Kinds$Kind::MTH && this->name != $nc($nc($nc(this->name)->table)->names)->_this;
}

bool Symbol::isInterface() {
	return ((int64_t)(flags() & (uint64_t)(int64_t)512)) != 0;
}

bool Symbol::isAbstract() {
	return ((int64_t)(this->flags_field & (uint64_t)(int64_t)1024)) != 0;
}

bool Symbol::isPrivate() {
	return ((int64_t)(this->flags_field & (uint64_t)(int64_t)$Flags::AccessFlags)) == 2;
}

bool Symbol::isPublic() {
	return ((int64_t)(this->flags_field & (uint64_t)(int64_t)$Flags::AccessFlags)) == 1;
}

bool Symbol::isEnum() {
	return ((int64_t)(flags() & (uint64_t)(int64_t)16384)) != 0;
}

bool Symbol::isSealed() {
	return ((int64_t)(this->flags_field & (uint64_t)(int64_t)0x4000000000000000)) != 0;
}

bool Symbol::isNonSealed() {
	return ((int64_t)(this->flags_field & (uint64_t)(int64_t)0x8000000000000000)) != 0;
}

bool Symbol::isFinal() {
	return ((int64_t)(this->flags_field & (uint64_t)(int64_t)16)) != 0;
}

bool Symbol::isDirectlyOrIndirectlyLocal() {
	$init($Kinds$KindSelector);
	bool var$0 = $nc($nc(this->owner)->kind)->matches($Kinds$KindSelector::VAL_MTH);
	return (var$0 || ($nc(this->owner)->kind == $Kinds$Kind::TYP && $nc(this->owner)->isDirectlyOrIndirectlyLocal()));
}

bool Symbol::isAnonymous() {
	return $nc(this->name)->isEmpty();
}

bool Symbol::isConstructor() {
	return this->name == $nc($nc($nc(this->name)->table)->names)->init;
}

bool Symbol::isDynamic() {
	return false;
}

$1Name* Symbol::getQualifiedName() {
	return this->name;
}

$1Name* Symbol::flatName() {
	return getQualifiedName();
}

$Scope$WriteableScope* Symbol::members() {
	return nullptr;
}

bool Symbol::isInner() {
	$init($Kinds$Kind);
	$init($TypeTag);
	return this->kind == $Kinds$Kind::TYP && $nc($($nc(this->type)->getEnclosingType()))->hasTag($TypeTag::CLASS);
}

bool Symbol::hasOuterInstance() {
	$init($TypeTag);
	bool var$0 = $nc($($nc(this->type)->getEnclosingType()))->hasTag($TypeTag::CLASS);
	return var$0 && ((int64_t)(flags() & (uint64_t)(int64_t)(512 | 0x00400000))) == 0;
}

$Symbol$ClassSymbol* Symbol::enclClass() {
	$var(Symbol, c, this);
	while (true) {
		bool var$0 = c != nullptr;
		if (var$0) {
			$init($Kinds$KindSelector);
			bool var$1 = !$nc(c->kind)->matches($Kinds$KindSelector::TYP);
			$init($TypeTag);
			var$0 = (var$1 || !$nc(c->type)->hasTag($TypeTag::CLASS));
		}
		if (!(var$0)) {
			break;
		}
		{
			$assign(c, $nc(c)->owner);
		}
	}
	return $cast($Symbol$ClassSymbol, c);
}

$Symbol$ClassSymbol* Symbol::outermostClass() {
	$useLocalCurrentObjectStackCache();
	$var(Symbol, sym, this);
	$var(Symbol, prev, nullptr);
	$init($Kinds$Kind);
	while ($nc(sym)->kind != $Kinds$Kind::PCK) {
		$assign(prev, sym);
		$assign(sym, sym->owner);
	}
	return $cast($Symbol$ClassSymbol, prev);
}

$Symbol$PackageSymbol* Symbol::packge() {
	$var(Symbol, sym, this);
	$init($Kinds$Kind);
	while ($nc(sym)->kind != $Kinds$Kind::PCK) {
		$assign(sym, sym->owner);
	}
	return $cast($Symbol$PackageSymbol, sym);
}

bool Symbol::isSubClass(Symbol* base, $Types* types) {
	$throwNew($AssertionError, $of($$str({"isSubClass "_s, this})));
	$shouldNotReachHere();
}

bool Symbol::isMemberOf($Symbol$TypeSymbol* clazz, $Types* types) {
	bool var$0 = $equals(this->owner, clazz);
	if (!var$0) {
		bool var$2 = $nc(clazz)->isSubClass(this->owner, types);
		bool var$1 = var$2 && isInheritedIn(clazz, types);
		var$0 = var$1 && !hiddenIn($cast($Symbol$ClassSymbol, clazz), types);
	}
	return var$0;
}

bool Symbol::isEnclosedBy($Symbol$ClassSymbol* clazz) {
	$init($Kinds$Kind);
	{
		$var(Symbol, sym, this);
		for (; sym->kind != $Kinds$Kind::PCK; $assign(sym, sym->owner)) {
			if ($equals(sym, clazz)) {
				return true;
			}
		}
	}
	return false;
}

bool Symbol::hiddenIn($Symbol$ClassSymbol* clazz, $Types* types) {
	$var(Symbol, sym, hiddenInInternal(clazz, types));
	$Assert::check(sym != nullptr, "the result of hiddenInInternal() can\'t be null"_s);
	return sym != this;
}

Symbol* Symbol::hiddenInInternal($Symbol$ClassSymbol* currentClass, $Types* types) {
	$useLocalCurrentObjectStackCache();
	if ($equals(currentClass, this->owner)) {
		return this;
	}
	{
		$var($Iterator, i$, $nc($($nc($($nc(currentClass)->members()))->getSymbolsByName(this->name)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var(Symbol, sym, $cast(Symbol, i$->next()));
			{
				bool var$0 = $nc(sym)->kind == this->kind;
				if (var$0) {
					$init($Kinds$Kind);
					bool var$1 = this->kind != $Kinds$Kind::MTH;
					if (!var$1) {
						bool var$2 = ((int64_t)($nc(sym)->flags() & (uint64_t)(int64_t)8)) != 0;
						var$1 = var$2 && $nc(types)->isSubSignature(sym->type, this->type);
					}
					var$0 = (var$1);
				}
				if (var$0) {
					return sym;
				}
			}
		}
	}
	$var(Symbol, hiddenSym, nullptr);
	{
		$var($Iterator, i$, $nc($($nc($($nc(types)->interfaces(currentClass->type)))->prepend($(types->supertype(currentClass->type)))))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, st, $cast($Type, i$->next()));
			{
				$init($TypeTag);
				if (st != nullptr && (st->hasTag($TypeTag::CLASS))) {
					$var(Symbol, sym, hiddenInInternal($cast($Symbol$ClassSymbol, st->tsym), types));
					if (sym == this) {
						return this;
					} else if (sym != nullptr) {
						$assign(hiddenSym, sym);
					}
				}
			}
		}
	}
	return hiddenSym;
}

bool Symbol::isAccessibleIn(Symbol* clazz, $Types* types) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Symbol$PackageSymbol, thisPackage, nullptr)
		switch ((int32_t)((int64_t)(this->flags_field & (uint64_t)(int64_t)$Flags::AccessFlags))) {
		default:
			{}
		case 1:
			{
				return true;
			}
		case 2:
			{
				return this->owner == clazz;
			}
		case 4:
			{
				return ((int64_t)($nc(clazz)->flags() & (uint64_t)(int64_t)512)) == 0;
			}
		case 0:
			{
				$assign(thisPackage, this->packge());
				{
					$var(Symbol, sup, clazz);
					for (; sup != nullptr && sup != this->owner; $assign(sup, $nc($($nc(types)->supertype($nc(sup)->type)))->tsym)) {
						$init($TypeTag);
						while ($nc($nc(sup)->type)->hasTag($TypeTag::TYPEVAR)) {
							$assign(sup, $nc($($nc(sup->type)->getUpperBound()))->tsym);
						}
						if ($nc($nc(sup)->type)->isErroneous()) {
							return true;
						}
						if (((int64_t)($nc(sup)->flags() & (uint64_t)(int64_t)0x01000000)) != 0) {
							continue;
						}
						if ($nc(sup)->packge() != thisPackage) {
							return false;
						}
					}
				}
				return ((int64_t)($nc(clazz)->flags() & (uint64_t)(int64_t)512)) == 0;
			}
		}
	}
}

bool Symbol::isInheritedIn(Symbol* clazz, $Types* types) {
	return isAccessibleIn(clazz, types);
}

Symbol* Symbol::asMemberOf($Type* site, $Types* types) {
	$throwNew($AssertionError);
	$shouldNotReachHere();
}

bool Symbol::overrides(Symbol* _other, $Symbol$TypeSymbol* origin, $Types* types, bool checkResult) {
	return false;
}

void Symbol::complete() {
	$init($Symbol$Completer);
	if (this->completer != $Symbol$Completer::NULL_COMPLETER) {
		$var($Symbol$Completer, c, this->completer);
		$set(this, completer, $Symbol$Completer::NULL_COMPLETER);
		$nc(c)->complete(this);
	}
}

void Symbol::apiComplete() {
	try {
		complete();
	} catch ($Symbol$CompletionFailure& cf) {
		$nc(cf->dcfh)->handleAPICompletionFailure(cf);
	}
}

bool Symbol::exists() {
	return true;
}

$TypeMirror* Symbol::asType() {
	return this->type;
}

$Element* Symbol::getEnclosingElement() {
	return this->owner;
}

$ElementKind* Symbol::getKind() {
	$init($ElementKind);
	return $ElementKind::OTHER;
}

$Set* Symbol::getModifiers() {
	apiComplete();
	return $Flags::asModifierSet(flags());
}

$Name* Symbol::getSimpleName() {
	return this->name;
}

$1List* Symbol::getAnnotationMirrors() {
	apiComplete();
	return getRawAttributes();
}

$1List* Symbol::getEnclosedElements() {
	return $List::nil();
}

$List* Symbol::getTypeParameters() {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, l, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc($($nc(this->type)->getTypeArguments()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				$init($ElementKind);
				$Assert::check($nc($nc(t)->tsym)->getKind() == $ElementKind::TYPE_PARAMETER);
				l->append($cast($Symbol$TypeVariableSymbol, $nc(t)->tsym));
			}
		}
	}
	return l->toList();
}

Symbol::Symbol() {
}

$Class* Symbol::load$($String* name, bool initialize) {
	$loadClass(Symbol, name, initialize, &_Symbol_ClassInfo_, allocate$Symbol);
	return class$;
}

$Class* Symbol::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com