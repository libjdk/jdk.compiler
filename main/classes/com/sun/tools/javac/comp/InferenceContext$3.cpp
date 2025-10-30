#include <com/sun/tools/javac/comp/InferenceContext$3.h>

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

$FieldInfo _InferenceContext$3_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/InferenceContext;", nullptr, $FINAL | $SYNTHETIC, $field(InferenceContext$3, this$0)},
	{}
};

$MethodInfo _InferenceContext$3_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/InferenceContext;Lcom/sun/tools/javac/comp/Infer;Lcom/sun/tools/javac/util/List;)V", nullptr, 0, $method(static_cast<void(InferenceContext$3::*)($InferenceContext*,$Infer*,$List*)>(&InferenceContext$3::init$))},
	{"done", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _InferenceContext$3_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.InferenceContext",
	"solveAny",
	"(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/Warner;)V"
};

$InnerClassInfo _InferenceContext$3_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.InferenceContext$3", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Infer$BestLeafSolver", "com.sun.tools.javac.comp.Infer", "BestLeafSolver", $ABSTRACT},
	{}
};

$ClassInfo _InferenceContext$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.InferenceContext$3",
	"com.sun.tools.javac.comp.Infer$BestLeafSolver",
	nullptr,
	_InferenceContext$3_FieldInfo_,
	_InferenceContext$3_MethodInfo_,
	nullptr,
	&_InferenceContext$3_EnclosingMethodInfo_,
	_InferenceContext$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.InferenceContext"
};

$Object* allocate$InferenceContext$3($Class* clazz) {
	return $of($alloc(InferenceContext$3));
}

void InferenceContext$3::init$($InferenceContext* this$0, $Infer* x0, $List* varsToSolve) {
	$set(this, this$0, this$0);
	$Infer$BestLeafSolver::init$(static_cast<$Infer*>($nc(x0)), varsToSolve);
}

bool InferenceContext$3::done() {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($(this->this$0->instvars()))->intersect(this->varsToSolve)))->nonEmpty();
}

InferenceContext$3::InferenceContext$3() {
}

$Class* InferenceContext$3::load$($String* name, bool initialize) {
	$loadClass(InferenceContext$3, name, initialize, &_InferenceContext$3_ClassInfo_, allocate$InferenceContext$3);
	return class$;
}

$Class* InferenceContext$3::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com