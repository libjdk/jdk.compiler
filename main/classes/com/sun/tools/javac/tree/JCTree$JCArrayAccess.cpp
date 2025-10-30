#include <com/sun/tools/javac/tree/JCTree$JCArrayAccess.h>

#include <com/sun/source/tree/ArrayAccessTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

#undef ARRAY_ACCESS
#undef INDEXED

using $ArrayAccessTree = ::com::sun::source::tree::ArrayAccessTree;
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

$FieldInfo _JCTree$JCArrayAccess_FieldInfo_[] = {
	{"indexed", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCArrayAccess, indexed)},
	{"index", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCArrayAccess, index)},
	{}
};

$MethodInfo _JCTree$JCArrayAccess_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)V", nullptr, $PROTECTED, $method(static_cast<void(JCTree$JCArrayAccess::*)($JCTree$JCExpression*,$JCTree$JCExpression*)>(&JCTree$JCArrayAccess::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getExpression", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getIndex", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCArrayAccess_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCArrayAccess", "com.sun.tools.javac.tree.JCTree", "JCArrayAccess", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCExpression", "com.sun.tools.javac.tree.JCTree", "JCExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCArrayAccess_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCArrayAccess",
	"com.sun.tools.javac.tree.JCTree$JCExpression",
	"com.sun.source.tree.ArrayAccessTree",
	_JCTree$JCArrayAccess_FieldInfo_,
	_JCTree$JCArrayAccess_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCArrayAccess_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCArrayAccess($Class* clazz) {
	return $of($alloc(JCTree$JCArrayAccess));
}

$String* JCTree$JCArrayAccess::toString() {
	 return this->$JCTree$JCExpression::toString();
}

$Object* JCTree$JCArrayAccess::clone() {
	 return this->$JCTree$JCExpression::clone();
}

int32_t JCTree$JCArrayAccess::hashCode() {
	 return this->$JCTree$JCExpression::hashCode();
}

bool JCTree$JCArrayAccess::equals(Object$* arg0) {
	 return this->$JCTree$JCExpression::equals(arg0);
}

void JCTree$JCArrayAccess::finalize() {
	this->$JCTree$JCExpression::finalize();
}

void JCTree$JCArrayAccess::init$($JCTree$JCExpression* indexed, $JCTree$JCExpression* index) {
	$JCTree$JCExpression::init$();
	$set(this, indexed, indexed);
	$set(this, index, index);
}

void JCTree$JCArrayAccess::accept($JCTree$Visitor* v) {
	$nc(v)->visitIndexed(this);
}

$Tree$Kind* JCTree$JCArrayAccess::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::ARRAY_ACCESS;
}

$ExpressionTree* JCTree$JCArrayAccess::getExpression() {
	return this->indexed;
}

$ExpressionTree* JCTree$JCArrayAccess::getIndex() {
	return this->index;
}

$Object* JCTree$JCArrayAccess::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitArrayAccess(this, d));
}

$JCTree$Tag* JCTree$JCArrayAccess::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::INDEXED;
}

JCTree$JCArrayAccess::JCTree$JCArrayAccess() {
}

$Class* JCTree$JCArrayAccess::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCArrayAccess, name, initialize, &_JCTree$JCArrayAccess_ClassInfo_, allocate$JCTree$JCArrayAccess);
	return class$;
}

$Class* JCTree$JCArrayAccess::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com