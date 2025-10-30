#include <com/sun/tools/javac/tree/JCTree$JCAssignOp.h>

#include <com/sun/source/tree/CompoundAssignmentTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCOperatorExpression$OperandPos.h>
#include <com/sun/tools/javac/tree/JCTree$JCOperatorExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <jcpp.h>

#undef LEFT

using $CompoundAssignmentTree = ::com::sun::source::tree::CompoundAssignmentTree;
using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $Symbol$OperatorSymbol = ::com::sun::tools::javac::code::Symbol$OperatorSymbol;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCOperatorExpression = ::com::sun::tools::javac::tree::JCTree$JCOperatorExpression;
using $JCTree$JCOperatorExpression$OperandPos = ::com::sun::tools::javac::tree::JCTree$JCOperatorExpression$OperandPos;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _JCTree$JCAssignOp_FieldInfo_[] = {
	{"lhs", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCAssignOp, lhs)},
	{"rhs", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCAssignOp, rhs)},
	{}
};

$MethodInfo _JCTree$JCAssignOp_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$Tag;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;)V", nullptr, $PROTECTED, $method(static_cast<void(JCTree$JCAssignOp::*)($JCTree$Tag*,$JCTree*,$JCTree*,$Symbol$OperatorSymbol*)>(&JCTree$JCAssignOp::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getExpression", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getOperand", "(Lcom/sun/tools/javac/tree/JCTree$JCOperatorExpression$OperandPos;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getVariable", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCAssignOp_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCAssignOp", "com.sun.tools.javac.tree.JCTree", "JCAssignOp", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCOperatorExpression", "com.sun.tools.javac.tree.JCTree", "JCOperatorExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCAssignOp_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCAssignOp",
	"com.sun.tools.javac.tree.JCTree$JCOperatorExpression",
	"com.sun.source.tree.CompoundAssignmentTree",
	_JCTree$JCAssignOp_FieldInfo_,
	_JCTree$JCAssignOp_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCAssignOp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCAssignOp($Class* clazz) {
	return $of($alloc(JCTree$JCAssignOp));
}

$String* JCTree$JCAssignOp::toString() {
	 return this->$JCTree$JCOperatorExpression::toString();
}

$Object* JCTree$JCAssignOp::clone() {
	 return this->$JCTree$JCOperatorExpression::clone();
}

int32_t JCTree$JCAssignOp::hashCode() {
	 return this->$JCTree$JCOperatorExpression::hashCode();
}

bool JCTree$JCAssignOp::equals(Object$* arg0) {
	 return this->$JCTree$JCOperatorExpression::equals(arg0);
}

void JCTree$JCAssignOp::finalize() {
	this->$JCTree$JCOperatorExpression::finalize();
}

void JCTree$JCAssignOp::init$($JCTree$Tag* opcode, $JCTree* lhs, $JCTree* rhs, $Symbol$OperatorSymbol* operator$) {
	$JCTree$JCOperatorExpression::init$();
	$set(this, opcode, opcode);
	$set(this, lhs, $cast($JCTree$JCExpression, lhs));
	$set(this, rhs, $cast($JCTree$JCExpression, rhs));
	$set(this, operator$, operator$);
}

void JCTree$JCAssignOp::accept($JCTree$Visitor* v) {
	$nc(v)->visitAssignop(this);
}

$Tree$Kind* JCTree$JCAssignOp::getKind() {
	return $TreeInfo::tagToKind($(getTag()));
}

$ExpressionTree* JCTree$JCAssignOp::getVariable() {
	return this->lhs;
}

$ExpressionTree* JCTree$JCAssignOp::getExpression() {
	return this->rhs;
}

$Object* JCTree$JCAssignOp::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitCompoundAssignment(this, d));
}

$JCTree$JCExpression* JCTree$JCAssignOp::getOperand($JCTree$JCOperatorExpression$OperandPos* pos) {
	$init($JCTree$JCOperatorExpression$OperandPos);
	return pos == $JCTree$JCOperatorExpression$OperandPos::LEFT ? this->lhs : this->rhs;
}

JCTree$JCAssignOp::JCTree$JCAssignOp() {
}

$Class* JCTree$JCAssignOp::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCAssignOp, name, initialize, &_JCTree$JCAssignOp_ClassInfo_, allocate$JCTree$JCAssignOp);
	return class$;
}

$Class* JCTree$JCAssignOp::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com