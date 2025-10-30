#include <com/sun/tools/javac/tree/Pretty$1UsedVisitor.h>

#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/Pretty.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $Pretty = ::com::sun::tools::javac::tree::Pretty;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
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

$FieldInfo _Pretty$1UsedVisitor_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/tree/Pretty;", nullptr, $FINAL | $SYNTHETIC, $field(Pretty$1UsedVisitor, this$0)},
	{"val$t", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $FINAL | $SYNTHETIC, $field(Pretty$1UsedVisitor, val$t)},
	{"result", "Z", nullptr, 0, $field(Pretty$1UsedVisitor, result)},
	{}
};

$MethodInfo _Pretty$1UsedVisitor_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/tree/Pretty;Lcom/sun/tools/javac/code/Symbol;)V", "()V", 0, $method(static_cast<void(Pretty$1UsedVisitor::*)($Pretty*,$Symbol*)>(&Pretty$1UsedVisitor::init$))},
	{"scan", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC},
	{"visitIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCIdent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Pretty$1UsedVisitor_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.tree.Pretty",
	"isUsed",
	"(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/tree/JCTree;)Z"
};

$InnerClassInfo _Pretty$1UsedVisitor_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.Pretty$1UsedVisitor", nullptr, "UsedVisitor", 0},
	{}
};

$ClassInfo _Pretty$1UsedVisitor_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.tree.Pretty$1UsedVisitor",
	"com.sun.tools.javac.tree.TreeScanner",
	nullptr,
	_Pretty$1UsedVisitor_FieldInfo_,
	_Pretty$1UsedVisitor_MethodInfo_,
	nullptr,
	&_Pretty$1UsedVisitor_EnclosingMethodInfo_,
	_Pretty$1UsedVisitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.Pretty"
};

$Object* allocate$Pretty$1UsedVisitor($Class* clazz) {
	return $of($alloc(Pretty$1UsedVisitor));
}

void Pretty$1UsedVisitor::init$($Pretty* this$0, $Symbol* val$t) {
	$set(this, this$0, this$0);
	$set(this, val$t, val$t);
	$TreeScanner::init$();
	this->result = false;
}

void Pretty$1UsedVisitor::scan($JCTree* tree) {
	if (tree != nullptr && !this->result) {
		tree->accept(this);
	}
}

void Pretty$1UsedVisitor::visitIdent($JCTree$JCIdent* tree) {
	if ($nc(tree)->sym == this->val$t) {
		this->result = true;
	}
}

Pretty$1UsedVisitor::Pretty$1UsedVisitor() {
}

$Class* Pretty$1UsedVisitor::load$($String* name, bool initialize) {
	$loadClass(Pretty$1UsedVisitor, name, initialize, &_Pretty$1UsedVisitor_ClassInfo_, allocate$Pretty$1UsedVisitor);
	return class$;
}

$Class* Pretty$1UsedVisitor::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com