#include <com/sun/tools/javac/processing/JavacRoundEnvironment.h>

#include <com/sun/tools/javac/code/Source$Feature.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/model/JavacElements.h>
#include <com/sun/tools/javac/processing/JavacProcessingEnvironment.h>
#include <com/sun/tools/javac/processing/JavacRoundEnvironment$AnnotationSetMultiScanner.h>
#include <com/sun/tools/javac/processing/JavacRoundEnvironment$AnnotationSetScanner.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Module.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <javax/annotation/processing/ProcessingEnvironment.h>
#include <javax/lang/model/element/AnnotationMirror.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ElementKind.h>
#include <javax/lang/model/element/ModuleElement.h>
#include <javax/lang/model/element/TypeElement.h>
#include <javax/lang/model/type/DeclaredType.h>
#include <javax/lang/model/util/Elements.h>
#include <jcpp.h>

#undef ANNOTATION_TYPE
#undef MODULES
#undef NOT_AN_ANNOTATION_TYPE

using $TypeElementArray = $Array<::javax::lang::model::element::TypeElement>;
using $Source = ::com::sun::tools::javac::code::Source;
using $Source$Feature = ::com::sun::tools::javac::code::Source$Feature;
using $JavacElements = ::com::sun::tools::javac::model::JavacElements;
using $JavacProcessingEnvironment = ::com::sun::tools::javac::processing::JavacProcessingEnvironment;
using $JavacRoundEnvironment$AnnotationSetMultiScanner = ::com::sun::tools::javac::processing::JavacRoundEnvironment$AnnotationSetMultiScanner;
using $JavacRoundEnvironment$AnnotationSetScanner = ::com::sun::tools::javac::processing::JavacRoundEnvironment$AnnotationSetScanner;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $ProcessingEnvironment = ::javax::annotation::processing::ProcessingEnvironment;
using $RoundEnvironment = ::javax::annotation::processing::RoundEnvironment;
using $AnnotationMirror = ::javax::lang::model::element::AnnotationMirror;
using $Element = ::javax::lang::model::element::Element;
using $ElementKind = ::javax::lang::model::element::ElementKind;
using $ModuleElement = ::javax::lang::model::element::ModuleElement;
using $TypeElement = ::javax::lang::model::element::TypeElement;
using $DeclaredType = ::javax::lang::model::type::DeclaredType;
using $Elements = ::javax::lang::model::util::Elements;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

$FieldInfo _JavacRoundEnvironment_FieldInfo_[] = {
	{"processingOver", "Z", nullptr, $PRIVATE | $FINAL, $field(JavacRoundEnvironment, processingOver$)},
	{"errorRaised", "Z", nullptr, $PRIVATE | $FINAL, $field(JavacRoundEnvironment, errorRaised$)},
	{"processingEnv", "Ljavax/annotation/processing/ProcessingEnvironment;", nullptr, $PRIVATE | $FINAL, $field(JavacRoundEnvironment, processingEnv)},
	{"eltUtils", "Ljavax/lang/model/util/Elements;", nullptr, $PRIVATE | $FINAL, $field(JavacRoundEnvironment, eltUtils)},
	{"allowModules", "Z", nullptr, $PRIVATE | $FINAL, $field(JavacRoundEnvironment, allowModules)},
	{"rootElements", "Ljava/util/Set;", "Ljava/util/Set<+Ljavax/lang/model/element/Element;>;", $PRIVATE | $FINAL, $field(JavacRoundEnvironment, rootElements)},
	{"NOT_AN_ANNOTATION_TYPE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JavacRoundEnvironment, NOT_AN_ANNOTATION_TYPE)},
	{}
};

$MethodInfo _JavacRoundEnvironment_MethodInfo_[] = {
	{"<init>", "(ZZLjava/util/Set;Lcom/sun/tools/javac/processing/JavacProcessingEnvironment;)V", "(ZZLjava/util/Set<+Ljavax/lang/model/element/Element;>;Lcom/sun/tools/javac/processing/JavacProcessingEnvironment;)V", 0, $method(static_cast<void(JavacRoundEnvironment::*)(bool,bool,$Set*,$JavacProcessingEnvironment*)>(&JavacRoundEnvironment::init$))},
	{"annotationToElement", "(Ljava/lang/Class;)Ljavax/lang/model/element/TypeElement;", "(Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;)Ljavax/lang/model/element/TypeElement;", $PRIVATE, $method(static_cast<$TypeElement*(JavacRoundEnvironment::*)($Class*)>(&JavacRoundEnvironment::annotationToElement))},
	{"errorRaised", "()Z", nullptr, $PUBLIC},
	{"getElementsAnnotatedWith", "(Ljavax/lang/model/element/TypeElement;)Ljava/util/Set;", "(Ljavax/lang/model/element/TypeElement;)Ljava/util/Set<+Ljavax/lang/model/element/Element;>;", $PUBLIC},
	{"getElementsAnnotatedWith", "(Ljava/lang/Class;)Ljava/util/Set;", "(Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;)Ljava/util/Set<+Ljavax/lang/model/element/Element;>;", $PUBLIC},
	{"getElementsAnnotatedWithAny", "([Ljavax/lang/model/element/TypeElement;)Ljava/util/Set;", "([Ljavax/lang/model/element/TypeElement;)Ljava/util/Set<+Ljavax/lang/model/element/Element;>;", $PUBLIC | $TRANSIENT},
	{"getElementsAnnotatedWithAny", "(Ljava/util/Set;)Ljava/util/Set;", "(Ljava/util/Set<Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;>;)Ljava/util/Set<+Ljavax/lang/model/element/Element;>;", $PUBLIC},
	{"getRootElements", "()Ljava/util/Set;", "()Ljava/util/Set<+Ljavax/lang/model/element/Element;>;", $PUBLIC},
	{"mirrorAsElement", "(Ljavax/lang/model/element/AnnotationMirror;)Ljavax/lang/model/element/Element;", nullptr, $PRIVATE, $method(static_cast<$Element*(JavacRoundEnvironment::*)($AnnotationMirror*)>(&JavacRoundEnvironment::mirrorAsElement))},
	{"processingOver", "()Z", nullptr, $PUBLIC},
	{"throwIfNotAnnotation", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;)V", $PRIVATE, $method(static_cast<void(JavacRoundEnvironment::*)($Class*)>(&JavacRoundEnvironment::throwIfNotAnnotation))},
	{"throwIfNotAnnotation", "(Ljavax/lang/model/element/TypeElement;)V", nullptr, $PRIVATE, $method(static_cast<void(JavacRoundEnvironment::*)($TypeElement*)>(&JavacRoundEnvironment::throwIfNotAnnotation))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JavacRoundEnvironment_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.processing.JavacRoundEnvironment$AnnotationSetMultiScanner", "com.sun.tools.javac.processing.JavacRoundEnvironment", "AnnotationSetMultiScanner", $PRIVATE},
	{"com.sun.tools.javac.processing.JavacRoundEnvironment$AnnotationSetScanner", "com.sun.tools.javac.processing.JavacRoundEnvironment", "AnnotationSetScanner", $PRIVATE},
	{}
};

$ClassInfo _JavacRoundEnvironment_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.processing.JavacRoundEnvironment",
	"java.lang.Object",
	"javax.annotation.processing.RoundEnvironment",
	_JavacRoundEnvironment_FieldInfo_,
	_JavacRoundEnvironment_MethodInfo_,
	nullptr,
	nullptr,
	_JavacRoundEnvironment_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.processing.JavacRoundEnvironment$AnnotationSetMultiScanner,com.sun.tools.javac.processing.JavacRoundEnvironment$AnnotationSetScanner"
};

$Object* allocate$JavacRoundEnvironment($Class* clazz) {
	return $of($alloc(JavacRoundEnvironment));
}

$String* JavacRoundEnvironment::NOT_AN_ANNOTATION_TYPE = nullptr;

void JavacRoundEnvironment::init$(bool processingOver, bool errorRaised, $Set* rootElements, $JavacProcessingEnvironment* processingEnv) {
	this->processingOver$ = processingOver;
	this->errorRaised$ = errorRaised;
	$set(this, rootElements, rootElements);
	$set(this, processingEnv, processingEnv);
	$init($Source$Feature);
	this->allowModules = $Source$Feature::MODULES->allowedInSource($nc(processingEnv)->source);
	$set(this, eltUtils, $nc(processingEnv)->getElementUtils());
}

$String* JavacRoundEnvironment::toString() {
	$useLocalCurrentObjectStackCache();
	return $String::format("[errorRaised=%b, rootElements=%s, processingOver=%b]"_s, $$new($ObjectArray, {
		$($of($Boolean::valueOf(this->errorRaised$))),
		$of(this->rootElements),
		$($of($Boolean::valueOf(this->processingOver$)))
	}));
}

bool JavacRoundEnvironment::processingOver() {
	return this->processingOver$;
}

bool JavacRoundEnvironment::errorRaised() {
	return this->errorRaised$;
}

$Set* JavacRoundEnvironment::getRootElements() {
	return this->rootElements;
}

$Set* JavacRoundEnvironment::getElementsAnnotatedWith($TypeElement* a) {
	$useLocalCurrentObjectStackCache();
	throwIfNotAnnotation(a);
	$var($Set, result, $Collections::emptySet());
	$var($JavacRoundEnvironment$AnnotationSetScanner, scanner, $new($JavacRoundEnvironment$AnnotationSetScanner, this, result));
	{
		$var($Iterator, i$, $nc(this->rootElements)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Element, element, $cast($Element, i$->next()));
			$assign(result, scanner->scan(element, a));
		}
	}
	return result;
}

$Set* JavacRoundEnvironment::getElementsAnnotatedWithAny($TypeElementArray* annotations) {
	$useLocalCurrentObjectStackCache();
	$var($Set, annotationSet, $new($LinkedHashSet, $nc(annotations)->length));
	{
		$var($TypeElementArray, arr$, annotations);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($TypeElement, annotation, arr$->get(i$));
			{
				throwIfNotAnnotation(annotation);
				annotationSet->add(annotation);
			}
		}
	}
	$var($Set, result, $Collections::emptySet());
	$var($JavacRoundEnvironment$AnnotationSetMultiScanner, scanner, $new($JavacRoundEnvironment$AnnotationSetMultiScanner, this, result));
	{
		$var($Iterator, i$, $nc(this->rootElements)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Element, element, $cast($Element, i$->next()));
			$assign(result, scanner->scan(element, annotationSet));
		}
	}
	return result;
}

$Set* JavacRoundEnvironment::getElementsAnnotatedWith($Class* a) {
	$useLocalCurrentObjectStackCache();
	throwIfNotAnnotation(a);
	$var($String, name, $nc(a)->getCanonicalName());
	if (name == nullptr) {
		return $Collections::emptySet();
	} else {
		$var($TypeElement, annotationType, annotationToElement(a));
		if (annotationType == nullptr) {
			return $Collections::emptySet();
		} else {
			return getElementsAnnotatedWith(annotationType);
		}
	}
}

$Set* JavacRoundEnvironment::getElementsAnnotatedWithAny($Set* annotations) {
	$useLocalCurrentObjectStackCache();
	$var($List, annotationsAsElements, $new($ArrayList, $nc(annotations)->size()));
	{
		$var($Iterator, i$, $nc(annotations)->iterator());
		for (; $nc(i$)->hasNext();) {
			$Class* annotation = $cast($Class, i$->next());
			{
				throwIfNotAnnotation(annotation);
				$var($String, name, $nc(annotation)->getCanonicalName());
				if (name == nullptr) {
					continue;
				}
				annotationsAsElements->add($(annotationToElement(annotation)));
			}
		}
	}
	return getElementsAnnotatedWithAny($fcast($TypeElementArray, $(annotationsAsElements->toArray($$new($TypeElementArray, 0)))));
}

$TypeElement* JavacRoundEnvironment::annotationToElement($Class* annotation) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, $nc(annotation)->getCanonicalName());
	$var($TypeElement, annotationElement, $nc(this->eltUtils)->getTypeElement(name));
	if (annotationElement != nullptr) {
		return annotationElement;
	} else if (this->allowModules) {
		$var($String, moduleName, $cast($String, $Objects::requireNonNullElse($($nc($(annotation->getModule()))->getName()), ""_s)));
		return $nc(this->eltUtils)->getTypeElement($($nc(this->eltUtils)->getModuleElement(moduleName)), name);
	} else {
		return nullptr;
	}
}

$Element* JavacRoundEnvironment::mirrorAsElement($AnnotationMirror* annotationMirror) {
	return $nc($($nc(annotationMirror)->getAnnotationType()))->asElement();
}

void JavacRoundEnvironment::throwIfNotAnnotation($Class* a) {
	if (!$nc(a)->isAnnotation()) {
		$throwNew($IllegalArgumentException, $$str({JavacRoundEnvironment::NOT_AN_ANNOTATION_TYPE, a}));
	}
}

void JavacRoundEnvironment::throwIfNotAnnotation($TypeElement* a) {
	$init($ElementKind);
	if ($nc(a)->getKind() != $ElementKind::ANNOTATION_TYPE) {
		$throwNew($IllegalArgumentException, $$str({JavacRoundEnvironment::NOT_AN_ANNOTATION_TYPE, a}));
	}
}

JavacRoundEnvironment::JavacRoundEnvironment() {
}

void clinit$JavacRoundEnvironment($Class* class$) {
	$assignStatic(JavacRoundEnvironment::NOT_AN_ANNOTATION_TYPE, "The argument does not represent an annotation type: "_s);
}

$Class* JavacRoundEnvironment::load$($String* name, bool initialize) {
	$loadClass(JavacRoundEnvironment, name, initialize, &_JavacRoundEnvironment_ClassInfo_, clinit$JavacRoundEnvironment, allocate$JavacRoundEnvironment);
	return class$;
}

$Class* JavacRoundEnvironment::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com