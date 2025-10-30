#include <com/sun/tools/javac/model/JavacElements$1Vis.h>

#include <com/sun/tools/javac/model/JavacElements.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCModuleDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCPackageDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeParameter.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $JavacElements = ::com::sun::tools::javac::model::JavacElements;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCModuleDecl = ::com::sun::tools::javac::tree::JCTree$JCModuleDecl;
using $JCTree$JCPackageDecl = ::com::sun::tools::javac::tree::JCTree$JCPackageDecl;
using $JCTree$JCTypeParameter = ::com::sun::tools::javac::tree::JCTree$JCTypeParameter;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace model {

$FieldInfo _JavacElements$1Vis_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/model/JavacElements;", nullptr, $FINAL | $SYNTHETIC, $field(JavacElements$1Vis, this$0)},
	{"result", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;", 0, $field(JavacElements$1Vis, result)},
	{}
};

$MethodInfo _JavacElements$1Vis_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/model/JavacElements;)V", nullptr, 0, $method(static_cast<void(JavacElements$1Vis::*)($JavacElements*)>(&JavacElements$1Vis::init$))},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"visitMethodDef", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", nullptr, $PUBLIC},
	{"visitModuleDef", "(Lcom/sun/tools/javac/tree/JCTree$JCModuleDecl;)V", nullptr, $PUBLIC},
	{"visitPackageDef", "(Lcom/sun/tools/javac/tree/JCTree$JCPackageDecl;)V", nullptr, $PUBLIC},
	{"visitTypeParameter", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;)V", nullptr, $PUBLIC},
	{"visitVarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JavacElements$1Vis_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.model.JavacElements",
	"matchAnnoToTree",
	"(Ljavax/lang/model/element/AnnotationMirror;Ljavax/lang/model/element/Element;Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree;"
};

$InnerClassInfo _JavacElements$1Vis_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.model.JavacElements$1Vis", nullptr, "Vis", 0},
	{"com.sun.tools.javac.tree.JCTree$Visitor", "com.sun.tools.javac.tree.JCTree", "Visitor", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JavacElements$1Vis_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.model.JavacElements$1Vis",
	"com.sun.tools.javac.tree.JCTree$Visitor",
	nullptr,
	_JavacElements$1Vis_FieldInfo_,
	_JavacElements$1Vis_MethodInfo_,
	nullptr,
	&_JavacElements$1Vis_EnclosingMethodInfo_,
	_JavacElements$1Vis_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.model.JavacElements"
};

$Object* allocate$JavacElements$1Vis($Class* clazz) {
	return $of($alloc(JavacElements$1Vis));
}

void JavacElements$1Vis::init$($JavacElements* this$0) {
	$set(this, this$0, this$0);
	$JCTree$Visitor::init$();
	$set(this, result, nullptr);
}

void JavacElements$1Vis::visitModuleDef($JCTree$JCModuleDecl* tree) {
	$set(this, result, $nc($nc(tree)->mods)->annotations);
}

void JavacElements$1Vis::visitPackageDef($JCTree$JCPackageDecl* tree) {
	$set(this, result, $nc(tree)->annotations);
}

void JavacElements$1Vis::visitClassDef($JCTree$JCClassDecl* tree) {
	$set(this, result, $nc($nc(tree)->mods)->annotations);
}

void JavacElements$1Vis::visitMethodDef($JCTree$JCMethodDecl* tree) {
	$set(this, result, $nc($nc(tree)->mods)->annotations);
}

void JavacElements$1Vis::visitVarDef($JCTree$JCVariableDecl* tree) {
	$set(this, result, $nc($nc(tree)->mods)->annotations);
}

void JavacElements$1Vis::visitTypeParameter($JCTree$JCTypeParameter* tree) {
	$set(this, result, $nc(tree)->annotations);
}

JavacElements$1Vis::JavacElements$1Vis() {
}

$Class* JavacElements$1Vis::load$($String* name, bool initialize) {
	$loadClass(JavacElements$1Vis, name, initialize, &_JavacElements$1Vis_ClassInfo_, allocate$JavacElements$1Vis);
	return class$;
}

$Class* JavacElements$1Vis::class$ = nullptr;

				} // model
			} // javac
		} // tools
	} // sun
} // com