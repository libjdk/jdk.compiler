#include <com/sun/tools/javac/tree/JCTree$JCYield.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/source/tree/YieldTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

#undef YIELD

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $YieldTree = ::com::sun::source::tree::YieldTree;
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

$FieldInfo _JCTree$JCYield_FieldInfo_[] = {
	{"value", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCYield, value)},
	{"target", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC, $field(JCTree$JCYield, target)},
	{}
};

$MethodInfo _JCTree$JCYield_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PROTECTED, $method(static_cast<void(JCTree$JCYield::*)($JCTree$JCExpression*,$JCTree*)>(&JCTree$JCYield::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"getValue", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCYield_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCYield", "com.sun.tools.javac.tree.JCTree", "JCYield", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCStatement", "com.sun.tools.javac.tree.JCTree", "JCStatement", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCYield_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCYield",
	"com.sun.tools.javac.tree.JCTree$JCStatement",
	"com.sun.source.tree.YieldTree",
	_JCTree$JCYield_FieldInfo_,
	_JCTree$JCYield_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCYield_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCYield($Class* clazz) {
	return $of($alloc(JCTree$JCYield));
}

$String* JCTree$JCYield::toString() {
	 return this->$JCTree$JCStatement::toString();
}

$Object* JCTree$JCYield::clone() {
	 return this->$JCTree$JCStatement::clone();
}

int32_t JCTree$JCYield::hashCode() {
	 return this->$JCTree$JCStatement::hashCode();
}

bool JCTree$JCYield::equals(Object$* arg0) {
	 return this->$JCTree$JCStatement::equals(arg0);
}

void JCTree$JCYield::finalize() {
	this->$JCTree$JCStatement::finalize();
}

void JCTree$JCYield::init$($JCTree$JCExpression* value, $JCTree* target) {
	$JCTree$JCStatement::init$();
	$set(this, value, value);
	$set(this, target, target);
}

void JCTree$JCYield::accept($JCTree$Visitor* v) {
	$nc(v)->visitYield(this);
}

$Tree$Kind* JCTree$JCYield::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::YIELD;
}

$ExpressionTree* JCTree$JCYield::getValue() {
	return this->value;
}

$Object* JCTree$JCYield::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitYield(this, d));
}

$JCTree$Tag* JCTree$JCYield::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::YIELD;
}

JCTree$JCYield::JCTree$JCYield() {
}

$Class* JCTree$JCYield::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCYield, name, initialize, &_JCTree$JCYield_ClassInfo_, allocate$JCTree$JCYield);
	return class$;
}

$Class* JCTree$JCYield::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com