#include <jdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper.h>

#include <com/sun/source/doctree/DocCommentTree.h>
#include <com/sun/source/doctree/DocTree.h>
#include <com/sun/source/doctree/ReferenceTree.h>
#include <com/sun/source/doctree/ThrowsTree.h>
#include <com/sun/source/tree/CompilationUnitTree.h>
#include <com/sun/source/tree/Tree.h>
#include <com/sun/source/util/DocSourcePositions.h>
#include <com/sun/source/util/DocTreePath.h>
#include <com/sun/source/util/DocTrees.h>
#include <com/sun/source/util/JavacTask.h>
#include <com/sun/source/util/SourcePositions.h>
#include <com/sun/source/util/TreePath.h>
#include <com/sun/source/util/Trees.h>
#include <com/sun/tools/javac/api/JavacTaskImpl.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/io/Writer.h>
#include <java/lang/CharSequence.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <java/util/AbstractMap.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Comparator.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/TreeMap.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ElementKind.h>
#include <javax/lang/model/element/ExecutableElement.h>
#include <javax/lang/model/element/ModuleElement.h>
#include <javax/lang/model/element/Name.h>
#include <javax/lang/model/element/Parameterizable.h>
#include <javax/lang/model/element/TypeElement.h>
#include <javax/lang/model/element/VariableElement.h>
#include <javax/lang/model/type/DeclaredType.h>
#include <javax/lang/model/type/TypeKind.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/lang/model/util/ElementFilter.h>
#include <javax/lang/model/util/Elements.h>
#include <javax/tools/Diagnostic.h>
#include <javax/tools/DiagnosticListener.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/ForwardingJavaFileManager.h>
#include <javax/tools/JavaCompiler$CompilationTask.h>
#include <javax/tools/JavaCompiler.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <javax/tools/SimpleJavaFileObject.h>
#include <javax/tools/StandardJavaFileManager.h>
#include <javax/tools/StandardLocation.h>
#include <jdk/internal/shellsupport/doc/JavadocHelper$2.h>
#include <jdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$1.h>
#include <jdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$2.h>
#include <jdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$3.h>
#include <jdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager.h>
#include <jdk/internal/shellsupport/doc/JavadocHelper.h>
#include <jcpp.h>

#undef DECLARED
#undef HTML
#undef METHOD
#undef PACKAGE
#undef SOURCE
#undef SOURCE_PATH

using $IOExceptionArray = $Array<::java::io::IOException>;
using $JavaFileObjectArray = $Array<::javax::tools::JavaFileObject>;
using $DocCommentTree = ::com::sun::source::doctree::DocCommentTree;
using $DocTree = ::com::sun::source::doctree::DocTree;
using $ReferenceTree = ::com::sun::source::doctree::ReferenceTree;
using $ThrowsTree = ::com::sun::source::doctree::ThrowsTree;
using $CompilationUnitTree = ::com::sun::source::tree::CompilationUnitTree;
using $Tree = ::com::sun::source::tree::Tree;
using $DocSourcePositions = ::com::sun::source::util::DocSourcePositions;
using $DocTreePath = ::com::sun::source::util::DocTreePath;
using $DocTrees = ::com::sun::source::util::DocTrees;
using $JavacTask = ::com::sun::source::util::JavacTask;
using $TreePath = ::com::sun::source::util::TreePath;
using $TreePathScanner = ::com::sun::source::util::TreePathScanner;
using $Trees = ::com::sun::source::util::Trees;
using $BasicJavacTask = ::com::sun::tools::javac::api::BasicJavacTask;
using $JavacTaskImpl = ::com::sun::tools::javac::api::JavacTaskImpl;
using $Context = ::com::sun::tools::javac::util::Context;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $Writer = ::java::io::Writer;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;
using $AbstractMap = ::java::util::AbstractMap;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Comparator = ::java::util::Comparator;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $TreeMap = ::java::util::TreeMap;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $BaseStream = ::java::util::stream::BaseStream;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;
using $Element = ::javax::lang::model::element::Element;
using $ElementKind = ::javax::lang::model::element::ElementKind;
using $ExecutableElement = ::javax::lang::model::element::ExecutableElement;
using $ModuleElement = ::javax::lang::model::element::ModuleElement;
using $Name = ::javax::lang::model::element::Name;
using $Parameterizable = ::javax::lang::model::element::Parameterizable;
using $TypeElement = ::javax::lang::model::element::TypeElement;
using $VariableElement = ::javax::lang::model::element::VariableElement;
using $DeclaredType = ::javax::lang::model::type::DeclaredType;
using $TypeKind = ::javax::lang::model::type::TypeKind;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $ElementFilter = ::javax::lang::model::util::ElementFilter;
using $Elements = ::javax::lang::model::util::Elements;
using $Diagnostic = ::javax::tools::Diagnostic;
using $DiagnosticListener = ::javax::tools::DiagnosticListener;
using $FileObject = ::javax::tools::FileObject;
using $ForwardingJavaFileManager = ::javax::tools::ForwardingJavaFileManager;
using $JavaCompiler = ::javax::tools::JavaCompiler;
using $JavaCompiler$CompilationTask = ::javax::tools::JavaCompiler$CompilationTask;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;
using $SimpleJavaFileObject = ::javax::tools::SimpleJavaFileObject;
using $StandardJavaFileManager = ::javax::tools::StandardJavaFileManager;
using $StandardLocation = ::javax::tools::StandardLocation;
using $JavadocHelper = ::jdk::internal::shellsupport::doc::JavadocHelper;
using $JavadocHelper$2 = ::jdk::internal::shellsupport::doc::JavadocHelper$2;
using $JavadocHelper$OnDemandJavadocHelper$1 = ::jdk::internal::shellsupport::doc::JavadocHelper$OnDemandJavadocHelper$1;
using $JavadocHelper$OnDemandJavadocHelper$2 = ::jdk::internal::shellsupport::doc::JavadocHelper$OnDemandJavadocHelper$2;
using $JavadocHelper$OnDemandJavadocHelper$3 = ::jdk::internal::shellsupport::doc::JavadocHelper$OnDemandJavadocHelper$3;
using $JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager = ::jdk::internal::shellsupport::doc::JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager;

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

class JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$0 : public $Iterable {
	$class(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$0, $NO_CLASS_INIT, $Iterable)
public:
	void init$(JavadocHelper$OnDemandJavadocHelper* inst, $JavacTask* task, $Element* element) {
		$set(this, inst$, inst);
		$set(this, task, task);
		$set(this, element, element);
	}
	virtual $Iterator* iterator() override {
		 return $nc(inst$)->lambda$getResolvedDocComment$0(task, element);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$0>());
	}
	JavadocHelper$OnDemandJavadocHelper* inst$ = nullptr;
	$JavacTask* task = nullptr;
	$Element* element = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$0::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$0, inst$)},
	{"task", "Lcom/sun/source/util/JavacTask;", nullptr, $PUBLIC, $field(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$0, task)},
	{"element", "Ljavax/lang/model/element/Element;", nullptr, $PUBLIC, $field(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$0, element)},
	{}
};
$MethodInfo JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$0::methodInfos[3] = {
	{"<init>", "(Ljdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper;Lcom/sun/source/util/JavacTask;Ljavax/lang/model/element/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$0::*)(JavadocHelper$OnDemandJavadocHelper*,$JavacTask*,$Element*)>(&JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$0::init$))},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$0",
	"java.lang.Object",
	"java.lang.Iterable",
	fieldInfos,
	methodInfos
};
$Class* JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$0::load$($String* name, bool initialize) {
	$loadClass(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$0::class$ = nullptr;

class JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$1$1 : public $Comparator {
	$class(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$1$1, $NO_CLASS_INIT, $Comparator)
public:
	void init$() {
	}
	virtual int32_t compare(Object$* span1, Object$* span2) override {
		 return JavadocHelper$OnDemandJavadocHelper::lambda$getResolvedDocComment$1($cast($ints, span1), $cast($ints, span2));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$1$1::*)()>(&JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$1$1::init$))},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$1$1",
	"java.lang.Object",
	"java.util.Comparator",
	nullptr,
	methodInfos
};
$Class* JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$1$1::load$($String* name, bool initialize) {
	$loadClass(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$1$1::class$ = nullptr;

class JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$2$2 : public $Function {
	$class(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$2$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* sup) override {
		 return $of(JavadocHelper$OnDemandJavadocHelper::lambda$superMethodsForInheritDoc$2($cast($Element, sup)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$2$2::*)()>(&JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$2$2::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$2$2",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$2$2::load$($String* name, bool initialize) {
	$loadClass(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$2$2::class$ = nullptr;

class JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$3$3 : public $Predicate {
	$class(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$3$3, $NO_CLASS_INIT, $Predicate)
public:
	void init$($JavacTask* task, $ExecutableElement* method, $TypeElement* type) {
		$set(this, task, task);
		$set(this, method, method);
		$set(this, type, type);
	}
	virtual bool test(Object$* supMethod) override {
		 return JavadocHelper$OnDemandJavadocHelper::lambda$superMethodsForInheritDoc$3(task, method, type, $cast($ExecutableElement, supMethod));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$3$3>());
	}
	$JavacTask* task = nullptr;
	$ExecutableElement* method = nullptr;
	$TypeElement* type = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$3$3::fieldInfos[4] = {
	{"task", "Lcom/sun/source/util/JavacTask;", nullptr, $PUBLIC, $field(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$3$3, task)},
	{"method", "Ljavax/lang/model/element/ExecutableElement;", nullptr, $PUBLIC, $field(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$3$3, method)},
	{"type", "Ljavax/lang/model/element/TypeElement;", nullptr, $PUBLIC, $field(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$3$3, type)},
	{}
};
$MethodInfo JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$3$3::methodInfos[3] = {
	{"<init>", "(Lcom/sun/source/util/JavacTask;Ljavax/lang/model/element/ExecutableElement;Ljavax/lang/model/element/TypeElement;)V", nullptr, $PUBLIC, $method(static_cast<void(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$3$3::*)($JavacTask*,$ExecutableElement*,$TypeElement*)>(&JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$3$3::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$3$3",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$3$3::load$($String* name, bool initialize) {
	$loadClass(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$3$3::class$ = nullptr;

class JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superTypeForInheritDoc$4$4 : public $Function {
	$class(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superTypeForInheritDoc$4$4, $NO_CLASS_INIT, $Function)
public:
	void init$(JavadocHelper$OnDemandJavadocHelper* inst, $JavacTask* task) {
		$set(this, inst$, inst);
		$set(this, task, task);
	}
	virtual $Object* apply(Object$* el) override {
		 return $of($nc(inst$)->lambda$superTypeForInheritDoc$4(task, $cast($Element, el)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superTypeForInheritDoc$4$4>());
	}
	JavadocHelper$OnDemandJavadocHelper* inst$ = nullptr;
	$JavacTask* task = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superTypeForInheritDoc$4$4::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superTypeForInheritDoc$4$4, inst$)},
	{"task", "Lcom/sun/source/util/JavacTask;", nullptr, $PUBLIC, $field(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superTypeForInheritDoc$4$4, task)},
	{}
};
$MethodInfo JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superTypeForInheritDoc$4$4::methodInfos[3] = {
	{"<init>", "(Ljdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper;Lcom/sun/source/util/JavacTask;)V", nullptr, $PUBLIC, $method(static_cast<void(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superTypeForInheritDoc$4$4::*)(JavadocHelper$OnDemandJavadocHelper*,$JavacTask*)>(&JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superTypeForInheritDoc$4$4::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superTypeForInheritDoc$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superTypeForInheritDoc$4$4",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superTypeForInheritDoc$4$4::load$($String* name, bool initialize) {
	$loadClass(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superTypeForInheritDoc$4$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superTypeForInheritDoc$4$4::class$ = nullptr;

class JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$5$5 : public $Predicate {
	$class(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$5$5, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* tm) override {
		 return JavadocHelper$OnDemandJavadocHelper::lambda$interfaces$5($cast($TypeMirror, tm));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$5$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$5$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$5$5::*)()>(&JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$5$5::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$5$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$5$5",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$5$5::load$($String* name, bool initialize) {
	$loadClass(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$5$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$5$5::class$ = nullptr;

class JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$6$6 : public $Function {
	$class(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$6$6, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* tm) override {
		 return $of(JavadocHelper$OnDemandJavadocHelper::lambda$interfaces$6($cast($TypeMirror, tm)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$6$6>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$6$6::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$6$6::*)()>(&JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$6$6::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$6$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$6$6",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$6$6::load$($String* name, bool initialize) {
	$loadClass(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$6$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$6$6::class$ = nullptr;

class JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$findSource$7$7 : public $DiagnosticListener {
	$class(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$findSource$7$7, $NO_CLASS_INIT, $DiagnosticListener)
public:
	void init$() {
	}
	virtual void report($Diagnostic* d) override {
		JavadocHelper$OnDemandJavadocHelper::lambda$findSource$7(d);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$findSource$7$7>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$findSource$7$7::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$findSource$7$7::*)()>(&JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$findSource$7$7::init$))},
	{"report", "(Ljavax/tools/Diagnostic;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$findSource$7$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$findSource$7$7",
	"java.lang.Object",
	"javax.tools.DiagnosticListener",
	nullptr,
	methodInfos
};
$Class* JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$findSource$7$7::load$($String* name, bool initialize) {
	$loadClass(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$findSource$7$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$findSource$7$7::class$ = nullptr;

$FieldInfo _JavadocHelper$OnDemandJavadocHelper_FieldInfo_[] = {
	{"mainTask", "Lcom/sun/source/util/JavacTask;", nullptr, $PRIVATE | $FINAL, $field(JavadocHelper$OnDemandJavadocHelper, mainTask)},
	{"baseFileManager", "Ljavax/tools/JavaFileManager;", nullptr, $PRIVATE | $FINAL, $field(JavadocHelper$OnDemandJavadocHelper, baseFileManager)},
	{"fm", "Ljavax/tools/StandardJavaFileManager;", nullptr, $PRIVATE | $FINAL, $field(JavadocHelper$OnDemandJavadocHelper, fm)},
	{"signature2Source", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/javac/util/Pair<Lcom/sun/source/util/JavacTask;Lcom/sun/source/util/TreePath;>;>;", $PRIVATE | $FINAL, $field(JavadocHelper$OnDemandJavadocHelper, signature2Source)},
	{}
};

$MethodInfo _JavadocHelper$OnDemandJavadocHelper_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/source/util/JavacTask;Ljavax/tools/StandardJavaFileManager;)V", nullptr, $PRIVATE, $method(static_cast<void(JavadocHelper$OnDemandJavadocHelper::*)($JavacTask*,$StandardJavaFileManager*)>(&JavadocHelper$OnDemandJavadocHelper::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"elementSignature", "(Ljavax/lang/model/element/Element;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(JavadocHelper$OnDemandJavadocHelper::*)($Element*)>(&JavadocHelper$OnDemandJavadocHelper::elementSignature))},
	{"fillElementCache", "(Lcom/sun/source/util/JavacTask;Lcom/sun/source/tree/CompilationUnitTree;)V", nullptr, $PRIVATE, $method(static_cast<void(JavadocHelper$OnDemandJavadocHelper::*)($JavacTask*,$CompilationUnitTree*)>(&JavadocHelper$OnDemandJavadocHelper::fillElementCache)), "java.io.IOException"},
	{"findSource", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/tools/javac/util/Pair;", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/tools/javac/util/Pair<Lcom/sun/source/util/JavacTask;Lcom/sun/source/tree/CompilationUnitTree;>;", $PRIVATE, $method(static_cast<$Pair*(JavadocHelper$OnDemandJavadocHelper::*)($String*,$String*)>(&JavadocHelper$OnDemandJavadocHelper::findSource)), "java.io.IOException"},
	{"getResolvedDocComment", "(Ljavax/lang/model/element/Element;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getResolvedDocComment", "(Lcom/sun/source/util/JavacTask;Lcom/sun/source/util/TreePath;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(JavadocHelper$OnDemandJavadocHelper::*)($JavacTask*,$TreePath*)>(&JavadocHelper$OnDemandJavadocHelper::getResolvedDocComment)), "java.io.IOException"},
	{"getSourceElement", "(Ljavax/lang/model/element/Element;)Ljavax/lang/model/element/Element;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getSourceElement", "(Lcom/sun/source/util/JavacTask;Ljavax/lang/model/element/Element;)Lcom/sun/tools/javac/util/Pair;", "(Lcom/sun/source/util/JavacTask;Ljavax/lang/model/element/Element;)Lcom/sun/tools/javac/util/Pair<Lcom/sun/source/util/JavacTask;Lcom/sun/source/util/TreePath;>;", $PRIVATE, $method(static_cast<$Pair*(JavadocHelper$OnDemandJavadocHelper::*)($JavacTask*,$Element*)>(&JavadocHelper$OnDemandJavadocHelper::getSourceElement)), "java.io.IOException"},
	{"getThrownException", "(Lcom/sun/source/util/JavacTask;Lcom/sun/source/util/TreePath;Lcom/sun/source/doctree/DocCommentTree;Lcom/sun/source/doctree/ThrowsTree;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(JavadocHelper$OnDemandJavadocHelper::*)($JavacTask*,$TreePath*,$DocCommentTree*,$ThrowsTree*)>(&JavadocHelper$OnDemandJavadocHelper::getThrownException))},
	{"interfaces", "(Ljavax/lang/model/element/TypeElement;)Ljava/util/stream/Stream;", "(Ljavax/lang/model/element/TypeElement;)Ljava/util/stream/Stream<Ljavax/lang/model/element/Element;>;", $PRIVATE, $method(static_cast<$Stream*(JavadocHelper$OnDemandJavadocHelper::*)($TypeElement*)>(&JavadocHelper$OnDemandJavadocHelper::interfaces))},
	{"lambda$findSource$7", "(Ljavax/tools/Diagnostic;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Diagnostic*)>(&JavadocHelper$OnDemandJavadocHelper::lambda$findSource$7))},
	{"lambda$getResolvedDocComment$0", "(Lcom/sun/source/util/JavacTask;Ljavax/lang/model/element/Element;)Ljava/util/Iterator;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Iterator*(JavadocHelper$OnDemandJavadocHelper::*)($JavacTask*,$Element*)>(&JavadocHelper$OnDemandJavadocHelper::lambda$getResolvedDocComment$0))},
	{"lambda$getResolvedDocComment$1", "([I[I)I", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)($ints*,$ints*)>(&JavadocHelper$OnDemandJavadocHelper::lambda$getResolvedDocComment$1))},
	{"lambda$interfaces$5", "(Ljavax/lang/model/type/TypeMirror;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($TypeMirror*)>(&JavadocHelper$OnDemandJavadocHelper::lambda$interfaces$5))},
	{"lambda$interfaces$6", "(Ljavax/lang/model/type/TypeMirror;)Ljavax/lang/model/element/Element;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Element*(*)($TypeMirror*)>(&JavadocHelper$OnDemandJavadocHelper::lambda$interfaces$6))},
	{"lambda$superMethodsForInheritDoc$2", "(Ljavax/lang/model/element/Element;)Ljava/util/stream/Stream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Stream*(*)($Element*)>(&JavadocHelper$OnDemandJavadocHelper::lambda$superMethodsForInheritDoc$2))},
	{"lambda$superMethodsForInheritDoc$3", "(Lcom/sun/source/util/JavacTask;Ljavax/lang/model/element/ExecutableElement;Ljavax/lang/model/element/TypeElement;Ljavax/lang/model/element/ExecutableElement;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($JavacTask*,$ExecutableElement*,$TypeElement*,$ExecutableElement*)>(&JavadocHelper$OnDemandJavadocHelper::lambda$superMethodsForInheritDoc$3))},
	{"lambda$superTypeForInheritDoc$4", "(Lcom/sun/source/util/JavacTask;Ljavax/lang/model/element/Element;)Ljava/util/stream/Stream;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Stream*(JavadocHelper$OnDemandJavadocHelper::*)($JavacTask*,$Element*)>(&JavadocHelper$OnDemandJavadocHelper::lambda$superTypeForInheritDoc$4))},
	{"parseBlockTag", "(Lcom/sun/source/util/JavacTask;Ljava/lang/String;)Lcom/sun/source/doctree/DocTree;", nullptr, $PRIVATE, $method(static_cast<$DocTree*(JavadocHelper$OnDemandJavadocHelper::*)($JavacTask*,$String*)>(&JavadocHelper$OnDemandJavadocHelper::parseBlockTag))},
	{"parseDocComment", "(Lcom/sun/source/util/JavacTask;Ljava/lang/String;)Lcom/sun/tools/javac/util/Pair;", "(Lcom/sun/source/util/JavacTask;Ljava/lang/String;)Lcom/sun/tools/javac/util/Pair<Lcom/sun/source/doctree/DocCommentTree;Ljava/lang/Integer;>;", $PRIVATE, $method(static_cast<$Pair*(JavadocHelper$OnDemandJavadocHelper::*)($JavacTask*,$String*)>(&JavadocHelper$OnDemandJavadocHelper::parseDocComment))},
	{"superMethodsForInheritDoc", "(Lcom/sun/source/util/JavacTask;Ljavax/lang/model/element/ExecutableElement;)Ljava/util/stream/Stream;", "(Lcom/sun/source/util/JavacTask;Ljavax/lang/model/element/ExecutableElement;)Ljava/util/stream/Stream<Ljavax/lang/model/element/ExecutableElement;>;", $PRIVATE, $method(static_cast<$Stream*(JavadocHelper$OnDemandJavadocHelper::*)($JavacTask*,$ExecutableElement*)>(&JavadocHelper$OnDemandJavadocHelper::superMethodsForInheritDoc))},
	{"superTypeForInheritDoc", "(Lcom/sun/source/util/JavacTask;Ljavax/lang/model/element/Element;)Ljava/util/stream/Stream;", "(Lcom/sun/source/util/JavacTask;Ljavax/lang/model/element/Element;)Ljava/util/stream/Stream<Ljavax/lang/model/element/Element;>;", $PRIVATE, $method(static_cast<$Stream*(JavadocHelper$OnDemandJavadocHelper::*)($JavacTask*,$Element*)>(&JavadocHelper$OnDemandJavadocHelper::superTypeForInheritDoc))},
	{"topLevelType", "(Ljavax/lang/model/element/Element;)Ljavax/lang/model/element/TypeElement;", nullptr, $PRIVATE, $method(static_cast<$TypeElement*(JavadocHelper$OnDemandJavadocHelper::*)($Element*)>(&JavadocHelper$OnDemandJavadocHelper::topLevelType))},
	{}
};

$InnerClassInfo _JavadocHelper$OnDemandJavadocHelper_InnerClassesInfo_[] = {
	{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper", "jdk.internal.shellsupport.doc.JavadocHelper", "OnDemandJavadocHelper", $PRIVATE | $STATIC | $FINAL},
	{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager", "jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper", "PatchModuleFileManager", $PRIVATE | $STATIC | $FINAL},
	{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$3", nullptr, nullptr, 0},
	{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$2", nullptr, nullptr, 0},
	{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JavadocHelper$OnDemandJavadocHelper_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper",
	"jdk.internal.shellsupport.doc.JavadocHelper",
	nullptr,
	_JavadocHelper$OnDemandJavadocHelper_FieldInfo_,
	_JavadocHelper$OnDemandJavadocHelper_MethodInfo_,
	nullptr,
	nullptr,
	_JavadocHelper$OnDemandJavadocHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.shellsupport.doc.JavadocHelper"
};

$Object* allocate$JavadocHelper$OnDemandJavadocHelper($Class* clazz) {
	return $of($alloc(JavadocHelper$OnDemandJavadocHelper));
}

void JavadocHelper$OnDemandJavadocHelper::init$($JavacTask* mainTask, $StandardJavaFileManager* fm) {
	$JavadocHelper::init$();
	$set(this, signature2Source, $new($HashMap));
	$set(this, mainTask, mainTask);
	$load($JavaFileManager);
	$set(this, baseFileManager, $cast($JavaFileManager, $nc($($nc(($cast($JavacTaskImpl, mainTask)))->getContext()))->get($JavaFileManager::class$)));
	$set(this, fm, fm);
}

$String* JavadocHelper$OnDemandJavadocHelper::getResolvedDocComment($Element* forElement) {
	$var($Pair, sourceElement, getSourceElement(this->mainTask, forElement));
	if (sourceElement == nullptr) {
		return nullptr;
	}
	return getResolvedDocComment($cast($JavacTask, $nc(sourceElement)->fst), $cast($TreePath, sourceElement->snd));
}

$Element* JavadocHelper$OnDemandJavadocHelper::getSourceElement($Element* forElement) {
	$useLocalCurrentObjectStackCache();
	$var($Pair, sourceElement, getSourceElement(this->mainTask, forElement));
	if (sourceElement == nullptr) {
		return forElement;
	}
	$var($Element, result, $nc($($Trees::instance($cast($JavaCompiler$CompilationTask, $nc(sourceElement)->fst))))->getElement($cast($TreePath, $nc(sourceElement)->snd)));
	if (result == nullptr) {
		return forElement;
	}
	return result;
}

$String* JavadocHelper$OnDemandJavadocHelper::getResolvedDocComment($JavacTask* task, $TreePath* el) {
	$useLocalCurrentObjectStackCache();
	$var($DocTrees, trees, $DocTrees::instance(static_cast<$JavaCompiler$CompilationTask*>(task)));
	$var($Element, element, $nc(trees)->getElement(el));
	$var($String, docComment, trees->getDocComment(el));
	$init($ElementKind);
	if (docComment == nullptr && $nc(element)->getKind() == $ElementKind::METHOD) {
		$var($ExecutableElement, executableElement, $cast($ExecutableElement, element));
		$var($Iterable, superTypes, static_cast<$Iterable*>($new(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$0, this, task, element)));
		{
			$var($Iterator, i$, $nc(superTypes)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Element, sup, $cast($Element, i$->next()));
				{
					{
						$var($Iterator, i$, $nc($($ElementFilter::methodsIn($(static_cast<$Iterable*>($nc(sup)->getEnclosedElements())))))->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($ExecutableElement, supMethod, $cast($ExecutableElement, i$->next()));
							{
								$var($TypeElement, clazz, $cast($TypeElement, executableElement->getEnclosingElement()));
								if ($nc($($nc(task)->getElements()))->overrides(executableElement, supMethod, clazz)) {
									$var($Pair, source, getSourceElement(task, supMethod));
									if (source != nullptr) {
										$var($String, overriddenComment, getResolvedDocComment($cast($JavacTask, source->fst), $cast($TreePath, source->snd)));
										if (overriddenComment != nullptr) {
											return overriddenComment;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (docComment == nullptr) {
		return nullptr;
	}
	$var($Pair, parsed, parseDocComment(task, docComment));
	$var($DocCommentTree, docCommentTree, $cast($DocCommentTree, $nc(parsed)->fst));
	int32_t offset = $nc(($cast($Integer, parsed->snd)))->intValue();
	$var($IOExceptionArray, exception, $new($IOExceptionArray, 1));
	$var($Comparator, spanComp, static_cast<$Comparator*>($new(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$1$1)));
	$var($Map, replace, static_cast<$Map*>(static_cast<$AbstractMap*>($new($TreeMap, spanComp))));
	$var($DocSourcePositions, sp, $cast($DocSourcePositions, trees->getSourcePositions()));
	$$new($JavadocHelper$OnDemandJavadocHelper$1, this, offset, task, element, el, docCommentTree, exception, sp, replace, docComment)->scan(static_cast<$DocTree*>(docCommentTree), ($Void*)nullptr);
	if (replace->isEmpty()) {
		return docComment;
	}
	$var($StringBuilder, replacedInheritDoc, $new($StringBuilder, docComment));
	{
		$var($Iterator, i$, $nc($(replace->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
			{
				int32_t var$0 = $nc(($cast($ints, $($nc(e)->getKey()))))->get(0) - offset;
				replacedInheritDoc->delete$(var$0, $nc(($cast($ints, $(e->getKey()))))->get(1) - offset);
				int32_t var$1 = $nc(($cast($ints, $($nc(e)->getKey()))))->get(0) - offset;
				replacedInheritDoc->insert(var$1, $cast($String, $($nc($($nc(($cast($List, $(e->getValue()))))->stream()))->collect($($Collectors::joining(""_s))))));
			}
		}
	}
	return replacedInheritDoc->toString();
}

$Stream* JavadocHelper$OnDemandJavadocHelper::superMethodsForInheritDoc($JavacTask* task, $ExecutableElement* method) {
	$useLocalCurrentObjectStackCache();
	$var($TypeElement, type, $cast($TypeElement, $nc(method)->getEnclosingElement()));
	return $nc($($nc($(this->superTypeForInheritDoc(task, static_cast<$Element*>(static_cast<$Parameterizable*>(type)))))->flatMap(static_cast<$Function*>($$new(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$2$2)))))->filter(static_cast<$Predicate*>($$new(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$3$3, task, method, type)));
}

$Stream* JavadocHelper$OnDemandJavadocHelper::superTypeForInheritDoc($JavacTask* task, $Element* type) {
	$useLocalCurrentObjectStackCache();
	$var($TypeElement, clazz, $cast($TypeElement, type));
	$var($Stream, result, interfaces(clazz));
	$assign(result, $Stream::concat(result, $($nc($(interfaces(clazz)))->flatMap(static_cast<$Function*>($$new(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superTypeForInheritDoc$4$4, this, task))))));
	$init($TypeKind);
	if ($nc($($nc(clazz)->getSuperclass()))->getKind() == $TypeKind::DECLARED) {
		$var($Element, superClass, $nc(($cast($DeclaredType, $(clazz->getSuperclass()))))->asElement());
		$assign(result, $Stream::concat(result, $($Stream::of($of(superClass)))));
		$assign(result, $Stream::concat(result, $(superTypeForInheritDoc(task, superClass))));
	}
	return result;
}

$Stream* JavadocHelper$OnDemandJavadocHelper::interfaces($TypeElement* clazz) {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($($nc($($nc(clazz)->getInterfaces()))->stream()))->filter(static_cast<$Predicate*>($$new(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$5$5)))))->map(static_cast<$Function*>($$new(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$6$6)));
}

$DocTree* JavadocHelper$OnDemandJavadocHelper::parseBlockTag($JavacTask* task, $String* blockTag) {
	$useLocalCurrentObjectStackCache();
	$var($DocCommentTree, dc, $cast($DocCommentTree, $nc($(parseDocComment(task, blockTag)))->fst));
	return $cast($DocTree, $nc($($nc(dc)->getBlockTags()))->get(0));
}

$Pair* JavadocHelper$OnDemandJavadocHelper::parseDocComment($JavacTask* task, $String* javadoc) {
	$useLocalCurrentObjectStackCache();
	$var($DocTrees, trees, $DocTrees::instance(static_cast<$JavaCompiler$CompilationTask*>(task)));
	try {
		$init($JavaFileObject$Kind);
		$var($SimpleJavaFileObject, fo, $new($JavadocHelper$OnDemandJavadocHelper$2, this, $$new($URI, "mem://doc.html"_s), $JavaFileObject$Kind::HTML, javadoc));
		$var($DocCommentTree, tree, $nc(trees)->getDocCommentTree(static_cast<$FileObject*>(fo)));
		int32_t offset = (int32_t)$nc($($cast($DocSourcePositions, trees->getSourcePositions())))->getStartPosition(nullptr, tree, tree);
		offset += "<body>"_s->length();
		return $Pair::of(tree, $($Integer::valueOf(offset)));
	} catch ($URISyntaxException& ex) {
		$throwNew($IllegalStateException, static_cast<$Throwable*>(ex));
	}
	$shouldNotReachHere();
}

$String* JavadocHelper$OnDemandJavadocHelper::getThrownException($JavacTask* task, $TreePath* rootOn, $DocCommentTree* comment, $ThrowsTree* tt) {
	$useLocalCurrentObjectStackCache();
	$var($DocTrees, trees, $DocTrees::instance(static_cast<$JavaCompiler$CompilationTask*>(task)));
	$var($DocTreePath, var$0, $new($DocTreePath, rootOn, comment));
	$var($Element, exc, $nc(trees)->getElement($$new($DocTreePath, var$0, $(static_cast<$DocTree*>($nc(tt)->getExceptionName())))));
	return exc != nullptr ? $nc($of(exc))->toString() : ($String*)nullptr;
}

$Pair* JavadocHelper$OnDemandJavadocHelper::getSourceElement($JavacTask* origin, $Element* el) {
	$useLocalCurrentObjectStackCache();
	$var($String, handle, elementSignature(el));
	$var($Pair, cached, $cast($Pair, $nc(this->signature2Source)->get(handle)));
	if (cached != nullptr) {
		return cached->fst != nullptr ? cached : ($Pair*)nullptr;
	}
	$var($TypeElement, type, topLevelType(el));
	if (type == nullptr) {
		return nullptr;
	}
	$var($Elements, elements, $nc(origin)->getElements());
	$var($String, binaryName, $nc($of($($nc(elements)->getBinaryName(type))))->toString());
	$var($ModuleElement, module, elements->getModuleOf(static_cast<$Element*>(static_cast<$Parameterizable*>(type))));
	$var($String, moduleName, module == nullptr || $nc(module)->isUnnamed() ? ($String*)nullptr : $nc($of($($nc(module)->getQualifiedName())))->toString());
	$var($Pair, source, findSource(moduleName, binaryName));
	if (source == nullptr) {
		return nullptr;
	}
	fillElementCache($cast($JavacTask, $nc(source)->fst), $cast($CompilationUnitTree, source->snd));
	$assign(cached, $cast($Pair, $nc(this->signature2Source)->get(handle)));
	if (cached != nullptr) {
		return cached;
	} else {
		$nc(this->signature2Source)->put(handle, $($Pair::of(nullptr, nullptr)));
		return nullptr;
	}
}

$String* JavadocHelper$OnDemandJavadocHelper::elementSignature($Element* el) {
	$useLocalCurrentObjectStackCache();
	$init($JavadocHelper$2);
	{
		$var($StringBuilder, header, nullptr)
		$var($String, sep, nullptr)
		$var($ExecutableElement, method, nullptr)
		switch ($nc($JavadocHelper$2::$SwitchMap$javax$lang$model$element$ElementKind)->get($nc(($($nc(el)->getKind())))->ordinal())) {
		case 1:
			{}
		case 2:
			{}
		case 3:
			{}
		case 4:
			{
				return $nc($of($($nc(($cast($TypeElement, el)))->getQualifiedName())))->toString();
			}
		case 5:
			{
				$var($String, var$2, $$str({$(elementSignature($(el->getEnclosingElement()))), "."_s}));
				$var($String, var$1, $$concat(var$2, $(el->getSimpleName())));
				$var($String, var$0, $$concat(var$1, ":"));
				return $concat(var$0, $(el->asType()));
			}
		case 6:
			{
				$var($String, var$3, $$str({$(elementSignature($(el->getEnclosingElement()))), "."_s}));
				return $concat(var$3, $(el->getSimpleName()));
			}
		case 7:
			{}
		case 8:
			{}
		case 9:
			{}
		case 10:
			{
				$var($String, var$4, $$str({$(el->getSimpleName()), ":"_s}));
				return $concat(var$4, $(el->asType()));
			}
		case 11:
			{}
		case 12:
			{
				$assign(header, $new($StringBuilder));
				$nc(header)->append($(elementSignature($(el->getEnclosingElement()))));
				$init($ElementKind);
				if (el->getKind() == $ElementKind::METHOD) {
					$nc(header)->append("."_s);
					header->append($(static_cast<$CharSequence*>(el->getSimpleName())));
				}
				$nc(header)->append("("_s);
				$assign(sep, ""_s);
				$assign(method, $cast($ExecutableElement, el));
				{
					$var($Iterator, i, $nc($($nc(method)->getParameters()))->iterator());
					for (; $nc(i)->hasNext();) {
						$var($VariableElement, p, $cast($VariableElement, i->next()));
						$nc(header)->append(sep);
						header->append($($of($nc(p)->asType())));
						$assign(sep, ", "_s);
					}
				}
				$nc(header)->append(")"_s);
				return $nc(header)->toString();
			}
		default:
			{
				return $of(el)->toString();
			}
		}
	}
}

$TypeElement* JavadocHelper$OnDemandJavadocHelper::topLevelType($Element* el$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Element, el, el$renamed);
	$init($ElementKind);
	if ($nc(el)->getKind() == $ElementKind::PACKAGE) {
		return nullptr;
	}
	while (el != nullptr && $nc($(el->getEnclosingElement()))->getKind() != $ElementKind::PACKAGE) {
		$assign(el, el->getEnclosingElement());
	}
	bool var$0 = el != nullptr;
	if (var$0) {
		bool var$1 = $nc($(el->getKind()))->isClass();
		var$0 = (var$1 || $nc($(el->getKind()))->isInterface());
	}
	return var$0 ? $cast($TypeElement, el) : ($TypeElement*)nullptr;
}

void JavadocHelper$OnDemandJavadocHelper::fillElementCache($JavacTask* task, $CompilationUnitTree* cut) {
	$useLocalCurrentObjectStackCache();
	$var($Trees, trees, $Trees::instance(static_cast<$JavaCompiler$CompilationTask*>(task)));
	$$new($JavadocHelper$OnDemandJavadocHelper$3, this, trees, task)->scan(static_cast<$Tree*>(cut), ($Object*)nullptr);
}

$Pair* JavadocHelper$OnDemandJavadocHelper::findSource($String* moduleName, $String* binaryName) {
	$useLocalCurrentObjectStackCache();
	$init($StandardLocation);
	$init($JavaFileObject$Kind);
	$var($JavaFileObject, jfo, $nc(this->fm)->getJavaFileForInput($StandardLocation::SOURCE_PATH, binaryName, $JavaFileObject$Kind::SOURCE));
	if (jfo == nullptr) {
		return nullptr;
	}
	$var($List, jfos, $Arrays::asList($$new($JavaFileObjectArray, {jfo})));
	$var($JavaFileManager, patchFM, moduleName != nullptr ? static_cast<$JavaFileManager*>($new($JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager, this->baseFileManager, jfo, moduleName)) : this->baseFileManager);
	$init($JavadocHelper);
	$var($JavacTaskImpl, task, $cast($JavacTaskImpl, $nc($JavadocHelper::compiler)->getTask(nullptr, patchFM, static_cast<$DiagnosticListener*>($$new(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$findSource$7$7)), nullptr, nullptr, jfos)));
	$var($Iterable, cuts, $nc(task)->parse());
	task->enter();
	return $Pair::of(task, $cast($CompilationUnitTree, $($nc($($nc(cuts)->iterator()))->next())));
}

void JavadocHelper$OnDemandJavadocHelper::close() {
	$nc(this->fm)->close();
}

void JavadocHelper$OnDemandJavadocHelper::lambda$findSource$7($Diagnostic* d) {
	$init(JavadocHelper$OnDemandJavadocHelper);
}

$Element* JavadocHelper$OnDemandJavadocHelper::lambda$interfaces$6($TypeMirror* tm) {
	$init(JavadocHelper$OnDemandJavadocHelper);
	return $nc(($cast($DeclaredType, tm)))->asElement();
}

bool JavadocHelper$OnDemandJavadocHelper::lambda$interfaces$5($TypeMirror* tm) {
	$init(JavadocHelper$OnDemandJavadocHelper);
	$init($TypeKind);
	return $nc(tm)->getKind() == $TypeKind::DECLARED;
}

$Stream* JavadocHelper$OnDemandJavadocHelper::lambda$superTypeForInheritDoc$4($JavacTask* task, $Element* el) {
	return superTypeForInheritDoc(task, el);
}

bool JavadocHelper$OnDemandJavadocHelper::lambda$superMethodsForInheritDoc$3($JavacTask* task, $ExecutableElement* method, $TypeElement* type, $ExecutableElement* supMethod) {
	$init(JavadocHelper$OnDemandJavadocHelper);
	return $nc($($nc(task)->getElements()))->overrides(method, supMethod, type);
}

$Stream* JavadocHelper$OnDemandJavadocHelper::lambda$superMethodsForInheritDoc$2($Element* sup) {
	$init(JavadocHelper$OnDemandJavadocHelper);
	$useLocalCurrentObjectStackCache();
	return $nc($($ElementFilter::methodsIn($(static_cast<$Iterable*>($nc(sup)->getEnclosedElements())))))->stream();
}

int32_t JavadocHelper$OnDemandJavadocHelper::lambda$getResolvedDocComment$1($ints* span1, $ints* span2) {
	$init(JavadocHelper$OnDemandJavadocHelper);
	return $nc(span1)->get(0) != $nc(span2)->get(0) ? $nc(span2)->get(0) - $nc(span1)->get(0) : span2->get(1) - span1->get(0);
}

$Iterator* JavadocHelper$OnDemandJavadocHelper::lambda$getResolvedDocComment$0($JavacTask* task, $Element* element) {
	$useLocalCurrentObjectStackCache();
	return $nc($(superTypeForInheritDoc(task, $($nc(element)->getEnclosingElement()))))->iterator();
}

JavadocHelper$OnDemandJavadocHelper::JavadocHelper$OnDemandJavadocHelper() {
}

$Class* JavadocHelper$OnDemandJavadocHelper::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$0::classInfo$.name)) {
			return JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$0::load$(name, initialize);
		}
		if (name->equals(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$1$1::classInfo$.name)) {
			return JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$1$1::load$(name, initialize);
		}
		if (name->equals(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$2$2::classInfo$.name)) {
			return JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$2$2::load$(name, initialize);
		}
		if (name->equals(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$3$3::classInfo$.name)) {
			return JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$3$3::load$(name, initialize);
		}
		if (name->equals(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superTypeForInheritDoc$4$4::classInfo$.name)) {
			return JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superTypeForInheritDoc$4$4::load$(name, initialize);
		}
		if (name->equals(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$5$5::classInfo$.name)) {
			return JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$5$5::load$(name, initialize);
		}
		if (name->equals(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$6$6::classInfo$.name)) {
			return JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$6$6::load$(name, initialize);
		}
		if (name->equals(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$findSource$7$7::classInfo$.name)) {
			return JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$findSource$7$7::load$(name, initialize);
		}
	}
	$loadClass(JavadocHelper$OnDemandJavadocHelper, name, initialize, &_JavadocHelper$OnDemandJavadocHelper_ClassInfo_, allocate$JavadocHelper$OnDemandJavadocHelper);
	return class$;
}

$Class* JavadocHelper$OnDemandJavadocHelper::class$ = nullptr;

			} // doc
		} // shellsupport
	} // internal
} // jdk