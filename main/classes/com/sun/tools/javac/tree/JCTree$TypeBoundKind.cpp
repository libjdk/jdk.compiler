#include <com/sun/tools/javac/tree/JCTree$TypeBoundKind.h>

#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/code/BoundKind.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <java/lang/AssertionError.h>
#include <jcpp.h>

#undef TYPEBOUNDKIND

using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $BoundKind = ::com::sun::tools::javac::code::BoundKind;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _JCTree$TypeBoundKind_FieldInfo_[] = {
	{"kind", "Lcom/sun/tools/javac/code/BoundKind;", nullptr, $PUBLIC, $field(JCTree$TypeBoundKind, kind)},
	{}
};

$MethodInfo _JCTree$TypeBoundKind_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/BoundKind;)V", nullptr, $PROTECTED, $method(static_cast<void(JCTree$TypeBoundKind::*)($BoundKind*)>(&JCTree$TypeBoundKind::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$TypeBoundKind_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$TypeBoundKind", "com.sun.tools.javac.tree.JCTree", "TypeBoundKind", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JCTree$TypeBoundKind_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$TypeBoundKind",
	"com.sun.tools.javac.tree.JCTree",
	nullptr,
	_JCTree$TypeBoundKind_FieldInfo_,
	_JCTree$TypeBoundKind_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$TypeBoundKind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$TypeBoundKind($Class* clazz) {
	return $of($alloc(JCTree$TypeBoundKind));
}

void JCTree$TypeBoundKind::init$($BoundKind* kind) {
	$JCTree::init$();
	$set(this, kind, kind);
}

void JCTree$TypeBoundKind::accept($JCTree$Visitor* v) {
	$nc(v)->visitTypeBoundKind(this);
}

$Tree$Kind* JCTree$TypeBoundKind::getKind() {
	$throwNew($AssertionError, $of("TypeBoundKind is not part of a public API"_s));
	$shouldNotReachHere();
}

$Object* JCTree$TypeBoundKind::accept($TreeVisitor* v, Object$* d) {
	$throwNew($AssertionError, $of("TypeBoundKind is not part of a public API"_s));
	$shouldNotReachHere();
}

$JCTree$Tag* JCTree$TypeBoundKind::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::TYPEBOUNDKIND;
}

JCTree$TypeBoundKind::JCTree$TypeBoundKind() {
}

$Class* JCTree$TypeBoundKind::load$($String* name, bool initialize) {
	$loadClass(JCTree$TypeBoundKind, name, initialize, &_JCTree$TypeBoundKind_ClassInfo_, allocate$JCTree$TypeBoundKind);
	return class$;
}

$Class* JCTree$TypeBoundKind::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com