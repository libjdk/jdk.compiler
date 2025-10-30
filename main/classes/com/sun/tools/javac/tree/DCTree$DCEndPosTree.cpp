#include <com/sun/tools/javac/tree/DCTree$DCEndPosTree.h>

#include <com/sun/tools/javac/parser/Tokens$Comment.h>
#include <com/sun/tools/javac/tree/DCTree$DCDocComment.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <com/sun/tools/javac/util/Position.h>
#include <jcpp.h>

#undef NOPOS

using $Tokens$Comment = ::com::sun::tools::javac::parser::Tokens$Comment;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $DCTree$DCDocComment = ::com::sun::tools::javac::tree::DCTree$DCDocComment;
using $Position = ::com::sun::tools::javac::util::Position;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _DCTree$DCEndPosTree_FieldInfo_[] = {
	{"endPos", "I", nullptr, $PRIVATE, $field(DCTree$DCEndPosTree, endPos)},
	{}
};

$MethodInfo _DCTree$DCEndPosTree_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DCTree$DCEndPosTree::*)()>(&DCTree$DCEndPosTree::init$))},
	{"getEndPos", "(Lcom/sun/tools/javac/tree/DCTree$DCDocComment;)I", nullptr, $PUBLIC},
	{"setEndPos", "(I)Lcom/sun/tools/javac/tree/DCTree$DCEndPosTree;", "(I)TT;", $PUBLIC},
	{}
};

$InnerClassInfo _DCTree$DCEndPosTree_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.DCTree$DCEndPosTree", "com.sun.tools.javac.tree.DCTree", "DCEndPosTree", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DCTree$DCEndPosTree_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.tree.DCTree$DCEndPosTree",
	"com.sun.tools.javac.tree.DCTree",
	nullptr,
	_DCTree$DCEndPosTree_FieldInfo_,
	_DCTree$DCEndPosTree_MethodInfo_,
	"<T:Lcom/sun/tools/javac/tree/DCTree$DCEndPosTree<TT;>;>Lcom/sun/tools/javac/tree/DCTree;",
	nullptr,
	_DCTree$DCEndPosTree_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.DCTree"
};

$Object* allocate$DCTree$DCEndPosTree($Class* clazz) {
	return $of($alloc(DCTree$DCEndPosTree));
}

void DCTree$DCEndPosTree::init$() {
	$DCTree::init$();
	this->endPos = $Position::NOPOS;
}

int32_t DCTree$DCEndPosTree::getEndPos($DCTree$DCDocComment* dc) {
	return $nc($nc(dc)->comment)->getSourcePos(this->endPos);
}

DCTree$DCEndPosTree* DCTree$DCEndPosTree::setEndPos(int32_t endPos) {
	this->endPos = endPos;
	return this;
}

DCTree$DCEndPosTree::DCTree$DCEndPosTree() {
}

$Class* DCTree$DCEndPosTree::load$($String* name, bool initialize) {
	$loadClass(DCTree$DCEndPosTree, name, initialize, &_DCTree$DCEndPosTree_ClassInfo_, allocate$DCTree$DCEndPosTree);
	return class$;
}

$Class* DCTree$DCEndPosTree::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com