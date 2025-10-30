#include <com/sun/tools/javac/tree/JCTree$JCThrow.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/ThrowTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

#undef THROW

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $ThrowTree = ::com::sun::source::tree::ThrowTree;
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

$FieldInfo _JCTree$JCThrow_FieldInfo_[] = {
	{"expr", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCThrow, expr)},
	{}
};

$MethodInfo _JCTree$JCThrow_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)V", nullptr, $PROTECTED, $method(static_cast<void(JCTree$JCThrow::*)($JCTree$JCExpression*)>(&JCTree$JCThrow::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getExpression", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCThrow_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCThrow", "com.sun.tools.javac.tree.JCTree", "JCThrow", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCStatement", "com.sun.tools.javac.tree.JCTree", "JCStatement", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCThrow_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCThrow",
	"com.sun.tools.javac.tree.JCTree$JCStatement",
	"com.sun.source.tree.ThrowTree",
	_JCTree$JCThrow_FieldInfo_,
	_JCTree$JCThrow_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCThrow_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCThrow($Class* clazz) {
	return $of($alloc(JCTree$JCThrow));
}

$String* JCTree$JCThrow::toString() {
	 return this->$JCTree$JCStatement::toString();
}

$Object* JCTree$JCThrow::clone() {
	 return this->$JCTree$JCStatement::clone();
}

int32_t JCTree$JCThrow::hashCode() {
	 return this->$JCTree$JCStatement::hashCode();
}

bool JCTree$JCThrow::equals(Object$* arg0) {
	 return this->$JCTree$JCStatement::equals(arg0);
}

void JCTree$JCThrow::finalize() {
	this->$JCTree$JCStatement::finalize();
}

void JCTree$JCThrow::init$($JCTree$JCExpression* expr) {
	$JCTree$JCStatement::init$();
	$set(this, expr, expr);
}

void JCTree$JCThrow::accept($JCTree$Visitor* v) {
	$nc(v)->visitThrow(this);
}

$Tree$Kind* JCTree$JCThrow::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::THROW;
}

$ExpressionTree* JCTree$JCThrow::getExpression() {
	return this->expr;
}

$Object* JCTree$JCThrow::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitThrow(this, d));
}

$JCTree$Tag* JCTree$JCThrow::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::THROW;
}

JCTree$JCThrow::JCTree$JCThrow() {
}

$Class* JCTree$JCThrow::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCThrow, name, initialize, &_JCTree$JCThrow_ClassInfo_, allocate$JCTree$JCThrow);
	return class$;
}

$Class* JCTree$JCThrow::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com