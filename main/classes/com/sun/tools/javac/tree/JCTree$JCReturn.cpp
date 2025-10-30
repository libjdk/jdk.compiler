#include <com/sun/tools/javac/tree/JCTree$JCReturn.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/ReturnTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

#undef RETURN

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $ReturnTree = ::com::sun::source::tree::ReturnTree;
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

$FieldInfo _JCTree$JCReturn_FieldInfo_[] = {
	{"expr", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCReturn, expr)},
	{}
};

$MethodInfo _JCTree$JCReturn_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)V", nullptr, $PROTECTED, $method(static_cast<void(JCTree$JCReturn::*)($JCTree$JCExpression*)>(&JCTree$JCReturn::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getExpression", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCReturn_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCReturn", "com.sun.tools.javac.tree.JCTree", "JCReturn", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCStatement", "com.sun.tools.javac.tree.JCTree", "JCStatement", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCReturn_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCReturn",
	"com.sun.tools.javac.tree.JCTree$JCStatement",
	"com.sun.source.tree.ReturnTree",
	_JCTree$JCReturn_FieldInfo_,
	_JCTree$JCReturn_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCReturn_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCReturn($Class* clazz) {
	return $of($alloc(JCTree$JCReturn));
}

$String* JCTree$JCReturn::toString() {
	 return this->$JCTree$JCStatement::toString();
}

$Object* JCTree$JCReturn::clone() {
	 return this->$JCTree$JCStatement::clone();
}

int32_t JCTree$JCReturn::hashCode() {
	 return this->$JCTree$JCStatement::hashCode();
}

bool JCTree$JCReturn::equals(Object$* arg0) {
	 return this->$JCTree$JCStatement::equals(arg0);
}

void JCTree$JCReturn::finalize() {
	this->$JCTree$JCStatement::finalize();
}

void JCTree$JCReturn::init$($JCTree$JCExpression* expr) {
	$JCTree$JCStatement::init$();
	$set(this, expr, expr);
}

void JCTree$JCReturn::accept($JCTree$Visitor* v) {
	$nc(v)->visitReturn(this);
}

$Tree$Kind* JCTree$JCReturn::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::RETURN;
}

$ExpressionTree* JCTree$JCReturn::getExpression() {
	return this->expr;
}

$Object* JCTree$JCReturn::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitReturn(this, d));
}

$JCTree$Tag* JCTree$JCReturn::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::RETURN;
}

JCTree$JCReturn::JCTree$JCReturn() {
}

$Class* JCTree$JCReturn::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCReturn, name, initialize, &_JCTree$JCReturn_ClassInfo_, allocate$JCTree$JCReturn);
	return class$;
}

$Class* JCTree$JCReturn::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com