#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrNode$1.h>

#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/Check$NestedCheckContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrNode.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <jcpp.h>

using $Check$CheckContext = ::com::sun::tools::javac::comp::Check$CheckContext;
using $Check$NestedCheckContext = ::com::sun::tools::javac::comp::Check$NestedCheckContext;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $DeferredAttr$DeferredAttrNode = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrNode;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
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

$FieldInfo _DeferredAttr$DeferredAttrNode$1_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrNode;", nullptr, $FINAL | $SYNTHETIC, $field(DeferredAttr$DeferredAttrNode$1, this$1)},
	{"val$deferredAttrContext", "Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;", nullptr, $FINAL | $SYNTHETIC, $field(DeferredAttr$DeferredAttrNode$1, val$deferredAttrContext)},
	{}
};

$MethodInfo _DeferredAttr$DeferredAttrNode$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrNode;Lcom/sun/tools/javac/comp/Check$CheckContext;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;)V", nullptr, 0, $method(static_cast<void(DeferredAttr$DeferredAttrNode$1::*)($DeferredAttr$DeferredAttrNode*,$Check$CheckContext*,$DeferredAttr$DeferredAttrContext*)>(&DeferredAttr$DeferredAttrNode$1::init$))},
	{"deferredAttrContext", "()Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;", nullptr, $PUBLIC},
	{"inferenceContext", "()Lcom/sun/tools/javac/comp/InferenceContext;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DeferredAttr$DeferredAttrNode$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode",
	"process",
	"(Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;)Z"
};

$InnerClassInfo _DeferredAttr$DeferredAttrNode$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode", "com.sun.tools.javac.comp.DeferredAttr", "DeferredAttrNode", 0},
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Check$NestedCheckContext", "com.sun.tools.javac.comp.Check", "NestedCheckContext", $STATIC},
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrContext", "com.sun.tools.javac.comp.DeferredAttr", "DeferredAttrContext", 0},
	{}
};

$ClassInfo _DeferredAttr$DeferredAttrNode$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode$1",
	"com.sun.tools.javac.comp.Check$NestedCheckContext",
	nullptr,
	_DeferredAttr$DeferredAttrNode$1_FieldInfo_,
	_DeferredAttr$DeferredAttrNode$1_MethodInfo_,
	nullptr,
	&_DeferredAttr$DeferredAttrNode$1_EnclosingMethodInfo_,
	_DeferredAttr$DeferredAttrNode$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.DeferredAttr"
};

$Object* allocate$DeferredAttr$DeferredAttrNode$1($Class* clazz) {
	return $of($alloc(DeferredAttr$DeferredAttrNode$1));
}

void DeferredAttr$DeferredAttrNode$1::init$($DeferredAttr$DeferredAttrNode* this$1, $Check$CheckContext* enclosingContext, $DeferredAttr$DeferredAttrContext* val$deferredAttrContext) {
	$set(this, this$1, this$1);
	$set(this, val$deferredAttrContext, val$deferredAttrContext);
	$Check$NestedCheckContext::init$(enclosingContext);
}

$InferenceContext* DeferredAttr$DeferredAttrNode$1::inferenceContext() {
	return $nc($nc(this->val$deferredAttrContext)->parent)->inferenceContext;
}

$DeferredAttr$DeferredAttrContext* DeferredAttr$DeferredAttrNode$1::deferredAttrContext() {
	return $nc(this->val$deferredAttrContext)->parent;
}

DeferredAttr$DeferredAttrNode$1::DeferredAttr$DeferredAttrNode$1() {
}

$Class* DeferredAttr$DeferredAttrNode$1::load$($String* name, bool initialize) {
	$loadClass(DeferredAttr$DeferredAttrNode$1, name, initialize, &_DeferredAttr$DeferredAttrNode$1_ClassInfo_, allocate$DeferredAttr$DeferredAttrNode$1);
	return class$;
}

$Class* DeferredAttr$DeferredAttrNode$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com