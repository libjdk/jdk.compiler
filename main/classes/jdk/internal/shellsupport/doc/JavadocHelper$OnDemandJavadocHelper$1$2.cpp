#include <jdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$1$2.h>

#include <com/sun/source/doctree/DocCommentTree.h>
#include <com/sun/source/doctree/ThrowsTree.h>
#include <com/sun/source/util/DocTreeScanner.h>
#include <com/sun/source/util/JavacTask.h>
#include <com/sun/source/util/TreePath.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <jdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$1.h>
#include <jdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper.h>
#include <jcpp.h>

using $DocCommentTree = ::com::sun::source::doctree::DocCommentTree;
using $ThrowsTree = ::com::sun::source::doctree::ThrowsTree;
using $DocTreeScanner = ::com::sun::source::util::DocTreeScanner;
using $JavacTask = ::com::sun::source::util::JavacTask;
using $TreePath = ::com::sun::source::util::TreePath;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $JavadocHelper$OnDemandJavadocHelper = ::jdk::internal::shellsupport::doc::JavadocHelper$OnDemandJavadocHelper;
using $JavadocHelper$OnDemandJavadocHelper$1 = ::jdk::internal::shellsupport::doc::JavadocHelper$OnDemandJavadocHelper$1;

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

$FieldInfo _JavadocHelper$OnDemandJavadocHelper$1$2_FieldInfo_[] = {
	{"this$1", "Ljdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$1;", nullptr, $FINAL | $SYNTHETIC, $field(JavadocHelper$OnDemandJavadocHelper$1$2, this$1)},
	{"val$inheritedText", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(JavadocHelper$OnDemandJavadocHelper$1$2, val$inheritedText)},
	{"val$thrownName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(JavadocHelper$OnDemandJavadocHelper$1$2, val$thrownName)},
	{"val$inheritedDocTree", "Lcom/sun/source/doctree/DocCommentTree;", nullptr, $FINAL | $SYNTHETIC, $field(JavadocHelper$OnDemandJavadocHelper$1$2, val$inheritedDocTree)},
	{}
};

$MethodInfo _JavadocHelper$OnDemandJavadocHelper$1$2_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$1;Lcom/sun/source/doctree/DocCommentTree;Ljava/lang/String;Ljava/util/List;)V", nullptr, 0, $method(static_cast<void(JavadocHelper$OnDemandJavadocHelper$1$2::*)($JavadocHelper$OnDemandJavadocHelper$1*,$DocCommentTree*,$String*,$List*)>(&JavadocHelper$OnDemandJavadocHelper$1$2::init$))},
	{"visitThrows", "(Lcom/sun/source/doctree/ThrowsTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC},
	{"visitThrows", "(Lcom/sun/source/doctree/ThrowsTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _JavadocHelper$OnDemandJavadocHelper$1$2_EnclosingMethodInfo_ = {
	"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$1",
	"visitInheritDoc",
	"(Lcom/sun/source/doctree/InheritDocTree;Ljava/lang/Void;)Ljava/lang/Void;"
};

$InnerClassInfo _JavadocHelper$OnDemandJavadocHelper$1$2_InnerClassesInfo_[] = {
	{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper", "jdk.internal.shellsupport.doc.JavadocHelper", "OnDemandJavadocHelper", $PRIVATE | $STATIC | $FINAL},
	{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$1", nullptr, nullptr, 0},
	{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$1$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JavadocHelper$OnDemandJavadocHelper$1$2_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$1$2",
	"com.sun.source.util.DocTreeScanner",
	nullptr,
	_JavadocHelper$OnDemandJavadocHelper$1$2_FieldInfo_,
	_JavadocHelper$OnDemandJavadocHelper$1$2_MethodInfo_,
	"Lcom/sun/source/util/DocTreeScanner<Ljava/lang/Void;Ljava/lang/Void;>;",
	&_JavadocHelper$OnDemandJavadocHelper$1$2_EnclosingMethodInfo_,
	_JavadocHelper$OnDemandJavadocHelper$1$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.shellsupport.doc.JavadocHelper"
};

$Object* allocate$JavadocHelper$OnDemandJavadocHelper$1$2($Class* clazz) {
	return $of($alloc(JavadocHelper$OnDemandJavadocHelper$1$2));
}

void JavadocHelper$OnDemandJavadocHelper$1$2::init$($JavadocHelper$OnDemandJavadocHelper$1* this$1, $DocCommentTree* val$inheritedDocTree, $String* val$thrownName, $List* val$inheritedText) {
	$set(this, this$1, this$1);
	$set(this, val$inheritedDocTree, val$inheritedDocTree);
	$set(this, val$thrownName, val$thrownName);
	$set(this, val$inheritedText, val$inheritedText);
	$DocTreeScanner::init$();
}

$Void* JavadocHelper$OnDemandJavadocHelper$1$2::visitThrows($ThrowsTree* node, $Void* p) {
	$useLocalCurrentObjectStackCache();
	if ($Objects::equals($($nc(this->this$1->this$0)->getThrownException(this->this$1->inheritedJavacTask, this->this$1->inheritedTreePath, this->val$inheritedDocTree, node)), this->val$thrownName)) {
		$nc(this->val$inheritedText)->add($($nc(node)->getDescription()));
	}
	return $cast($Void, $DocTreeScanner::visitThrows(node, p));
}

$Object* JavadocHelper$OnDemandJavadocHelper$1$2::visitThrows($ThrowsTree* node, Object$* p) {
	return $of(this->visitThrows(node, $cast($Void, p)));
}

JavadocHelper$OnDemandJavadocHelper$1$2::JavadocHelper$OnDemandJavadocHelper$1$2() {
}

$Class* JavadocHelper$OnDemandJavadocHelper$1$2::load$($String* name, bool initialize) {
	$loadClass(JavadocHelper$OnDemandJavadocHelper$1$2, name, initialize, &_JavadocHelper$OnDemandJavadocHelper$1$2_ClassInfo_, allocate$JavadocHelper$OnDemandJavadocHelper$1$2);
	return class$;
}

$Class* JavadocHelper$OnDemandJavadocHelper$1$2::class$ = nullptr;

			} // doc
		} // shellsupport
	} // internal
} // jdk