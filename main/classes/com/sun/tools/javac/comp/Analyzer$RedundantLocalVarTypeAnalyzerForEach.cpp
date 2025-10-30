#include <com/sun/tools/javac/comp/Analyzer$RedundantLocalVarTypeAnalyzerForEach.h>

#include <com/sun/tools/javac/comp/Analyzer$AnalyzerCopier.h>
#include <com/sun/tools/javac/comp/Analyzer$RedundantLocalVarTypeAnalyzerBase.h>
#include <com/sun/tools/javac/comp/Analyzer.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCEnhancedForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeCopier.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

#undef FOREACHLOOP

using $Analyzer = ::com::sun::tools::javac::comp::Analyzer;
using $Analyzer$AnalyzerCopier = ::com::sun::tools::javac::comp::Analyzer$AnalyzerCopier;
using $Analyzer$RedundantLocalVarTypeAnalyzerBase = ::com::sun::tools::javac::comp::Analyzer$RedundantLocalVarTypeAnalyzerBase;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCBlock = ::com::sun::tools::javac::tree::JCTree$JCBlock;
using $JCTree$JCEnhancedForLoop = ::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeCopier = ::com::sun::tools::javac::tree::TreeCopier;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Analyzer$RedundantLocalVarTypeAnalyzerForEach_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Analyzer;", nullptr, $FINAL | $SYNTHETIC, $field(Analyzer$RedundantLocalVarTypeAnalyzerForEach, this$0)},
	{}
};

$MethodInfo _Analyzer$RedundantLocalVarTypeAnalyzerForEach_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Analyzer;)V", nullptr, 0, $method(static_cast<void(Analyzer$RedundantLocalVarTypeAnalyzerForEach::*)($Analyzer*)>(&Analyzer$RedundantLocalVarTypeAnalyzerForEach::init$))},
	{"match", "(Lcom/sun/tools/javac/tree/JCTree$JCEnhancedForLoop;)Z", nullptr, 0},
	{"match", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $VOLATILE | $SYNTHETIC},
	{"process", "(Lcom/sun/tools/javac/tree/JCTree$JCEnhancedForLoop;Lcom/sun/tools/javac/tree/JCTree$JCEnhancedForLoop;Z)V", nullptr, 0},
	{"process", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;Z)V", nullptr, $VOLATILE | $SYNTHETIC},
	{"rewrite", "(Lcom/sun/tools/javac/tree/JCTree$JCEnhancedForLoop;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/tree/JCTree$JCEnhancedForLoop;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCEnhancedForLoop;>;", 0},
	{"rewrite", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/util/List;", nullptr, $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Analyzer$RedundantLocalVarTypeAnalyzerForEach_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Analyzer$RedundantLocalVarTypeAnalyzerForEach", "com.sun.tools.javac.comp.Analyzer", "RedundantLocalVarTypeAnalyzerForEach", 0},
	{"com.sun.tools.javac.comp.Analyzer$RedundantLocalVarTypeAnalyzerBase", "com.sun.tools.javac.comp.Analyzer", "RedundantLocalVarTypeAnalyzerBase", $ABSTRACT},
	{"com.sun.tools.javac.tree.JCTree$JCEnhancedForLoop", "com.sun.tools.javac.tree.JCTree", "JCEnhancedForLoop", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Analyzer$RedundantLocalVarTypeAnalyzerForEach_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Analyzer$RedundantLocalVarTypeAnalyzerForEach",
	"com.sun.tools.javac.comp.Analyzer$RedundantLocalVarTypeAnalyzerBase",
	nullptr,
	_Analyzer$RedundantLocalVarTypeAnalyzerForEach_FieldInfo_,
	_Analyzer$RedundantLocalVarTypeAnalyzerForEach_MethodInfo_,
	"Lcom/sun/tools/javac/comp/Analyzer$RedundantLocalVarTypeAnalyzerBase<Lcom/sun/tools/javac/tree/JCTree$JCEnhancedForLoop;>;",
	nullptr,
	_Analyzer$RedundantLocalVarTypeAnalyzerForEach_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Analyzer"
};

$Object* allocate$Analyzer$RedundantLocalVarTypeAnalyzerForEach($Class* clazz) {
	return $of($alloc(Analyzer$RedundantLocalVarTypeAnalyzerForEach));
}

void Analyzer$RedundantLocalVarTypeAnalyzerForEach::init$($Analyzer* this$0) {
	$set(this, this$0, this$0);
	$init($JCTree$Tag);
	$Analyzer$RedundantLocalVarTypeAnalyzerBase::init$(this$0, $JCTree$Tag::FOREACHLOOP);
}

bool Analyzer$RedundantLocalVarTypeAnalyzerForEach::match($JCTree$JCEnhancedForLoop* tree) {
	return !isImplicitlyTyped($nc(tree)->var);
}

$List* Analyzer$RedundantLocalVarTypeAnalyzerForEach::rewrite($JCTree$JCEnhancedForLoop* oldTree) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCEnhancedForLoop, newTree, $cast($JCTree$JCEnhancedForLoop, $nc(this->this$0->copier)->copy(static_cast<$JCTree*>(oldTree))));
	$set($nc(newTree), var, rewriteVarType($nc(oldTree)->var));
	$set(newTree, body, $nc($($nc(this->this$0->make)->at(static_cast<$JCDiagnostic$DiagnosticPosition*>($nc(oldTree)->body))))->Block(0, $($List::nil())));
	return $List::of(newTree);
}

void Analyzer$RedundantLocalVarTypeAnalyzerForEach::process($JCTree$JCEnhancedForLoop* oldTree, $JCTree$JCEnhancedForLoop* newTree, bool hasErrors) {
	processVar($nc(oldTree)->var, $nc(newTree)->var, hasErrors);
}

void Analyzer$RedundantLocalVarTypeAnalyzerForEach::process($JCTree* oldTree, $JCTree* newTree, bool hasErrors) {
	this->process($cast($JCTree$JCEnhancedForLoop, oldTree), $cast($JCTree$JCEnhancedForLoop, newTree), hasErrors);
}

$List* Analyzer$RedundantLocalVarTypeAnalyzerForEach::rewrite($JCTree* oldTree) {
	return this->rewrite($cast($JCTree$JCEnhancedForLoop, oldTree));
}

bool Analyzer$RedundantLocalVarTypeAnalyzerForEach::match($JCTree* tree) {
	return this->match($cast($JCTree$JCEnhancedForLoop, tree));
}

Analyzer$RedundantLocalVarTypeAnalyzerForEach::Analyzer$RedundantLocalVarTypeAnalyzerForEach() {
}

$Class* Analyzer$RedundantLocalVarTypeAnalyzerForEach::load$($String* name, bool initialize) {
	$loadClass(Analyzer$RedundantLocalVarTypeAnalyzerForEach, name, initialize, &_Analyzer$RedundantLocalVarTypeAnalyzerForEach_ClassInfo_, allocate$Analyzer$RedundantLocalVarTypeAnalyzerForEach);
	return class$;
}

$Class* Analyzer$RedundantLocalVarTypeAnalyzerForEach::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com