#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

using $StatementTree = ::com::sun::source::tree::StatementTree;
using $Type = ::com::sun::tools::javac::code::Type;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$MethodInfo _JCTree$JCStatement_MethodInfo_[] = {
	{"*accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JCTree$JCStatement::*)()>(&JCTree$JCStatement::init$))},
	{"setPos", "(I)Lcom/sun/tools/javac/tree/JCTree$JCStatement;", nullptr, $PUBLIC},
	{"setType", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/tree/JCTree$JCStatement;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCStatement_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCStatement", "com.sun.tools.javac.tree.JCTree", "JCStatement", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCStatement_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.tree.JCTree$JCStatement",
	"com.sun.tools.javac.tree.JCTree",
	"com.sun.source.tree.StatementTree",
	nullptr,
	_JCTree$JCStatement_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCStatement_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCStatement($Class* clazz) {
	return $of($alloc(JCTree$JCStatement));
}

$String* JCTree$JCStatement::toString() {
	 return this->$JCTree::toString();
}

$Object* JCTree$JCStatement::clone() {
	 return this->$JCTree::clone();
}

int32_t JCTree$JCStatement::hashCode() {
	 return this->$JCTree::hashCode();
}

bool JCTree$JCStatement::equals(Object$* arg0) {
	 return this->$JCTree::equals(arg0);
}

void JCTree$JCStatement::finalize() {
	this->$JCTree::finalize();
}

void JCTree$JCStatement::init$() {
	$JCTree::init$();
}

JCTree$JCStatement* JCTree$JCStatement::setType($Type* type) {
	$JCTree::setType(type);
	return this;
}

JCTree$JCStatement* JCTree$JCStatement::setPos(int32_t pos) {
	$JCTree::setPos(pos);
	return this;
}

JCTree$JCStatement::JCTree$JCStatement() {
}

$Class* JCTree$JCStatement::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCStatement, name, initialize, &_JCTree$JCStatement_ClassInfo_, allocate$JCTree$JCStatement);
	return class$;
}

$Class* JCTree$JCStatement::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com