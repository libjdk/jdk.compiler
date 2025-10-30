#include <com/sun/tools/javac/tree/JCTree$JCPrimitiveTypeTree.h>

#include <com/sun/source/tree/PrimitiveTypeTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <javax/lang/model/type/TypeKind.h>
#include <jcpp.h>

#undef PRIMITIVE_TYPE
#undef TYPEIDENT

using $PrimitiveTypeTree = ::com::sun::source::tree::PrimitiveTypeTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeKind = ::javax::lang::model::type::TypeKind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _JCTree$JCPrimitiveTypeTree_FieldInfo_[] = {
	{"typetag", "Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC, $field(JCTree$JCPrimitiveTypeTree, typetag)},
	{}
};

$MethodInfo _JCTree$JCPrimitiveTypeTree_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/code/TypeTag;)V", nullptr, $PROTECTED, $method(static_cast<void(JCTree$JCPrimitiveTypeTree::*)($TypeTag*)>(&JCTree$JCPrimitiveTypeTree::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getPrimitiveTypeKind", "()Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCPrimitiveTypeTree_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCPrimitiveTypeTree", "com.sun.tools.javac.tree.JCTree", "JCPrimitiveTypeTree", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCExpression", "com.sun.tools.javac.tree.JCTree", "JCExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCPrimitiveTypeTree_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCPrimitiveTypeTree",
	"com.sun.tools.javac.tree.JCTree$JCExpression",
	"com.sun.source.tree.PrimitiveTypeTree",
	_JCTree$JCPrimitiveTypeTree_FieldInfo_,
	_JCTree$JCPrimitiveTypeTree_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCPrimitiveTypeTree_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCPrimitiveTypeTree($Class* clazz) {
	return $of($alloc(JCTree$JCPrimitiveTypeTree));
}

$String* JCTree$JCPrimitiveTypeTree::toString() {
	 return this->$JCTree$JCExpression::toString();
}

$Object* JCTree$JCPrimitiveTypeTree::clone() {
	 return this->$JCTree$JCExpression::clone();
}

int32_t JCTree$JCPrimitiveTypeTree::hashCode() {
	 return this->$JCTree$JCExpression::hashCode();
}

bool JCTree$JCPrimitiveTypeTree::equals(Object$* arg0) {
	 return this->$JCTree$JCExpression::equals(arg0);
}

void JCTree$JCPrimitiveTypeTree::finalize() {
	this->$JCTree$JCExpression::finalize();
}

void JCTree$JCPrimitiveTypeTree::init$($TypeTag* typetag) {
	$JCTree$JCExpression::init$();
	$set(this, typetag, typetag);
}

void JCTree$JCPrimitiveTypeTree::accept($JCTree$Visitor* v) {
	$nc(v)->visitTypeIdent(this);
}

$Tree$Kind* JCTree$JCPrimitiveTypeTree::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::PRIMITIVE_TYPE;
}

$TypeKind* JCTree$JCPrimitiveTypeTree::getPrimitiveTypeKind() {
	return $nc(this->typetag)->getPrimitiveTypeKind();
}

$Object* JCTree$JCPrimitiveTypeTree::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitPrimitiveType(this, d));
}

$JCTree$Tag* JCTree$JCPrimitiveTypeTree::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::TYPEIDENT;
}

JCTree$JCPrimitiveTypeTree::JCTree$JCPrimitiveTypeTree() {
}

$Class* JCTree$JCPrimitiveTypeTree::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCPrimitiveTypeTree, name, initialize, &_JCTree$JCPrimitiveTypeTree_ClassInfo_, allocate$JCTree$JCPrimitiveTypeTree);
	return class$;
}

$Class* JCTree$JCPrimitiveTypeTree::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com