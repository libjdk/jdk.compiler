#include <com/sun/tools/javac/tree/DCTree$DCInheritDoc.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/source/doctree/InheritDocTree.h>
#include <com/sun/tools/javac/tree/DCTree$DCInlineTag.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <jcpp.h>

#undef INHERIT_DOC

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $InheritDocTree = ::com::sun::source::doctree::InheritDocTree;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $DCTree$DCInlineTag = ::com::sun::tools::javac::tree::DCTree$DCInlineTag;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$MethodInfo _DCTree$DCInheritDoc_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DCTree$DCInheritDoc::*)()>(&DCTree$DCInheritDoc::init$))},
	{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DCTree$DCInheritDoc_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.DCTree$DCInheritDoc", "com.sun.tools.javac.tree.DCTree", "DCInheritDoc", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCInlineTag", "com.sun.tools.javac.tree.DCTree", "DCInlineTag", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DCTree$DCInheritDoc_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.DCTree$DCInheritDoc",
	"com.sun.tools.javac.tree.DCTree$DCInlineTag",
	"com.sun.source.doctree.InheritDocTree",
	nullptr,
	_DCTree$DCInheritDoc_MethodInfo_,
	nullptr,
	nullptr,
	_DCTree$DCInheritDoc_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.DCTree"
};

$Object* allocate$DCTree$DCInheritDoc($Class* clazz) {
	return $of($alloc(DCTree$DCInheritDoc));
}

$String* DCTree$DCInheritDoc::getTagName() {
	 return this->$DCTree$DCInlineTag::getTagName();
}

$String* DCTree$DCInheritDoc::toString() {
	 return this->$DCTree$DCInlineTag::toString();
}

int32_t DCTree$DCInheritDoc::hashCode() {
	 return this->$DCTree$DCInlineTag::hashCode();
}

bool DCTree$DCInheritDoc::equals(Object$* arg0) {
	 return this->$DCTree$DCInlineTag::equals(arg0);
}

$Object* DCTree$DCInheritDoc::clone() {
	 return this->$DCTree$DCInlineTag::clone();
}

void DCTree$DCInheritDoc::finalize() {
	this->$DCTree$DCInlineTag::finalize();
}

void DCTree$DCInheritDoc::init$() {
	$DCTree$DCInlineTag::init$();
}

$DocTree$Kind* DCTree$DCInheritDoc::getKind() {
	$init($DocTree$Kind);
	return $DocTree$Kind::INHERIT_DOC;
}

$Object* DCTree$DCInheritDoc::accept($DocTreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitInheritDoc(this, d));
}

DCTree$DCInheritDoc::DCTree$DCInheritDoc() {
}

$Class* DCTree$DCInheritDoc::load$($String* name, bool initialize) {
	$loadClass(DCTree$DCInheritDoc, name, initialize, &_DCTree$DCInheritDoc_ClassInfo_, allocate$DCTree$DCInheritDoc);
	return class$;
}

$Class* DCTree$DCInheritDoc::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com