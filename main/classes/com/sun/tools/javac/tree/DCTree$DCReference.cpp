#include <com/sun/tools/javac/tree/DCTree$DCReference.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/source/doctree/ReferenceTree.h>
#include <com/sun/tools/javac/tree/DCTree$DCEndPosTree.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <java/util/List.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

#undef REFERENCE

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $ReferenceTree = ::com::sun::source::doctree::ReferenceTree;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $DCTree$DCEndPosTree = ::com::sun::tools::javac::tree::DCTree$DCEndPosTree;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _DCTree$DCReference_FieldInfo_[] = {
	{"signature", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCReference, signature)},
	{"moduleName", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCReference, moduleName)},
	{"qualifierExpression", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCReference, qualifierExpression)},
	{"memberName", "Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCReference, memberName)},
	{"paramTypes", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/javac/tree/JCTree;>;", $PUBLIC | $FINAL, $field(DCTree$DCReference, paramTypes)},
	{}
};

$MethodInfo _DCTree$DCReference_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree;Ljavax/lang/model/element/Name;Ljava/util/List;)V", "(Ljava/lang/String;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree;Ljavax/lang/model/element/Name;Ljava/util/List<Lcom/sun/tools/javac/tree/JCTree;>;)V", 0, $method(static_cast<void(DCTree$DCReference::*)($String*,$JCTree$JCExpression*,$JCTree*,$Name*,$List*)>(&DCTree$DCReference::init$))},
	{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC},
	{"getSignature", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DCTree$DCReference_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.DCTree$DCReference", "com.sun.tools.javac.tree.DCTree", "DCReference", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCEndPosTree", "com.sun.tools.javac.tree.DCTree", "DCEndPosTree", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DCTree$DCReference_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.DCTree$DCReference",
	"com.sun.tools.javac.tree.DCTree$DCEndPosTree",
	"com.sun.source.doctree.ReferenceTree",
	_DCTree$DCReference_FieldInfo_,
	_DCTree$DCReference_MethodInfo_,
	"Lcom/sun/tools/javac/tree/DCTree$DCEndPosTree<Lcom/sun/tools/javac/tree/DCTree$DCReference;>;Lcom/sun/source/doctree/ReferenceTree;",
	nullptr,
	_DCTree$DCReference_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.DCTree"
};

$Object* allocate$DCTree$DCReference($Class* clazz) {
	return $of($alloc(DCTree$DCReference));
}

$String* DCTree$DCReference::toString() {
	 return this->$DCTree$DCEndPosTree::toString();
}

int32_t DCTree$DCReference::hashCode() {
	 return this->$DCTree$DCEndPosTree::hashCode();
}

bool DCTree$DCReference::equals(Object$* arg0) {
	 return this->$DCTree$DCEndPosTree::equals(arg0);
}

$Object* DCTree$DCReference::clone() {
	 return this->$DCTree$DCEndPosTree::clone();
}

void DCTree$DCReference::finalize() {
	this->$DCTree$DCEndPosTree::finalize();
}

void DCTree$DCReference::init$($String* signature, $JCTree$JCExpression* moduleName, $JCTree* qualExpr, $Name* member, $List* paramTypes) {
	$DCTree$DCEndPosTree::init$();
	$set(this, signature, signature);
	$set(this, moduleName, moduleName);
	$set(this, qualifierExpression, qualExpr);
	$set(this, memberName, member);
	$set(this, paramTypes, paramTypes);
}

$DocTree$Kind* DCTree$DCReference::getKind() {
	$init($DocTree$Kind);
	return $DocTree$Kind::REFERENCE;
}

$Object* DCTree$DCReference::accept($DocTreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitReference(this, d));
}

$String* DCTree$DCReference::getSignature() {
	return this->signature;
}

DCTree$DCReference::DCTree$DCReference() {
}

$Class* DCTree$DCReference::load$($String* name, bool initialize) {
	$loadClass(DCTree$DCReference, name, initialize, &_DCTree$DCReference_ClassInfo_, allocate$DCTree$DCReference);
	return class$;
}

$Class* DCTree$DCReference::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com