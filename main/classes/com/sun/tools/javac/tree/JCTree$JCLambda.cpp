#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>

#include <com/sun/source/tree/LambdaExpressionTree$BodyKind.h>
#include <com/sun/source/tree/LambdaExpressionTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCFunctionalExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda$ParameterKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef BLOCK
#undef EXPLICIT
#undef EXPRESSION
#undef IMPLICIT
#undef LAMBDA
#undef LAMBDA_EXPRESSION
#undef STATEMENT

using $LambdaExpressionTree = ::com::sun::source::tree::LambdaExpressionTree;
using $LambdaExpressionTree$BodyKind = ::com::sun::source::tree::LambdaExpressionTree$BodyKind;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $Type = ::com::sun::tools::javac::code::Type;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCFunctionalExpression = ::com::sun::tools::javac::tree::JCTree$JCFunctionalExpression;
using $JCTree$JCLambda$ParameterKind = ::com::sun::tools::javac::tree::JCTree$JCLambda$ParameterKind;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
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

$FieldInfo _JCTree$JCLambda_FieldInfo_[] = {
	{"params", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;>;", $PUBLIC, $field(JCTree$JCLambda, params)},
	{"body", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC, $field(JCTree$JCLambda, body)},
	{"canCompleteNormally", "Z", nullptr, $PUBLIC, $field(JCTree$JCLambda, canCompleteNormally)},
	{"paramKind", "Lcom/sun/tools/javac/tree/JCTree$JCLambda$ParameterKind;", nullptr, $PUBLIC, $field(JCTree$JCLambda, paramKind)},
	{}
};

$MethodInfo _JCTree$JCLambda_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;>;Lcom/sun/tools/javac/tree/JCTree;)V", $PUBLIC, $method(static_cast<void(JCTree$JCLambda::*)($List*,$JCTree*)>(&JCTree$JCLambda::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getBody", "()Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC},
	{"getBodyKind", "()Lcom/sun/source/tree/LambdaExpressionTree$BodyKind;", nullptr, $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getParameters", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/VariableTree;>;", $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"setType", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/tree/JCTree$JCLambda;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCLambda_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCLambda", "com.sun.tools.javac.tree.JCTree", "JCLambda", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCFunctionalExpression", "com.sun.tools.javac.tree.JCTree", "JCFunctionalExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.tree.JCTree$JCLambda$ParameterKind", "com.sun.tools.javac.tree.JCTree$JCLambda", "ParameterKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _JCTree$JCLambda_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCLambda",
	"com.sun.tools.javac.tree.JCTree$JCFunctionalExpression",
	"com.sun.source.tree.LambdaExpressionTree",
	_JCTree$JCLambda_FieldInfo_,
	_JCTree$JCLambda_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCLambda_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCLambda($Class* clazz) {
	return $of($alloc(JCTree$JCLambda));
}

$String* JCTree$JCLambda::toString() {
	 return this->$JCTree$JCFunctionalExpression::toString();
}

$Object* JCTree$JCLambda::clone() {
	 return this->$JCTree$JCFunctionalExpression::clone();
}

int32_t JCTree$JCLambda::hashCode() {
	 return this->$JCTree$JCFunctionalExpression::hashCode();
}

bool JCTree$JCLambda::equals(Object$* arg0) {
	 return this->$JCTree$JCFunctionalExpression::equals(arg0);
}

void JCTree$JCLambda::finalize() {
	this->$JCTree$JCFunctionalExpression::finalize();
}

void JCTree$JCLambda::init$($List* params, $JCTree* body) {
	$JCTree$JCFunctionalExpression::init$();
	this->canCompleteNormally = true;
	$set(this, params, params);
	$set(this, body, body);
	if ($nc(params)->isEmpty() || $nc(($cast($JCTree$JCVariableDecl, $nc(params)->head)))->vartype != nullptr) {
		$init($JCTree$JCLambda$ParameterKind);
		$set(this, paramKind, $JCTree$JCLambda$ParameterKind::EXPLICIT);
	} else {
		$init($JCTree$JCLambda$ParameterKind);
		$set(this, paramKind, $JCTree$JCLambda$ParameterKind::IMPLICIT);
	}
}

$JCTree$Tag* JCTree$JCLambda::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::LAMBDA;
}

void JCTree$JCLambda::accept($JCTree$Visitor* v) {
	$nc(v)->visitLambda(this);
}

$Object* JCTree$JCLambda::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitLambdaExpression(this, d));
}

$Tree$Kind* JCTree$JCLambda::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::LAMBDA_EXPRESSION;
}

$JCTree* JCTree$JCLambda::getBody() {
	return this->body;
}

$1List* JCTree$JCLambda::getParameters() {
	return this->params;
}

JCTree$JCLambda* JCTree$JCLambda::setType($Type* type) {
	$JCTree$JCFunctionalExpression::setType(type);
	return this;
}

$LambdaExpressionTree$BodyKind* JCTree$JCLambda::getBodyKind() {
	$init($JCTree$Tag);
	$init($LambdaExpressionTree$BodyKind);
	return $nc(this->body)->hasTag($JCTree$Tag::BLOCK) ? $LambdaExpressionTree$BodyKind::STATEMENT : $LambdaExpressionTree$BodyKind::EXPRESSION;
}

JCTree$JCLambda::JCTree$JCLambda() {
}

$Class* JCTree$JCLambda::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCLambda, name, initialize, &_JCTree$JCLambda_ClassInfo_, allocate$JCTree$JCLambda);
	return class$;
}

$Class* JCTree$JCLambda::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com