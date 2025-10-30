#include <com/sun/tools/javac/tree/JCTree$JCOperatorExpression.h>

#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCOperatorExpression$OperandPos.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

using $Symbol$OperatorSymbol = ::com::sun::tools::javac::code::Symbol$OperatorSymbol;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCOperatorExpression$OperandPos = ::com::sun::tools::javac::tree::JCTree$JCOperatorExpression$OperandPos;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _JCTree$JCOperatorExpression_FieldInfo_[] = {
	{"opcode", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PROTECTED, $field(JCTree$JCOperatorExpression, opcode)},
	{"operator", "Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", nullptr, $PUBLIC, $field(JCTree$JCOperatorExpression, operator$)},
	{}
};

$MethodInfo _JCTree$JCOperatorExpression_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JCTree$JCOperatorExpression::*)()>(&JCTree$JCOperatorExpression::init$))},
	{"getOperand", "(Lcom/sun/tools/javac/tree/JCTree$JCOperatorExpression$OperandPos;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC | $ABSTRACT},
	{"getOperator", "()Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCOperatorExpression_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCOperatorExpression", "com.sun.tools.javac.tree.JCTree", "JCOperatorExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.tree.JCTree$JCExpression", "com.sun.tools.javac.tree.JCTree", "JCExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.tree.JCTree$JCOperatorExpression$OperandPos", "com.sun.tools.javac.tree.JCTree$JCOperatorExpression", "OperandPos", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _JCTree$JCOperatorExpression_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.tree.JCTree$JCOperatorExpression",
	"com.sun.tools.javac.tree.JCTree$JCExpression",
	nullptr,
	_JCTree$JCOperatorExpression_FieldInfo_,
	_JCTree$JCOperatorExpression_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCOperatorExpression_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCOperatorExpression($Class* clazz) {
	return $of($alloc(JCTree$JCOperatorExpression));
}

void JCTree$JCOperatorExpression::init$() {
	$JCTree$JCExpression::init$();
}

$Symbol$OperatorSymbol* JCTree$JCOperatorExpression::getOperator() {
	return this->operator$;
}

$JCTree$Tag* JCTree$JCOperatorExpression::getTag() {
	return this->opcode;
}

JCTree$JCOperatorExpression::JCTree$JCOperatorExpression() {
}

$Class* JCTree$JCOperatorExpression::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCOperatorExpression, name, initialize, &_JCTree$JCOperatorExpression_ClassInfo_, allocate$JCTree$JCOperatorExpression);
	return class$;
}

$Class* JCTree$JCOperatorExpression::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com