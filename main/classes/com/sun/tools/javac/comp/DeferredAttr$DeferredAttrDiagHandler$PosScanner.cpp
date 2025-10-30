#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrDiagHandler$PosScanner.h>

#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrDiagHandler.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <jcpp.h>

using $DeferredAttr$DeferredAttrDiagHandler = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrDiagHandler;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _DeferredAttr$DeferredAttrDiagHandler$PosScanner_FieldInfo_[] = {
	{"pos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, 0, $field(DeferredAttr$DeferredAttrDiagHandler$PosScanner, pos)},
	{"found", "Z", nullptr, 0, $field(DeferredAttr$DeferredAttrDiagHandler$PosScanner, found)},
	{}
};

$MethodInfo _DeferredAttr$DeferredAttrDiagHandler$PosScanner_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, 0, $method(static_cast<void(DeferredAttr$DeferredAttrDiagHandler$PosScanner::*)($JCDiagnostic$DiagnosticPosition*)>(&DeferredAttr$DeferredAttrDiagHandler$PosScanner::init$))},
	{"scan", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DeferredAttr$DeferredAttrDiagHandler$PosScanner_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrDiagHandler", "com.sun.tools.javac.comp.DeferredAttr", "DeferredAttrDiagHandler", $STATIC},
	{"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrDiagHandler$PosScanner", "com.sun.tools.javac.comp.DeferredAttr$DeferredAttrDiagHandler", "PosScanner", $STATIC},
	{}
};

$ClassInfo _DeferredAttr$DeferredAttrDiagHandler$PosScanner_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrDiagHandler$PosScanner",
	"com.sun.tools.javac.tree.TreeScanner",
	nullptr,
	_DeferredAttr$DeferredAttrDiagHandler$PosScanner_FieldInfo_,
	_DeferredAttr$DeferredAttrDiagHandler$PosScanner_MethodInfo_,
	nullptr,
	nullptr,
	_DeferredAttr$DeferredAttrDiagHandler$PosScanner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.DeferredAttr"
};

$Object* allocate$DeferredAttr$DeferredAttrDiagHandler$PosScanner($Class* clazz) {
	return $of($alloc(DeferredAttr$DeferredAttrDiagHandler$PosScanner));
}

void DeferredAttr$DeferredAttrDiagHandler$PosScanner::init$($JCDiagnostic$DiagnosticPosition* pos) {
	$TreeScanner::init$();
	this->found = false;
	$set(this, pos, pos);
}

void DeferredAttr$DeferredAttrDiagHandler$PosScanner::scan($JCTree* tree) {
	if (tree != nullptr && tree->pos() == this->pos) {
		this->found = true;
	}
	$TreeScanner::scan(tree);
}

DeferredAttr$DeferredAttrDiagHandler$PosScanner::DeferredAttr$DeferredAttrDiagHandler$PosScanner() {
}

$Class* DeferredAttr$DeferredAttrDiagHandler$PosScanner::load$($String* name, bool initialize) {
	$loadClass(DeferredAttr$DeferredAttrDiagHandler$PosScanner, name, initialize, &_DeferredAttr$DeferredAttrDiagHandler$PosScanner_ClassInfo_, allocate$DeferredAttr$DeferredAttrDiagHandler$PosScanner);
	return class$;
}

$Class* DeferredAttr$DeferredAttrDiagHandler$PosScanner::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com