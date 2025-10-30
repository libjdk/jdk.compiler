#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/MemberSelectTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Name.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

#undef MEMBER_SELECT
#undef SELECT

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $MemberSelectTree = ::com::sun::source::tree::MemberSelectTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
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

$FieldInfo _JCTree$JCFieldAccess_FieldInfo_[] = {
	{"selected", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCFieldAccess, selected)},
	{"name", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC, $field(JCTree$JCFieldAccess, name)},
	{"sym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $field(JCTree$JCFieldAccess, sym)},
	{}
};

$MethodInfo _JCTree$JCFieldAccess_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PROTECTED, $method(static_cast<void(JCTree$JCFieldAccess::*)($JCTree$JCExpression*,$Name*,$Symbol*)>(&JCTree$JCFieldAccess::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getExpression", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getIdentifier", "()Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCFieldAccess_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCFieldAccess", "com.sun.tools.javac.tree.JCTree", "JCFieldAccess", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCExpression", "com.sun.tools.javac.tree.JCTree", "JCExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCFieldAccess_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCFieldAccess",
	"com.sun.tools.javac.tree.JCTree$JCExpression",
	"com.sun.source.tree.MemberSelectTree",
	_JCTree$JCFieldAccess_FieldInfo_,
	_JCTree$JCFieldAccess_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCFieldAccess_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCFieldAccess($Class* clazz) {
	return $of($alloc(JCTree$JCFieldAccess));
}

$String* JCTree$JCFieldAccess::toString() {
	 return this->$JCTree$JCExpression::toString();
}

$Object* JCTree$JCFieldAccess::clone() {
	 return this->$JCTree$JCExpression::clone();
}

int32_t JCTree$JCFieldAccess::hashCode() {
	 return this->$JCTree$JCExpression::hashCode();
}

bool JCTree$JCFieldAccess::equals(Object$* arg0) {
	 return this->$JCTree$JCExpression::equals(arg0);
}

void JCTree$JCFieldAccess::finalize() {
	this->$JCTree$JCExpression::finalize();
}

void JCTree$JCFieldAccess::init$($JCTree$JCExpression* selected, $Name* name, $Symbol* sym) {
	$JCTree$JCExpression::init$();
	$set(this, selected, selected);
	$set(this, name, name);
	$set(this, sym, sym);
}

void JCTree$JCFieldAccess::accept($JCTree$Visitor* v) {
	$nc(v)->visitSelect(this);
}

$Tree$Kind* JCTree$JCFieldAccess::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::MEMBER_SELECT;
}

$ExpressionTree* JCTree$JCFieldAccess::getExpression() {
	return this->selected;
}

$Object* JCTree$JCFieldAccess::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitMemberSelect(this, d));
}

$1Name* JCTree$JCFieldAccess::getIdentifier() {
	return this->name;
}

$JCTree$Tag* JCTree$JCFieldAccess::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::SELECT;
}

JCTree$JCFieldAccess::JCTree$JCFieldAccess() {
}

$Class* JCTree$JCFieldAccess::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCFieldAccess, name, initialize, &_JCTree$JCFieldAccess_ClassInfo_, allocate$JCTree$JCFieldAccess);
	return class$;
}

$Class* JCTree$JCFieldAccess::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com