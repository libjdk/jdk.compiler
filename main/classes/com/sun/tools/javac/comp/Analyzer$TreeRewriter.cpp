#include <com/sun/tools/javac/comp/Analyzer$TreeRewriter.h>

#include <com/sun/source/tree/VariableTree.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/comp/Analyzer$AnalyzerCopier.h>
#include <com/sun/tools/javac/comp/Analyzer$RewritingContext.h>
#include <com/sun/tools/javac/comp/Analyzer.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeCopier.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <jcpp.h>

#undef FINAL

using $VariableTree = ::com::sun::source::tree::VariableTree;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Analyzer = ::com::sun::tools::javac::comp::Analyzer;
using $Analyzer$AnalyzerCopier = ::com::sun::tools::javac::comp::Analyzer$AnalyzerCopier;
using $Analyzer$RewritingContext = ::com::sun::tools::javac::comp::Analyzer$RewritingContext;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $TreeCopier = ::com::sun::tools::javac::tree::TreeCopier;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Analyzer$TreeRewriter_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Analyzer;", nullptr, $FINAL | $SYNTHETIC, $field(Analyzer$TreeRewriter, this$0)},
	{"rewriting", "Lcom/sun/tools/javac/comp/Analyzer$RewritingContext;", nullptr, 0, $field(Analyzer$TreeRewriter, rewriting)},
	{"wrappedTree", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, 0, $field(Analyzer$TreeRewriter, wrappedTree)},
	{}
};

$MethodInfo _Analyzer$TreeRewriter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Analyzer;Lcom/sun/tools/javac/comp/Analyzer$RewritingContext;Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, 0, $method(static_cast<void(Analyzer$TreeRewriter::*)($Analyzer*,$Analyzer$RewritingContext*,$JCTree*)>(&Analyzer$TreeRewriter::init$))},
	{"copy", "(Lcom/sun/tools/javac/tree/JCTree;Ljava/lang/Void;)Lcom/sun/tools/javac/tree/JCTree;", "<Z:Lcom/sun/tools/javac/tree/JCTree;>(TZ;Ljava/lang/Void;)TZ;", $PUBLIC},
	{"copy", "(Lcom/sun/tools/javac/tree/JCTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitVariable", "(Lcom/sun/source/tree/VariableTree;Ljava/lang/Void;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC},
	{"visitVariable", "(Lcom/sun/source/tree/VariableTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Analyzer$TreeRewriter_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Analyzer$TreeRewriter", "com.sun.tools.javac.comp.Analyzer", "TreeRewriter", 0},
	{"com.sun.tools.javac.comp.Analyzer$AnalyzerCopier", "com.sun.tools.javac.comp.Analyzer", "AnalyzerCopier", 0},
	{}
};

$ClassInfo _Analyzer$TreeRewriter_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Analyzer$TreeRewriter",
	"com.sun.tools.javac.comp.Analyzer$AnalyzerCopier",
	nullptr,
	_Analyzer$TreeRewriter_FieldInfo_,
	_Analyzer$TreeRewriter_MethodInfo_,
	nullptr,
	nullptr,
	_Analyzer$TreeRewriter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Analyzer"
};

$Object* allocate$Analyzer$TreeRewriter($Class* clazz) {
	return $of($alloc(Analyzer$TreeRewriter));
}

void Analyzer$TreeRewriter::init$($Analyzer* this$0, $Analyzer$RewritingContext* rewriting, $JCTree* wrappedTree) {
	$set(this, this$0, this$0);
	$Analyzer$AnalyzerCopier::init$(this$0);
	$set(this, rewriting, rewriting);
	$set(this, wrappedTree, wrappedTree);
}

$JCTree* Analyzer$TreeRewriter::copy($JCTree* tree, $Void* _unused) {
	$var($JCTree, newTree, $Analyzer$AnalyzerCopier::copy(tree, ($Object*)nullptr));
	if (tree != nullptr && tree == $nc(this->rewriting)->oldTree) {
		$Assert::checkNonNull($nc(this->rewriting)->replacement);
		$assign(newTree, $nc(this->rewriting)->replacement);
	}
	return newTree;
}

$JCTree* Analyzer$TreeRewriter::visitVariable($VariableTree* node, $Void* p) {
	$var($JCTree, result, $cast($JCTree, $Analyzer$AnalyzerCopier::visitVariable(node, p)));
	if ($equals(node, this->wrappedTree)) {
		$nc($nc(($cast($JCTree$JCVariableDecl, result)))->mods)->flags &= (uint64_t)$Flags::FINAL;
	}
	return result;
}

$Object* Analyzer$TreeRewriter::visitVariable($VariableTree* node, Object$* p) {
	return $of(this->visitVariable(node, $cast($Void, p)));
}

$JCTree* Analyzer$TreeRewriter::copy($JCTree* tree, Object$* _unused) {
	return this->copy(tree, $cast($Void, _unused));
}

Analyzer$TreeRewriter::Analyzer$TreeRewriter() {
}

$Class* Analyzer$TreeRewriter::load$($String* name, bool initialize) {
	$loadClass(Analyzer$TreeRewriter, name, initialize, &_Analyzer$TreeRewriter_ClassInfo_, allocate$Analyzer$TreeRewriter);
	return class$;
}

$Class* Analyzer$TreeRewriter::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com