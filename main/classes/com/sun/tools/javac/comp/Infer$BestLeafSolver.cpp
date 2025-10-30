#include <com/sun/tools/javac/comp/Infer$BestLeafSolver.h>

#include <com/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node.h>
#include <com/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph.h>
#include <com/sun/tools/javac/comp/Infer$GraphStrategy$NodeNotFoundException.h>
#include <com/sun/tools/javac/comp/Infer$LeafSolver.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/util/GraphUtils$AbstractNode.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <java/lang/Iterable.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef MAX_VALUE

using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$GraphSolver$InferenceGraph = ::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph;
using $Infer$GraphSolver$InferenceGraph$Node = ::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph$Node;
using $Infer$GraphStrategy$NodeNotFoundException = ::com::sun::tools::javac::comp::Infer$GraphStrategy$NodeNotFoundException;
using $Infer$LeafSolver = ::com::sun::tools::javac::comp::Infer$LeafSolver;
using $GraphUtils$AbstractNode = ::com::sun::tools::javac::util::GraphUtils$AbstractNode;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Infer$BestLeafSolver_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Infer;", nullptr, $FINAL | $SYNTHETIC, $field(Infer$BestLeafSolver, this$0)},
	{"varsToSolve", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0, $field(Infer$BestLeafSolver, varsToSolve)},
	{"treeCache", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node;Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node;>;Ljava/lang/Integer;>;>;", $FINAL, $field(Infer$BestLeafSolver, treeCache)},
	{"noPath", "Lcom/sun/tools/javac/util/Pair;", "Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node;>;Ljava/lang/Integer;>;", $FINAL, $field(Infer$BestLeafSolver, noPath)},
	{}
};

$MethodInfo _Infer$BestLeafSolver_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Infer;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)V", 0, $method(static_cast<void(Infer$BestLeafSolver::*)($Infer*,$List*)>(&Infer$BestLeafSolver::init$))},
	{"computeTreeToLeafs", "(Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node;)Lcom/sun/tools/javac/util/Pair;", "(Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node;)Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node;>;Ljava/lang/Integer;>;", 0},
	{"pickNode", "(Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph;)Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Infer$BestLeafSolver_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Infer$BestLeafSolver", "com.sun.tools.javac.comp.Infer", "BestLeafSolver", $ABSTRACT},
	{"com.sun.tools.javac.comp.Infer$LeafSolver", "com.sun.tools.javac.comp.Infer", "LeafSolver", $ABSTRACT},
	{}
};

$ClassInfo _Infer$BestLeafSolver_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.comp.Infer$BestLeafSolver",
	"com.sun.tools.javac.comp.Infer$LeafSolver",
	nullptr,
	_Infer$BestLeafSolver_FieldInfo_,
	_Infer$BestLeafSolver_MethodInfo_,
	nullptr,
	nullptr,
	_Infer$BestLeafSolver_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Infer"
};

$Object* allocate$Infer$BestLeafSolver($Class* clazz) {
	return $of($alloc(Infer$BestLeafSolver));
}

void Infer$BestLeafSolver::init$($Infer* this$0, $List* varsToSolve) {
	$set(this, this$0, this$0);
	$Infer$LeafSolver::init$(this$0);
	$set(this, treeCache, $new($HashMap));
	$set(this, noPath, $new($Pair, nullptr, $($Integer::valueOf($Integer::MAX_VALUE))));
	$set(this, varsToSolve, varsToSolve);
}

$Pair* Infer$BestLeafSolver::computeTreeToLeafs($Infer$GraphSolver$InferenceGraph$Node* n) {
	$useLocalCurrentObjectStackCache();
	$var($Pair, cachedPath, $cast($Pair, $nc(this->treeCache)->get(n)));
	if (cachedPath == nullptr) {
		if ($nc(n)->isLeaf()) {
			$var($Object, var$0, $of($List::of(n)));
			$assign(cachedPath, $new($Pair, var$0, $($Integer::valueOf($nc(($cast($ListBuffer, n->data)))->length()))));
		} else {
			$var($Object, var$1, $of($List::of(n)));
			$var($Pair, path, $new($Pair, var$1, $($Integer::valueOf($nc(($cast($ListBuffer, n->data)))->length()))));
			{
				$var($Iterator, i$, $nc($(n->getAllDependencies()))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Infer$GraphSolver$InferenceGraph$Node, n2, $cast($Infer$GraphSolver$InferenceGraph$Node, i$->next()));
					{
						if (n2 == n) {
							continue;
						}
						$var($Pair, subpath, computeTreeToLeafs(n2));
						$var($Object, var$2, $of($nc(($cast($List, path->fst)))->prependList($cast($List, $nc(subpath)->fst))));
						int32_t var$3 = $nc(($cast($Integer, path->snd)))->intValue();
						$assign(path, $new($Pair, var$2, $($Integer::valueOf(var$3 + $nc(($cast($Integer, $nc(subpath)->snd)))->intValue()))));
					}
				}
			}
			$assign(cachedPath, path);
		}
		$nc(this->treeCache)->put(n, cachedPath);
	}
	return cachedPath;
}

$Infer$GraphSolver$InferenceGraph$Node* Infer$BestLeafSolver::pickNode($Infer$GraphSolver$InferenceGraph* g) {
	$useLocalCurrentObjectStackCache();
	$nc(this->treeCache)->clear();
	$var($Pair, bestPath, this->noPath);
	{
		$var($Iterator, i$, $nc($nc(g)->nodes)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Infer$GraphSolver$InferenceGraph$Node, n, $cast($Infer$GraphSolver$InferenceGraph$Node, i$->next()));
			{
				if (!$Collections::disjoint($cast($Collection, $nc(n)->data), static_cast<$Collection*>(static_cast<$AbstractCollection*>(this->varsToSolve)))) {
					$var($Pair, path, computeTreeToLeafs(n));
					int32_t var$0 = $nc(($cast($Integer, $nc(path)->snd)))->intValue();
					if (var$0 < $nc(($cast($Integer, $nc(bestPath)->snd)))->intValue()) {
						$assign(bestPath, path);
					}
				}
			}
		}
	}
	if (bestPath == this->noPath) {
		$throwNew($Infer$GraphStrategy$NodeNotFoundException, g);
	}
	return $cast($Infer$GraphSolver$InferenceGraph$Node, $nc(($cast($List, $nc(bestPath)->fst)))->head);
}

Infer$BestLeafSolver::Infer$BestLeafSolver() {
}

$Class* Infer$BestLeafSolver::load$($String* name, bool initialize) {
	$loadClass(Infer$BestLeafSolver, name, initialize, &_Infer$BestLeafSolver_ClassInfo_, allocate$Infer$BestLeafSolver);
	return class$;
}

$Class* Infer$BestLeafSolver::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com