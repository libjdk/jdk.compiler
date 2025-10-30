#include <com/sun/tools/javac/comp/Annotate$TypeAnnotate.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/Annotate.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/tree/JCTree$JCAnnotatedType.h>
#include <com/sun/tools/javac/tree/JCTree$JCBindingPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewArray.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeParameter.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef VAR

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Annotate = ::com::sun::tools::javac::comp::Annotate;
using $Env = ::com::sun::tools::javac::comp::Env;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCAnnotatedType = ::com::sun::tools::javac::tree::JCTree$JCAnnotatedType;
using $JCTree$JCBindingPattern = ::com::sun::tools::javac::tree::JCTree$JCBindingPattern;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCNewArray = ::com::sun::tools::javac::tree::JCTree$JCNewArray;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$JCTypeParameter = ::com::sun::tools::javac::tree::JCTree$JCTypeParameter;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $List = ::com::sun::tools::javac::util::List;
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

$FieldInfo _Annotate$TypeAnnotate_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Annotate;", nullptr, $FINAL | $SYNTHETIC, $field(Annotate$TypeAnnotate, this$0)},
	{"env", "Lcom/sun/tools/javac/comp/Env;", "Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PRIVATE | $FINAL, $field(Annotate$TypeAnnotate, env)},
	{"sym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PRIVATE | $FINAL, $field(Annotate$TypeAnnotate, sym)},
	{"deferPos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PRIVATE, $field(Annotate$TypeAnnotate, deferPos)},
	{}
};

$MethodInfo _Annotate$TypeAnnotate_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Annotate;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", $PUBLIC, $method(static_cast<void(Annotate$TypeAnnotate::*)($Annotate*,$Env*,$Symbol*,$JCDiagnostic$DiagnosticPosition*)>(&Annotate$TypeAnnotate::init$))},
	{"visitAnnotatedType", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotatedType;)V", nullptr, $PUBLIC},
	{"visitBindingPattern", "(Lcom/sun/tools/javac/tree/JCTree$JCBindingPattern;)V", nullptr, $PUBLIC},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"visitMethodDef", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", nullptr, $PUBLIC},
	{"visitNewArray", "(Lcom/sun/tools/javac/tree/JCTree$JCNewArray;)V", nullptr, $PUBLIC},
	{"visitNewClass", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)V", nullptr, $PUBLIC},
	{"visitTypeParameter", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;)V", nullptr, $PUBLIC},
	{"visitVarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Annotate$TypeAnnotate_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Annotate$TypeAnnotate", "com.sun.tools.javac.comp.Annotate", "TypeAnnotate", $PRIVATE},
	{}
};

$ClassInfo _Annotate$TypeAnnotate_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Annotate$TypeAnnotate",
	"com.sun.tools.javac.tree.TreeScanner",
	nullptr,
	_Annotate$TypeAnnotate_FieldInfo_,
	_Annotate$TypeAnnotate_MethodInfo_,
	nullptr,
	nullptr,
	_Annotate$TypeAnnotate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Annotate"
};

$Object* allocate$Annotate$TypeAnnotate($Class* clazz) {
	return $of($alloc(Annotate$TypeAnnotate));
}

void Annotate$TypeAnnotate::init$($Annotate* this$0, $Env* env, $Symbol* sym, $JCDiagnostic$DiagnosticPosition* deferPos) {
	$set(this, this$0, this$0);
	$TreeScanner::init$();
	$set(this, env, env);
	$set(this, sym, sym);
	$set(this, deferPos, deferPos);
}

void Annotate$TypeAnnotate::visitAnnotatedType($JCTree$JCAnnotatedType* tree) {
	this->this$0->enterTypeAnnotations($nc(tree)->annotations, this->env, this->sym, this->deferPos, false);
	scan(static_cast<$JCTree*>($nc(tree)->underlyingType));
}

void Annotate$TypeAnnotate::visitTypeParameter($JCTree$JCTypeParameter* tree) {
	this->this$0->enterTypeAnnotations($nc(tree)->annotations, this->env, this->sym, this->deferPos, true);
	scan($nc(tree)->bounds);
}

void Annotate$TypeAnnotate::visitNewArray($JCTree$JCNewArray* tree) {
	$useLocalCurrentObjectStackCache();
	this->this$0->enterTypeAnnotations($nc(tree)->annotations, this->env, this->sym, this->deferPos, false);
	{
		$var($Iterator, i$, $nc($nc(tree)->dimAnnotations)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($List, dimAnnos, $cast($List, i$->next()));
			this->this$0->enterTypeAnnotations(dimAnnos, this->env, this->sym, this->deferPos, false);
		}
	}
	scan(static_cast<$JCTree*>(tree->elemtype));
	scan(tree->elems);
}

void Annotate$TypeAnnotate::visitMethodDef($JCTree$JCMethodDecl* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->mods));
	scan(static_cast<$JCTree*>($nc(tree)->restype));
	scan($nc(tree)->typarams);
	scan(static_cast<$JCTree*>($nc(tree)->recvparam));
	scan($nc(tree)->params);
	scan($nc(tree)->thrown);
	scan(static_cast<$JCTree*>($nc(tree)->defaultValue));
}

void Annotate$TypeAnnotate::visitVarDef($JCTree$JCVariableDecl* tree) {
	$useLocalCurrentObjectStackCache();
	$var($JCDiagnostic$DiagnosticPosition, prevPos, this->deferPos);
	$set(this, deferPos, $nc(tree)->pos());
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($Kinds$Kind);
			if (this->sym != nullptr && $nc(this->sym)->kind == $Kinds$Kind::VAR) {
				scan(static_cast<$JCTree*>(tree->mods));
				scan(static_cast<$JCTree*>(tree->vartype));
			}
			scan(static_cast<$JCTree*>(tree->init));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, deferPos, prevPos);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Annotate$TypeAnnotate::visitBindingPattern($JCTree$JCBindingPattern* tree) {
}

void Annotate$TypeAnnotate::visitClassDef($JCTree$JCClassDecl* tree) {
}

void Annotate$TypeAnnotate::visitNewClass($JCTree$JCNewClass* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->encl));
	scan($nc(tree)->typeargs);
	if ($nc(tree)->def == nullptr) {
		scan(static_cast<$JCTree*>(tree->clazz));
	}
	scan($nc(tree)->args);
}

Annotate$TypeAnnotate::Annotate$TypeAnnotate() {
}

$Class* Annotate$TypeAnnotate::load$($String* name, bool initialize) {
	$loadClass(Annotate$TypeAnnotate, name, initialize, &_Annotate$TypeAnnotate_ClassInfo_, allocate$Annotate$TypeAnnotate);
	return class$;
}

$Class* Annotate$TypeAnnotate::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com