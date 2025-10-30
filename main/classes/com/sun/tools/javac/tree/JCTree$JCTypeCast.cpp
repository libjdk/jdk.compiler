#include <com/sun/tools/javac/tree/JCTree$JCTypeCast.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/source/tree/TypeCastTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

#undef TYPECAST
#undef TYPE_CAST

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $TypeCastTree = ::com::sun::source::tree::TypeCastTree;
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

$FieldInfo _JCTree$JCTypeCast_FieldInfo_[] = {
	{"clazz", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC, $field(JCTree$JCTypeCast, clazz)},
	{"expr", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCTypeCast, expr)},
	{}
};

$MethodInfo _JCTree$JCTypeCast_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)V", nullptr, $PROTECTED, $method(static_cast<void(JCTree$JCTypeCast::*)($JCTree*,$JCTree$JCExpression*)>(&JCTree$JCTypeCast::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getExpression", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"getType", "()Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCTypeCast_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCTypeCast", "com.sun.tools.javac.tree.JCTree", "JCTypeCast", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCExpression", "com.sun.tools.javac.tree.JCTree", "JCExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCTypeCast_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCTypeCast",
	"com.sun.tools.javac.tree.JCTree$JCExpression",
	"com.sun.source.tree.TypeCastTree",
	_JCTree$JCTypeCast_FieldInfo_,
	_JCTree$JCTypeCast_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCTypeCast_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCTypeCast($Class* clazz) {
	return $of($alloc(JCTree$JCTypeCast));
}

$String* JCTree$JCTypeCast::toString() {
	 return this->$JCTree$JCExpression::toString();
}

$Object* JCTree$JCTypeCast::clone() {
	 return this->$JCTree$JCExpression::clone();
}

int32_t JCTree$JCTypeCast::hashCode() {
	 return this->$JCTree$JCExpression::hashCode();
}

bool JCTree$JCTypeCast::equals(Object$* arg0) {
	 return this->$JCTree$JCExpression::equals(arg0);
}

void JCTree$JCTypeCast::finalize() {
	this->$JCTree$JCExpression::finalize();
}

void JCTree$JCTypeCast::init$($JCTree* clazz, $JCTree$JCExpression* expr) {
	$JCTree$JCExpression::init$();
	$set(this, clazz, clazz);
	$set(this, expr, expr);
}

void JCTree$JCTypeCast::accept($JCTree$Visitor* v) {
	$nc(v)->visitTypeCast(this);
}

$Tree$Kind* JCTree$JCTypeCast::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::TYPE_CAST;
}

$JCTree* JCTree$JCTypeCast::getType() {
	return this->clazz;
}

$ExpressionTree* JCTree$JCTypeCast::getExpression() {
	return this->expr;
}

$Object* JCTree$JCTypeCast::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitTypeCast(this, d));
}

$JCTree$Tag* JCTree$JCTypeCast::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::TYPECAST;
}

JCTree$JCTypeCast::JCTree$JCTypeCast() {
}

$Class* JCTree$JCTypeCast::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCTypeCast, name, initialize, &_JCTree$JCTypeCast_ClassInfo_, allocate$JCTree$JCTypeCast);
	return class$;
}

$Class* JCTree$JCTypeCast::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com