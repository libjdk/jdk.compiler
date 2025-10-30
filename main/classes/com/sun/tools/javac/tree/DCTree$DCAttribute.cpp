#include <com/sun/tools/javac/tree/DCTree$DCAttribute.h>

#include <com/sun/source/doctree/AttributeTree$ValueKind.h>
#include <com/sun/source/doctree/AttributeTree.h>
#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <java/util/List.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

#undef ATTRIBUTE
#undef EMPTY

using $AttributeTree = ::com::sun::source::doctree::AttributeTree;
using $AttributeTree$ValueKind = ::com::sun::source::doctree::AttributeTree$ValueKind;
using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $Assert = ::com::sun::tools::javac::util::Assert;
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

$FieldInfo _DCTree$DCAttribute_FieldInfo_[] = {
	{"name", "Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCAttribute, name)},
	{"vkind", "Lcom/sun/source/doctree/AttributeTree$ValueKind;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCAttribute, vkind)},
	{"value", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;", $PUBLIC | $FINAL, $field(DCTree$DCAttribute, value)},
	{}
};

$MethodInfo _DCTree$DCAttribute_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/lang/model/element/Name;Lcom/sun/source/doctree/AttributeTree$ValueKind;Ljava/util/List;)V", "(Ljavax/lang/model/element/Name;Lcom/sun/source/doctree/AttributeTree$ValueKind;Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;)V", 0, $method(static_cast<void(DCTree$DCAttribute::*)($Name*,$AttributeTree$ValueKind*,$List*)>(&DCTree$DCAttribute::init$))},
	{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC},
	{"getName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC},
	{"getValue", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;", $PUBLIC},
	{"getValueKind", "()Lcom/sun/source/doctree/AttributeTree$ValueKind;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DCTree$DCAttribute_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.DCTree$DCAttribute", "com.sun.tools.javac.tree.DCTree", "DCAttribute", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DCTree$DCAttribute_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.DCTree$DCAttribute",
	"com.sun.tools.javac.tree.DCTree",
	"com.sun.source.doctree.AttributeTree",
	_DCTree$DCAttribute_FieldInfo_,
	_DCTree$DCAttribute_MethodInfo_,
	nullptr,
	nullptr,
	_DCTree$DCAttribute_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.DCTree"
};

$Object* allocate$DCTree$DCAttribute($Class* clazz) {
	return $of($alloc(DCTree$DCAttribute));
}

$String* DCTree$DCAttribute::toString() {
	 return this->$DCTree::toString();
}

int32_t DCTree$DCAttribute::hashCode() {
	 return this->$DCTree::hashCode();
}

bool DCTree$DCAttribute::equals(Object$* arg0) {
	 return this->$DCTree::equals(arg0);
}

$Object* DCTree$DCAttribute::clone() {
	 return this->$DCTree::clone();
}

void DCTree$DCAttribute::finalize() {
	this->$DCTree::finalize();
}

void DCTree$DCAttribute::init$($Name* name, $AttributeTree$ValueKind* vkind, $List* value) {
	$DCTree::init$();
	$init($AttributeTree$ValueKind);
	$Assert::check((vkind == $AttributeTree$ValueKind::EMPTY) ? (value == nullptr) : (value != nullptr));
	$set(this, name, name);
	$set(this, vkind, vkind);
	$set(this, value, value);
}

$DocTree$Kind* DCTree$DCAttribute::getKind() {
	$init($DocTree$Kind);
	return $DocTree$Kind::ATTRIBUTE;
}

$Object* DCTree$DCAttribute::accept($DocTreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitAttribute(this, d));
}

$Name* DCTree$DCAttribute::getName() {
	return this->name;
}

$AttributeTree$ValueKind* DCTree$DCAttribute::getValueKind() {
	return this->vkind;
}

$List* DCTree$DCAttribute::getValue() {
	return this->value;
}

DCTree$DCAttribute::DCTree$DCAttribute() {
}

$Class* DCTree$DCAttribute::load$($String* name, bool initialize) {
	$loadClass(DCTree$DCAttribute, name, initialize, &_DCTree$DCAttribute_ClassInfo_, allocate$DCTree$DCAttribute);
	return class$;
}

$Class* DCTree$DCAttribute::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com