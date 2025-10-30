#include <com/sun/tools/javac/comp/Analyzer$LambdaAnalyzer.h>

#include <com/sun/source/tree/ModifiersTree.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Analyzer$AnalyzerCopier.h>
#include <com/sun/tools/javac/comp/Analyzer$AnalyzerMode.h>
#include <com/sun/tools/javac/comp/Analyzer$StatementAnalyzer.h>
#include <com/sun/tools/javac/comp/Analyzer.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Warnings.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeCopier.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef CLASS
#undef LAMBDA
#undef METHODDEF
#undef NEWCLASS

using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Analyzer = ::com::sun::tools::javac::comp::Analyzer;
using $Analyzer$AnalyzerCopier = ::com::sun::tools::javac::comp::Analyzer$AnalyzerCopier;
using $Analyzer$AnalyzerMode = ::com::sun::tools::javac::comp::Analyzer$AnalyzerMode;
using $Analyzer$StatementAnalyzer = ::com::sun::tools::javac::comp::Analyzer$StatementAnalyzer;
using $CompilerProperties$Warnings = ::com::sun::tools::javac::resources::CompilerProperties$Warnings;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCBlock = ::com::sun::tools::javac::tree::JCTree$JCBlock;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeCopier = ::com::sun::tools::javac::tree::TreeCopier;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Warning = ::com::sun::tools::javac::util::JCDiagnostic$Warning;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
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

$FieldInfo _Analyzer$LambdaAnalyzer_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Analyzer;", nullptr, $FINAL | $SYNTHETIC, $field(Analyzer$LambdaAnalyzer, this$0)},
	{}
};

$MethodInfo _Analyzer$LambdaAnalyzer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Analyzer;)V", nullptr, 0, $method(static_cast<void(Analyzer$LambdaAnalyzer::*)($Analyzer*)>(&Analyzer$LambdaAnalyzer::init$))},
	{"decls", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;", $PRIVATE, $method(static_cast<$List*(Analyzer$LambdaAnalyzer::*)($JCTree$JCClassDecl*)>(&Analyzer$LambdaAnalyzer::decls))},
	{"match", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)Z", nullptr, 0},
	{"match", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $VOLATILE | $SYNTHETIC},
	{"process", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;Lcom/sun/tools/javac/tree/JCTree$JCLambda;Z)V", nullptr, 0},
	{"process", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;Z)V", nullptr, $VOLATILE | $SYNTHETIC},
	{"rewrite", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCLambda;>;", 0},
	{"rewrite", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/util/List;", nullptr, $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Analyzer$LambdaAnalyzer_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Analyzer$LambdaAnalyzer", "com.sun.tools.javac.comp.Analyzer", "LambdaAnalyzer", 0},
	{"com.sun.tools.javac.comp.Analyzer$StatementAnalyzer", "com.sun.tools.javac.comp.Analyzer", "StatementAnalyzer", $ABSTRACT},
	{"com.sun.tools.javac.tree.JCTree$JCNewClass", "com.sun.tools.javac.tree.JCTree", "JCNewClass", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCLambda", "com.sun.tools.javac.tree.JCTree", "JCLambda", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Analyzer$LambdaAnalyzer_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Analyzer$LambdaAnalyzer",
	"com.sun.tools.javac.comp.Analyzer$StatementAnalyzer",
	nullptr,
	_Analyzer$LambdaAnalyzer_FieldInfo_,
	_Analyzer$LambdaAnalyzer_MethodInfo_,
	"Lcom/sun/tools/javac/comp/Analyzer$StatementAnalyzer<Lcom/sun/tools/javac/tree/JCTree$JCNewClass;Lcom/sun/tools/javac/tree/JCTree$JCLambda;>;",
	nullptr,
	_Analyzer$LambdaAnalyzer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Analyzer"
};

$Object* allocate$Analyzer$LambdaAnalyzer($Class* clazz) {
	return $of($alloc(Analyzer$LambdaAnalyzer));
}

void Analyzer$LambdaAnalyzer::init$($Analyzer* this$0) {
	$set(this, this$0, this$0);
	$init($Analyzer$AnalyzerMode);
	$init($JCTree$Tag);
	$Analyzer$StatementAnalyzer::init$(this$0, $Analyzer$AnalyzerMode::LAMBDA, $JCTree$Tag::NEWCLASS);
}

bool Analyzer$LambdaAnalyzer::match($JCTree$JCNewClass* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Type, clazztype, $nc($nc(tree)->clazz)->type);
	$init($TypeTag);
	bool var$1 = tree->def != nullptr && $nc(clazztype)->hasTag($TypeTag::CLASS);
	bool var$0 = var$1 && $nc(this->this$0->types)->isFunctionalInterface(clazztype->tsym);
	return var$0 && $nc($(decls(tree->def)))->length() == 1;
}

$List* Analyzer$LambdaAnalyzer::decls($JCTree$JCClassDecl* decl) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, decls, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc($nc(decl)->defs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree, t, $cast($JCTree, i$->next()));
			{
				$init($JCTree$Tag);
				if ($nc(t)->hasTag($JCTree$Tag::METHODDEF)) {
					$var($JCTree$JCMethodDecl, md, $cast($JCTree$JCMethodDecl, t));
					if (((int64_t)($nc($($cast($JCTree$JCModifiers, md->getModifiers())))->flags & (uint64_t)(int64_t)0x0000001000000000)) == 0) {
						decls->add(md);
					}
				} else {
					decls->add(t);
				}
			}
		}
	}
	return decls->toList();
}

$List* Analyzer$LambdaAnalyzer::rewrite($JCTree$JCNewClass* oldTree) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCMethodDecl, md, $cast($JCTree$JCMethodDecl, $nc(this->this$0->copier)->copy($cast($JCTree, $nc($(decls($nc(oldTree)->def)))->head))));
	$var($List, params, $nc(md)->params);
	$var($JCTree$JCBlock, body, md->body);
	$var($JCTree$JCLambda, newTree, $nc($($nc(this->this$0->make)->at(static_cast<$JCDiagnostic$DiagnosticPosition*>(oldTree))))->Lambda(params, body));
	return $List::of(newTree);
}

void Analyzer$LambdaAnalyzer::process($JCTree$JCNewClass* oldTree, $JCTree$JCLambda* newTree, bool hasErrors) {
	if (!hasErrors) {
		$init($CompilerProperties$Warnings);
		$nc(this->this$0->log)->warning(static_cast<$JCDiagnostic$DiagnosticPosition*>($nc(oldTree)->def), $CompilerProperties$Warnings::PotentialLambdaFound);
	}
}

void Analyzer$LambdaAnalyzer::process($JCTree* oldTree, $JCTree* newTree, bool hasErrors) {
	this->process($cast($JCTree$JCNewClass, oldTree), $cast($JCTree$JCLambda, newTree), hasErrors);
}

$List* Analyzer$LambdaAnalyzer::rewrite($JCTree* oldTree) {
	return this->rewrite($cast($JCTree$JCNewClass, oldTree));
}

bool Analyzer$LambdaAnalyzer::match($JCTree* tree) {
	return this->match($cast($JCTree$JCNewClass, tree));
}

Analyzer$LambdaAnalyzer::Analyzer$LambdaAnalyzer() {
}

$Class* Analyzer$LambdaAnalyzer::load$($String* name, bool initialize) {
	$loadClass(Analyzer$LambdaAnalyzer, name, initialize, &_Analyzer$LambdaAnalyzer_ClassInfo_, allocate$Analyzer$LambdaAnalyzer);
	return class$;
}

$Class* Analyzer$LambdaAnalyzer::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com