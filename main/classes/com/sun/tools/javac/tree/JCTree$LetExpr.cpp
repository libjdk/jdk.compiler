#include <com/sun/tools/javac/tree/JCTree$LetExpr.h>

#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/lang/AssertionError.h>
#include <jcpp.h>

#undef LETEXPR

using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $List = ::com::sun::tools::javac::util::List;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _JCTree$LetExpr_FieldInfo_[] = {
	{"defs", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCStatement;>;", $PUBLIC, $field(JCTree$LetExpr, defs)},
	{"expr", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$LetExpr, expr)},
	{"needsCond", "Z", nullptr, $PUBLIC, $field(JCTree$LetExpr, needsCond)},
	{}
};

$MethodInfo _JCTree$LetExpr_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCStatement;>;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)V", $PROTECTED, $method(static_cast<void(JCTree$LetExpr::*)($List*,$JCTree$JCExpression*)>(&JCTree$LetExpr::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$LetExpr_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$LetExpr", "com.sun.tools.javac.tree.JCTree", "LetExpr", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCExpression", "com.sun.tools.javac.tree.JCTree", "JCExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$LetExpr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$LetExpr",
	"com.sun.tools.javac.tree.JCTree$JCExpression",
	nullptr,
	_JCTree$LetExpr_FieldInfo_,
	_JCTree$LetExpr_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$LetExpr_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$LetExpr($Class* clazz) {
	return $of($alloc(JCTree$LetExpr));
}

void JCTree$LetExpr::init$($List* defs, $JCTree$JCExpression* expr) {
	$JCTree$JCExpression::init$();
	$set(this, defs, defs);
	$set(this, expr, expr);
}

void JCTree$LetExpr::accept($JCTree$Visitor* v) {
	$nc(v)->visitLetExpr(this);
}

$Tree$Kind* JCTree$LetExpr::getKind() {
	$throwNew($AssertionError, $of("LetExpr is not part of a public API"_s));
	$shouldNotReachHere();
}

$Object* JCTree$LetExpr::accept($TreeVisitor* v, Object$* d) {
	$throwNew($AssertionError, $of("LetExpr is not part of a public API"_s));
	$shouldNotReachHere();
}

$JCTree$Tag* JCTree$LetExpr::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::LETEXPR;
}

JCTree$LetExpr::JCTree$LetExpr() {
}

$Class* JCTree$LetExpr::load$($String* name, bool initialize) {
	$loadClass(JCTree$LetExpr, name, initialize, &_JCTree$LetExpr_ClassInfo_, allocate$JCTree$LetExpr);
	return class$;
}

$Class* JCTree$LetExpr::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com