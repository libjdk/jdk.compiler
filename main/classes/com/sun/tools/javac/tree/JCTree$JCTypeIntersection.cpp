#include <com/sun/tools/javac/tree/JCTree$JCTypeIntersection.h>

#include <com/sun/source/tree/IntersectionTypeTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef INTERSECTION_TYPE
#undef TYPEINTERSECTION

using $IntersectionTypeTree = ::com::sun::source::tree::IntersectionTypeTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $1List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _JCTree$JCTypeIntersection_FieldInfo_[] = {
	{"bounds", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC, $field(JCTree$JCTypeIntersection, bounds)},
	{}
};

$MethodInfo _JCTree$JCTypeIntersection_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)V", $PROTECTED, $method(static_cast<void(JCTree$JCTypeIntersection::*)($1List*)>(&JCTree$JCTypeIntersection::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getBounds", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCTypeIntersection_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCTypeIntersection", "com.sun.tools.javac.tree.JCTree", "JCTypeIntersection", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCExpression", "com.sun.tools.javac.tree.JCTree", "JCExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCTypeIntersection_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCTypeIntersection",
	"com.sun.tools.javac.tree.JCTree$JCExpression",
	"com.sun.source.tree.IntersectionTypeTree",
	_JCTree$JCTypeIntersection_FieldInfo_,
	_JCTree$JCTypeIntersection_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCTypeIntersection_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCTypeIntersection($Class* clazz) {
	return $of($alloc(JCTree$JCTypeIntersection));
}

$String* JCTree$JCTypeIntersection::toString() {
	 return this->$JCTree$JCExpression::toString();
}

$Object* JCTree$JCTypeIntersection::clone() {
	 return this->$JCTree$JCExpression::clone();
}

int32_t JCTree$JCTypeIntersection::hashCode() {
	 return this->$JCTree$JCExpression::hashCode();
}

bool JCTree$JCTypeIntersection::equals(Object$* arg0) {
	 return this->$JCTree$JCExpression::equals(arg0);
}

void JCTree$JCTypeIntersection::finalize() {
	this->$JCTree$JCExpression::finalize();
}

void JCTree$JCTypeIntersection::init$($1List* bounds) {
	$JCTree$JCExpression::init$();
	$set(this, bounds, bounds);
}

void JCTree$JCTypeIntersection::accept($JCTree$Visitor* v) {
	$nc(v)->visitTypeIntersection(this);
}

$Tree$Kind* JCTree$JCTypeIntersection::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::INTERSECTION_TYPE;
}

$List* JCTree$JCTypeIntersection::getBounds() {
	return this->bounds;
}

$Object* JCTree$JCTypeIntersection::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitIntersectionType(this, d));
}

$JCTree$Tag* JCTree$JCTypeIntersection::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::TYPEINTERSECTION;
}

JCTree$JCTypeIntersection::JCTree$JCTypeIntersection() {
}

$Class* JCTree$JCTypeIntersection::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCTypeIntersection, name, initialize, &_JCTree$JCTypeIntersection_ClassInfo_, allocate$JCTree$JCTypeIntersection);
	return class$;
}

$Class* JCTree$JCTypeIntersection::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com