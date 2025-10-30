#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext$StuckNode.h>

#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrNode.h>
#include <com/sun/tools/javac/comp/Infer$DependencyKind.h>
#include <com/sun/tools/javac/util/GraphUtils$DependencyKind.h>
#include <com/sun/tools/javac/util/GraphUtils$TarjanNode.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Iterable.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef STUCK

using $GraphUtils$DependencyKindArray = $Array<::com::sun::tools::javac::util::GraphUtils$DependencyKind>;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $DeferredAttr$DeferredAttrNode = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrNode;
using $Infer$DependencyKind = ::com::sun::tools::javac::comp::Infer$DependencyKind;
using $GraphUtils$DependencyKind = ::com::sun::tools::javac::util::GraphUtils$DependencyKind;
using $GraphUtils$TarjanNode = ::com::sun::tools::javac::util::GraphUtils$TarjanNode;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _DeferredAttr$DeferredAttrContext$StuckNode_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;", nullptr, $FINAL | $SYNTHETIC, $field(DeferredAttr$DeferredAttrContext$StuckNode, this$1)},
	{"deps", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext$StuckNode;>;", 0, $field(DeferredAttr$DeferredAttrContext$StuckNode, deps)},
	{}
};

$MethodInfo _DeferredAttr$DeferredAttrContext$StuckNode_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrNode;)V", nullptr, 0, $method(static_cast<void(DeferredAttr$DeferredAttrContext$StuckNode::*)($DeferredAttr$DeferredAttrContext*,$DeferredAttr$DeferredAttrNode*)>(&DeferredAttr$DeferredAttrContext$StuckNode::init$))},
	{"getAllDependencies", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<+Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext$StuckNode;>;", $PUBLIC},
	{"getDependenciesByKind", "(Lcom/sun/tools/javac/util/GraphUtils$DependencyKind;)Ljava/util/Collection;", "(Lcom/sun/tools/javac/util/GraphUtils$DependencyKind;)Ljava/util/Collection<+Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext$StuckNode;>;", $PUBLIC},
	{"getSupportedDependencyKinds", "()[Lcom/sun/tools/javac/util/GraphUtils$DependencyKind;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DeferredAttr$DeferredAttrContext$StuckNode_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrContext", "com.sun.tools.javac.comp.DeferredAttr", "DeferredAttrContext", 0},
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrContext$StuckNode", "com.sun.tools.javac.comp.DeferredAttr$DeferredAttrContext", "StuckNode", 0},
	{"com.sun.tools.javac.util.GraphUtils$TarjanNode", "com.sun.tools.javac.util.GraphUtils", "TarjanNode", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode", "com.sun.tools.javac.comp.DeferredAttr", "DeferredAttrNode", 0},
	{}
};

$ClassInfo _DeferredAttr$DeferredAttrContext$StuckNode_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrContext$StuckNode",
	"com.sun.tools.javac.util.GraphUtils$TarjanNode",
	nullptr,
	_DeferredAttr$DeferredAttrContext$StuckNode_FieldInfo_,
	_DeferredAttr$DeferredAttrContext$StuckNode_MethodInfo_,
	"Lcom/sun/tools/javac/util/GraphUtils$TarjanNode<Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrNode;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext$StuckNode;>;",
	nullptr,
	_DeferredAttr$DeferredAttrContext$StuckNode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.DeferredAttr"
};

$Object* allocate$DeferredAttr$DeferredAttrContext$StuckNode($Class* clazz) {
	return $of($alloc(DeferredAttr$DeferredAttrContext$StuckNode));
}

void DeferredAttr$DeferredAttrContext$StuckNode::init$($DeferredAttr$DeferredAttrContext* this$1, $DeferredAttr$DeferredAttrNode* data) {
	$set(this, this$1, this$1);
	$GraphUtils$TarjanNode::init$(data);
	$set(this, deps, $new($HashSet));
}

$GraphUtils$DependencyKindArray* DeferredAttr$DeferredAttrContext$StuckNode::getSupportedDependencyKinds() {
	$init($Infer$DependencyKind);
	return $new($GraphUtils$DependencyKindArray, {static_cast<$GraphUtils$DependencyKind*>($Infer$DependencyKind::STUCK)});
}

$Collection* DeferredAttr$DeferredAttrContext$StuckNode::getDependenciesByKind($GraphUtils$DependencyKind* dk) {
	$init($Infer$DependencyKind);
	if ($equals(dk, $Infer$DependencyKind::STUCK)) {
		return this->deps;
	} else {
		$throwNew($IllegalStateException);
	}
}

$Iterable* DeferredAttr$DeferredAttrContext$StuckNode::getAllDependencies() {
	return this->deps;
}

DeferredAttr$DeferredAttrContext$StuckNode::DeferredAttr$DeferredAttrContext$StuckNode() {
}

$Class* DeferredAttr$DeferredAttrContext$StuckNode::load$($String* name, bool initialize) {
	$loadClass(DeferredAttr$DeferredAttrContext$StuckNode, name, initialize, &_DeferredAttr$DeferredAttrContext$StuckNode_ClassInfo_, allocate$DeferredAttr$DeferredAttrContext$StuckNode);
	return class$;
}

$Class* DeferredAttr$DeferredAttrContext$StuckNode::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com