#include <com/sun/tools/javac/comp/AttrRecover$1$1.h>

#include <com/sun/tools/javac/comp/AttrRecover$1.h>
#include <com/sun/tools/javac/tree/JCTree$JCErroneous.h>
#include <com/sun/tools/javac/tree/JCTree$JCReturn.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeTranslator.h>
#include <jcpp.h>

using $AttrRecover$1 = ::com::sun::tools::javac::comp::AttrRecover$1;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCErroneous = ::com::sun::tools::javac::tree::JCTree$JCErroneous;
using $JCTree$JCReturn = ::com::sun::tools::javac::tree::JCTree$JCReturn;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
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

$FieldInfo _AttrRecover$1$1_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/comp/AttrRecover$1;", nullptr, $FINAL | $SYNTHETIC, $field(AttrRecover$1$1, this$1)},
	{"val$tree", "Lcom/sun/tools/javac/tree/JCTree$JCReturn;", nullptr, $FINAL | $SYNTHETIC, $field(AttrRecover$1$1, val$tree)},
	{"val$err", "Lcom/sun/tools/javac/tree/JCTree$JCErroneous;", nullptr, $FINAL | $SYNTHETIC, $field(AttrRecover$1$1, val$err)},
	{}
};

$MethodInfo _AttrRecover$1$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/AttrRecover$1;Lcom/sun/tools/javac/tree/JCTree$JCErroneous;Lcom/sun/tools/javac/tree/JCTree$JCReturn;)V", nullptr, 0, $method(static_cast<void(AttrRecover$1$1::*)($AttrRecover$1*,$JCTree$JCErroneous*,$JCTree$JCReturn*)>(&AttrRecover$1$1::init$))},
	{"translate", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree;", "<T:Lcom/sun/tools/javac/tree/JCTree;>(TT;)TT;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _AttrRecover$1$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.AttrRecover$1",
	"visitReturn",
	"(Lcom/sun/tools/javac/tree/JCTree$JCReturn;)V"
};

$InnerClassInfo _AttrRecover$1$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.AttrRecover$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.AttrRecover$1$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.tree.JCTree$JCReturn", "com.sun.tools.javac.tree.JCTree", "JCReturn", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _AttrRecover$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.AttrRecover$1$1",
	"com.sun.tools.javac.tree.TreeTranslator",
	nullptr,
	_AttrRecover$1$1_FieldInfo_,
	_AttrRecover$1$1_MethodInfo_,
	nullptr,
	&_AttrRecover$1$1_EnclosingMethodInfo_,
	_AttrRecover$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.AttrRecover"
};

$Object* allocate$AttrRecover$1$1($Class* clazz) {
	return $of($alloc(AttrRecover$1$1));
}

void AttrRecover$1$1::init$($AttrRecover$1* this$1, $JCTree$JCErroneous* val$err, $JCTree$JCReturn* val$tree) {
	$set(this, this$1, this$1);
	$set(this, val$err, val$err);
	$set(this, val$tree, val$tree);
	$TreeTranslator::init$();
}

$JCTree* AttrRecover$1$1::translate($JCTree* t) {
	if ($equals(t, this->val$err)) {
		return static_cast<$JCTree*>(this->val$tree);
	} else {
		return $TreeTranslator::translate(t);
	}
}

AttrRecover$1$1::AttrRecover$1$1() {
}

$Class* AttrRecover$1$1::load$($String* name, bool initialize) {
	$loadClass(AttrRecover$1$1, name, initialize, &_AttrRecover$1$1_ClassInfo_, allocate$AttrRecover$1$1);
	return class$;
}

$Class* AttrRecover$1$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com