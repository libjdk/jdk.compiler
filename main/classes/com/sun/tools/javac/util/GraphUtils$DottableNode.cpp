#include <com/sun/tools/javac/util/GraphUtils$DottableNode.h>

#include <com/sun/tools/javac/util/GraphUtils$DependencyKind.h>
#include <com/sun/tools/javac/util/GraphUtils.h>
#include <java/util/Properties.h>
#include <jcpp.h>

using $GraphUtils = ::com::sun::tools::javac::util::GraphUtils;
using $GraphUtils$DependencyKind = ::com::sun::tools::javac::util::GraphUtils$DependencyKind;
using $GraphUtils$Node = ::com::sun::tools::javac::util::GraphUtils$Node;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Properties = ::java::util::Properties;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$MethodInfo _GraphUtils$DottableNode_MethodInfo_[] = {
	{"dependencyAttributes", "(Lcom/sun/tools/javac/util/GraphUtils$DottableNode;Lcom/sun/tools/javac/util/GraphUtils$DependencyKind;)Ljava/util/Properties;", "(TN;Lcom/sun/tools/javac/util/GraphUtils$DependencyKind;)Ljava/util/Properties;", $PUBLIC | $ABSTRACT},
	{"nodeAttributes", "()Ljava/util/Properties;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _GraphUtils$DottableNode_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.GraphUtils$DottableNode", "com.sun.tools.javac.util.GraphUtils", "DottableNode", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.util.GraphUtils$Node", "com.sun.tools.javac.util.GraphUtils", "Node", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _GraphUtils$DottableNode_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.util.GraphUtils$DottableNode",
	nullptr,
	"com.sun.tools.javac.util.GraphUtils$Node",
	nullptr,
	_GraphUtils$DottableNode_MethodInfo_,
	"<D:Ljava/lang/Object;N::Lcom/sun/tools/javac/util/GraphUtils$DottableNode<TD;TN;>;>Ljava/lang/Object;Lcom/sun/tools/javac/util/GraphUtils$Node<TD;TN;>;",
	nullptr,
	_GraphUtils$DottableNode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.GraphUtils"
};

$Object* allocate$GraphUtils$DottableNode($Class* clazz) {
	return $of($alloc(GraphUtils$DottableNode));
}

$Class* GraphUtils$DottableNode::load$($String* name, bool initialize) {
	$loadClass(GraphUtils$DottableNode, name, initialize, &_GraphUtils$DottableNode_ClassInfo_, allocate$GraphUtils$DottableNode);
	return class$;
}

$Class* GraphUtils$DottableNode::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com