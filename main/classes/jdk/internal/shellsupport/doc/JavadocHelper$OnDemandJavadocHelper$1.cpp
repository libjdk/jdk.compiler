#include <jdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$1.h>

#include <com/sun/source/doctree/DocCommentTree.h>
#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTree.h>
#include <com/sun/source/doctree/IdentifierTree.h>
#include <com/sun/source/doctree/InheritDocTree.h>
#include <com/sun/source/doctree/InlineTagTree.h>
#include <com/sun/source/doctree/ParamTree.h>
#include <com/sun/source/doctree/ReturnTree.h>
#include <com/sun/source/doctree/ThrowsTree.h>
#include <com/sun/source/tree/CompilationUnitTree.h>
#include <com/sun/source/util/DocSourcePositions.h>
#include <com/sun/source/util/DocTreeScanner.h>
#include <com/sun/source/util/JavacTask.h>
#include <com/sun/source/util/TreePath.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Iterable.h>
#include <java/lang/Math.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Comparator.h>
#include <java/util/HashSet.h>
#include <java/util/IdentityHashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/Stack.h>
#include <java/util/function/Function.h>
#include <java/util/stream/Stream.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ElementKind.h>
#include <javax/lang/model/element/ExecutableElement.h>
#include <javax/lang/model/element/Name.h>
#include <javax/lang/model/element/VariableElement.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jdk/internal/shellsupport/doc/JavadocHelper$2.h>
#include <jdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$1$1.h>
#include <jdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$1$2.h>
#include <jdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$1$3.h>
#include <jdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef METHOD
#undef MIN_VALUE
#undef PARAM
#undef RETURN
#undef THROWS

using $DocTree$KindArray = $Array<::com::sun::source::doctree::DocTree$Kind>;
using $IOExceptionArray = $Array<::java::io::IOException>;
using $DocCommentTree = ::com::sun::source::doctree::DocCommentTree;
using $DocTree = ::com::sun::source::doctree::DocTree;
using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $IdentifierTree = ::com::sun::source::doctree::IdentifierTree;
using $InheritDocTree = ::com::sun::source::doctree::InheritDocTree;
using $InlineTagTree = ::com::sun::source::doctree::InlineTagTree;
using $ParamTree = ::com::sun::source::doctree::ParamTree;
using $ReturnTree = ::com::sun::source::doctree::ReturnTree;
using $ThrowsTree = ::com::sun::source::doctree::ThrowsTree;
using $CompilationUnitTree = ::com::sun::source::tree::CompilationUnitTree;
using $DocSourcePositions = ::com::sun::source::util::DocSourcePositions;
using $DocTreeScanner = ::com::sun::source::util::DocTreeScanner;
using $JavacTask = ::com::sun::source::util::JavacTask;
using $TreePath = ::com::sun::source::util::TreePath;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Iterable = ::java::lang::Iterable;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Comparator = ::java::util::Comparator;
using $HashSet = ::java::util::HashSet;
using $IdentityHashMap = ::java::util::IdentityHashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $Stack = ::java::util::Stack;
using $Function = ::java::util::function::Function;
using $BaseStream = ::java::util::stream::BaseStream;
using $Stream = ::java::util::stream::Stream;
using $Element = ::javax::lang::model::element::Element;
using $ElementKind = ::javax::lang::model::element::ElementKind;
using $ExecutableElement = ::javax::lang::model::element::ExecutableElement;
using $Name = ::javax::lang::model::element::Name;
using $VariableElement = ::javax::lang::model::element::VariableElement;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $JavadocHelper$2 = ::jdk::internal::shellsupport::doc::JavadocHelper$2;
using $JavadocHelper$OnDemandJavadocHelper = ::jdk::internal::shellsupport::doc::JavadocHelper$OnDemandJavadocHelper;
using $JavadocHelper$OnDemandJavadocHelper$1$1 = ::jdk::internal::shellsupport::doc::JavadocHelper$OnDemandJavadocHelper$1$1;
using $JavadocHelper$OnDemandJavadocHelper$1$2 = ::jdk::internal::shellsupport::doc::JavadocHelper$OnDemandJavadocHelper$1$2;
using $JavadocHelper$OnDemandJavadocHelper$1$3 = ::jdk::internal::shellsupport::doc::JavadocHelper$OnDemandJavadocHelper$1$3;

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

class JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitDocComment$0 : public $Function {
	$class(JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitDocComment$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* param) override {
		 return $of(JavadocHelper$OnDemandJavadocHelper$1::lambda$visitDocComment$0($cast($VariableElement, param)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitDocComment$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitDocComment$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitDocComment$0::*)()>(&JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitDocComment$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitDocComment$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitDocComment$0",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitDocComment$0::load$($String* name, bool initialize) {
	$loadClass(JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitDocComment$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitDocComment$0::class$ = nullptr;

class JavadocHelper$OnDemandJavadocHelper$1$$Lambda$toString$1 : public $Function {
	$class(JavadocHelper$OnDemandJavadocHelper$1$$Lambda$toString$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($TypeMirror, inst$)->toString());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavadocHelper$OnDemandJavadocHelper$1$$Lambda$toString$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavadocHelper$OnDemandJavadocHelper$1$$Lambda$toString$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavadocHelper$OnDemandJavadocHelper$1$$Lambda$toString$1::*)()>(&JavadocHelper$OnDemandJavadocHelper$1$$Lambda$toString$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavadocHelper$OnDemandJavadocHelper$1$$Lambda$toString$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$1$$Lambda$toString$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* JavadocHelper$OnDemandJavadocHelper$1$$Lambda$toString$1::load$($String* name, bool initialize) {
	$loadClass(JavadocHelper$OnDemandJavadocHelper$1$$Lambda$toString$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavadocHelper$OnDemandJavadocHelper$1$$Lambda$toString$1::class$ = nullptr;

class JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitInheritDoc$1$2 : public $Iterable {
	$class(JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitInheritDoc$1$2, $NO_CLASS_INIT, $Iterable)
public:
	void init$(JavadocHelper$OnDemandJavadocHelper$1* inst, $JavacTask* task, $ExecutableElement* executableElement) {
		$set(this, inst$, inst);
		$set(this, task, task);
		$set(this, executableElement, executableElement);
	}
	virtual $Iterator* iterator() override {
		 return $nc(inst$)->lambda$visitInheritDoc$1(task, executableElement);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitInheritDoc$1$2>());
	}
	JavadocHelper$OnDemandJavadocHelper$1* inst$ = nullptr;
	$JavacTask* task = nullptr;
	$ExecutableElement* executableElement = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitInheritDoc$1$2::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitInheritDoc$1$2, inst$)},
	{"task", "Lcom/sun/source/util/JavacTask;", nullptr, $PUBLIC, $field(JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitInheritDoc$1$2, task)},
	{"executableElement", "Ljavax/lang/model/element/ExecutableElement;", nullptr, $PUBLIC, $field(JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitInheritDoc$1$2, executableElement)},
	{}
};
$MethodInfo JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitInheritDoc$1$2::methodInfos[3] = {
	{"<init>", "(Ljdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$1;Lcom/sun/source/util/JavacTask;Ljavax/lang/model/element/ExecutableElement;)V", nullptr, $PUBLIC, $method(static_cast<void(JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitInheritDoc$1$2::*)(JavadocHelper$OnDemandJavadocHelper$1*,$JavacTask*,$ExecutableElement*)>(&JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitInheritDoc$1$2::init$))},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitInheritDoc$1$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitInheritDoc$1$2",
	"java.lang.Object",
	"java.lang.Iterable",
	fieldInfos,
	methodInfos
};
$Class* JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitInheritDoc$1$2::load$($String* name, bool initialize) {
	$loadClass(JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitInheritDoc$1$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitInheritDoc$1$2::class$ = nullptr;

class JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitInheritDoc$2$3 : public $Function {
	$class(JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitInheritDoc$2$3, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return $of(JavadocHelper$OnDemandJavadocHelper$1::lambda$visitInheritDoc$2($cast($ints, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitInheritDoc$2$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitInheritDoc$2$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitInheritDoc$2$3::*)()>(&JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitInheritDoc$2$3::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitInheritDoc$2$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitInheritDoc$2$3",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitInheritDoc$2$3::load$($String* name, bool initialize) {
	$loadClass(JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitInheritDoc$2$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitInheritDoc$2$3::class$ = nullptr;

class JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$insertTag$4$4 : public $Comparator {
	$class(JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$insertTag$4$4, $NO_CLASS_INIT, $Comparator)
public:
	void init$(JavadocHelper$OnDemandJavadocHelper$1* inst, $DocTree* toInsert, $List* parameters, $List* throwsTypes, $JavacTask* task, $TreePath* el, $DocCommentTree* docCommentTree) {
		$set(this, inst$, inst);
		$set(this, toInsert, toInsert);
		$set(this, parameters, parameters);
		$set(this, throwsTypes, throwsTypes);
		$set(this, task, task);
		$set(this, el, el);
		$set(this, docCommentTree, docCommentTree);
	}
	virtual int32_t compare(Object$* tag1, Object$* tag2) override {
		 return $nc(inst$)->lambda$insertTag$4(toInsert, parameters, throwsTypes, task, el, docCommentTree, $cast($DocTree, tag1), $cast($DocTree, tag2));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$insertTag$4$4>());
	}
	JavadocHelper$OnDemandJavadocHelper$1* inst$ = nullptr;
	$DocTree* toInsert = nullptr;
	$List* parameters = nullptr;
	$List* throwsTypes = nullptr;
	$JavacTask* task = nullptr;
	$TreePath* el = nullptr;
	$DocCommentTree* docCommentTree = nullptr;
	static $FieldInfo fieldInfos[8];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$insertTag$4$4::fieldInfos[8] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$insertTag$4$4, inst$)},
	{"toInsert", "Lcom/sun/source/doctree/DocTree;", nullptr, $PUBLIC, $field(JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$insertTag$4$4, toInsert)},
	{"parameters", "Ljava/util/List;", nullptr, $PUBLIC, $field(JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$insertTag$4$4, parameters)},
	{"throwsTypes", "Ljava/util/List;", nullptr, $PUBLIC, $field(JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$insertTag$4$4, throwsTypes)},
	{"task", "Lcom/sun/source/util/JavacTask;", nullptr, $PUBLIC, $field(JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$insertTag$4$4, task)},
	{"el", "Lcom/sun/source/util/TreePath;", nullptr, $PUBLIC, $field(JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$insertTag$4$4, el)},
	{"docCommentTree", "Lcom/sun/source/doctree/DocCommentTree;", nullptr, $PUBLIC, $field(JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$insertTag$4$4, docCommentTree)},
	{}
};
$MethodInfo JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$insertTag$4$4::methodInfos[3] = {
	{"<init>", "(Ljdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$1;Lcom/sun/source/doctree/DocTree;Ljava/util/List;Ljava/util/List;Lcom/sun/source/util/JavacTask;Lcom/sun/source/util/TreePath;Lcom/sun/source/doctree/DocCommentTree;)V", nullptr, $PUBLIC, $method(static_cast<void(JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$insertTag$4$4::*)(JavadocHelper$OnDemandJavadocHelper$1*,$DocTree*,$List*,$List*,$JavacTask*,$TreePath*,$DocCommentTree*)>(&JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$insertTag$4$4::init$))},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$insertTag$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$insertTag$4$4",
	"java.lang.Object",
	"java.util.Comparator",
	fieldInfos,
	methodInfos
};
$Class* JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$insertTag$4$4::load$($String* name, bool initialize) {
	$loadClass(JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$insertTag$4$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$insertTag$4$4::class$ = nullptr;

$FieldInfo _JavadocHelper$OnDemandJavadocHelper$1_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper;", nullptr, $FINAL | $SYNTHETIC, $field(JavadocHelper$OnDemandJavadocHelper$1, this$0)},
	{"val$docComment", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(JavadocHelper$OnDemandJavadocHelper$1, val$docComment)},
	{"val$replace", "Ljava/util/Map;", nullptr, $FINAL | $SYNTHETIC, $field(JavadocHelper$OnDemandJavadocHelper$1, val$replace)},
	{"val$sp", "Lcom/sun/source/util/DocSourcePositions;", nullptr, $FINAL | $SYNTHETIC, $field(JavadocHelper$OnDemandJavadocHelper$1, val$sp)},
	{"val$exception", "[Ljava/io/IOException;", nullptr, $FINAL | $SYNTHETIC, $field(JavadocHelper$OnDemandJavadocHelper$1, val$exception)},
	{"val$docCommentTree", "Lcom/sun/source/doctree/DocCommentTree;", nullptr, $FINAL | $SYNTHETIC, $field(JavadocHelper$OnDemandJavadocHelper$1, val$docCommentTree)},
	{"val$el", "Lcom/sun/source/util/TreePath;", nullptr, $FINAL | $SYNTHETIC, $field(JavadocHelper$OnDemandJavadocHelper$1, val$el)},
	{"val$element", "Ljavax/lang/model/element/Element;", nullptr, $FINAL | $SYNTHETIC, $field(JavadocHelper$OnDemandJavadocHelper$1, val$element)},
	{"val$task", "Lcom/sun/source/util/JavacTask;", nullptr, $FINAL | $SYNTHETIC, $field(JavadocHelper$OnDemandJavadocHelper$1, val$task)},
	{"val$offset", "I", nullptr, $FINAL | $SYNTHETIC, $field(JavadocHelper$OnDemandJavadocHelper$1, val$offset)},
	{"interestingParent", "Ljava/util/Stack;", "Ljava/util/Stack<Lcom/sun/source/doctree/DocTree;>;", $PRIVATE, $field(JavadocHelper$OnDemandJavadocHelper$1, interestingParent)},
	{"dcTree", "Lcom/sun/source/doctree/DocCommentTree;", nullptr, $PRIVATE, $field(JavadocHelper$OnDemandJavadocHelper$1, dcTree)},
	{"inherited", "Ljava/lang/String;", nullptr, $PRIVATE, $field(JavadocHelper$OnDemandJavadocHelper$1, inherited)},
	{"inheritedJavacTask", "Lcom/sun/source/util/JavacTask;", nullptr, $PRIVATE, $field(JavadocHelper$OnDemandJavadocHelper$1, inheritedJavacTask)},
	{"inheritedTreePath", "Lcom/sun/source/util/TreePath;", nullptr, $PRIVATE, $field(JavadocHelper$OnDemandJavadocHelper$1, inheritedTreePath)},
	{"syntheticTrees", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/source/doctree/DocTree;Ljava/lang/String;>;", $PRIVATE, $field(JavadocHelper$OnDemandJavadocHelper$1, syntheticTrees)},
	{"insertPos", "J", nullptr, $PRIVATE, $field(JavadocHelper$OnDemandJavadocHelper$1, insertPos)},
	{"inSynthetic", "Z", nullptr, $PRIVATE, $field(JavadocHelper$OnDemandJavadocHelper$1, inSynthetic)},
	{"tagOrder", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/source/doctree/DocTree$Kind;>;", $PRIVATE | $FINAL, $field(JavadocHelper$OnDemandJavadocHelper$1, tagOrder)},
	{}
};

$MethodInfo _JavadocHelper$OnDemandJavadocHelper$1_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper;ILcom/sun/source/util/JavacTask;Ljavax/lang/model/element/Element;Lcom/sun/source/util/TreePath;Lcom/sun/source/doctree/DocCommentTree;[Ljava/io/IOException;Lcom/sun/source/util/DocSourcePositions;Ljava/util/Map;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(JavadocHelper$OnDemandJavadocHelper$1::*)($JavadocHelper$OnDemandJavadocHelper*,int32_t,$JavacTask*,$Element*,$TreePath*,$DocCommentTree*,$IOExceptionArray*,$DocSourcePositions*,$Map*,$String*)>(&JavadocHelper$OnDemandJavadocHelper$1::init$))},
	{"insertTag", "(Ljava/util/List;Lcom/sun/source/doctree/DocTree;Ljava/util/List;Ljava/util/List;)V", "(Ljava/util/List<Lcom/sun/source/doctree/DocTree;>;Lcom/sun/source/doctree/DocTree;Ljava/util/List<Ljava/lang/String;>;Ljava/util/List<Ljava/lang/String;>;)V", $PRIVATE, $method(static_cast<void(JavadocHelper$OnDemandJavadocHelper$1::*)($List*,$DocTree*,$List*,$List*)>(&JavadocHelper$OnDemandJavadocHelper$1::insertTag))},
	{"lambda$insertTag$4", "(Lcom/sun/source/doctree/DocTree;Ljava/util/List;Ljava/util/List;Lcom/sun/source/util/JavacTask;Lcom/sun/source/util/TreePath;Lcom/sun/source/doctree/DocCommentTree;Lcom/sun/source/doctree/DocTree;Lcom/sun/source/doctree/DocTree;)I", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<int32_t(JavadocHelper$OnDemandJavadocHelper$1::*)($DocTree*,$List*,$List*,$JavacTask*,$TreePath*,$DocCommentTree*,$DocTree*,$DocTree*)>(&JavadocHelper$OnDemandJavadocHelper$1::lambda$insertTag$4))},
	{"lambda$visitDocComment$0", "(Ljavax/lang/model/element/VariableElement;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($VariableElement*)>(&JavadocHelper$OnDemandJavadocHelper$1::lambda$visitDocComment$0))},
	{"lambda$visitInheritDoc$1", "(Lcom/sun/source/util/JavacTask;Ljavax/lang/model/element/ExecutableElement;)Ljava/util/Iterator;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Iterator*(JavadocHelper$OnDemandJavadocHelper$1::*)($JavacTask*,$ExecutableElement*)>(&JavadocHelper$OnDemandJavadocHelper$1::lambda$visitInheritDoc$1))},
	{"lambda$visitInheritDoc$2", "([I)Ljava/util/List;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$List*(*)($ints*)>(&JavadocHelper$OnDemandJavadocHelper$1::lambda$visitInheritDoc$2))},
	{"scan", "(Lcom/sun/source/doctree/DocTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC},
	{"scan", "(Lcom/sun/source/doctree/DocTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitDocComment", "(Lcom/sun/source/doctree/DocCommentTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC},
	{"visitDocComment", "(Lcom/sun/source/doctree/DocCommentTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitInheritDoc", "(Lcom/sun/source/doctree/InheritDocTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC},
	{"visitInheritDoc", "(Lcom/sun/source/doctree/InheritDocTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitParam", "(Lcom/sun/source/doctree/ParamTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC},
	{"visitParam", "(Lcom/sun/source/doctree/ParamTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitReturn", "(Lcom/sun/source/doctree/ReturnTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC},
	{"visitReturn", "(Lcom/sun/source/doctree/ReturnTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitThrows", "(Lcom/sun/source/doctree/ThrowsTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC},
	{"visitThrows", "(Lcom/sun/source/doctree/ThrowsTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _JavadocHelper$OnDemandJavadocHelper$1_EnclosingMethodInfo_ = {
	"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper",
	"getResolvedDocComment",
	"(Lcom/sun/source/util/JavacTask;Lcom/sun/source/util/TreePath;)Ljava/lang/String;"
};

$InnerClassInfo _JavadocHelper$OnDemandJavadocHelper$1_InnerClassesInfo_[] = {
	{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper", "jdk.internal.shellsupport.doc.JavadocHelper", "OnDemandJavadocHelper", $PRIVATE | $STATIC | $FINAL},
	{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$1", nullptr, nullptr, 0},
	{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$1$3", nullptr, nullptr, 0},
	{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$1$2", nullptr, nullptr, 0},
	{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JavadocHelper$OnDemandJavadocHelper$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$1",
	"com.sun.source.util.DocTreeScanner",
	nullptr,
	_JavadocHelper$OnDemandJavadocHelper$1_FieldInfo_,
	_JavadocHelper$OnDemandJavadocHelper$1_MethodInfo_,
	"Lcom/sun/source/util/DocTreeScanner<Ljava/lang/Void;Ljava/lang/Void;>;",
	&_JavadocHelper$OnDemandJavadocHelper$1_EnclosingMethodInfo_,
	_JavadocHelper$OnDemandJavadocHelper$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.shellsupport.doc.JavadocHelper"
};

$Object* allocate$JavadocHelper$OnDemandJavadocHelper$1($Class* clazz) {
	return $of($alloc(JavadocHelper$OnDemandJavadocHelper$1));
}

void JavadocHelper$OnDemandJavadocHelper$1::init$($JavadocHelper$OnDemandJavadocHelper* this$0, int32_t val$offset, $JavacTask* val$task, $Element* val$element, $TreePath* val$el, $DocCommentTree* val$docCommentTree, $IOExceptionArray* val$exception, $DocSourcePositions* val$sp, $Map* val$replace, $String* val$docComment) {
	$set(this, this$0, this$0);
	this->val$offset = val$offset;
	$set(this, val$task, val$task);
	$set(this, val$element, val$element);
	$set(this, val$el, val$el);
	$set(this, val$docCommentTree, val$docCommentTree);
	$set(this, val$exception, val$exception);
	$set(this, val$sp, val$sp);
	$set(this, val$replace, val$replace);
	$set(this, val$docComment, val$docComment);
	$DocTreeScanner::init$();
	$set(this, interestingParent, $new($Stack));
	$set(this, syntheticTrees, $new($IdentityHashMap));
	this->insertPos = this->val$offset;
	$init($DocTree$Kind);
	$set(this, tagOrder, $Arrays::asList($$new($DocTree$KindArray, {
		$DocTree$Kind::PARAM,
		$DocTree$Kind::THROWS,
		$DocTree$Kind::RETURN
	})));
}

$Void* JavadocHelper$OnDemandJavadocHelper$1::visitDocComment($DocCommentTree* node, $Void* p) {
	$useLocalCurrentObjectStackCache();
	$set(this, dcTree, node);
	$nc(this->interestingParent)->push(node);
	{
		$var($Throwable, var$0, nullptr);
		$var($Void, var$2, nullptr);
		bool return$1 = false;
		try {
			if ($nc($($nc(node)->getFullBody()))->isEmpty()) {
				$var($DocCommentTree, dc, $cast($DocCommentTree, $nc($(this->this$0->parseDocComment(this->val$task, "{@inheritDoc}"_s)))->fst));
				$nc(this->syntheticTrees)->put(dc, "*\n"_s);
				$nc(this->interestingParent)->push(dc);
				bool prevInSynthetic = this->inSynthetic;
				{
					$var($Throwable, var$3, nullptr);
					try {
						this->inSynthetic = true;
						scan($(static_cast<$Iterable*>($nc(dc)->getFirstSentence())), $of(p));
						scan($(static_cast<$Iterable*>($nc(dc)->getBody())), $of(p));
					} catch ($Throwable& var$4) {
						$assign(var$3, var$4);
					} /*finally*/ {
						this->inSynthetic = prevInSynthetic;
						$nc(this->interestingParent)->pop();
					}
					if (var$3 != nullptr) {
						$throw(var$3);
					}
				}
			} else {
				scan($(static_cast<$Iterable*>(node->getFirstSentence())), $of(p));
				scan($(static_cast<$Iterable*>(node->getBody())), $of(p));
			}
			$var($List, augmentedBlockTags, $new($ArrayList, $(static_cast<$Collection*>($nc(node)->getBlockTags()))));
			$init($ElementKind);
			if ($nc(this->val$element)->getKind() == $ElementKind::METHOD) {
				$var($ExecutableElement, executableElement, $cast($ExecutableElement, this->val$element));
				$var($List, parameters, $nc($($nc($($nc($($nc(executableElement)->getParameters()))->stream()))->map(static_cast<$Function*>($$new(JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitDocComment$0)))))->toList());
				$var($List, throwsList, $nc($($nc($($nc($(executableElement->getThrownTypes()))->stream()))->map(static_cast<$Function*>($$new(JavadocHelper$OnDemandJavadocHelper$1$$Lambda$toString$1)))))->toList());
				$var($Set, missingParams, $new($HashSet, static_cast<$Collection*>(parameters)));
				$var($Set, missingThrows, $new($HashSet, static_cast<$Collection*>(throwsList)));
				bool hasReturn = false;
				{
					$var($Iterator, i$, augmentedBlockTags->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($DocTree, dt, $cast($DocTree, i$->next()));
						{
							$init($JavadocHelper$2);
							switch ($nc($JavadocHelper$2::$SwitchMap$com$sun$source$doctree$DocTree$Kind)->get($nc(($($nc(dt)->getKind())))->ordinal())) {
							case 1:
								{
									missingParams->remove($($nc($of($($nc($($nc(($cast($ParamTree, dt)))->getName()))->getName())))->toString()));
									break;
								}
							case 2:
								{
									missingThrows->remove($(this->this$0->getThrownException(this->val$task, this->val$el, this->val$docCommentTree, $cast($ThrowsTree, dt))));
									break;
								}
							case 3:
								{
									hasReturn = true;
									break;
								}
							}
						}
					}
				}
				{
					$var($Iterator, i$, missingParams->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($String, missingParam, $cast($String, i$->next()));
						{
							$var($DocTree, syntheticTag, this->this$0->parseBlockTag(this->val$task, $$str({"@param "_s, missingParam, " {@inheritDoc}"_s})));
							$nc(this->syntheticTrees)->put(syntheticTag, $$str({"@param "_s, missingParam, " *\n"_s}));
							insertTag(augmentedBlockTags, syntheticTag, parameters, throwsList);
						}
					}
				}
				{
					$var($Iterator, i$, missingThrows->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($String, missingThrow, $cast($String, i$->next()));
						{
							$var($DocTree, syntheticTag, this->this$0->parseBlockTag(this->val$task, $$str({"@throws "_s, missingThrow, " {@inheritDoc}"_s})));
							$nc(this->syntheticTrees)->put(syntheticTag, $$str({"@throws "_s, missingThrow, " *\n"_s}));
							insertTag(augmentedBlockTags, syntheticTag, parameters, throwsList);
						}
					}
				}
				if (!hasReturn) {
					$var($DocTree, syntheticTag, this->this$0->parseBlockTag(this->val$task, "@return {@inheritDoc}"_s));
					$nc(this->syntheticTrees)->put(syntheticTag, "@return *\n"_s);
					insertTag(augmentedBlockTags, syntheticTag, parameters, throwsList);
				}
			}
			scan(static_cast<$Iterable*>(augmentedBlockTags), $of(p));
			$assign(var$2, nullptr);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
		} $finally: {
			$nc(this->interestingParent)->pop();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Void* JavadocHelper$OnDemandJavadocHelper$1::visitParam($ParamTree* node, $Void* p) {
	$useLocalCurrentObjectStackCache();
	$nc(this->interestingParent)->push(node);
	{
		$var($Throwable, var$0, nullptr);
		$var($Void, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $cast($Void, $DocTreeScanner::visitParam(node, p)));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(this->interestingParent)->pop();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Void* JavadocHelper$OnDemandJavadocHelper$1::visitThrows($ThrowsTree* node, $Void* p) {
	$useLocalCurrentObjectStackCache();
	$nc(this->interestingParent)->push(node);
	{
		$var($Throwable, var$0, nullptr);
		$var($Void, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $cast($Void, $DocTreeScanner::visitThrows(node, p)));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(this->interestingParent)->pop();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Void* JavadocHelper$OnDemandJavadocHelper$1::visitReturn($ReturnTree* node, $Void* p) {
	$useLocalCurrentObjectStackCache();
	$nc(this->interestingParent)->push(node);
	{
		$var($Throwable, var$0, nullptr);
		$var($Void, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $cast($Void, $DocTreeScanner::visitReturn(node, p)));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(this->interestingParent)->pop();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Void* JavadocHelper$OnDemandJavadocHelper$1::visitInheritDoc($InheritDocTree* node, $Void* p) {
	$useLocalCurrentObjectStackCache();
	if (this->inherited == nullptr) {
		try {
			$init($ElementKind);
			if ($nc(this->val$element)->getKind() == $ElementKind::METHOD) {
				$var($ExecutableElement, executableElement, $cast($ExecutableElement, this->val$element));
				$var($Iterable, superMethods, static_cast<$Iterable*>($new(JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitInheritDoc$1$2, this, this->val$task, executableElement)));
				{
					$var($Iterator, i$, $nc(superMethods)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Element, supMethod, $cast($Element, i$->next()));
						{
							$var($Pair, source, this->this$0->getSourceElement(this->val$task, supMethod));
							if (source != nullptr) {
								$var($String, overriddenComment, this->this$0->getResolvedDocComment($cast($JavacTask, source->fst), $cast($TreePath, source->snd)));
								if (overriddenComment != nullptr) {
									$set(this, inheritedJavacTask, $cast($JavacTask, source->fst));
									$set(this, inheritedTreePath, $cast($TreePath, source->snd));
									$set(this, inherited, overriddenComment);
									break;
								}
							}
						}
					}
				}
			}
		} catch ($IOException& ex) {
			$nc(this->val$exception)->set(0, ex);
			return nullptr;
		}
	}
	if (this->inherited == nullptr) {
		return nullptr;
	}
	$var($Pair, parsed, this->this$0->parseDocComment(this->inheritedJavacTask, this->inherited));
	$var($DocCommentTree, inheritedDocTree, $cast($DocCommentTree, $nc(parsed)->fst));
	int32_t offset = $nc(($cast($Integer, parsed->snd)))->intValue();
	$var($List, inheritedText, $new($ArrayList));
	$var($DocTree, parent, $cast($DocTree, $nc(this->interestingParent)->peek()));
	$init($JavadocHelper$2);
	{
		$var($String, paramName, nullptr)
		$var($String, thrownName, nullptr)
		switch ($nc($JavadocHelper$2::$SwitchMap$com$sun$source$doctree$DocTree$Kind)->get($nc(($($nc(parent)->getKind())))->ordinal())) {
		case 4:
			{
				inheritedText->add($($nc(inheritedDocTree)->getFullBody()));
				break;
			}
		case 1:
			{
				$assign(paramName, $nc($of($($nc($($nc(($cast($ParamTree, parent)))->getName()))->getName())))->toString());
				$$new($JavadocHelper$OnDemandJavadocHelper$1$1, this, paramName, inheritedText)->scan(static_cast<$DocTree*>(inheritedDocTree), ($Object*)nullptr);
				break;
			}
		case 2:
			{
				$assign(thrownName, this->this$0->getThrownException(this->val$task, this->val$el, this->val$docCommentTree, $cast($ThrowsTree, parent)));
				$$new($JavadocHelper$OnDemandJavadocHelper$1$2, this, inheritedDocTree, thrownName, inheritedText)->scan(static_cast<$DocTree*>(inheritedDocTree), ($Object*)nullptr);
				break;
			}
		case 3:
			{
				$$new($JavadocHelper$OnDemandJavadocHelper$1$3, this, inheritedText)->scan(static_cast<$DocTree*>(inheritedDocTree), ($Object*)nullptr);
				break;
			}
		}
	}
	if (!inheritedText->isEmpty()) {
		int64_t start = $Long::MAX_VALUE;
		int64_t end = $Long::MIN_VALUE;
		{
			$var($Iterator, i$, $nc(($cast($List, $(inheritedText->get(0)))))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($DocTree, t, $cast($DocTree, i$->next()));
				{
					start = $Math::min(start, $nc(this->val$sp)->getStartPosition(nullptr, inheritedDocTree, t) - offset);
					end = $Math::max(end, $nc(this->val$sp)->getEndPosition(nullptr, inheritedDocTree, t) - offset);
				}
			}
		}
		$var($String, text, end >= 0 ? $nc(this->inherited)->substring((int32_t)start, (int32_t)end) : ""_s);
		if ($nc(this->syntheticTrees)->containsKey(parent)) {
			$var($ints, span, $new($ints, {
				(int32_t)this->insertPos,
				(int32_t)this->insertPos
			}));
			$nc(($cast($List, $($nc(this->val$replace)->computeIfAbsent(span, static_cast<$Function*>($$new(JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitInheritDoc$2$3)))))))->add($($nc(($cast($String, $($nc(this->syntheticTrees)->get(parent)))))->replace(static_cast<$CharSequence*>("*"_s), static_cast<$CharSequence*>(text))));
		} else {
			int64_t inheritedStart = $nc(this->val$sp)->getStartPosition(nullptr, this->dcTree, node);
			int64_t inheritedEnd = $nc(this->val$sp)->getEndPosition(nullptr, this->dcTree, node);
			$var($ints, span, $new($ints, {
				(int32_t)inheritedStart,
				(int32_t)inheritedEnd
			}));
			$nc(($cast($List, $($nc(this->val$replace)->computeIfAbsent(span, static_cast<$Function*>($$new(JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitInheritDoc$2$3)))))))->add(text);
		}
	}
	return $cast($Void, $DocTreeScanner::visitInheritDoc(node, p));
}

$Void* JavadocHelper$OnDemandJavadocHelper$1::scan($DocTree* tree, $Void* p) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->val$exception)->get(0) != nullptr) {
		return nullptr;
	}
	bool prevInSynthetic = this->inSynthetic;
	{
		$var($Throwable, var$0, nullptr);
		$var($Void, var$2, nullptr);
		bool return$1 = false;
		try {
			this->inSynthetic |= $nc(this->syntheticTrees)->containsKey(tree);
			$assign(var$2, $cast($Void, $DocTreeScanner::scan(tree, $of(p))));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			if (!this->inSynthetic && tree != nullptr) {
				int64_t endPos = $nc(this->val$sp)->getEndPosition(nullptr, this->dcTree, tree);
				if (endPos >= 0) {
					bool var$4 = endPos - this->val$offset + 1 < $nc(this->val$docComment)->length();
					if (var$4 && $nc(this->val$docComment)->charAt((int32_t)(endPos - this->val$offset + 1)) == u'\n') {
						++endPos;
					}
					if (endPos - this->val$offset < $nc(this->val$docComment)->length()) {
						this->insertPos = endPos + 1;
					} else {
						this->insertPos = endPos;
					}
				}
			}
			this->inSynthetic = prevInSynthetic;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void JavadocHelper$OnDemandJavadocHelper$1::insertTag($List* tags, $DocTree* toInsert, $List* parameters, $List* throwsTypes) {
	$useLocalCurrentObjectStackCache();
	$var($Comparator, comp, static_cast<$Comparator*>($new(JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$insertTag$4$4, this, toInsert, parameters, throwsTypes, this->val$task, this->val$el, this->val$docCommentTree)));
	for (int32_t i = 0; i < $nc(tags)->size(); ++i) {
		if ($nc(comp)->compare($cast($DocTree, $(tags->get(i))), toInsert) >= 0) {
			tags->add(i, toInsert);
			return;
		}
	}
	$nc(tags)->add(toInsert);
}

$Object* JavadocHelper$OnDemandJavadocHelper$1::visitThrows($ThrowsTree* node, Object$* p) {
	return $of(this->visitThrows(node, $cast($Void, p)));
}

$Object* JavadocHelper$OnDemandJavadocHelper$1::visitReturn($ReturnTree* node, Object$* p) {
	return $of(this->visitReturn(node, $cast($Void, p)));
}

$Object* JavadocHelper$OnDemandJavadocHelper$1::visitParam($ParamTree* node, Object$* p) {
	return $of(this->visitParam(node, $cast($Void, p)));
}

$Object* JavadocHelper$OnDemandJavadocHelper$1::visitInheritDoc($InheritDocTree* node, Object$* p) {
	return $of(this->visitInheritDoc(node, $cast($Void, p)));
}

$Object* JavadocHelper$OnDemandJavadocHelper$1::visitDocComment($DocCommentTree* node, Object$* p) {
	return $of(this->visitDocComment(node, $cast($Void, p)));
}

$Object* JavadocHelper$OnDemandJavadocHelper$1::scan($DocTree* tree, Object$* p) {
	return $of(this->scan(tree, $cast($Void, p)));
}

int32_t JavadocHelper$OnDemandJavadocHelper$1::lambda$insertTag$4($DocTree* toInsert, $List* parameters, $List* throwsTypes, $JavacTask* task, $TreePath* el, $DocCommentTree* docCommentTree, $DocTree* tag1, $DocTree* tag2) {
	$useLocalCurrentObjectStackCache();
	if ($nc(tag1)->getKind() == $nc(tag2)->getKind()) {
		$init($JavadocHelper$2);
		switch ($nc($JavadocHelper$2::$SwitchMap$com$sun$source$doctree$DocTree$Kind)->get($nc(($($nc(toInsert)->getKind())))->ordinal())) {
		case 1:
			{
				{
					$var($ParamTree, p1, $cast($ParamTree, tag1));
					$var($ParamTree, p2, $cast($ParamTree, tag2));
					int32_t i1 = $nc(parameters)->indexOf($($nc($of($($nc($(p1->getName()))->getName())))->toString()));
					int32_t i2 = parameters->indexOf($($nc($of($($nc($(p2->getName()))->getName())))->toString()));
					return i1 - i2;
				}
			}
		case 2:
			{
				{
					$var($ThrowsTree, t1, $cast($ThrowsTree, tag1));
					$var($ThrowsTree, t2, $cast($ThrowsTree, tag2));
					int32_t i1 = $nc(throwsTypes)->indexOf($(this->this$0->getThrownException(task, el, docCommentTree, t1)));
					int32_t i2 = throwsTypes->indexOf($(this->this$0->getThrownException(task, el, docCommentTree, t2)));
					return i1 - i2;
				}
			}
		}
	}
	int32_t i1 = $nc(this->tagOrder)->indexOf($($nc(tag1)->getKind()));
	int32_t i2 = $nc(this->tagOrder)->indexOf($($nc(tag2)->getKind()));
	return i1 - i2;
}

$List* JavadocHelper$OnDemandJavadocHelper$1::lambda$visitInheritDoc$2($ints* s) {
	$init(JavadocHelper$OnDemandJavadocHelper$1);
	return $new($ArrayList);
}

$Iterator* JavadocHelper$OnDemandJavadocHelper$1::lambda$visitInheritDoc$1($JavacTask* task, $ExecutableElement* executableElement) {
	return $nc($(this->this$0->superMethodsForInheritDoc(task, executableElement)))->iterator();
}

$String* JavadocHelper$OnDemandJavadocHelper$1::lambda$visitDocComment$0($VariableElement* param) {
	$init(JavadocHelper$OnDemandJavadocHelper$1);
	return $nc($of($($nc(param)->getSimpleName())))->toString();
}

JavadocHelper$OnDemandJavadocHelper$1::JavadocHelper$OnDemandJavadocHelper$1() {
}

$Class* JavadocHelper$OnDemandJavadocHelper$1::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitDocComment$0::classInfo$.name)) {
			return JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitDocComment$0::load$(name, initialize);
		}
		if (name->equals(JavadocHelper$OnDemandJavadocHelper$1$$Lambda$toString$1::classInfo$.name)) {
			return JavadocHelper$OnDemandJavadocHelper$1$$Lambda$toString$1::load$(name, initialize);
		}
		if (name->equals(JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitInheritDoc$1$2::classInfo$.name)) {
			return JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitInheritDoc$1$2::load$(name, initialize);
		}
		if (name->equals(JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitInheritDoc$2$3::classInfo$.name)) {
			return JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$visitInheritDoc$2$3::load$(name, initialize);
		}
		if (name->equals(JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$insertTag$4$4::classInfo$.name)) {
			return JavadocHelper$OnDemandJavadocHelper$1$$Lambda$lambda$insertTag$4$4::load$(name, initialize);
		}
	}
	$loadClass(JavadocHelper$OnDemandJavadocHelper$1, name, initialize, &_JavadocHelper$OnDemandJavadocHelper$1_ClassInfo_, allocate$JavadocHelper$OnDemandJavadocHelper$1);
	return class$;
}

$Class* JavadocHelper$OnDemandJavadocHelper$1::class$ = nullptr;

			} // doc
		} // shellsupport
	} // internal
} // jdk