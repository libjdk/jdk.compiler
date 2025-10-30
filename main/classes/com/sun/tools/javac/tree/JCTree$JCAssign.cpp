#include <com/sun/tools/javac/tree/JCTree$JCAssign.h>

#include <com/sun/source/tree/AssignmentTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

#undef ASSIGN
#undef ASSIGNMENT

using $AssignmentTree = ::com::sun::source::tree::AssignmentTree;
using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
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

$FieldInfo _JCTree$JCAssign_FieldInfo_[] = {
	{"lhs", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCAssign, lhs)},
	{"rhs", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCAssign, rhs)},
	{}
};

$MethodInfo _JCTree$JCAssign_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)V", nullptr, $PROTECTED, $method(static_cast<void(JCTree$JCAssign::*)($JCTree$JCExpression*,$JCTree$JCExpression*)>(&JCTree$JCAssign::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getExpression", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"getVariable", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCAssign_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCAssign", "com.sun.tools.javac.tree.JCTree", "JCAssign", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCExpression", "com.sun.tools.javac.tree.JCTree", "JCExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCAssign_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCAssign",
	"com.sun.tools.javac.tree.JCTree$JCExpression",
	"com.sun.source.tree.AssignmentTree",
	_JCTree$JCAssign_FieldInfo_,
	_JCTree$JCAssign_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCAssign_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCAssign($Class* clazz) {
	return $of($alloc(JCTree$JCAssign));
}

$String* JCTree$JCAssign::toString() {
	 return this->$JCTree$JCExpression::toString();
}

$Object* JCTree$JCAssign::clone() {
	 return this->$JCTree$JCExpression::clone();
}

int32_t JCTree$JCAssign::hashCode() {
	 return this->$JCTree$JCExpression::hashCode();
}

bool JCTree$JCAssign::equals(Object$* arg0) {
	 return this->$JCTree$JCExpression::equals(arg0);
}

void JCTree$JCAssign::finalize() {
	this->$JCTree$JCExpression::finalize();
}

void JCTree$JCAssign::init$($JCTree$JCExpression* lhs, $JCTree$JCExpression* rhs) {
	$JCTree$JCExpression::init$();
	$set(this, lhs, lhs);
	$set(this, rhs, rhs);
}

void JCTree$JCAssign::accept($JCTree$Visitor* v) {
	$nc(v)->visitAssign(this);
}

$Tree$Kind* JCTree$JCAssign::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::ASSIGNMENT;
}

$ExpressionTree* JCTree$JCAssign::getVariable() {
	return this->lhs;
}

$ExpressionTree* JCTree$JCAssign::getExpression() {
	return this->rhs;
}

$Object* JCTree$JCAssign::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitAssignment(this, d));
}

$JCTree$Tag* JCTree$JCAssign::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::ASSIGN;
}

JCTree$JCAssign::JCTree$JCAssign() {
}

$Class* JCTree$JCAssign::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCAssign, name, initialize, &_JCTree$JCAssign_ClassInfo_, allocate$JCTree$JCAssign);
	return class$;
}

$Class* JCTree$JCAssign::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com