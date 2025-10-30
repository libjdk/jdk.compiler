#include <com/sun/tools/javac/tree/JCTree$JCParens.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/ParenthesizedTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

#undef PARENS
#undef PARENTHESIZED

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $ParenthesizedTree = ::com::sun::source::tree::ParenthesizedTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
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

$FieldInfo _JCTree$JCParens_FieldInfo_[] = {
	{"expr", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCParens, expr)},
	{}
};

$MethodInfo _JCTree$JCParens_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)V", nullptr, $PROTECTED, $method(static_cast<void(JCTree$JCParens::*)($JCTree$JCExpression*)>(&JCTree$JCParens::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getExpression", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCParens_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCParens", "com.sun.tools.javac.tree.JCTree", "JCParens", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCExpression", "com.sun.tools.javac.tree.JCTree", "JCExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCParens_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCParens",
	"com.sun.tools.javac.tree.JCTree$JCExpression",
	"com.sun.source.tree.ParenthesizedTree",
	_JCTree$JCParens_FieldInfo_,
	_JCTree$JCParens_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCParens_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCParens($Class* clazz) {
	return $of($alloc(JCTree$JCParens));
}

$String* JCTree$JCParens::toString() {
	 return this->$JCTree$JCExpression::toString();
}

$Object* JCTree$JCParens::clone() {
	 return this->$JCTree$JCExpression::clone();
}

int32_t JCTree$JCParens::hashCode() {
	 return this->$JCTree$JCExpression::hashCode();
}

bool JCTree$JCParens::equals(Object$* arg0) {
	 return this->$JCTree$JCExpression::equals(arg0);
}

void JCTree$JCParens::finalize() {
	this->$JCTree$JCExpression::finalize();
}

void JCTree$JCParens::init$($JCTree$JCExpression* expr) {
	$JCTree$JCExpression::init$();
	$set(this, expr, expr);
}

void JCTree$JCParens::accept($JCTree$Visitor* v) {
	$nc(v)->visitParens(this);
}

$Tree$Kind* JCTree$JCParens::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::PARENTHESIZED;
}

$ExpressionTree* JCTree$JCParens::getExpression() {
	return this->expr;
}

$Object* JCTree$JCParens::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitParenthesized(this, d));
}

$JCTree$Tag* JCTree$JCParens::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::PARENS;
}

JCTree$JCParens::JCTree$JCParens() {
}

$Class* JCTree$JCParens::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCParens, name, initialize, &_JCTree$JCParens_ClassInfo_, allocate$JCTree$JCParens);
	return class$;
}

$Class* JCTree$JCParens::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com