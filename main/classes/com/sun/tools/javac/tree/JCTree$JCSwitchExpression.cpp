#include <com/sun/tools/javac/tree/JCTree$JCSwitchExpression.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/SwitchExpressionTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Position.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef NOPOS
#undef SWITCH_EXPRESSION

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $SwitchExpressionTree = ::com::sun::source::tree::SwitchExpressionTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $List = ::com::sun::tools::javac::util::List;
using $Position = ::com::sun::tools::javac::util::Position;
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

$FieldInfo _JCTree$JCSwitchExpression_FieldInfo_[] = {
	{"selector", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCSwitchExpression, selector)},
	{"cases", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCase;>;", $PUBLIC, $field(JCTree$JCSwitchExpression, cases)},
	{"endpos", "I", nullptr, $PUBLIC, $field(JCTree$JCSwitchExpression, endpos)},
	{"hasTotalPattern", "Z", nullptr, $PUBLIC, $field(JCTree$JCSwitchExpression, hasTotalPattern)},
	{"patternSwitch", "Z", nullptr, $PUBLIC, $field(JCTree$JCSwitchExpression, patternSwitch)},
	{}
};

$MethodInfo _JCTree$JCSwitchExpression_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCase;>;)V", $PROTECTED, $method(static_cast<void(JCTree$JCSwitchExpression::*)($JCTree$JCExpression*,$List*)>(&JCTree$JCSwitchExpression::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getCases", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCase;>;", $PUBLIC},
	{"getExpression", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCSwitchExpression_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCSwitchExpression", "com.sun.tools.javac.tree.JCTree", "JCSwitchExpression", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCPolyExpression", "com.sun.tools.javac.tree.JCTree", "JCPolyExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCSwitchExpression_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCSwitchExpression",
	"com.sun.tools.javac.tree.JCTree$JCPolyExpression",
	"com.sun.source.tree.SwitchExpressionTree",
	_JCTree$JCSwitchExpression_FieldInfo_,
	_JCTree$JCSwitchExpression_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCSwitchExpression_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCSwitchExpression($Class* clazz) {
	return $of($alloc(JCTree$JCSwitchExpression));
}

$String* JCTree$JCSwitchExpression::toString() {
	 return this->$JCTree$JCPolyExpression::toString();
}

$Object* JCTree$JCSwitchExpression::clone() {
	 return this->$JCTree$JCPolyExpression::clone();
}

int32_t JCTree$JCSwitchExpression::hashCode() {
	 return this->$JCTree$JCPolyExpression::hashCode();
}

bool JCTree$JCSwitchExpression::equals(Object$* arg0) {
	 return this->$JCTree$JCPolyExpression::equals(arg0);
}

void JCTree$JCSwitchExpression::finalize() {
	this->$JCTree$JCPolyExpression::finalize();
}

void JCTree$JCSwitchExpression::init$($JCTree$JCExpression* selector, $List* cases) {
	$JCTree$JCPolyExpression::init$();
	this->endpos = $Position::NOPOS;
	$set(this, selector, selector);
	$set(this, cases, cases);
}

void JCTree$JCSwitchExpression::accept($JCTree$Visitor* v) {
	$nc(v)->visitSwitchExpression(this);
}

$Tree$Kind* JCTree$JCSwitchExpression::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::SWITCH_EXPRESSION;
}

$ExpressionTree* JCTree$JCSwitchExpression::getExpression() {
	return this->selector;
}

$1List* JCTree$JCSwitchExpression::getCases() {
	return this->cases;
}

$Object* JCTree$JCSwitchExpression::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitSwitchExpression(this, d));
}

$JCTree$Tag* JCTree$JCSwitchExpression::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::SWITCH_EXPRESSION;
}

JCTree$JCSwitchExpression::JCTree$JCSwitchExpression() {
}

$Class* JCTree$JCSwitchExpression::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCSwitchExpression, name, initialize, &_JCTree$JCSwitchExpression_ClassInfo_, allocate$JCTree$JCSwitchExpression);
	return class$;
}

$Class* JCTree$JCSwitchExpression::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com