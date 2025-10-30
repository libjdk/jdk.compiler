#include <com/sun/tools/javac/comp/InferenceContext$2.h>

#include <com/sun/tools/javac/comp/Infer$BestLeafSolver.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$BestLeafSolver = ::com::sun::tools::javac::comp::Infer$BestLeafSolver;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
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
				namespace comp {

$FieldInfo _InferenceContext$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/InferenceContext;", nullptr, $FINAL | $SYNTHETIC, $field(InferenceContext$2, this$0)},
	{"val$vars", "Lcom/sun/tools/javac/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(InferenceContext$2, val$vars)},
	{}
};

$MethodInfo _InferenceContext$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/InferenceContext;Lcom/sun/tools/javac/comp/Infer;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)V", nullptr, 0, $method(static_cast<void(InferenceContext$2::*)($InferenceContext*,$Infer*,$List*,$List*)>(&InferenceContext$2::init$))},
	{"done", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _InferenceContext$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.InferenceContext",
	"solve",
	"(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/Warner;)V"
};

$InnerClassInfo _InferenceContext$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.InferenceContext$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Infer$BestLeafSolver", "com.sun.tools.javac.comp.Infer", "BestLeafSolver", $ABSTRACT},
	{}
};

$ClassInfo _InferenceContext$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.InferenceContext$2",
	"com.sun.tools.javac.comp.Infer$BestLeafSolver",
	nullptr,
	_InferenceContext$2_FieldInfo_,
	_InferenceContext$2_MethodInfo_,
	nullptr,
	&_InferenceContext$2_EnclosingMethodInfo_,
	_InferenceContext$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.InferenceContext"
};

$Object* allocate$InferenceContext$2($Class* clazz) {
	return $of($alloc(InferenceContext$2));
}

void InferenceContext$2::init$($InferenceContext* this$0, $Infer* x0, $List* varsToSolve, $List* val$vars) {
	$set(this, this$0, this$0);
	$set(this, val$vars, val$vars);
	$Infer$BestLeafSolver::init$(static_cast<$Infer*>($nc(x0)), varsToSolve);
}

bool InferenceContext$2::done() {
	return !this->this$0->free($(this->this$0->asInstTypes(this->val$vars)));
}

InferenceContext$2::InferenceContext$2() {
}

$Class* InferenceContext$2::load$($String* name, bool initialize) {
	$loadClass(InferenceContext$2, name, initialize, &_InferenceContext$2_ClassInfo_, allocate$InferenceContext$2);
	return class$;
}

$Class* InferenceContext$2::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com