#include <com/sun/tools/javac/util/GraphUtils$NodeVisitor.h>

#include <com/sun/tools/javac/util/GraphUtils$DependencyKind.h>
#include <com/sun/tools/javac/util/GraphUtils$Node.h>
#include <com/sun/tools/javac/util/GraphUtils.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $GraphUtils = ::com::sun::tools::javac::util::GraphUtils;
using $GraphUtils$DependencyKind = ::com::sun::tools::javac::util::GraphUtils$DependencyKind;
using $GraphUtils$Node = ::com::sun::tools::javac::util::GraphUtils$Node;
using $ClassInfo = ::java::lang::ClassInfo;
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

$MethodInfo _GraphUtils$NodeVisitor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(GraphUtils$NodeVisitor::*)()>(&GraphUtils$NodeVisitor::init$))},
	{"visit", "(Ljava/util/Collection;Ljava/lang/Object;)V", "(Ljava/util/Collection<+TN;>;TA;)V", $PUBLIC},
	{"visitDependency", "(Lcom/sun/tools/javac/util/GraphUtils$DependencyKind;Lcom/sun/tools/javac/util/GraphUtils$Node;Lcom/sun/tools/javac/util/GraphUtils$Node;Ljava/lang/Object;)V", "(Lcom/sun/tools/javac/util/GraphUtils$DependencyKind;TN;TN;TA;)V", $PUBLIC | $ABSTRACT},
	{"visitNode", "(Lcom/sun/tools/javac/util/GraphUtils$Node;Ljava/lang/Object;)V", "(TN;TA;)V", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _GraphUtils$NodeVisitor_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.GraphUtils$NodeVisitor", "com.sun.tools.javac.util.GraphUtils", "NodeVisitor", $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.util.GraphUtils$Node", "com.sun.tools.javac.util.GraphUtils", "Node", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _GraphUtils$NodeVisitor_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.util.GraphUtils$NodeVisitor",
	"java.lang.Object",
	nullptr,
	nullptr,
	_GraphUtils$NodeVisitor_MethodInfo_,
	"<D:Ljava/lang/Object;N::Lcom/sun/tools/javac/util/GraphUtils$Node<TD;TN;>;A:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_GraphUtils$NodeVisitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.GraphUtils"
};

$Object* allocate$GraphUtils$NodeVisitor($Class* clazz) {
	return $of($alloc(GraphUtils$NodeVisitor));
}

void GraphUtils$NodeVisitor::init$() {
}

void GraphUtils$NodeVisitor::visit($Collection* nodes, Object$* arg) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $$new($ArrayList, nodes)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($GraphUtils$Node, n, $cast($GraphUtils$Node, i$->next()));
			{
				$nc(n)->accept(this, arg);
			}
		}
	}
}

GraphUtils$NodeVisitor::GraphUtils$NodeVisitor() {
}

$Class* GraphUtils$NodeVisitor::load$($String* name, bool initialize) {
	$loadClass(GraphUtils$NodeVisitor, name, initialize, &_GraphUtils$NodeVisitor_ClassInfo_, allocate$GraphUtils$NodeVisitor);
	return class$;
}

$Class* GraphUtils$NodeVisitor::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com