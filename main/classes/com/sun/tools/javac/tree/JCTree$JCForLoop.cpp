#include <com/sun/tools/javac/tree/JCTree$JCForLoop.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/ForLoopTree.h>
#include <com/sun/source/tree/StatementTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef FORLOOP
#undef FOR_LOOP

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $ForLoopTree = ::com::sun::source::tree::ForLoopTree;
using $StatementTree = ::com::sun::source::tree::StatementTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $1List = ::java::util::List;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _JCTree$JCForLoop_FieldInfo_[] = {
	{"init", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCStatement;>;", $PUBLIC, $field(JCTree$JCForLoop, init)},
	{"cond", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCForLoop, cond)},
	{"step", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpressionStatement;>;", $PUBLIC, $field(JCTree$JCForLoop, step)},
	{"body", "Lcom/sun/tools/javac/tree/JCTree$JCStatement;", nullptr, $PUBLIC, $field(JCTree$JCForLoop, body)},
	{}
};

$MethodInfo _JCTree$JCForLoop_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCStatement;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCStatement;>;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpressionStatement;>;Lcom/sun/tools/javac/tree/JCTree$JCStatement;)V", $PROTECTED, $method(static_cast<void(JCTree$JCForLoop::*)($List*,$JCTree$JCExpression*,$List*,$JCTree$JCStatement*)>(&JCTree$JCForLoop::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getCondition", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getInitializer", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCStatement;>;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getStatement", "()Lcom/sun/tools/javac/tree/JCTree$JCStatement;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"getUpdate", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpressionStatement;>;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCForLoop_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCForLoop", "com.sun.tools.javac.tree.JCTree", "JCForLoop", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCStatement", "com.sun.tools.javac.tree.JCTree", "JCStatement", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCForLoop_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCForLoop",
	"com.sun.tools.javac.tree.JCTree$JCStatement",
	"com.sun.source.tree.ForLoopTree",
	_JCTree$JCForLoop_FieldInfo_,
	_JCTree$JCForLoop_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCForLoop_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCForLoop($Class* clazz) {
	return $of($alloc(JCTree$JCForLoop));
}

$String* JCTree$JCForLoop::toString() {
	 return this->$JCTree$JCStatement::toString();
}

$Object* JCTree$JCForLoop::clone() {
	 return this->$JCTree$JCStatement::clone();
}

int32_t JCTree$JCForLoop::hashCode() {
	 return this->$JCTree$JCStatement::hashCode();
}

bool JCTree$JCForLoop::equals(Object$* arg0) {
	 return this->$JCTree$JCStatement::equals(arg0);
}

void JCTree$JCForLoop::finalize() {
	this->$JCTree$JCStatement::finalize();
}

void JCTree$JCForLoop::init$($List* init, $JCTree$JCExpression* cond, $List* update, $JCTree$JCStatement* body) {
	$JCTree$JCStatement::init$();
	$set(this, init, init);
	$set(this, cond, cond);
	$set(this, step, update);
	$set(this, body, body);
}

void JCTree$JCForLoop::accept($JCTree$Visitor* v) {
	$nc(v)->visitForLoop(this);
}

$Tree$Kind* JCTree$JCForLoop::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::FOR_LOOP;
}

$ExpressionTree* JCTree$JCForLoop::getCondition() {
	return this->cond;
}

$StatementTree* JCTree$JCForLoop::getStatement() {
	return this->body;
}

$1List* JCTree$JCForLoop::getInitializer() {
	return this->init;
}

$1List* JCTree$JCForLoop::getUpdate() {
	return this->step;
}

$Object* JCTree$JCForLoop::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitForLoop(this, d));
}

$JCTree$Tag* JCTree$JCForLoop::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::FORLOOP;
}

JCTree$JCForLoop::JCTree$JCForLoop() {
}

$Class* JCTree$JCForLoop::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCForLoop, name, initialize, &_JCTree$JCForLoop_ClassInfo_, allocate$JCTree$JCForLoop);
	return class$;
}

$Class* JCTree$JCForLoop::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com