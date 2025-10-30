#include <com/sun/tools/javac/comp/Analyzer$RedundantTypeArgAnalyzer.h>

#include <com/sun/tools/javac/comp/Analyzer$AnalyzerCopier.h>
#include <com/sun/tools/javac/comp/Analyzer$AnalyzerMode.h>
#include <com/sun/tools/javac/comp/Analyzer$StatementAnalyzer.h>
#include <com/sun/tools/javac/comp/Analyzer.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Warnings.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodInvocation.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeCopier.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log.h>
#include <jcpp.h>

#undef APPLY
#undef METHOD

using $Analyzer = ::com::sun::tools::javac::comp::Analyzer;
using $Analyzer$AnalyzerCopier = ::com::sun::tools::javac::comp::Analyzer$AnalyzerCopier;
using $Analyzer$AnalyzerMode = ::com::sun::tools::javac::comp::Analyzer$AnalyzerMode;
using $Analyzer$StatementAnalyzer = ::com::sun::tools::javac::comp::Analyzer$StatementAnalyzer;
using $CompilerProperties$Warnings = ::com::sun::tools::javac::resources::CompilerProperties$Warnings;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCMethodInvocation = ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation;
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeCopier = ::com::sun::tools::javac::tree::TreeCopier;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Warning = ::com::sun::tools::javac::util::JCDiagnostic$Warning;
using $List = ::com::sun::tools::javac::util::List;
using $Log = ::com::sun::tools::javac::util::Log;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Analyzer$RedundantTypeArgAnalyzer_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Analyzer;", nullptr, $FINAL | $SYNTHETIC, $field(Analyzer$RedundantTypeArgAnalyzer, this$0)},
	{}
};

$MethodInfo _Analyzer$RedundantTypeArgAnalyzer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Analyzer;)V", nullptr, 0, $method(static_cast<void(Analyzer$RedundantTypeArgAnalyzer::*)($Analyzer*)>(&Analyzer$RedundantTypeArgAnalyzer::init$))},
	{"match", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;)Z", nullptr, 0},
	{"match", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $VOLATILE | $SYNTHETIC},
	{"process", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;Z)V", nullptr, 0},
	{"process", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;Z)V", nullptr, $VOLATILE | $SYNTHETIC},
	{"rewrite", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;>;", 0},
	{"rewrite", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/util/List;", nullptr, $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Analyzer$RedundantTypeArgAnalyzer_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Analyzer$RedundantTypeArgAnalyzer", "com.sun.tools.javac.comp.Analyzer", "RedundantTypeArgAnalyzer", 0},
	{"com.sun.tools.javac.comp.Analyzer$StatementAnalyzer", "com.sun.tools.javac.comp.Analyzer", "StatementAnalyzer", $ABSTRACT},
	{"com.sun.tools.javac.tree.JCTree$JCMethodInvocation", "com.sun.tools.javac.tree.JCTree", "JCMethodInvocation", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Analyzer$RedundantTypeArgAnalyzer_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Analyzer$RedundantTypeArgAnalyzer",
	"com.sun.tools.javac.comp.Analyzer$StatementAnalyzer",
	nullptr,
	_Analyzer$RedundantTypeArgAnalyzer_FieldInfo_,
	_Analyzer$RedundantTypeArgAnalyzer_MethodInfo_,
	"Lcom/sun/tools/javac/comp/Analyzer$StatementAnalyzer<Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;>;",
	nullptr,
	_Analyzer$RedundantTypeArgAnalyzer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Analyzer"
};

$Object* allocate$Analyzer$RedundantTypeArgAnalyzer($Class* clazz) {
	return $of($alloc(Analyzer$RedundantTypeArgAnalyzer));
}

void Analyzer$RedundantTypeArgAnalyzer::init$($Analyzer* this$0) {
	$set(this, this$0, this$0);
	$init($Analyzer$AnalyzerMode);
	$init($JCTree$Tag);
	$Analyzer$StatementAnalyzer::init$(this$0, $Analyzer$AnalyzerMode::METHOD, $JCTree$Tag::APPLY);
}

bool Analyzer$RedundantTypeArgAnalyzer::match($JCTree$JCMethodInvocation* tree) {
	return $nc(tree)->typeargs != nullptr && $nc(tree->typeargs)->nonEmpty();
}

$List* Analyzer$RedundantTypeArgAnalyzer::rewrite($JCTree$JCMethodInvocation* oldTree) {
	$var($JCTree$JCMethodInvocation, app, $cast($JCTree$JCMethodInvocation, $nc(this->this$0->copier)->copy(static_cast<$JCTree*>(oldTree))));
	$set($nc(app), typeargs, $List::nil());
	return $List::of(app);
}

void Analyzer$RedundantTypeArgAnalyzer::process($JCTree$JCMethodInvocation* oldTree, $JCTree$JCMethodInvocation* newTree, bool hasErrors) {
	if (!hasErrors) {
		$init($CompilerProperties$Warnings);
		$nc(this->this$0->log)->warning(static_cast<$JCDiagnostic$DiagnosticPosition*>(oldTree), $CompilerProperties$Warnings::MethodRedundantTypeargs);
	}
}

void Analyzer$RedundantTypeArgAnalyzer::process($JCTree* oldTree, $JCTree* newTree, bool hasErrors) {
	this->process($cast($JCTree$JCMethodInvocation, oldTree), $cast($JCTree$JCMethodInvocation, newTree), hasErrors);
}

$List* Analyzer$RedundantTypeArgAnalyzer::rewrite($JCTree* oldTree) {
	return this->rewrite($cast($JCTree$JCMethodInvocation, oldTree));
}

bool Analyzer$RedundantTypeArgAnalyzer::match($JCTree* tree) {
	return this->match($cast($JCTree$JCMethodInvocation, tree));
}

Analyzer$RedundantTypeArgAnalyzer::Analyzer$RedundantTypeArgAnalyzer() {
}

$Class* Analyzer$RedundantTypeArgAnalyzer::load$($String* name, bool initialize) {
	$loadClass(Analyzer$RedundantTypeArgAnalyzer, name, initialize, &_Analyzer$RedundantTypeArgAnalyzer_ClassInfo_, allocate$Analyzer$RedundantTypeArgAnalyzer);
	return class$;
}

$Class* Analyzer$RedundantTypeArgAnalyzer::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com