#include <com/sun/tools/javac/tree/DCTree$DCThrows.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/source/doctree/ReferenceTree.h>
#include <com/sun/source/doctree/ThrowsTree.h>
#include <com/sun/tools/javac/tree/DCTree$DCBlockTag.h>
#include <com/sun/tools/javac/tree/DCTree$DCReference.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef EXCEPTION
#undef THROWS

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $ReferenceTree = ::com::sun::source::doctree::ReferenceTree;
using $ThrowsTree = ::com::sun::source::doctree::ThrowsTree;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $DCTree$DCBlockTag = ::com::sun::tools::javac::tree::DCTree$DCBlockTag;
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

$FieldInfo _DCTree$DCThrows_FieldInfo_[] = {
	{"kind", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCThrows, kind)},
	{"name", "Lcom/sun/tools/javac/tree/DCTree$DCReference;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCThrows, name)},
	{"description", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;", $PUBLIC | $FINAL, $field(DCTree$DCThrows, description)},
	{}
};

$MethodInfo _DCTree$DCThrows_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/source/doctree/DocTree$Kind;Lcom/sun/tools/javac/tree/DCTree$DCReference;Ljava/util/List;)V", "(Lcom/sun/source/doctree/DocTree$Kind;Lcom/sun/tools/javac/tree/DCTree$DCReference;Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;)V", 0, $method(static_cast<void(DCTree$DCThrows::*)($DocTree$Kind*,$DCTree$DCReference*,$List*)>(&DCTree$DCThrows::init$))},
	{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getDescription", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC},
	{"getExceptionName", "()Lcom/sun/source/doctree/ReferenceTree;", nullptr, $PUBLIC},
	{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DCTree$DCThrows_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.DCTree$DCThrows", "com.sun.tools.javac.tree.DCTree", "DCThrows", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCBlockTag", "com.sun.tools.javac.tree.DCTree", "DCBlockTag", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DCTree$DCThrows_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.DCTree$DCThrows",
	"com.sun.tools.javac.tree.DCTree$DCBlockTag",
	"com.sun.source.doctree.ThrowsTree",
	_DCTree$DCThrows_FieldInfo_,
	_DCTree$DCThrows_MethodInfo_,
	nullptr,
	nullptr,
	_DCTree$DCThrows_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.DCTree"
};

$Object* allocate$DCTree$DCThrows($Class* clazz) {
	return $of($alloc(DCTree$DCThrows));
}

$String* DCTree$DCThrows::getTagName() {
	 return this->$DCTree$DCBlockTag::getTagName();
}

$String* DCTree$DCThrows::toString() {
	 return this->$DCTree$DCBlockTag::toString();
}

int32_t DCTree$DCThrows::hashCode() {
	 return this->$DCTree$DCBlockTag::hashCode();
}

bool DCTree$DCThrows::equals(Object$* arg0) {
	 return this->$DCTree$DCBlockTag::equals(arg0);
}

$Object* DCTree$DCThrows::clone() {
	 return this->$DCTree$DCBlockTag::clone();
}

void DCTree$DCThrows::finalize() {
	this->$DCTree$DCBlockTag::finalize();
}

void DCTree$DCThrows::init$($DocTree$Kind* kind, $DCTree$DCReference* name, $List* description) {
	$DCTree$DCBlockTag::init$();
	$init($DocTree$Kind);
	$Assert::check(kind == $DocTree$Kind::EXCEPTION || kind == $DocTree$Kind::THROWS);
	$set(this, kind, kind);
	$set(this, name, name);
	$set(this, description, description);
}

$DocTree$Kind* DCTree$DCThrows::getKind() {
	return this->kind;
}

$Object* DCTree$DCThrows::accept($DocTreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitThrows(this, d));
}

$ReferenceTree* DCTree$DCThrows::getExceptionName() {
	return this->name;
}

$List* DCTree$DCThrows::getDescription() {
	return this->description;
}

DCTree$DCThrows::DCTree$DCThrows() {
}

$Class* DCTree$DCThrows::load$($String* name, bool initialize) {
	$loadClass(DCTree$DCThrows, name, initialize, &_DCTree$DCThrows_ClassInfo_, allocate$DCTree$DCThrows);
	return class$;
}

$Class* DCTree$DCThrows::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com