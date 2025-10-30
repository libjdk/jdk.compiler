#include <com/sun/tools/javac/comp/DeferredAttr$DeferredType$SpeculativeCache$Entry.h>

#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredType$SpeculativeCache.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $Check$CheckContext = ::com::sun::tools::javac::comp::Check$CheckContext;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $DeferredAttr$DeferredType$SpeculativeCache = ::com::sun::tools::javac::comp::DeferredAttr$DeferredType$SpeculativeCache;
using $Resolve$MethodResolutionPhase = ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _DeferredAttr$DeferredType$SpeculativeCache$Entry_FieldInfo_[] = {
	{"this$2", "Lcom/sun/tools/javac/comp/DeferredAttr$DeferredType$SpeculativeCache;", nullptr, $FINAL | $SYNTHETIC, $field(DeferredAttr$DeferredType$SpeculativeCache$Entry, this$2)},
	{"speculativeTree", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, 0, $field(DeferredAttr$DeferredType$SpeculativeCache$Entry, speculativeTree)},
	{"resultInfo", "Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, 0, $field(DeferredAttr$DeferredType$SpeculativeCache$Entry, resultInfo)},
	{}
};

$MethodInfo _DeferredAttr$DeferredType$SpeculativeCache$Entry_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/DeferredAttr$DeferredType$SpeculativeCache;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Attr$ResultInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(DeferredAttr$DeferredType$SpeculativeCache$Entry::*)($DeferredAttr$DeferredType$SpeculativeCache*,$JCTree*,$Attr$ResultInfo*)>(&DeferredAttr$DeferredType$SpeculativeCache$Entry::init$))},
	{"matches", "(Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _DeferredAttr$DeferredType$SpeculativeCache$Entry_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredType", "com.sun.tools.javac.comp.DeferredAttr", "DeferredType", $PUBLIC},
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredType$SpeculativeCache", "com.sun.tools.javac.comp.DeferredAttr$DeferredType", "SpeculativeCache", 0},
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredType$SpeculativeCache$Entry", "com.sun.tools.javac.comp.DeferredAttr$DeferredType$SpeculativeCache", "Entry", 0},
	{}
};

$ClassInfo _DeferredAttr$DeferredType$SpeculativeCache$Entry_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.DeferredAttr$DeferredType$SpeculativeCache$Entry",
	"java.lang.Object",
	nullptr,
	_DeferredAttr$DeferredType$SpeculativeCache$Entry_FieldInfo_,
	_DeferredAttr$DeferredType$SpeculativeCache$Entry_MethodInfo_,
	nullptr,
	nullptr,
	_DeferredAttr$DeferredType$SpeculativeCache$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.DeferredAttr"
};

$Object* allocate$DeferredAttr$DeferredType$SpeculativeCache$Entry($Class* clazz) {
	return $of($alloc(DeferredAttr$DeferredType$SpeculativeCache$Entry));
}

void DeferredAttr$DeferredType$SpeculativeCache$Entry::init$($DeferredAttr$DeferredType$SpeculativeCache* this$2, $JCTree* speculativeTree, $Attr$ResultInfo* resultInfo) {
	$set(this, this$2, this$2);
	$set(this, speculativeTree, speculativeTree);
	$set(this, resultInfo, resultInfo);
}

bool DeferredAttr$DeferredType$SpeculativeCache$Entry::matches($Resolve$MethodResolutionPhase* phase) {
	return $nc($($nc($nc(this->resultInfo)->checkContext)->deferredAttrContext()))->phase == phase;
}

DeferredAttr$DeferredType$SpeculativeCache$Entry::DeferredAttr$DeferredType$SpeculativeCache$Entry() {
}

$Class* DeferredAttr$DeferredType$SpeculativeCache$Entry::load$($String* name, bool initialize) {
	$loadClass(DeferredAttr$DeferredType$SpeculativeCache$Entry, name, initialize, &_DeferredAttr$DeferredType$SpeculativeCache$Entry_ClassInfo_, allocate$DeferredAttr$DeferredType$SpeculativeCache$Entry);
	return class$;
}

$Class* DeferredAttr$DeferredType$SpeculativeCache$Entry::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com