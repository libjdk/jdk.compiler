#include <com/sun/tools/javac/jvm/Gen$ClassReferenceVisitor.h>

#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/jvm/Gen.h>
#include <com/sun/tools/javac/jvm/PoolWriter.h>
#include <com/sun/tools/javac/tree/JCTree$JCBinary.h>
#include <com/sun/tools/javac/tree/JCTree$JCConditional.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCParens.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeCast.h>
#include <com/sun/tools/javac/tree/JCTree$JCUnary.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <jcpp.h>

#undef CLASS

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Gen = ::com::sun::tools::javac::jvm::Gen;
using $PoolWriter = ::com::sun::tools::javac::jvm::PoolWriter;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCBinary = ::com::sun::tools::javac::tree::JCTree$JCBinary;
using $JCTree$JCConditional = ::com::sun::tools::javac::tree::JCTree$JCConditional;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCParens = ::com::sun::tools::javac::tree::JCTree$JCParens;
using $JCTree$JCTypeCast = ::com::sun::tools::javac::tree::JCTree$JCTypeCast;
using $JCTree$JCUnary = ::com::sun::tools::javac::tree::JCTree$JCUnary;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _Gen$ClassReferenceVisitor_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/Gen;", nullptr, $FINAL | $SYNTHETIC, $field(Gen$ClassReferenceVisitor, this$0)},
	{}
};

$MethodInfo _Gen$ClassReferenceVisitor_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/Gen;)V", nullptr, 0, $method(static_cast<void(Gen$ClassReferenceVisitor::*)($Gen*)>(&Gen$ClassReferenceVisitor::init$))},
	{"visitBinary", "(Lcom/sun/tools/javac/tree/JCTree$JCBinary;)V", nullptr, $PUBLIC},
	{"visitConditional", "(Lcom/sun/tools/javac/tree/JCTree$JCConditional;)V", nullptr, $PUBLIC},
	{"visitIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCIdent;)V", nullptr, $PUBLIC},
	{"visitParens", "(Lcom/sun/tools/javac/tree/JCTree$JCParens;)V", nullptr, $PUBLIC},
	{"visitSelect", "(Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;)V", nullptr, $PUBLIC},
	{"visitTree", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC},
	{"visitTypeCast", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeCast;)V", nullptr, $PUBLIC},
	{"visitUnary", "(Lcom/sun/tools/javac/tree/JCTree$JCUnary;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Gen$ClassReferenceVisitor_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.Gen$ClassReferenceVisitor", "com.sun.tools.javac.jvm.Gen", "ClassReferenceVisitor", 0},
	{"com.sun.tools.javac.tree.JCTree$Visitor", "com.sun.tools.javac.tree.JCTree", "Visitor", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Gen$ClassReferenceVisitor_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.Gen$ClassReferenceVisitor",
	"com.sun.tools.javac.tree.JCTree$Visitor",
	nullptr,
	_Gen$ClassReferenceVisitor_FieldInfo_,
	_Gen$ClassReferenceVisitor_MethodInfo_,
	nullptr,
	nullptr,
	_Gen$ClassReferenceVisitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.Gen"
};

$Object* allocate$Gen$ClassReferenceVisitor($Class* clazz) {
	return $of($alloc(Gen$ClassReferenceVisitor));
}

void Gen$ClassReferenceVisitor::init$($Gen* this$0) {
	$set(this, this$0, this$0);
	$JCTree$Visitor::init$();
}

void Gen$ClassReferenceVisitor::visitTree($JCTree* tree) {
}

void Gen$ClassReferenceVisitor::visitBinary($JCTree$JCBinary* tree) {
	$nc($nc(tree)->lhs)->accept(this);
	$nc(tree->rhs)->accept(this);
}

void Gen$ClassReferenceVisitor::visitSelect($JCTree$JCFieldAccess* tree) {
	$init($TypeTag);
	if ($nc($nc($nc(tree)->selected)->type)->hasTag($TypeTag::CLASS)) {
		this->this$0->makeRef($($nc(tree->selected)->pos()), $nc(tree->selected)->type);
	}
}

void Gen$ClassReferenceVisitor::visitIdent($JCTree$JCIdent* tree) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Symbol$ClassSymbol, classSymbol, nullptr);
		$var($Symbol, patt32126$temp, $nc($nc(tree)->sym)->owner);
		bool var$0 = $instanceOf($Symbol$ClassSymbol, patt32126$temp);
		if (var$0) {
			$assign(classSymbol, $cast($Symbol$ClassSymbol, patt32126$temp));
			var$0 = true;
		}
		if (var$0) {
			$nc(this->this$0->poolWriter)->putClass(classSymbol);
		}
	}
}

void Gen$ClassReferenceVisitor::visitConditional($JCTree$JCConditional* tree) {
	$nc($nc(tree)->cond)->accept(this);
	$nc(tree->truepart)->accept(this);
	$nc(tree->falsepart)->accept(this);
}

void Gen$ClassReferenceVisitor::visitUnary($JCTree$JCUnary* tree) {
	$nc($nc(tree)->arg)->accept(this);
}

void Gen$ClassReferenceVisitor::visitParens($JCTree$JCParens* tree) {
	$nc($nc(tree)->expr)->accept(this);
}

void Gen$ClassReferenceVisitor::visitTypeCast($JCTree$JCTypeCast* tree) {
	$nc($nc(tree)->expr)->accept(this);
}

Gen$ClassReferenceVisitor::Gen$ClassReferenceVisitor() {
}

$Class* Gen$ClassReferenceVisitor::load$($String* name, bool initialize) {
	$loadClass(Gen$ClassReferenceVisitor, name, initialize, &_Gen$ClassReferenceVisitor_ClassInfo_, allocate$Gen$ClassReferenceVisitor);
	return class$;
}

$Class* Gen$ClassReferenceVisitor::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com