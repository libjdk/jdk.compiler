#include <com/sun/tools/javac/tree/TreeInfo$TypeAnnotationFinder.h>

#include <com/sun/tools/javac/tree/JCTree$JCAnnotation.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <jcpp.h>

#undef TYPE_ANNOTATION

using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCAnnotation = ::com::sun::tools::javac::tree::JCTree$JCAnnotation;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _TreeInfo$TypeAnnotationFinder_FieldInfo_[] = {
	{"foundTypeAnno", "Z", nullptr, $PUBLIC, $field(TreeInfo$TypeAnnotationFinder, foundTypeAnno)},
	{}
};

$MethodInfo _TreeInfo$TypeAnnotationFinder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(TreeInfo$TypeAnnotationFinder::*)()>(&TreeInfo$TypeAnnotationFinder::init$))},
	{"scan", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC},
	{"visitAnnotation", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TreeInfo$TypeAnnotationFinder_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.TreeInfo$TypeAnnotationFinder", "com.sun.tools.javac.tree.TreeInfo", "TypeAnnotationFinder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _TreeInfo$TypeAnnotationFinder_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.tree.TreeInfo$TypeAnnotationFinder",
	"com.sun.tools.javac.tree.TreeScanner",
	nullptr,
	_TreeInfo$TypeAnnotationFinder_FieldInfo_,
	_TreeInfo$TypeAnnotationFinder_MethodInfo_,
	nullptr,
	nullptr,
	_TreeInfo$TypeAnnotationFinder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.TreeInfo"
};

$Object* allocate$TreeInfo$TypeAnnotationFinder($Class* clazz) {
	return $of($alloc(TreeInfo$TypeAnnotationFinder));
}

void TreeInfo$TypeAnnotationFinder::init$() {
	$TreeScanner::init$();
	this->foundTypeAnno = false;
}

void TreeInfo$TypeAnnotationFinder::scan($JCTree* tree) {
	if (this->foundTypeAnno || tree == nullptr) {
		return;
	}
	$TreeScanner::scan(tree);
}

void TreeInfo$TypeAnnotationFinder::visitAnnotation($JCTree$JCAnnotation* tree) {
	$init($JCTree$Tag);
	this->foundTypeAnno = this->foundTypeAnno || $nc(tree)->hasTag($JCTree$Tag::TYPE_ANNOTATION);
}

TreeInfo$TypeAnnotationFinder::TreeInfo$TypeAnnotationFinder() {
}

$Class* TreeInfo$TypeAnnotationFinder::load$($String* name, bool initialize) {
	$loadClass(TreeInfo$TypeAnnotationFinder, name, initialize, &_TreeInfo$TypeAnnotationFinder_ClassInfo_, allocate$TreeInfo$TypeAnnotationFinder);
	return class$;
}

$Class* TreeInfo$TypeAnnotationFinder::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com