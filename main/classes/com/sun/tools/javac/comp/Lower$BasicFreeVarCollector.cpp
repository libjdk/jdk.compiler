#include <com/sun/tools/javac/comp/Lower$BasicFreeVarCollector.h>

#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/Lower.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodInvocation.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCYield.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Lower = ::com::sun::tools::javac::comp::Lower;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCMethodInvocation = ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCYield = ::com::sun::tools::javac::tree::JCTree$JCYield;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Lower$BasicFreeVarCollector_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Lower;", nullptr, $FINAL | $SYNTHETIC, $field(Lower$BasicFreeVarCollector, this$0)},
	{}
};

$MethodInfo _Lower$BasicFreeVarCollector_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Lower;)V", nullptr, 0, $method(static_cast<void(Lower$BasicFreeVarCollector::*)($Lower*)>(&Lower$BasicFreeVarCollector::init$))},
	{"addFreeVars", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $ABSTRACT},
	{"visitApply", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;)V", nullptr, $PUBLIC},
	{"visitIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCIdent;)V", nullptr, $PUBLIC},
	{"visitNewClass", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)V", nullptr, $PUBLIC},
	{"visitSymbol", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $ABSTRACT},
	{"visitYield", "(Lcom/sun/tools/javac/tree/JCTree$JCYield;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Lower$BasicFreeVarCollector_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Lower$BasicFreeVarCollector", "com.sun.tools.javac.comp.Lower", "BasicFreeVarCollector", $ABSTRACT},
	{}
};

$ClassInfo _Lower$BasicFreeVarCollector_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.comp.Lower$BasicFreeVarCollector",
	"com.sun.tools.javac.tree.TreeScanner",
	nullptr,
	_Lower$BasicFreeVarCollector_FieldInfo_,
	_Lower$BasicFreeVarCollector_MethodInfo_,
	nullptr,
	nullptr,
	_Lower$BasicFreeVarCollector_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Lower"
};

$Object* allocate$Lower$BasicFreeVarCollector($Class* clazz) {
	return $of($alloc(Lower$BasicFreeVarCollector));
}

void Lower$BasicFreeVarCollector::init$($Lower* this$0) {
	$set(this, this$0, this$0);
	$TreeScanner::init$();
}

void Lower$BasicFreeVarCollector::visitIdent($JCTree$JCIdent* tree) {
	visitSymbol($nc(tree)->sym);
}

void Lower$BasicFreeVarCollector::visitNewClass($JCTree$JCNewClass* tree) {
	$var($Symbol$ClassSymbol, c, $cast($Symbol$ClassSymbol, $nc($nc(tree)->constructor)->owner));
	addFreeVars(c);
	$TreeScanner::visitNewClass(tree);
}

void Lower$BasicFreeVarCollector::visitApply($JCTree$JCMethodInvocation* tree) {
	if ($TreeInfo::name($nc(tree)->meth) == $nc(this->this$0->names)->_super) {
		addFreeVars($cast($Symbol$ClassSymbol, $nc($($TreeInfo::symbol($nc(tree)->meth)))->owner));
	}
	$TreeScanner::visitApply(tree);
}

void Lower$BasicFreeVarCollector::visitYield($JCTree$JCYield* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->value));
}

Lower$BasicFreeVarCollector::Lower$BasicFreeVarCollector() {
}

$Class* Lower$BasicFreeVarCollector::load$($String* name, bool initialize) {
	$loadClass(Lower$BasicFreeVarCollector, name, initialize, &_Lower$BasicFreeVarCollector_ClassInfo_, allocate$Lower$BasicFreeVarCollector);
	return class$;
}

$Class* Lower$BasicFreeVarCollector::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com