#include <com/sun/tools/javac/tree/JCTree$JCIf.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/IfTree.h>
#include <com/sun/source/tree/StatementTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

#undef IF

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $IfTree = ::com::sun::source::tree::IfTree;
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

$FieldInfo _JCTree$JCIf_FieldInfo_[] = {
	{"cond", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCIf, cond)},
	{"thenpart", "Lcom/sun/tools/javac/tree/JCTree$JCStatement;", nullptr, $PUBLIC, $field(JCTree$JCIf, thenpart)},
	{"elsepart", "Lcom/sun/tools/javac/tree/JCTree$JCStatement;", nullptr, $PUBLIC, $field(JCTree$JCIf, elsepart)},
	{}
};

$MethodInfo _JCTree$JCIf_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCStatement;Lcom/sun/tools/javac/tree/JCTree$JCStatement;)V", nullptr, $PROTECTED, $method(static_cast<void(JCTree$JCIf::*)($JCTree$JCExpression*,$JCTree$JCStatement*,$JCTree$JCStatement*)>(&JCTree$JCIf::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getCondition", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getElseStatement", "()Lcom/sun/tools/javac/tree/JCTree$JCStatement;", nullptr, $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"getThenStatement", "()Lcom/sun/tools/javac/tree/JCTree$JCStatement;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCIf_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCIf", "com.sun.tools.javac.tree.JCTree", "JCIf", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCStatement", "com.sun.tools.javac.tree.JCTree", "JCStatement", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCIf_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCIf",
	"com.sun.tools.javac.tree.JCTree$JCStatement",
	"com.sun.source.tree.IfTree",
	_JCTree$JCIf_FieldInfo_,
	_JCTree$JCIf_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCIf_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCIf($Class* clazz) {
	return $of($alloc(JCTree$JCIf));
}

$String* JCTree$JCIf::toString() {
	 return this->$JCTree$JCStatement::toString();
}

$Object* JCTree$JCIf::clone() {
	 return this->$JCTree$JCStatement::clone();
}

int32_t JCTree$JCIf::hashCode() {
	 return this->$JCTree$JCStatement::hashCode();
}

bool JCTree$JCIf::equals(Object$* arg0) {
	 return this->$JCTree$JCStatement::equals(arg0);
}

void JCTree$JCIf::finalize() {
	this->$JCTree$JCStatement::finalize();
}

void JCTree$JCIf::init$($JCTree$JCExpression* cond, $JCTree$JCStatement* thenpart, $JCTree$JCStatement* elsepart) {
	$JCTree$JCStatement::init$();
	$set(this, cond, cond);
	$set(this, thenpart, thenpart);
	$set(this, elsepart, elsepart);
}

void JCTree$JCIf::accept($JCTree$Visitor* v) {
	$nc(v)->visitIf(this);
}

$Tree$Kind* JCTree$JCIf::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::IF;
}

$ExpressionTree* JCTree$JCIf::getCondition() {
	return this->cond;
}

$StatementTree* JCTree$JCIf::getThenStatement() {
	return this->thenpart;
}

$StatementTree* JCTree$JCIf::getElseStatement() {
	return this->elsepart;
}

$Object* JCTree$JCIf::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitIf(this, d));
}

$JCTree$Tag* JCTree$JCIf::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::IF;
}

JCTree$JCIf::JCTree$JCIf() {
}

$Class* JCTree$JCIf::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCIf, name, initialize, &_JCTree$JCIf_ClassInfo_, allocate$JCTree$JCIf);
	return class$;
}

$Class* JCTree$JCIf::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com