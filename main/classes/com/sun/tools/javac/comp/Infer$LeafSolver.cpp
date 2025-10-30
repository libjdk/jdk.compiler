#include <com/sun/tools/javac/comp/Infer$LeafSolver.h>

#include <com/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node.h>
#include <com/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph.h>
#include <com/sun/tools/javac/comp/Infer$GraphStrategy$NodeNotFoundException.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <java/util/ArrayList.h>
#include <jcpp.h>

using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$GraphSolver$InferenceGraph = ::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph;
using $Infer$GraphSolver$InferenceGraph$Node = ::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph$Node;
using $Infer$GraphStrategy = ::com::sun::tools::javac::comp::Infer$GraphStrategy;
using $Infer$GraphStrategy$NodeNotFoundException = ::com::sun::tools::javac::comp::Infer$GraphStrategy$NodeNotFoundException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Infer$LeafSolver_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Infer;", nullptr, $FINAL | $SYNTHETIC, $field(Infer$LeafSolver, this$0)},
	{}
};

$MethodInfo _Infer$LeafSolver_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Infer;)V", nullptr, 0, $method(static_cast<void(Infer$LeafSolver::*)($Infer*)>(&Infer$LeafSolver::init$))},
	{"pickNode", "(Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph;)Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Infer$LeafSolver_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Infer$LeafSolver", "com.sun.tools.javac.comp.Infer", "LeafSolver", $ABSTRACT},
	{"com.sun.tools.javac.comp.Infer$GraphStrategy", "com.sun.tools.javac.comp.Infer", "GraphStrategy", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Infer$LeafSolver_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.comp.Infer$LeafSolver",
	"java.lang.Object",
	"com.sun.tools.javac.comp.Infer$GraphStrategy",
	_Infer$LeafSolver_FieldInfo_,
	_Infer$LeafSolver_MethodInfo_,
	nullptr,
	nullptr,
	_Infer$LeafSolver_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Infer"
};

$Object* allocate$Infer$LeafSolver($Class* clazz) {
	return $of($alloc(Infer$LeafSolver));
}

void Infer$LeafSolver::init$($Infer* this$0) {
	$set(this, this$0, this$0);
}

$Infer$GraphSolver$InferenceGraph$Node* Infer$LeafSolver::pickNode($Infer$GraphSolver$InferenceGraph* g) {
	if ($nc($nc(g)->nodes)->isEmpty()) {
		$throwNew($Infer$GraphStrategy$NodeNotFoundException, g);
	}
	return $cast($Infer$GraphSolver$InferenceGraph$Node, $nc($nc(g)->nodes)->get(0));
}

Infer$LeafSolver::Infer$LeafSolver() {
}

$Class* Infer$LeafSolver::load$($String* name, bool initialize) {
	$loadClass(Infer$LeafSolver, name, initialize, &_Infer$LeafSolver_ClassInfo_, allocate$Infer$LeafSolver);
	return class$;
}

$Class* Infer$LeafSolver::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com