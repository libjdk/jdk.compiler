#include <com/sun/tools/javac/tree/JCTree$JCBinary.h>

#include <com/sun/source/tree/BinaryTree.h>
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

using $BinaryTree = ::com::sun::source::tree::BinaryTree;
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

$FieldInfo _JCTree$JCBinary_FieldInfo_[] = {
	{"lhs", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCBinary, lhs)},
	{"rhs", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCBinary, rhs)},
	{}
};

$MethodInfo _JCTree$JCBinary_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$Tag;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;)V", nullptr, $PROTECTED, $method(static_cast<void(JCTree$JCBinary::*)($JCTree$Tag*,$JCTree$JCExpression*,$JCTree$JCExpression*,$Symbol$OperatorSymbol*)>(&JCTree$JCBinary::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getLeftOperand", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getOperand", "(Lcom/sun/tools/javac/tree/JCTree$JCOperatorExpression$OperandPos;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getRightOperand", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCBinary_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCBinary", "com.sun.tools.javac.tree.JCTree", "JCBinary", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCOperatorExpression", "com.sun.tools.javac.tree.JCTree", "JCOperatorExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCBinary_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCBinary",
	"com.sun.tools.javac.tree.JCTree$JCOperatorExpression",
	"com.sun.source.tree.BinaryTree",
	_JCTree$JCBinary_FieldInfo_,
	_JCTree$JCBinary_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCBinary_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCBinary($Class* clazz) {
	return $of($alloc(JCTree$JCBinary));
}

$String* JCTree$JCBinary::toString() {
	 return this->$JCTree$JCOperatorExpression::toString();
}

$Object* JCTree$JCBinary::clone() {
	 return this->$JCTree$JCOperatorExpression::clone();
}

int32_t JCTree$JCBinary::hashCode() {
	 return this->$JCTree$JCOperatorExpression::hashCode();
}

bool JCTree$JCBinary::equals(Object$* arg0) {
	 return this->$JCTree$JCOperatorExpression::equals(arg0);
}

void JCTree$JCBinary::finalize() {
	this->$JCTree$JCOperatorExpression::finalize();
}

void JCTree$JCBinary::init$($JCTree$Tag* opcode, $JCTree$JCExpression* lhs, $JCTree$JCExpression* rhs, $Symbol$OperatorSymbol* operator$) {
	$JCTree$JCOperatorExpression::init$();
	$set(this, opcode, opcode);
	$set(this, lhs, lhs);
	$set(this, rhs, rhs);
	$set(this, operator$, operator$);
}

void JCTree$JCBinary::accept($JCTree$Visitor* v) {
	$nc(v)->visitBinary(this);
}

$Tree$Kind* JCTree$JCBinary::getKind() {
	return $TreeInfo::tagToKind($(getTag()));
}

$ExpressionTree* JCTree$JCBinary::getLeftOperand() {
	return this->lhs;
}

$ExpressionTree* JCTree$JCBinary::getRightOperand() {
	return this->rhs;
}

$Object* JCTree$JCBinary::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitBinary(this, d));
}

$JCTree$JCExpression* JCTree$JCBinary::getOperand($JCTree$JCOperatorExpression$OperandPos* pos) {
	$init($JCTree$JCOperatorExpression$OperandPos);
	return pos == $JCTree$JCOperatorExpression$OperandPos::LEFT ? this->lhs : this->rhs;
}

JCTree$JCBinary::JCTree$JCBinary() {
}

$Class* JCTree$JCBinary::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCBinary, name, initialize, &_JCTree$JCBinary_ClassInfo_, allocate$JCTree$JCBinary);
	return class$;
}

$Class* JCTree$JCBinary::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com