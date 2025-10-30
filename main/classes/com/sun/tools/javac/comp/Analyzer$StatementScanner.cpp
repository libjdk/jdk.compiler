#include <com/sun/tools/javac/comp/Analyzer$StatementScanner.h>

#include <com/sun/source/tree/BlockTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/tools/javac/comp/Analyzer$RewritingContext.h>
#include <com/sun/tools/javac/comp/Analyzer$StatementAnalyzer.h>
#include <com/sun/tools/javac/comp/Analyzer.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCDoWhileLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCEnhancedForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCIf.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCSwitch.h>
#include <com/sun/tools/javac/tree/JCTree$JCTry.h>
#include <com/sun/tools/javac/tree/JCTree$JCWhileLoop.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

using $Analyzer$StatementAnalyzerArray = $Array<::com::sun::tools::javac::comp::Analyzer$StatementAnalyzer>;
using $Analyzer = ::com::sun::tools::javac::comp::Analyzer;
using $Analyzer$RewritingContext = ::com::sun::tools::javac::comp::Analyzer$RewritingContext;
using $Analyzer$StatementAnalyzer = ::com::sun::tools::javac::comp::Analyzer$StatementAnalyzer;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Env = ::com::sun::tools::javac::comp::Env;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCBlock = ::com::sun::tools::javac::tree::JCTree$JCBlock;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCDoWhileLoop = ::com::sun::tools::javac::tree::JCTree$JCDoWhileLoop;
using $JCTree$JCEnhancedForLoop = ::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCForLoop = ::com::sun::tools::javac::tree::JCTree$JCForLoop;
using $JCTree$JCIf = ::com::sun::tools::javac::tree::JCTree$JCIf;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCSwitch = ::com::sun::tools::javac::tree::JCTree$JCSwitch;
using $JCTree$JCTry = ::com::sun::tools::javac::tree::JCTree$JCTry;
using $JCTree$JCWhileLoop = ::com::sun::tools::javac::tree::JCTree$JCWhileLoop;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Analyzer$StatementScanner_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Analyzer;", nullptr, $FINAL | $SYNTHETIC, $field(Analyzer$StatementScanner, this$0)},
	{"rewritings", "Lcom/sun/tools/javac/util/ListBuffer;", "Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/comp/Analyzer$RewritingContext;>;", 0, $field(Analyzer$StatementScanner, rewritings)},
	{"originalTree", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, 0, $field(Analyzer$StatementScanner, originalTree)},
	{"env", "Lcom/sun/tools/javac/comp/Env;", "Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", 0, $field(Analyzer$StatementScanner, env)},
	{}
};

$MethodInfo _Analyzer$StatementScanner_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Analyzer;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", 0, $method(static_cast<void(Analyzer$StatementScanner::*)($Analyzer*,$JCTree*,$Env*)>(&Analyzer$StatementScanner::init$))},
	{"scan", "()V", nullptr, $PUBLIC},
	{"scan", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC},
	{"visitBlock", "(Lcom/sun/tools/javac/tree/JCTree$JCBlock;)V", nullptr, $PUBLIC},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"visitDoLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCDoWhileLoop;)V", nullptr, $PUBLIC},
	{"visitForLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCForLoop;)V", nullptr, $PUBLIC},
	{"visitForeachLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCEnhancedForLoop;)V", nullptr, $PUBLIC},
	{"visitIf", "(Lcom/sun/tools/javac/tree/JCTree$JCIf;)V", nullptr, $PUBLIC},
	{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC},
	{"visitMethodDef", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", nullptr, $PUBLIC},
	{"visitSwitch", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitch;)V", nullptr, $PUBLIC},
	{"visitTry", "(Lcom/sun/tools/javac/tree/JCTree$JCTry;)V", nullptr, $PUBLIC},
	{"visitWhileLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCWhileLoop;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Analyzer$StatementScanner_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Analyzer$StatementScanner", "com.sun.tools.javac.comp.Analyzer", "StatementScanner", 0},
	{}
};

$ClassInfo _Analyzer$StatementScanner_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Analyzer$StatementScanner",
	"com.sun.tools.javac.tree.TreeScanner",
	nullptr,
	_Analyzer$StatementScanner_FieldInfo_,
	_Analyzer$StatementScanner_MethodInfo_,
	nullptr,
	nullptr,
	_Analyzer$StatementScanner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Analyzer"
};

$Object* allocate$Analyzer$StatementScanner($Class* clazz) {
	return $of($alloc(Analyzer$StatementScanner));
}

void Analyzer$StatementScanner::init$($Analyzer* this$0, $JCTree* originalTree, $Env* env) {
	$set(this, this$0, this$0);
	$TreeScanner::init$();
	$set(this, rewritings, $new($ListBuffer));
	$set(this, originalTree, originalTree);
	$set(this, env, $nc(this$0->attr)->copyEnv(env));
}

void Analyzer$StatementScanner::scan() {
	scan(this->originalTree);
}

void Analyzer$StatementScanner::scan($JCTree* tree) {
	$useLocalCurrentObjectStackCache();
	if (tree != nullptr) {
		{
			$var($Analyzer$StatementAnalyzerArray, arr$, this->this$0->analyzers);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Analyzer$StatementAnalyzer, analyzer, arr$->get(i$));
				{
					bool var$1 = $nc(analyzer)->isEnabled();
					bool var$0 = var$1 && tree->hasTag(analyzer->tag);
					if (var$0 && analyzer->match(tree)) {
						{
							$var($Iterator, i$, $nc($(analyzer->rewrite(tree)))->iterator());
							for (; $nc(i$)->hasNext();) {
								$var($JCTree, t, $cast($JCTree, i$->next()));
								{
									$nc(this->rewritings)->add($$new($Analyzer$RewritingContext, this->this$0, this->originalTree, tree, t, analyzer, this->env));
								}
							}
						}
						break;
					}
				}
			}
		}
	}
	$TreeScanner::scan(tree);
}

void Analyzer$StatementScanner::visitClassDef($JCTree$JCClassDecl* tree) {
}

void Analyzer$StatementScanner::visitMethodDef($JCTree$JCMethodDecl* tree) {
}

void Analyzer$StatementScanner::visitBlock($JCTree$JCBlock* tree) {
}

void Analyzer$StatementScanner::visitLambda($JCTree$JCLambda* tree) {
}

void Analyzer$StatementScanner::visitSwitch($JCTree$JCSwitch* tree) {
	scan($($cast($JCTree, $nc(tree)->getExpression())));
}

void Analyzer$StatementScanner::visitForLoop($JCTree$JCForLoop* tree) {
	$useLocalCurrentObjectStackCache();
	scan($($cast($JCTree, $nc(tree)->getCondition())));
	scan($($cast($List, $nc(tree)->getUpdate())));
}

void Analyzer$StatementScanner::visitTry($JCTree$JCTry* tree) {
	$useLocalCurrentObjectStackCache();
	scan($($cast($JCTree, $nc(tree)->getBlock())));
	scan($($cast($List, $nc(tree)->getCatches())));
	scan($($cast($JCTree, $nc(tree)->getFinallyBlock())));
}

void Analyzer$StatementScanner::visitForeachLoop($JCTree$JCEnhancedForLoop* tree) {
	scan($($cast($JCTree, $nc(tree)->getExpression())));
}

void Analyzer$StatementScanner::visitWhileLoop($JCTree$JCWhileLoop* tree) {
	scan($($cast($JCTree, $nc(tree)->getCondition())));
}

void Analyzer$StatementScanner::visitDoLoop($JCTree$JCDoWhileLoop* tree) {
	scan($($cast($JCTree, $nc(tree)->getCondition())));
}

void Analyzer$StatementScanner::visitIf($JCTree$JCIf* tree) {
	scan($($cast($JCTree, $nc(tree)->getCondition())));
}

Analyzer$StatementScanner::Analyzer$StatementScanner() {
}

$Class* Analyzer$StatementScanner::load$($String* name, bool initialize) {
	$loadClass(Analyzer$StatementScanner, name, initialize, &_Analyzer$StatementScanner_ClassInfo_, allocate$Analyzer$StatementScanner);
	return class$;
}

$Class* Analyzer$StatementScanner::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com