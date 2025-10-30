#include <com/sun/tools/javac/tree/DCTree$DCComment.h>

#include <com/sun/source/doctree/CommentTree.h>
#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <jcpp.h>

#undef COMMENT

using $CommentTree = ::com::sun::source::doctree::CommentTree;
using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _DCTree$DCComment_FieldInfo_[] = {
	{"body", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCComment, body)},
	{}
};

$MethodInfo _DCTree$DCComment_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(DCTree$DCComment::*)($String*)>(&DCTree$DCComment::init$))},
	{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getBody", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DCTree$DCComment_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.DCTree$DCComment", "com.sun.tools.javac.tree.DCTree", "DCComment", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DCTree$DCComment_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.DCTree$DCComment",
	"com.sun.tools.javac.tree.DCTree",
	"com.sun.source.doctree.CommentTree",
	_DCTree$DCComment_FieldInfo_,
	_DCTree$DCComment_MethodInfo_,
	nullptr,
	nullptr,
	_DCTree$DCComment_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.DCTree"
};

$Object* allocate$DCTree$DCComment($Class* clazz) {
	return $of($alloc(DCTree$DCComment));
}

$String* DCTree$DCComment::toString() {
	 return this->$DCTree::toString();
}

int32_t DCTree$DCComment::hashCode() {
	 return this->$DCTree::hashCode();
}

bool DCTree$DCComment::equals(Object$* arg0) {
	 return this->$DCTree::equals(arg0);
}

$Object* DCTree$DCComment::clone() {
	 return this->$DCTree::clone();
}

void DCTree$DCComment::finalize() {
	this->$DCTree::finalize();
}

void DCTree$DCComment::init$($String* body) {
	$DCTree::init$();
	$set(this, body, body);
}

$DocTree$Kind* DCTree$DCComment::getKind() {
	$init($DocTree$Kind);
	return $DocTree$Kind::COMMENT;
}

$Object* DCTree$DCComment::accept($DocTreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitComment(this, d));
}

$String* DCTree$DCComment::getBody() {
	return this->body;
}

DCTree$DCComment::DCTree$DCComment() {
}

$Class* DCTree$DCComment::load$($String* name, bool initialize) {
	$loadClass(DCTree$DCComment, name, initialize, &_DCTree$DCComment_ClassInfo_, allocate$DCTree$DCComment);
	return class$;
}

$Class* DCTree$DCComment::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com