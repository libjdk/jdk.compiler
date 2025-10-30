#include <com/sun/tools/javac/code/Symbol$TypeVariableSymbol.h>

#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/Attribute$TypeCompound.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/TargetType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeAnnotationPosition.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/lang/CharSequence.h>
#include <java/lang/annotation/Annotation.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ElementKind.h>
#include <javax/lang/model/element/ElementVisitor.h>
#include <javax/lang/model/element/Name.h>
#include <javax/lang/model/element/TypeParameterElement.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

#undef CLASS_TYPE_PARAMETER
#undef METHOD_TYPE_PARAMETER
#undef TYP
#undef TYPE_PARAMETER

using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Attribute$TypeCompound = ::com::sun::tools::javac::code::Attribute$TypeCompound;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $TargetType = ::com::sun::tools::javac::code::TargetType;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $TypeAnnotationPosition = ::com::sun::tools::javac::code::TypeAnnotationPosition;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $Iterator = ::java::util::Iterator;
using $1List = ::java::util::List;
using $Set = ::java::util::Set;
using $Element = ::javax::lang::model::element::Element;
using $ElementKind = ::javax::lang::model::element::ElementKind;
using $ElementVisitor = ::javax::lang::model::element::ElementVisitor;
using $1Name = ::javax::lang::model::element::Name;
using $TypeParameterElement = ::javax::lang::model::element::TypeParameterElement;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Symbol$TypeVariableSymbol_MethodInfo_[] = {
	{"*asType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*getEnclosedElements", "()Ljava/util/List;", nullptr, $PUBLIC},
	{"*getEnclosingElement", "()Ljavax/lang/model/element/Element;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getModifiers", "()Ljava/util/Set;", nullptr, $PUBLIC},
	{"*getSimpleName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(JLcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Symbol$TypeVariableSymbol::*)(int64_t,$Name*,$Type*,$Symbol*)>(&Symbol$TypeVariableSymbol::init$))},
	{"accept", "(Ljavax/lang/model/element/ElementVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/element/ElementVisitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"getAnnotationMirrors", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$Compound;>;", $PUBLIC},
	{"getAttribute", "(Ljava/lang/Class;)Lcom/sun/tools/javac/code/Attribute$Compound;", "<A::Ljava/lang/annotation/Annotation;>(Ljava/lang/Class<TA;>;)Lcom/sun/tools/javac/code/Attribute$Compound;", $PUBLIC},
	{"getBounds", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC},
	{"getGenericElement", "()Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC},
	{"getKind", "()Ljavax/lang/model/element/ElementKind;", nullptr, $PUBLIC},
	{"isCurrentSymbolsAnnotation", "(Lcom/sun/tools/javac/code/Attribute$TypeCompound;I)Z", nullptr, 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Symbol$TypeVariableSymbol_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Symbol$TypeVariableSymbol", "com.sun.tools.javac.code.Symbol", "TypeVariableSymbol", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Symbol$TypeSymbol", "com.sun.tools.javac.code.Symbol", "TypeSymbol", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Symbol$TypeVariableSymbol_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Symbol$TypeVariableSymbol",
	"com.sun.tools.javac.code.Symbol$TypeSymbol",
	"javax.lang.model.element.TypeParameterElement",
	nullptr,
	_Symbol$TypeVariableSymbol_MethodInfo_,
	nullptr,
	nullptr,
	_Symbol$TypeVariableSymbol_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Symbol"
};

$Object* allocate$Symbol$TypeVariableSymbol($Class* clazz) {
	return $of($alloc(Symbol$TypeVariableSymbol));
}

$1List* Symbol$TypeVariableSymbol::getEnclosedElements() {
	 return this->$Symbol$TypeSymbol::getEnclosedElements();
}

$Element* Symbol$TypeVariableSymbol::getEnclosingElement() {
	 return this->$Symbol$TypeSymbol::getEnclosingElement();
}

$1Name* Symbol$TypeVariableSymbol::getSimpleName() {
	 return this->$Symbol$TypeSymbol::getSimpleName();
}

$TypeMirror* Symbol$TypeVariableSymbol::asType() {
	 return this->$Symbol$TypeSymbol::asType();
}

$String* Symbol$TypeVariableSymbol::toString() {
	 return this->$Symbol$TypeSymbol::toString();
}

$Set* Symbol$TypeVariableSymbol::getModifiers() {
	 return this->$Symbol$TypeSymbol::getModifiers();
}

$AnnotationArray* Symbol$TypeVariableSymbol::getAnnotationsByType($Class* annoType) {
	 return this->$Symbol$TypeSymbol::getAnnotationsByType(annoType);
}

$Annotation* Symbol$TypeVariableSymbol::getAnnotation($Class* annoType) {
	 return this->$Symbol$TypeSymbol::getAnnotation(annoType);
}

int32_t Symbol$TypeVariableSymbol::hashCode() {
	 return this->$Symbol$TypeSymbol::hashCode();
}

bool Symbol$TypeVariableSymbol::equals(Object$* arg0) {
	 return this->$Symbol$TypeSymbol::equals(arg0);
}

$Object* Symbol$TypeVariableSymbol::clone() {
	 return this->$Symbol$TypeSymbol::clone();
}

void Symbol$TypeVariableSymbol::finalize() {
	this->$Symbol$TypeSymbol::finalize();
}

void Symbol$TypeVariableSymbol::init$(int64_t flags, $Name* name, $Type* type, $Symbol* owner) {
	$init($Kinds$Kind);
	$Symbol$TypeSymbol::init$($Kinds$Kind::TYP, flags, name, type, owner);
}

$ElementKind* Symbol$TypeVariableSymbol::getKind() {
	$init($ElementKind);
	return $ElementKind::TYPE_PARAMETER;
}

$Element* Symbol$TypeVariableSymbol::getGenericElement() {
	return this->owner;
}

$1List* Symbol$TypeVariableSymbol::getBounds() {
	$useLocalCurrentObjectStackCache();
	$var($Type$TypeVar, t, $cast($Type$TypeVar, this->type));
	$var($Type, bound, $nc(t)->getUpperBound());
	if (!$nc(bound)->isCompound()) {
		return $List::of(bound);
	}
	$var($Type$ClassType, ct, $cast($Type$ClassType, bound));
	if (!$nc($nc($nc(ct)->tsym)->erasure_field)->isInterface()) {
		return $nc(ct->interfaces_field)->prepend(ct->supertype_field);
	} else {
		return ct->interfaces_field;
	}
}

$1List* Symbol$TypeVariableSymbol::getAnnotationMirrors() {
	$useLocalCurrentObjectStackCache();
	$var($List, candidates, $nc(this->owner)->getRawTypeAttributes());
	int32_t index = $nc($($nc(this->owner)->getTypeParameters()))->indexOf(this);
	$var($List, res, $List::nil());
	{
		$var($Iterator, i$, $nc(candidates)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Attribute$TypeCompound, a, $cast($Attribute$TypeCompound, i$->next()));
			{
				if (isCurrentSymbolsAnnotation(a, index)) {
					$assign(res, $nc(res)->prepend(a));
				}
			}
		}
	}
	return $nc(res)->reverse();
}

$Attribute$Compound* Symbol$TypeVariableSymbol::getAttribute($Class* annoType) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, $nc(annoType)->getName());
	$var($List, candidates, $nc(this->owner)->getRawTypeAttributes());
	int32_t index = $nc($($nc(this->owner)->getTypeParameters()))->indexOf(this);
	{
		$var($Iterator, i$, $nc(candidates)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Attribute$TypeCompound, anno, $cast($Attribute$TypeCompound, i$->next()));
			bool var$0 = isCurrentSymbolsAnnotation(anno, index);
			if (var$0 && $nc(name)->contentEquals($(static_cast<$CharSequence*>($nc($nc($nc(anno)->type)->tsym)->flatName())))) {
				return anno;
			}
		}
	}
	return nullptr;
}

bool Symbol$TypeVariableSymbol::isCurrentSymbolsAnnotation($Attribute$TypeCompound* anno, int32_t index) {
	$init($TargetType);
	return ($nc($nc(anno)->position)->type == $TargetType::CLASS_TYPE_PARAMETER || $nc($nc(anno)->position)->type == $TargetType::METHOD_TYPE_PARAMETER) && $nc(anno->position)->parameter_index == index;
}

$Object* Symbol$TypeVariableSymbol::accept($ElementVisitor* v, Object$* p) {
	return $of($nc(v)->visitTypeParameter(this, p));
}

Symbol$TypeVariableSymbol::Symbol$TypeVariableSymbol() {
}

$Class* Symbol$TypeVariableSymbol::load$($String* name, bool initialize) {
	$loadClass(Symbol$TypeVariableSymbol, name, initialize, &_Symbol$TypeVariableSymbol_ClassInfo_, allocate$Symbol$TypeVariableSymbol);
	return class$;
}

$Class* Symbol$TypeVariableSymbol::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com