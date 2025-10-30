#include <com/sun/tools/javac/tree/JCTree$JCCatch.h>

#include <com/sun/source/tree/BlockTree.h>
#include <com/sun/source/tree/CatchTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/source/tree/VariableTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

#undef CATCH

using $BlockTree = ::com::sun::source::tree::BlockTree;
using $CatchTree = ::com::sun::source::tree::CatchTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $VariableTree = ::com::sun::source::tree::VariableTree;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCBlock = ::com::sun::tools::javac::tree::JCTree$JCBlock;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _JCTree$JCCatch_FieldInfo_[] = {
	{"param", "Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;", nullptr, $PUBLIC, $field(JCTree$JCCatch, param)},
	{"body", "Lcom/sun/tools/javac/tree/JCTree$JCBlock;", nullptr, $PUBLIC, $field(JCTree$JCCatch, body)},
	{}
};

$MethodInfo _JCTree$JCCatch_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;Lcom/sun/tools/javac/tree/JCTree$JCBlock;)V", nullptr, $PROTECTED, $method(static_cast<void(JCTree$JCCatch::*)($JCTree$JCVariableDecl*,$JCTree$JCBlock*)>(&JCTree$JCCatch::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getBlock", "()Lcom/sun/tools/javac/tree/JCTree$JCBlock;", nullptr, $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getParameter", "()Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCCatch_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCCatch", "com.sun.tools.javac.tree.JCTree", "JCCatch", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JCTree$JCCatch_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCCatch",
	"com.sun.tools.javac.tree.JCTree",
	"com.sun.source.tree.CatchTree",
	_JCTree$JCCatch_FieldInfo_,
	_JCTree$JCCatch_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCCatch_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCCatch($Class* clazz) {
	return $of($alloc(JCTree$JCCatch));
}

$String* JCTree$JCCatch::toString() {
	 return this->$JCTree::toString();
}

$Object* JCTree$JCCatch::clone() {
	 return this->$JCTree::clone();
}

int32_t JCTree$JCCatch::hashCode() {
	 return this->$JCTree::hashCode();
}

bool JCTree$JCCatch::equals(Object$* arg0) {
	 return this->$JCTree::equals(arg0);
}

void JCTree$JCCatch::finalize() {
	this->$JCTree::finalize();
}

void JCTree$JCCatch::init$($JCTree$JCVariableDecl* param, $JCTree$JCBlock* body) {
	$JCTree::init$();
	$set(this, param, param);
	$set(this, body, body);
}

void JCTree$JCCatch::accept($JCTree$Visitor* v) {
	$nc(v)->visitCatch(this);
}

$Tree$Kind* JCTree$JCCatch::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::CATCH;
}

$VariableTree* JCTree$JCCatch::getParameter() {
	return this->param;
}

$BlockTree* JCTree$JCCatch::getBlock() {
	return this->body;
}

$Object* JCTree$JCCatch::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitCatch(this, d));
}

$JCTree$Tag* JCTree$JCCatch::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::CATCH;
}

JCTree$JCCatch::JCTree$JCCatch() {
}

$Class* JCTree$JCCatch::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCCatch, name, initialize, &_JCTree$JCCatch_ClassInfo_, allocate$JCTree$JCCatch);
	return class$;
}

$Class* JCTree$JCCatch::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com