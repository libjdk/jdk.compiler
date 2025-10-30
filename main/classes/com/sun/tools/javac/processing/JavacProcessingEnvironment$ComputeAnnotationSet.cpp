#include <com/sun/tools/javac/processing/JavacProcessingEnvironment$ComputeAnnotationSet.h>

#include <com/sun/tools/javac/processing/JavacProcessingEnvironment.h>
#include <java/lang/Iterable.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <javax/lang/model/element/AnnotationMirror.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ExecutableElement.h>
#include <javax/lang/model/element/PackageElement.h>
#include <javax/lang/model/element/TypeElement.h>
#include <javax/lang/model/type/DeclaredType.h>
#include <javax/lang/model/util/ElementScanner14.h>
#include <javax/lang/model/util/ElementScanner6.h>
#include <javax/lang/model/util/Elements.h>
#include <jcpp.h>

using $JavacProcessingEnvironment = ::com::sun::tools::javac::processing::JavacProcessingEnvironment;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $AnnotationMirror = ::javax::lang::model::element::AnnotationMirror;
using $Element = ::javax::lang::model::element::Element;
using $ExecutableElement = ::javax::lang::model::element::ExecutableElement;
using $PackageElement = ::javax::lang::model::element::PackageElement;
using $TypeElement = ::javax::lang::model::element::TypeElement;
using $DeclaredType = ::javax::lang::model::type::DeclaredType;
using $ElementScanner14 = ::javax::lang::model::util::ElementScanner14;
using $ElementScanner6 = ::javax::lang::model::util::ElementScanner6;
using $Elements = ::javax::lang::model::util::Elements;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

$FieldInfo _JavacProcessingEnvironment$ComputeAnnotationSet_FieldInfo_[] = {
	{"elements", "Ljavax/lang/model/util/Elements;", nullptr, $FINAL, $field(JavacProcessingEnvironment$ComputeAnnotationSet, elements)},
	{}
};

$MethodInfo _JavacProcessingEnvironment$ComputeAnnotationSet_MethodInfo_[] = {
	{"<init>", "(Ljavax/lang/model/util/Elements;)V", nullptr, $PUBLIC, $method(static_cast<void(JavacProcessingEnvironment$ComputeAnnotationSet::*)($Elements*)>(&JavacProcessingEnvironment$ComputeAnnotationSet::init$))},
	{"addAnnotations", "(Ljavax/lang/model/element/Element;Ljava/util/Set;)V", "(Ljavax/lang/model/element/Element;Ljava/util/Set<Ljavax/lang/model/element/TypeElement;>;)V", 0},
	{"scan", "(Ljavax/lang/model/element/Element;Ljava/util/Set;)Ljava/util/Set;", "(Ljavax/lang/model/element/Element;Ljava/util/Set<Ljavax/lang/model/element/TypeElement;>;)Ljava/util/Set<Ljavax/lang/model/element/TypeElement;>;", $PUBLIC},
	{"scan", "(Ljavax/lang/model/element/Element;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitExecutable", "(Ljavax/lang/model/element/ExecutableElement;Ljava/util/Set;)Ljava/util/Set;", "(Ljavax/lang/model/element/ExecutableElement;Ljava/util/Set<Ljavax/lang/model/element/TypeElement;>;)Ljava/util/Set<Ljavax/lang/model/element/TypeElement;>;", $PUBLIC},
	{"visitExecutable", "(Ljavax/lang/model/element/ExecutableElement;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitPackage", "(Ljavax/lang/model/element/PackageElement;Ljava/util/Set;)Ljava/util/Set;", "(Ljavax/lang/model/element/PackageElement;Ljava/util/Set<Ljavax/lang/model/element/TypeElement;>;)Ljava/util/Set<Ljavax/lang/model/element/TypeElement;>;", $PUBLIC},
	{"visitPackage", "(Ljavax/lang/model/element/PackageElement;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitType", "(Ljavax/lang/model/element/TypeElement;Ljava/util/Set;)Ljava/util/Set;", "(Ljavax/lang/model/element/TypeElement;Ljava/util/Set<Ljavax/lang/model/element/TypeElement;>;)Ljava/util/Set<Ljavax/lang/model/element/TypeElement;>;", $PUBLIC},
	{"visitType", "(Ljavax/lang/model/element/TypeElement;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _JavacProcessingEnvironment$ComputeAnnotationSet_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.processing.JavacProcessingEnvironment$ComputeAnnotationSet", "com.sun.tools.javac.processing.JavacProcessingEnvironment", "ComputeAnnotationSet", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JavacProcessingEnvironment$ComputeAnnotationSet_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.processing.JavacProcessingEnvironment$ComputeAnnotationSet",
	"javax.lang.model.util.ElementScanner14",
	nullptr,
	_JavacProcessingEnvironment$ComputeAnnotationSet_FieldInfo_,
	_JavacProcessingEnvironment$ComputeAnnotationSet_MethodInfo_,
	"Ljavax/lang/model/util/ElementScanner14<Ljava/util/Set<Ljavax/lang/model/element/TypeElement;>;Ljava/util/Set<Ljavax/lang/model/element/TypeElement;>;>;",
	nullptr,
	_JavacProcessingEnvironment$ComputeAnnotationSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.processing.JavacProcessingEnvironment"
};

$Object* allocate$JavacProcessingEnvironment$ComputeAnnotationSet($Class* clazz) {
	return $of($alloc(JavacProcessingEnvironment$ComputeAnnotationSet));
}

void JavacProcessingEnvironment$ComputeAnnotationSet::init$($Elements* elements) {
	$ElementScanner14::init$();
	$set(this, elements, elements);
}

$Set* JavacProcessingEnvironment$ComputeAnnotationSet::visitPackage($PackageElement* e, $Set* p) {
	return p;
}

$Set* JavacProcessingEnvironment$ComputeAnnotationSet::visitType($TypeElement* e, $Set* p) {
	scan($(static_cast<$Iterable*>($nc(e)->getTypeParameters())), $of(p));
	return $cast($Set, $ElementScanner14::visitType(e, p));
}

$Set* JavacProcessingEnvironment$ComputeAnnotationSet::visitExecutable($ExecutableElement* e, $Set* p) {
	scan($(static_cast<$Iterable*>($nc(e)->getTypeParameters())), $of(p));
	return $cast($Set, $ElementScanner14::visitExecutable(e, p));
}

void JavacProcessingEnvironment$ComputeAnnotationSet::addAnnotations($Element* e, $Set* p) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($nc(this->elements)->getAllAnnotationMirrors(e)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($AnnotationMirror, annotationMirror, $cast($AnnotationMirror, i$->next()));
			{
				$var($Element, e2, $nc($($nc(annotationMirror)->getAnnotationType()))->asElement());
				$nc(p)->add($cast($TypeElement, e2));
			}
		}
	}
}

$Set* JavacProcessingEnvironment$ComputeAnnotationSet::scan($Element* e, $Set* p) {
	addAnnotations(e, p);
	return $cast($Set, $ElementScanner14::scan(e, $of(p)));
}

$Object* JavacProcessingEnvironment$ComputeAnnotationSet::visitExecutable($ExecutableElement* e, Object$* p) {
	return $of(this->visitExecutable(e, $cast($Set, p)));
}

$Object* JavacProcessingEnvironment$ComputeAnnotationSet::visitType($TypeElement* e, Object$* p) {
	return $of(this->visitType(e, $cast($Set, p)));
}

$Object* JavacProcessingEnvironment$ComputeAnnotationSet::visitPackage($PackageElement* e, Object$* p) {
	return $of(this->visitPackage(e, $cast($Set, p)));
}

$Object* JavacProcessingEnvironment$ComputeAnnotationSet::scan($Element* e, Object$* p) {
	return $of(this->scan(e, $cast($Set, p)));
}

JavacProcessingEnvironment$ComputeAnnotationSet::JavacProcessingEnvironment$ComputeAnnotationSet() {
}

$Class* JavacProcessingEnvironment$ComputeAnnotationSet::load$($String* name, bool initialize) {
	$loadClass(JavacProcessingEnvironment$ComputeAnnotationSet, name, initialize, &_JavacProcessingEnvironment$ComputeAnnotationSet_ClassInfo_, allocate$JavacProcessingEnvironment$ComputeAnnotationSet);
	return class$;
}

$Class* JavacProcessingEnvironment$ComputeAnnotationSet::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com