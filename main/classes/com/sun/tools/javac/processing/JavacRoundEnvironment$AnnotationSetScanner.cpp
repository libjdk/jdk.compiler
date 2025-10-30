#include <com/sun/tools/javac/processing/JavacRoundEnvironment$AnnotationSetScanner.h>

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
#include <javax/lang/model/element/TypeElement.h>
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
using $TypeElement = ::javax::lang::model::element::TypeElement;
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

$FieldInfo _JavacRoundEnvironment$AnnotationSetScanner_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/processing/JavacRoundEnvironment;", nullptr, $FINAL | $SYNTHETIC, $field(JavacRoundEnvironment$AnnotationSetScanner, this$0)},
	{"annotatedElements", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/lang/model/element/Element;>;", $PRIVATE, $field(JavacRoundEnvironment$AnnotationSetScanner, annotatedElements)},
	{}
};

$MethodInfo _JavacRoundEnvironment$AnnotationSetScanner_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/processing/JavacRoundEnvironment;Ljava/util/Set;)V", "(Ljava/util/Set<Ljavax/lang/model/element/Element;>;)V", 0, $method(static_cast<void(JavacRoundEnvironment$AnnotationSetScanner::*)($JavacRoundEnvironment*,$Set*)>(&JavacRoundEnvironment$AnnotationSetScanner::init$))},
	{"scan", "(Ljavax/lang/model/element/Element;Ljavax/lang/model/element/TypeElement;)Ljava/util/Set;", "(Ljavax/lang/model/element/Element;Ljavax/lang/model/element/TypeElement;)Ljava/util/Set<Ljavax/lang/model/element/Element;>;", $PUBLIC},
	{"scan", "(Ljavax/lang/model/element/Element;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitModule", "(Ljavax/lang/model/element/ModuleElement;Ljavax/lang/model/element/TypeElement;)Ljava/util/Set;", "(Ljavax/lang/model/element/ModuleElement;Ljavax/lang/model/element/TypeElement;)Ljava/util/Set<Ljavax/lang/model/element/Element;>;", $PUBLIC},
	{"visitModule", "(Ljavax/lang/model/element/ModuleElement;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitPackage", "(Ljavax/lang/model/element/PackageElement;Ljavax/lang/model/element/TypeElement;)Ljava/util/Set;", "(Ljavax/lang/model/element/PackageElement;Ljavax/lang/model/element/TypeElement;)Ljava/util/Set<Ljavax/lang/model/element/Element;>;", $PUBLIC},
	{"visitPackage", "(Ljavax/lang/model/element/PackageElement;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _JavacRoundEnvironment$AnnotationSetScanner_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.processing.JavacRoundEnvironment$AnnotationSetScanner", "com.sun.tools.javac.processing.JavacRoundEnvironment", "AnnotationSetScanner", $PRIVATE},
	{}
};

$ClassInfo _JavacRoundEnvironment$AnnotationSetScanner_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.processing.JavacRoundEnvironment$AnnotationSetScanner",
	"javax.lang.model.util.ElementScanner14",
	nullptr,
	_JavacRoundEnvironment$AnnotationSetScanner_FieldInfo_,
	_JavacRoundEnvironment$AnnotationSetScanner_MethodInfo_,
	"Ljavax/lang/model/util/ElementScanner14<Ljava/util/Set<Ljavax/lang/model/element/Element;>;Ljavax/lang/model/element/TypeElement;>;",
	nullptr,
	_JavacRoundEnvironment$AnnotationSetScanner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.processing.JavacRoundEnvironment"
};

$Object* allocate$JavacRoundEnvironment$AnnotationSetScanner($Class* clazz) {
	return $of($alloc(JavacRoundEnvironment$AnnotationSetScanner));
}

void JavacRoundEnvironment$AnnotationSetScanner::init$($JavacRoundEnvironment* this$0, $Set* defaultSet) {
	$set(this, this$0, this$0);
	$ElementScanner14::init$(defaultSet);
	$set(this, annotatedElements, $new($LinkedHashSet));
}

$Set* JavacRoundEnvironment$AnnotationSetScanner::scan($Element* e, $TypeElement* annotation) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($nc(this->this$0->eltUtils)->getAllAnnotationMirrors(e)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($AnnotationMirror, annotMirror, $cast($AnnotationMirror, i$->next()));
			{
				if ($nc($of(annotation))->equals($(this->this$0->mirrorAsElement(annotMirror)))) {
					$nc(this->annotatedElements)->add(e);
					break;
				}
			}
		}
	}
	$nc(e)->accept(this, annotation);
	return this->annotatedElements;
}

$Set* JavacRoundEnvironment$AnnotationSetScanner::visitModule($ModuleElement* e, $TypeElement* annotation) {
	return this->annotatedElements;
}

$Set* JavacRoundEnvironment$AnnotationSetScanner::visitPackage($PackageElement* e, $TypeElement* annotation) {
	return this->annotatedElements;
}

$Object* JavacRoundEnvironment$AnnotationSetScanner::visitModule($ModuleElement* e, Object$* annotation) {
	return $of(this->visitModule(e, $cast($TypeElement, annotation)));
}

$Object* JavacRoundEnvironment$AnnotationSetScanner::visitPackage($PackageElement* e, Object$* annotation) {
	return $of(this->visitPackage(e, $cast($TypeElement, annotation)));
}

$Object* JavacRoundEnvironment$AnnotationSetScanner::scan($Element* e, Object$* annotation) {
	return $of(this->scan(e, $cast($TypeElement, annotation)));
}

JavacRoundEnvironment$AnnotationSetScanner::JavacRoundEnvironment$AnnotationSetScanner() {
}

$Class* JavacRoundEnvironment$AnnotationSetScanner::load$($String* name, bool initialize) {
	$loadClass(JavacRoundEnvironment$AnnotationSetScanner, name, initialize, &_JavacRoundEnvironment$AnnotationSetScanner_ClassInfo_, allocate$JavacRoundEnvironment$AnnotationSetScanner);
	return class$;
}

$Class* JavacRoundEnvironment$AnnotationSetScanner::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com