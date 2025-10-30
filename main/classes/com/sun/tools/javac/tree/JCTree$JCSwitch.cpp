#include <com/sun/tools/javac/tree/JCTree$JCSwitch.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/SwitchTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Position.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef NOPOS
#undef SWITCH

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $SwitchTree = ::com::sun::source::tree::SwitchTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
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

$FieldInfo _JCTree$JCSwitch_FieldInfo_[] = {
	{"selector", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCSwitch, selector)},
	{"cases", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCase;>;", $PUBLIC, $field(JCTree$JCSwitch, cases)},
	{"endpos", "I", nullptr, $PUBLIC, $field(JCTree$JCSwitch, endpos)},
	{"hasTotalPattern", "Z", nullptr, $PUBLIC, $field(JCTree$JCSwitch, hasTotalPattern)},
	{"patternSwitch", "Z", nullptr, $PUBLIC, $field(JCTree$JCSwitch, patternSwitch)},
	{}
};

$MethodInfo _JCTree$JCSwitch_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCase;>;)V", $PROTECTED, $method(static_cast<void(JCTree$JCSwitch::*)($JCTree$JCExpression*,$List*)>(&JCTree$JCSwitch::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getCases", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCase;>;", $PUBLIC},
	{"getExpression", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCSwitch_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCSwitch", "com.sun.tools.javac.tree.JCTree", "JCSwitch", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCStatement", "com.sun.tools.javac.tree.JCTree", "JCStatement", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCSwitch_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCSwitch",
	"com.sun.tools.javac.tree.JCTree$JCStatement",
	"com.sun.source.tree.SwitchTree",
	_JCTree$JCSwitch_FieldInfo_,
	_JCTree$JCSwitch_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCSwitch_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCSwitch($Class* clazz) {
	return $of($alloc(JCTree$JCSwitch));
}

$String* JCTree$JCSwitch::toString() {
	 return this->$JCTree$JCStatement::toString();
}

$Object* JCTree$JCSwitch::clone() {
	 return this->$JCTree$JCStatement::clone();
}

int32_t JCTree$JCSwitch::hashCode() {
	 return this->$JCTree$JCStatement::hashCode();
}

bool JCTree$JCSwitch::equals(Object$* arg0) {
	 return this->$JCTree$JCStatement::equals(arg0);
}

void JCTree$JCSwitch::finalize() {
	this->$JCTree$JCStatement::finalize();
}

void JCTree$JCSwitch::init$($JCTree$JCExpression* selector, $List* cases) {
	$JCTree$JCStatement::init$();
	this->endpos = $Position::NOPOS;
	$set(this, selector, selector);
	$set(this, cases, cases);
}

void JCTree$JCSwitch::accept($JCTree$Visitor* v) {
	$nc(v)->visitSwitch(this);
}

$Tree$Kind* JCTree$JCSwitch::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::SWITCH;
}

$ExpressionTree* JCTree$JCSwitch::getExpression() {
	return this->selector;
}

$1List* JCTree$JCSwitch::getCases() {
	return this->cases;
}

$Object* JCTree$JCSwitch::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitSwitch(this, d));
}

$JCTree$Tag* JCTree$JCSwitch::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::SWITCH;
}

JCTree$JCSwitch::JCTree$JCSwitch() {
}

$Class* JCTree$JCSwitch::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCSwitch, name, initialize, &_JCTree$JCSwitch_ClassInfo_, allocate$JCTree$JCSwitch);
	return class$;
}

$Class* JCTree$JCSwitch::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com