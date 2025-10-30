#include <com/sun/tools/javac/processing/JavacRoundEnvironment$AnnotationSetMultiScanner.h>

#include <com/sun/tools/javac/processing/JavacRoundEnvironment.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <javax/lang/model/element/AnnotationMirror.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ElementVisitor.h>
#include <javax/lang/model/element/ModuleElement.h>
#include <javax/lang/model/element/PackageElement.h>
#include <javax/lang/model/util/AbstractElementVisitor6.h>
#include <javax/lang/model/util/ElementScanner14.h>
#include <javax/lang/model/util/ElementScanner6.h>
#include <javax/lang/model/util/ElementScanner7.h>
#include <javax/lang/model/util/ElementScanner8.h>
#include <javax/lang/model/util/ElementScanner9.h>
#include <javax/lang/model/util/Elements.h>
#include <jcpp.h>

using $JavacRoundEnvironment = ::com::sun::tools::javac::processing::JavacRoundEnvironment;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $AnnotationMirror = ::javax::lang::model::element::AnnotationMirror;
using $Element = ::javax::lang::model::element::Element;
using $ElementVisitor = ::javax::lang::model::element::ElementVisitor;
using $ModuleElement = ::javax::lang::model::element::ModuleElement;
using $PackageElement = ::javax::lang::model::element::PackageElement;
using $AbstractElementVisitor6 = ::javax::lang::model::util::AbstractElementVisitor6;
using $ElementScanner14 = ::javax::lang::model::util::ElementScanner14;
using $ElementScanner6 = ::javax::lang::model::util::ElementScanner6;
using $ElementScanner7 = ::javax::lang::model::util::ElementScanner7;
using $ElementScanner8 = ::javax::lang::model::util::ElementScanner8;
using $ElementScanner9 = ::javax::lang::model::util::ElementScanner9;
using $Elements = ::javax::lang::model::util::Elements;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

$FieldInfo _JavacRoundEnvironment$AnnotationSetMultiScanner_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/processing/JavacRoundEnvironment;", nullptr, $FINAL | $SYNTHETIC, $field(JavacRoundEnvironment$AnnotationSetMultiScanner, this$0)},
	{"annotatedElements", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/lang/model/element/Element;>;", $PRIVATE, $field(JavacRoundEnvironment$AnnotationSetMultiScanner, annotatedElements)},
	{}
};

$MethodInfo _JavacRoundEnvironment$AnnotationSetMultiScanner_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/processing/JavacRoundEnvironment;Ljava/util/Set;)V", "(Ljava/util/Set<Ljavax/lang/model/element/Element;>;)V", 0, $method(static_cast<void(JavacRoundEnvironment$AnnotationSetMultiScanner::*)($JavacRoundEnvironment*,$Set*)>(&JavacRoundEnvironment$AnnotationSetMultiScanner::init$))},
	{"scan", "(Ljavax/lang/model/element/Element;Ljava/util/Set;)Ljava/util/Set;", "(Ljavax/lang/model/element/Element;Ljava/util/Set<Ljavax/lang/model/element/TypeElement;>;)Ljava/util/Set<Ljavax/lang/model/element/Element;>;", $PUBLIC},
	{"scan", "(Ljavax/lang/model/element/Element;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitModule", "(Ljavax/lang/model/element/ModuleElement;Ljava/util/Set;)Ljava/util/Set;", "(Ljavax/lang/model/element/ModuleElement;Ljava/util/Set<Ljavax/lang/model/element/TypeElement;>;)Ljava/util/Set<Ljavax/lang/model/element/Element;>;", $PUBLIC},
	{"visitModule", "(Ljavax/lang/model/element/ModuleElement;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitPackage", "(Ljavax/lang/model/element/PackageElement;Ljava/util/Set;)Ljava/util/Set;", "(Ljavax/lang/model/element/PackageElement;Ljava/util/Set<Ljavax/lang/model/element/TypeElement;>;)Ljava/util/Set<Ljavax/lang/model/element/Element;>;", $PUBLIC},
	{"visitPackage", "(Ljavax/lang/model/element/PackageElement;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _JavacRoundEnvironment$AnnotationSetMultiScanner_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.processing.JavacRoundEnvironment$AnnotationSetMultiScanner", "com.sun.tools.javac.processing.JavacRoundEnvironment", "AnnotationSetMultiScanner", $PRIVATE},
	{}
};

$ClassInfo _JavacRoundEnvironment$AnnotationSetMultiScanner_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.processing.JavacRoundEnvironment$AnnotationSetMultiScanner",
	"javax.lang.model.util.ElementScanner14",
	nullptr,
	_JavacRoundEnvironment$AnnotationSetMultiScanner_FieldInfo_,
	_JavacRoundEnvironment$AnnotationSetMultiScanner_MethodInfo_,
	"Ljavax/lang/model/util/ElementScanner14<Ljava/util/Set<Ljavax/lang/model/element/Element;>;Ljava/util/Set<Ljavax/lang/model/element/TypeElement;>;>;",
	nullptr,
	_JavacRoundEnvironment$AnnotationSetMultiScanner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.processing.JavacRoundEnvironment"
};

$Object* allocate$JavacRoundEnvironment$AnnotationSetMultiScanner($Class* clazz) {
	return $of($alloc(JavacRoundEnvironment$AnnotationSetMultiScanner));
}

void JavacRoundEnvironment$AnnotationSetMultiScanner::init$($JavacRoundEnvironment* this$0, $Set* defaultSet) {
	$set(this, this$0, this$0);
	$ElementScanner14::init$(defaultSet);
	$set(this, annotatedElements, $new($LinkedHashSet));
}

$Set* JavacRoundEnvironment$AnnotationSetMultiScanner::scan($Element* e, $Set* annotations) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($nc(this->this$0->eltUtils)->getAllAnnotationMirrors(e)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($AnnotationMirror, annotMirror, $cast($AnnotationMirror, i$->next()));
			{
				if ($nc(annotations)->contains($(this->this$0->mirrorAsElement(annotMirror)))) {
					$nc(this->annotatedElements)->add(e);
					break;
				}
			}
		}
	}
	$nc(e)->accept(this, annotations);
	return this->annotatedElements;
}

$Set* JavacRoundEnvironment$AnnotationSetMultiScanner::visitModule($ModuleElement* e, $Set* annotations) {
	return this->annotatedElements;
}

$Set* JavacRoundEnvironment$AnnotationSetMultiScanner::visitPackage($PackageElement* e, $Set* annotations) {
	return this->annotatedElements;
}

$Object* JavacRoundEnvironment$AnnotationSetMultiScanner::visitModule($ModuleElement* e, Object$* annotations) {
	return $of(this->visitModule(e, $cast($Set, annotations)));
}

$Object* JavacRoundEnvironment$AnnotationSetMultiScanner::visitPackage($PackageElement* e, Object$* annotations) {
	return $of(this->visitPackage(e, $cast($Set, annotations)));
}

$Object* JavacRoundEnvironment$AnnotationSetMultiScanner::scan($Element* e, Object$* annotations) {
	return $of(this->scan(e, $cast($Set, annotations)));
}

JavacRoundEnvironment$AnnotationSetMultiScanner::JavacRoundEnvironment$AnnotationSetMultiScanner() {
}

$Class* JavacRoundEnvironment$AnnotationSetMultiScanner::load$($String* name, bool initialize) {
	$loadClass(JavacRoundEnvironment$AnnotationSetMultiScanner, name, initialize, &_JavacRoundEnvironment$AnnotationSetMultiScanner_ClassInfo_, allocate$JavacRoundEnvironment$AnnotationSetMultiScanner);
	return class$;
}

$Class* JavacRoundEnvironment$AnnotationSetMultiScanner::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com