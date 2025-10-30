#include <com/sun/tools/javac/tree/JCTree$JCArrayTypeTree.h>

#include <com/sun/source/tree/ArrayTypeTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

#undef ARRAY_TYPE
#undef TYPEARRAY

using $ArrayTypeTree = ::com::sun::source::tree::ArrayTypeTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
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

$FieldInfo _JCTree$JCArrayTypeTree_FieldInfo_[] = {
	{"elemtype", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCArrayTypeTree, elemtype)},
	{}
};

$MethodInfo _JCTree$JCArrayTypeTree_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)V", nullptr, $PROTECTED, $method(static_cast<void(JCTree$JCArrayTypeTree::*)($JCTree$JCExpression*)>(&JCTree$JCArrayTypeTree::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"getType", "()Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCArrayTypeTree_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCArrayTypeTree", "com.sun.tools.javac.tree.JCTree", "JCArrayTypeTree", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCExpression", "com.sun.tools.javac.tree.JCTree", "JCExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCArrayTypeTree_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCArrayTypeTree",
	"com.sun.tools.javac.tree.JCTree$JCExpression",
	"com.sun.source.tree.ArrayTypeTree",
	_JCTree$JCArrayTypeTree_FieldInfo_,
	_JCTree$JCArrayTypeTree_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCArrayTypeTree_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCArrayTypeTree($Class* clazz) {
	return $of($alloc(JCTree$JCArrayTypeTree));
}

$String* JCTree$JCArrayTypeTree::toString() {
	 return this->$JCTree$JCExpression::toString();
}

$Object* JCTree$JCArrayTypeTree::clone() {
	 return this->$JCTree$JCExpression::clone();
}

int32_t JCTree$JCArrayTypeTree::hashCode() {
	 return this->$JCTree$JCExpression::hashCode();
}

bool JCTree$JCArrayTypeTree::equals(Object$* arg0) {
	 return this->$JCTree$JCExpression::equals(arg0);
}

void JCTree$JCArrayTypeTree::finalize() {
	this->$JCTree$JCExpression::finalize();
}

void JCTree$JCArrayTypeTree::init$($JCTree$JCExpression* elemtype) {
	$JCTree$JCExpression::init$();
	$set(this, elemtype, elemtype);
}

void JCTree$JCArrayTypeTree::accept($JCTree$Visitor* v) {
	$nc(v)->visitTypeArray(this);
}

$Tree$Kind* JCTree$JCArrayTypeTree::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::ARRAY_TYPE;
}

$JCTree* JCTree$JCArrayTypeTree::getType() {
	return this->elemtype;
}

$Object* JCTree$JCArrayTypeTree::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitArrayType(this, d));
}

$JCTree$Tag* JCTree$JCArrayTypeTree::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::TYPEARRAY;
}

JCTree$JCArrayTypeTree::JCTree$JCArrayTypeTree() {
}

$Class* JCTree$JCArrayTypeTree::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCArrayTypeTree, name, initialize, &_JCTree$JCArrayTypeTree_ClassInfo_, allocate$JCTree$JCArrayTypeTree);
	return class$;
}

$Class* JCTree$JCArrayTypeTree::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com