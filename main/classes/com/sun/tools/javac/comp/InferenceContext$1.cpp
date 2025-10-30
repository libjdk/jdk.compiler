#include <com/sun/tools/javac/comp/InferenceContext$1.h>

#include <com/sun/tools/javac/comp/Infer$LeafSolver.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$LeafSolver = ::com::sun::tools::javac::comp::Infer$LeafSolver;
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

$FieldInfo _InferenceContext$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/InferenceContext;", nullptr, $FINAL | $SYNTHETIC, $field(InferenceContext$1, this$0)},
	{}
};

$MethodInfo _InferenceContext$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/InferenceContext;Lcom/sun/tools/javac/comp/Infer;)V", nullptr, 0, $method(static_cast<void(InferenceContext$1::*)($InferenceContext*,$Infer*)>(&InferenceContext$1::init$))},
	{"done", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _InferenceContext$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.InferenceContext",
	"solve",
	"(Lcom/sun/tools/javac/util/Warner;)V"
};

$InnerClassInfo _InferenceContext$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.InferenceContext$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Infer$LeafSolver", "com.sun.tools.javac.comp.Infer", "LeafSolver", $ABSTRACT},
	{}
};

$ClassInfo _InferenceContext$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.InferenceContext$1",
	"com.sun.tools.javac.comp.Infer$LeafSolver",
	nullptr,
	_InferenceContext$1_FieldInfo_,
	_InferenceContext$1_MethodInfo_,
	nullptr,
	&_InferenceContext$1_EnclosingMethodInfo_,
	_InferenceContext$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.InferenceContext"
};

$Object* allocate$InferenceContext$1($Class* clazz) {
	return $of($alloc(InferenceContext$1));
}

void InferenceContext$1::init$($InferenceContext* this$0, $Infer* x0) {
	$set(this, this$0, this$0);
	$Infer$LeafSolver::init$(static_cast<$Infer*>($nc(x0)));
}

bool InferenceContext$1::done() {
	return $nc($(this->this$0->restvars()))->isEmpty();
}

InferenceContext$1::InferenceContext$1() {
}

$Class* InferenceContext$1::load$($String* name, bool initialize) {
	$loadClass(InferenceContext$1, name, initialize, &_InferenceContext$1_ClassInfo_, allocate$InferenceContext$1);
	return class$;
}

$Class* InferenceContext$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com