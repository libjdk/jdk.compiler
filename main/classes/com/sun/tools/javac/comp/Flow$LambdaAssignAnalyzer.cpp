#include <com/sun/tools/javac/comp/Flow$LambdaAssignAnalyzer.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Flow$AssignAnalyzer.h>
#include <com/sun/tools/javac/comp/Flow.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <jcpp.h>

#undef MTH

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Flow = ::com::sun::tools::javac::comp::Flow;
using $Flow$AssignAnalyzer = ::com::sun::tools::javac::comp::Flow$AssignAnalyzer;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Flow$LambdaAssignAnalyzer_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Flow;", nullptr, $FINAL | $SYNTHETIC, $field(Flow$LambdaAssignAnalyzer, this$0)},
	{"enclosedSymbols", "Lcom/sun/tools/javac/code/Scope$WriteableScope;", nullptr, 0, $field(Flow$LambdaAssignAnalyzer, enclosedSymbols)},
	{"inLambda", "Z", nullptr, 0, $field(Flow$LambdaAssignAnalyzer, inLambda)},
	{}
};

$MethodInfo _Flow$LambdaAssignAnalyzer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Flow;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", 0, $method(static_cast<void(Flow$LambdaAssignAnalyzer::*)($Flow*,$Env*)>(&Flow$LambdaAssignAnalyzer::init$))},
	{"trackable", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;)Z", nullptr, $PROTECTED},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC},
	{"visitVarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Flow$LambdaAssignAnalyzer_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Flow$LambdaAssignAnalyzer", "com.sun.tools.javac.comp.Flow", "LambdaAssignAnalyzer", 0},
	{"com.sun.tools.javac.comp.Flow$AssignAnalyzer", "com.sun.tools.javac.comp.Flow", "AssignAnalyzer", $PUBLIC},
	{}
};

$ClassInfo _Flow$LambdaAssignAnalyzer_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Flow$LambdaAssignAnalyzer",
	"com.sun.tools.javac.comp.Flow$AssignAnalyzer",
	nullptr,
	_Flow$LambdaAssignAnalyzer_FieldInfo_,
	_Flow$LambdaAssignAnalyzer_MethodInfo_,
	nullptr,
	nullptr,
	_Flow$LambdaAssignAnalyzer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Flow"
};

$Object* allocate$Flow$LambdaAssignAnalyzer($Class* clazz) {
	return $of($alloc(Flow$LambdaAssignAnalyzer));
}

void Flow$LambdaAssignAnalyzer::init$($Flow* this$0, $Env* env) {
	$set(this, this$0, this$0);
	$Flow$AssignAnalyzer::init$(this$0);
	$set(this, enclosedSymbols, $Scope$WriteableScope::create($nc($nc(env)->enclClass)->sym));
}

void Flow$LambdaAssignAnalyzer::visitLambda($JCTree$JCLambda* tree) {
	if (this->inLambda) {
		return;
	}
	this->inLambda = true;
	{
		$var($Throwable, var$0, nullptr);
		try {
			$Flow$AssignAnalyzer::visitLambda(tree);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			this->inLambda = false;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Flow$LambdaAssignAnalyzer::visitVarDef($JCTree$JCVariableDecl* tree) {
	$nc(this->enclosedSymbols)->enter($nc(tree)->sym);
	$Flow$AssignAnalyzer::visitVarDef(tree);
}

bool Flow$LambdaAssignAnalyzer::trackable($Symbol$VarSymbol* sym) {
	$init($Kinds$Kind);
	return $nc(this->enclosedSymbols)->includes(sym) && $nc($nc(sym)->owner)->kind == $Kinds$Kind::MTH;
}

void Flow$LambdaAssignAnalyzer::visitClassDef($JCTree$JCClassDecl* tree) {
}

Flow$LambdaAssignAnalyzer::Flow$LambdaAssignAnalyzer() {
}

$Class* Flow$LambdaAssignAnalyzer::load$($String* name, bool initialize) {
	$loadClass(Flow$LambdaAssignAnalyzer, name, initialize, &_Flow$LambdaAssignAnalyzer_ClassInfo_, allocate$Flow$LambdaAssignAnalyzer);
	return class$;
}

$Class* Flow$LambdaAssignAnalyzer::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com