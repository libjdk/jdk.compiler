#include <com/sun/tools/javac/tree/JCTree$JCConditional.h>

#include <com/sun/source/tree/ConditionalExpressionTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

#undef CONDEXPR
#undef CONDITIONAL_EXPRESSION

using $ConditionalExpressionTree = ::com::sun::source::tree::ConditionalExpressionTree;
using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
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

$FieldInfo _JCTree$JCConditional_FieldInfo_[] = {
	{"cond", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCConditional, cond)},
	{"truepart", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCConditional, truepart)},
	{"falsepart", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCConditional, falsepart)},
	{}
};

$MethodInfo _JCTree$JCConditional_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)V", nullptr, $PROTECTED, $method(static_cast<void(JCTree$JCConditional::*)($JCTree$JCExpression*,$JCTree$JCExpression*,$JCTree$JCExpression*)>(&JCTree$JCConditional::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getCondition", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getFalseExpression", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"getTrueExpression", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCConditional_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCConditional", "com.sun.tools.javac.tree.JCTree", "JCConditional", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCPolyExpression", "com.sun.tools.javac.tree.JCTree", "JCPolyExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCConditional_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCConditional",
	"com.sun.tools.javac.tree.JCTree$JCPolyExpression",
	"com.sun.source.tree.ConditionalExpressionTree",
	_JCTree$JCConditional_FieldInfo_,
	_JCTree$JCConditional_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCConditional_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCConditional($Class* clazz) {
	return $of($alloc(JCTree$JCConditional));
}

$String* JCTree$JCConditional::toString() {
	 return this->$JCTree$JCPolyExpression::toString();
}

$Object* JCTree$JCConditional::clone() {
	 return this->$JCTree$JCPolyExpression::clone();
}

int32_t JCTree$JCConditional::hashCode() {
	 return this->$JCTree$JCPolyExpression::hashCode();
}

bool JCTree$JCConditional::equals(Object$* arg0) {
	 return this->$JCTree$JCPolyExpression::equals(arg0);
}

void JCTree$JCConditional::finalize() {
	this->$JCTree$JCPolyExpression::finalize();
}

void JCTree$JCConditional::init$($JCTree$JCExpression* cond, $JCTree$JCExpression* truepart, $JCTree$JCExpression* falsepart) {
	$JCTree$JCPolyExpression::init$();
	$set(this, cond, cond);
	$set(this, truepart, truepart);
	$set(this, falsepart, falsepart);
}

void JCTree$JCConditional::accept($JCTree$Visitor* v) {
	$nc(v)->visitConditional(this);
}

$Tree$Kind* JCTree$JCConditional::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::CONDITIONAL_EXPRESSION;
}

$ExpressionTree* JCTree$JCConditional::getCondition() {
	return this->cond;
}

$ExpressionTree* JCTree$JCConditional::getTrueExpression() {
	return this->truepart;
}

$ExpressionTree* JCTree$JCConditional::getFalseExpression() {
	return this->falsepart;
}

$Object* JCTree$JCConditional::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitConditionalExpression(this, d));
}

$JCTree$Tag* JCTree$JCConditional::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::CONDEXPR;
}

JCTree$JCConditional::JCTree$JCConditional() {
}

$Class* JCTree$JCConditional::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCConditional, name, initialize, &_JCTree$JCConditional_ClassInfo_, allocate$JCTree$JCConditional);
	return class$;
}

$Class* JCTree$JCConditional::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com