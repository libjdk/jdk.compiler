#include <com/sun/tools/javac/comp/Check$1AnnotationValidator.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/tree/JCTree$JCAnnotation.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <jcpp.h>

using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Check = ::com::sun::tools::javac::comp::Check;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCAnnotation = ::com::sun::tools::javac::tree::JCTree$JCAnnotation;
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

$FieldInfo _Check$1AnnotationValidator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Check;", nullptr, $FINAL | $SYNTHETIC, $field(Check$1AnnotationValidator, this$0)},
	{}
};

$MethodInfo _Check$1AnnotationValidator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Check;)V", nullptr, 0, $method(static_cast<void(Check$1AnnotationValidator::*)($Check*)>(&Check$1AnnotationValidator::init$))},
	{"visitAnnotation", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Check$1AnnotationValidator_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Check",
	"validateAnnotationTree",
	"(Lcom/sun/tools/javac/tree/JCTree;)V"
};

$InnerClassInfo _Check$1AnnotationValidator_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Check$1AnnotationValidator", nullptr, "AnnotationValidator", 0},
	{}
};

$ClassInfo _Check$1AnnotationValidator_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Check$1AnnotationValidator",
	"com.sun.tools.javac.tree.TreeScanner",
	nullptr,
	_Check$1AnnotationValidator_FieldInfo_,
	_Check$1AnnotationValidator_MethodInfo_,
	nullptr,
	&_Check$1AnnotationValidator_EnclosingMethodInfo_,
	_Check$1AnnotationValidator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Check"
};

$Object* allocate$Check$1AnnotationValidator($Class* clazz) {
	return $of($alloc(Check$1AnnotationValidator));
}

void Check$1AnnotationValidator::init$($Check* this$0) {
	$set(this, this$0, this$0);
	$TreeScanner::init$();
}

void Check$1AnnotationValidator::visitAnnotation($JCTree$JCAnnotation* tree) {
	bool var$0 = !$nc($nc(tree)->type)->isErroneous();
	if (var$0 && $nc($nc(tree->type)->tsym)->isAnnotationType()) {
		$TreeScanner::visitAnnotation(tree);
		this->this$0->validateAnnotation(tree);
	}
}

Check$1AnnotationValidator::Check$1AnnotationValidator() {
}

$Class* Check$1AnnotationValidator::load$($String* name, bool initialize) {
	$loadClass(Check$1AnnotationValidator, name, initialize, &_Check$1AnnotationValidator_ClassInfo_, allocate$Check$1AnnotationValidator);
	return class$;
}

$Class* Check$1AnnotationValidator::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com