#include <com/sun/tools/javac/tree/JCTree$JCWildcard.h>

#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/source/tree/WildcardTree.h>
#include <com/sun/tools/javac/code/BoundKind.h>
#include <com/sun/tools/javac/tree/JCTree$1.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$TypeBoundKind.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <java/lang/AssertionError.h>
#include <jcpp.h>

#undef EXTENDS_WILDCARD
#undef SUPER_WILDCARD
#undef UNBOUNDED_WILDCARD
#undef WILDCARD

using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $WildcardTree = ::com::sun::source::tree::WildcardTree;
using $BoundKind = ::com::sun::tools::javac::code::BoundKind;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$1 = ::com::sun::tools::javac::tree::JCTree$1;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$TypeBoundKind = ::com::sun::tools::javac::tree::JCTree$TypeBoundKind;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _JCTree$JCWildcard_FieldInfo_[] = {
	{"kind", "Lcom/sun/tools/javac/tree/JCTree$TypeBoundKind;", nullptr, $PUBLIC, $field(JCTree$JCWildcard, kind)},
	{"inner", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC, $field(JCTree$JCWildcard, inner)},
	{}
};

$MethodInfo _JCTree$JCWildcard_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$TypeBoundKind;Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PROTECTED, $method(static_cast<void(JCTree$JCWildcard::*)($JCTree$TypeBoundKind*,$JCTree*)>(&JCTree$JCWildcard::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getBound", "()Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCWildcard_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCWildcard", "com.sun.tools.javac.tree.JCTree", "JCWildcard", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCExpression", "com.sun.tools.javac.tree.JCTree", "JCExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCWildcard_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCWildcard",
	"com.sun.tools.javac.tree.JCTree$JCExpression",
	"com.sun.source.tree.WildcardTree",
	_JCTree$JCWildcard_FieldInfo_,
	_JCTree$JCWildcard_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCWildcard_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCWildcard($Class* clazz) {
	return $of($alloc(JCTree$JCWildcard));
}

$String* JCTree$JCWildcard::toString() {
	 return this->$JCTree$JCExpression::toString();
}

$Object* JCTree$JCWildcard::clone() {
	 return this->$JCTree$JCExpression::clone();
}

int32_t JCTree$JCWildcard::hashCode() {
	 return this->$JCTree$JCExpression::hashCode();
}

bool JCTree$JCWildcard::equals(Object$* arg0) {
	 return this->$JCTree$JCExpression::equals(arg0);
}

void JCTree$JCWildcard::finalize() {
	this->$JCTree$JCExpression::finalize();
}

void JCTree$JCWildcard::init$($JCTree$TypeBoundKind* kind, $JCTree* inner) {
	$JCTree$JCExpression::init$();
	$set(this, kind, $cast($JCTree$TypeBoundKind, $Assert::checkNonNull(kind)));
	$set(this, inner, inner);
}

void JCTree$JCWildcard::accept($JCTree$Visitor* v) {
	$nc(v)->visitWildcard(this);
}

$Tree$Kind* JCTree$JCWildcard::getKind() {
	$init($JCTree$1);
	switch ($nc($JCTree$1::$SwitchMap$com$sun$tools$javac$code$BoundKind)->get($nc(($nc(this->kind)->kind))->ordinal())) {
	case 1:
		{
			$init($Tree$Kind);
			return $Tree$Kind::UNBOUNDED_WILDCARD;
		}
	case 2:
		{
			$init($Tree$Kind);
			return $Tree$Kind::EXTENDS_WILDCARD;
		}
	case 3:
		{
			$init($Tree$Kind);
			return $Tree$Kind::SUPER_WILDCARD;
		}
	default:
		{
			$throwNew($AssertionError, $of($$str({"Unknown wildcard bound "_s, this->kind})));
		}
	}
}

$JCTree* JCTree$JCWildcard::getBound() {
	return this->inner;
}

$Object* JCTree$JCWildcard::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitWildcard(this, d));
}

$JCTree$Tag* JCTree$JCWildcard::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::WILDCARD;
}

JCTree$JCWildcard::JCTree$JCWildcard() {
}

$Class* JCTree$JCWildcard::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCWildcard, name, initialize, &_JCTree$JCWildcard_ClassInfo_, allocate$JCTree$JCWildcard);
	return class$;
}

$Class* JCTree$JCWildcard::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com