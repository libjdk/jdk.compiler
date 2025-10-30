#include <com/sun/tools/javac/tree/JCTree$JCDirective.h>

#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

using $DirectiveTree = ::com::sun::source::tree::DirectiveTree;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$MethodInfo _JCTree$JCDirective_MethodInfo_[] = {
	{"*accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JCTree$JCDirective::*)()>(&JCTree$JCDirective::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCDirective_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCDirective", "com.sun.tools.javac.tree.JCTree", "JCDirective", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCDirective_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.tree.JCTree$JCDirective",
	"com.sun.tools.javac.tree.JCTree",
	"com.sun.source.tree.DirectiveTree",
	nullptr,
	_JCTree$JCDirective_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCDirective_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCDirective($Class* clazz) {
	return $of($alloc(JCTree$JCDirective));
}

$String* JCTree$JCDirective::toString() {
	 return this->$JCTree::toString();
}

$Object* JCTree$JCDirective::clone() {
	 return this->$JCTree::clone();
}

int32_t JCTree$JCDirective::hashCode() {
	 return this->$JCTree::hashCode();
}

bool JCTree$JCDirective::equals(Object$* arg0) {
	 return this->$JCTree::equals(arg0);
}

void JCTree$JCDirective::finalize() {
	this->$JCTree::finalize();
}

void JCTree$JCDirective::init$() {
	$JCTree::init$();
}

JCTree$JCDirective::JCTree$JCDirective() {
}

$Class* JCTree$JCDirective::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCDirective, name, initialize, &_JCTree$JCDirective_ClassInfo_, allocate$JCTree$JCDirective);
	return class$;
}

$Class* JCTree$JCDirective::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com