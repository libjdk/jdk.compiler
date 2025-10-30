#include <com/sun/source/util/DocTreePath.h>

#include <com/sun/source/doctree/DocCommentTree.h>
#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTree.h>
#include <com/sun/source/util/DocTreePath$1.h>
#include <com/sun/source/util/DocTreePath$1PathFinder.h>
#include <com/sun/source/util/DocTreePath$1Result.h>
#include <com/sun/source/util/TreePath.h>
#include <java/util/Iterator.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef DOC_COMMENT

using $DocCommentTree = ::com::sun::source::doctree::DocCommentTree;
using $DocTree = ::com::sun::source::doctree::DocTree;
using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreePath$1 = ::com::sun::source::util::DocTreePath$1;
using $DocTreePath$1PathFinder = ::com::sun::source::util::DocTreePath$1PathFinder;
using $DocTreePath$1Result = ::com::sun::source::util::DocTreePath$1Result;
using $DocTreePathScanner = ::com::sun::source::util::DocTreePathScanner;
using $TreePath = ::com::sun::source::util::TreePath;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Objects = ::java::util::Objects;

namespace com {
	namespace sun {
		namespace source {
			namespace util {

$FieldInfo _DocTreePath_FieldInfo_[] = {
	{"treePath", "Lcom/sun/source/util/TreePath;", nullptr, $PRIVATE | $FINAL, $field(DocTreePath, treePath)},
	{"docComment", "Lcom/sun/source/doctree/DocCommentTree;", nullptr, $PRIVATE | $FINAL, $field(DocTreePath, docComment)},
	{"leaf", "Lcom/sun/source/doctree/DocTree;", nullptr, $PRIVATE | $FINAL, $field(DocTreePath, leaf)},
	{"parent", "Lcom/sun/source/util/DocTreePath;", nullptr, $PRIVATE | $FINAL, $field(DocTreePath, parent)},
	{}
};

$MethodInfo _DocTreePath_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/source/util/TreePath;Lcom/sun/source/doctree/DocCommentTree;)V", nullptr, $PUBLIC, $method(static_cast<void(DocTreePath::*)($TreePath*,$DocCommentTree*)>(&DocTreePath::init$))},
	{"<init>", "(Lcom/sun/source/util/DocTreePath;Lcom/sun/source/doctree/DocTree;)V", nullptr, $PUBLIC, $method(static_cast<void(DocTreePath::*)(DocTreePath*,$DocTree*)>(&DocTreePath::init$))},
	{"getDocComment", "()Lcom/sun/source/doctree/DocCommentTree;", nullptr, $PUBLIC},
	{"getLeaf", "()Lcom/sun/source/doctree/DocTree;", nullptr, $PUBLIC},
	{"getParentPath", "()Lcom/sun/source/util/DocTreePath;", nullptr, $PUBLIC},
	{"getPath", "(Lcom/sun/source/util/TreePath;Lcom/sun/source/doctree/DocCommentTree;Lcom/sun/source/doctree/DocTree;)Lcom/sun/source/util/DocTreePath;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DocTreePath*(*)($TreePath*,$DocCommentTree*,$DocTree*)>(&DocTreePath::getPath))},
	{"getPath", "(Lcom/sun/source/util/DocTreePath;Lcom/sun/source/doctree/DocTree;)Lcom/sun/source/util/DocTreePath;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DocTreePath*(*)(DocTreePath*,$DocTree*)>(&DocTreePath::getPath))},
	{"getTreePath", "()Lcom/sun/source/util/TreePath;", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Lcom/sun/source/doctree/DocTree;>;", $PUBLIC},
	{}
};

$InnerClassInfo _DocTreePath_InnerClassesInfo_[] = {
	{"com.sun.source.util.DocTreePath$1", nullptr, nullptr, 0},
	{"com.sun.source.util.DocTreePath$1PathFinder", nullptr, "PathFinder", 0},
	{"com.sun.source.util.DocTreePath$1Result", nullptr, "Result", 0},
	{}
};

$ClassInfo _DocTreePath_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.source.util.DocTreePath",
	"java.lang.Object",
	"java.lang.Iterable",
	_DocTreePath_FieldInfo_,
	_DocTreePath_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Iterable<Lcom/sun/source/doctree/DocTree;>;",
	nullptr,
	_DocTreePath_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.source.util.DocTreePath$1,com.sun.source.util.DocTreePath$1PathFinder,com.sun.source.util.DocTreePath$1Result"
};

$Object* allocate$DocTreePath($Class* clazz) {
	return $of($alloc(DocTreePath));
}

DocTreePath* DocTreePath::getPath($TreePath* treePath, $DocCommentTree* doc, $DocTree* target) {
	$init(DocTreePath);
	return getPath($$new(DocTreePath, treePath, doc), target);
}

DocTreePath* DocTreePath::getPath(DocTreePath* path, $DocTree* target) {
	$init(DocTreePath);
	$Objects::requireNonNull(path);
	$Objects::requireNonNull(target);
	{
	}
	{
	}
	if (path->getLeaf() == target) {
		return path;
	}
	try {
		$$new($DocTreePath$1PathFinder)->scan(path, $of(target));
	} catch ($DocTreePath$1Result& result) {
		return result->path;
	}
	return nullptr;
}

void DocTreePath::init$($TreePath* treePath, $DocCommentTree* t) {
	$set(this, treePath, treePath);
	$set(this, docComment, $cast($DocCommentTree, $Objects::requireNonNull(t)));
	$set(this, parent, nullptr);
	$set(this, leaf, t);
}

void DocTreePath::init$(DocTreePath* p, $DocTree* t) {
	$init($DocTree$Kind);
	if ($nc(t)->getKind() == $DocTree$Kind::DOC_COMMENT) {
		$throwNew($IllegalArgumentException, "Use DocTreePath(TreePath, DocCommentTree) to construct DocTreePath for a DocCommentTree."_s);
	} else {
		$set(this, treePath, $nc(p)->treePath);
		$set(this, docComment, p->docComment);
		$set(this, parent, p);
	}
	$set(this, leaf, t);
}

$TreePath* DocTreePath::getTreePath() {
	return this->treePath;
}

$DocCommentTree* DocTreePath::getDocComment() {
	return this->docComment;
}

$DocTree* DocTreePath::getLeaf() {
	return this->leaf;
}

DocTreePath* DocTreePath::getParentPath() {
	return this->parent;
}

$Iterator* DocTreePath::iterator() {
	return $new($DocTreePath$1, this);
}

DocTreePath::DocTreePath() {
}

$Class* DocTreePath::load$($String* name, bool initialize) {
	$loadClass(DocTreePath, name, initialize, &_DocTreePath_ClassInfo_, allocate$DocTreePath);
	return class$;
}

$Class* DocTreePath::class$ = nullptr;

			} // util
		} // source
	} // sun
} // com