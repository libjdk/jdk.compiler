#include <com/sun/tools/javac/tree/JCTree$JCSkip.h>

#include <com/sun/source/tree/EmptyStatementTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

#undef EMPTY_STATEMENT
#undef SKIP

using $EmptyStatementTree = ::com::sun::source::tree::EmptyStatementTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$MethodInfo _JCTree$JCSkip_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(JCTree$JCSkip::*)()>(&JCTree$JCSkip::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCSkip_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCSkip", "com.sun.tools.javac.tree.JCTree", "JCSkip", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCStatement", "com.sun.tools.javac.tree.JCTree", "JCStatement", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCSkip_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCSkip",
	"com.sun.tools.javac.tree.JCTree$JCStatement",
	"com.sun.source.tree.EmptyStatementTree",
	nullptr,
	_JCTree$JCSkip_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCSkip_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCSkip($Class* clazz) {
	return $of($alloc(JCTree$JCSkip));
}

$String* JCTree$JCSkip::toString() {
	 return this->$JCTree$JCStatement::toString();
}

$Object* JCTree$JCSkip::clone() {
	 return this->$JCTree$JCStatement::clone();
}

int32_t JCTree$JCSkip::hashCode() {
	 return this->$JCTree$JCStatement::hashCode();
}

bool JCTree$JCSkip::equals(Object$* arg0) {
	 return this->$JCTree$JCStatement::equals(arg0);
}

void JCTree$JCSkip::finalize() {
	this->$JCTree$JCStatement::finalize();
}

void JCTree$JCSkip::init$() {
	$JCTree$JCStatement::init$();
}

void JCTree$JCSkip::accept($JCTree$Visitor* v) {
	$nc(v)->visitSkip(this);
}

$Tree$Kind* JCTree$JCSkip::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::EMPTY_STATEMENT;
}

$Object* JCTree$JCSkip::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitEmptyStatement(this, d));
}

$JCTree$Tag* JCTree$JCSkip::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::SKIP;
}

JCTree$JCSkip::JCTree$JCSkip() {
}

$Class* JCTree$JCSkip::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCSkip, name, initialize, &_JCTree$JCSkip_ClassInfo_, allocate$JCTree$JCSkip);
	return class$;
}

$Class* JCTree$JCSkip::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com