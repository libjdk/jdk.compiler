#include <com/sun/tools/javac/tree/JCTree$JCTypeApply.h>

#include <com/sun/source/tree/ParameterizedTypeTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef PARAMETERIZED_TYPE
#undef TYPEAPPLY

using $ParameterizedTypeTree = ::com::sun::source::tree::ParameterizedTypeTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
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

$FieldInfo _JCTree$JCTypeApply_FieldInfo_[] = {
	{"clazz", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCTypeApply, clazz)},
	{"arguments", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC, $field(JCTree$JCTypeApply, arguments)},
	{}
};

$MethodInfo _JCTree$JCTypeApply_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)V", $PROTECTED, $method(static_cast<void(JCTree$JCTypeApply::*)($JCTree$JCExpression*,$1List*)>(&JCTree$JCTypeApply::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"getType", "()Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC},
	{"getTypeArguments", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCTypeApply_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCTypeApply", "com.sun.tools.javac.tree.JCTree", "JCTypeApply", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCExpression", "com.sun.tools.javac.tree.JCTree", "JCExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCTypeApply_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCTypeApply",
	"com.sun.tools.javac.tree.JCTree$JCExpression",
	"com.sun.source.tree.ParameterizedTypeTree",
	_JCTree$JCTypeApply_FieldInfo_,
	_JCTree$JCTypeApply_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCTypeApply_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCTypeApply($Class* clazz) {
	return $of($alloc(JCTree$JCTypeApply));
}

$String* JCTree$JCTypeApply::toString() {
	 return this->$JCTree$JCExpression::toString();
}

$Object* JCTree$JCTypeApply::clone() {
	 return this->$JCTree$JCExpression::clone();
}

int32_t JCTree$JCTypeApply::hashCode() {
	 return this->$JCTree$JCExpression::hashCode();
}

bool JCTree$JCTypeApply::equals(Object$* arg0) {
	 return this->$JCTree$JCExpression::equals(arg0);
}

void JCTree$JCTypeApply::finalize() {
	this->$JCTree$JCExpression::finalize();
}

void JCTree$JCTypeApply::init$($JCTree$JCExpression* clazz, $1List* arguments) {
	$JCTree$JCExpression::init$();
	$set(this, clazz, clazz);
	$set(this, arguments, arguments);
}

void JCTree$JCTypeApply::accept($JCTree$Visitor* v) {
	$nc(v)->visitTypeApply(this);
}

$Tree$Kind* JCTree$JCTypeApply::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::PARAMETERIZED_TYPE;
}

$JCTree* JCTree$JCTypeApply::getType() {
	return this->clazz;
}

$List* JCTree$JCTypeApply::getTypeArguments() {
	return this->arguments;
}

$Object* JCTree$JCTypeApply::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitParameterizedType(this, d));
}

$JCTree$Tag* JCTree$JCTypeApply::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::TYPEAPPLY;
}

JCTree$JCTypeApply::JCTree$JCTypeApply() {
}

$Class* JCTree$JCTypeApply::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCTypeApply, name, initialize, &_JCTree$JCTypeApply_ClassInfo_, allocate$JCTree$JCTypeApply);
	return class$;
}

$Class* JCTree$JCTypeApply::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com