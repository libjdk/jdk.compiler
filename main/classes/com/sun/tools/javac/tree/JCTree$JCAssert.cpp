#include <com/sun/tools/javac/tree/JCTree$JCAssert.h>

#include <com/sun/source/tree/AssertTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

#undef ASSERT

using $AssertTree = ::com::sun::source::tree::AssertTree;
using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
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

$FieldInfo _JCTree$JCAssert_FieldInfo_[] = {
	{"cond", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCAssert, cond)},
	{"detail", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCAssert, detail)},
	{}
};

$MethodInfo _JCTree$JCAssert_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)V", nullptr, $PROTECTED, $method(static_cast<void(JCTree$JCAssert::*)($JCTree$JCExpression*,$JCTree$JCExpression*)>(&JCTree$JCAssert::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getCondition", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getDetail", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCAssert_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCAssert", "com.sun.tools.javac.tree.JCTree", "JCAssert", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCStatement", "com.sun.tools.javac.tree.JCTree", "JCStatement", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCAssert_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCAssert",
	"com.sun.tools.javac.tree.JCTree$JCStatement",
	"com.sun.source.tree.AssertTree",
	_JCTree$JCAssert_FieldInfo_,
	_JCTree$JCAssert_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCAssert_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCAssert($Class* clazz) {
	return $of($alloc(JCTree$JCAssert));
}

$String* JCTree$JCAssert::toString() {
	 return this->$JCTree$JCStatement::toString();
}

$Object* JCTree$JCAssert::clone() {
	 return this->$JCTree$JCStatement::clone();
}

int32_t JCTree$JCAssert::hashCode() {
	 return this->$JCTree$JCStatement::hashCode();
}

bool JCTree$JCAssert::equals(Object$* arg0) {
	 return this->$JCTree$JCStatement::equals(arg0);
}

void JCTree$JCAssert::finalize() {
	this->$JCTree$JCStatement::finalize();
}

void JCTree$JCAssert::init$($JCTree$JCExpression* cond, $JCTree$JCExpression* detail) {
	$JCTree$JCStatement::init$();
	$set(this, cond, cond);
	$set(this, detail, detail);
}

void JCTree$JCAssert::accept($JCTree$Visitor* v) {
	$nc(v)->visitAssert(this);
}

$Tree$Kind* JCTree$JCAssert::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::ASSERT;
}

$ExpressionTree* JCTree$JCAssert::getCondition() {
	return this->cond;
}

$ExpressionTree* JCTree$JCAssert::getDetail() {
	return this->detail;
}

$Object* JCTree$JCAssert::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitAssert(this, d));
}

$JCTree$Tag* JCTree$JCAssert::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::ASSERT;
}

JCTree$JCAssert::JCTree$JCAssert() {
}

$Class* JCTree$JCAssert::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCAssert, name, initialize, &_JCTree$JCAssert_ClassInfo_, allocate$JCTree$JCAssert);
	return class$;
}

$Class* JCTree$JCAssert::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com