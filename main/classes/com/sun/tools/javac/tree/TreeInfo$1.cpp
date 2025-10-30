#include <com/sun/tools/javac/tree/TreeInfo$1.h>

#include <com/sun/tools/javac/tree/EndPosTable.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <jcpp.h>

using $EndPosTable = ::com::sun::tools::javac::tree::EndPosTable;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _TreeInfo$1_FieldInfo_[] = {
	{"val$endPos", "I", nullptr, $FINAL | $SYNTHETIC, $field(TreeInfo$1, val$endPos)},
	{"val$tree", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, $FINAL | $SYNTHETIC, $field(TreeInfo$1, val$tree)},
	{}
};

$MethodInfo _TreeInfo$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree;I)V", "()V", 0, $method(static_cast<void(TreeInfo$1::*)($JCTree*,int32_t)>(&TreeInfo$1::init$))},
	{"getEndPosition", "(Lcom/sun/tools/javac/tree/EndPosTable;)I", nullptr, $PUBLIC},
	{"getPreferredPosition", "()I", nullptr, $PUBLIC},
	{"getStartPosition", "()I", nullptr, $PUBLIC},
	{"getTree", "()Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TreeInfo$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.tree.TreeInfo",
	"diagEndPos",
	"(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;"
};

$InnerClassInfo _TreeInfo$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.TreeInfo$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.util.JCDiagnostic$DiagnosticPosition", "com.sun.tools.javac.util.JCDiagnostic", "DiagnosticPosition", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TreeInfo$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.tree.TreeInfo$1",
	"java.lang.Object",
	"com.sun.tools.javac.util.JCDiagnostic$DiagnosticPosition",
	_TreeInfo$1_FieldInfo_,
	_TreeInfo$1_MethodInfo_,
	nullptr,
	&_TreeInfo$1_EnclosingMethodInfo_,
	_TreeInfo$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.TreeInfo"
};

$Object* allocate$TreeInfo$1($Class* clazz) {
	return $of($alloc(TreeInfo$1));
}

void TreeInfo$1::init$($JCTree* val$tree, int32_t val$endPos) {
	$set(this, val$tree, val$tree);
	this->val$endPos = val$endPos;
}

$JCTree* TreeInfo$1::getTree() {
	return this->val$tree;
}

int32_t TreeInfo$1::getStartPosition() {
	return $TreeInfo::getStartPos(this->val$tree);
}

int32_t TreeInfo$1::getPreferredPosition() {
	return this->val$endPos;
}

int32_t TreeInfo$1::getEndPosition($EndPosTable* endPosTable) {
	return $TreeInfo::getEndPos(this->val$tree, endPosTable);
}

TreeInfo$1::TreeInfo$1() {
}

$Class* TreeInfo$1::load$($String* name, bool initialize) {
	$loadClass(TreeInfo$1, name, initialize, &_TreeInfo$1_ClassInfo_, allocate$TreeInfo$1);
	return class$;
}

$Class* TreeInfo$1::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com