#include <com/sun/tools/javac/comp/Analyzer$DiamondInitializer.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Analyzer$AnalyzerCopier.h>
#include <com/sun/tools/javac/comp/Analyzer$AnalyzerMode.h>
#include <com/sun/tools/javac/comp/Analyzer$StatementAnalyzer.h>
#include <com/sun/tools/javac/comp/Analyzer.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Warnings.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeApply.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeCopier.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef DIAMOND
#undef NEWCLASS
#undef TYPEAPPLY

using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Analyzer = ::com::sun::tools::javac::comp::Analyzer;
using $Analyzer$AnalyzerCopier = ::com::sun::tools::javac::comp::Analyzer$AnalyzerCopier;
using $Analyzer$AnalyzerMode = ::com::sun::tools::javac::comp::Analyzer$AnalyzerMode;
using $Analyzer$StatementAnalyzer = ::com::sun::tools::javac::comp::Analyzer$StatementAnalyzer;
using $CompilerProperties$Warnings = ::com::sun::tools::javac::resources::CompilerProperties$Warnings;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
using $JCTree$JCTypeApply = ::com::sun::tools::javac::tree::JCTree$JCTypeApply;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeCopier = ::com::sun::tools::javac::tree::TreeCopier;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Warning = ::com::sun::tools::javac::util::JCDiagnostic$Warning;
using $List = ::com::sun::tools::javac::util::List;
using $Log = ::com::sun::tools::javac::util::Log;
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

$FieldInfo _Analyzer$DiamondInitializer_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Analyzer;", nullptr, $FINAL | $SYNTHETIC, $field(Analyzer$DiamondInitializer, this$0)},
	{}
};

$MethodInfo _Analyzer$DiamondInitializer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Analyzer;)V", nullptr, 0, $method(static_cast<void(Analyzer$DiamondInitializer::*)($Analyzer*)>(&Analyzer$DiamondInitializer::init$))},
	{"match", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)Z", nullptr, 0},
	{"match", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $VOLATILE | $SYNTHETIC},
	{"process", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;Lcom/sun/tools/javac/tree/JCTree$JCNewClass;Z)V", nullptr, 0},
	{"process", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;Z)V", nullptr, $VOLATILE | $SYNTHETIC},
	{"rewrite", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCNewClass;>;", 0},
	{"rewrite", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/util/List;", nullptr, $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Analyzer$DiamondInitializer_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Analyzer$DiamondInitializer", "com.sun.tools.javac.comp.Analyzer", "DiamondInitializer", 0},
	{"com.sun.tools.javac.comp.Analyzer$StatementAnalyzer", "com.sun.tools.javac.comp.Analyzer", "StatementAnalyzer", $ABSTRACT},
	{"com.sun.tools.javac.tree.JCTree$JCNewClass", "com.sun.tools.javac.tree.JCTree", "JCNewClass", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Analyzer$DiamondInitializer_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Analyzer$DiamondInitializer",
	"com.sun.tools.javac.comp.Analyzer$StatementAnalyzer",
	nullptr,
	_Analyzer$DiamondInitializer_FieldInfo_,
	_Analyzer$DiamondInitializer_MethodInfo_,
	"Lcom/sun/tools/javac/comp/Analyzer$StatementAnalyzer<Lcom/sun/tools/javac/tree/JCTree$JCNewClass;Lcom/sun/tools/javac/tree/JCTree$JCNewClass;>;",
	nullptr,
	_Analyzer$DiamondInitializer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Analyzer"
};

$Object* allocate$Analyzer$DiamondInitializer($Class* clazz) {
	return $of($alloc(Analyzer$DiamondInitializer));
}

void Analyzer$DiamondInitializer::init$($Analyzer* this$0) {
	$set(this, this$0, this$0);
	$init($Analyzer$AnalyzerMode);
	$init($JCTree$Tag);
	$Analyzer$StatementAnalyzer::init$(this$0, $Analyzer$AnalyzerMode::DIAMOND, $JCTree$Tag::NEWCLASS);
}

bool Analyzer$DiamondInitializer::match($JCTree$JCNewClass* tree) {
	$init($JCTree$Tag);
	bool var$0 = $nc($nc(tree)->clazz)->hasTag($JCTree$Tag::TYPEAPPLY);
	return var$0 && !$TreeInfo::isDiamond(tree) && (tree->def == nullptr || this->this$0->allowDiamondWithAnonymousClassCreation);
}

$List* Analyzer$DiamondInitializer::rewrite($JCTree$JCNewClass* oldTree) {
	$init($JCTree$Tag);
	if ($nc($nc(oldTree)->clazz)->hasTag($JCTree$Tag::TYPEAPPLY)) {
		$var($JCTree$JCNewClass, nc, $cast($JCTree$JCNewClass, $nc(this->this$0->copier)->copy(static_cast<$JCTree*>(oldTree))));
		$set($nc($cast($JCTree$JCTypeApply, $nc(nc)->clazz)), arguments, $List::nil());
		return $List::of(nc);
	} else {
		return $List::of(oldTree);
	}
}

void Analyzer$DiamondInitializer::process($JCTree$JCNewClass* oldTree, $JCTree$JCNewClass* newTree, bool hasErrors) {
	$useLocalCurrentObjectStackCache();
	if (!hasErrors) {
		$var($List, inferredArgs, nullptr);
		$var($List, explicitArgs, nullptr);
		if ($nc(oldTree)->def != nullptr) {
			$assign(inferredArgs, $nc($nc($nc(newTree)->def)->implementing)->nonEmpty() ? $nc($nc(($cast($JCTree$JCExpression, $($nc($nc($nc(newTree)->def)->implementing)->get(0)))))->type)->getTypeArguments() : $nc($nc($nc(newTree->def)->extending)->type)->getTypeArguments());
			$assign(explicitArgs, $nc($nc(oldTree->def)->implementing)->nonEmpty() ? $nc($nc(($cast($JCTree$JCExpression, $($nc($nc(oldTree->def)->implementing)->get(0)))))->type)->getTypeArguments() : $nc($nc($nc(oldTree->def)->extending)->type)->getTypeArguments());
		} else {
			$assign(inferredArgs, $nc($nc(newTree)->type)->getTypeArguments());
			$assign(explicitArgs, $nc(oldTree->type)->getTypeArguments());
		}
		{
			$var($Iterator, i$, $nc(inferredArgs)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, t, $cast($Type, i$->next()));
				{
					if (!$nc(this->this$0->types)->isSameType(t, $cast($Type, $nc(explicitArgs)->head))) {
						return;
					}
					$assign(explicitArgs, $nc(explicitArgs)->tail);
				}
			}
		}
		$init($CompilerProperties$Warnings);
		$nc(this->this$0->log)->warning(static_cast<$JCDiagnostic$DiagnosticPosition*>($nc(oldTree)->clazz), $CompilerProperties$Warnings::DiamondRedundantArgs);
	}
}

void Analyzer$DiamondInitializer::process($JCTree* oldTree, $JCTree* newTree, bool hasErrors) {
	this->process($cast($JCTree$JCNewClass, oldTree), $cast($JCTree$JCNewClass, newTree), hasErrors);
}

$List* Analyzer$DiamondInitializer::rewrite($JCTree* oldTree) {
	return this->rewrite($cast($JCTree$JCNewClass, oldTree));
}

bool Analyzer$DiamondInitializer::match($JCTree* tree) {
	return this->match($cast($JCTree$JCNewClass, tree));
}

Analyzer$DiamondInitializer::Analyzer$DiamondInitializer() {
}

$Class* Analyzer$DiamondInitializer::load$($String* name, bool initialize) {
	$loadClass(Analyzer$DiamondInitializer, name, initialize, &_Analyzer$DiamondInitializer_ClassInfo_, allocate$Analyzer$DiamondInitializer);
	return class$;
}

$Class* Analyzer$DiamondInitializer::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com