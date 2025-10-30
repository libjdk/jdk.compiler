#include <com/sun/tools/javac/comp/Attr$4.h>

#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeApply.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeTranslator.h>
#include <jcpp.h>

using $Attr = ::com::sun::tools::javac::comp::Attr;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCTypeApply = ::com::sun::tools::javac::tree::JCTree$JCTypeApply;
using $TreeTranslator = ::com::sun::tools::javac::tree::TreeTranslator;
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

$FieldInfo _Attr$4_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$4, this$0)},
	{}
};

$MethodInfo _Attr$4_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Attr;)V", nullptr, 0, $method(static_cast<void(Attr$4::*)($Attr*)>(&Attr$4::init$))},
	{"visitTypeApply", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeApply;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Attr$4_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Attr",
	nullptr,
	nullptr
};

$InnerClassInfo _Attr$4_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Attr$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Attr$4_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Attr$4",
	"com.sun.tools.javac.tree.TreeTranslator",
	nullptr,
	_Attr$4_FieldInfo_,
	_Attr$4_MethodInfo_,
	nullptr,
	&_Attr$4_EnclosingMethodInfo_,
	_Attr$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Attr"
};

$Object* allocate$Attr$4($Class* clazz) {
	return $of($alloc(Attr$4));
}

void Attr$4::init$($Attr* this$0) {
	$set(this, this$0, this$0);
	$TreeTranslator::init$();
}

void Attr$4::visitTypeApply($JCTree$JCTypeApply* tree) {
	$set(this, result, translate(static_cast<$JCTree*>($nc(tree)->clazz)));
}

Attr$4::Attr$4() {
}

$Class* Attr$4::load$($String* name, bool initialize) {
	$loadClass(Attr$4, name, initialize, &_Attr$4_ClassInfo_, allocate$Attr$4);
	return class$;
}

$Class* Attr$4::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com