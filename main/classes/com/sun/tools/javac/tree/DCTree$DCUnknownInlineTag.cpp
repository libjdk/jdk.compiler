#include <com/sun/tools/javac/tree/DCTree$DCUnknownInlineTag.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/source/doctree/UnknownInlineTagTree.h>
#include <com/sun/tools/javac/tree/DCTree$DCInlineTag.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <java/util/List.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

#undef UNKNOWN_INLINE_TAG

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $UnknownInlineTagTree = ::com::sun::source::doctree::UnknownInlineTagTree;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $DCTree$DCInlineTag = ::com::sun::tools::javac::tree::DCTree$DCInlineTag;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _DCTree$DCUnknownInlineTag_FieldInfo_[] = {
	{"name", "Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCUnknownInlineTag, name)},
	{"content", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;", $PUBLIC | $FINAL, $field(DCTree$DCUnknownInlineTag, content)},
	{}
};

$MethodInfo _DCTree$DCUnknownInlineTag_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/lang/model/element/Name;Ljava/util/List;)V", "(Ljavax/lang/model/element/Name;Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;)V", 0, $method(static_cast<void(DCTree$DCUnknownInlineTag::*)($Name*,$List*)>(&DCTree$DCUnknownInlineTag::init$))},
	{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getContent", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC},
	{"getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DCTree$DCUnknownInlineTag_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.DCTree$DCUnknownInlineTag", "com.sun.tools.javac.tree.DCTree", "DCUnknownInlineTag", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCInlineTag", "com.sun.tools.javac.tree.DCTree", "DCInlineTag", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DCTree$DCUnknownInlineTag_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.DCTree$DCUnknownInlineTag",
	"com.sun.tools.javac.tree.DCTree$DCInlineTag",
	"com.sun.source.doctree.UnknownInlineTagTree",
	_DCTree$DCUnknownInlineTag_FieldInfo_,
	_DCTree$DCUnknownInlineTag_MethodInfo_,
	nullptr,
	nullptr,
	_DCTree$DCUnknownInlineTag_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.DCTree"
};

$Object* allocate$DCTree$DCUnknownInlineTag($Class* clazz) {
	return $of($alloc(DCTree$DCUnknownInlineTag));
}

$String* DCTree$DCUnknownInlineTag::toString() {
	 return this->$DCTree$DCInlineTag::toString();
}

int32_t DCTree$DCUnknownInlineTag::hashCode() {
	 return this->$DCTree$DCInlineTag::hashCode();
}

bool DCTree$DCUnknownInlineTag::equals(Object$* arg0) {
	 return this->$DCTree$DCInlineTag::equals(arg0);
}

$Object* DCTree$DCUnknownInlineTag::clone() {
	 return this->$DCTree$DCInlineTag::clone();
}

void DCTree$DCUnknownInlineTag::finalize() {
	this->$DCTree$DCInlineTag::finalize();
}

void DCTree$DCUnknownInlineTag::init$($Name* name, $List* content) {
	$DCTree$DCInlineTag::init$();
	$set(this, name, name);
	$set(this, content, content);
}

$DocTree$Kind* DCTree$DCUnknownInlineTag::getKind() {
	$init($DocTree$Kind);
	return $DocTree$Kind::UNKNOWN_INLINE_TAG;
}

$Object* DCTree$DCUnknownInlineTag::accept($DocTreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitUnknownInlineTag(this, d));
}

$String* DCTree$DCUnknownInlineTag::getTagName() {
	return $nc($of(this->name))->toString();
}

$List* DCTree$DCUnknownInlineTag::getContent() {
	return this->content;
}

DCTree$DCUnknownInlineTag::DCTree$DCUnknownInlineTag() {
}

$Class* DCTree$DCUnknownInlineTag::load$($String* name, bool initialize) {
	$loadClass(DCTree$DCUnknownInlineTag, name, initialize, &_DCTree$DCUnknownInlineTag_ClassInfo_, allocate$DCTree$DCUnknownInlineTag);
	return class$;
}

$Class* DCTree$DCUnknownInlineTag::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com