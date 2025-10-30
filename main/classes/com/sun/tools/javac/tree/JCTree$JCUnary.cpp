#include <com/sun/tools/javac/tree/JCTree$JCUnary.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/source/tree/UnaryTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCOperatorExpression$OperandPos.h>
#include <com/sun/tools/javac/tree/JCTree$JCOperatorExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $UnaryTree = ::com::sun::source::tree::UnaryTree;
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

$FieldInfo _JCTree$JCUnary_FieldInfo_[] = {
	{"arg", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCUnary, arg)},
	{}
};

$MethodInfo _JCTree$JCUnary_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$Tag;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)V", nullptr, $PROTECTED, $method(static_cast<void(JCTree$JCUnary::*)($JCTree$Tag*,$JCTree$JCExpression*)>(&JCTree$JCUnary::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getExpression", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getOperand", "(Lcom/sun/tools/javac/tree/JCTree$JCOperatorExpression$OperandPos;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"setTag", "(Lcom/sun/tools/javac/tree/JCTree$Tag;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCUnary_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCUnary", "com.sun.tools.javac.tree.JCTree", "JCUnary", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCOperatorExpression", "com.sun.tools.javac.tree.JCTree", "JCOperatorExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCUnary_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCUnary",
	"com.sun.tools.javac.tree.JCTree$JCOperatorExpression",
	"com.sun.source.tree.UnaryTree",
	_JCTree$JCUnary_FieldInfo_,
	_JCTree$JCUnary_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCUnary_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCUnary($Class* clazz) {
	return $of($alloc(JCTree$JCUnary));
}

$String* JCTree$JCUnary::toString() {
	 return this->$JCTree$JCOperatorExpression::toString();
}

$Object* JCTree$JCUnary::clone() {
	 return this->$JCTree$JCOperatorExpression::clone();
}

int32_t JCTree$JCUnary::hashCode() {
	 return this->$JCTree$JCOperatorExpression::hashCode();
}

bool JCTree$JCUnary::equals(Object$* arg0) {
	 return this->$JCTree$JCOperatorExpression::equals(arg0);
}

void JCTree$JCUnary::finalize() {
	this->$JCTree$JCOperatorExpression::finalize();
}

void JCTree$JCUnary::init$($JCTree$Tag* opcode, $JCTree$JCExpression* arg) {
	$JCTree$JCOperatorExpression::init$();
	$set(this, opcode, opcode);
	$set(this, arg, arg);
}

void JCTree$JCUnary::accept($JCTree$Visitor* v) {
	$nc(v)->visitUnary(this);
}

$Tree$Kind* JCTree$JCUnary::getKind() {
	return $TreeInfo::tagToKind($(getTag()));
}

$ExpressionTree* JCTree$JCUnary::getExpression() {
	return this->arg;
}

$Object* JCTree$JCUnary::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitUnary(this, d));
}

void JCTree$JCUnary::setTag($JCTree$Tag* tag) {
	$set(this, opcode, tag);
}

$JCTree$JCExpression* JCTree$JCUnary::getOperand($JCTree$JCOperatorExpression$OperandPos* pos) {
	return this->arg;
}

JCTree$JCUnary::JCTree$JCUnary() {
}

$Class* JCTree$JCUnary::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCUnary, name, initialize, &_JCTree$JCUnary_ClassInfo_, allocate$JCTree$JCUnary);
	return class$;
}

$Class* JCTree$JCUnary::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com