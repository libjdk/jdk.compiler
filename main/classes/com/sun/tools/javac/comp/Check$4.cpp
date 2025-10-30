#include <com/sun/tools/javac/comp/Check$4.h>

#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/code/Lint.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/comp/AttrContext.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/tree/JCTree$JCAnnotation.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeApply.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/annotation/Documented.h>
#include <jcpp.h>

#undef EXPORTS
#undef MTH
#undef PCK
#undef TYP
#undef TYPEVAR

using $AnnoConstruct = ::com::sun::tools::javac::code::AnnoConstruct;
using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Lint = ::com::sun::tools::javac::code::Lint;
using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $AttrContext = ::com::sun::tools::javac::comp::AttrContext;
using $Check = ::com::sun::tools::javac::comp::Check;
using $Env = ::com::sun::tools::javac::comp::Env;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCAnnotation = ::com::sun::tools::javac::tree::JCTree$JCAnnotation;
using $JCTree$JCBlock = ::com::sun::tools::javac::tree::JCTree$JCBlock;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCTypeApply = ::com::sun::tools::javac::tree::JCTree$JCTypeApply;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $Documented = ::java::lang::annotation::Documented;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Check$4_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Check;", nullptr, $FINAL | $SYNTHETIC, $field(Check$4, this$0)},
	{"val$toplevel", "Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;", nullptr, $FINAL | $SYNTHETIC, $field(Check$4, val$toplevel)},
	{"val$check", "Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;", nullptr, $FINAL | $SYNTHETIC, $field(Check$4, val$check)},
	{"val$env", "Lcom/sun/tools/javac/comp/Env;", nullptr, $FINAL | $SYNTHETIC, $field(Check$4, val$env)},
	{"lint", "Lcom/sun/tools/javac/code/Lint;", nullptr, 0, $field(Check$4, lint)},
	{"inSuperType", "Z", nullptr, 0, $field(Check$4, inSuperType)},
	{}
};

$MethodInfo _Check$4_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Check;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)V", nullptr, 0, $method(static_cast<void(Check$4::*)($Check*,$Env*,$JCTree$JCClassDecl*,$JCTree$JCCompilationUnit*)>(&Check$4::init$))},
	{"visitAnnotation", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;)V", nullptr, $PUBLIC},
	{"visitBlock", "(Lcom/sun/tools/javac/tree/JCTree$JCBlock;)V", nullptr, $PUBLIC},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"visitIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCIdent;)V", nullptr, $PUBLIC},
	{"visitMethodDef", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", nullptr, $PUBLIC},
	{"visitSelect", "(Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;)V", nullptr, $PUBLIC},
	{"visitTypeApply", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeApply;)V", nullptr, $PUBLIC},
	{"visitVarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Check$4_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Check",
	"checkLeaksNotAccessible",
	"(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V"
};

$InnerClassInfo _Check$4_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Check$4", nullptr, nullptr, 0},
	{"com.sun.tools.javac.tree.JCTree$JCClassDecl", "com.sun.tools.javac.tree.JCTree", "JCClassDecl", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Check$4_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Check$4",
	"com.sun.tools.javac.tree.TreeScanner",
	nullptr,
	_Check$4_FieldInfo_,
	_Check$4_MethodInfo_,
	nullptr,
	&_Check$4_EnclosingMethodInfo_,
	_Check$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Check"
};

$Object* allocate$Check$4($Class* clazz) {
	return $of($alloc(Check$4));
}

void Check$4::init$($Check* this$0, $Env* val$env, $JCTree$JCClassDecl* val$check, $JCTree$JCCompilationUnit* val$toplevel) {
	$set(this, this$0, this$0);
	$set(this, val$env, val$env);
	$set(this, val$check, val$check);
	$set(this, val$toplevel, val$toplevel);
	$TreeScanner::init$();
	$set(this, lint, $nc(($cast($AttrContext, $nc(this->val$env)->info)))->lint);
}

void Check$4::visitBlock($JCTree$JCBlock* tree) {
}

void Check$4::visitMethodDef($JCTree$JCMethodDecl* tree) {
	$useLocalCurrentObjectStackCache();
	if (!this->this$0->isAPISymbol($nc(tree)->sym)) {
		return;
	}
	$var($Lint, prevLint, this->lint);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this, lint, $nc(this->lint)->augment(static_cast<$Symbol*>($nc(tree)->sym)));
			$init($Lint$LintCategory);
			if ($nc(this->lint)->isEnabled($Lint$LintCategory::EXPORTS)) {
				$TreeScanner::visitMethodDef(tree);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, lint, prevLint);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Check$4::visitVarDef($JCTree$JCVariableDecl* tree) {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$Kind);
	if (!this->this$0->isAPISymbol($nc(tree)->sym) && $nc($nc($nc(tree)->sym)->owner)->kind != $Kinds$Kind::MTH) {
		return;
	}
	$var($Lint, prevLint, this->lint);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this, lint, $nc(this->lint)->augment(static_cast<$Symbol*>($nc(tree)->sym)));
			$init($Lint$LintCategory);
			if ($nc(this->lint)->isEnabled($Lint$LintCategory::EXPORTS)) {
				scan(static_cast<$JCTree*>($nc(tree)->mods));
				scan(static_cast<$JCTree*>($nc(tree)->vartype));
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, lint, prevLint);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Check$4::visitClassDef($JCTree$JCClassDecl* tree) {
	$useLocalCurrentObjectStackCache();
	if (tree != this->val$check) {
		return;
	}
	if (!this->this$0->isAPISymbol($nc(tree)->sym)) {
		return;
	}
	$var($Lint, prevLint, this->lint);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this, lint, $nc(this->lint)->augment(static_cast<$Symbol*>($nc(tree)->sym)));
			$init($Lint$LintCategory);
			if ($nc(this->lint)->isEnabled($Lint$LintCategory::EXPORTS)) {
				scan(static_cast<$JCTree*>($nc(tree)->mods));
				scan($nc(tree)->typarams);
				{
					$var($Throwable, var$1, nullptr);
					try {
						this->inSuperType = true;
						scan(static_cast<$JCTree*>($nc(tree)->extending));
						scan($nc(tree)->implementing);
					} catch ($Throwable& var$2) {
						$assign(var$1, var$2);
					} /*finally*/ {
						this->inSuperType = false;
					}
					if (var$1 != nullptr) {
						$throw(var$1);
					}
				}
				scan($nc(tree)->defs);
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			$set(this, lint, prevLint);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Check$4::visitTypeApply($JCTree$JCTypeApply* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->clazz));
	bool oldInSuperType = this->inSuperType;
	{
		$var($Throwable, var$0, nullptr);
		try {
			this->inSuperType = false;
			scan($nc(tree)->arguments);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			this->inSuperType = oldInSuperType;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Check$4::visitIdent($JCTree$JCIdent* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, sym, $TreeInfo::symbol(tree));
	$init($Kinds$Kind);
	$init($TypeTag);
	if ($nc(sym)->kind == $Kinds$Kind::TYP && !$nc(sym->type)->hasTag($TypeTag::TYPEVAR)) {
		this->this$0->checkVisible($($nc(tree)->pos()), sym, $nc(this->val$toplevel)->packge, this->inSuperType);
	}
}

void Check$4::visitSelect($JCTree$JCFieldAccess* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, sym, $TreeInfo::symbol(tree));
	$var($Symbol, sitesym, $TreeInfo::symbol($nc(tree)->selected));
	$init($Kinds$Kind);
	if ($nc(sym)->kind == $Kinds$Kind::TYP && $nc(sitesym)->kind == $Kinds$Kind::PCK) {
		this->this$0->checkVisible($($nc(tree)->pos()), sym, $nc(this->val$toplevel)->packge, this->inSuperType);
	} else {
		$TreeScanner::visitSelect(tree);
	}
}

void Check$4::visitAnnotation($JCTree$JCAnnotation* tree) {
	$load($Documented);
	if ($nc($nc($nc($nc(tree)->attribute)->type)->tsym)->getAnnotation($Documented::class$) != nullptr) {
		$TreeScanner::visitAnnotation(tree);
	}
}

Check$4::Check$4() {
}

$Class* Check$4::load$($String* name, bool initialize) {
	$loadClass(Check$4, name, initialize, &_Check$4_ClassInfo_, allocate$Check$4);
	return class$;
}

$Class* Check$4::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com