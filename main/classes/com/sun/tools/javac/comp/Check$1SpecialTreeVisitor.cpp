#include <com/sun/tools/javac/comp/Check$1SpecialTreeVisitor.h>

#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

using $Check = ::com::sun::tools::javac::comp::Check;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
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

$FieldInfo _Check$1SpecialTreeVisitor_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Check;", nullptr, $FINAL | $SYNTHETIC, $field(Check$1SpecialTreeVisitor, this$0)},
	{"specialized", "Z", nullptr, 0, $field(Check$1SpecialTreeVisitor, specialized)},
	{}
};

$MethodInfo _Check$1SpecialTreeVisitor_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Check;)V", nullptr, 0, $method(static_cast<void(Check$1SpecialTreeVisitor::*)($Check*)>(&Check$1SpecialTreeVisitor::init$))},
	{"visitTree", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC},
	{"visitVarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Check$1SpecialTreeVisitor_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Check",
	"implicitEnumFinalFlag",
	"(Lcom/sun/tools/javac/tree/JCTree;)J"
};

$InnerClassInfo _Check$1SpecialTreeVisitor_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Check$1SpecialTreeVisitor", nullptr, "SpecialTreeVisitor", 0},
	{"com.sun.tools.javac.tree.JCTree$Visitor", "com.sun.tools.javac.tree.JCTree", "Visitor", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Check$1SpecialTreeVisitor_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Check$1SpecialTreeVisitor",
	"com.sun.tools.javac.tree.JCTree$Visitor",
	nullptr,
	_Check$1SpecialTreeVisitor_FieldInfo_,
	_Check$1SpecialTreeVisitor_MethodInfo_,
	nullptr,
	&_Check$1SpecialTreeVisitor_EnclosingMethodInfo_,
	_Check$1SpecialTreeVisitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Check"
};

$Object* allocate$Check$1SpecialTreeVisitor($Class* clazz) {
	return $of($alloc(Check$1SpecialTreeVisitor));
}

void Check$1SpecialTreeVisitor::init$($Check* this$0) {
	$set(this, this$0, this$0);
	$JCTree$Visitor::init$();
	this->specialized = false;
}

void Check$1SpecialTreeVisitor::visitTree($JCTree* tree) {
}

void Check$1SpecialTreeVisitor::visitVarDef($JCTree$JCVariableDecl* tree) {
	$useLocalCurrentObjectStackCache();
	if (((int64_t)($nc($nc(tree)->mods)->flags & (uint64_t)(int64_t)16384)) != 0) {
		{
			$var($JCTree$JCNewClass, newClass, nullptr);
			$var($JCTree$JCExpression, patt56050$temp, tree->init);
			bool var$1 = $instanceOf($JCTree$JCNewClass, patt56050$temp);
			if (var$1) {
				$assign(newClass, $cast($JCTree$JCNewClass, patt56050$temp));
				var$1 = true;
			}
			bool var$0 = var$1;
			if (var$0 && $nc(newClass)->def != nullptr) {
				this->specialized = true;
			}
		}
	}
}

Check$1SpecialTreeVisitor::Check$1SpecialTreeVisitor() {
}

$Class* Check$1SpecialTreeVisitor::load$($String* name, bool initialize) {
	$loadClass(Check$1SpecialTreeVisitor, name, initialize, &_Check$1SpecialTreeVisitor_ClassInfo_, allocate$Check$1SpecialTreeVisitor);
	return class$;
}

$Class* Check$1SpecialTreeVisitor::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com