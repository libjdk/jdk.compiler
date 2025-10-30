#include <com/sun/tools/javac/util/GraphUtils$AbstractNode.h>

#include <com/sun/tools/javac/util/GraphUtils$DependencyKind.h>
#include <com/sun/tools/javac/util/GraphUtils$Node.h>
#include <com/sun/tools/javac/util/GraphUtils$NodeVisitor.h>
#include <com/sun/tools/javac/util/GraphUtils.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $GraphUtils$DependencyKindArray = $Array<::com::sun::tools::javac::util::GraphUtils$DependencyKind>;
using $GraphUtils = ::com::sun::tools::javac::util::GraphUtils;
using $GraphUtils$DependencyKind = ::com::sun::tools::javac::util::GraphUtils$DependencyKind;
using $GraphUtils$Node = ::com::sun::tools::javac::util::GraphUtils$Node;
using $GraphUtils$NodeVisitor = ::com::sun::tools::javac::util::GraphUtils$NodeVisitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _GraphUtils$AbstractNode_FieldInfo_[] = {
	{"data", "Ljava/lang/Object;", "TD;", $PUBLIC | $FINAL, $field(GraphUtils$AbstractNode, data)},
	{}
};

$MethodInfo _GraphUtils$AbstractNode_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", "(TD;)V", $PUBLIC, $method(static_cast<void(GraphUtils$AbstractNode::*)(Object$*)>(&GraphUtils$AbstractNode::init$))},
	{"accept", "(Lcom/sun/tools/javac/util/GraphUtils$NodeVisitor;Ljava/lang/Object;)V", "<A:Ljava/lang/Object;>(Lcom/sun/tools/javac/util/GraphUtils$NodeVisitor<TD;TN;TA;>;TA;)V", $PUBLIC},
	{"getDependenciesByKind", "(Lcom/sun/tools/javac/util/GraphUtils$DependencyKind;)Ljava/util/Collection;", "(Lcom/sun/tools/javac/util/GraphUtils$DependencyKind;)Ljava/util/Collection<+TN;>;", $PUBLIC | $ABSTRACT},
	{"getSupportedDependencyKinds", "()[Lcom/sun/tools/javac/util/GraphUtils$DependencyKind;", nullptr, $PUBLIC | $ABSTRACT},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GraphUtils$AbstractNode_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.GraphUtils$AbstractNode", "com.sun.tools.javac.util.GraphUtils", "AbstractNode", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.util.GraphUtils$Node", "com.sun.tools.javac.util.GraphUtils", "Node", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _GraphUtils$AbstractNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.util.GraphUtils$AbstractNode",
	"java.lang.Object",
	"com.sun.tools.javac.util.GraphUtils$Node",
	_GraphUtils$AbstractNode_FieldInfo_,
	_GraphUtils$AbstractNode_MethodInfo_,
	"<D:Ljava/lang/Object;N:Lcom/sun/tools/javac/util/GraphUtils$AbstractNode<TD;TN;>;>Ljava/lang/Object;Lcom/sun/tools/javac/util/GraphUtils$Node<TD;TN;>;",
	nullptr,
	_GraphUtils$AbstractNode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.GraphUtils"
};

$Object* allocate$GraphUtils$AbstractNode($Class* clazz) {
	return $of($alloc(GraphUtils$AbstractNode));
}

void GraphUtils$AbstractNode::init$(Object$* data) {
	$set(this, data, data);
}

$String* GraphUtils$AbstractNode::toString() {
	return $nc($of(this->data))->toString();
}

void GraphUtils$AbstractNode::accept($GraphUtils$NodeVisitor* visitor, Object$* arg) {
	$useLocalCurrentObjectStackCache();
	$nc(visitor)->visitNode(this, arg);
	{
		$var($GraphUtils$DependencyKindArray, arr$, getSupportedDependencyKinds());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($GraphUtils$DependencyKind, dk, arr$->get(i$));
			{
				{
					$var($Iterator, i$, $$new($ArrayList, $(getDependenciesByKind(dk)))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var(GraphUtils$AbstractNode, dep, $cast(GraphUtils$AbstractNode, i$->next()));
						{
							visitor->visitDependency(dk, this, dep, arg);
						}
					}
				}
			}
		}
	}
}

GraphUtils$AbstractNode::GraphUtils$AbstractNode() {
}

$Class* GraphUtils$AbstractNode::load$($String* name, bool initialize) {
	$loadClass(GraphUtils$AbstractNode, name, initialize, &_GraphUtils$AbstractNode_ClassInfo_, allocate$GraphUtils$AbstractNode);
	return class$;
}

$Class* GraphUtils$AbstractNode::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com