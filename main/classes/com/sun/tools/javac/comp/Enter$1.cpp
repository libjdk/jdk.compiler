#include <com/sun/tools/javac/comp/Enter$1.h>

#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Enter.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCPackageDecl.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Enter = ::com::sun::tools::javac::comp::Enter;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCPackageDecl = ::com::sun::tools::javac::tree::JCTree$JCPackageDecl;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Enter$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Enter;", nullptr, $FINAL | $SYNTHETIC, $field(Enter$1, this$0)},
	{"currentPackage", "Lcom/sun/tools/javac/code/Symbol;", nullptr, 0, $field(Enter$1, currentPackage)},
	{}
};

$MethodInfo _Enter$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Enter;)V", nullptr, 0, $method(static_cast<void(Enter$1::*)($Enter*)>(&Enter$1::init$))},
	{"visitIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCIdent;)V", nullptr, $PUBLIC},
	{"visitPackageDef", "(Lcom/sun/tools/javac/tree/JCTree$JCPackageDecl;)V", nullptr, $PUBLIC},
	{"visitSelect", "(Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Enter$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Enter",
	nullptr,
	nullptr
};

$InnerClassInfo _Enter$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Enter$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Enter$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Enter$1",
	"com.sun.tools.javac.tree.TreeScanner",
	nullptr,
	_Enter$1_FieldInfo_,
	_Enter$1_MethodInfo_,
	nullptr,
	&_Enter$1_EnclosingMethodInfo_,
	_Enter$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Enter"
};

$Object* allocate$Enter$1($Class* clazz) {
	return $of($alloc(Enter$1));
}

void Enter$1::init$($Enter* this$0) {
	$set(this, this$0, this$0);
	$TreeScanner::init$();
}

void Enter$1::visitIdent($JCTree$JCIdent* tree) {
	$set($nc(tree), sym, this->currentPackage);
	$set(tree, type, $nc(this->currentPackage)->type);
}

void Enter$1::visitSelect($JCTree$JCFieldAccess* tree) {
	$set($nc(tree), sym, this->currentPackage);
	$set(tree, type, $nc(this->currentPackage)->type);
	$set(this, currentPackage, $nc(this->currentPackage)->owner);
	$TreeScanner::visitSelect(tree);
}

void Enter$1::visitPackageDef($JCTree$JCPackageDecl* tree) {
	$set(this, currentPackage, $nc(tree)->packge);
	scan(static_cast<$JCTree*>(tree->pid));
}

Enter$1::Enter$1() {
}

$Class* Enter$1::load$($String* name, bool initialize) {
	$loadClass(Enter$1, name, initialize, &_Enter$1_ClassInfo_, allocate$Enter$1);
	return class$;
}

$Class* Enter$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com