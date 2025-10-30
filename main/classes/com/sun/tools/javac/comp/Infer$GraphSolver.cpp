#include <com/sun/tools/javac/comp/Infer$GraphSolver.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Infer$GraphInferenceSteps.h>
#include <com/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node.h>
#include <com/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph.h>
#include <com/sun/tools/javac/comp/Infer$GraphStrategy.h>
#include <com/sun/tools/javac/comp/Infer$InferenceException.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/util/GraphUtils$AbstractNode.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <java/lang/Iterable.h>
#include <java/util/EnumSet.h>
#include <jcpp.h>

using $Infer$GraphInferenceStepsArray = $Array<::com::sun::tools::javac::comp::Infer$GraphInferenceSteps>;
using $Type = ::com::sun::tools::javac::code::Type;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$GraphInferenceSteps = ::com::sun::tools::javac::comp::Infer$GraphInferenceSteps;
using $Infer$GraphSolver$InferenceGraph = ::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph;
using $Infer$GraphSolver$InferenceGraph$Node = ::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph$Node;
using $Infer$GraphStrategy = ::com::sun::tools::javac::comp::Infer$GraphStrategy;
using $Infer$InferenceException = ::com::sun::tools::javac::comp::Infer$InferenceException;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $GraphUtils$AbstractNode = ::com::sun::tools::javac::util::GraphUtils$AbstractNode;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $List = ::com::sun::tools::javac::util::List;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $EnumSet = ::java::util::EnumSet;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Infer$GraphSolver_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Infer;", nullptr, $FINAL | $SYNTHETIC, $field(Infer$GraphSolver, this$0)},
	{"inferenceContext", "Lcom/sun/tools/javac/comp/InferenceContext;", nullptr, 0, $field(Infer$GraphSolver, inferenceContext)},
	{"warn", "Lcom/sun/tools/javac/util/Warner;", nullptr, 0, $field(Infer$GraphSolver, warn)},
	{}
};

$MethodInfo _Infer$GraphSolver_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Infer;Lcom/sun/tools/javac/comp/InferenceContext;Lcom/sun/tools/javac/util/Warner;)V", nullptr, 0, $method(static_cast<void(Infer$GraphSolver::*)($Infer*,$InferenceContext*,$Warner*)>(&Infer$GraphSolver::init$))},
	{"solve", "(Lcom/sun/tools/javac/comp/Infer$GraphStrategy;)V", nullptr, 0},
	{}
};

$InnerClassInfo _Infer$GraphSolver_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Infer$GraphSolver", "com.sun.tools.javac.comp.Infer", "GraphSolver", 0},
	{"com.sun.tools.javac.comp.Infer$GraphSolver$InferenceGraph", "com.sun.tools.javac.comp.Infer$GraphSolver", "InferenceGraph", 0},
	{}
};

$ClassInfo _Infer$GraphSolver_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Infer$GraphSolver",
	"java.lang.Object",
	nullptr,
	_Infer$GraphSolver_FieldInfo_,
	_Infer$GraphSolver_MethodInfo_,
	nullptr,
	nullptr,
	_Infer$GraphSolver_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Infer"
};

$Object* allocate$Infer$GraphSolver($Class* clazz) {
	return $of($alloc(Infer$GraphSolver));
}

void Infer$GraphSolver::init$($Infer* this$0, $InferenceContext* inferenceContext, $Warner* warn) {
	$set(this, this$0, this$0);
	$set(this, inferenceContext, inferenceContext);
	$set(this, warn, warn);
}

void Infer$GraphSolver::solve($Infer$GraphStrategy* sstrategy) {
	$useLocalCurrentObjectStackCache();
	this->this$0->doIncorporation(this->inferenceContext, this->warn);
	$var($Infer$GraphSolver$InferenceGraph, inferenceGraph, $new($Infer$GraphSolver$InferenceGraph, this));
	while (!$nc(sstrategy)->done()) {
		if (this->this$0->dependenciesFolder != nullptr) {
			$set(this->this$0, pendingGraphs, $nc(this->this$0->pendingGraphs)->prepend($(inferenceGraph->toDot())));
		}
		$var($Infer$GraphSolver$InferenceGraph$Node, nodeToSolve, sstrategy->pickNode(inferenceGraph));
		$var($List, varsToSolve, $List::from($cast($Iterable, $nc(nodeToSolve)->data)));
		$var($List, saved_undet, $nc(this->inferenceContext)->save());
		try {
			bool outer$continue = false;
			while ($Type::containsAny($($nc(this->inferenceContext)->restvars()), varsToSolve)) {
				{
					$var($Infer$GraphInferenceStepsArray, arr$, $Infer$GraphInferenceSteps::values());
					int32_t len$ = $nc(arr$)->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						$Infer$GraphInferenceSteps* step = arr$->get(i$);
						{
							if ($nc($($nc(this->inferenceContext)->solveBasic(varsToSolve, $nc(step)->steps)))->nonEmpty()) {
								this->this$0->doIncorporation(this->inferenceContext, this->warn);
								outer$continue = true;
								break;
							}
						}
					}
					if (outer$continue) {
						outer$continue = false;
						continue;
					}
				}
				$throw($(this->this$0->error(nullptr)));
			}
		} catch ($Infer$InferenceException& ex) {
			$nc(this->inferenceContext)->rollback(saved_undet);
			this->this$0->instantiateAsUninferredVars(varsToSolve, this->inferenceContext);
			this->this$0->doIncorporation(this->inferenceContext, this->warn);
		}
		inferenceGraph->deleteNode(nodeToSolve);
	}
}

Infer$GraphSolver::Infer$GraphSolver() {
}

$Class* Infer$GraphSolver::load$($String* name, bool initialize) {
	$loadClass(Infer$GraphSolver, name, initialize, &_Infer$GraphSolver_ClassInfo_, allocate$Infer$GraphSolver);
	return class$;
}

$Class* Infer$GraphSolver::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com