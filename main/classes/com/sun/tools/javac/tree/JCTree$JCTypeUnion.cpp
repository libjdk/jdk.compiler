#include <com/sun/tools/javac/tree/JCTree$JCTypeUnion.h>

#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/source/tree/UnionTypeTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef TYPEUNION
#undef UNION_TYPE

using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $UnionTypeTree = ::com::sun::source::tree::UnionTypeTree;
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

$FieldInfo _JCTree$JCTypeUnion_FieldInfo_[] = {
	{"alternatives", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC, $field(JCTree$JCTypeUnion, alternatives)},
	{}
};

$MethodInfo _JCTree$JCTypeUnion_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)V", $PROTECTED, $method(static_cast<void(JCTree$JCTypeUnion::*)($1List*)>(&JCTree$JCTypeUnion::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"getTypeAlternatives", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCTypeUnion_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCTypeUnion", "com.sun.tools.javac.tree.JCTree", "JCTypeUnion", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCExpression", "com.sun.tools.javac.tree.JCTree", "JCExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCTypeUnion_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCTypeUnion",
	"com.sun.tools.javac.tree.JCTree$JCExpression",
	"com.sun.source.tree.UnionTypeTree",
	_JCTree$JCTypeUnion_FieldInfo_,
	_JCTree$JCTypeUnion_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCTypeUnion_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCTypeUnion($Class* clazz) {
	return $of($alloc(JCTree$JCTypeUnion));
}

$String* JCTree$JCTypeUnion::toString() {
	 return this->$JCTree$JCExpression::toString();
}

$Object* JCTree$JCTypeUnion::clone() {
	 return this->$JCTree$JCExpression::clone();
}

int32_t JCTree$JCTypeUnion::hashCode() {
	 return this->$JCTree$JCExpression::hashCode();
}

bool JCTree$JCTypeUnion::equals(Object$* arg0) {
	 return this->$JCTree$JCExpression::equals(arg0);
}

void JCTree$JCTypeUnion::finalize() {
	this->$JCTree$JCExpression::finalize();
}

void JCTree$JCTypeUnion::init$($1List* components) {
	$JCTree$JCExpression::init$();
	$set(this, alternatives, components);
}

void JCTree$JCTypeUnion::accept($JCTree$Visitor* v) {
	$nc(v)->visitTypeUnion(this);
}

$Tree$Kind* JCTree$JCTypeUnion::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::UNION_TYPE;
}

$List* JCTree$JCTypeUnion::getTypeAlternatives() {
	return this->alternatives;
}

$Object* JCTree$JCTypeUnion::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitUnionType(this, d));
}

$JCTree$Tag* JCTree$JCTypeUnion::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::TYPEUNION;
}

JCTree$JCTypeUnion::JCTree$JCTypeUnion() {
}

$Class* JCTree$JCTypeUnion::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCTypeUnion, name, initialize, &_JCTree$JCTypeUnion_ClassInfo_, allocate$JCTree$JCTypeUnion);
	return class$;
}

$Class* JCTree$JCTypeUnion::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com