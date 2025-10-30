#include <com/sun/tools/javac/tree/JCTree$JCUses.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/source/tree/UsesTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCDirective.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

#undef USES

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $UsesTree = ::com::sun::source::tree::UsesTree;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCDirective = ::com::sun::tools::javac::tree::JCTree$JCDirective;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _JCTree$JCUses_FieldInfo_[] = {
	{"qualid", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCUses, qualid)},
	{}
};

$MethodInfo _JCTree$JCUses_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)V", nullptr, $PROTECTED, $method(static_cast<void(JCTree$JCUses::*)($JCTree$JCExpression*)>(&JCTree$JCUses::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getServiceName", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCUses_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCUses", "com.sun.tools.javac.tree.JCTree", "JCUses", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCDirective", "com.sun.tools.javac.tree.JCTree", "JCDirective", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCUses_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCUses",
	"com.sun.tools.javac.tree.JCTree$JCDirective",
	"com.sun.source.tree.UsesTree",
	_JCTree$JCUses_FieldInfo_,
	_JCTree$JCUses_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCUses_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCUses($Class* clazz) {
	return $of($alloc(JCTree$JCUses));
}

$String* JCTree$JCUses::toString() {
	 return this->$JCTree$JCDirective::toString();
}

$Object* JCTree$JCUses::clone() {
	 return this->$JCTree$JCDirective::clone();
}

int32_t JCTree$JCUses::hashCode() {
	 return this->$JCTree$JCDirective::hashCode();
}

bool JCTree$JCUses::equals(Object$* arg0) {
	 return this->$JCTree$JCDirective::equals(arg0);
}

void JCTree$JCUses::finalize() {
	this->$JCTree$JCDirective::finalize();
}

void JCTree$JCUses::init$($JCTree$JCExpression* qualId) {
	$JCTree$JCDirective::init$();
	$set(this, qualid, qualId);
}

void JCTree$JCUses::accept($JCTree$Visitor* v) {
	$nc(v)->visitUses(this);
}

$Tree$Kind* JCTree$JCUses::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::USES;
}

$ExpressionTree* JCTree$JCUses::getServiceName() {
	return this->qualid;
}

$Object* JCTree$JCUses::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitUses(this, d));
}

$JCTree$Tag* JCTree$JCUses::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::USES;
}

JCTree$JCUses::JCTree$JCUses() {
}

$Class* JCTree$JCUses::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCUses, name, initialize, &_JCTree$JCUses_ClassInfo_, allocate$JCTree$JCUses);
	return class$;
}

$Class* JCTree$JCUses::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com