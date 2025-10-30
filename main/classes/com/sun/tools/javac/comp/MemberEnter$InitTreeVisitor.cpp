#include <com/sun/tools/javac/comp/MemberEnter$InitTreeVisitor.h>

#include <com/sun/tools/javac/comp/MemberEnter.h>
#include <com/sun/tools/javac/tree/JCTree$JCBinary.h>
#include <com/sun/tools/javac/tree/JCTree$JCConditional.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCLiteral.h>
#include <com/sun/tools/javac/tree/JCTree$JCParens.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeCast.h>
#include <com/sun/tools/javac/tree/JCTree$JCUnary.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <java/lang/Enum.h>
#include <java/util/AbstractSet.h>
#include <java/util/EnumSet.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef ALLOWED_OPERATORS
#undef AND
#undef BITAND
#undef BITOR
#undef BITXOR
#undef COMPL
#undef DIV
#undef EQ
#undef GE
#undef GT
#undef LE
#undef LT
#undef MINUS
#undef MOD
#undef MUL
#undef NE
#undef NEG
#undef NOT
#undef OR
#undef PLUS
#undef POS
#undef SL
#undef SR
#undef USR

using $JCTree$TagArray = $Array<::com::sun::tools::javac::tree::JCTree$Tag>;
using $EnumArray = $Array<::java::lang::Enum>;
using $MemberEnter = ::com::sun::tools::javac::comp::MemberEnter;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCBinary = ::com::sun::tools::javac::tree::JCTree$JCBinary;
using $JCTree$JCConditional = ::com::sun::tools::javac::tree::JCTree$JCConditional;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCLiteral = ::com::sun::tools::javac::tree::JCTree$JCLiteral;
using $JCTree$JCOperatorExpression = ::com::sun::tools::javac::tree::JCTree$JCOperatorExpression;
using $JCTree$JCParens = ::com::sun::tools::javac::tree::JCTree$JCParens;
using $JCTree$JCTypeCast = ::com::sun::tools::javac::tree::JCTree$JCTypeCast;
using $JCTree$JCUnary = ::com::sun::tools::javac::tree::JCTree$JCUnary;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $EnumSet = ::java::util::EnumSet;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _MemberEnter$InitTreeVisitor_FieldInfo_[] = {
	{"ALLOWED_OPERATORS", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/tree/JCTree$Tag;>;", $PRIVATE | $STATIC | $FINAL, $staticField(MemberEnter$InitTreeVisitor, ALLOWED_OPERATORS)},
	{"result", "Z", nullptr, 0, $field(MemberEnter$InitTreeVisitor, result)},
	{}
};

$MethodInfo _MemberEnter$InitTreeVisitor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MemberEnter$InitTreeVisitor::*)()>(&MemberEnter$InitTreeVisitor::init$))},
	{"visitBinary", "(Lcom/sun/tools/javac/tree/JCTree$JCBinary;)V", nullptr, $PUBLIC},
	{"visitConditional", "(Lcom/sun/tools/javac/tree/JCTree$JCConditional;)V", nullptr, $PUBLIC},
	{"visitIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCIdent;)V", nullptr, $PUBLIC},
	{"visitLiteral", "(Lcom/sun/tools/javac/tree/JCTree$JCLiteral;)V", nullptr, $PUBLIC},
	{"visitParens", "(Lcom/sun/tools/javac/tree/JCTree$JCParens;)V", nullptr, $PUBLIC},
	{"visitSelect", "(Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;)V", nullptr, $PUBLIC},
	{"visitTree", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC},
	{"visitTypeCast", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeCast;)V", nullptr, $PUBLIC},
	{"visitUnary", "(Lcom/sun/tools/javac/tree/JCTree$JCUnary;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MemberEnter$InitTreeVisitor_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.MemberEnter$InitTreeVisitor", "com.sun.tools.javac.comp.MemberEnter", "InitTreeVisitor", $STATIC},
	{"com.sun.tools.javac.tree.JCTree$Visitor", "com.sun.tools.javac.tree.JCTree", "Visitor", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _MemberEnter$InitTreeVisitor_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.MemberEnter$InitTreeVisitor",
	"com.sun.tools.javac.tree.JCTree$Visitor",
	nullptr,
	_MemberEnter$InitTreeVisitor_FieldInfo_,
	_MemberEnter$InitTreeVisitor_MethodInfo_,
	nullptr,
	nullptr,
	_MemberEnter$InitTreeVisitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.MemberEnter"
};

$Object* allocate$MemberEnter$InitTreeVisitor($Class* clazz) {
	return $of($alloc(MemberEnter$InitTreeVisitor));
}

$Set* MemberEnter$InitTreeVisitor::ALLOWED_OPERATORS = nullptr;

void MemberEnter$InitTreeVisitor::init$() {
	$JCTree$Visitor::init$();
	this->result = true;
}

void MemberEnter$InitTreeVisitor::visitTree($JCTree* tree) {
	this->result = false;
}

void MemberEnter$InitTreeVisitor::visitLiteral($JCTree$JCLiteral* that) {
}

void MemberEnter$InitTreeVisitor::visitTypeCast($JCTree$JCTypeCast* tree) {
	$nc($nc(tree)->expr)->accept(this);
}

void MemberEnter$InitTreeVisitor::visitUnary($JCTree$JCUnary* that) {
	if (!$nc(MemberEnter$InitTreeVisitor::ALLOWED_OPERATORS)->contains($($nc(that)->getTag()))) {
		this->result = false;
		return;
	}
	$nc($nc(that)->arg)->accept(this);
}

void MemberEnter$InitTreeVisitor::visitBinary($JCTree$JCBinary* that) {
	if (!$nc(MemberEnter$InitTreeVisitor::ALLOWED_OPERATORS)->contains($($nc(that)->getTag()))) {
		this->result = false;
		return;
	}
	$nc($nc(that)->lhs)->accept(this);
	$nc(that->rhs)->accept(this);
}

void MemberEnter$InitTreeVisitor::visitConditional($JCTree$JCConditional* tree) {
	$nc($nc(tree)->cond)->accept(this);
	$nc(tree->truepart)->accept(this);
	$nc(tree->falsepart)->accept(this);
}

void MemberEnter$InitTreeVisitor::visitParens($JCTree$JCParens* tree) {
	$nc($nc(tree)->expr)->accept(this);
}

void MemberEnter$InitTreeVisitor::visitIdent($JCTree$JCIdent* that) {
}

void MemberEnter$InitTreeVisitor::visitSelect($JCTree$JCFieldAccess* tree) {
	$nc($nc(tree)->selected)->accept(this);
}

void clinit$MemberEnter$InitTreeVisitor($Class* class$) {
	$init($JCTree$Tag);
	$assignStatic(MemberEnter$InitTreeVisitor::ALLOWED_OPERATORS, $EnumSet::of(static_cast<$Enum*>($JCTree$Tag::POS), $fcast($EnumArray, $$new($JCTree$TagArray, {
		$JCTree$Tag::NEG,
		$JCTree$Tag::NOT,
		$JCTree$Tag::COMPL,
		$JCTree$Tag::PLUS,
		$JCTree$Tag::MINUS,
		$JCTree$Tag::MUL,
		$JCTree$Tag::DIV,
		$JCTree$Tag::MOD,
		$JCTree$Tag::SL,
		$JCTree$Tag::SR,
		$JCTree$Tag::USR,
		$JCTree$Tag::LT,
		$JCTree$Tag::LE,
		$JCTree$Tag::GT,
		$JCTree$Tag::GE,
		$JCTree$Tag::EQ,
		$JCTree$Tag::NE,
		$JCTree$Tag::BITAND,
		$JCTree$Tag::BITXOR,
		$JCTree$Tag::BITOR,
		$JCTree$Tag::AND,
		$JCTree$Tag::OR
	}))));
}

MemberEnter$InitTreeVisitor::MemberEnter$InitTreeVisitor() {
}

$Class* MemberEnter$InitTreeVisitor::load$($String* name, bool initialize) {
	$loadClass(MemberEnter$InitTreeVisitor, name, initialize, &_MemberEnter$InitTreeVisitor_ClassInfo_, clinit$MemberEnter$InitTreeVisitor, allocate$MemberEnter$InitTreeVisitor);
	return class$;
}

$Class* MemberEnter$InitTreeVisitor::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com