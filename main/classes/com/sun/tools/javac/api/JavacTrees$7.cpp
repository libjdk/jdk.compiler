#include <com/sun/tools/javac/api/JavacTrees$7.h>

#include <com/sun/source/doctree/DocCommentTree.h>
#include <com/sun/tools/javac/api/JavacTrees.h>
#include <com/sun/tools/javac/parser/Tokens$Comment.h>
#include <com/sun/tools/javac/tree/DCTree$DCDocComment.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <java/lang/UnsupportedOperationException.h>
#include <jcpp.h>

using $DocCommentTree = ::com::sun::source::doctree::DocCommentTree;
using $JavacTrees = ::com::sun::tools::javac::api::JavacTrees;
using $Tokens$Comment = ::com::sun::tools::javac::parser::Tokens$Comment;
using $DCTree$DCDocComment = ::com::sun::tools::javac::tree::DCTree$DCDocComment;
using $DocCommentTable = ::com::sun::tools::javac::tree::DocCommentTable;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$FieldInfo _JavacTrees$7_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/api/JavacTrees;", nullptr, $FINAL | $SYNTHETIC, $field(JavacTrees$7, this$0)},
	{"val$dcTree", "Lcom/sun/source/doctree/DocCommentTree;", nullptr, $FINAL | $SYNTHETIC, $field(JavacTrees$7, val$dcTree)},
	{}
};

$MethodInfo _JavacTrees$7_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/api/JavacTrees;Lcom/sun/source/doctree/DocCommentTree;)V", "()V", 0, $method(static_cast<void(JavacTrees$7::*)($JavacTrees*,$DocCommentTree*)>(&JavacTrees$7::init$))},
	{"getComment", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/parser/Tokens$Comment;", nullptr, $PUBLIC},
	{"getCommentText", "(Lcom/sun/tools/javac/tree/JCTree;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCommentTree", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/DCTree$DCDocComment;", nullptr, $PUBLIC},
	{"hasComment", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PUBLIC},
	{"putComment", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/parser/Tokens$Comment;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JavacTrees$7_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.api.JavacTrees",
	"makeTreePath",
	"(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Ljavax/tools/JavaFileObject;Lcom/sun/source/doctree/DocCommentTree;)Lcom/sun/source/util/TreePath;"
};

$InnerClassInfo _JavacTrees$7_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.JavacTrees$7", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Symbol$PackageSymbol", "com.sun.tools.javac.code.Symbol", "PackageSymbol", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JavacTrees$7_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.api.JavacTrees$7",
	"java.lang.Object",
	"com.sun.tools.javac.tree.DocCommentTable",
	_JavacTrees$7_FieldInfo_,
	_JavacTrees$7_MethodInfo_,
	nullptr,
	&_JavacTrees$7_EnclosingMethodInfo_,
	_JavacTrees$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.JavacTrees"
};

$Object* allocate$JavacTrees$7($Class* clazz) {
	return $of($alloc(JavacTrees$7));
}

void JavacTrees$7::init$($JavacTrees* this$0, $DocCommentTree* val$dcTree) {
	$set(this, this$0, this$0);
	$set(this, val$dcTree, val$dcTree);
}

bool JavacTrees$7::hasComment($JCTree* tree) {
	return false;
}

$Tokens$Comment* JavacTrees$7::getComment($JCTree* tree) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$String* JavacTrees$7::getCommentText($JCTree* tree) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$DCTree$DCDocComment* JavacTrees$7::getCommentTree($JCTree* tree) {
	return $cast($DCTree$DCDocComment, this->val$dcTree);
}

void JavacTrees$7::putComment($JCTree* tree, $Tokens$Comment* c) {
	$throwNew($UnsupportedOperationException);
}

JavacTrees$7::JavacTrees$7() {
}

$Class* JavacTrees$7::load$($String* name, bool initialize) {
	$loadClass(JavacTrees$7, name, initialize, &_JavacTrees$7_ClassInfo_, allocate$JavacTrees$7);
	return class$;
}

$Class* JavacTrees$7::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com