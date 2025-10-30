#include <com/sun/tools/javac/tree/DCTree$DCLink.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/source/doctree/LinkTree.h>
#include <com/sun/source/doctree/ReferenceTree.h>
#include <com/sun/tools/javac/tree/DCTree$DCInlineTag.h>
#include <com/sun/tools/javac/tree/DCTree$DCReference.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef LINK
#undef LINK_PLAIN

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $LinkTree = ::com::sun::source::doctree::LinkTree;
using $ReferenceTree = ::com::sun::source::doctree::ReferenceTree;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $DCTree$DCInlineTag = ::com::sun::tools::javac::tree::DCTree$DCInlineTag;
using $DCTree$DCReference = ::com::sun::tools::javac::tree::DCTree$DCReference;
using $Assert = ::com::sun::tools::javac::util::Assert;
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

$FieldInfo _DCTree$DCLink_FieldInfo_[] = {
	{"kind", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCLink, kind)},
	{"ref", "Lcom/sun/tools/javac/tree/DCTree$DCReference;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCLink, ref)},
	{"label", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;", $PUBLIC | $FINAL, $field(DCTree$DCLink, label)},
	{}
};

$MethodInfo _DCTree$DCLink_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/source/doctree/DocTree$Kind;Lcom/sun/tools/javac/tree/DCTree$DCReference;Ljava/util/List;)V", "(Lcom/sun/source/doctree/DocTree$Kind;Lcom/sun/tools/javac/tree/DCTree$DCReference;Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;)V", 0, $method(static_cast<void(DCTree$DCLink::*)($DocTree$Kind*,$DCTree$DCReference*,$List*)>(&DCTree$DCLink::init$))},
	{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC},
	{"getLabel", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC},
	{"getReference", "()Lcom/sun/source/doctree/ReferenceTree;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DCTree$DCLink_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.DCTree$DCLink", "com.sun.tools.javac.tree.DCTree", "DCLink", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCInlineTag", "com.sun.tools.javac.tree.DCTree", "DCInlineTag", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DCTree$DCLink_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.DCTree$DCLink",
	"com.sun.tools.javac.tree.DCTree$DCInlineTag",
	"com.sun.source.doctree.LinkTree",
	_DCTree$DCLink_FieldInfo_,
	_DCTree$DCLink_MethodInfo_,
	nullptr,
	nullptr,
	_DCTree$DCLink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.DCTree"
};

$Object* allocate$DCTree$DCLink($Class* clazz) {
	return $of($alloc(DCTree$DCLink));
}

$String* DCTree$DCLink::getTagName() {
	 return this->$DCTree$DCInlineTag::getTagName();
}

$String* DCTree$DCLink::toString() {
	 return this->$DCTree$DCInlineTag::toString();
}

int32_t DCTree$DCLink::hashCode() {
	 return this->$DCTree$DCInlineTag::hashCode();
}

bool DCTree$DCLink::equals(Object$* arg0) {
	 return this->$DCTree$DCInlineTag::equals(arg0);
}

$Object* DCTree$DCLink::clone() {
	 return this->$DCTree$DCInlineTag::clone();
}

void DCTree$DCLink::finalize() {
	this->$DCTree$DCInlineTag::finalize();
}

void DCTree$DCLink::init$($DocTree$Kind* kind, $DCTree$DCReference* ref, $List* label) {
	$DCTree$DCInlineTag::init$();
	$init($DocTree$Kind);
	$Assert::check(kind == $DocTree$Kind::LINK || kind == $DocTree$Kind::LINK_PLAIN);
	$set(this, kind, kind);
	$set(this, ref, ref);
	$set(this, label, label);
}

$DocTree$Kind* DCTree$DCLink::getKind() {
	return this->kind;
}

$Object* DCTree$DCLink::accept($DocTreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitLink(this, d));
}

$ReferenceTree* DCTree$DCLink::getReference() {
	return this->ref;
}

$List* DCTree$DCLink::getLabel() {
	return this->label;
}

DCTree$DCLink::DCTree$DCLink() {
}

$Class* DCTree$DCLink::load$($String* name, bool initialize) {
	$loadClass(DCTree$DCLink, name, initialize, &_DCTree$DCLink_ClassInfo_, allocate$DCTree$DCLink);
	return class$;
}

$Class* DCTree$DCLink::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com