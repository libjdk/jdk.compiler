#include <com/sun/tools/javac/tree/JCTree$JCBreak.h>

#include <com/sun/source/tree/BreakTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Name.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

#undef BREAK
#undef SWITCH_EXPRESSION

using $BreakTree = ::com::sun::source::tree::BreakTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $1Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _JCTree$JCBreak_FieldInfo_[] = {
	{"label", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC, $field(JCTree$JCBreak, label)},
	{"target", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC, $field(JCTree$JCBreak, target)},
	{}
};

$MethodInfo _JCTree$JCBreak_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PROTECTED, $method(static_cast<void(JCTree$JCBreak::*)($Name*,$JCTree*)>(&JCTree$JCBreak::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getLabel", "()Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"isValueBreak", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCBreak_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCBreak", "com.sun.tools.javac.tree.JCTree", "JCBreak", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCStatement", "com.sun.tools.javac.tree.JCTree", "JCStatement", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCBreak_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCBreak",
	"com.sun.tools.javac.tree.JCTree$JCStatement",
	"com.sun.source.tree.BreakTree",
	_JCTree$JCBreak_FieldInfo_,
	_JCTree$JCBreak_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCBreak_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCBreak($Class* clazz) {
	return $of($alloc(JCTree$JCBreak));
}

$String* JCTree$JCBreak::toString() {
	 return this->$JCTree$JCStatement::toString();
}

$Object* JCTree$JCBreak::clone() {
	 return this->$JCTree$JCStatement::clone();
}

int32_t JCTree$JCBreak::hashCode() {
	 return this->$JCTree$JCStatement::hashCode();
}

bool JCTree$JCBreak::equals(Object$* arg0) {
	 return this->$JCTree$JCStatement::equals(arg0);
}

void JCTree$JCBreak::finalize() {
	this->$JCTree$JCStatement::finalize();
}

void JCTree$JCBreak::init$($Name* label, $JCTree* target) {
	$JCTree$JCStatement::init$();
	$set(this, label, label);
	$set(this, target, target);
}

void JCTree$JCBreak::accept($JCTree$Visitor* v) {
	$nc(v)->visitBreak(this);
}

bool JCTree$JCBreak::isValueBreak() {
	$init($JCTree$Tag);
	return this->target != nullptr && $nc(this->target)->hasTag($JCTree$Tag::SWITCH_EXPRESSION);
}

$Tree$Kind* JCTree$JCBreak::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::BREAK;
}

$1Name* JCTree$JCBreak::getLabel() {
	return this->label;
}

$Object* JCTree$JCBreak::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitBreak(this, d));
}

$JCTree$Tag* JCTree$JCBreak::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::BREAK;
}

JCTree$JCBreak::JCTree$JCBreak() {
}

$Class* JCTree$JCBreak::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCBreak, name, initialize, &_JCTree$JCBreak_ClassInfo_, allocate$JCTree$JCBreak);
	return class$;
}

$Class* JCTree$JCBreak::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com