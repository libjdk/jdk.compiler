#include <com/sun/tools/javac/comp/DeferredAttr$2$1.h>

#include <com/sun/source/tree/MemberReferenceTree$ReferenceMode.h>
#include <com/sun/tools/javac/comp/DeferredAttr$2.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference$OverloadKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

#undef ERROR

using $MemberReferenceTree$ReferenceMode = ::com::sun::source::tree::MemberReferenceTree$ReferenceMode;
using $DeferredAttr$2 = ::com::sun::tools::javac::comp::DeferredAttr$2;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCMemberReference = ::com::sun::tools::javac::tree::JCTree$JCMemberReference;
using $JCTree$JCMemberReference$OverloadKind = ::com::sun::tools::javac::tree::JCTree$JCMemberReference$OverloadKind;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _DeferredAttr$2$1_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/comp/DeferredAttr$2;", nullptr, $FINAL | $SYNTHETIC, $field(DeferredAttr$2$1, this$1)},
	{"val$t", "Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;", nullptr, $FINAL | $SYNTHETIC, $field(DeferredAttr$2$1, val$t)},
	{}
};

$MethodInfo _DeferredAttr$2$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/DeferredAttr$2;Lcom/sun/source/tree/MemberReferenceTree$ReferenceMode;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;)V", nullptr, 0, $method(static_cast<void(DeferredAttr$2$1::*)($DeferredAttr$2*,$MemberReferenceTree$ReferenceMode*,$Name*,$JCTree$JCExpression*,$List*,$JCTree$JCMemberReference*)>(&DeferredAttr$2$1::init$))},
	{"getOverloadKind", "()Lcom/sun/tools/javac/tree/JCTree$JCMemberReference$OverloadKind;", nullptr, $PUBLIC},
	{"setOverloadKind", "(Lcom/sun/tools/javac/tree/JCTree$JCMemberReference$OverloadKind;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DeferredAttr$2$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.DeferredAttr$2",
	"visitMemberReference",
	"(Lcom/sun/source/tree/MemberReferenceTree;Ljava/lang/Void;)Lcom/sun/tools/javac/tree/JCTree;"
};

$InnerClassInfo _DeferredAttr$2$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.DeferredAttr$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.DeferredAttr$2$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.tree.JCTree$JCMemberReference", "com.sun.tools.javac.tree.JCTree", "JCMemberReference", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DeferredAttr$2$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.DeferredAttr$2$1",
	"com.sun.tools.javac.tree.JCTree$JCMemberReference",
	nullptr,
	_DeferredAttr$2$1_FieldInfo_,
	_DeferredAttr$2$1_MethodInfo_,
	nullptr,
	&_DeferredAttr$2$1_EnclosingMethodInfo_,
	_DeferredAttr$2$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.DeferredAttr"
};

$Object* allocate$DeferredAttr$2$1($Class* clazz) {
	return $of($alloc(DeferredAttr$2$1));
}

void DeferredAttr$2$1::init$($DeferredAttr$2* this$1, $MemberReferenceTree$ReferenceMode* mode, $Name* name, $JCTree$JCExpression* expr, $List* typeargs, $JCTree$JCMemberReference* val$t) {
	$set(this, this$1, this$1);
	$set(this, val$t, val$t);
	$JCTree$JCMemberReference::init$(mode, name, expr, typeargs);
}

void DeferredAttr$2$1::setOverloadKind($JCTree$JCMemberReference$OverloadKind* overloadKind) {
	$JCTree$JCMemberReference$OverloadKind* previous = $nc(this->val$t)->getOverloadKind();
	$init($JCTree$JCMemberReference$OverloadKind);
	if (previous == nullptr || previous == $JCTree$JCMemberReference$OverloadKind::ERROR) {
		$nc(this->val$t)->setOverloadKind(overloadKind);
	} else {
		$Assert::check(previous == overloadKind || overloadKind == $JCTree$JCMemberReference$OverloadKind::ERROR);
	}
}

$JCTree$JCMemberReference$OverloadKind* DeferredAttr$2$1::getOverloadKind() {
	return $nc(this->val$t)->getOverloadKind();
}

DeferredAttr$2$1::DeferredAttr$2$1() {
}

$Class* DeferredAttr$2$1::load$($String* name, bool initialize) {
	$loadClass(DeferredAttr$2$1, name, initialize, &_DeferredAttr$2$1_ClassInfo_, allocate$DeferredAttr$2$1);
	return class$;
}

$Class* DeferredAttr$2$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com