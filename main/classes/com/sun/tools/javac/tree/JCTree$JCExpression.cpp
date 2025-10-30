#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $Type = ::com::sun::tools::javac::code::Type;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$MethodInfo _JCTree$JCExpression_MethodInfo_[] = {
	{"*accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JCTree$JCExpression::*)()>(&JCTree$JCExpression::init$))},
	{"isExpression", "()Z", nullptr, $PUBLIC},
	{"isPattern", "()Z", nullptr, $PUBLIC},
	{"isPoly", "()Z", nullptr, $PUBLIC},
	{"isStandalone", "()Z", nullptr, $PUBLIC},
	{"setPos", "(I)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"setType", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCExpression_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCExpression", "com.sun.tools.javac.tree.JCTree", "JCExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.tree.JCTree$JCCaseLabel", "com.sun.tools.javac.tree.JCTree", "JCCaseLabel", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCExpression_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.tree.JCTree$JCExpression",
	"com.sun.tools.javac.tree.JCTree$JCCaseLabel",
	"com.sun.source.tree.ExpressionTree",
	nullptr,
	_JCTree$JCExpression_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCExpression_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCExpression($Class* clazz) {
	return $of($alloc(JCTree$JCExpression));
}

$String* JCTree$JCExpression::toString() {
	 return this->$JCTree$JCCaseLabel::toString();
}

$Object* JCTree$JCExpression::clone() {
	 return this->$JCTree$JCCaseLabel::clone();
}

int32_t JCTree$JCExpression::hashCode() {
	 return this->$JCTree$JCCaseLabel::hashCode();
}

bool JCTree$JCExpression::equals(Object$* arg0) {
	 return this->$JCTree$JCCaseLabel::equals(arg0);
}

void JCTree$JCExpression::finalize() {
	this->$JCTree$JCCaseLabel::finalize();
}

void JCTree$JCExpression::init$() {
	$JCTree$JCCaseLabel::init$();
}

JCTree$JCExpression* JCTree$JCExpression::setType($Type* type) {
	$JCTree$JCCaseLabel::setType(type);
	return this;
}

JCTree$JCExpression* JCTree$JCExpression::setPos(int32_t pos) {
	$JCTree$JCCaseLabel::setPos(pos);
	return this;
}

bool JCTree$JCExpression::isPoly() {
	return false;
}

bool JCTree$JCExpression::isStandalone() {
	return true;
}

bool JCTree$JCExpression::isExpression() {
	return true;
}

bool JCTree$JCExpression::isPattern() {
	return false;
}

JCTree$JCExpression::JCTree$JCExpression() {
}

$Class* JCTree$JCExpression::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCExpression, name, initialize, &_JCTree$JCExpression_ClassInfo_, allocate$JCTree$JCExpression);
	return class$;
}

$Class* JCTree$JCExpression::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com