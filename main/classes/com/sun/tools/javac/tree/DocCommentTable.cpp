#include <com/sun/tools/javac/tree/DocCommentTable.h>

#include <com/sun/tools/javac/parser/Tokens$Comment.h>
#include <com/sun/tools/javac/tree/DCTree$DCDocComment.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

using $Tokens$Comment = ::com::sun::tools::javac::parser::Tokens$Comment;
using $DCTree$DCDocComment = ::com::sun::tools::javac::tree::DCTree$DCDocComment;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$MethodInfo _DocCommentTable_MethodInfo_[] = {
	{"getComment", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/parser/Tokens$Comment;", nullptr, $PUBLIC | $ABSTRACT},
	{"getCommentText", "(Lcom/sun/tools/javac/tree/JCTree;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getCommentTree", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/DCTree$DCDocComment;", nullptr, $PUBLIC | $ABSTRACT},
	{"hasComment", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"putComment", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/parser/Tokens$Comment;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DocCommentTable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.tree.DocCommentTable",
	nullptr,
	nullptr,
	nullptr,
	_DocCommentTable_MethodInfo_
};

$Object* allocate$DocCommentTable($Class* clazz) {
	return $of($alloc(DocCommentTable));
}

$Class* DocCommentTable::load$($String* name, bool initialize) {
	$loadClass(DocCommentTable, name, initialize, &_DocCommentTable_ClassInfo_, allocate$DocCommentTable);
	return class$;
}

$Class* DocCommentTable::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com