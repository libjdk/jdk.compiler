#include <com/sun/tools/javac/tree/DCTree$DCInlineTag.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/tools/javac/tree/DCTree$DCEndPosTree.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <jcpp.h>

using $DocTree = ::com::sun::source::doctree::DocTree;
using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $InlineTagTree = ::com::sun::source::doctree::InlineTagTree;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $DCTree$DCEndPosTree = ::com::sun::tools::javac::tree::DCTree$DCEndPosTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$MethodInfo _DCTree$DCInlineTag_MethodInfo_[] = {
	{"*accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DCTree$DCInlineTag::*)()>(&DCTree$DCInlineTag::init$))},
	{"getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DCTree$DCInlineTag_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.DCTree$DCInlineTag", "com.sun.tools.javac.tree.DCTree", "DCInlineTag", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.tree.DCTree$DCEndPosTree", "com.sun.tools.javac.tree.DCTree", "DCEndPosTree", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DCTree$DCInlineTag_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.tree.DCTree$DCInlineTag",
	"com.sun.tools.javac.tree.DCTree$DCEndPosTree",
	"com.sun.source.doctree.InlineTagTree",
	nullptr,
	_DCTree$DCInlineTag_MethodInfo_,
	"Lcom/sun/tools/javac/tree/DCTree$DCEndPosTree<Lcom/sun/tools/javac/tree/DCTree$DCInlineTag;>;Lcom/sun/source/doctree/InlineTagTree;",
	nullptr,
	_DCTree$DCInlineTag_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.DCTree"
};

$Object* allocate$DCTree$DCInlineTag($Class* clazz) {
	return $of($alloc(DCTree$DCInlineTag));
}

$String* DCTree$DCInlineTag::toString() {
	 return this->$DCTree$DCEndPosTree::toString();
}

int32_t DCTree$DCInlineTag::hashCode() {
	 return this->$DCTree$DCEndPosTree::hashCode();
}

bool DCTree$DCInlineTag::equals(Object$* arg0) {
	 return this->$DCTree$DCEndPosTree::equals(arg0);
}

$Object* DCTree$DCInlineTag::clone() {
	 return this->$DCTree$DCEndPosTree::clone();
}

void DCTree$DCInlineTag::finalize() {
	this->$DCTree$DCEndPosTree::finalize();
}

void DCTree$DCInlineTag::init$() {
	$DCTree$DCEndPosTree::init$();
}

$String* DCTree$DCInlineTag::getTagName() {
	return $nc($(getKind()))->tagName;
}

DCTree$DCInlineTag::DCTree$DCInlineTag() {
}

$Class* DCTree$DCInlineTag::load$($String* name, bool initialize) {
	$loadClass(DCTree$DCInlineTag, name, initialize, &_DCTree$DCInlineTag_ClassInfo_, allocate$DCTree$DCInlineTag);
	return class$;
}

$Class* DCTree$DCInlineTag::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com