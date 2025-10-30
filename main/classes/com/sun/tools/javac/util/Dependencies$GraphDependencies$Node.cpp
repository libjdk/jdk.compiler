#include <com/sun/tools/javac/util/Dependencies$GraphDependencies$Node.h>

#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/util/Dependencies$CompletionCause.h>
#include <com/sun/tools/javac/util/Dependencies$GraphDependencies.h>
#include <com/sun/tools/javac/util/GraphUtils$AbstractNode.h>
#include <com/sun/tools/javac/util/GraphUtils$DependencyKind.h>
#include <com/sun/tools/javac/util/GraphUtils$DotVisitor.h>
#include <com/sun/tools/javac/util/GraphUtils$DottableNode.h>
#include <com/sun/tools/javac/util/GraphUtils$NodeVisitor.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/lang/Enum.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/EnumMap.h>
#include <java/util/List.h>
#include <java/util/Properties.h>
#include <jcpp.h>

using $Dependencies$CompletionCauseArray = $Array<::com::sun::tools::javac::util::Dependencies$CompletionCause>;
using $GraphUtils$DependencyKindArray = $Array<::com::sun::tools::javac::util::GraphUtils$DependencyKind>;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Dependencies = ::com::sun::tools::javac::util::Dependencies;
using $Dependencies$CompletionCause = ::com::sun::tools::javac::util::Dependencies$CompletionCause;
using $Dependencies$GraphDependencies = ::com::sun::tools::javac::util::Dependencies$GraphDependencies;
using $GraphUtils$AbstractNode = ::com::sun::tools::javac::util::GraphUtils$AbstractNode;
using $GraphUtils$DependencyKind = ::com::sun::tools::javac::util::GraphUtils$DependencyKind;
using $GraphUtils$DotVisitor = ::com::sun::tools::javac::util::GraphUtils$DotVisitor;
using $GraphUtils$DottableNode = ::com::sun::tools::javac::util::GraphUtils$DottableNode;
using $GraphUtils$NodeVisitor = ::com::sun::tools::javac::util::GraphUtils$NodeVisitor;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $EnumMap = ::java::util::EnumMap;
using $List = ::java::util::List;
using $Properties = ::java::util::Properties;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _Dependencies$GraphDependencies$Node_FieldInfo_[] = {
	{"depsByKind", "Ljava/util/EnumMap;", "Ljava/util/EnumMap<Lcom/sun/tools/javac/util/Dependencies$CompletionCause;Ljava/util/List<Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$Node;>;>;", 0, $field(Dependencies$GraphDependencies$Node, depsByKind)},
	{}
};

$MethodInfo _Dependencies$GraphDependencies$Node_MethodInfo_[] = {
	{"*accept", "(Lcom/sun/tools/javac/util/GraphUtils$NodeVisitor;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, 0, $method(static_cast<void(Dependencies$GraphDependencies$Node::*)($Symbol$ClassSymbol*)>(&Dependencies$GraphDependencies$Node::init$))},
	{"addDependency", "(Lcom/sun/tools/javac/util/GraphUtils$DependencyKind;Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$Node;)V", nullptr, 0},
	{"dependencyAttributes", "(Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$Node;Lcom/sun/tools/javac/util/GraphUtils$DependencyKind;)Ljava/util/Properties;", nullptr, $PUBLIC},
	{"dependencyAttributes", "(Lcom/sun/tools/javac/util/GraphUtils$DottableNode;Lcom/sun/tools/javac/util/GraphUtils$DependencyKind;)Ljava/util/Properties;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getDependenciesByKind", "(Lcom/sun/tools/javac/util/GraphUtils$DependencyKind;)Ljava/util/Collection;", "(Lcom/sun/tools/javac/util/GraphUtils$DependencyKind;)Ljava/util/Collection<+Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$Node;>;", $PUBLIC},
	{"getSupportedDependencyKinds", "()[Lcom/sun/tools/javac/util/GraphUtils$DependencyKind;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"nodeAttributes", "()Ljava/util/Properties;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Dependencies$GraphDependencies$Node_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.Dependencies$GraphDependencies", "com.sun.tools.javac.util.Dependencies", "GraphDependencies", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.util.Dependencies$GraphDependencies$Node", "com.sun.tools.javac.util.Dependencies$GraphDependencies", "Node", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.util.GraphUtils$AbstractNode", "com.sun.tools.javac.util.GraphUtils", "AbstractNode", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.util.GraphUtils$DottableNode", "com.sun.tools.javac.util.GraphUtils", "DottableNode", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.code.Symbol$ClassSymbol", "com.sun.tools.javac.code.Symbol", "ClassSymbol", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Dependencies$GraphDependencies$Node_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.util.Dependencies$GraphDependencies$Node",
	"com.sun.tools.javac.util.GraphUtils$AbstractNode",
	"com.sun.tools.javac.util.GraphUtils$DottableNode",
	_Dependencies$GraphDependencies$Node_FieldInfo_,
	_Dependencies$GraphDependencies$Node_MethodInfo_,
	"Lcom/sun/tools/javac/util/GraphUtils$AbstractNode<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$Node;>;Lcom/sun/tools/javac/util/GraphUtils$DottableNode<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$Node;>;",
	nullptr,
	_Dependencies$GraphDependencies$Node_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.Dependencies"
};

$Object* allocate$Dependencies$GraphDependencies$Node($Class* clazz) {
	return $of($alloc(Dependencies$GraphDependencies$Node));
}

void Dependencies$GraphDependencies$Node::accept($GraphUtils$NodeVisitor* visitor, Object$* arg) {
	this->$GraphUtils$AbstractNode::accept(visitor, arg);
}

$Object* Dependencies$GraphDependencies$Node::clone() {
	 return this->$GraphUtils$AbstractNode::clone();
}

void Dependencies$GraphDependencies$Node::finalize() {
	this->$GraphUtils$AbstractNode::finalize();
}

void Dependencies$GraphDependencies$Node::init$($Symbol$ClassSymbol* value) {
	$useLocalCurrentObjectStackCache();
	$GraphUtils$AbstractNode::init$(value);
	$load($Dependencies$CompletionCause);
	$set(this, depsByKind, $new($EnumMap, $Dependencies$CompletionCause::class$));
	{
		$var($Dependencies$CompletionCauseArray, arr$, $Dependencies$CompletionCause::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Dependencies$CompletionCause* depKind = arr$->get(i$);
			{
				$nc(this->depsByKind)->put(static_cast<$Enum*>(depKind), $of($$new($ArrayList)));
			}
		}
	}
}

void Dependencies$GraphDependencies$Node::addDependency($GraphUtils$DependencyKind* depKind, Dependencies$GraphDependencies$Node* dep) {
	$var($List, deps, $cast($List, $nc(this->depsByKind)->get(depKind)));
	if (!$nc(deps)->contains(dep)) {
		deps->add(dep);
	}
}

bool Dependencies$GraphDependencies$Node::equals(Object$* obj) {
	$var(Dependencies$GraphDependencies$Node, node, nullptr);
	bool var$1 = $instanceOf(Dependencies$GraphDependencies$Node, obj);
	if (var$1) {
		$assign(node, $cast(Dependencies$GraphDependencies$Node, obj));
		var$1 = true;
	}
	bool var$0 = var$1;
	return var$0 && $nc($of(($cast($Symbol$ClassSymbol, this->data))))->equals($nc(node)->data);
}

int32_t Dependencies$GraphDependencies$Node::hashCode() {
	return $nc($of(($cast($Symbol$ClassSymbol, this->data))))->hashCode();
}

$GraphUtils$DependencyKindArray* Dependencies$GraphDependencies$Node::getSupportedDependencyKinds() {
	return $fcast($GraphUtils$DependencyKindArray, $Dependencies$CompletionCause::values());
}

$Collection* Dependencies$GraphDependencies$Node::getDependenciesByKind($GraphUtils$DependencyKind* dk) {
	return $cast($Collection, $nc(this->depsByKind)->get(dk));
}

$Properties* Dependencies$GraphDependencies$Node::nodeAttributes() {
	$useLocalCurrentObjectStackCache();
	$var($Properties, p, $new($Properties));
	p->put("label"_s, $($GraphUtils$DotVisitor::wrap($(toString()))));
	return p;
}

$Properties* Dependencies$GraphDependencies$Node::dependencyAttributes(Dependencies$GraphDependencies$Node* to, $GraphUtils$DependencyKind* dk) {
	$var($Properties, p, $new($Properties));
	p->put("label"_s, dk);
	return p;
}

$String* Dependencies$GraphDependencies$Node::toString() {
	return $nc($($nc(($cast($Symbol$ClassSymbol, this->data)))->getQualifiedName()))->toString();
}

$Properties* Dependencies$GraphDependencies$Node::dependencyAttributes($GraphUtils$DottableNode* to, $GraphUtils$DependencyKind* dk) {
	return this->dependencyAttributes($cast(Dependencies$GraphDependencies$Node, to), dk);
}

Dependencies$GraphDependencies$Node::Dependencies$GraphDependencies$Node() {
}

$Class* Dependencies$GraphDependencies$Node::load$($String* name, bool initialize) {
	$loadClass(Dependencies$GraphDependencies$Node, name, initialize, &_Dependencies$GraphDependencies$Node_ClassInfo_, allocate$Dependencies$GraphDependencies$Node);
	return class$;
}

$Class* Dependencies$GraphDependencies$Node::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com