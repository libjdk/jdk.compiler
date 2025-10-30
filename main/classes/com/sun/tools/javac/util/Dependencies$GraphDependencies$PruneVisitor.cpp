#include <com/sun/tools/javac/util/Dependencies$GraphDependencies$PruneVisitor.h>

#include <com/sun/tools/javac/util/Dependencies$GraphDependencies$Node.h>
#include <com/sun/tools/javac/util/Dependencies$GraphDependencies.h>
#include <com/sun/tools/javac/util/GraphUtils$DependencyKind.h>
#include <com/sun/tools/javac/util/GraphUtils$Node.h>
#include <com/sun/tools/javac/util/GraphUtils$NodeVisitor.h>
#include <java/util/EnumMap.h>
#include <java/util/List.h>
#include <jcpp.h>

using $Dependencies$GraphDependencies = ::com::sun::tools::javac::util::Dependencies$GraphDependencies;
using $Dependencies$GraphDependencies$Node = ::com::sun::tools::javac::util::Dependencies$GraphDependencies$Node;
using $GraphUtils$DependencyKind = ::com::sun::tools::javac::util::GraphUtils$DependencyKind;
using $GraphUtils$Node = ::com::sun::tools::javac::util::GraphUtils$Node;
using $GraphUtils$NodeVisitor = ::com::sun::tools::javac::util::GraphUtils$NodeVisitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $EnumMap = ::java::util::EnumMap;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$MethodInfo _Dependencies$GraphDependencies$PruneVisitor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Dependencies$GraphDependencies$PruneVisitor::*)()>(&Dependencies$GraphDependencies$PruneVisitor::init$))},
	{"visitDependency", "(Lcom/sun/tools/javac/util/GraphUtils$DependencyKind;Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$Node;Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$Node;Ljava/lang/Void;)V", nullptr, $PUBLIC},
	{"visitDependency", "(Lcom/sun/tools/javac/util/GraphUtils$DependencyKind;Lcom/sun/tools/javac/util/GraphUtils$Node;Lcom/sun/tools/javac/util/GraphUtils$Node;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitNode", "(Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$Node;Ljava/lang/Void;)V", nullptr, $PUBLIC},
	{"visitNode", "(Lcom/sun/tools/javac/util/GraphUtils$Node;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Dependencies$GraphDependencies$PruneVisitor_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.Dependencies$GraphDependencies", "com.sun.tools.javac.util.Dependencies", "GraphDependencies", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.util.Dependencies$GraphDependencies$PruneVisitor", "com.sun.tools.javac.util.Dependencies$GraphDependencies", "PruneVisitor", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.util.GraphUtils$NodeVisitor", "com.sun.tools.javac.util.GraphUtils", "NodeVisitor", $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.code.Symbol$ClassSymbol", "com.sun.tools.javac.code.Symbol", "ClassSymbol", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.util.Dependencies$GraphDependencies$Node", "com.sun.tools.javac.util.Dependencies$GraphDependencies", "Node", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Dependencies$GraphDependencies$PruneVisitor_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.util.Dependencies$GraphDependencies$PruneVisitor",
	"com.sun.tools.javac.util.GraphUtils$NodeVisitor",
	nullptr,
	nullptr,
	_Dependencies$GraphDependencies$PruneVisitor_MethodInfo_,
	"Lcom/sun/tools/javac/util/GraphUtils$NodeVisitor<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$Node;Ljava/lang/Void;>;",
	nullptr,
	_Dependencies$GraphDependencies$PruneVisitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.Dependencies"
};

$Object* allocate$Dependencies$GraphDependencies$PruneVisitor($Class* clazz) {
	return $of($alloc(Dependencies$GraphDependencies$PruneVisitor));
}

void Dependencies$GraphDependencies$PruneVisitor::init$() {
	$GraphUtils$NodeVisitor::init$();
}

void Dependencies$GraphDependencies$PruneVisitor::visitNode($Dependencies$GraphDependencies$Node* node, $Void* arg) {
}

void Dependencies$GraphDependencies$PruneVisitor::visitDependency($GraphUtils$DependencyKind* dk, $Dependencies$GraphDependencies$Node* from, $Dependencies$GraphDependencies$Node* to, $Void* arg) {
	if ($nc(from)->equals(to)) {
		$nc(($cast($List, $($nc($nc(to)->depsByKind)->get(dk)))))->remove($of(from));
	}
}

void Dependencies$GraphDependencies$PruneVisitor::visitDependency($GraphUtils$DependencyKind* dk, $GraphUtils$Node* from, $GraphUtils$Node* to, Object$* arg) {
	this->visitDependency(dk, $cast($Dependencies$GraphDependencies$Node, from), $cast($Dependencies$GraphDependencies$Node, to), $cast($Void, arg));
}

void Dependencies$GraphDependencies$PruneVisitor::visitNode($GraphUtils$Node* node, Object$* arg) {
	this->visitNode($cast($Dependencies$GraphDependencies$Node, node), $cast($Void, arg));
}

Dependencies$GraphDependencies$PruneVisitor::Dependencies$GraphDependencies$PruneVisitor() {
}

$Class* Dependencies$GraphDependencies$PruneVisitor::load$($String* name, bool initialize) {
	$loadClass(Dependencies$GraphDependencies$PruneVisitor, name, initialize, &_Dependencies$GraphDependencies$PruneVisitor_ClassInfo_, allocate$Dependencies$GraphDependencies$PruneVisitor);
	return class$;
}

$Class* Dependencies$GraphDependencies$PruneVisitor::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com