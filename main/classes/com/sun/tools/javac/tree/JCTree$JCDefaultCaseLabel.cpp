#include <com/sun/tools/javac/tree/JCTree$JCDefaultCaseLabel.h>

#include <com/sun/source/tree/DefaultCaseLabelTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

#undef DEFAULTCASELABEL
#undef DEFAULT_CASE_LABEL

using $DefaultCaseLabelTree = ::com::sun::source::tree::DefaultCaseLabelTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$MethodInfo _JCTree$JCDefaultCaseLabel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(JCTree$JCDefaultCaseLabel::*)()>(&JCTree$JCDefaultCaseLabel::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"isExpression", "()Z", nullptr, $PUBLIC},
	{"isPattern", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCDefaultCaseLabel_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCDefaultCaseLabel", "com.sun.tools.javac.tree.JCTree", "JCDefaultCaseLabel", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCCaseLabel", "com.sun.tools.javac.tree.JCTree", "JCCaseLabel", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCDefaultCaseLabel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCDefaultCaseLabel",
	"com.sun.tools.javac.tree.JCTree$JCCaseLabel",
	"com.sun.source.tree.DefaultCaseLabelTree",
	nullptr,
	_JCTree$JCDefaultCaseLabel_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCDefaultCaseLabel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCDefaultCaseLabel($Class* clazz) {
	return $of($alloc(JCTree$JCDefaultCaseLabel));
}

$String* JCTree$JCDefaultCaseLabel::toString() {
	 return this->$JCTree$JCCaseLabel::toString();
}

$Object* JCTree$JCDefaultCaseLabel::clone() {
	 return this->$JCTree$JCCaseLabel::clone();
}

int32_t JCTree$JCDefaultCaseLabel::hashCode() {
	 return this->$JCTree$JCCaseLabel::hashCode();
}

bool JCTree$JCDefaultCaseLabel::equals(Object$* arg0) {
	 return this->$JCTree$JCCaseLabel::equals(arg0);
}

void JCTree$JCDefaultCaseLabel::finalize() {
	this->$JCTree$JCCaseLabel::finalize();
}

void JCTree$JCDefaultCaseLabel::init$() {
	$JCTree$JCCaseLabel::init$();
}

void JCTree$JCDefaultCaseLabel::accept($JCTree$Visitor* v) {
	$nc(v)->visitDefaultCaseLabel(this);
}

$Tree$Kind* JCTree$JCDefaultCaseLabel::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::DEFAULT_CASE_LABEL;
}

$Object* JCTree$JCDefaultCaseLabel::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitDefaultCaseLabel(this, d));
}

$JCTree$Tag* JCTree$JCDefaultCaseLabel::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::DEFAULTCASELABEL;
}

bool JCTree$JCDefaultCaseLabel::isExpression() {
	return false;
}

bool JCTree$JCDefaultCaseLabel::isPattern() {
	return false;
}

JCTree$JCDefaultCaseLabel::JCTree$JCDefaultCaseLabel() {
}

$Class* JCTree$JCDefaultCaseLabel::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCDefaultCaseLabel, name, initialize, &_JCTree$JCDefaultCaseLabel_ClassInfo_, allocate$JCTree$JCDefaultCaseLabel);
	return class$;
}

$Class* JCTree$JCDefaultCaseLabel::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com