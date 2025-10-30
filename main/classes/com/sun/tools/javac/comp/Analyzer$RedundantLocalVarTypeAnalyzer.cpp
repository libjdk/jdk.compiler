#include <com/sun/tools/javac/comp/Analyzer$RedundantLocalVarTypeAnalyzer.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/Analyzer$RedundantLocalVarTypeAnalyzerBase.h>
#include <com/sun/tools/javac/comp/Analyzer.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

#undef MTH
#undef VARDEF

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Analyzer = ::com::sun::tools::javac::comp::Analyzer;
using $Analyzer$RedundantLocalVarTypeAnalyzerBase = ::com::sun::tools::javac::comp::Analyzer$RedundantLocalVarTypeAnalyzerBase;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCDiagnostic$Fragment = ::com::sun::tools::javac::util::JCDiagnostic$Fragment;
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

$FieldInfo _Analyzer$RedundantLocalVarTypeAnalyzer_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Analyzer;", nullptr, $FINAL | $SYNTHETIC, $field(Analyzer$RedundantLocalVarTypeAnalyzer, this$0)},
	{}
};

$MethodInfo _Analyzer$RedundantLocalVarTypeAnalyzer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Analyzer;)V", nullptr, 0, $method(static_cast<void(Analyzer$RedundantLocalVarTypeAnalyzer::*)($Analyzer*)>(&Analyzer$RedundantLocalVarTypeAnalyzer::init$))},
	{"match", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)Z", nullptr, 0},
	{"match", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $VOLATILE | $SYNTHETIC},
	{"process", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;Z)V", nullptr, 0},
	{"process", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;Z)V", nullptr, $VOLATILE | $SYNTHETIC},
	{"rewrite", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;>;", 0},
	{"rewrite", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/util/List;", nullptr, $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Analyzer$RedundantLocalVarTypeAnalyzer_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Analyzer$RedundantLocalVarTypeAnalyzer", "com.sun.tools.javac.comp.Analyzer", "RedundantLocalVarTypeAnalyzer", 0},
	{"com.sun.tools.javac.comp.Analyzer$RedundantLocalVarTypeAnalyzerBase", "com.sun.tools.javac.comp.Analyzer", "RedundantLocalVarTypeAnalyzerBase", $ABSTRACT},
	{"com.sun.tools.javac.tree.JCTree$JCVariableDecl", "com.sun.tools.javac.tree.JCTree", "JCVariableDecl", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Analyzer$RedundantLocalVarTypeAnalyzer_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Analyzer$RedundantLocalVarTypeAnalyzer",
	"com.sun.tools.javac.comp.Analyzer$RedundantLocalVarTypeAnalyzerBase",
	nullptr,
	_Analyzer$RedundantLocalVarTypeAnalyzer_FieldInfo_,
	_Analyzer$RedundantLocalVarTypeAnalyzer_MethodInfo_,
	"Lcom/sun/tools/javac/comp/Analyzer$RedundantLocalVarTypeAnalyzerBase<Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;>;",
	nullptr,
	_Analyzer$RedundantLocalVarTypeAnalyzer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Analyzer"
};

$Object* allocate$Analyzer$RedundantLocalVarTypeAnalyzer($Class* clazz) {
	return $of($alloc(Analyzer$RedundantLocalVarTypeAnalyzer));
}

void Analyzer$RedundantLocalVarTypeAnalyzer::init$($Analyzer* this$0) {
	$set(this, this$0, this$0);
	$init($JCTree$Tag);
	$Analyzer$RedundantLocalVarTypeAnalyzerBase::init$(this$0, $JCTree$Tag::VARDEF);
}

bool Analyzer$RedundantLocalVarTypeAnalyzer::match($JCTree$JCVariableDecl* tree) {
	$init($Kinds$Kind);
	bool var$0 = $nc($nc($nc(tree)->sym)->owner)->kind == $Kinds$Kind::MTH && tree->init != nullptr && !isImplicitlyTyped(tree);
	return var$0 && $nc(this->this$0->attr)->canInferLocalVarType(tree) == nullptr;
}

$List* Analyzer$RedundantLocalVarTypeAnalyzer::rewrite($JCTree$JCVariableDecl* oldTree) {
	return $List::of($(rewriteVarType(oldTree)));
}

void Analyzer$RedundantLocalVarTypeAnalyzer::process($JCTree$JCVariableDecl* oldTree, $JCTree$JCVariableDecl* newTree, bool hasErrors) {
	processVar(oldTree, newTree, hasErrors);
}

void Analyzer$RedundantLocalVarTypeAnalyzer::process($JCTree* oldTree, $JCTree* newTree, bool hasErrors) {
	this->process($cast($JCTree$JCVariableDecl, oldTree), $cast($JCTree$JCVariableDecl, newTree), hasErrors);
}

$List* Analyzer$RedundantLocalVarTypeAnalyzer::rewrite($JCTree* oldTree) {
	return this->rewrite($cast($JCTree$JCVariableDecl, oldTree));
}

bool Analyzer$RedundantLocalVarTypeAnalyzer::match($JCTree* tree) {
	return this->match($cast($JCTree$JCVariableDecl, tree));
}

Analyzer$RedundantLocalVarTypeAnalyzer::Analyzer$RedundantLocalVarTypeAnalyzer() {
}

$Class* Analyzer$RedundantLocalVarTypeAnalyzer::load$($String* name, bool initialize) {
	$loadClass(Analyzer$RedundantLocalVarTypeAnalyzer, name, initialize, &_Analyzer$RedundantLocalVarTypeAnalyzer_ClassInfo_, allocate$Analyzer$RedundantLocalVarTypeAnalyzer);
	return class$;
}

$Class* Analyzer$RedundantLocalVarTypeAnalyzer::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com