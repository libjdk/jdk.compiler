#include <com/sun/tools/javac/tree/JCTree$JCAnnotation.h>

#include <com/sun/source/tree/AnnotationTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/List.h>
#include <jcpp.h>

using $AnnotationTree = ::com::sun::source::tree::AnnotationTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
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

$FieldInfo _JCTree$JCAnnotation_FieldInfo_[] = {
	{"tag", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PRIVATE, $field(JCTree$JCAnnotation, tag)},
	{"annotationType", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC, $field(JCTree$JCAnnotation, annotationType)},
	{"args", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC, $field(JCTree$JCAnnotation, args)},
	{"attribute", "Lcom/sun/tools/javac/code/Attribute$Compound;", nullptr, $PUBLIC, $field(JCTree$JCAnnotation, attribute)},
	{}
};

$MethodInfo _JCTree$JCAnnotation_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$Tag;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/tree/JCTree$Tag;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)V", $PROTECTED, $method(static_cast<void(JCTree$JCAnnotation::*)($JCTree$Tag*,$JCTree*,$1List*)>(&JCTree$JCAnnotation::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getAnnotationType", "()Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC},
	{"getArguments", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCAnnotation_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCAnnotation", "com.sun.tools.javac.tree.JCTree", "JCAnnotation", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCExpression", "com.sun.tools.javac.tree.JCTree", "JCExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCAnnotation_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCAnnotation",
	"com.sun.tools.javac.tree.JCTree$JCExpression",
	"com.sun.source.tree.AnnotationTree",
	_JCTree$JCAnnotation_FieldInfo_,
	_JCTree$JCAnnotation_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCAnnotation_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCAnnotation($Class* clazz) {
	return $of($alloc(JCTree$JCAnnotation));
}

$String* JCTree$JCAnnotation::toString() {
	 return this->$JCTree$JCExpression::toString();
}

$Object* JCTree$JCAnnotation::clone() {
	 return this->$JCTree$JCExpression::clone();
}

int32_t JCTree$JCAnnotation::hashCode() {
	 return this->$JCTree$JCExpression::hashCode();
}

bool JCTree$JCAnnotation::equals(Object$* arg0) {
	 return this->$JCTree$JCExpression::equals(arg0);
}

void JCTree$JCAnnotation::finalize() {
	this->$JCTree$JCExpression::finalize();
}

void JCTree$JCAnnotation::init$($JCTree$Tag* tag, $JCTree* annotationType, $1List* args) {
	$JCTree$JCExpression::init$();
	$set(this, tag, tag);
	$set(this, annotationType, annotationType);
	$set(this, args, args);
}

void JCTree$JCAnnotation::accept($JCTree$Visitor* v) {
	$nc(v)->visitAnnotation(this);
}

$Tree$Kind* JCTree$JCAnnotation::getKind() {
	return $TreeInfo::tagToKind($(getTag()));
}

$JCTree* JCTree$JCAnnotation::getAnnotationType() {
	return this->annotationType;
}

$List* JCTree$JCAnnotation::getArguments() {
	return this->args;
}

$Object* JCTree$JCAnnotation::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitAnnotation(this, d));
}

$JCTree$Tag* JCTree$JCAnnotation::getTag() {
	return this->tag;
}

JCTree$JCAnnotation::JCTree$JCAnnotation() {
}

$Class* JCTree$JCAnnotation::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCAnnotation, name, initialize, &_JCTree$JCAnnotation_ClassInfo_, allocate$JCTree$JCAnnotation);
	return class$;
}

$Class* JCTree$JCAnnotation::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com