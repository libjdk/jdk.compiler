#include <com/sun/tools/javac/util/Dependencies$GraphDependencies$CompletionNode.h>

#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/util/Dependencies$GraphDependencies$CompletionNode$Kind.h>
#include <com/sun/tools/javac/util/Dependencies$GraphDependencies$Node.h>
#include <com/sun/tools/javac/util/Dependencies$GraphDependencies.h>
#include <com/sun/tools/javac/util/GraphUtils$AbstractNode.h>
#include <java/util/Properties.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef CLASS
#undef SOURCE

using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Dependencies$GraphDependencies = ::com::sun::tools::javac::util::Dependencies$GraphDependencies;
using $Dependencies$GraphDependencies$CompletionNode$Kind = ::com::sun::tools::javac::util::Dependencies$GraphDependencies$CompletionNode$Kind;
using $Dependencies$GraphDependencies$Node = ::com::sun::tools::javac::util::Dependencies$GraphDependencies$Node;
using $GraphUtils$AbstractNode = ::com::sun::tools::javac::util::GraphUtils$AbstractNode;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Properties = ::java::util::Properties;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _Dependencies$GraphDependencies$CompletionNode_FieldInfo_[] = {
	{"ck", "Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$CompletionNode$Kind;", nullptr, $FINAL, $field(Dependencies$GraphDependencies$CompletionNode, ck)},
	{}
};

$MethodInfo _Dependencies$GraphDependencies$CompletionNode_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, 0, $method(static_cast<void(Dependencies$GraphDependencies$CompletionNode::*)($Symbol$ClassSymbol*)>(&Dependencies$GraphDependencies$CompletionNode::init$))},
	{"getClassSymbol", "()Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC},
	{"nodeAttributes", "()Ljava/util/Properties;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Dependencies$GraphDependencies$CompletionNode_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.Dependencies$GraphDependencies", "com.sun.tools.javac.util.Dependencies", "GraphDependencies", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.util.Dependencies$GraphDependencies$CompletionNode", "com.sun.tools.javac.util.Dependencies$GraphDependencies", "CompletionNode", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.util.Dependencies$GraphDependencies$Node", "com.sun.tools.javac.util.Dependencies$GraphDependencies", "Node", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.util.Dependencies$GraphDependencies$CompletionNode$Kind", "com.sun.tools.javac.util.Dependencies$GraphDependencies$CompletionNode", "Kind", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Dependencies$GraphDependencies$CompletionNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.Dependencies$GraphDependencies$CompletionNode",
	"com.sun.tools.javac.util.Dependencies$GraphDependencies$Node",
	nullptr,
	_Dependencies$GraphDependencies$CompletionNode_FieldInfo_,
	_Dependencies$GraphDependencies$CompletionNode_MethodInfo_,
	nullptr,
	nullptr,
	_Dependencies$GraphDependencies$CompletionNode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.Dependencies"
};

$Object* allocate$Dependencies$GraphDependencies$CompletionNode($Class* clazz) {
	return $of($alloc(Dependencies$GraphDependencies$CompletionNode));
}

void Dependencies$GraphDependencies$CompletionNode::init$($Symbol$ClassSymbol* sym) {
	$Dependencies$GraphDependencies$Node::init$(sym);
	$init($JavaFileObject$Kind);
	bool fromClass = ($nc(sym)->classfile == nullptr && sym->sourcefile == nullptr) || ($nc(sym)->classfile != nullptr && $nc(sym->classfile)->getKind() == $JavaFileObject$Kind::CLASS);
	$init($Dependencies$GraphDependencies$CompletionNode$Kind);
	$set(this, ck, fromClass ? $Dependencies$GraphDependencies$CompletionNode$Kind::CLASS : $Dependencies$GraphDependencies$CompletionNode$Kind::SOURCE);
}

$Properties* Dependencies$GraphDependencies$CompletionNode::nodeAttributes() {
	$var($Properties, p, $Dependencies$GraphDependencies$Node::nodeAttributes());
	$nc(p)->put("style"_s, this->ck->dotStyle);
	p->put("shape"_s, "ellipse"_s);
	return p;
}

$Symbol$ClassSymbol* Dependencies$GraphDependencies$CompletionNode::getClassSymbol() {
	return $cast($Symbol$ClassSymbol, this->data);
}

Dependencies$GraphDependencies$CompletionNode::Dependencies$GraphDependencies$CompletionNode() {
}

$Class* Dependencies$GraphDependencies$CompletionNode::load$($String* name, bool initialize) {
	$loadClass(Dependencies$GraphDependencies$CompletionNode, name, initialize, &_Dependencies$GraphDependencies$CompletionNode_ClassInfo_, allocate$Dependencies$GraphDependencies$CompletionNode);
	return class$;
}

$Class* Dependencies$GraphDependencies$CompletionNode::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com