#include <jdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$3.h>

#include <com/sun/source/tree/ClassTree.h>
#include <com/sun/source/tree/MethodTree.h>
#include <com/sun/source/tree/VariableTree.h>
#include <com/sun/source/util/JavacTask.h>
#include <com/sun/source/util/TreePath.h>
#include <com/sun/source/util/TreePathScanner.h>
#include <com/sun/source/util/TreeScanner.h>
#include <com/sun/source/util/Trees.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <java/util/Map.h>
#include <javax/lang/model/element/Element.h>
#include <jdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper.h>
#include <jcpp.h>

using $ClassTree = ::com::sun::source::tree::ClassTree;
using $MethodTree = ::com::sun::source::tree::MethodTree;
using $VariableTree = ::com::sun::source::tree::VariableTree;
using $JavacTask = ::com::sun::source::util::JavacTask;
using $TreePath = ::com::sun::source::util::TreePath;
using $TreePathScanner = ::com::sun::source::util::TreePathScanner;
using $TreeScanner = ::com::sun::source::util::TreeScanner;
using $Trees = ::com::sun::source::util::Trees;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $Map = ::java::util::Map;
using $Element = ::javax::lang::model::element::Element;
using $JavadocHelper$OnDemandJavadocHelper = ::jdk::internal::shellsupport::doc::JavadocHelper$OnDemandJavadocHelper;

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

$FieldInfo _JavadocHelper$OnDemandJavadocHelper$3_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper;", nullptr, $FINAL | $SYNTHETIC, $field(JavadocHelper$OnDemandJavadocHelper$3, this$0)},
	{"val$task", "Lcom/sun/source/util/JavacTask;", nullptr, $FINAL | $SYNTHETIC, $field(JavadocHelper$OnDemandJavadocHelper$3, val$task)},
	{"val$trees", "Lcom/sun/source/util/Trees;", nullptr, $FINAL | $SYNTHETIC, $field(JavadocHelper$OnDemandJavadocHelper$3, val$trees)},
	{}
};

$MethodInfo _JavadocHelper$OnDemandJavadocHelper$3_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper;Lcom/sun/source/util/Trees;Lcom/sun/source/util/JavacTask;)V", nullptr, 0, $method(static_cast<void(JavadocHelper$OnDemandJavadocHelper$3::*)($JavadocHelper$OnDemandJavadocHelper*,$Trees*,$JavacTask*)>(&JavadocHelper$OnDemandJavadocHelper$3::init$))},
	{"handleDeclaration", "()V", nullptr, $PRIVATE, $method(static_cast<void(JavadocHelper$OnDemandJavadocHelper$3::*)()>(&JavadocHelper$OnDemandJavadocHelper$3::handleDeclaration))},
	{"visitClass", "(Lcom/sun/source/tree/ClassTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC},
	{"visitClass", "(Lcom/sun/source/tree/ClassTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitMethod", "(Lcom/sun/source/tree/MethodTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC},
	{"visitMethod", "(Lcom/sun/source/tree/MethodTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitVariable", "(Lcom/sun/source/tree/VariableTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC},
	{"visitVariable", "(Lcom/sun/source/tree/VariableTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _JavadocHelper$OnDemandJavadocHelper$3_EnclosingMethodInfo_ = {
	"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper",
	"fillElementCache",
	"(Lcom/sun/source/util/JavacTask;Lcom/sun/source/tree/CompilationUnitTree;)V"
};

$InnerClassInfo _JavadocHelper$OnDemandJavadocHelper$3_InnerClassesInfo_[] = {
	{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper", "jdk.internal.shellsupport.doc.JavadocHelper", "OnDemandJavadocHelper", $PRIVATE | $STATIC | $FINAL},
	{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JavadocHelper$OnDemandJavadocHelper$3_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$3",
	"com.sun.source.util.TreePathScanner",
	nullptr,
	_JavadocHelper$OnDemandJavadocHelper$3_FieldInfo_,
	_JavadocHelper$OnDemandJavadocHelper$3_MethodInfo_,
	"Lcom/sun/source/util/TreePathScanner<Ljava/lang/Void;Ljava/lang/Void;>;",
	&_JavadocHelper$OnDemandJavadocHelper$3_EnclosingMethodInfo_,
	_JavadocHelper$OnDemandJavadocHelper$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.shellsupport.doc.JavadocHelper"
};

$Object* allocate$JavadocHelper$OnDemandJavadocHelper$3($Class* clazz) {
	return $of($alloc(JavadocHelper$OnDemandJavadocHelper$3));
}

void JavadocHelper$OnDemandJavadocHelper$3::init$($JavadocHelper$OnDemandJavadocHelper* this$0, $Trees* val$trees, $JavacTask* val$task) {
	$set(this, this$0, this$0);
	$set(this, val$trees, val$trees);
	$set(this, val$task, val$task);
	$TreePathScanner::init$();
}

$Void* JavadocHelper$OnDemandJavadocHelper$3::visitMethod($MethodTree* node, $Void* p) {
	handleDeclaration();
	return nullptr;
}

$Void* JavadocHelper$OnDemandJavadocHelper$3::visitClass($ClassTree* node, $Void* p) {
	handleDeclaration();
	return $cast($Void, $TreePathScanner::visitClass(node, p));
}

$Void* JavadocHelper$OnDemandJavadocHelper$3::visitVariable($VariableTree* node, $Void* p) {
	handleDeclaration();
	return $cast($Void, $TreePathScanner::visitVariable(node, p));
}

void JavadocHelper$OnDemandJavadocHelper$3::handleDeclaration() {
	$useLocalCurrentObjectStackCache();
	$var($Element, currentElement, $nc(this->val$trees)->getElement($(getCurrentPath())));
	if (currentElement != nullptr) {
		$var($Object, var$0, $of(this->this$0->elementSignature(currentElement)));
		$nc(this->this$0->signature2Source)->put(var$0, $($Pair::of(this->val$task, $(getCurrentPath()))));
	}
}

$Object* JavadocHelper$OnDemandJavadocHelper$3::visitVariable($VariableTree* node, Object$* p) {
	return $of(this->visitVariable(node, $cast($Void, p)));
}

$Object* JavadocHelper$OnDemandJavadocHelper$3::visitMethod($MethodTree* node, Object$* p) {
	return $of(this->visitMethod(node, $cast($Void, p)));
}

$Object* JavadocHelper$OnDemandJavadocHelper$3::visitClass($ClassTree* node, Object$* p) {
	return $of(this->visitClass(node, $cast($Void, p)));
}

JavadocHelper$OnDemandJavadocHelper$3::JavadocHelper$OnDemandJavadocHelper$3() {
}

$Class* JavadocHelper$OnDemandJavadocHelper$3::load$($String* name, bool initialize) {
	$loadClass(JavadocHelper$OnDemandJavadocHelper$3, name, initialize, &_JavadocHelper$OnDemandJavadocHelper$3_ClassInfo_, allocate$JavadocHelper$OnDemandJavadocHelper$3);
	return class$;
}

$Class* JavadocHelper$OnDemandJavadocHelper$3::class$ = nullptr;

			} // doc
		} // shellsupport
	} // internal
} // jdk