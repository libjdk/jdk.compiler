#include <com/sun/tools/javac/tree/JCTree$JCEnhancedForLoop.h>

#include <com/sun/source/tree/EnhancedForLoopTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/StatementTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/source/tree/VariableTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

#undef ENHANCED_FOR_LOOP
#undef FOREACHLOOP

using $EnhancedForLoopTree = ::com::sun::source::tree::EnhancedForLoopTree;
using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $StatementTree = ::com::sun::source::tree::StatementTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $VariableTree = ::com::sun::source::tree::VariableTree;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
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

$FieldInfo _JCTree$JCEnhancedForLoop_FieldInfo_[] = {
	{"var", "Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;", nullptr, $PUBLIC, $field(JCTree$JCEnhancedForLoop, var)},
	{"expr", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCEnhancedForLoop, expr)},
	{"body", "Lcom/sun/tools/javac/tree/JCTree$JCStatement;", nullptr, $PUBLIC, $field(JCTree$JCEnhancedForLoop, body)},
	{}
};

$MethodInfo _JCTree$JCEnhancedForLoop_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCStatement;)V", nullptr, $PROTECTED, $method(static_cast<void(JCTree$JCEnhancedForLoop::*)($JCTree$JCVariableDecl*,$JCTree$JCExpression*,$JCTree$JCStatement*)>(&JCTree$JCEnhancedForLoop::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getExpression", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getStatement", "()Lcom/sun/tools/javac/tree/JCTree$JCStatement;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"getVariable", "()Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCEnhancedForLoop_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCEnhancedForLoop", "com.sun.tools.javac.tree.JCTree", "JCEnhancedForLoop", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCStatement", "com.sun.tools.javac.tree.JCTree", "JCStatement", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCEnhancedForLoop_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCEnhancedForLoop",
	"com.sun.tools.javac.tree.JCTree$JCStatement",
	"com.sun.source.tree.EnhancedForLoopTree",
	_JCTree$JCEnhancedForLoop_FieldInfo_,
	_JCTree$JCEnhancedForLoop_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCEnhancedForLoop_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCEnhancedForLoop($Class* clazz) {
	return $of($alloc(JCTree$JCEnhancedForLoop));
}

$String* JCTree$JCEnhancedForLoop::toString() {
	 return this->$JCTree$JCStatement::toString();
}

$Object* JCTree$JCEnhancedForLoop::clone() {
	 return this->$JCTree$JCStatement::clone();
}

int32_t JCTree$JCEnhancedForLoop::hashCode() {
	 return this->$JCTree$JCStatement::hashCode();
}

bool JCTree$JCEnhancedForLoop::equals(Object$* arg0) {
	 return this->$JCTree$JCStatement::equals(arg0);
}

void JCTree$JCEnhancedForLoop::finalize() {
	this->$JCTree$JCStatement::finalize();
}

void JCTree$JCEnhancedForLoop::init$($JCTree$JCVariableDecl* var, $JCTree$JCExpression* expr, $JCTree$JCStatement* body) {
	$JCTree$JCStatement::init$();
	$set(this, var, var);
	$set(this, expr, expr);
	$set(this, body, body);
}

void JCTree$JCEnhancedForLoop::accept($JCTree$Visitor* v) {
	$nc(v)->visitForeachLoop(this);
}

$Tree$Kind* JCTree$JCEnhancedForLoop::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::ENHANCED_FOR_LOOP;
}

$VariableTree* JCTree$JCEnhancedForLoop::getVariable() {
	return this->var;
}

$ExpressionTree* JCTree$JCEnhancedForLoop::getExpression() {
	return this->expr;
}

$StatementTree* JCTree$JCEnhancedForLoop::getStatement() {
	return this->body;
}

$Object* JCTree$JCEnhancedForLoop::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitEnhancedForLoop(this, d));
}

$JCTree$Tag* JCTree$JCEnhancedForLoop::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::FOREACHLOOP;
}

JCTree$JCEnhancedForLoop::JCTree$JCEnhancedForLoop() {
}

$Class* JCTree$JCEnhancedForLoop::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCEnhancedForLoop, name, initialize, &_JCTree$JCEnhancedForLoop_ClassInfo_, allocate$JCTree$JCEnhancedForLoop);
	return class$;
}

$Class* JCTree$JCEnhancedForLoop::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com