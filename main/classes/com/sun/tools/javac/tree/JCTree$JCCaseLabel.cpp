#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>

#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <jcpp.h>

using $CaseLabelTree = ::com::sun::source::tree::CaseLabelTree;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$MethodInfo _JCTree$JCCaseLabel_MethodInfo_[] = {
	{"*accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JCTree$JCCaseLabel::*)()>(&JCTree$JCCaseLabel::init$))},
	{"isExpression", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isNullPattern", "()Z", nullptr, $PUBLIC},
	{"isPattern", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCCaseLabel_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCCaseLabel", "com.sun.tools.javac.tree.JCTree", "JCCaseLabel", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCCaseLabel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.tree.JCTree$JCCaseLabel",
	"com.sun.tools.javac.tree.JCTree",
	"com.sun.source.tree.CaseLabelTree",
	nullptr,
	_JCTree$JCCaseLabel_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCCaseLabel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCCaseLabel($Class* clazz) {
	return $of($alloc(JCTree$JCCaseLabel));
}

$String* JCTree$JCCaseLabel::toString() {
	 return this->$JCTree::toString();
}

$Object* JCTree$JCCaseLabel::clone() {
	 return this->$JCTree::clone();
}

int32_t JCTree$JCCaseLabel::hashCode() {
	 return this->$JCTree::hashCode();
}

bool JCTree$JCCaseLabel::equals(Object$* arg0) {
	 return this->$JCTree::equals(arg0);
}

void JCTree$JCCaseLabel::finalize() {
	this->$JCTree::finalize();
}

void JCTree$JCCaseLabel::init$() {
	$JCTree::init$();
}

bool JCTree$JCCaseLabel::isNullPattern() {
	bool var$0 = isExpression();
	return var$0 && $TreeInfo::isNull($cast($JCTree$JCExpression, this));
}

JCTree$JCCaseLabel::JCTree$JCCaseLabel() {
}

$Class* JCTree$JCCaseLabel::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCCaseLabel, name, initialize, &_JCTree$JCCaseLabel_ClassInfo_, allocate$JCTree$JCCaseLabel);
	return class$;
}

$Class* JCTree$JCCaseLabel::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com