#include <com/sun/tools/javac/comp/DeferredAttr$1.h>

#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/DeferredAttr$AttrMode.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredStuckPolicy.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredType.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $DeferredAttr = ::com::sun::tools::javac::comp::DeferredAttr;
using $DeferredAttr$AttrMode = ::com::sun::tools::javac::comp::DeferredAttr$AttrMode;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $DeferredAttr$DeferredStuckPolicy = ::com::sun::tools::javac::comp::DeferredAttr$DeferredStuckPolicy;
using $DeferredAttr$DeferredType = ::com::sun::tools::javac::comp::DeferredAttr$DeferredType;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $Resolve$MethodResolutionPhase = ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Warner = ::com::sun::tools::javac::util::Warner;
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

$FieldInfo _DeferredAttr$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/DeferredAttr;", nullptr, $FINAL | $SYNTHETIC, $field(DeferredAttr$1, this$0)},
	{}
};

$MethodInfo _DeferredAttr$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/DeferredAttr;Lcom/sun/tools/javac/comp/DeferredAttr$AttrMode;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;Lcom/sun/tools/javac/comp/InferenceContext;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;Lcom/sun/tools/javac/util/Warner;)V", nullptr, 0, $method(static_cast<void(DeferredAttr$1::*)($DeferredAttr*,$DeferredAttr$AttrMode*,$Symbol*,$Resolve$MethodResolutionPhase*,$InferenceContext*,$DeferredAttr$DeferredAttrContext*,$Warner*)>(&DeferredAttr$1::init$))},
	{"addDeferredAttrNode", "(Lcom/sun/tools/javac/comp/DeferredAttr$DeferredType;Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredStuckPolicy;)V", nullptr, 0},
	{"complete", "()V", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DeferredAttr$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.DeferredAttr",
	"<init>",
	"(Lcom/sun/tools/javac/util/Context;)V"
};

$InnerClassInfo _DeferredAttr$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.DeferredAttr$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrContext", "com.sun.tools.javac.comp.DeferredAttr", "DeferredAttrContext", 0},
	{}
};

$ClassInfo _DeferredAttr$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.DeferredAttr$1",
	"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrContext",
	nullptr,
	_DeferredAttr$1_FieldInfo_,
	_DeferredAttr$1_MethodInfo_,
	nullptr,
	&_DeferredAttr$1_EnclosingMethodInfo_,
	_DeferredAttr$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.DeferredAttr"
};

$Object* allocate$DeferredAttr$1($Class* clazz) {
	return $of($alloc(DeferredAttr$1));
}

void DeferredAttr$1::init$($DeferredAttr* this$0, $DeferredAttr$AttrMode* mode, $Symbol* msym, $Resolve$MethodResolutionPhase* phase, $InferenceContext* inferenceContext, $DeferredAttr$DeferredAttrContext* parent, $Warner* warn) {
	$set(this, this$0, this$0);
	$DeferredAttr$DeferredAttrContext::init$(this$0, mode, msym, phase, inferenceContext, parent, warn);
}

void DeferredAttr$1::addDeferredAttrNode($DeferredAttr$DeferredType* dt, $Attr$ResultInfo* ri, $DeferredAttr$DeferredStuckPolicy* deferredStuckPolicy) {
	$Assert::error("Empty deferred context!"_s);
}

void DeferredAttr$1::complete() {
	$Assert::error("Empty deferred context!"_s);
}

$String* DeferredAttr$1::toString() {
	return "Empty deferred context!"_s;
}

DeferredAttr$1::DeferredAttr$1() {
}

$Class* DeferredAttr$1::load$($String* name, bool initialize) {
	$loadClass(DeferredAttr$1, name, initialize, &_DeferredAttr$1_ClassInfo_, allocate$DeferredAttr$1);
	return class$;
}

$Class* DeferredAttr$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com