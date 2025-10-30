#include <com/sun/tools/javac/tree/JCTree$JCDoWhileLoop.h>

#include <com/sun/source/tree/DoWhileLoopTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/StatementTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

#undef DOLOOP
#undef DO_WHILE_LOOP

using $DoWhileLoopTree = ::com::sun::source::tree::DoWhileLoopTree;
using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $StatementTree = ::com::sun::source::tree::StatementTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
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

$FieldInfo _JCTree$JCDoWhileLoop_FieldInfo_[] = {
	{"body", "Lcom/sun/tools/javac/tree/JCTree$JCStatement;", nullptr, $PUBLIC, $field(JCTree$JCDoWhileLoop, body)},
	{"cond", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCDoWhileLoop, cond)},
	{}
};

$MethodInfo _JCTree$JCDoWhileLoop_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCStatement;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)V", nullptr, $PROTECTED, $method(static_cast<void(JCTree$JCDoWhileLoop::*)($JCTree$JCStatement*,$JCTree$JCExpression*)>(&JCTree$JCDoWhileLoop::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getCondition", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getStatement", "()Lcom/sun/tools/javac/tree/JCTree$JCStatement;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCDoWhileLoop_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCDoWhileLoop", "com.sun.tools.javac.tree.JCTree", "JCDoWhileLoop", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCStatement", "com.sun.tools.javac.tree.JCTree", "JCStatement", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCDoWhileLoop_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCDoWhileLoop",
	"com.sun.tools.javac.tree.JCTree$JCStatement",
	"com.sun.source.tree.DoWhileLoopTree",
	_JCTree$JCDoWhileLoop_FieldInfo_,
	_JCTree$JCDoWhileLoop_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCDoWhileLoop_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCDoWhileLoop($Class* clazz) {
	return $of($alloc(JCTree$JCDoWhileLoop));
}

$String* JCTree$JCDoWhileLoop::toString() {
	 return this->$JCTree$JCStatement::toString();
}

$Object* JCTree$JCDoWhileLoop::clone() {
	 return this->$JCTree$JCStatement::clone();
}

int32_t JCTree$JCDoWhileLoop::hashCode() {
	 return this->$JCTree$JCStatement::hashCode();
}

bool JCTree$JCDoWhileLoop::equals(Object$* arg0) {
	 return this->$JCTree$JCStatement::equals(arg0);
}

void JCTree$JCDoWhileLoop::finalize() {
	this->$JCTree$JCStatement::finalize();
}

void JCTree$JCDoWhileLoop::init$($JCTree$JCStatement* body, $JCTree$JCExpression* cond) {
	$JCTree$JCStatement::init$();
	$set(this, body, body);
	$set(this, cond, cond);
}

void JCTree$JCDoWhileLoop::accept($JCTree$Visitor* v) {
	$nc(v)->visitDoLoop(this);
}

$Tree$Kind* JCTree$JCDoWhileLoop::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::DO_WHILE_LOOP;
}

$ExpressionTree* JCTree$JCDoWhileLoop::getCondition() {
	return this->cond;
}

$StatementTree* JCTree$JCDoWhileLoop::getStatement() {
	return this->body;
}

$Object* JCTree$JCDoWhileLoop::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitDoWhileLoop(this, d));
}

$JCTree$Tag* JCTree$JCDoWhileLoop::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::DOLOOP;
}

JCTree$JCDoWhileLoop::JCTree$JCDoWhileLoop() {
}

$Class* JCTree$JCDoWhileLoop::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCDoWhileLoop, name, initialize, &_JCTree$JCDoWhileLoop_ClassInfo_, allocate$JCTree$JCDoWhileLoop);
	return class$;
}

$Class* JCTree$JCDoWhileLoop::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com