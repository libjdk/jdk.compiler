#include <com/sun/tools/javac/tree/JCTree$JCErroneous.h>

#include <com/sun/source/tree/ErroneousTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef ERRONEOUS

using $ErroneousTree = ::com::sun::source::tree::ErroneousTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $1List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _JCTree$JCErroneous_FieldInfo_[] = {
	{"errs", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<+Lcom/sun/tools/javac/tree/JCTree;>;", $PUBLIC, $field(JCTree$JCErroneous, errs)},
	{}
};

$MethodInfo _JCTree$JCErroneous_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<+Lcom/sun/tools/javac/tree/JCTree;>;)V", $PROTECTED, $method(static_cast<void(JCTree$JCErroneous::*)($1List*)>(&JCTree$JCErroneous::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getErrorTrees", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<+Lcom/sun/tools/javac/tree/JCTree;>;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCErroneous_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCErroneous", "com.sun.tools.javac.tree.JCTree", "JCErroneous", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCExpression", "com.sun.tools.javac.tree.JCTree", "JCExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCErroneous_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCErroneous",
	"com.sun.tools.javac.tree.JCTree$JCExpression",
	"com.sun.source.tree.ErroneousTree",
	_JCTree$JCErroneous_FieldInfo_,
	_JCTree$JCErroneous_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCErroneous_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCErroneous($Class* clazz) {
	return $of($alloc(JCTree$JCErroneous));
}

$String* JCTree$JCErroneous::toString() {
	 return this->$JCTree$JCExpression::toString();
}

$Object* JCTree$JCErroneous::clone() {
	 return this->$JCTree$JCExpression::clone();
}

int32_t JCTree$JCErroneous::hashCode() {
	 return this->$JCTree$JCExpression::hashCode();
}

bool JCTree$JCErroneous::equals(Object$* arg0) {
	 return this->$JCTree$JCExpression::equals(arg0);
}

void JCTree$JCErroneous::finalize() {
	this->$JCTree$JCExpression::finalize();
}

void JCTree$JCErroneous::init$($1List* errs) {
	$JCTree$JCExpression::init$();
	$set(this, errs, errs);
}

void JCTree$JCErroneous::accept($JCTree$Visitor* v) {
	$nc(v)->visitErroneous(this);
}

$Tree$Kind* JCTree$JCErroneous::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::ERRONEOUS;
}

$List* JCTree$JCErroneous::getErrorTrees() {
	return this->errs;
}

$Object* JCTree$JCErroneous::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitErroneous(this, d));
}

$JCTree$Tag* JCTree$JCErroneous::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::ERRONEOUS;
}

JCTree$JCErroneous::JCTree$JCErroneous() {
}

$Class* JCTree$JCErroneous::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCErroneous, name, initialize, &_JCTree$JCErroneous_ClassInfo_, allocate$JCTree$JCErroneous);
	return class$;
}

$Class* JCTree$JCErroneous::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com