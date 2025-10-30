#include <com/sun/tools/javac/util/GraphUtils$Tarjan.h>

#include <com/sun/tools/javac/util/GraphUtils$TarjanNode.h>
#include <com/sun/tools/javac/util/GraphUtils.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <java/lang/Iterable.h>
#include <java/lang/Math.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $GraphUtils = ::com::sun::tools::javac::util::GraphUtils;
using $GraphUtils$TarjanNode = ::com::sun::tools::javac::util::GraphUtils$TarjanNode;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractQueue = ::java::util::AbstractQueue;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _GraphUtils$Tarjan_FieldInfo_[] = {
	{"index", "I", nullptr, 0, $field(GraphUtils$Tarjan, index)},
	{"sccs", "Lcom/sun/tools/javac/util/ListBuffer;", "Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/util/List<TN;>;>;", 0, $field(GraphUtils$Tarjan, sccs)},
	{"stack", "Lcom/sun/tools/javac/util/ListBuffer;", "Lcom/sun/tools/javac/util/ListBuffer<TN;>;", 0, $field(GraphUtils$Tarjan, stack)},
	{}
};

$MethodInfo _GraphUtils$Tarjan_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(GraphUtils$Tarjan::*)()>(&GraphUtils$Tarjan::init$))},
	{"addSCC", "(Lcom/sun/tools/javac/util/GraphUtils$TarjanNode;)V", "(TN;)V", $PRIVATE, $method(static_cast<void(GraphUtils$Tarjan::*)($GraphUtils$TarjanNode*)>(&GraphUtils$Tarjan::addSCC))},
	{"findSCC", "(Ljava/lang/Iterable;)Lcom/sun/tools/javac/util/List;", "(Ljava/lang/Iterable<+TN;>;)Lcom/sun/tools/javac/util/List<+Lcom/sun/tools/javac/util/List<+TN;>;>;", $PRIVATE, $method(static_cast<$List*(GraphUtils$Tarjan::*)($Iterable*)>(&GraphUtils$Tarjan::findSCC))},
	{"findSCC", "(Lcom/sun/tools/javac/util/GraphUtils$TarjanNode;)V", "(TN;)V", $PRIVATE, $method(static_cast<void(GraphUtils$Tarjan::*)($GraphUtils$TarjanNode*)>(&GraphUtils$Tarjan::findSCC))},
	{"visitNode", "(Lcom/sun/tools/javac/util/GraphUtils$TarjanNode;)V", "(TN;)V", $PRIVATE, $method(static_cast<void(GraphUtils$Tarjan::*)($GraphUtils$TarjanNode*)>(&GraphUtils$Tarjan::visitNode))},
	{}
};

$InnerClassInfo _GraphUtils$Tarjan_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.GraphUtils$Tarjan", "com.sun.tools.javac.util.GraphUtils", "Tarjan", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.util.GraphUtils$TarjanNode", "com.sun.tools.javac.util.GraphUtils", "TarjanNode", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _GraphUtils$Tarjan_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.util.GraphUtils$Tarjan",
	"java.lang.Object",
	nullptr,
	_GraphUtils$Tarjan_FieldInfo_,
	_GraphUtils$Tarjan_MethodInfo_,
	"<D:Ljava/lang/Object;N:Lcom/sun/tools/javac/util/GraphUtils$TarjanNode<TD;TN;>;>Ljava/lang/Object;",
	nullptr,
	_GraphUtils$Tarjan_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.GraphUtils"
};

$Object* allocate$GraphUtils$Tarjan($Class* clazz) {
	return $of($alloc(GraphUtils$Tarjan));
}

void GraphUtils$Tarjan::init$() {
	this->index = 0;
	$set(this, sccs, $new($ListBuffer));
	$set(this, stack, $new($ListBuffer));
}

$List* GraphUtils$Tarjan::findSCC($Iterable* nodes) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(nodes)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($GraphUtils$TarjanNode, node, $cast($GraphUtils$TarjanNode, i$->next()));
			{
				if ($nc(node)->index == -1) {
					findSCC(node);
				}
			}
		}
	}
	return $nc(this->sccs)->toList();
}

void GraphUtils$Tarjan::findSCC($GraphUtils$TarjanNode* v) {
	$useLocalCurrentObjectStackCache();
	visitNode(v);
	{
		$var($Iterator, i$, $nc($($nc(v)->getAllDependencies()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($GraphUtils$TarjanNode, n, $cast($GraphUtils$TarjanNode, i$->next()));
			{
				if ($nc(n)->index == -1) {
					findSCC(n);
					v->lowlink = $Math::min(v->lowlink, n->lowlink);
				} else if ($nc(this->stack)->contains(n)) {
					v->lowlink = $Math::min(v->lowlink, n->index);
				}
			}
		}
	}
	if (v->lowlink == v->index) {
		addSCC(v);
	}
}

void GraphUtils$Tarjan::visitNode($GraphUtils$TarjanNode* n) {
	$nc(n)->index = this->index;
	n->lowlink = this->index;
	++this->index;
	$nc(this->stack)->prepend(n);
	n->active = true;
}

void GraphUtils$Tarjan::addSCC($GraphUtils$TarjanNode* v) {
	$useLocalCurrentObjectStackCache();
	$var($GraphUtils$TarjanNode, n, nullptr);
	$var($ListBuffer, cycle, $new($ListBuffer));
	do {
		$assign(n, $cast($GraphUtils$TarjanNode, $nc(this->stack)->remove()));
		$nc(n)->active = false;
		cycle->add(n);
	} while (n != v);
	$nc(this->sccs)->add($(cycle->toList()));
}

GraphUtils$Tarjan::GraphUtils$Tarjan() {
}

$Class* GraphUtils$Tarjan::load$($String* name, bool initialize) {
	$loadClass(GraphUtils$Tarjan, name, initialize, &_GraphUtils$Tarjan_ClassInfo_, allocate$GraphUtils$Tarjan);
	return class$;
}

$Class* GraphUtils$Tarjan::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com