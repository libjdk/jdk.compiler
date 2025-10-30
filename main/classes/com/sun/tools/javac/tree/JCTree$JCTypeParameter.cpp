#include <com/sun/tools/javac/tree/JCTree$JCTypeParameter.h>

#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/source/tree/TypeParameterTree.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/util/List.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

#undef TYPEPARAMETER
#undef TYPE_PARAMETER

using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $TypeParameterTree = ::com::sun::source::tree::TypeParameterTree;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $1List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $1Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _JCTree$JCTypeParameter_FieldInfo_[] = {
	{"name", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC, $field(JCTree$JCTypeParameter, name)},
	{"bounds", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC, $field(JCTree$JCTypeParameter, bounds)},
	{"annotations", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;", $PUBLIC, $field(JCTree$JCTypeParameter, annotations)},
	{}
};

$MethodInfo _JCTree$JCTypeParameter_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;)V", $PROTECTED, $method(static_cast<void(JCTree$JCTypeParameter::*)($Name*,$1List*,$1List*)>(&JCTree$JCTypeParameter::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getAnnotations", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;", $PUBLIC},
	{"getBounds", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getName", "()Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCTypeParameter_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCTypeParameter", "com.sun.tools.javac.tree.JCTree", "JCTypeParameter", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JCTree$JCTypeParameter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCTypeParameter",
	"com.sun.tools.javac.tree.JCTree",
	"com.sun.source.tree.TypeParameterTree",
	_JCTree$JCTypeParameter_FieldInfo_,
	_JCTree$JCTypeParameter_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCTypeParameter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCTypeParameter($Class* clazz) {
	return $of($alloc(JCTree$JCTypeParameter));
}

$String* JCTree$JCTypeParameter::toString() {
	 return this->$JCTree::toString();
}

$Object* JCTree$JCTypeParameter::clone() {
	 return this->$JCTree::clone();
}

int32_t JCTree$JCTypeParameter::hashCode() {
	 return this->$JCTree::hashCode();
}

bool JCTree$JCTypeParameter::equals(Object$* arg0) {
	 return this->$JCTree::equals(arg0);
}

void JCTree$JCTypeParameter::finalize() {
	this->$JCTree::finalize();
}

void JCTree$JCTypeParameter::init$($Name* name, $1List* bounds, $1List* annotations) {
	$JCTree::init$();
	$set(this, name, name);
	$set(this, bounds, bounds);
	$set(this, annotations, annotations);
}

void JCTree$JCTypeParameter::accept($JCTree$Visitor* v) {
	$nc(v)->visitTypeParameter(this);
}

$Tree$Kind* JCTree$JCTypeParameter::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::TYPE_PARAMETER;
}

$1Name* JCTree$JCTypeParameter::getName() {
	return this->name;
}

$List* JCTree$JCTypeParameter::getBounds() {
	return this->bounds;
}

$List* JCTree$JCTypeParameter::getAnnotations() {
	return this->annotations;
}

$Object* JCTree$JCTypeParameter::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitTypeParameter(this, d));
}

$JCTree$Tag* JCTree$JCTypeParameter::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::TYPEPARAMETER;
}

JCTree$JCTypeParameter::JCTree$JCTypeParameter() {
}

$Class* JCTree$JCTypeParameter::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCTypeParameter, name, initialize, &_JCTree$JCTypeParameter_ClassInfo_, allocate$JCTree$JCTypeParameter);
	return class$;
}

$Class* JCTree$JCTypeParameter::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com