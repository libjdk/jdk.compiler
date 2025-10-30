#include <com/sun/tools/javac/tree/JCTree$JCMemberReference.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/MemberReferenceTree$ReferenceMode.h>
#include <com/sun/source/tree/MemberReferenceTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCFunctionalExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference$OverloadKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference$ReferenceKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression$PolyKind.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/util/List.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

#undef MEMBER_REFERENCE
#undef REFERENCE

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $MemberReferenceTree = ::com::sun::source::tree::MemberReferenceTree;
using $MemberReferenceTree$ReferenceMode = ::com::sun::source::tree::MemberReferenceTree$ReferenceMode;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCFunctionalExpression = ::com::sun::tools::javac::tree::JCTree$JCFunctionalExpression;
using $JCTree$JCMemberReference$OverloadKind = ::com::sun::tools::javac::tree::JCTree$JCMemberReference$OverloadKind;
using $JCTree$JCMemberReference$ReferenceKind = ::com::sun::tools::javac::tree::JCTree$JCMemberReference$ReferenceKind;
using $JCTree$JCPolyExpression$PolyKind = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression$PolyKind;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $1List = ::java::util::List;
using $1Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _JCTree$JCMemberReference_FieldInfo_[] = {
	{"mode", "Lcom/sun/source/tree/MemberReferenceTree$ReferenceMode;", nullptr, $PUBLIC, $field(JCTree$JCMemberReference, mode)},
	{"kind", "Lcom/sun/tools/javac/tree/JCTree$JCMemberReference$ReferenceKind;", nullptr, $PUBLIC, $field(JCTree$JCMemberReference, kind)},
	{"name", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC, $field(JCTree$JCMemberReference, name)},
	{"expr", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCMemberReference, expr)},
	{"typeargs", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC, $field(JCTree$JCMemberReference, typeargs)},
	{"sym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $field(JCTree$JCMemberReference, sym)},
	{"varargsElement", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(JCTree$JCMemberReference, varargsElement)},
	{"refPolyKind", "Lcom/sun/tools/javac/tree/JCTree$JCPolyExpression$PolyKind;", nullptr, $PUBLIC, $field(JCTree$JCMemberReference, refPolyKind)},
	{"ownerAccessible", "Z", nullptr, $PUBLIC, $field(JCTree$JCMemberReference, ownerAccessible)},
	{"overloadKind", "Lcom/sun/tools/javac/tree/JCTree$JCMemberReference$OverloadKind;", nullptr, $PRIVATE, $field(JCTree$JCMemberReference, overloadKind)},
	{"referentType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(JCTree$JCMemberReference, referentType)},
	{}
};

$MethodInfo _JCTree$JCMemberReference_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/source/tree/MemberReferenceTree$ReferenceMode;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/source/tree/MemberReferenceTree$ReferenceMode;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)V", $PUBLIC, $method(static_cast<void(JCTree$JCMemberReference::*)($MemberReferenceTree$ReferenceMode*,$Name*,$JCTree$JCExpression*,$List*)>(&JCTree$JCMemberReference::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getMode", "()Lcom/sun/source/tree/MemberReferenceTree$ReferenceMode;", nullptr, $PUBLIC},
	{"getName", "()Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{"getOverloadKind", "()Lcom/sun/tools/javac/tree/JCTree$JCMemberReference$OverloadKind;", nullptr, $PUBLIC},
	{"getQualifierExpression", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"getTypeArguments", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC},
	{"hasKind", "(Lcom/sun/tools/javac/tree/JCTree$JCMemberReference$ReferenceKind;)Z", nullptr, $PUBLIC},
	{"setOverloadKind", "(Lcom/sun/tools/javac/tree/JCTree$JCMemberReference$OverloadKind;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCMemberReference_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCMemberReference", "com.sun.tools.javac.tree.JCTree", "JCMemberReference", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCFunctionalExpression", "com.sun.tools.javac.tree.JCTree", "JCFunctionalExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.tree.JCTree$JCMemberReference$ReferenceKind", "com.sun.tools.javac.tree.JCTree$JCMemberReference", "ReferenceKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.tree.JCTree$JCMemberReference$OverloadKind", "com.sun.tools.javac.tree.JCTree$JCMemberReference", "OverloadKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _JCTree$JCMemberReference_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCMemberReference",
	"com.sun.tools.javac.tree.JCTree$JCFunctionalExpression",
	"com.sun.source.tree.MemberReferenceTree",
	_JCTree$JCMemberReference_FieldInfo_,
	_JCTree$JCMemberReference_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCMemberReference_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCMemberReference($Class* clazz) {
	return $of($alloc(JCTree$JCMemberReference));
}

$String* JCTree$JCMemberReference::toString() {
	 return this->$JCTree$JCFunctionalExpression::toString();
}

$Object* JCTree$JCMemberReference::clone() {
	 return this->$JCTree$JCFunctionalExpression::clone();
}

int32_t JCTree$JCMemberReference::hashCode() {
	 return this->$JCTree$JCFunctionalExpression::hashCode();
}

bool JCTree$JCMemberReference::equals(Object$* arg0) {
	 return this->$JCTree$JCFunctionalExpression::equals(arg0);
}

void JCTree$JCMemberReference::finalize() {
	this->$JCTree$JCFunctionalExpression::finalize();
}

void JCTree$JCMemberReference::init$($MemberReferenceTree$ReferenceMode* mode, $Name* name, $JCTree$JCExpression* expr, $List* typeargs) {
	$JCTree$JCFunctionalExpression::init$();
	$set(this, mode, mode);
	$set(this, name, name);
	$set(this, expr, expr);
	$set(this, typeargs, typeargs);
}

void JCTree$JCMemberReference::accept($JCTree$Visitor* v) {
	$nc(v)->visitReference(this);
}

$Tree$Kind* JCTree$JCMemberReference::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::MEMBER_REFERENCE;
}

$MemberReferenceTree$ReferenceMode* JCTree$JCMemberReference::getMode() {
	return this->mode;
}

$ExpressionTree* JCTree$JCMemberReference::getQualifierExpression() {
	return this->expr;
}

$1Name* JCTree$JCMemberReference::getName() {
	return this->name;
}

$1List* JCTree$JCMemberReference::getTypeArguments() {
	return this->typeargs;
}

$Object* JCTree$JCMemberReference::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitMemberReference(this, d));
}

$JCTree$Tag* JCTree$JCMemberReference::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::REFERENCE;
}

bool JCTree$JCMemberReference::hasKind($JCTree$JCMemberReference$ReferenceKind* kind) {
	return this->kind == kind;
}

$JCTree$JCMemberReference$OverloadKind* JCTree$JCMemberReference::getOverloadKind() {
	return this->overloadKind;
}

void JCTree$JCMemberReference::setOverloadKind($JCTree$JCMemberReference$OverloadKind* overloadKind) {
	$set(this, overloadKind, overloadKind);
}

JCTree$JCMemberReference::JCTree$JCMemberReference() {
}

$Class* JCTree$JCMemberReference::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCMemberReference, name, initialize, &_JCTree$JCMemberReference_ClassInfo_, allocate$JCTree$JCMemberReference);
	return class$;
}

$Class* JCTree$JCMemberReference::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com