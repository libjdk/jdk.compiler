#include <com/sun/tools/javac/comp/DeferredAttr$2.h>

#include <com/sun/source/tree/MemberReferenceTree$ReferenceMode.h>
#include <com/sun/source/tree/MemberReferenceTree.h>
#include <com/sun/source/tree/NewClassTree.h>
#include <com/sun/tools/javac/comp/DeferredAttr$2$1.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCFunctionalExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeCopier.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

#undef M

using $MemberReferenceTree = ::com::sun::source::tree::MemberReferenceTree;
using $MemberReferenceTree$ReferenceMode = ::com::sun::source::tree::MemberReferenceTree$ReferenceMode;
using $NewClassTree = ::com::sun::source::tree::NewClassTree;
using $DeferredAttr = ::com::sun::tools::javac::comp::DeferredAttr;
using $DeferredAttr$2$1 = ::com::sun::tools::javac::comp::DeferredAttr$2$1;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCFunctionalExpression = ::com::sun::tools::javac::tree::JCTree$JCFunctionalExpression;
using $JCTree$JCMemberReference = ::com::sun::tools::javac::tree::JCTree$JCMemberReference;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
using $TreeCopier = ::com::sun::tools::javac::tree::TreeCopier;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _DeferredAttr$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/DeferredAttr;", nullptr, $FINAL | $SYNTHETIC, $field(DeferredAttr$2, this$0)},
	{}
};

$MethodInfo _DeferredAttr$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/DeferredAttr;Lcom/sun/tools/javac/tree/TreeMaker;)V", nullptr, 0, $method(static_cast<void(DeferredAttr$2::*)($DeferredAttr*,$TreeMaker*)>(&DeferredAttr$2::init$))},
	{"visitMemberReference", "(Lcom/sun/source/tree/MemberReferenceTree;Ljava/lang/Void;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC},
	{"visitMemberReference", "(Lcom/sun/source/tree/MemberReferenceTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitNewClass", "(Lcom/sun/source/tree/NewClassTree;Ljava/lang/Void;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC},
	{"visitNewClass", "(Lcom/sun/source/tree/NewClassTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _DeferredAttr$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.DeferredAttr",
	"<init>",
	"(Lcom/sun/tools/javac/util/Context;)V"
};

$InnerClassInfo _DeferredAttr$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.DeferredAttr$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.DeferredAttr$2$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DeferredAttr$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.DeferredAttr$2",
	"com.sun.tools.javac.tree.TreeCopier",
	nullptr,
	_DeferredAttr$2_FieldInfo_,
	_DeferredAttr$2_MethodInfo_,
	"Lcom/sun/tools/javac/tree/TreeCopier<Ljava/lang/Void;>;",
	&_DeferredAttr$2_EnclosingMethodInfo_,
	_DeferredAttr$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.DeferredAttr"
};

$Object* allocate$DeferredAttr$2($Class* clazz) {
	return $of($alloc(DeferredAttr$2));
}

void DeferredAttr$2::init$($DeferredAttr* this$0, $TreeMaker* M) {
	$set(this, this$0, this$0);
	$TreeCopier::init$(M);
}

$JCTree* DeferredAttr$2::visitNewClass($NewClassTree* node, $Void* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCNewClass, t, $cast($JCTree$JCNewClass, node));
	if ($TreeInfo::isDiamond(t)) {
		$var($JCTree$JCExpression, encl, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->encl), $of(p))));
		$var($List, typeargs, copy($nc(t)->typeargs, $of(p)));
		$var($JCTree$JCExpression, clazz, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->clazz), $of(p))));
		$var($List, args, copy($nc(t)->args, $of(p)));
		$var($JCTree$JCClassDecl, def, nullptr);
		return $nc($($nc(this->this$0->make)->at($nc(t)->pos$)))->SpeculativeNewClass(encl, typeargs, clazz, args, def, $nc(t)->def != nullptr);
	} else {
		return $cast($JCTree, $TreeCopier::visitNewClass(node, p));
	}
}

$JCTree* DeferredAttr$2::visitMemberReference($MemberReferenceTree* node, $Void* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCMemberReference, t, $cast($JCTree$JCMemberReference, node));
	$var($JCTree$JCExpression, expr, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->expr), $of(p))));
	$var($List, typeargs, copy($nc(t)->typeargs, $of(p)));
	$var($JCTree$JCMemberReference, result, $new($DeferredAttr$2$1, this, $nc(t)->mode, t->name, expr, typeargs, t));
	result->pos$ = $nc(t)->pos$;
	return result;
}

$Object* DeferredAttr$2::visitMemberReference($MemberReferenceTree* node, Object$* p) {
	return $of(this->visitMemberReference(node, $cast($Void, p)));
}

$Object* DeferredAttr$2::visitNewClass($NewClassTree* node, Object$* p) {
	return $of(this->visitNewClass(node, $cast($Void, p)));
}

DeferredAttr$2::DeferredAttr$2() {
}

$Class* DeferredAttr$2::load$($String* name, bool initialize) {
	$loadClass(DeferredAttr$2, name, initialize, &_DeferredAttr$2_ClassInfo_, allocate$DeferredAttr$2);
	return class$;
}

$Class* DeferredAttr$2::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com