#include <jdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$1$3.h>

#include <com/sun/source/doctree/ReturnTree.h>
#include <com/sun/source/util/DocTreeScanner.h>
#include <java/util/List.h>
#include <jdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$1.h>
#include <jcpp.h>

using $ReturnTree = ::com::sun::source::doctree::ReturnTree;
using $DocTreeScanner = ::com::sun::source::util::DocTreeScanner;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $List = ::java::util::List;
using $JavadocHelper$OnDemandJavadocHelper$1 = ::jdk::internal::shellsupport::doc::JavadocHelper$OnDemandJavadocHelper$1;

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

$FieldInfo _JavadocHelper$OnDemandJavadocHelper$1$3_FieldInfo_[] = {
	{"this$1", "Ljdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$1;", nullptr, $FINAL | $SYNTHETIC, $field(JavadocHelper$OnDemandJavadocHelper$1$3, this$1)},
	{"val$inheritedText", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(JavadocHelper$OnDemandJavadocHelper$1$3, val$inheritedText)},
	{}
};

$MethodInfo _JavadocHelper$OnDemandJavadocHelper$1$3_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$1;Ljava/util/List;)V", nullptr, 0, $method(static_cast<void(JavadocHelper$OnDemandJavadocHelper$1$3::*)($JavadocHelper$OnDemandJavadocHelper$1*,$List*)>(&JavadocHelper$OnDemandJavadocHelper$1$3::init$))},
	{"visitReturn", "(Lcom/sun/source/doctree/ReturnTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC},
	{"visitReturn", "(Lcom/sun/source/doctree/ReturnTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _JavadocHelper$OnDemandJavadocHelper$1$3_EnclosingMethodInfo_ = {
	"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$1",
	"visitInheritDoc",
	"(Lcom/sun/source/doctree/InheritDocTree;Ljava/lang/Void;)Ljava/lang/Void;"
};

$InnerClassInfo _JavadocHelper$OnDemandJavadocHelper$1$3_InnerClassesInfo_[] = {
	{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper", "jdk.internal.shellsupport.doc.JavadocHelper", "OnDemandJavadocHelper", $PRIVATE | $STATIC | $FINAL},
	{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$1", nullptr, nullptr, 0},
	{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$1$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JavadocHelper$OnDemandJavadocHelper$1$3_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$1$3",
	"com.sun.source.util.DocTreeScanner",
	nullptr,
	_JavadocHelper$OnDemandJavadocHelper$1$3_FieldInfo_,
	_JavadocHelper$OnDemandJavadocHelper$1$3_MethodInfo_,
	"Lcom/sun/source/util/DocTreeScanner<Ljava/lang/Void;Ljava/lang/Void;>;",
	&_JavadocHelper$OnDemandJavadocHelper$1$3_EnclosingMethodInfo_,
	_JavadocHelper$OnDemandJavadocHelper$1$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.shellsupport.doc.JavadocHelper"
};

$Object* allocate$JavadocHelper$OnDemandJavadocHelper$1$3($Class* clazz) {
	return $of($alloc(JavadocHelper$OnDemandJavadocHelper$1$3));
}

void JavadocHelper$OnDemandJavadocHelper$1$3::init$($JavadocHelper$OnDemandJavadocHelper$1* this$1, $List* val$inheritedText) {
	$set(this, this$1, this$1);
	$set(this, val$inheritedText, val$inheritedText);
	$DocTreeScanner::init$();
}

$Void* JavadocHelper$OnDemandJavadocHelper$1$3::visitReturn($ReturnTree* node, $Void* p) {
	$nc(this->val$inheritedText)->add($($nc(node)->getDescription()));
	return $cast($Void, $DocTreeScanner::visitReturn(node, p));
}

$Object* JavadocHelper$OnDemandJavadocHelper$1$3::visitReturn($ReturnTree* node, Object$* p) {
	return $of(this->visitReturn(node, $cast($Void, p)));
}

JavadocHelper$OnDemandJavadocHelper$1$3::JavadocHelper$OnDemandJavadocHelper$1$3() {
}

$Class* JavadocHelper$OnDemandJavadocHelper$1$3::load$($String* name, bool initialize) {
	$loadClass(JavadocHelper$OnDemandJavadocHelper$1$3, name, initialize, &_JavadocHelper$OnDemandJavadocHelper$1$3_ClassInfo_, allocate$JavadocHelper$OnDemandJavadocHelper$1$3);
	return class$;
}

$Class* JavadocHelper$OnDemandJavadocHelper$1$3::class$ = nullptr;

			} // doc
		} // shellsupport
	} // internal
} // jdk