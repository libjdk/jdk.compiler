#include <com/sun/tools/javac/tree/TreeInfo$DeclScanner.h>

#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCModuleDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCPackageDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeParameter.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCModuleDecl = ::com::sun::tools::javac::tree::JCTree$JCModuleDecl;
using $JCTree$JCPackageDecl = ::com::sun::tools::javac::tree::JCTree$JCPackageDecl;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$JCTypeParameter = ::com::sun::tools::javac::tree::JCTree$JCTypeParameter;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _TreeInfo$DeclScanner_FieldInfo_[] = {
	{"sym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $FINAL, $field(TreeInfo$DeclScanner, sym)},
	{"result", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, 0, $field(TreeInfo$DeclScanner, result)},
	{}
};

$MethodInfo _TreeInfo$DeclScanner_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $method(static_cast<void(TreeInfo$DeclScanner::*)($Symbol*)>(&TreeInfo$DeclScanner::init$))},
	{"scan", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"visitMethodDef", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", nullptr, $PUBLIC},
	{"visitModuleDef", "(Lcom/sun/tools/javac/tree/JCTree$JCModuleDecl;)V", nullptr, $PUBLIC},
	{"visitPackageDef", "(Lcom/sun/tools/javac/tree/JCTree$JCPackageDecl;)V", nullptr, $PUBLIC},
	{"visitTopLevel", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)V", nullptr, $PUBLIC},
	{"visitTypeParameter", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;)V", nullptr, $PUBLIC},
	{"visitVarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TreeInfo$DeclScanner_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.TreeInfo$DeclScanner", "com.sun.tools.javac.tree.TreeInfo", "DeclScanner", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _TreeInfo$DeclScanner_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.tree.TreeInfo$DeclScanner",
	"com.sun.tools.javac.tree.TreeScanner",
	nullptr,
	_TreeInfo$DeclScanner_FieldInfo_,
	_TreeInfo$DeclScanner_MethodInfo_,
	nullptr,
	nullptr,
	_TreeInfo$DeclScanner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.TreeInfo"
};

$Object* allocate$TreeInfo$DeclScanner($Class* clazz) {
	return $of($alloc(TreeInfo$DeclScanner));
}

void TreeInfo$DeclScanner::init$($Symbol* sym) {
	$TreeScanner::init$();
	$set(this, result, nullptr);
	$set(this, sym, sym);
}

void TreeInfo$DeclScanner::scan($JCTree* tree) {
	if (tree != nullptr && this->result == nullptr) {
		tree->accept(this);
	}
}

void TreeInfo$DeclScanner::visitTopLevel($JCTree$JCCompilationUnit* that) {
	if ($equals($nc(that)->packge, this->sym)) {
		$set(this, result, that);
	} else {
		$TreeScanner::visitTopLevel(that);
	}
}

void TreeInfo$DeclScanner::visitModuleDef($JCTree$JCModuleDecl* that) {
	if ($equals($nc(that)->sym, this->sym)) {
		$set(this, result, that);
	}
}

void TreeInfo$DeclScanner::visitPackageDef($JCTree$JCPackageDecl* that) {
	if ($equals($nc(that)->packge, this->sym)) {
		$set(this, result, that);
	} else {
		$TreeScanner::visitPackageDef(that);
	}
}

void TreeInfo$DeclScanner::visitClassDef($JCTree$JCClassDecl* that) {
	if ($equals($nc(that)->sym, this->sym)) {
		$set(this, result, that);
	} else {
		$TreeScanner::visitClassDef(that);
	}
}

void TreeInfo$DeclScanner::visitMethodDef($JCTree$JCMethodDecl* that) {
	if ($equals($nc(that)->sym, this->sym)) {
		$set(this, result, that);
	} else {
		$TreeScanner::visitMethodDef(that);
	}
}

void TreeInfo$DeclScanner::visitVarDef($JCTree$JCVariableDecl* that) {
	if ($equals($nc(that)->sym, this->sym)) {
		$set(this, result, that);
	} else {
		$TreeScanner::visitVarDef(that);
	}
}

void TreeInfo$DeclScanner::visitTypeParameter($JCTree$JCTypeParameter* that) {
	if ($nc(that)->type != nullptr && $equals($nc(that->type)->tsym, this->sym)) {
		$set(this, result, that);
	} else {
		$TreeScanner::visitTypeParameter(that);
	}
}

TreeInfo$DeclScanner::TreeInfo$DeclScanner() {
}

$Class* TreeInfo$DeclScanner::load$($String* name, bool initialize) {
	$loadClass(TreeInfo$DeclScanner, name, initialize, &_TreeInfo$DeclScanner_ClassInfo_, allocate$TreeInfo$DeclScanner);
	return class$;
}

$Class* TreeInfo$DeclScanner::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com