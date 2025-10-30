#include <com/sun/tools/javac/tree/DCTree$DCEndElement.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/source/doctree/EndElementTree.h>
#include <com/sun/tools/javac/tree/DCTree$DCEndPosTree.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

#undef END_ELEMENT

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $EndElementTree = ::com::sun::source::doctree::EndElementTree;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $DCTree$DCEndPosTree = ::com::sun::tools::javac::tree::DCTree$DCEndPosTree;
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

$FieldInfo _DCTree$DCEndElement_FieldInfo_[] = {
	{"name", "Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCEndElement, name)},
	{}
};

$MethodInfo _DCTree$DCEndElement_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/lang/model/element/Name;)V", nullptr, 0, $method(static_cast<void(DCTree$DCEndElement::*)($Name*)>(&DCTree$DCEndElement::init$))},
	{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC},
	{"getName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DCTree$DCEndElement_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.DCTree$DCEndElement", "com.sun.tools.javac.tree.DCTree", "DCEndElement", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCEndPosTree", "com.sun.tools.javac.tree.DCTree", "DCEndPosTree", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DCTree$DCEndElement_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.DCTree$DCEndElement",
	"com.sun.tools.javac.tree.DCTree$DCEndPosTree",
	"com.sun.source.doctree.EndElementTree",
	_DCTree$DCEndElement_FieldInfo_,
	_DCTree$DCEndElement_MethodInfo_,
	"Lcom/sun/tools/javac/tree/DCTree$DCEndPosTree<Lcom/sun/tools/javac/tree/DCTree$DCEndElement;>;Lcom/sun/source/doctree/EndElementTree;",
	nullptr,
	_DCTree$DCEndElement_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.DCTree"
};

$Object* allocate$DCTree$DCEndElement($Class* clazz) {
	return $of($alloc(DCTree$DCEndElement));
}

$String* DCTree$DCEndElement::toString() {
	 return this->$DCTree$DCEndPosTree::toString();
}

int32_t DCTree$DCEndElement::hashCode() {
	 return this->$DCTree$DCEndPosTree::hashCode();
}

bool DCTree$DCEndElement::equals(Object$* arg0) {
	 return this->$DCTree$DCEndPosTree::equals(arg0);
}

$Object* DCTree$DCEndElement::clone() {
	 return this->$DCTree$DCEndPosTree::clone();
}

void DCTree$DCEndElement::finalize() {
	this->$DCTree$DCEndPosTree::finalize();
}

void DCTree$DCEndElement::init$($Name* name) {
	$DCTree$DCEndPosTree::init$();
	$set(this, name, name);
}

$DocTree$Kind* DCTree$DCEndElement::getKind() {
	$init($DocTree$Kind);
	return $DocTree$Kind::END_ELEMENT;
}

$Object* DCTree$DCEndElement::accept($DocTreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitEndElement(this, d));
}

$Name* DCTree$DCEndElement::getName() {
	return this->name;
}

DCTree$DCEndElement::DCTree$DCEndElement() {
}

$Class* DCTree$DCEndElement::load$($String* name, bool initialize) {
	$loadClass(DCTree$DCEndElement, name, initialize, &_DCTree$DCEndElement_ClassInfo_, allocate$DCTree$DCEndElement);
	return class$;
}

$Class* DCTree$DCEndElement::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com