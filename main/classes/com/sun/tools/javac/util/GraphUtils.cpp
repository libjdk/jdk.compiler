#include <com/sun/tools/javac/util/GraphUtils.h>

#include <com/sun/tools/javac/util/GraphUtils$DotVisitor.h>
#include <com/sun/tools/javac/util/GraphUtils$Tarjan.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/lang/Iterable.h>
#include <java/util/Collection.h>
#include <jcpp.h>

using $GraphUtils$DotVisitor = ::com::sun::tools::javac::util::GraphUtils$DotVisitor;
using $GraphUtils$NodeVisitor = ::com::sun::tools::javac::util::GraphUtils$NodeVisitor;
using $GraphUtils$Tarjan = ::com::sun::tools::javac::util::GraphUtils$Tarjan;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$MethodInfo _GraphUtils_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GraphUtils::*)()>(&GraphUtils::init$))},
	{"tarjan", "(Ljava/lang/Iterable;)Lcom/sun/tools/javac/util/List;", "<D:Ljava/lang/Object;N:Lcom/sun/tools/javac/util/GraphUtils$TarjanNode<TD;TN;>;>(Ljava/lang/Iterable<+TN;>;)Lcom/sun/tools/javac/util/List<+Lcom/sun/tools/javac/util/List<+TN;>;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($Iterable*)>(&GraphUtils::tarjan))},
	{"toDot", "(Ljava/util/Collection;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", "<D:Ljava/lang/Object;N::Lcom/sun/tools/javac/util/GraphUtils$DottableNode<TD;TN;>;>(Ljava/util/Collection<+TN;>;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", $PUBLIC | $STATIC, $method(static_cast<$String*(*)($Collection*,$String*,$String*)>(&GraphUtils::toDot))},
	{}
};

$InnerClassInfo _GraphUtils_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.GraphUtils$DotVisitor", "com.sun.tools.javac.util.GraphUtils", "DotVisitor", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.util.GraphUtils$Tarjan", "com.sun.tools.javac.util.GraphUtils", "Tarjan", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.util.GraphUtils$TarjanNode", "com.sun.tools.javac.util.GraphUtils", "TarjanNode", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.util.GraphUtils$AbstractNode", "com.sun.tools.javac.util.GraphUtils", "AbstractNode", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.util.GraphUtils$DottableNode", "com.sun.tools.javac.util.GraphUtils", "DottableNode", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.util.GraphUtils$NodeVisitor", "com.sun.tools.javac.util.GraphUtils", "NodeVisitor", $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.util.GraphUtils$Node", "com.sun.tools.javac.util.GraphUtils", "Node", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.util.GraphUtils$DependencyKind", "com.sun.tools.javac.util.GraphUtils", "DependencyKind", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _GraphUtils_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.GraphUtils",
	"java.lang.Object",
	nullptr,
	nullptr,
	_GraphUtils_MethodInfo_,
	nullptr,
	nullptr,
	_GraphUtils_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.GraphUtils$DotVisitor,com.sun.tools.javac.util.GraphUtils$Tarjan,com.sun.tools.javac.util.GraphUtils$TarjanNode,com.sun.tools.javac.util.GraphUtils$AbstractNode,com.sun.tools.javac.util.GraphUtils$DottableNode,com.sun.tools.javac.util.GraphUtils$NodeVisitor,com.sun.tools.javac.util.GraphUtils$Node,com.sun.tools.javac.util.GraphUtils$DependencyKind"
};

$Object* allocate$GraphUtils($Class* clazz) {
	return $of($alloc(GraphUtils));
}

void GraphUtils::init$() {
}

$List* GraphUtils::tarjan($Iterable* nodes) {
	$var($GraphUtils$Tarjan, tarjan, $new($GraphUtils$Tarjan));
	return tarjan->findSCC(nodes);
}

$String* GraphUtils::toDot($Collection* nodes, $String* name, $String* header) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	buf->append($($String::format("digraph %s {\n"_s, $$new($ObjectArray, {$of(name)}))));
	buf->append($($String::format("label = %s;\n"_s, $$new($ObjectArray, {$($of($GraphUtils$DotVisitor::wrap(header)))}))));
	$var($GraphUtils$DotVisitor, dotVisitor, $new($GraphUtils$DotVisitor));
	dotVisitor->visit(nodes, buf);
	buf->append("}\n"_s);
	return buf->toString();
}

GraphUtils::GraphUtils() {
}

$Class* GraphUtils::load$($String* name, bool initialize) {
	$loadClass(GraphUtils, name, initialize, &_GraphUtils_ClassInfo_, allocate$GraphUtils);
	return class$;
}

$Class* GraphUtils::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com