#include <com/sun/tools/javac/tree/TreeInfo$1DiagScanner.h>

#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo$DeclScanner.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeInfo$DeclScanner = ::com::sun::tools::javac::tree::TreeInfo$DeclScanner;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$MethodInfo _TreeInfo$1DiagScanner_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $method(static_cast<void(TreeInfo$1DiagScanner::*)($Symbol*)>(&TreeInfo$1DiagScanner::init$))},
	{"visitIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCIdent;)V", nullptr, $PUBLIC},
	{"visitSelect", "(Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TreeInfo$1DiagScanner_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.tree.TreeInfo",
	"diagnosticPositionFor",
	"(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/tree/JCTree;Z)Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;"
};

$InnerClassInfo _TreeInfo$1DiagScanner_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.TreeInfo$1DiagScanner", nullptr, "DiagScanner", 0},
	{"com.sun.tools.javac.tree.TreeInfo$DeclScanner", "com.sun.tools.javac.tree.TreeInfo", "DeclScanner", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.util.JCDiagnostic$DiagnosticPosition", "com.sun.tools.javac.util.JCDiagnostic", "DiagnosticPosition", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TreeInfo$1DiagScanner_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.tree.TreeInfo$1DiagScanner",
	"com.sun.tools.javac.tree.TreeInfo$DeclScanner",
	nullptr,
	nullptr,
	_TreeInfo$1DiagScanner_MethodInfo_,
	nullptr,
	&_TreeInfo$1DiagScanner_EnclosingMethodInfo_,
	_TreeInfo$1DiagScanner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.TreeInfo"
};

$Object* allocate$TreeInfo$1DiagScanner($Class* clazz) {
	return $of($alloc(TreeInfo$1DiagScanner));
}

void TreeInfo$1DiagScanner::init$($Symbol* sym) {
	$TreeInfo$DeclScanner::init$(sym);
}

void TreeInfo$1DiagScanner::visitIdent($JCTree$JCIdent* that) {
	if ($nc(that)->sym == this->sym) {
		$set(this, result, that);
	} else {
		$TreeInfo$DeclScanner::visitIdent(that);
	}
}

void TreeInfo$1DiagScanner::visitSelect($JCTree$JCFieldAccess* that) {
	if ($nc(that)->sym == this->sym) {
		$set(this, result, that);
	} else {
		$TreeInfo$DeclScanner::visitSelect(that);
	}
}

TreeInfo$1DiagScanner::TreeInfo$1DiagScanner() {
}

$Class* TreeInfo$1DiagScanner::load$($String* name, bool initialize) {
	$loadClass(TreeInfo$1DiagScanner, name, initialize, &_TreeInfo$1DiagScanner_ClassInfo_, allocate$TreeInfo$1DiagScanner);
	return class$;
}

$Class* TreeInfo$1DiagScanner::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com