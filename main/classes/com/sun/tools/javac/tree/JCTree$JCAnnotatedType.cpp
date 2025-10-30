#include <com/sun/tools/javac/tree/JCTree$JCAnnotatedType.h>

#include <com/sun/source/tree/AnnotatedTypeTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef ANNOTATED_TYPE

using $AnnotatedTypeTree = ::com::sun::source::tree::AnnotatedTypeTree;
using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $Assert = ::com::sun::tools::javac::util::Assert;
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

$FieldInfo _JCTree$JCAnnotatedType_FieldInfo_[] = {
	{"annotations", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;", $PUBLIC, $field(JCTree$JCAnnotatedType, annotations)},
	{"underlyingType", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCAnnotatedType, underlyingType)},
	{}
};

$MethodInfo _JCTree$JCAnnotatedType_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)V", $PROTECTED, $method(static_cast<void(JCTree$JCAnnotatedType::*)($1List*,$JCTree$JCExpression*)>(&JCTree$JCAnnotatedType::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getAnnotations", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"getUnderlyingType", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCAnnotatedType_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCAnnotatedType", "com.sun.tools.javac.tree.JCTree", "JCAnnotatedType", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCExpression", "com.sun.tools.javac.tree.JCTree", "JCExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCAnnotatedType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCAnnotatedType",
	"com.sun.tools.javac.tree.JCTree$JCExpression",
	"com.sun.source.tree.AnnotatedTypeTree",
	_JCTree$JCAnnotatedType_FieldInfo_,
	_JCTree$JCAnnotatedType_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCAnnotatedType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCAnnotatedType($Class* clazz) {
	return $of($alloc(JCTree$JCAnnotatedType));
}

$String* JCTree$JCAnnotatedType::toString() {
	 return this->$JCTree$JCExpression::toString();
}

$Object* JCTree$JCAnnotatedType::clone() {
	 return this->$JCTree$JCExpression::clone();
}

int32_t JCTree$JCAnnotatedType::hashCode() {
	 return this->$JCTree$JCExpression::hashCode();
}

bool JCTree$JCAnnotatedType::equals(Object$* arg0) {
	 return this->$JCTree$JCExpression::equals(arg0);
}

void JCTree$JCAnnotatedType::finalize() {
	this->$JCTree$JCExpression::finalize();
}

void JCTree$JCAnnotatedType::init$($1List* annotations, $JCTree$JCExpression* underlyingType) {
	$JCTree$JCExpression::init$();
	$Assert::check(annotations != nullptr && annotations->nonEmpty());
	$set(this, annotations, annotations);
	$set(this, underlyingType, underlyingType);
}

void JCTree$JCAnnotatedType::accept($JCTree$Visitor* v) {
	$nc(v)->visitAnnotatedType(this);
}

$Tree$Kind* JCTree$JCAnnotatedType::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::ANNOTATED_TYPE;
}

$List* JCTree$JCAnnotatedType::getAnnotations() {
	return this->annotations;
}

$ExpressionTree* JCTree$JCAnnotatedType::getUnderlyingType() {
	return this->underlyingType;
}

$Object* JCTree$JCAnnotatedType::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitAnnotatedType(this, d));
}

$JCTree$Tag* JCTree$JCAnnotatedType::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::ANNOTATED_TYPE;
}

JCTree$JCAnnotatedType::JCTree$JCAnnotatedType() {
}

$Class* JCTree$JCAnnotatedType::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCAnnotatedType, name, initialize, &_JCTree$JCAnnotatedType_ClassInfo_, allocate$JCTree$JCAnnotatedType);
	return class$;
}

$Class* JCTree$JCAnnotatedType::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com