#include <com/sun/tools/javac/util/GraphUtils$DotVisitor.h>

#include <com/sun/tools/javac/util/GraphUtils$DependencyKind.h>
#include <com/sun/tools/javac/util/GraphUtils$DottableNode.h>
#include <com/sun/tools/javac/util/GraphUtils$Node.h>
#include <com/sun/tools/javac/util/GraphUtils$NodeVisitor.h>
#include <com/sun/tools/javac/util/GraphUtils.h>
#include <java/util/Collection.h>
#include <java/util/Properties.h>
#include <jcpp.h>

using $GraphUtils = ::com::sun::tools::javac::util::GraphUtils;
using $GraphUtils$DependencyKind = ::com::sun::tools::javac::util::GraphUtils$DependencyKind;
using $GraphUtils$DottableNode = ::com::sun::tools::javac::util::GraphUtils$DottableNode;
using $GraphUtils$Node = ::com::sun::tools::javac::util::GraphUtils$Node;
using $GraphUtils$NodeVisitor = ::com::sun::tools::javac::util::GraphUtils$NodeVisitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $Properties = ::java::util::Properties;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$MethodInfo _GraphUtils$DotVisitor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GraphUtils$DotVisitor::*)()>(&GraphUtils$DotVisitor::init$))},
	{"formatProperties", "(Ljava/util/Properties;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"visit", "(Ljava/util/Collection;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitDependency", "(Lcom/sun/tools/javac/util/GraphUtils$DependencyKind;Lcom/sun/tools/javac/util/GraphUtils$DottableNode;Lcom/sun/tools/javac/util/GraphUtils$DottableNode;Ljava/lang/StringBuilder;)V", "(Lcom/sun/tools/javac/util/GraphUtils$DependencyKind;TN;TN;Ljava/lang/StringBuilder;)V", $PUBLIC},
	{"visitDependency", "(Lcom/sun/tools/javac/util/GraphUtils$DependencyKind;Lcom/sun/tools/javac/util/GraphUtils$Node;Lcom/sun/tools/javac/util/GraphUtils$Node;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitNode", "(Lcom/sun/tools/javac/util/GraphUtils$DottableNode;Ljava/lang/StringBuilder;)V", "(TN;Ljava/lang/StringBuilder;)V", $PUBLIC},
	{"visitNode", "(Lcom/sun/tools/javac/util/GraphUtils$Node;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"wrap", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$String*(*)($String*)>(&GraphUtils$DotVisitor::wrap))},
	{}
};

$InnerClassInfo _GraphUtils$DotVisitor_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.GraphUtils$DotVisitor", "com.sun.tools.javac.util.GraphUtils", "DotVisitor", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.util.GraphUtils$NodeVisitor", "com.sun.tools.javac.util.GraphUtils", "NodeVisitor", $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.util.GraphUtils$DottableNode", "com.sun.tools.javac.util.GraphUtils", "DottableNode", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _GraphUtils$DotVisitor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.GraphUtils$DotVisitor",
	"com.sun.tools.javac.util.GraphUtils$NodeVisitor",
	nullptr,
	nullptr,
	_GraphUtils$DotVisitor_MethodInfo_,
	"<D:Ljava/lang/Object;N::Lcom/sun/tools/javac/util/GraphUtils$DottableNode<TD;TN;>;>Lcom/sun/tools/javac/util/GraphUtils$NodeVisitor<TD;TN;Ljava/lang/StringBuilder;>;",
	nullptr,
	_GraphUtils$DotVisitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.GraphUtils"
};

$Object* allocate$GraphUtils$DotVisitor($Class* clazz) {
	return $of($alloc(GraphUtils$DotVisitor));
}

void GraphUtils$DotVisitor::init$() {
	$GraphUtils$NodeVisitor::init$();
}

void GraphUtils$DotVisitor::visitDependency($GraphUtils$DependencyKind* dk, $GraphUtils$DottableNode* from, $GraphUtils$DottableNode* to, $StringBuilder* buf) {
	$useLocalCurrentObjectStackCache();
	$nc(buf)->append($($String::format("%s -> %s"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf($nc($of(from))->hashCode()))),
		$($of($Integer::valueOf($nc($of(to))->hashCode())))
	}))));
	buf->append($(formatProperties($($nc(from)->dependencyAttributes(to, dk)))));
	buf->append(u'\n');
}

void GraphUtils$DotVisitor::visitNode($GraphUtils$DottableNode* node, $StringBuilder* buf) {
	$useLocalCurrentObjectStackCache();
	$nc(buf)->append($($String::format("%s "_s, $$new($ObjectArray, {$($of($Integer::valueOf($nc($of(node))->hashCode())))}))));
	buf->append($(formatProperties($($nc(node)->nodeAttributes()))));
	buf->append(u'\n');
}

$String* GraphUtils$DotVisitor::formatProperties($Properties* p) {
	$useLocalCurrentObjectStackCache();
	return $($($nc($($nc(p)->toString()))->replaceAll(","_s, " "_s))->replaceAll("\\{"_s, "["_s))->replaceAll("\\}"_s, "]"_s);
}

$String* GraphUtils$DotVisitor::wrap($String* s) {
	$init(GraphUtils$DotVisitor);
	$var($String, res, $str({"\""_s, s, "\""_s}));
	return $nc(res)->replaceAll("\n"_s, ""_s);
}

void GraphUtils$DotVisitor::visit($Collection* nodes, Object$* arg) {
	$GraphUtils$NodeVisitor::visit(nodes, arg);
}

void GraphUtils$DotVisitor::visitDependency($GraphUtils$DependencyKind* dk, $GraphUtils$Node* from, $GraphUtils$Node* to, Object$* buf) {
	this->visitDependency(dk, $cast($GraphUtils$DottableNode, from), $cast($GraphUtils$DottableNode, to), $cast($StringBuilder, buf));
}

void GraphUtils$DotVisitor::visitNode($GraphUtils$Node* node, Object$* buf) {
	this->visitNode($cast($GraphUtils$DottableNode, node), $cast($StringBuilder, buf));
}

GraphUtils$DotVisitor::GraphUtils$DotVisitor() {
}

$Class* GraphUtils$DotVisitor::load$($String* name, bool initialize) {
	$loadClass(GraphUtils$DotVisitor, name, initialize, &_GraphUtils$DotVisitor_ClassInfo_, allocate$GraphUtils$DotVisitor);
	return class$;
}

$Class* GraphUtils$DotVisitor::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com