#include <com/sun/tools/javac/tree/TreeMaker$1.h>

#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _TreeMaker$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/tree/TreeMaker;", nullptr, $FINAL | $SYNTHETIC, $field(TreeMaker$1, this$0)},
	{}
};

$MethodInfo _TreeMaker$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/tree/TreeMaker;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, 0, $method(static_cast<void(TreeMaker$1::*)($TreeMaker*,$JCTree$JCExpression*,$List*,$JCTree$JCExpression*,$List*,$JCTree$JCClassDecl*)>(&TreeMaker$1::init$))},
	{"classDeclRemoved", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TreeMaker$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.tree.TreeMaker",
	"SpeculativeNewClass",
	"(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;Z)Lcom/sun/tools/javac/tree/JCTree$JCNewClass;"
};

$InnerClassInfo _TreeMaker$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.TreeMaker$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.tree.JCTree$JCNewClass", "com.sun.tools.javac.tree.JCTree", "JCNewClass", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCExpression", "com.sun.tools.javac.tree.JCTree", "JCExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.tree.JCTree$JCClassDecl", "com.sun.tools.javac.tree.JCTree", "JCClassDecl", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TreeMaker$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.tree.TreeMaker$1",
	"com.sun.tools.javac.tree.JCTree$JCNewClass",
	nullptr,
	_TreeMaker$1_FieldInfo_,
	_TreeMaker$1_MethodInfo_,
	nullptr,
	&_TreeMaker$1_EnclosingMethodInfo_,
	_TreeMaker$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.TreeMaker"
};

$Object* allocate$TreeMaker$1($Class* clazz) {
	return $of($alloc(TreeMaker$1));
}

void TreeMaker$1::init$($TreeMaker* this$0, $JCTree$JCExpression* encl, $List* typeargs, $JCTree$JCExpression* clazz, $List* args, $JCTree$JCClassDecl* def) {
	$set(this, this$0, this$0);
	$JCTree$JCNewClass::init$(encl, typeargs, clazz, args, def);
}

bool TreeMaker$1::classDeclRemoved() {
	return true;
}

TreeMaker$1::TreeMaker$1() {
}

$Class* TreeMaker$1::load$($String* name, bool initialize) {
	$loadClass(TreeMaker$1, name, initialize, &_TreeMaker$1_ClassInfo_, allocate$TreeMaker$1);
	return class$;
}

$Class* TreeMaker$1::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com