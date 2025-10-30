#include <com/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph.h>

#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node.h>
#include <com/sun/tools/javac/comp/Infer$GraphSolver.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/GraphUtils$AbstractNode.h>
#include <com/sun/tools/javac/util/GraphUtils.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <java/lang/Iterable.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef EQ
#undef LOWER
#undef UPPER

using $Type$UndetVar$InferenceBoundArray = $Array<::com::sun::tools::javac::code::Type$UndetVar$InferenceBound>;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$DelegatedType = ::com::sun::tools::javac::code::Type$DelegatedType;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$UndetVar$InferenceBound = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound;
using $Infer$GraphSolver = ::com::sun::tools::javac::comp::Infer$GraphSolver;
using $Infer$GraphSolver$InferenceGraph$Node = ::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph$Node;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $GraphUtils = ::com::sun::tools::javac::util::GraphUtils;
using $GraphUtils$AbstractNode = ::com::sun::tools::javac::util::GraphUtils$AbstractNode;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Infer$GraphSolver$InferenceGraph_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/comp/Infer$GraphSolver;", nullptr, $FINAL | $SYNTHETIC, $field(Infer$GraphSolver$InferenceGraph, this$1)},
	{"nodes", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node;>;", 0, $field(Infer$GraphSolver$InferenceGraph, nodes)},
	{}
};

$MethodInfo _Infer$GraphSolver$InferenceGraph_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Infer$GraphSolver;)V", nullptr, 0, $method(static_cast<void(Infer$GraphSolver$InferenceGraph::*)($Infer$GraphSolver*)>(&Infer$GraphSolver$InferenceGraph::init$))},
	{"deleteNode", "(Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node;)V", nullptr, $PUBLIC},
	{"findNode", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node;", nullptr, $PUBLIC},
	{"initNodes", "()V", nullptr, 0},
	{"notifyUpdate", "(Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node;Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node;)V", nullptr, 0},
	{"toDot", "()Ljava/lang/String;", nullptr, 0},
	{}
};

$InnerClassInfo _Infer$GraphSolver$InferenceGraph_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Infer$GraphSolver", "com.sun.tools.javac.comp.Infer", "GraphSolver", 0},
	{"com.sun.tools.javac.comp.Infer$GraphSolver$InferenceGraph", "com.sun.tools.javac.comp.Infer$GraphSolver", "InferenceGraph", 0},
	{"com.sun.tools.javac.comp.Infer$GraphSolver$InferenceGraph$Node", "com.sun.tools.javac.comp.Infer$GraphSolver$InferenceGraph", "Node", 0},
	{}
};

$ClassInfo _Infer$GraphSolver$InferenceGraph_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Infer$GraphSolver$InferenceGraph",
	"java.lang.Object",
	nullptr,
	_Infer$GraphSolver$InferenceGraph_FieldInfo_,
	_Infer$GraphSolver$InferenceGraph_MethodInfo_,
	nullptr,
	nullptr,
	_Infer$GraphSolver$InferenceGraph_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Infer"
};

$Object* allocate$Infer$GraphSolver$InferenceGraph($Class* clazz) {
	return $of($alloc(Infer$GraphSolver$InferenceGraph));
}

void Infer$GraphSolver$InferenceGraph::init$($Infer$GraphSolver* this$1) {
	$set(this, this$1, this$1);
	initNodes();
}

$Infer$GraphSolver$InferenceGraph$Node* Infer$GraphSolver$InferenceGraph::findNode($Type* t) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->nodes)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Infer$GraphSolver$InferenceGraph$Node, n, $cast($Infer$GraphSolver$InferenceGraph$Node, i$->next()));
			{
				if ($nc(($cast($ListBuffer, $nc(n)->data)))->contains(t)) {
					return n;
				}
			}
		}
	}
	return nullptr;
}

void Infer$GraphSolver$InferenceGraph::deleteNode($Infer$GraphSolver$InferenceGraph$Node* n) {
	$Assert::check($nc(this->nodes)->contains(n));
	$nc(this->nodes)->remove($of(n));
	notifyUpdate(n, nullptr);
}

void Infer$GraphSolver$InferenceGraph::notifyUpdate($Infer$GraphSolver$InferenceGraph$Node* from, $Infer$GraphSolver$InferenceGraph$Node* to) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->nodes)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Infer$GraphSolver$InferenceGraph$Node, n, $cast($Infer$GraphSolver$InferenceGraph$Node, i$->next()));
			{
				$nc(n)->graphChanged(from, to);
			}
		}
	}
}

void Infer$GraphSolver$InferenceGraph::initNodes() {
	$useLocalCurrentObjectStackCache();
	$set(this, nodes, $new($ArrayList));
	{
		$var($Iterator, i$, $nc($($nc(this->this$1->inferenceContext)->restvars()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				$nc(this->nodes)->add($$new($Infer$GraphSolver$InferenceGraph$Node, this, t));
			}
		}
	}
	{
		$var($Iterator, i$, $nc(this->nodes)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Infer$GraphSolver$InferenceGraph$Node, n_i, $cast($Infer$GraphSolver$InferenceGraph$Node, i$->next()));
			{
				$var($Type, i, $cast($Type, $nc(($cast($ListBuffer, $nc(n_i)->data)))->first()));
				{
					$var($Iterator, i$, $nc(this->nodes)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Infer$GraphSolver$InferenceGraph$Node, n_j, $cast($Infer$GraphSolver$InferenceGraph$Node, i$->next()));
						{
							$var($Type, j, $cast($Type, $nc(($cast($ListBuffer, $nc(n_j)->data)))->first()));
							if (i != j) {
								$var($Type$UndetVar, uv_i, $cast($Type$UndetVar, $nc(this->this$1->inferenceContext)->asUndetVar(i)));
								$var($List, var$0, $nc(uv_i)->getBounds($($Type$UndetVar$InferenceBound::values())));
								if ($Type::containsAny(var$0, $($List::of(j)))) {
									n_i->addDependency(n_j);
								}
							}
						}
					}
				}
			}
		}
	}
	$var($ArrayList, acyclicNodes, $new($ArrayList));
	{
		$var($Iterator, i$, $nc($($GraphUtils::tarjan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(this->nodes)))))))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($List, conSubGraph, $cast($List, i$->next()));
			{
				if ($nc(conSubGraph)->length() > 1) {
					$var($Infer$GraphSolver$InferenceGraph$Node, root, $cast($Infer$GraphSolver$InferenceGraph$Node, conSubGraph->head));
					$nc(root)->mergeWith(conSubGraph->tail);
					{
						$var($Iterator, i$, conSubGraph->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($Infer$GraphSolver$InferenceGraph$Node, n, $cast($Infer$GraphSolver$InferenceGraph$Node, i$->next()));
							{
								notifyUpdate(n, root);
							}
						}
					}
				}
				acyclicNodes->add($cast($Infer$GraphSolver$InferenceGraph$Node, $nc(conSubGraph)->head));
			}
		}
	}
	$set(this, nodes, acyclicNodes);
}

$String* Infer$GraphSolver$InferenceGraph::toDot() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	{
		$var($Iterator, i$, $nc($nc(this->this$1->inferenceContext)->undetvars)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				$var($Type$UndetVar, uv, $cast($Type$UndetVar, t));
				$init($Type$UndetVar$InferenceBound);
				buf->append($($String::format("var %s - upper bounds = %s, lower bounds = %s, eq bounds = %s\\n"_s, $$new($ObjectArray, {
					$of($nc(uv)->qtype),
					$($of(uv->getBounds($$new($Type$UndetVar$InferenceBoundArray, {$Type$UndetVar$InferenceBound::UPPER})))),
					$($of(uv->getBounds($$new($Type$UndetVar$InferenceBoundArray, {$Type$UndetVar$InferenceBound::LOWER})))),
					$($of(uv->getBounds($$new($Type$UndetVar$InferenceBoundArray, {$Type$UndetVar$InferenceBound::EQ}))))
				}))));
			}
		}
	}
	$var($Collection, var$0, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(this->nodes))));
	$var($String, var$1, $str({"inferenceGraph"_s, $$str(hashCode())}));
	return $GraphUtils::toDot(var$0, var$1, $(buf->toString()));
}

Infer$GraphSolver$InferenceGraph::Infer$GraphSolver$InferenceGraph() {
}

$Class* Infer$GraphSolver$InferenceGraph::load$($String* name, bool initialize) {
	$loadClass(Infer$GraphSolver$InferenceGraph, name, initialize, &_Infer$GraphSolver$InferenceGraph_ClassInfo_, allocate$Infer$GraphSolver$InferenceGraph);
	return class$;
}

$Class* Infer$GraphSolver$InferenceGraph::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com