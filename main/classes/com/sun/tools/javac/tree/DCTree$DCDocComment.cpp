#include <com/sun/tools/javac/tree/DCTree$DCDocComment.h>

#include <com/sun/source/doctree/DocCommentTree.h>
#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/tools/javac/parser/Tokens$Comment.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef DOC_COMMENT

using $DocCommentTree = ::com::sun::source::doctree::DocCommentTree;
using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $Tokens$Comment = ::com::sun::tools::javac::parser::Tokens$Comment;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
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

$FieldInfo _DCTree$DCDocComment_FieldInfo_[] = {
	{"comment", "Lcom/sun/tools/javac/parser/Tokens$Comment;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCDocComment, comment)},
	{"fullBody", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;", $PUBLIC | $FINAL, $field(DCTree$DCDocComment, fullBody)},
	{"firstSentence", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;", $PUBLIC | $FINAL, $field(DCTree$DCDocComment, firstSentence)},
	{"body", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;", $PUBLIC | $FINAL, $field(DCTree$DCDocComment, body)},
	{"tags", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;", $PUBLIC | $FINAL, $field(DCTree$DCDocComment, tags)},
	{"preamble", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;", $PUBLIC | $FINAL, $field(DCTree$DCDocComment, preamble)},
	{"postamble", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;", $PUBLIC | $FINAL, $field(DCTree$DCDocComment, postamble)},
	{}
};

$MethodInfo _DCTree$DCDocComment_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/parser/Tokens$Comment;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;)V", "(Lcom/sun/tools/javac/parser/Tokens$Comment;Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;)V", $PUBLIC, $method(static_cast<void(DCTree$DCDocComment::*)($Tokens$Comment*,$List*,$List*,$List*,$List*,$List*,$List*)>(&DCTree$DCDocComment::init$))},
	{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getBlockTags", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC},
	{"getBody", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC},
	{"getFirstSentence", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC},
	{"getFullBody", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC},
	{"getPostamble", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC},
	{"getPreamble", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DCTree$DCDocComment_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.DCTree$DCDocComment", "com.sun.tools.javac.tree.DCTree", "DCDocComment", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DCTree$DCDocComment_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.DCTree$DCDocComment",
	"com.sun.tools.javac.tree.DCTree",
	"com.sun.source.doctree.DocCommentTree",
	_DCTree$DCDocComment_FieldInfo_,
	_DCTree$DCDocComment_MethodInfo_,
	nullptr,
	nullptr,
	_DCTree$DCDocComment_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.DCTree"
};

$Object* allocate$DCTree$DCDocComment($Class* clazz) {
	return $of($alloc(DCTree$DCDocComment));
}

$String* DCTree$DCDocComment::toString() {
	 return this->$DCTree::toString();
}

int32_t DCTree$DCDocComment::hashCode() {
	 return this->$DCTree::hashCode();
}

bool DCTree$DCDocComment::equals(Object$* arg0) {
	 return this->$DCTree::equals(arg0);
}

$Object* DCTree$DCDocComment::clone() {
	 return this->$DCTree::clone();
}

void DCTree$DCDocComment::finalize() {
	this->$DCTree::finalize();
}

void DCTree$DCDocComment::init$($Tokens$Comment* comment, $List* fullBody, $List* firstSentence, $List* body, $List* tags, $List* preamble, $List* postamble) {
	$DCTree::init$();
	$set(this, comment, comment);
	$set(this, firstSentence, firstSentence);
	$set(this, fullBody, fullBody);
	$set(this, body, body);
	$set(this, tags, tags);
	$set(this, preamble, preamble);
	$set(this, postamble, postamble);
}

$DocTree$Kind* DCTree$DCDocComment::getKind() {
	$init($DocTree$Kind);
	return $DocTree$Kind::DOC_COMMENT;
}

$Object* DCTree$DCDocComment::accept($DocTreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitDocComment(this, d));
}

$List* DCTree$DCDocComment::getFirstSentence() {
	return this->firstSentence;
}

$List* DCTree$DCDocComment::getFullBody() {
	return this->fullBody;
}

$List* DCTree$DCDocComment::getBody() {
	return this->body;
}

$List* DCTree$DCDocComment::getBlockTags() {
	return this->tags;
}

$List* DCTree$DCDocComment::getPreamble() {
	return this->preamble;
}

$List* DCTree$DCDocComment::getPostamble() {
	return this->postamble;
}

DCTree$DCDocComment::DCTree$DCDocComment() {
}

$Class* DCTree$DCDocComment::load$($String* name, bool initialize) {
	$loadClass(DCTree$DCDocComment, name, initialize, &_DCTree$DCDocComment_ClassInfo_, allocate$DCTree$DCDocComment);
	return class$;
}

$Class* DCTree$DCDocComment::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com