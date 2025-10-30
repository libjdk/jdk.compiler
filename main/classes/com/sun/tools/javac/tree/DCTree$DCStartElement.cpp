#include <com/sun/tools/javac/tree/DCTree$DCStartElement.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/source/doctree/StartElementTree.h>
#include <com/sun/tools/javac/tree/DCTree$DCEndPosTree.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <java/util/List.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

#undef START_ELEMENT

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $StartElementTree = ::com::sun::source::doctree::StartElementTree;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $DCTree$DCEndPosTree = ::com::sun::tools::javac::tree::DCTree$DCEndPosTree;
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

$FieldInfo _DCTree$DCStartElement_FieldInfo_[] = {
	{"name", "Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCStartElement, name)},
	{"attrs", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;", $PUBLIC | $FINAL, $field(DCTree$DCStartElement, attrs)},
	{"selfClosing", "Z", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCStartElement, selfClosing)},
	{}
};

$MethodInfo _DCTree$DCStartElement_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/lang/model/element/Name;Ljava/util/List;Z)V", "(Ljavax/lang/model/element/Name;Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;Z)V", 0, $method(static_cast<void(DCTree$DCStartElement::*)($Name*,$List*,bool)>(&DCTree$DCStartElement::init$))},
	{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getAttributes", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC},
	{"getName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC},
	{"isSelfClosing", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DCTree$DCStartElement_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.DCTree$DCStartElement", "com.sun.tools.javac.tree.DCTree", "DCStartElement", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCEndPosTree", "com.sun.tools.javac.tree.DCTree", "DCEndPosTree", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DCTree$DCStartElement_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.DCTree$DCStartElement",
	"com.sun.tools.javac.tree.DCTree$DCEndPosTree",
	"com.sun.source.doctree.StartElementTree",
	_DCTree$DCStartElement_FieldInfo_,
	_DCTree$DCStartElement_MethodInfo_,
	"Lcom/sun/tools/javac/tree/DCTree$DCEndPosTree<Lcom/sun/tools/javac/tree/DCTree$DCStartElement;>;Lcom/sun/source/doctree/StartElementTree;",
	nullptr,
	_DCTree$DCStartElement_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.DCTree"
};

$Object* allocate$DCTree$DCStartElement($Class* clazz) {
	return $of($alloc(DCTree$DCStartElement));
}

$String* DCTree$DCStartElement::toString() {
	 return this->$DCTree$DCEndPosTree::toString();
}

int32_t DCTree$DCStartElement::hashCode() {
	 return this->$DCTree$DCEndPosTree::hashCode();
}

bool DCTree$DCStartElement::equals(Object$* arg0) {
	 return this->$DCTree$DCEndPosTree::equals(arg0);
}

$Object* DCTree$DCStartElement::clone() {
	 return this->$DCTree$DCEndPosTree::clone();
}

void DCTree$DCStartElement::finalize() {
	this->$DCTree$DCEndPosTree::finalize();
}

void DCTree$DCStartElement::init$($Name* name, $List* attrs, bool selfClosing) {
	$DCTree$DCEndPosTree::init$();
	$set(this, name, name);
	$set(this, attrs, attrs);
	this->selfClosing = selfClosing;
}

$DocTree$Kind* DCTree$DCStartElement::getKind() {
	$init($DocTree$Kind);
	return $DocTree$Kind::START_ELEMENT;
}

$Object* DCTree$DCStartElement::accept($DocTreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitStartElement(this, d));
}

$Name* DCTree$DCStartElement::getName() {
	return this->name;
}

$List* DCTree$DCStartElement::getAttributes() {
	return this->attrs;
}

bool DCTree$DCStartElement::isSelfClosing() {
	return this->selfClosing;
}

DCTree$DCStartElement::DCTree$DCStartElement() {
}

$Class* DCTree$DCStartElement::load$($String* name, bool initialize) {
	$loadClass(DCTree$DCStartElement, name, initialize, &_DCTree$DCStartElement_ClassInfo_, allocate$DCTree$DCStartElement);
	return class$;
}

$Class* DCTree$DCStartElement::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com