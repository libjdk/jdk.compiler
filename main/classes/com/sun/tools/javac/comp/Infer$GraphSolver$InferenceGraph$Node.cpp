#include <com/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node.h>

#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Infer$DependencyKind.h>
#include <com/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph.h>
#include <com/sun/tools/javac/comp/Infer$GraphSolver.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/GraphUtils$AbstractNode.h>
#include <com/sun/tools/javac/util/GraphUtils$DependencyKind.h>
#include <com/sun/tools/javac/util/GraphUtils$DottableNode.h>
#include <com/sun/tools/javac/util/GraphUtils$NodeVisitor.h>
#include <com/sun/tools/javac/util/GraphUtils$TarjanNode.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Iterable.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/Properties.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef BOUND

using $Type$UndetVar$InferenceBoundArray = $Array<::com::sun::tools::javac::code::Type$UndetVar$InferenceBound>;
using $GraphUtils$DependencyKindArray = $Array<::com::sun::tools::javac::util::GraphUtils$DependencyKind>;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$UndetVar$InferenceBound = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound;
using $Infer$DependencyKind = ::com::sun::tools::javac::comp::Infer$DependencyKind;
using $Infer$GraphSolver = ::com::sun::tools::javac::comp::Infer$GraphSolver;
using $Infer$GraphSolver$InferenceGraph = ::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $GraphUtils$AbstractNode = ::com::sun::tools::javac::util::GraphUtils$AbstractNode;
using $GraphUtils$DependencyKind = ::com::sun::tools::javac::util::GraphUtils$DependencyKind;
using $GraphUtils$DottableNode = ::com::sun::tools::javac::util::GraphUtils$DottableNode;
using $GraphUtils$NodeVisitor = ::com::sun::tools::javac::util::GraphUtils$NodeVisitor;
using $GraphUtils$TarjanNode = ::com::sun::tools::javac::util::GraphUtils$TarjanNode;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $Properties = ::java::util::Properties;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Infer$GraphSolver$InferenceGraph$Node_FieldInfo_[] = {
	{"this$2", "Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph;", nullptr, $FINAL | $SYNTHETIC, $field(Infer$GraphSolver$InferenceGraph$Node, this$2)},
	{"deps", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node;>;", 0, $field(Infer$GraphSolver$InferenceGraph$Node, deps)},
	{}
};

$MethodInfo _Infer$GraphSolver$InferenceGraph$Node_MethodInfo_[] = {
	{"*accept", "(Lcom/sun/tools/javac/util/GraphUtils$NodeVisitor;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0, $method(static_cast<void(Infer$GraphSolver$InferenceGraph$Node::*)($Infer$GraphSolver$InferenceGraph*,$Type*)>(&Infer$GraphSolver$InferenceGraph$Node::init$))},
	{"addDependencies", "(Ljava/util/Set;)V", "(Ljava/util/Set<Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node;>;)V", $PROTECTED},
	{"addDependency", "(Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node;)V", nullptr, $PROTECTED},
	{"closure", "()Ljava/util/Set;", "()Ljava/util/Set<Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node;>;", $PROTECTED},
	{"closureInternal", "(Ljava/util/Set;)V", "(Ljava/util/Set<Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node;>;)V", $PRIVATE, $method(static_cast<void(Infer$GraphSolver$InferenceGraph$Node::*)($Set*)>(&Infer$GraphSolver$InferenceGraph$Node::closureInternal))},
	{"dependencyAttributes", "(Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node;Lcom/sun/tools/javac/util/GraphUtils$DependencyKind;)Ljava/util/Properties;", nullptr, $PUBLIC},
	{"dependencyAttributes", "(Lcom/sun/tools/javac/util/GraphUtils$DottableNode;Lcom/sun/tools/javac/util/GraphUtils$DependencyKind;)Ljava/util/Properties;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getAllDependencies", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<+Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node;>;", $PUBLIC},
	{"getDependenciesByKind", "(Lcom/sun/tools/javac/util/GraphUtils$DependencyKind;)Ljava/util/Collection;", "(Lcom/sun/tools/javac/util/GraphUtils$DependencyKind;)Ljava/util/Collection<+Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node;>;", $PUBLIC},
	{"getSupportedDependencyKinds", "()[Lcom/sun/tools/javac/util/GraphUtils$DependencyKind;", nullptr, $PUBLIC},
	{"graphChanged", "(Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node;Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node;)V", nullptr, $PRIVATE, $method(static_cast<void(Infer$GraphSolver$InferenceGraph$Node::*)(Infer$GraphSolver$InferenceGraph$Node*,Infer$GraphSolver$InferenceGraph$Node*)>(&Infer$GraphSolver$InferenceGraph$Node::graphChanged))},
	{"isLeaf", "()Z", nullptr, $PROTECTED},
	{"mergeWith", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<+Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node;>;)V", $PROTECTED},
	{"nodeAttributes", "()Ljava/util/Properties;", nullptr, $PUBLIC},
	{"removeDependency", "(Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node;)Z", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Infer$GraphSolver$InferenceGraph$Node_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Infer$GraphSolver", "com.sun.tools.javac.comp.Infer", "GraphSolver", 0},
	{"com.sun.tools.javac.comp.Infer$GraphSolver$InferenceGraph", "com.sun.tools.javac.comp.Infer$GraphSolver", "InferenceGraph", 0},
	{"com.sun.tools.javac.comp.Infer$GraphSolver$InferenceGraph$Node", "com.sun.tools.javac.comp.Infer$GraphSolver$InferenceGraph", "Node", 0},
	{"com.sun.tools.javac.util.GraphUtils$TarjanNode", "com.sun.tools.javac.util.GraphUtils", "TarjanNode", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.util.GraphUtils$DottableNode", "com.sun.tools.javac.util.GraphUtils", "DottableNode", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Infer$GraphSolver$InferenceGraph$Node_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Infer$GraphSolver$InferenceGraph$Node",
	"com.sun.tools.javac.util.GraphUtils$TarjanNode",
	"com.sun.tools.javac.util.GraphUtils$DottableNode",
	_Infer$GraphSolver$InferenceGraph$Node_FieldInfo_,
	_Infer$GraphSolver$InferenceGraph$Node_MethodInfo_,
	"Lcom/sun/tools/javac/util/GraphUtils$TarjanNode<Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node;>;Lcom/sun/tools/javac/util/GraphUtils$DottableNode<Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node;>;",
	nullptr,
	_Infer$GraphSolver$InferenceGraph$Node_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Infer"
};

$Object* allocate$Infer$GraphSolver$InferenceGraph$Node($Class* clazz) {
	return $of($alloc(Infer$GraphSolver$InferenceGraph$Node));
}

$String* Infer$GraphSolver$InferenceGraph$Node::toString() {
	 return this->$GraphUtils$TarjanNode::toString();
}

void Infer$GraphSolver$InferenceGraph$Node::accept($GraphUtils$NodeVisitor* visitor, Object$* arg) {
	this->$GraphUtils$TarjanNode::accept(visitor, arg);
}

int32_t Infer$GraphSolver$InferenceGraph$Node::hashCode() {
	 return this->$GraphUtils$TarjanNode::hashCode();
}

bool Infer$GraphSolver$InferenceGraph$Node::equals(Object$* arg0) {
	 return this->$GraphUtils$TarjanNode::equals(arg0);
}

$Object* Infer$GraphSolver$InferenceGraph$Node::clone() {
	 return this->$GraphUtils$TarjanNode::clone();
}

void Infer$GraphSolver$InferenceGraph$Node::finalize() {
	this->$GraphUtils$TarjanNode::finalize();
}

void Infer$GraphSolver$InferenceGraph$Node::init$($Infer$GraphSolver$InferenceGraph* this$2, $Type* ivar) {
	$set(this, this$2, this$2);
	$GraphUtils$TarjanNode::init$($($ListBuffer::of(ivar)));
	$set(this, deps, $new($LinkedHashSet));
}

$GraphUtils$DependencyKindArray* Infer$GraphSolver$InferenceGraph$Node::getSupportedDependencyKinds() {
	$init($Infer$DependencyKind);
	return $new($GraphUtils$DependencyKindArray, {static_cast<$GraphUtils$DependencyKind*>($Infer$DependencyKind::BOUND)});
}

$Iterable* Infer$GraphSolver$InferenceGraph$Node::getAllDependencies() {
	return this->deps;
}

$Collection* Infer$GraphSolver$InferenceGraph$Node::getDependenciesByKind($GraphUtils$DependencyKind* dk) {
	$init($Infer$DependencyKind);
	if ($equals(dk, $Infer$DependencyKind::BOUND)) {
		return this->deps;
	} else {
		$throwNew($IllegalStateException);
	}
}

void Infer$GraphSolver$InferenceGraph$Node::addDependency(Infer$GraphSolver$InferenceGraph$Node* depToAdd) {
	$nc(this->deps)->add(depToAdd);
}

void Infer$GraphSolver$InferenceGraph$Node::addDependencies($Set* depsToAdd) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(depsToAdd)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var(Infer$GraphSolver$InferenceGraph$Node, n, $cast(Infer$GraphSolver$InferenceGraph$Node, i$->next()));
			{
				addDependency(n);
			}
		}
	}
}

bool Infer$GraphSolver$InferenceGraph$Node::removeDependency(Infer$GraphSolver$InferenceGraph$Node* n) {
	return $nc(this->deps)->remove(n);
}

$Set* Infer$GraphSolver$InferenceGraph$Node::closure() {
	$var($Set, closure, $new($HashSet));
	closureInternal(closure);
	return closure;
}

void Infer$GraphSolver$InferenceGraph$Node::closureInternal($Set* closure) {
	$useLocalCurrentObjectStackCache();
	if ($nc(closure)->add(this)) {
		{
			$var($Iterator, i$, $nc(this->deps)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var(Infer$GraphSolver$InferenceGraph$Node, n, $cast(Infer$GraphSolver$InferenceGraph$Node, i$->next()));
				{
					$nc(n)->closureInternal(closure);
				}
			}
		}
	}
}

bool Infer$GraphSolver$InferenceGraph$Node::isLeaf() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->deps)->isEmpty()) {
		return true;
	}
	{
		$var($Iterator, i$, $nc(this->deps)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var(Infer$GraphSolver$InferenceGraph$Node, n, $cast(Infer$GraphSolver$InferenceGraph$Node, i$->next()));
			{
				if (n != this) {
					return false;
				}
			}
		}
	}
	return true;
}

void Infer$GraphSolver$InferenceGraph$Node::mergeWith($List* nodes) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(nodes)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var(Infer$GraphSolver$InferenceGraph$Node, n, $cast(Infer$GraphSolver$InferenceGraph$Node, i$->next()));
			{
				$Assert::check($nc(($cast($ListBuffer, $nc(n)->data)))->length() == 1, "Attempt to merge a compound node!"_s);
				$nc(($cast($ListBuffer, this->data)))->appendList($cast($ListBuffer, $nc(n)->data));
				addDependencies($nc(n)->deps);
			}
		}
	}
	$var($Set, deps2, $new($LinkedHashSet));
	{
		$var($Iterator, i$, $nc(this->deps)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var(Infer$GraphSolver$InferenceGraph$Node, d, $cast(Infer$GraphSolver$InferenceGraph$Node, i$->next()));
			{
				if ($nc(($cast($ListBuffer, this->data)))->contains($($nc(($cast($ListBuffer, $nc(d)->data)))->first()))) {
					deps2->add(this);
				} else {
					deps2->add(d);
				}
			}
		}
	}
	$set(this, deps, deps2);
}

void Infer$GraphSolver$InferenceGraph$Node::graphChanged(Infer$GraphSolver$InferenceGraph$Node* from, Infer$GraphSolver$InferenceGraph$Node* to) {
	if (removeDependency(from)) {
		if (to != nullptr) {
			addDependency(to);
		}
	}
}

$Properties* Infer$GraphSolver$InferenceGraph$Node::nodeAttributes() {
	$useLocalCurrentObjectStackCache();
	$var($Properties, p, $new($Properties));
	p->put("label"_s, $$str({"\""_s, $(toString()), "\""_s}));
	return p;
}

$Properties* Infer$GraphSolver$InferenceGraph$Node::dependencyAttributes(Infer$GraphSolver$InferenceGraph$Node* sink, $GraphUtils$DependencyKind* dk) {
	$useLocalCurrentObjectStackCache();
	$var($Properties, p, $new($Properties));
	p->put("style"_s, $nc(($cast($Infer$DependencyKind, dk)))->dotStyle);
	$var($StringBuilder, buf, $new($StringBuilder));
	$var($String, sep, ""_s);
	{
		$var($Iterator, i$, $nc(($cast($ListBuffer, this->data)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, from, $cast($Type, i$->next()));
			{
				$var($Type$UndetVar, uv, $cast($Type$UndetVar, $nc($nc(this->this$2->this$1)->inferenceContext)->asUndetVar(from)));
				{
					$var($Iterator, i$, $nc($($nc(uv)->getBounds($($Type$UndetVar$InferenceBound::values()))))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Type, bound, $cast($Type, i$->next()));
						{
							if ($nc(bound)->containsAny($($List::from($cast($Iterable, $nc(sink)->data))))) {
								buf->append(sep);
								buf->append($of(bound));
								$assign(sep, ","_s);
							}
						}
					}
				}
			}
		}
	}
	p->put("label"_s, $$str({"\""_s, $(buf->toString()), "\""_s}));
	return p;
}

$Properties* Infer$GraphSolver$InferenceGraph$Node::dependencyAttributes($GraphUtils$DottableNode* sink, $GraphUtils$DependencyKind* dk) {
	return this->dependencyAttributes($cast(Infer$GraphSolver$InferenceGraph$Node, sink), dk);
}

Infer$GraphSolver$InferenceGraph$Node::Infer$GraphSolver$InferenceGraph$Node() {
}

$Class* Infer$GraphSolver$InferenceGraph$Node::load$($String* name, bool initialize) {
	$loadClass(Infer$GraphSolver$InferenceGraph$Node, name, initialize, &_Infer$GraphSolver$InferenceGraph$Node_ClassInfo_, allocate$Infer$GraphSolver$InferenceGraph$Node);
	return class$;
}

$Class* Infer$GraphSolver$InferenceGraph$Node::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com