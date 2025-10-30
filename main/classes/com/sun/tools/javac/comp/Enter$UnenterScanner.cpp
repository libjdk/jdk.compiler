#include <com/sun/tools/javac/comp/Enter$UnenterScanner.h>

#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/Enter.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/TypeEnvs.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Check = ::com::sun::tools::javac::comp::Check;
using $Enter = ::com::sun::tools::javac::comp::Enter;
using $Env = ::com::sun::tools::javac::comp::Env;
using $TypeEnvs = ::com::sun::tools::javac::comp::TypeEnvs;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Enter$UnenterScanner_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Enter;", nullptr, $FINAL | $SYNTHETIC, $field(Enter$UnenterScanner, this$0)},
	{"msym", "Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PRIVATE | $FINAL, $field(Enter$UnenterScanner, msym)},
	{}
};

$MethodInfo _Enter$UnenterScanner_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Enter;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Enter$UnenterScanner::*)($Enter*,$Symbol$ModuleSymbol*)>(&Enter$UnenterScanner::init$))},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Enter$UnenterScanner_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Enter$UnenterScanner", "com.sun.tools.javac.comp.Enter", "UnenterScanner", 0},
	{}
};

$ClassInfo _Enter$UnenterScanner_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Enter$UnenterScanner",
	"com.sun.tools.javac.tree.TreeScanner",
	nullptr,
	_Enter$UnenterScanner_FieldInfo_,
	_Enter$UnenterScanner_MethodInfo_,
	nullptr,
	nullptr,
	_Enter$UnenterScanner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Enter"
};

$Object* allocate$Enter$UnenterScanner($Class* clazz) {
	return $of($alloc(Enter$UnenterScanner));
}

void Enter$UnenterScanner::init$($Enter* this$0, $Symbol$ModuleSymbol* msym) {
	$set(this, this$0, this$0);
	$TreeScanner::init$();
	$set(this, msym, msym);
}

void Enter$UnenterScanner::visitClassDef($JCTree$JCClassDecl* tree) {
	$var($Symbol$ClassSymbol, csym, $nc(tree)->sym);
	if (csym == nullptr) {
		return;
	}
	$nc(this->this$0->typeEnvs)->remove(csym);
	$nc(this->this$0->chk)->removeCompiled(csym);
	$nc(this->this$0->chk)->clearLocalClassNameIndexes(csym);
	$nc(this->this$0->syms)->removeClass(this->msym, $nc(csym)->flatname);
	$TreeScanner::visitClassDef(tree);
}

Enter$UnenterScanner::Enter$UnenterScanner() {
}

$Class* Enter$UnenterScanner::load$($String* name, bool initialize) {
	$loadClass(Enter$UnenterScanner, name, initialize, &_Enter$UnenterScanner_ClassInfo_, allocate$Enter$UnenterScanner);
	return class$;
}

$Class* Enter$UnenterScanner::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com