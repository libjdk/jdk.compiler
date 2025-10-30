#include <jdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$1$1.h>

#include <com/sun/source/doctree/IdentifierTree.h>
#include <com/sun/source/doctree/ParamTree.h>
#include <com/sun/source/util/DocTreeScanner.h>
#include <java/lang/CharSequence.h>
#include <java/util/List.h>
#include <javax/lang/model/element/Name.h>
#include <jdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$1.h>
#include <jcpp.h>

using $IdentifierTree = ::com::sun::source::doctree::IdentifierTree;
using $ParamTree = ::com::sun::source::doctree::ParamTree;
using $DocTreeScanner = ::com::sun::source::util::DocTreeScanner;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $List = ::java::util::List;
using $Name = ::javax::lang::model::element::Name;
using $JavadocHelper$OnDemandJavadocHelper$1 = ::jdk::internal::shellsupport::doc::JavadocHelper$OnDemandJavadocHelper$1;

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

$FieldInfo _JavadocHelper$OnDemandJavadocHelper$1$1_FieldInfo_[] = {
	{"this$1", "Ljdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$1;", nullptr, $FINAL | $SYNTHETIC, $field(JavadocHelper$OnDemandJavadocHelper$1$1, this$1)},
	{"val$inheritedText", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(JavadocHelper$OnDemandJavadocHelper$1$1, val$inheritedText)},
	{"val$paramName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(JavadocHelper$OnDemandJavadocHelper$1$1, val$paramName)},
	{}
};

$MethodInfo _JavadocHelper$OnDemandJavadocHelper$1$1_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$1;Ljava/lang/String;Ljava/util/List;)V", nullptr, 0, $method(static_cast<void(JavadocHelper$OnDemandJavadocHelper$1$1::*)($JavadocHelper$OnDemandJavadocHelper$1*,$String*,$List*)>(&JavadocHelper$OnDemandJavadocHelper$1$1::init$))},
	{"visitParam", "(Lcom/sun/source/doctree/ParamTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC},
	{"visitParam", "(Lcom/sun/source/doctree/ParamTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _JavadocHelper$OnDemandJavadocHelper$1$1_EnclosingMethodInfo_ = {
	"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$1",
	"visitInheritDoc",
	"(Lcom/sun/source/doctree/InheritDocTree;Ljava/lang/Void;)Ljava/lang/Void;"
};

$InnerClassInfo _JavadocHelper$OnDemandJavadocHelper$1$1_InnerClassesInfo_[] = {
	{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper", "jdk.internal.shellsupport.doc.JavadocHelper", "OnDemandJavadocHelper", $PRIVATE | $STATIC | $FINAL},
	{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$1", nullptr, nullptr, 0},
	{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JavadocHelper$OnDemandJavadocHelper$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$1$1",
	"com.sun.source.util.DocTreeScanner",
	nullptr,
	_JavadocHelper$OnDemandJavadocHelper$1$1_FieldInfo_,
	_JavadocHelper$OnDemandJavadocHelper$1$1_MethodInfo_,
	"Lcom/sun/source/util/DocTreeScanner<Ljava/lang/Void;Ljava/lang/Void;>;",
	&_JavadocHelper$OnDemandJavadocHelper$1$1_EnclosingMethodInfo_,
	_JavadocHelper$OnDemandJavadocHelper$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.shellsupport.doc.JavadocHelper"
};

$Object* allocate$JavadocHelper$OnDemandJavadocHelper$1$1($Class* clazz) {
	return $of($alloc(JavadocHelper$OnDemandJavadocHelper$1$1));
}

void JavadocHelper$OnDemandJavadocHelper$1$1::init$($JavadocHelper$OnDemandJavadocHelper$1* this$1, $String* val$paramName, $List* val$inheritedText) {
	$set(this, this$1, this$1);
	$set(this, val$paramName, val$paramName);
	$set(this, val$inheritedText, val$inheritedText);
	$DocTreeScanner::init$();
}

$Void* JavadocHelper$OnDemandJavadocHelper$1$1::visitParam($ParamTree* node, $Void* p) {
	$useLocalCurrentObjectStackCache();
	if ($nc($($nc($($nc(node)->getName()))->getName()))->contentEquals(this->val$paramName)) {
		$nc(this->val$inheritedText)->add($(node->getDescription()));
	}
	return $cast($Void, $DocTreeScanner::visitParam(node, p));
}

$Object* JavadocHelper$OnDemandJavadocHelper$1$1::visitParam($ParamTree* node, Object$* p) {
	return $of(this->visitParam(node, $cast($Void, p)));
}

JavadocHelper$OnDemandJavadocHelper$1$1::JavadocHelper$OnDemandJavadocHelper$1$1() {
}

$Class* JavadocHelper$OnDemandJavadocHelper$1$1::load$($String* name, bool initialize) {
	$loadClass(JavadocHelper$OnDemandJavadocHelper$1$1, name, initialize, &_JavadocHelper$OnDemandJavadocHelper$1$1_ClassInfo_, allocate$JavadocHelper$OnDemandJavadocHelper$1$1);
	return class$;
}

$Class* JavadocHelper$OnDemandJavadocHelper$1$1::class$ = nullptr;

			} // doc
		} // shellsupport
	} // internal
} // jdk