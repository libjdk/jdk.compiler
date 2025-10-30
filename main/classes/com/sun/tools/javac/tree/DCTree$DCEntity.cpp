#include <com/sun/tools/javac/tree/DCTree$DCEntity.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/source/doctree/EntityTree.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

#undef ENTITY

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $EntityTree = ::com::sun::source::doctree::EntityTree;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _DCTree$DCEntity_FieldInfo_[] = {
	{"name", "Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCEntity, name)},
	{}
};

$MethodInfo _DCTree$DCEntity_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/lang/model/element/Name;)V", nullptr, 0, $method(static_cast<void(DCTree$DCEntity::*)($Name*)>(&DCTree$DCEntity::init$))},
	{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC},
	{"getName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DCTree$DCEntity_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.DCTree$DCEntity", "com.sun.tools.javac.tree.DCTree", "DCEntity", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DCTree$DCEntity_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.DCTree$DCEntity",
	"com.sun.tools.javac.tree.DCTree",
	"com.sun.source.doctree.EntityTree",
	_DCTree$DCEntity_FieldInfo_,
	_DCTree$DCEntity_MethodInfo_,
	nullptr,
	nullptr,
	_DCTree$DCEntity_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.DCTree"
};

$Object* allocate$DCTree$DCEntity($Class* clazz) {
	return $of($alloc(DCTree$DCEntity));
}

$String* DCTree$DCEntity::toString() {
	 return this->$DCTree::toString();
}

int32_t DCTree$DCEntity::hashCode() {
	 return this->$DCTree::hashCode();
}

bool DCTree$DCEntity::equals(Object$* arg0) {
	 return this->$DCTree::equals(arg0);
}

$Object* DCTree$DCEntity::clone() {
	 return this->$DCTree::clone();
}

void DCTree$DCEntity::finalize() {
	this->$DCTree::finalize();
}

void DCTree$DCEntity::init$($Name* name) {
	$DCTree::init$();
	$set(this, name, name);
}

$DocTree$Kind* DCTree$DCEntity::getKind() {
	$init($DocTree$Kind);
	return $DocTree$Kind::ENTITY;
}

$Object* DCTree$DCEntity::accept($DocTreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitEntity(this, d));
}

$Name* DCTree$DCEntity::getName() {
	return this->name;
}

DCTree$DCEntity::DCTree$DCEntity() {
}

$Class* DCTree$DCEntity::load$($String* name, bool initialize) {
	$loadClass(DCTree$DCEntity, name, initialize, &_DCTree$DCEntity_ClassInfo_, allocate$DCTree$DCEntity);
	return class$;
}

$Class* DCTree$DCEntity::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com