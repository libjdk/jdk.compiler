#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>

#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/DeferredAttr$AttrMode.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext$StuckNode.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrNode.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredStuckPolicy.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredType.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node.h>
#include <com/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph.h>
#include <com/sun/tools/javac/comp/Infer$GraphSolver.h>
#include <com/sun/tools/javac/comp/Infer$GraphStrategy$NodeNotFoundException.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/GraphUtils$AbstractNode.h>
#include <com/sun/tools/javac/util/GraphUtils.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <java/io/Serializable.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef SPECULATIVE

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $Types = ::com::sun::tools::javac::code::Types;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $DeferredAttr = ::com::sun::tools::javac::comp::DeferredAttr;
using $DeferredAttr$AttrMode = ::com::sun::tools::javac::comp::DeferredAttr$AttrMode;
using $DeferredAttr$DeferredAttrContext$StuckNode = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext$StuckNode;
using $DeferredAttr$DeferredAttrNode = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrNode;
using $DeferredAttr$DeferredStuckPolicy = ::com::sun::tools::javac::comp::DeferredAttr$DeferredStuckPolicy;
using $DeferredAttr$DeferredType = ::com::sun::tools::javac::comp::DeferredAttr$DeferredType;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$GraphSolver = ::com::sun::tools::javac::comp::Infer$GraphSolver;
using $Infer$GraphSolver$InferenceGraph = ::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph;
using $Infer$GraphSolver$InferenceGraph$Node = ::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph$Node;
using $Infer$GraphStrategy$NodeNotFoundException = ::com::sun::tools::javac::comp::Infer$GraphStrategy$NodeNotFoundException;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $Resolve$MethodResolutionPhase = ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $GraphUtils = ::com::sun::tools::javac::util::GraphUtils;
using $GraphUtils$AbstractNode = ::com::sun::tools::javac::util::GraphUtils$AbstractNode;
using $List = ::com::sun::tools::javac::util::List;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Collector = ::java::util::stream::Collector;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class DeferredAttr$DeferredAttrContext$$Lambda$lambda$buildStuckGraph$0 : public $Function {
	$class(DeferredAttr$DeferredAttrContext$$Lambda$lambda$buildStuckGraph$0, $NO_CLASS_INIT, $Function)
public:
	void init$(DeferredAttr$DeferredAttrContext* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* x$0) override {
		 return $of($nc(inst$)->lambda$buildStuckGraph$0($cast($DeferredAttr$DeferredAttrNode, x$0)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DeferredAttr$DeferredAttrContext$$Lambda$lambda$buildStuckGraph$0>());
	}
	DeferredAttr$DeferredAttrContext* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DeferredAttr$DeferredAttrContext$$Lambda$lambda$buildStuckGraph$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DeferredAttr$DeferredAttrContext$$Lambda$lambda$buildStuckGraph$0, inst$)},
	{}
};
$MethodInfo DeferredAttr$DeferredAttrContext$$Lambda$lambda$buildStuckGraph$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;)V", nullptr, $PUBLIC, $method(static_cast<void(DeferredAttr$DeferredAttrContext$$Lambda$lambda$buildStuckGraph$0::*)(DeferredAttr$DeferredAttrContext*)>(&DeferredAttr$DeferredAttrContext$$Lambda$lambda$buildStuckGraph$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo DeferredAttr$DeferredAttrContext$$Lambda$lambda$buildStuckGraph$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrContext$$Lambda$lambda$buildStuckGraph$0",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* DeferredAttr$DeferredAttrContext$$Lambda$lambda$buildStuckGraph$0::load$($String* name, bool initialize) {
	$loadClass(DeferredAttr$DeferredAttrContext$$Lambda$lambda$buildStuckGraph$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DeferredAttr$DeferredAttrContext$$Lambda$lambda$buildStuckGraph$0::class$ = nullptr;

class DeferredAttr$DeferredAttrContext$$Lambda$findNode$1 : public $Function {
	$class(DeferredAttr$DeferredAttrContext$$Lambda$findNode$1, $NO_CLASS_INIT, $Function)
public:
	void init$($Infer$GraphSolver$InferenceGraph* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* t) override {
		 return $of($nc(inst$)->findNode($cast($Type, t)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DeferredAttr$DeferredAttrContext$$Lambda$findNode$1>());
	}
	$Infer$GraphSolver$InferenceGraph* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DeferredAttr$DeferredAttrContext$$Lambda$findNode$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DeferredAttr$DeferredAttrContext$$Lambda$findNode$1, inst$)},
	{}
};
$MethodInfo DeferredAttr$DeferredAttrContext$$Lambda$findNode$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph;)V", nullptr, $PUBLIC, $method(static_cast<void(DeferredAttr$DeferredAttrContext$$Lambda$findNode$1::*)($Infer$GraphSolver$InferenceGraph*)>(&DeferredAttr$DeferredAttrContext$$Lambda$findNode$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo DeferredAttr$DeferredAttrContext$$Lambda$findNode$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrContext$$Lambda$findNode$1",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* DeferredAttr$DeferredAttrContext$$Lambda$findNode$1::load$($String* name, bool initialize) {
	$loadClass(DeferredAttr$DeferredAttrContext$$Lambda$findNode$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DeferredAttr$DeferredAttrContext$$Lambda$findNode$1::class$ = nullptr;

class DeferredAttr$DeferredAttrContext$$Lambda$contains$2 : public $Predicate {
	$class(DeferredAttr$DeferredAttrContext$$Lambda$contains$2, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Set* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* arg0) override {
		 return $nc(inst$)->contains(arg0);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DeferredAttr$DeferredAttrContext$$Lambda$contains$2>());
	}
	$Set* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DeferredAttr$DeferredAttrContext$$Lambda$contains$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DeferredAttr$DeferredAttrContext$$Lambda$contains$2, inst$)},
	{}
};
$MethodInfo DeferredAttr$DeferredAttrContext$$Lambda$contains$2::methodInfos[3] = {
	{"<init>", "(Ljava/util/Set;)V", nullptr, $PUBLIC, $method(static_cast<void(DeferredAttr$DeferredAttrContext$$Lambda$contains$2::*)($Set*)>(&DeferredAttr$DeferredAttrContext$$Lambda$contains$2::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo DeferredAttr$DeferredAttrContext$$Lambda$contains$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrContext$$Lambda$contains$2",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* DeferredAttr$DeferredAttrContext$$Lambda$contains$2::load$($String* name, bool initialize) {
	$loadClass(DeferredAttr$DeferredAttrContext$$Lambda$contains$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DeferredAttr$DeferredAttrContext$$Lambda$contains$2::class$ = nullptr;

$FieldInfo _DeferredAttr$DeferredAttrContext_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/DeferredAttr;", nullptr, $FINAL | $SYNTHETIC, $field(DeferredAttr$DeferredAttrContext, this$0)},
	{"mode", "Lcom/sun/tools/javac/comp/DeferredAttr$AttrMode;", nullptr, $FINAL, $field(DeferredAttr$DeferredAttrContext, mode)},
	{"msym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $FINAL, $field(DeferredAttr$DeferredAttrContext, msym)},
	{"phase", "Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;", nullptr, $FINAL, $field(DeferredAttr$DeferredAttrContext, phase)},
	{"inferenceContext", "Lcom/sun/tools/javac/comp/InferenceContext;", nullptr, $FINAL, $field(DeferredAttr$DeferredAttrContext, inferenceContext)},
	{"parent", "Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;", nullptr, $FINAL, $field(DeferredAttr$DeferredAttrContext, parent)},
	{"warn", "Lcom/sun/tools/javac/util/Warner;", nullptr, $FINAL, $field(DeferredAttr$DeferredAttrContext, warn)},
	{"deferredAttrNodes", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrNode;>;", 0, $field(DeferredAttr$DeferredAttrContext, deferredAttrNodes)},
	{}
};

$MethodInfo _DeferredAttr$DeferredAttrContext_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/DeferredAttr;Lcom/sun/tools/javac/comp/DeferredAttr$AttrMode;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;Lcom/sun/tools/javac/comp/InferenceContext;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;Lcom/sun/tools/javac/util/Warner;)V", nullptr, 0, $method(static_cast<void(DeferredAttr$DeferredAttrContext::*)($DeferredAttr*,$DeferredAttr$AttrMode*,$Symbol*,$Resolve$MethodResolutionPhase*,$InferenceContext*,DeferredAttr$DeferredAttrContext*,$Warner*)>(&DeferredAttr$DeferredAttrContext::init$))},
	{"addDeferredAttrNode", "(Lcom/sun/tools/javac/comp/DeferredAttr$DeferredType;Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredStuckPolicy;)V", nullptr, 0},
	{"buildStuckGraph", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext$StuckNode;>;", 0},
	{"canInfluence", "(Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext$StuckNode;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext$StuckNode;)Z", nullptr, 0},
	{"complete", "()V", nullptr, 0},
	{"insideOverloadPhase", "()Z", nullptr, $PUBLIC},
	{"lambda$buildStuckGraph$0", "(Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrNode;)Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext$StuckNode;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$DeferredAttr$DeferredAttrContext$StuckNode*(DeferredAttr$DeferredAttrContext::*)($DeferredAttr$DeferredAttrNode*)>(&DeferredAttr$DeferredAttrContext::lambda$buildStuckGraph$0))},
	{"pickDeferredNode", "()Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrNode;", nullptr, 0},
	{}
};

$InnerClassInfo _DeferredAttr$DeferredAttrContext_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrContext", "com.sun.tools.javac.comp.DeferredAttr", "DeferredAttrContext", 0},
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrContext$StuckNode", "com.sun.tools.javac.comp.DeferredAttr$DeferredAttrContext", "StuckNode", 0},
	{}
};

$ClassInfo _DeferredAttr$DeferredAttrContext_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrContext",
	"java.lang.Object",
	nullptr,
	_DeferredAttr$DeferredAttrContext_FieldInfo_,
	_DeferredAttr$DeferredAttrContext_MethodInfo_,
	nullptr,
	nullptr,
	_DeferredAttr$DeferredAttrContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.DeferredAttr"
};

$Object* allocate$DeferredAttr$DeferredAttrContext($Class* clazz) {
	return $of($alloc(DeferredAttr$DeferredAttrContext));
}

void DeferredAttr$DeferredAttrContext::init$($DeferredAttr* this$0, $DeferredAttr$AttrMode* mode, $Symbol* msym, $Resolve$MethodResolutionPhase* phase, $InferenceContext* inferenceContext, DeferredAttr$DeferredAttrContext* parent, $Warner* warn) {
	$set(this, this$0, this$0);
	$set(this, deferredAttrNodes, $new($ArrayList));
	$set(this, mode, mode);
	$set(this, msym, msym);
	$set(this, phase, phase);
	$set(this, parent, parent);
	$set(this, warn, warn);
	$set(this, inferenceContext, inferenceContext);
}

void DeferredAttr$DeferredAttrContext::addDeferredAttrNode($DeferredAttr$DeferredType* dt, $Attr$ResultInfo* resultInfo, $DeferredAttr$DeferredStuckPolicy* deferredStuckPolicy) {
	$nc(this->deferredAttrNodes)->add($$new($DeferredAttr$DeferredAttrNode, this->this$0, dt, resultInfo, deferredStuckPolicy));
}

void DeferredAttr$DeferredAttrContext::complete() {
	$useLocalCurrentObjectStackCache();
	while (!$nc(this->deferredAttrNodes)->isEmpty()) {
		bool progress = false;
		{
			$var($Iterator, i$, $nc($($List::from(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(this->deferredAttrNodes)))))))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($DeferredAttr$DeferredAttrNode, deferredAttrNode, $cast($DeferredAttr$DeferredAttrNode, i$->next()));
				{
					if ($nc(deferredAttrNode)->process(this)) {
						$nc(this->deferredAttrNodes)->remove($of(deferredAttrNode));
						progress = true;
					}
				}
			}
		}
		if (!progress) {
			if (insideOverloadPhase()) {
				{
					$var($Iterator, i$, $nc(this->deferredAttrNodes)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($DeferredAttr$DeferredAttrNode, deferredNode, $cast($DeferredAttr$DeferredAttrNode, i$->next()));
						{
							$init($Type);
							$set($nc($nc($nc(deferredNode)->dt)->tree), type, $Type::noType);
						}
					}
				}
				return;
			}
			try {
				$var($DeferredAttr$DeferredAttrNode, toUnstuck, pickDeferredNode());
				$nc(this->inferenceContext)->solveAny($($List::from($(static_cast<$Iterable*>($nc($nc(toUnstuck)->deferredStuckPolicy)->stuckVars())))), this->warn);
				$nc(this->inferenceContext)->notifyChange();
			} catch ($Infer$GraphStrategy$NodeNotFoundException& ex) {
				break;
			}
		}
	}
}

bool DeferredAttr$DeferredAttrContext::insideOverloadPhase() {
	$var(DeferredAttr$DeferredAttrContext, dac, this);
	if (dac == this->this$0->emptyDeferredAttrContext) {
		return false;
	}
	$init($DeferredAttr$AttrMode);
	if (dac->mode == $DeferredAttr$AttrMode::SPECULATIVE) {
		return true;
	}
	return $nc(dac->parent)->insideOverloadPhase();
}

$DeferredAttr$DeferredAttrNode* DeferredAttr$DeferredAttrContext::pickDeferredNode() {
	$useLocalCurrentObjectStackCache();
	$var($List, stuckGraph, buildStuckGraph());
	$var($List, csn, $cast($List, $nc($($GraphUtils::tarjan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(stuckGraph))))))->get(0)));
	return $nc(csn)->length() == 1 ? $cast($DeferredAttr$DeferredAttrNode, $nc(($cast($DeferredAttr$DeferredAttrContext$StuckNode, $($nc(csn)->get(0)))))->data) : $cast($DeferredAttr$DeferredAttrNode, $nc(this->deferredAttrNodes)->get(0));
}

$List* DeferredAttr$DeferredAttrContext::buildStuckGraph() {
	$useLocalCurrentObjectStackCache();
	$nc(this->this$0->infer)->doIncorporation(this->inferenceContext, this->warn);
	$var($Infer$GraphSolver$InferenceGraph, graph, $new($Infer$GraphSolver$InferenceGraph, $$new($Infer$GraphSolver, static_cast<$Infer*>($nc(this->this$0->infer)), this->inferenceContext, $nc(this->this$0->types)->noWarnings)));
	$var($List, nodes, $cast($List, $nc($($nc($($nc(this->deferredAttrNodes)->stream()))->map(static_cast<$Function*>($$new(DeferredAttr$DeferredAttrContext$$Lambda$lambda$buildStuckGraph$0, this)))))->collect($($List::collector()))));
	{
		$var($Iterator, i$, $nc(nodes)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($DeferredAttr$DeferredAttrContext$StuckNode, sn1, $cast($DeferredAttr$DeferredAttrContext$StuckNode, i$->next()));
			{
				{
					$var($Iterator, i$, nodes->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($DeferredAttr$DeferredAttrContext$StuckNode, sn2, $cast($DeferredAttr$DeferredAttrContext$StuckNode, i$->next()));
						{
							if (sn1 != sn2 && canInfluence(graph, sn2, sn1)) {
								$nc($nc(sn1)->deps)->add(sn2);
							}
						}
					}
				}
			}
		}
	}
	return nodes;
}

bool DeferredAttr$DeferredAttrContext::canInfluence($Infer$GraphSolver$InferenceGraph* graph, $DeferredAttr$DeferredAttrContext$StuckNode* sn1, $DeferredAttr$DeferredAttrContext$StuckNode* sn2) {
	$useLocalCurrentObjectStackCache();
	$var($Set, outputVars, $nc($nc(($cast($DeferredAttr$DeferredAttrNode, $nc(sn1)->data)))->deferredStuckPolicy)->depVars());
	{
		$var($Iterator, i$, $nc($($nc($nc(($cast($DeferredAttr$DeferredAttrNode, $nc(sn2)->data)))->deferredStuckPolicy)->stuckVars()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, inputVar, $cast($Type, i$->next()));
			{
				$var($Infer$GraphSolver$InferenceGraph$Node, inputNode, $nc(graph)->findNode(inputVar));
				if (inputNode != nullptr) {
					$var($Set, inputClosure, inputNode->closure());
					if ($nc($($nc($($nc(outputVars)->stream()))->map(static_cast<$Function*>($$new(DeferredAttr$DeferredAttrContext$$Lambda$findNode$1, static_cast<$Infer$GraphSolver$InferenceGraph*>(graph))))))->anyMatch(static_cast<$Predicate*>($$new(DeferredAttr$DeferredAttrContext$$Lambda$contains$2, static_cast<$Set*>($nc(inputClosure)))))) {
						return true;
					}
				}
			}
		}
	}
	return false;
}

$DeferredAttr$DeferredAttrContext$StuckNode* DeferredAttr$DeferredAttrContext::lambda$buildStuckGraph$0($DeferredAttr$DeferredAttrNode* x$0) {
	return $new($DeferredAttr$DeferredAttrContext$StuckNode, this, x$0);
}

DeferredAttr$DeferredAttrContext::DeferredAttr$DeferredAttrContext() {
}

$Class* DeferredAttr$DeferredAttrContext::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DeferredAttr$DeferredAttrContext$$Lambda$lambda$buildStuckGraph$0::classInfo$.name)) {
			return DeferredAttr$DeferredAttrContext$$Lambda$lambda$buildStuckGraph$0::load$(name, initialize);
		}
		if (name->equals(DeferredAttr$DeferredAttrContext$$Lambda$findNode$1::classInfo$.name)) {
			return DeferredAttr$DeferredAttrContext$$Lambda$findNode$1::load$(name, initialize);
		}
		if (name->equals(DeferredAttr$DeferredAttrContext$$Lambda$contains$2::classInfo$.name)) {
			return DeferredAttr$DeferredAttrContext$$Lambda$contains$2::load$(name, initialize);
		}
	}
	$loadClass(DeferredAttr$DeferredAttrContext, name, initialize, &_DeferredAttr$DeferredAttrContext_ClassInfo_, allocate$DeferredAttr$DeferredAttrContext);
	return class$;
}

$Class* DeferredAttr$DeferredAttrContext::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com