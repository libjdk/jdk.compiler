#include <com/sun/tools/javac/tree/JCTree$JCMethodInvocation.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/MethodInvocationTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef APPLY
#undef METHOD_INVOCATION

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $MethodInvocationTree = ::com::sun::source::tree::MethodInvocationTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $Type = ::com::sun::tools::javac::code::Type;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $1List = ::java::util::List;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _JCTree$JCMethodInvocation_FieldInfo_[] = {
	{"typeargs", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC, $field(JCTree$JCMethodInvocation, typeargs)},
	{"meth", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCMethodInvocation, meth)},
	{"args", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC, $field(JCTree$JCMethodInvocation, args)},
	{"varargsElement", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(JCTree$JCMethodInvocation, varargsElement)},
	{}
};

$MethodInfo _JCTree$JCMethodInvocation_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)V", $PROTECTED, $method(static_cast<void(JCTree$JCMethodInvocation::*)($List*,$JCTree$JCExpression*,$List*)>(&JCTree$JCMethodInvocation::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getArguments", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getMethodSelect", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"getTypeArguments", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC},
	{"setType", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCMethodInvocation_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCMethodInvocation", "com.sun.tools.javac.tree.JCTree", "JCMethodInvocation", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCPolyExpression", "com.sun.tools.javac.tree.JCTree", "JCPolyExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCMethodInvocation_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCMethodInvocation",
	"com.sun.tools.javac.tree.JCTree$JCPolyExpression",
	"com.sun.source.tree.MethodInvocationTree",
	_JCTree$JCMethodInvocation_FieldInfo_,
	_JCTree$JCMethodInvocation_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCMethodInvocation_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCMethodInvocation($Class* clazz) {
	return $of($alloc(JCTree$JCMethodInvocation));
}

$String* JCTree$JCMethodInvocation::toString() {
	 return this->$JCTree$JCPolyExpression::toString();
}

$Object* JCTree$JCMethodInvocation::clone() {
	 return this->$JCTree$JCPolyExpression::clone();
}

int32_t JCTree$JCMethodInvocation::hashCode() {
	 return this->$JCTree$JCPolyExpression::hashCode();
}

bool JCTree$JCMethodInvocation::equals(Object$* arg0) {
	 return this->$JCTree$JCPolyExpression::equals(arg0);
}

void JCTree$JCMethodInvocation::finalize() {
	this->$JCTree$JCPolyExpression::finalize();
}

void JCTree$JCMethodInvocation::init$($List* typeargs, $JCTree$JCExpression* meth, $List* args) {
	$JCTree$JCPolyExpression::init$();
	$set(this, typeargs, (typeargs == nullptr) ? $List::nil() : typeargs);
	$set(this, meth, meth);
	$set(this, args, args);
}

void JCTree$JCMethodInvocation::accept($JCTree$Visitor* v) {
	$nc(v)->visitApply(this);
}

$Tree$Kind* JCTree$JCMethodInvocation::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::METHOD_INVOCATION;
}

$1List* JCTree$JCMethodInvocation::getTypeArguments() {
	return this->typeargs;
}

$ExpressionTree* JCTree$JCMethodInvocation::getMethodSelect() {
	return this->meth;
}

$1List* JCTree$JCMethodInvocation::getArguments() {
	return this->args;
}

$Object* JCTree$JCMethodInvocation::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitMethodInvocation(this, d));
}

JCTree$JCMethodInvocation* JCTree$JCMethodInvocation::setType($Type* type) {
	$JCTree$JCPolyExpression::setType(type);
	return this;
}

$JCTree$Tag* JCTree$JCMethodInvocation::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::APPLY;
}

JCTree$JCMethodInvocation::JCTree$JCMethodInvocation() {
}

$Class* JCTree$JCMethodInvocation::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCMethodInvocation, name, initialize, &_JCTree$JCMethodInvocation_ClassInfo_, allocate$JCTree$JCMethodInvocation);
	return class$;
}

$Class* JCTree$JCMethodInvocation::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com