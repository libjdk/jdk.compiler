#include <com/sun/tools/javac/tree/JCTree$JCSynchronized.h>

#include <com/sun/source/tree/BlockTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/SynchronizedTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

#undef SYNCHRONIZED

using $BlockTree = ::com::sun::source::tree::BlockTree;
using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $SynchronizedTree = ::com::sun::source::tree::SynchronizedTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCBlock = ::com::sun::tools::javac::tree::JCTree$JCBlock;
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

$FieldInfo _JCTree$JCSynchronized_FieldInfo_[] = {
	{"lock", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCSynchronized, lock)},
	{"body", "Lcom/sun/tools/javac/tree/JCTree$JCBlock;", nullptr, $PUBLIC, $field(JCTree$JCSynchronized, body)},
	{}
};

$MethodInfo _JCTree$JCSynchronized_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCBlock;)V", nullptr, $PROTECTED, $method(static_cast<void(JCTree$JCSynchronized::*)($JCTree$JCExpression*,$JCTree$JCBlock*)>(&JCTree$JCSynchronized::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getBlock", "()Lcom/sun/tools/javac/tree/JCTree$JCBlock;", nullptr, $PUBLIC},
	{"getExpression", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCSynchronized_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCSynchronized", "com.sun.tools.javac.tree.JCTree", "JCSynchronized", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCStatement", "com.sun.tools.javac.tree.JCTree", "JCStatement", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCSynchronized_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCSynchronized",
	"com.sun.tools.javac.tree.JCTree$JCStatement",
	"com.sun.source.tree.SynchronizedTree",
	_JCTree$JCSynchronized_FieldInfo_,
	_JCTree$JCSynchronized_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCSynchronized_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCSynchronized($Class* clazz) {
	return $of($alloc(JCTree$JCSynchronized));
}

$String* JCTree$JCSynchronized::toString() {
	 return this->$JCTree$JCStatement::toString();
}

$Object* JCTree$JCSynchronized::clone() {
	 return this->$JCTree$JCStatement::clone();
}

int32_t JCTree$JCSynchronized::hashCode() {
	 return this->$JCTree$JCStatement::hashCode();
}

bool JCTree$JCSynchronized::equals(Object$* arg0) {
	 return this->$JCTree$JCStatement::equals(arg0);
}

void JCTree$JCSynchronized::finalize() {
	this->$JCTree$JCStatement::finalize();
}

void JCTree$JCSynchronized::init$($JCTree$JCExpression* lock, $JCTree$JCBlock* body) {
	$JCTree$JCStatement::init$();
	$set(this, lock, lock);
	$set(this, body, body);
}

void JCTree$JCSynchronized::accept($JCTree$Visitor* v) {
	$nc(v)->visitSynchronized(this);
}

$Tree$Kind* JCTree$JCSynchronized::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::SYNCHRONIZED;
}

$ExpressionTree* JCTree$JCSynchronized::getExpression() {
	return this->lock;
}

$BlockTree* JCTree$JCSynchronized::getBlock() {
	return this->body;
}

$Object* JCTree$JCSynchronized::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitSynchronized(this, d));
}

$JCTree$Tag* JCTree$JCSynchronized::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::SYNCHRONIZED;
}

JCTree$JCSynchronized::JCTree$JCSynchronized() {
}

$Class* JCTree$JCSynchronized::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCSynchronized, name, initialize, &_JCTree$JCSynchronized_ClassInfo_, allocate$JCTree$JCSynchronized);
	return class$;
}

$Class* JCTree$JCSynchronized::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com