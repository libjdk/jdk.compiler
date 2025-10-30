#include <com/sun/tools/javac/tree/DCTree$DCUnknownBlockTag.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/source/doctree/UnknownBlockTagTree.h>
#include <com/sun/tools/javac/tree/DCTree$DCBlockTag.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <java/util/List.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

#undef UNKNOWN_BLOCK_TAG

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $UnknownBlockTagTree = ::com::sun::source::doctree::UnknownBlockTagTree;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $DCTree$DCBlockTag = ::com::sun::tools::javac::tree::DCTree$DCBlockTag;
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

$FieldInfo _DCTree$DCUnknownBlockTag_FieldInfo_[] = {
	{"name", "Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCUnknownBlockTag, name)},
	{"content", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;", $PUBLIC | $FINAL, $field(DCTree$DCUnknownBlockTag, content)},
	{}
};

$MethodInfo _DCTree$DCUnknownBlockTag_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/lang/model/element/Name;Ljava/util/List;)V", "(Ljavax/lang/model/element/Name;Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;)V", 0, $method(static_cast<void(DCTree$DCUnknownBlockTag::*)($Name*,$List*)>(&DCTree$DCUnknownBlockTag::init$))},
	{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getContent", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC},
	{"getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DCTree$DCUnknownBlockTag_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.DCTree$DCUnknownBlockTag", "com.sun.tools.javac.tree.DCTree", "DCUnknownBlockTag", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCBlockTag", "com.sun.tools.javac.tree.DCTree", "DCBlockTag", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DCTree$DCUnknownBlockTag_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.DCTree$DCUnknownBlockTag",
	"com.sun.tools.javac.tree.DCTree$DCBlockTag",
	"com.sun.source.doctree.UnknownBlockTagTree",
	_DCTree$DCUnknownBlockTag_FieldInfo_,
	_DCTree$DCUnknownBlockTag_MethodInfo_,
	nullptr,
	nullptr,
	_DCTree$DCUnknownBlockTag_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.DCTree"
};

$Object* allocate$DCTree$DCUnknownBlockTag($Class* clazz) {
	return $of($alloc(DCTree$DCUnknownBlockTag));
}

$String* DCTree$DCUnknownBlockTag::toString() {
	 return this->$DCTree$DCBlockTag::toString();
}

int32_t DCTree$DCUnknownBlockTag::hashCode() {
	 return this->$DCTree$DCBlockTag::hashCode();
}

bool DCTree$DCUnknownBlockTag::equals(Object$* arg0) {
	 return this->$DCTree$DCBlockTag::equals(arg0);
}

$Object* DCTree$DCUnknownBlockTag::clone() {
	 return this->$DCTree$DCBlockTag::clone();
}

void DCTree$DCUnknownBlockTag::finalize() {
	this->$DCTree$DCBlockTag::finalize();
}

void DCTree$DCUnknownBlockTag::init$($Name* name, $List* content) {
	$DCTree$DCBlockTag::init$();
	$set(this, name, name);
	$set(this, content, content);
}

$DocTree$Kind* DCTree$DCUnknownBlockTag::getKind() {
	$init($DocTree$Kind);
	return $DocTree$Kind::UNKNOWN_BLOCK_TAG;
}

$Object* DCTree$DCUnknownBlockTag::accept($DocTreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitUnknownBlockTag(this, d));
}

$String* DCTree$DCUnknownBlockTag::getTagName() {
	return $nc($of(this->name))->toString();
}

$List* DCTree$DCUnknownBlockTag::getContent() {
	return this->content;
}

DCTree$DCUnknownBlockTag::DCTree$DCUnknownBlockTag() {
}

$Class* DCTree$DCUnknownBlockTag::load$($String* name, bool initialize) {
	$loadClass(DCTree$DCUnknownBlockTag, name, initialize, &_DCTree$DCUnknownBlockTag_ClassInfo_, allocate$DCTree$DCUnknownBlockTag);
	return class$;
}

$Class* DCTree$DCUnknownBlockTag::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com