#include <com/sun/tools/javac/tree/JCTree$JCWhileLoop.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/StatementTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/source/tree/WhileLoopTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

#undef WHILELOOP
#undef WHILE_LOOP

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $StatementTree = ::com::sun::source::tree::StatementTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $WhileLoopTree = ::com::sun::source::tree::WhileLoopTree;
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

$FieldInfo _JCTree$JCWhileLoop_FieldInfo_[] = {
	{"cond", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCWhileLoop, cond)},
	{"body", "Lcom/sun/tools/javac/tree/JCTree$JCStatement;", nullptr, $PUBLIC, $field(JCTree$JCWhileLoop, body)},
	{}
};

$MethodInfo _JCTree$JCWhileLoop_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCStatement;)V", nullptr, $PROTECTED, $method(static_cast<void(JCTree$JCWhileLoop::*)($JCTree$JCExpression*,$JCTree$JCStatement*)>(&JCTree$JCWhileLoop::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getCondition", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getStatement", "()Lcom/sun/tools/javac/tree/JCTree$JCStatement;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCWhileLoop_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCWhileLoop", "com.sun.tools.javac.tree.JCTree", "JCWhileLoop", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCStatement", "com.sun.tools.javac.tree.JCTree", "JCStatement", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCWhileLoop_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCWhileLoop",
	"com.sun.tools.javac.tree.JCTree$JCStatement",
	"com.sun.source.tree.WhileLoopTree",
	_JCTree$JCWhileLoop_FieldInfo_,
	_JCTree$JCWhileLoop_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCWhileLoop_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCWhileLoop($Class* clazz) {
	return $of($alloc(JCTree$JCWhileLoop));
}

$String* JCTree$JCWhileLoop::toString() {
	 return this->$JCTree$JCStatement::toString();
}

$Object* JCTree$JCWhileLoop::clone() {
	 return this->$JCTree$JCStatement::clone();
}

int32_t JCTree$JCWhileLoop::hashCode() {
	 return this->$JCTree$JCStatement::hashCode();
}

bool JCTree$JCWhileLoop::equals(Object$* arg0) {
	 return this->$JCTree$JCStatement::equals(arg0);
}

void JCTree$JCWhileLoop::finalize() {
	this->$JCTree$JCStatement::finalize();
}

void JCTree$JCWhileLoop::init$($JCTree$JCExpression* cond, $JCTree$JCStatement* body) {
	$JCTree$JCStatement::init$();
	$set(this, cond, cond);
	$set(this, body, body);
}

void JCTree$JCWhileLoop::accept($JCTree$Visitor* v) {
	$nc(v)->visitWhileLoop(this);
}

$Tree$Kind* JCTree$JCWhileLoop::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::WHILE_LOOP;
}

$ExpressionTree* JCTree$JCWhileLoop::getCondition() {
	return this->cond;
}

$StatementTree* JCTree$JCWhileLoop::getStatement() {
	return this->body;
}

$Object* JCTree$JCWhileLoop::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitWhileLoop(this, d));
}

$JCTree$Tag* JCTree$JCWhileLoop::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::WHILELOOP;
}

JCTree$JCWhileLoop::JCTree$JCWhileLoop() {
}

$Class* JCTree$JCWhileLoop::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCWhileLoop, name, initialize, &_JCTree$JCWhileLoop_ClassInfo_, allocate$JCTree$JCWhileLoop);
	return class$;
}

$Class* JCTree$JCWhileLoop::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com