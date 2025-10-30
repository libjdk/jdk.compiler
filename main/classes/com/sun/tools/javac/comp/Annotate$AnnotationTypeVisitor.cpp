#include <com/sun/tools/javac/comp/Annotate$AnnotationTypeVisitor.h>

#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Annotate.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/TypeEnvs.h>
#include <com/sun/tools/javac/tree/JCTree$JCAnnotation.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <jcpp.h>

using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Annotate = ::com::sun::tools::javac::comp::Annotate;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Check = ::com::sun::tools::javac::comp::Check;
using $Env = ::com::sun::tools::javac::comp::Env;
using $TypeEnvs = ::com::sun::tools::javac::comp::TypeEnvs;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCAnnotation = ::com::sun::tools::javac::tree::JCTree$JCAnnotation;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Annotate$AnnotationTypeVisitor_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Annotate;", nullptr, $FINAL | $SYNTHETIC, $field(Annotate$AnnotationTypeVisitor, this$0)},
	{"env", "Lcom/sun/tools/javac/comp/Env;", "Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PRIVATE, $field(Annotate$AnnotationTypeVisitor, env)},
	{"attr", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $PRIVATE | $FINAL, $field(Annotate$AnnotationTypeVisitor, attr)},
	{"check", "Lcom/sun/tools/javac/comp/Check;", nullptr, $PRIVATE | $FINAL, $field(Annotate$AnnotationTypeVisitor, check)},
	{"tab", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $PRIVATE | $FINAL, $field(Annotate$AnnotationTypeVisitor, tab)},
	{"typeEnvs", "Lcom/sun/tools/javac/comp/TypeEnvs;", nullptr, $PRIVATE | $FINAL, $field(Annotate$AnnotationTypeVisitor, typeEnvs)},
	{"target", "Lcom/sun/tools/javac/code/Attribute$Compound;", nullptr, $PRIVATE, $field(Annotate$AnnotationTypeVisitor, target)},
	{"repeatable", "Lcom/sun/tools/javac/code/Attribute$Compound;", nullptr, $PRIVATE, $field(Annotate$AnnotationTypeVisitor, repeatable)},
	{}
};

$MethodInfo _Annotate$AnnotationTypeVisitor_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Annotate;Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/comp/Check;Lcom/sun/tools/javac/code/Symtab;Lcom/sun/tools/javac/comp/TypeEnvs;)V", nullptr, $PUBLIC, $method(static_cast<void(Annotate$AnnotationTypeVisitor::*)($Annotate*,$Attr*,$Check*,$Symtab*,$TypeEnvs*)>(&Annotate$AnnotationTypeVisitor::init$))},
	{"getRepeatable", "()Lcom/sun/tools/javac/code/Attribute$Compound;", nullptr, $PUBLIC},
	{"getTarget", "()Lcom/sun/tools/javac/code/Attribute$Compound;", nullptr, $PUBLIC},
	{"scanAnnotationType", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"visitAnnotation", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;)V", nullptr, $PUBLIC},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Annotate$AnnotationTypeVisitor_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Annotate$AnnotationTypeVisitor", "com.sun.tools.javac.comp.Annotate", "AnnotationTypeVisitor", $PUBLIC},
	{}
};

$ClassInfo _Annotate$AnnotationTypeVisitor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.Annotate$AnnotationTypeVisitor",
	"com.sun.tools.javac.tree.TreeScanner",
	nullptr,
	_Annotate$AnnotationTypeVisitor_FieldInfo_,
	_Annotate$AnnotationTypeVisitor_MethodInfo_,
	nullptr,
	nullptr,
	_Annotate$AnnotationTypeVisitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Annotate"
};

$Object* allocate$Annotate$AnnotationTypeVisitor($Class* clazz) {
	return $of($alloc(Annotate$AnnotationTypeVisitor));
}

void Annotate$AnnotationTypeVisitor::init$($Annotate* this$0, $Attr* attr, $Check* check, $Symtab* tab, $TypeEnvs* typeEnvs) {
	$set(this, this$0, this$0);
	$TreeScanner::init$();
	$set(this, attr, attr);
	$set(this, check, check);
	$set(this, tab, tab);
	$set(this, typeEnvs, typeEnvs);
}

$Attribute$Compound* Annotate$AnnotationTypeVisitor::getRepeatable() {
	return this->repeatable;
}

$Attribute$Compound* Annotate$AnnotationTypeVisitor::getTarget() {
	return this->target;
}

void Annotate$AnnotationTypeVisitor::scanAnnotationType($JCTree$JCClassDecl* decl) {
	visitClassDef(decl);
}

void Annotate$AnnotationTypeVisitor::visitClassDef($JCTree$JCClassDecl* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Env, prevEnv, this->env);
	$set(this, env, $nc(this->typeEnvs)->get($nc(tree)->sym));
	{
		$var($Throwable, var$0, nullptr);
		try {
			scan(static_cast<$JCTree*>($nc(tree)->mods));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, env, prevEnv);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Annotate$AnnotationTypeVisitor::visitAnnotation($JCTree$JCAnnotation* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Type, t, $nc($nc(tree)->annotationType)->type);
	if (t == nullptr) {
		$assign(t, $nc(this->attr)->attribType(tree->annotationType, this->env));
		$set($nc(tree->annotationType), type, ($assign(t, $nc(this->check)->checkType($($nc(tree->annotationType)->pos()), t, $nc(this->tab)->annotationType))));
	}
	if (t == $nc(this->tab)->annotationTargetType) {
		$set(this, target, this->this$0->attributeAnnotation(tree, $nc(this->tab)->annotationTargetType, this->env));
	} else if (t == $nc(this->tab)->repeatableType) {
		$set(this, repeatable, this->this$0->attributeAnnotation(tree, $nc(this->tab)->repeatableType, this->env));
	}
}

Annotate$AnnotationTypeVisitor::Annotate$AnnotationTypeVisitor() {
}

$Class* Annotate$AnnotationTypeVisitor::load$($String* name, bool initialize) {
	$loadClass(Annotate$AnnotationTypeVisitor, name, initialize, &_Annotate$AnnotationTypeVisitor_ClassInfo_, allocate$Annotate$AnnotationTypeVisitor);
	return class$;
}

$Class* Annotate$AnnotationTypeVisitor::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com