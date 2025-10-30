#include <com/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor.h>

#include <com/sun/tools/javac/processing/PrintingProcessor$1.h>
#include <com/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor$1.h>
#include <com/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor$2.h>
#include <com/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor$PrintDirective.h>
#include <com/sun/tools/javac/processing/PrintingProcessor.h>
#include <com/sun/tools/javac/util/StringUtils.h>
#include <java/io/PrintWriter.h>
#include <java/io/Serializable.h>
#include <java/io/Writer.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/StringTokenizer.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <javax/lang/model/AnnotatedConstruct.h>
#include <javax/lang/model/element/AnnotationMirror.h>
#include <javax/lang/model/element/AnnotationValue.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ElementKind.h>
#include <javax/lang/model/element/ExecutableElement.h>
#include <javax/lang/model/element/Modifier.h>
#include <javax/lang/model/element/ModuleElement$Directive.h>
#include <javax/lang/model/element/ModuleElement.h>
#include <javax/lang/model/element/Name.h>
#include <javax/lang/model/element/NestingKind.h>
#include <javax/lang/model/element/PackageElement.h>
#include <javax/lang/model/element/Parameterizable.h>
#include <javax/lang/model/element/QualifiedNameable.h>
#include <javax/lang/model/element/RecordComponentElement.h>
#include <javax/lang/model/element/TypeElement.h>
#include <javax/lang/model/element/TypeParameterElement.h>
#include <javax/lang/model/element/VariableElement.h>
#include <javax/lang/model/type/ArrayType.h>
#include <javax/lang/model/type/DeclaredType.h>
#include <javax/lang/model/type/TypeKind.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/lang/model/util/AbstractAnnotationValueVisitor6.h>
#include <javax/lang/model/util/AbstractElementVisitor6.h>
#include <javax/lang/model/util/ElementFilter.h>
#include <javax/lang/model/util/Elements$Origin.h>
#include <javax/lang/model/util/Elements.h>
#include <javax/lang/model/util/SimpleElementVisitor14.h>
#include <jcpp.h>

#undef ABSTRACT
#undef ANNOTATION_TYPE
#undef ANONYMOUS
#undef ARRAY
#undef CLASS
#undef CONSTRUCTOR
#undef ENUM
#undef ENUM_CONSTANT
#undef EXPLICIT
#undef FINAL
#undef INSTANCE_INIT
#undef MANDATED
#undef NONE
#undef PARAMETER
#undef PUBLIC
#undef RECORD
#undef RECORD_COMPONENT
#undef SEALED
#undef STATIC
#undef STATIC_INIT
#undef TOP_LEVEL

using $PrintingProcessor = ::com::sun::tools::javac::processing::PrintingProcessor;
using $PrintingProcessor$1 = ::com::sun::tools::javac::processing::PrintingProcessor$1;
using $PrintingProcessor$PrintingElementVisitor$1 = ::com::sun::tools::javac::processing::PrintingProcessor$PrintingElementVisitor$1;
using $PrintingProcessor$PrintingElementVisitor$2 = ::com::sun::tools::javac::processing::PrintingProcessor$PrintingElementVisitor$2;
using $PrintingProcessor$PrintingElementVisitor$PrintDirective = ::com::sun::tools::javac::processing::PrintingProcessor$PrintingElementVisitor$PrintDirective;
using $StringUtils = ::com::sun::tools::javac::util::StringUtils;
using $PrintWriter = ::java::io::PrintWriter;
using $Serializable = ::java::io::Serializable;
using $Writer = ::java::io::Writer;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $StringTokenizer = ::java::util::StringTokenizer;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;
using $AnnotatedConstruct = ::javax::lang::model::AnnotatedConstruct;
using $AnnotationMirror = ::javax::lang::model::element::AnnotationMirror;
using $AnnotationValue = ::javax::lang::model::element::AnnotationValue;
using $Element = ::javax::lang::model::element::Element;
using $ElementKind = ::javax::lang::model::element::ElementKind;
using $ExecutableElement = ::javax::lang::model::element::ExecutableElement;
using $Modifier = ::javax::lang::model::element::Modifier;
using $ModuleElement = ::javax::lang::model::element::ModuleElement;
using $ModuleElement$Directive = ::javax::lang::model::element::ModuleElement$Directive;
using $ModuleElement$DirectiveVisitor = ::javax::lang::model::element::ModuleElement$DirectiveVisitor;
using $Name = ::javax::lang::model::element::Name;
using $NestingKind = ::javax::lang::model::element::NestingKind;
using $PackageElement = ::javax::lang::model::element::PackageElement;
using $Parameterizable = ::javax::lang::model::element::Parameterizable;
using $QualifiedNameable = ::javax::lang::model::element::QualifiedNameable;
using $RecordComponentElement = ::javax::lang::model::element::RecordComponentElement;
using $TypeElement = ::javax::lang::model::element::TypeElement;
using $TypeParameterElement = ::javax::lang::model::element::TypeParameterElement;
using $VariableElement = ::javax::lang::model::element::VariableElement;
using $ArrayType = ::javax::lang::model::type::ArrayType;
using $DeclaredType = ::javax::lang::model::type::DeclaredType;
using $TypeKind = ::javax::lang::model::type::TypeKind;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $AbstractAnnotationValueVisitor6 = ::javax::lang::model::util::AbstractAnnotationValueVisitor6;
using $AbstractElementVisitor6 = ::javax::lang::model::util::AbstractElementVisitor6;
using $ElementFilter = ::javax::lang::model::util::ElementFilter;
using $Elements = ::javax::lang::model::util::Elements;
using $Elements$Origin = ::javax::lang::model::util::Elements$Origin;
using $SimpleElementVisitor14 = ::javax::lang::model::util::SimpleElementVisitor14;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

class PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$0 : public $Function {
	$class(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$0, $NO_CLASS_INIT, $Function)
public:
	void init$(PrintingProcessor$PrintingElementVisitor* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* recordDes) override {
		 return $of($nc(inst$)->lambda$visitType$0($cast($RecordComponentElement, recordDes)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$0>());
	}
	PrintingProcessor$PrintingElementVisitor* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$0, inst$)},
	{}
};
$MethodInfo PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor;)V", nullptr, $PUBLIC, $method(static_cast<void(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$0::*)(PrintingProcessor$PrintingElementVisitor*)>(&PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$0",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$0::load$($String* name, bool initialize) {
	$loadClass(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$0::class$ = nullptr;

class PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$1$1 : public $Predicate {
	$class(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$1$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$(PrintingProcessor$PrintingElementVisitor* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* elt) override {
		 return $nc(inst$)->lambda$visitType$1($cast($Element, elt));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$1$1>());
	}
	PrintingProcessor$PrintingElementVisitor* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$1$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$1$1, inst$)},
	{}
};
$MethodInfo PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$1$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor;)V", nullptr, $PUBLIC, $method(static_cast<void(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$1$1::*)(PrintingProcessor$PrintingElementVisitor*)>(&PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$1$1::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$1$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$1$1::load$($String* name, bool initialize) {
	$loadClass(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$1$1::class$ = nullptr;

class PrintingProcessor$PrintingElementVisitor$$Lambda$toString$2 : public $Function {
	$class(PrintingProcessor$PrintingElementVisitor$$Lambda$toString$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($Modifier, inst$)->toString());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrintingProcessor$PrintingElementVisitor$$Lambda$toString$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PrintingProcessor$PrintingElementVisitor$$Lambda$toString$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrintingProcessor$PrintingElementVisitor$$Lambda$toString$2::*)()>(&PrintingProcessor$PrintingElementVisitor$$Lambda$toString$2::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrintingProcessor$PrintingElementVisitor$$Lambda$toString$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$$Lambda$toString$2",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* PrintingProcessor$PrintingElementVisitor$$Lambda$toString$2::load$($String* name, bool initialize) {
	$loadClass(PrintingProcessor$PrintingElementVisitor$$Lambda$toString$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PrintingProcessor$PrintingElementVisitor$$Lambda$toString$2::class$ = nullptr;

class PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printFormalTypeParameters$2$3 : public $Function {
	$class(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printFormalTypeParameters$2$3, $NO_CLASS_INIT, $Function)
public:
	void init$(PrintingProcessor$PrintingElementVisitor* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* tpe) override {
		 return $of($nc(inst$)->lambda$printFormalTypeParameters$2($cast($TypeParameterElement, tpe)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printFormalTypeParameters$2$3>());
	}
	PrintingProcessor$PrintingElementVisitor* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printFormalTypeParameters$2$3::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printFormalTypeParameters$2$3, inst$)},
	{}
};
$MethodInfo PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printFormalTypeParameters$2$3::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor;)V", nullptr, $PUBLIC, $method(static_cast<void(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printFormalTypeParameters$2$3::*)(PrintingProcessor$PrintingElementVisitor*)>(&PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printFormalTypeParameters$2$3::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printFormalTypeParameters$2$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printFormalTypeParameters$2$3",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printFormalTypeParameters$2$3::load$($String* name, bool initialize) {
	$loadClass(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printFormalTypeParameters$2$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printFormalTypeParameters$2$3::class$ = nullptr;

class PrintingProcessor$PrintingElementVisitor$$Lambda$toString$4 : public $Function {
	$class(PrintingProcessor$PrintingElementVisitor$$Lambda$toString$4, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($of($nc(inst$))->toString());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrintingProcessor$PrintingElementVisitor$$Lambda$toString$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PrintingProcessor$PrintingElementVisitor$$Lambda$toString$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrintingProcessor$PrintingElementVisitor$$Lambda$toString$4::*)()>(&PrintingProcessor$PrintingElementVisitor$$Lambda$toString$4::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrintingProcessor$PrintingElementVisitor$$Lambda$toString$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$$Lambda$toString$4",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* PrintingProcessor$PrintingElementVisitor$$Lambda$toString$4::load$($String* name, bool initialize) {
	$loadClass(PrintingProcessor$PrintingElementVisitor$$Lambda$toString$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PrintingProcessor$PrintingElementVisitor$$Lambda$toString$4::class$ = nullptr;

class PrintingProcessor$PrintingElementVisitor$$Lambda$toString$5 : public $Function {
	$class(PrintingProcessor$PrintingElementVisitor$$Lambda$toString$5, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($TypeMirror, inst$)->toString());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrintingProcessor$PrintingElementVisitor$$Lambda$toString$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PrintingProcessor$PrintingElementVisitor$$Lambda$toString$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrintingProcessor$PrintingElementVisitor$$Lambda$toString$5::*)()>(&PrintingProcessor$PrintingElementVisitor$$Lambda$toString$5::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrintingProcessor$PrintingElementVisitor$$Lambda$toString$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$$Lambda$toString$5",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* PrintingProcessor$PrintingElementVisitor$$Lambda$toString$5::load$($String* name, bool initialize) {
	$loadClass(PrintingProcessor$PrintingElementVisitor$$Lambda$toString$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PrintingProcessor$PrintingElementVisitor$$Lambda$toString$5::class$ = nullptr;

class PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printPermittedSubclasses$3$6 : public $Function {
	$class(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printPermittedSubclasses$3$6, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* subtype) override {
		 return $of(PrintingProcessor$PrintingElementVisitor::lambda$printPermittedSubclasses$3($cast($TypeMirror, subtype)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printPermittedSubclasses$3$6>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printPermittedSubclasses$3$6::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printPermittedSubclasses$3$6::*)()>(&PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printPermittedSubclasses$3$6::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printPermittedSubclasses$3$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printPermittedSubclasses$3$6",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printPermittedSubclasses$3$6::load$($String* name, bool initialize) {
	$loadClass(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printPermittedSubclasses$3$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printPermittedSubclasses$3$6::class$ = nullptr;

$FieldInfo _PrintingProcessor$PrintingElementVisitor_FieldInfo_[] = {
	{"indentation", "I", nullptr, 0, $field(PrintingProcessor$PrintingElementVisitor, indentation)},
	{"writer", "Ljava/io/PrintWriter;", nullptr, $FINAL, $field(PrintingProcessor$PrintingElementVisitor, writer)},
	{"elementUtils", "Ljavax/lang/model/util/Elements;", nullptr, $FINAL, $field(PrintingProcessor$PrintingElementVisitor, elementUtils)},
	{"spaces", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrintingProcessor$PrintingElementVisitor, spaces)},
	{}
};

$MethodInfo _PrintingProcessor$PrintingElementVisitor_MethodInfo_[] = {
	{"<init>", "(Ljava/io/Writer;Ljavax/lang/model/util/Elements;)V", nullptr, $PUBLIC, $method(static_cast<void(PrintingProcessor$PrintingElementVisitor::*)($Writer*,$Elements*)>(&PrintingProcessor$PrintingElementVisitor::init$))},
	{"annotationsToString", "(Ljavax/lang/model/element/Element;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(PrintingProcessor$PrintingElementVisitor::*)($Element*)>(&PrintingProcessor$PrintingElementVisitor::annotationsToString))},
	{"defaultAction", "(Ljavax/lang/model/element/Element;Ljava/lang/Boolean;)Lcom/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor;", nullptr, $PROTECTED},
	{"defaultAction", "(Ljavax/lang/model/element/Element;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC},
	{"flush", "()V", nullptr, $PUBLIC},
	{"indent", "()V", nullptr, $PRIVATE, $method(static_cast<void(PrintingProcessor$PrintingElementVisitor::*)()>(&PrintingProcessor$PrintingElementVisitor::indent))},
	{"lambda$printFormalTypeParameters$2", "(Ljavax/lang/model/element/TypeParameterElement;)Ljava/lang/String;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$String*(PrintingProcessor$PrintingElementVisitor::*)($TypeParameterElement*)>(&PrintingProcessor$PrintingElementVisitor::lambda$printFormalTypeParameters$2))},
	{"lambda$printPermittedSubclasses$3", "(Ljavax/lang/model/type/TypeMirror;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($TypeMirror*)>(&PrintingProcessor$PrintingElementVisitor::lambda$printPermittedSubclasses$3))},
	{"lambda$visitType$0", "(Ljavax/lang/model/element/RecordComponentElement;)Ljava/lang/String;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$String*(PrintingProcessor$PrintingElementVisitor::*)($RecordComponentElement*)>(&PrintingProcessor$PrintingElementVisitor::lambda$visitType$0))},
	{"lambda$visitType$1", "(Ljavax/lang/model/element/Element;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(PrintingProcessor$PrintingElementVisitor::*)($Element*)>(&PrintingProcessor$PrintingElementVisitor::lambda$visitType$1))},
	{"printAnnotations", "(Ljavax/lang/model/element/Element;)V", nullptr, $PRIVATE, $method(static_cast<void(PrintingProcessor$PrintingElementVisitor::*)($Element*)>(&PrintingProcessor$PrintingElementVisitor::printAnnotations))},
	{"printDirective", "(Ljavax/lang/model/element/ModuleElement$Directive;)V", nullptr, $PRIVATE, $method(static_cast<void(PrintingProcessor$PrintingElementVisitor::*)($ModuleElement$Directive*)>(&PrintingProcessor$PrintingElementVisitor::printDirective))},
	{"printDocComment", "(Ljavax/lang/model/element/Element;)V", nullptr, $PRIVATE, $method(static_cast<void(PrintingProcessor$PrintingElementVisitor::*)($Element*)>(&PrintingProcessor$PrintingElementVisitor::printDocComment))},
	{"printFormalTypeParameters", "(Ljavax/lang/model/element/Parameterizable;Z)V", nullptr, $PRIVATE, $method(static_cast<void(PrintingProcessor$PrintingElementVisitor::*)($Parameterizable*,bool)>(&PrintingProcessor$PrintingElementVisitor::printFormalTypeParameters))},
	{"printInterfaces", "(Ljavax/lang/model/element/TypeElement;)V", nullptr, $PRIVATE, $method(static_cast<void(PrintingProcessor$PrintingElementVisitor::*)($TypeElement*)>(&PrintingProcessor$PrintingElementVisitor::printInterfaces))},
	{"printModifiers", "(Ljavax/lang/model/element/Element;)V", nullptr, $PRIVATE, $method(static_cast<void(PrintingProcessor$PrintingElementVisitor::*)($Element*)>(&PrintingProcessor$PrintingElementVisitor::printModifiers))},
	{"printParameters", "(Ljavax/lang/model/element/ExecutableElement;)V", nullptr, $PRIVATE, $method(static_cast<void(PrintingProcessor$PrintingElementVisitor::*)($ExecutableElement*)>(&PrintingProcessor$PrintingElementVisitor::printParameters))},
	{"printPermittedSubclasses", "(Ljavax/lang/model/element/TypeElement;)V", nullptr, $PRIVATE, $method(static_cast<void(PrintingProcessor$PrintingElementVisitor::*)($TypeElement*)>(&PrintingProcessor$PrintingElementVisitor::printPermittedSubclasses))},
	{"printThrows", "(Ljavax/lang/model/element/ExecutableElement;)V", nullptr, $PRIVATE, $method(static_cast<void(PrintingProcessor$PrintingElementVisitor::*)($ExecutableElement*)>(&PrintingProcessor$PrintingElementVisitor::printThrows))},
	{"printedContainerAnnotation", "(Ljavax/lang/model/element/Element;Ljavax/lang/model/element/AnnotationMirror;)Z", nullptr, $PRIVATE, $method(static_cast<bool(PrintingProcessor$PrintingElementVisitor::*)($Element*,$AnnotationMirror*)>(&PrintingProcessor$PrintingElementVisitor::printedContainerAnnotation))},
	{"visitExecutable", "(Ljavax/lang/model/element/ExecutableElement;Ljava/lang/Boolean;)Lcom/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor;", nullptr, $PUBLIC},
	{"visitExecutable", "(Ljavax/lang/model/element/ExecutableElement;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitModule", "(Ljavax/lang/model/element/ModuleElement;Ljava/lang/Boolean;)Lcom/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor;", nullptr, $PUBLIC},
	{"visitModule", "(Ljavax/lang/model/element/ModuleElement;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitPackage", "(Ljavax/lang/model/element/PackageElement;Ljava/lang/Boolean;)Lcom/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor;", nullptr, $PUBLIC},
	{"visitPackage", "(Ljavax/lang/model/element/PackageElement;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitRecordComponent", "(Ljavax/lang/model/element/RecordComponentElement;Ljava/lang/Boolean;)Lcom/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor;", nullptr, $PUBLIC},
	{"visitRecordComponent", "(Ljavax/lang/model/element/RecordComponentElement;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitType", "(Ljavax/lang/model/element/TypeElement;Ljava/lang/Boolean;)Lcom/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor;", nullptr, $PUBLIC},
	{"visitType", "(Ljavax/lang/model/element/TypeElement;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitTypeParameter", "(Ljavax/lang/model/element/TypeParameterElement;Ljava/lang/Boolean;)Lcom/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor;", nullptr, $PUBLIC},
	{"visitTypeParameter", "(Ljavax/lang/model/element/TypeParameterElement;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitVariable", "(Ljavax/lang/model/element/VariableElement;Ljava/lang/Boolean;)Lcom/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor;", nullptr, $PUBLIC},
	{"visitVariable", "(Ljavax/lang/model/element/VariableElement;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _PrintingProcessor$PrintingElementVisitor_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor", "com.sun.tools.javac.processing.PrintingProcessor", "PrintingElementVisitor", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$PrintDirective", "com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor", "PrintDirective", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PrintingProcessor$PrintingElementVisitor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor",
	"javax.lang.model.util.SimpleElementVisitor14",
	nullptr,
	_PrintingProcessor$PrintingElementVisitor_FieldInfo_,
	_PrintingProcessor$PrintingElementVisitor_MethodInfo_,
	"Ljavax/lang/model/util/SimpleElementVisitor14<Lcom/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor;Ljava/lang/Boolean;>;",
	nullptr,
	_PrintingProcessor$PrintingElementVisitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.processing.PrintingProcessor"
};

$Object* allocate$PrintingProcessor$PrintingElementVisitor($Class* clazz) {
	return $of($alloc(PrintingProcessor$PrintingElementVisitor));
}

$StringArray* PrintingProcessor$PrintingElementVisitor::spaces = nullptr;

void PrintingProcessor$PrintingElementVisitor::init$($Writer* w, $Elements* elementUtils) {
	$SimpleElementVisitor14::init$();
	$set(this, writer, $new($PrintWriter, w));
	$set(this, elementUtils, elementUtils);
	this->indentation = 0;
}

PrintingProcessor$PrintingElementVisitor* PrintingProcessor$PrintingElementVisitor::defaultAction($Element* e, $Boolean* newLine) {
	if (newLine != nullptr && newLine->booleanValue()) {
		$nc(this->writer)->println();
	}
	printDocComment(e);
	printModifiers(e);
	return this;
}

PrintingProcessor$PrintingElementVisitor* PrintingProcessor$PrintingElementVisitor::visitRecordComponent($RecordComponentElement* e, $Boolean* p) {
	return this;
}

PrintingProcessor$PrintingElementVisitor* PrintingProcessor$PrintingElementVisitor::visitExecutable($ExecutableElement* e, $Boolean* p) {
	$useLocalCurrentObjectStackCache();
	$ElementKind* kind = $nc(e)->getKind();
	$init($ElementKind);
	if (kind != $ElementKind::STATIC_INIT && kind != $ElementKind::INSTANCE_INIT) {
		$var($Element, enclosing, e->getEnclosingElement());
		$init($NestingKind);
		if (kind == $ElementKind::CONSTRUCTOR && enclosing != nullptr && $equals($NestingKind::ANONYMOUS, ($$new($PrintingProcessor$PrintingElementVisitor$1, this))->visit(enclosing))) {
			return this;
		}
		defaultAction(static_cast<$Element*>(e), $($Boolean::valueOf(true)));
		printFormalTypeParameters(e, true);
		$init($PrintingProcessor$1);
		switch ($nc($PrintingProcessor$1::$SwitchMap$javax$lang$model$element$ElementKind)->get($nc((kind))->ordinal())) {
		case 1:
			{
				$nc(this->writer)->print($($of($nc($(e->getEnclosingElement()))->getSimpleName())));
				break;
			}
		case 2:
			{
				$nc(this->writer)->print($($nc($(e->getReturnType()))->toString()));
				$nc(this->writer)->print(" "_s);
				$nc(this->writer)->print($($nc($of($(e->getSimpleName())))->toString()));
				break;
			}
		}
		$nc(this->writer)->print("("_s);
		printParameters(e);
		$nc(this->writer)->print(")"_s);
		$var($AnnotationValue, defaultValue, e->getDefaultValue());
		if (defaultValue != nullptr) {
			$nc(this->writer)->print($$str({" default "_s, defaultValue}));
		}
		printThrows(e);
		$nc(this->writer)->println(";"_s);
	}
	return this;
}

PrintingProcessor$PrintingElementVisitor* PrintingProcessor$PrintingElementVisitor::visitType($TypeElement* e, $Boolean* p) {
	$useLocalCurrentObjectStackCache();
	$ElementKind* kind = $nc(e)->getKind();
	$NestingKind* nestingKind = e->getNestingKind();
	$init($NestingKind);
	if ($NestingKind::ANONYMOUS == nestingKind) {
		$nc(this->writer)->print("new "_s);
		$var($List, interfaces, e->getInterfaces());
		if (!$nc(interfaces)->isEmpty()) {
			$nc(this->writer)->print($(interfaces->get(0)));
		} else {
			$nc(this->writer)->print($($of(e->getSuperclass())));
		}
		$nc(this->writer)->print("("_s);
		if ($nc(interfaces)->isEmpty()) {
			$var($List, constructors, $ElementFilter::constructorsIn($(static_cast<$Iterable*>(e->getEnclosedElements()))));
			if (!$nc(constructors)->isEmpty()) {
				printParameters($cast($ExecutableElement, $(constructors->get(0))));
			}
		}
		$nc(this->writer)->print(")"_s);
	} else {
		if (nestingKind == $NestingKind::TOP_LEVEL) {
			$var($PackageElement, pkg, $nc(this->elementUtils)->getPackageOf(static_cast<$Element*>(static_cast<$Parameterizable*>(e))));
			if (!$nc(pkg)->isUnnamed()) {
				$nc(this->writer)->print($$str({"package "_s, $(pkg->getQualifiedName()), ";\n"_s}));
			}
		}
		defaultAction(static_cast<$Element*>(static_cast<$Parameterizable*>(e)), $($Boolean::valueOf(true)));
		$init($PrintingProcessor$1);
		switch ($nc($PrintingProcessor$1::$SwitchMap$javax$lang$model$element$ElementKind)->get($nc((kind))->ordinal())) {
		case 3:
			{
				$nc(this->writer)->print("@interface"_s);
				break;
			}
		default:
			{
				$nc(this->writer)->print($($StringUtils::toLowerCase($(kind->toString()))));
			}
		}
		$nc(this->writer)->print(" "_s);
		$nc(this->writer)->print($($of(e->getSimpleName())));
		printFormalTypeParameters(e, false);
		if (kind == $ElementKind::RECORD) {
			$nc(this->writer)->print("("_s);
			$nc(this->writer)->print($cast($String, $($nc($($nc($($nc($(e->getRecordComponents()))->stream()))->map(static_cast<$Function*>($$new(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$0, this)))))->collect($($Collectors::joining(", "_s))))));
			$nc(this->writer)->print(")"_s);
		}
		if (kind == $ElementKind::CLASS) {
			$var($TypeMirror, supertype, e->getSuperclass());
			$init($TypeKind);
			if ($nc(supertype)->getKind() != $TypeKind::NONE) {
				$var($TypeElement, e2, $cast($TypeElement, $nc(($cast($DeclaredType, supertype)))->asElement()));
				if ($nc($($nc(e2)->getSuperclass()))->getKind() != $TypeKind::NONE) {
					$nc(this->writer)->print($$str({" extends "_s, supertype}));
				}
			}
		}
		printInterfaces(e);
		printPermittedSubclasses(e);
	}
	$nc(this->writer)->println(" {"_s);
	++this->indentation;
	$init($ElementKind);
	if (kind == $ElementKind::ENUM) {
		$var($List, enclosedElements, $new($ArrayList, $(static_cast<$Collection*>(e->getEnclosedElements()))));
		$var($List, enumConstants, $new($ArrayList));
		{
			$var($Iterator, i$, enclosedElements->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Element, element, $cast($Element, i$->next()));
				{
					if ($nc(element)->getKind() == $ElementKind::ENUM_CONSTANT) {
						enumConstants->add(element);
					}
				}
			}
		}
		if (!enumConstants->isEmpty()) {
			int32_t i = 0;
			for (i = 0; i < enumConstants->size() - 1; ++i) {
				$var($Element, var$0, $cast($Element, enumConstants->get(i)));
				this->visit(var$0, $($Boolean::valueOf(true)));
				$nc(this->writer)->print(","_s);
			}
			$var($Element, var$1, $cast($Element, enumConstants->get(i)));
			this->visit(var$1, $($Boolean::valueOf(true)));
			$nc(this->writer)->println(";\n"_s);
			enclosedElements->removeAll(enumConstants);
		}
		{
			$var($Iterator, i$, enclosedElements->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Element, element, $cast($Element, i$->next()));
				this->visit(element);
			}
		}
	} else {
		{
			$var($Iterator, i$, $nc((kind != $ElementKind::RECORD ? $(e->getEnclosedElements()) : $($nc($($nc($($nc($(e->getEnclosedElements()))->stream()))->filter(static_cast<$Predicate*>($$new(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$1$1, this)))))->toList())))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Element, element, $cast($Element, i$->next()));
				this->visit(element);
			}
		}
	}
	--this->indentation;
	indent();
	$nc(this->writer)->println("}"_s);
	return this;
}

PrintingProcessor$PrintingElementVisitor* PrintingProcessor$PrintingElementVisitor::visitVariable($VariableElement* e, $Boolean* newLine) {
	$useLocalCurrentObjectStackCache();
	$ElementKind* kind = $nc(e)->getKind();
	defaultAction(static_cast<$Element*>(e), newLine);
	$init($ElementKind);
	if (kind == $ElementKind::ENUM_CONSTANT) {
		$nc(this->writer)->print($($of(e->getSimpleName())));
	} else {
		$var($String, var$0, $$str({$($nc($(e->asType()))->toString()), " "_s}));
		$nc(this->writer)->print($$concat(var$0, $(e->getSimpleName())));
		$var($Object, constantValue, e->getConstantValue());
		if (constantValue != nullptr) {
			$nc(this->writer)->print(" = "_s);
			$nc(this->writer)->print($($nc(this->elementUtils)->getConstantExpression(constantValue)));
		}
		$nc(this->writer)->println(";"_s);
	}
	return this;
}

PrintingProcessor$PrintingElementVisitor* PrintingProcessor$PrintingElementVisitor::visitTypeParameter($TypeParameterElement* e, $Boolean* p) {
	$nc(this->writer)->print($($of($nc(e)->getSimpleName())));
	return this;
}

PrintingProcessor$PrintingElementVisitor* PrintingProcessor$PrintingElementVisitor::visitPackage($PackageElement* e, $Boolean* p) {
	$useLocalCurrentObjectStackCache();
	defaultAction(static_cast<$Element*>(e), $($Boolean::valueOf(false)));
	if (!$nc(e)->isUnnamed()) {
		$nc(this->writer)->println($$str({"package "_s, $(e->getQualifiedName()), ";"_s}));
	} else {
		$nc(this->writer)->println("// Unnamed package"_s);
	}
	return this;
}

PrintingProcessor$PrintingElementVisitor* PrintingProcessor$PrintingElementVisitor::visitModule($ModuleElement* e, $Boolean* p) {
	$useLocalCurrentObjectStackCache();
	defaultAction(static_cast<$Element*>(e), $($Boolean::valueOf(false)));
	if (!$nc(e)->isUnnamed()) {
		if (e->isOpen()) {
			$nc(this->writer)->print("open "_s);
		}
		$nc(this->writer)->println($$str({"module "_s, $(e->getQualifiedName()), " {"_s}));
		++this->indentation;
		{
			$var($Iterator, i$, $nc($(e->getDirectives()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($ModuleElement$Directive, directive, $cast($ModuleElement$Directive, i$->next()));
				{
					printDirective(directive);
				}
			}
		}
		--this->indentation;
		$nc(this->writer)->println("}"_s);
	} else {
		$nc(this->writer)->println("// Unnamed module"_s);
	}
	return this;
}

void PrintingProcessor$PrintingElementVisitor::printDirective($ModuleElement$Directive* directive) {
	indent();
	($$new($PrintingProcessor$PrintingElementVisitor$PrintDirective, this->writer))->visit(directive);
	$nc(this->writer)->println(";"_s);
}

void PrintingProcessor$PrintingElementVisitor::flush() {
	$nc(this->writer)->flush();
}

void PrintingProcessor$PrintingElementVisitor::printDocComment($Element* e) {
	$useLocalCurrentObjectStackCache();
	$var($String, docComment, $nc(this->elementUtils)->getDocComment(e));
	if (docComment != nullptr) {
		$var($StringTokenizer, st, $new($StringTokenizer, docComment, "\n\r"_s));
		indent();
		$nc(this->writer)->println("/**"_s);
		while (st->hasMoreTokens()) {
			indent();
			$nc(this->writer)->print(" *"_s);
			$nc(this->writer)->println($(st->nextToken()));
		}
		indent();
		$nc(this->writer)->println(" */"_s);
	}
}

void PrintingProcessor$PrintingElementVisitor::printModifiers($Element* e) {
	$useLocalCurrentObjectStackCache();
	$ElementKind* kind = $nc(e)->getKind();
	$init($ElementKind);
	if (kind == $ElementKind::PARAMETER || kind == $ElementKind::RECORD_COMPONENT) {
		$nc(this->writer)->print($(annotationsToString(e)));
	} else {
		printAnnotations(e);
		indent();
	}
	if (kind == $ElementKind::ENUM_CONSTANT || kind == $ElementKind::RECORD_COMPONENT) {
		return;
	}
	$var($Set, modifiers, $new($LinkedHashSet));
	modifiers->addAll($(e->getModifiers()));
	$init($PrintingProcessor$1);
	{
		$var($Element, enclosingElement, nullptr)
		switch ($nc($PrintingProcessor$1::$SwitchMap$javax$lang$model$element$ElementKind)->get($nc((kind))->ordinal())) {
		case 3:
			{}
		case 4:
			{
				$init($Modifier);
				modifiers->remove($Modifier::ABSTRACT);
				break;
			}
		case 5:
			{
				$init($Modifier);
				modifiers->remove($Modifier::FINAL);
				$init($Modifier);
				modifiers->remove($Modifier::ABSTRACT);
				$init($Modifier);
				modifiers->remove($Modifier::SEALED);
				break;
			}
		case 6:
			{
				$init($Modifier);
				modifiers->remove($Modifier::FINAL);
				break;
			}
		case 2:
			{}
		case 7:
			{
				$assign(enclosingElement, e->getEnclosingElement());
				if (enclosingElement != nullptr && $nc($(enclosingElement->getKind()))->isInterface()) {
					$init($Modifier);
					modifiers->remove($Modifier::PUBLIC);
					modifiers->remove($Modifier::ABSTRACT);
					modifiers->remove($Modifier::STATIC);
					modifiers->remove($Modifier::FINAL);
				}
				break;
			}
		}
	}
	if (!modifiers->isEmpty()) {
		$nc(this->writer)->print($cast($String, $($nc($($nc($(modifiers->stream()))->map(static_cast<$Function*>($$new(PrintingProcessor$PrintingElementVisitor$$Lambda$toString$2)))))->collect($($Collectors::joining(" "_s, ""_s, " "_s))))));
	}
}

void PrintingProcessor$PrintingElementVisitor::printFormalTypeParameters($Parameterizable* e, bool pad) {
	$useLocalCurrentObjectStackCache();
	$var($List, typeParams, $nc(e)->getTypeParameters());
	if (!$nc(typeParams)->isEmpty()) {
		$nc(this->writer)->print($cast($String, $($nc($($nc($(typeParams->stream()))->map(static_cast<$Function*>($$new(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printFormalTypeParameters$2$3, this)))))->collect($($Collectors::joining(", "_s, "<"_s, ">"_s))))));
		if (pad) {
			$nc(this->writer)->print(" "_s);
		}
	}
}

$String* PrintingProcessor$PrintingElementVisitor::annotationsToString($Element* e) {
	$useLocalCurrentObjectStackCache();
	$var($List, annotations, $nc(e)->getAnnotationMirrors());
	return $nc(annotations)->isEmpty() ? ""_s : $cast($String, $nc($($nc($($nc(annotations)->stream()))->map(static_cast<$Function*>($$new(PrintingProcessor$PrintingElementVisitor$$Lambda$toString$4)))))->collect($($Collectors::joining(" "_s, ""_s, " "_s))));
}

void PrintingProcessor$PrintingElementVisitor::printAnnotations($Element* e) {
	$useLocalCurrentObjectStackCache();
	$var($List, annots, $nc(e)->getAnnotationMirrors());
	{
		$var($Iterator, i$, $nc(annots)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($AnnotationMirror, annotationMirror, $cast($AnnotationMirror, i$->next()));
			{
				if (!printedContainerAnnotation(e, annotationMirror)) {
					indent();
					$nc(this->writer)->println($of(annotationMirror));
				}
			}
		}
	}
}

bool PrintingProcessor$PrintingElementVisitor::printedContainerAnnotation($Element* e, $AnnotationMirror* annotationMirror) {
	$useLocalCurrentObjectStackCache();
	$init($Elements$Origin);
	if ($nc(this->elementUtils)->getOrigin(static_cast<$AnnotatedConstruct*>(e), annotationMirror) == $Elements$Origin::MANDATED) {
		$var($Set, entries, $nc($($nc(annotationMirror)->getElementValues()))->entrySet());
		if ($nc(entries)->size() == 1) {
			$var($DeclaredType, annotationType, annotationMirror->getAnnotationType());
			$var($Element, annotationTypeAsElement, $nc(annotationType)->asElement());
			$var($Map$Entry, entry, $cast($Map$Entry, $nc($(entries->iterator()))->next()));
			$var($AnnotationValue, annotationElements, $cast($AnnotationValue, $nc(entry)->getValue()));
			$init($ElementKind);
			if ($nc(annotationTypeAsElement)->getKind() == $ElementKind::ANNOTATION_TYPE) {
				$var($List, annotationMethods, $ElementFilter::methodsIn($(static_cast<$Iterable*>(annotationTypeAsElement->getEnclosedElements()))));
				if ($nc(annotationMethods)->size() == 1) {
					$var($ExecutableElement, valueMethod, $cast($ExecutableElement, annotationMethods->get(0)));
					$var($TypeMirror, returnType, $nc(valueMethod)->getReturnType());
					bool var$0 = "value"_s->equals($($nc($of($(valueMethod->getSimpleName())))->toString()));
					$init($TypeKind);
					if (var$0 && $nc(returnType)->getKind() == $TypeKind::ARRAY) {
						return $nc(($cast($Boolean, $(($$new($PrintingProcessor$PrintingElementVisitor$2, this, $($Boolean::valueOf(false))))->visit(annotationElements)))))->booleanValue();
					}
				}
			}
		}
	}
	return false;
}

void PrintingProcessor$PrintingElementVisitor::printParameters($ExecutableElement* e) {
	$useLocalCurrentObjectStackCache();
	$var($List, parameters, $nc(e)->getParameters());
	int32_t size = $nc(parameters)->size();
	switch (size) {
	case 0:
		{
			break;
		}
	case 1:
		{
			{
				$var($Iterator, i$, parameters->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($VariableElement, parameter, $cast($VariableElement, i$->next()));
					{
						printModifiers(parameter);
						if (e->isVarArgs()) {
							$var($TypeMirror, tm, $nc(parameter)->asType());
							$init($TypeKind);
							if ($nc(tm)->getKind() != $TypeKind::ARRAY) {
								$throwNew($AssertionError, $of($$str({"Var-args parameter is not an array type: "_s, tm})));
							}
							$load($ArrayType);
							$nc(this->writer)->print($($of($nc(($cast($ArrayType, $($ArrayType::class$->cast(tm)))))->getComponentType())));
							$nc(this->writer)->print("..."_s);
						} else {
							$nc(this->writer)->print($($of($nc(parameter)->asType())));
						}
						$nc(this->writer)->print($$str({" "_s, $($nc(parameter)->getSimpleName())}));
					}
				}
			}
			break;
		}
	default:
		{
			{
				int32_t i = 1;
				{
					$var($Iterator, i$, parameters->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($VariableElement, parameter, $cast($VariableElement, i$->next()));
						{
							if (i == 2) {
								++this->indentation;
							}
							if (i > 1) {
								indent();
							}
							printModifiers(parameter);
							if (i == size && e->isVarArgs()) {
								$var($TypeMirror, tm, $nc(parameter)->asType());
								$init($TypeKind);
								if ($nc(tm)->getKind() != $TypeKind::ARRAY) {
									$throwNew($AssertionError, $of($$str({"Var-args parameter is not an array type: "_s, tm})));
								}
								$load($ArrayType);
								$nc(this->writer)->print($($of($nc(($cast($ArrayType, $($ArrayType::class$->cast(tm)))))->getComponentType())));
								$nc(this->writer)->print("..."_s);
							} else {
								$nc(this->writer)->print($($of($nc(parameter)->asType())));
							}
							$nc(this->writer)->print($$str({" "_s, $($nc(parameter)->getSimpleName())}));
							if (i < size) {
								$nc(this->writer)->println(","_s);
							}
							++i;
						}
					}
				}
				if (parameters->size() >= 2) {
					--this->indentation;
				}
			}
			break;
		}
	}
}

void PrintingProcessor$PrintingElementVisitor::printInterfaces($TypeElement* e) {
	$useLocalCurrentObjectStackCache();
	$ElementKind* kind = $nc(e)->getKind();
	$init($ElementKind);
	if (kind != $ElementKind::ANNOTATION_TYPE) {
		$var($List, interfaces, e->getInterfaces());
		if (!$nc(interfaces)->isEmpty()) {
			$nc(this->writer)->print(($nc(kind)->isClass() ? " implements "_s : " extends "_s));
			$nc(this->writer)->print($cast($String, $($nc($($nc($(interfaces->stream()))->map(static_cast<$Function*>($$new(PrintingProcessor$PrintingElementVisitor$$Lambda$toString$5)))))->collect($($Collectors::joining(", "_s))))));
		}
	}
}

void PrintingProcessor$PrintingElementVisitor::printPermittedSubclasses($TypeElement* e) {
	$useLocalCurrentObjectStackCache();
	$var($List, subtypes, $nc(e)->getPermittedSubclasses());
	if (!$nc(subtypes)->isEmpty()) {
		$nc(this->writer)->print(" permits "_s);
		$nc(this->writer)->print($cast($String, $($nc($($nc($(subtypes->stream()))->map(static_cast<$Function*>($$new(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printPermittedSubclasses$3$6)))))->collect($($Collectors::joining(", "_s))))));
	}
}

void PrintingProcessor$PrintingElementVisitor::printThrows($ExecutableElement* e) {
	$useLocalCurrentObjectStackCache();
	$var($List, thrownTypes, $nc(e)->getThrownTypes());
	int32_t size = $nc(thrownTypes)->size();
	if (size != 0) {
		$nc(this->writer)->print(" throws"_s);
		int32_t i = 1;
		{
			$var($Iterator, i$, thrownTypes->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($TypeMirror, thrownType, $cast($TypeMirror, i$->next()));
				{
					if (i == 1) {
						$nc(this->writer)->print(" "_s);
					}
					if (i == 2) {
						++this->indentation;
					}
					if (i >= 2) {
						indent();
					}
					$nc(this->writer)->print($of(thrownType));
					if (i != size) {
						$nc(this->writer)->println(", "_s);
					}
					++i;
				}
			}
		}
		if (size >= 2) {
			--this->indentation;
		}
	}
}

void PrintingProcessor$PrintingElementVisitor::indent() {
	int32_t indentation = this->indentation;
	if (indentation < 0) {
		return;
	}
	int32_t maxIndex = $nc(PrintingProcessor$PrintingElementVisitor::spaces)->length - 1;
	while (indentation > maxIndex) {
		$nc(this->writer)->print($nc(PrintingProcessor$PrintingElementVisitor::spaces)->get(maxIndex));
		indentation -= maxIndex;
	}
	$nc(this->writer)->print($nc(PrintingProcessor$PrintingElementVisitor::spaces)->get(indentation));
}

$Object* PrintingProcessor$PrintingElementVisitor::visitRecordComponent($RecordComponentElement* e, Object$* p) {
	return $of(this->visitRecordComponent(e, $cast($Boolean, p)));
}

$Object* PrintingProcessor$PrintingElementVisitor::visitModule($ModuleElement* e, Object$* p) {
	return $of(this->visitModule(e, $cast($Boolean, p)));
}

$Object* PrintingProcessor$PrintingElementVisitor::visitVariable($VariableElement* e, Object$* newLine) {
	return $of(this->visitVariable(e, $cast($Boolean, newLine)));
}

$Object* PrintingProcessor$PrintingElementVisitor::visitTypeParameter($TypeParameterElement* e, Object$* p) {
	return $of(this->visitTypeParameter(e, $cast($Boolean, p)));
}

$Object* PrintingProcessor$PrintingElementVisitor::visitExecutable($ExecutableElement* e, Object$* p) {
	return $of(this->visitExecutable(e, $cast($Boolean, p)));
}

$Object* PrintingProcessor$PrintingElementVisitor::visitType($TypeElement* e, Object$* p) {
	return $of(this->visitType(e, $cast($Boolean, p)));
}

$Object* PrintingProcessor$PrintingElementVisitor::visitPackage($PackageElement* e, Object$* p) {
	return $of(this->visitPackage(e, $cast($Boolean, p)));
}

$Object* PrintingProcessor$PrintingElementVisitor::defaultAction($Element* e, Object$* newLine) {
	return $of(this->defaultAction(e, $cast($Boolean, newLine)));
}

$String* PrintingProcessor$PrintingElementVisitor::lambda$printPermittedSubclasses$3($TypeMirror* subtype) {
	$init(PrintingProcessor$PrintingElementVisitor);
	return $nc(subtype)->toString();
}

$String* PrintingProcessor$PrintingElementVisitor::lambda$printFormalTypeParameters$2($TypeParameterElement* tpe) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $(annotationsToString(tpe)));
	return $concat(var$0, $($nc($of(tpe))->toString()));
}

bool PrintingProcessor$PrintingElementVisitor::lambda$visitType$1($Element* elt) {
	$init($Elements$Origin);
	return $nc(this->elementUtils)->getOrigin(elt) == $Elements$Origin::EXPLICIT;
}

$String* PrintingProcessor$PrintingElementVisitor::lambda$visitType$0($RecordComponentElement* recordDes) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$2, $(annotationsToString(recordDes)));
	$var($String, var$1, $$concat(var$2, $($nc($($nc(recordDes)->asType()))->toString())));
	$var($String, var$0, $$concat(var$1, " "));
	return $concat(var$0, $(recordDes->getSimpleName()));
}

void clinit$PrintingProcessor$PrintingElementVisitor($Class* class$) {
	$assignStatic(PrintingProcessor$PrintingElementVisitor::spaces, $new($StringArray, {
		""_s,
		"  "_s,
		"    "_s,
		"      "_s,
		"        "_s,
		"          "_s,
		"            "_s,
		"              "_s,
		"                "_s,
		"                  "_s,
		"                    "_s
	}));
}

PrintingProcessor$PrintingElementVisitor::PrintingProcessor$PrintingElementVisitor() {
}

$Class* PrintingProcessor$PrintingElementVisitor::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$0::classInfo$.name)) {
			return PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$0::load$(name, initialize);
		}
		if (name->equals(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$1$1::classInfo$.name)) {
			return PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$1$1::load$(name, initialize);
		}
		if (name->equals(PrintingProcessor$PrintingElementVisitor$$Lambda$toString$2::classInfo$.name)) {
			return PrintingProcessor$PrintingElementVisitor$$Lambda$toString$2::load$(name, initialize);
		}
		if (name->equals(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printFormalTypeParameters$2$3::classInfo$.name)) {
			return PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printFormalTypeParameters$2$3::load$(name, initialize);
		}
		if (name->equals(PrintingProcessor$PrintingElementVisitor$$Lambda$toString$4::classInfo$.name)) {
			return PrintingProcessor$PrintingElementVisitor$$Lambda$toString$4::load$(name, initialize);
		}
		if (name->equals(PrintingProcessor$PrintingElementVisitor$$Lambda$toString$5::classInfo$.name)) {
			return PrintingProcessor$PrintingElementVisitor$$Lambda$toString$5::load$(name, initialize);
		}
		if (name->equals(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printPermittedSubclasses$3$6::classInfo$.name)) {
			return PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printPermittedSubclasses$3$6::load$(name, initialize);
		}
	}
	$loadClass(PrintingProcessor$PrintingElementVisitor, name, initialize, &_PrintingProcessor$PrintingElementVisitor_ClassInfo_, clinit$PrintingProcessor$PrintingElementVisitor, allocate$PrintingProcessor$PrintingElementVisitor);
	return class$;
}

$Class* PrintingProcessor$PrintingElementVisitor::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com