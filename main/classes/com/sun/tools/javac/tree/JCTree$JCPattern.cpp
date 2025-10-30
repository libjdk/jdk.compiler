#include <com/sun/tools/javac/tree/JCTree$JCPattern.h>

#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

using $PatternTree = ::com::sun::source::tree::PatternTree;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$MethodInfo _JCTree$JCPattern_MethodInfo_[] = {
	{"*accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JCTree$JCPattern::*)()>(&JCTree$JCPattern::init$))},
	{"isExpression", "()Z", nullptr, $PUBLIC},
	{"isPattern", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCPattern_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCPattern", "com.sun.tools.javac.tree.JCTree", "JCPattern", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.tree.JCTree$JCCaseLabel", "com.sun.tools.javac.tree.JCTree", "JCCaseLabel", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCPattern_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.tree.JCTree$JCPattern",
	"com.sun.tools.javac.tree.JCTree$JCCaseLabel",
	"com.sun.source.tree.PatternTree",
	nullptr,
	_JCTree$JCPattern_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCPattern_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCPattern($Class* clazz) {
	return $of($alloc(JCTree$JCPattern));
}

$String* JCTree$JCPattern::toString() {
	 return this->$JCTree$JCCaseLabel::toString();
}

$Object* JCTree$JCPattern::clone() {
	 return this->$JCTree$JCCaseLabel::clone();
}

int32_t JCTree$JCPattern::hashCode() {
	 return this->$JCTree$JCCaseLabel::hashCode();
}

bool JCTree$JCPattern::equals(Object$* arg0) {
	 return this->$JCTree$JCCaseLabel::equals(arg0);
}

void JCTree$JCPattern::finalize() {
	this->$JCTree$JCCaseLabel::finalize();
}

void JCTree$JCPattern::init$() {
	$JCTree$JCCaseLabel::init$();
}

bool JCTree$JCPattern::isExpression() {
	return false;
}

bool JCTree$JCPattern::isPattern() {
	return true;
}

JCTree$JCPattern::JCTree$JCPattern() {
}

$Class* JCTree$JCPattern::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCPattern, name, initialize, &_JCTree$JCPattern_ClassInfo_, allocate$JCTree$JCPattern);
	return class$;
}

$Class* JCTree$JCPattern::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com