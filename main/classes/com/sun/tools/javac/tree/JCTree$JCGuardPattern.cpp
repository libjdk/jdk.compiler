#include <com/sun/tools/javac/tree/JCTree$JCGuardPattern.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/GuardedPatternTree.h>
#include <com/sun/source/tree/PatternTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCPattern.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

#undef GUARDED_PATTERN
#undef GUARDPATTERN

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $GuardedPatternTree = ::com::sun::source::tree::GuardedPatternTree;
using $PatternTree = ::com::sun::source::tree::PatternTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCPattern = ::com::sun::tools::javac::tree::JCTree$JCPattern;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _JCTree$JCGuardPattern_FieldInfo_[] = {
	{"patt", "Lcom/sun/tools/javac/tree/JCTree$JCPattern;", nullptr, $PUBLIC, $field(JCTree$JCGuardPattern, patt)},
	{"expr", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCGuardPattern, expr)},
	{}
};

$MethodInfo _JCTree$JCGuardPattern_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCPattern;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)V", nullptr, $PUBLIC, $method(static_cast<void(JCTree$JCGuardPattern::*)($JCTree$JCPattern*,$JCTree$JCExpression*)>(&JCTree$JCGuardPattern::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getExpression", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getPattern", "()Lcom/sun/source/tree/PatternTree;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCGuardPattern_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCGuardPattern", "com.sun.tools.javac.tree.JCTree", "JCGuardPattern", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCPattern", "com.sun.tools.javac.tree.JCTree", "JCPattern", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCGuardPattern_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCGuardPattern",
	"com.sun.tools.javac.tree.JCTree$JCPattern",
	"com.sun.source.tree.GuardedPatternTree",
	_JCTree$JCGuardPattern_FieldInfo_,
	_JCTree$JCGuardPattern_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCGuardPattern_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCGuardPattern($Class* clazz) {
	return $of($alloc(JCTree$JCGuardPattern));
}

$String* JCTree$JCGuardPattern::toString() {
	 return this->$JCTree$JCPattern::toString();
}

$Object* JCTree$JCGuardPattern::clone() {
	 return this->$JCTree$JCPattern::clone();
}

int32_t JCTree$JCGuardPattern::hashCode() {
	 return this->$JCTree$JCPattern::hashCode();
}

bool JCTree$JCGuardPattern::equals(Object$* arg0) {
	 return this->$JCTree$JCPattern::equals(arg0);
}

void JCTree$JCGuardPattern::finalize() {
	this->$JCTree$JCPattern::finalize();
}

void JCTree$JCGuardPattern::init$($JCTree$JCPattern* patt, $JCTree$JCExpression* expr) {
	$JCTree$JCPattern::init$();
	$set(this, patt, patt);
	$set(this, expr, expr);
}

$PatternTree* JCTree$JCGuardPattern::getPattern() {
	return this->patt;
}

$ExpressionTree* JCTree$JCGuardPattern::getExpression() {
	return this->expr;
}

void JCTree$JCGuardPattern::accept($JCTree$Visitor* v) {
	$nc(v)->visitGuardPattern(this);
}

$Tree$Kind* JCTree$JCGuardPattern::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::GUARDED_PATTERN;
}

$Object* JCTree$JCGuardPattern::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitGuardedPattern(this, d));
}

$JCTree$Tag* JCTree$JCGuardPattern::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::GUARDPATTERN;
}

JCTree$JCGuardPattern::JCTree$JCGuardPattern() {
}

$Class* JCTree$JCGuardPattern::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCGuardPattern, name, initialize, &_JCTree$JCGuardPattern_ClassInfo_, allocate$JCTree$JCGuardPattern);
	return class$;
}

$Class* JCTree$JCGuardPattern::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com