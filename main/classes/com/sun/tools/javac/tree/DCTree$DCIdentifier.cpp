#include <com/sun/tools/javac/tree/DCTree$DCIdentifier.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/source/doctree/IdentifierTree.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

#undef IDENTIFIER

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $IdentifierTree = ::com::sun::source::doctree::IdentifierTree;
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

$FieldInfo _DCTree$DCIdentifier_FieldInfo_[] = {
	{"name", "Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCIdentifier, name)},
	{}
};

$MethodInfo _DCTree$DCIdentifier_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/lang/model/element/Name;)V", nullptr, 0, $method(static_cast<void(DCTree$DCIdentifier::*)($Name*)>(&DCTree$DCIdentifier::init$))},
	{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC},
	{"getName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DCTree$DCIdentifier_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.DCTree$DCIdentifier", "com.sun.tools.javac.tree.DCTree", "DCIdentifier", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DCTree$DCIdentifier_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.DCTree$DCIdentifier",
	"com.sun.tools.javac.tree.DCTree",
	"com.sun.source.doctree.IdentifierTree",
	_DCTree$DCIdentifier_FieldInfo_,
	_DCTree$DCIdentifier_MethodInfo_,
	nullptr,
	nullptr,
	_DCTree$DCIdentifier_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.DCTree"
};

$Object* allocate$DCTree$DCIdentifier($Class* clazz) {
	return $of($alloc(DCTree$DCIdentifier));
}

$String* DCTree$DCIdentifier::toString() {
	 return this->$DCTree::toString();
}

int32_t DCTree$DCIdentifier::hashCode() {
	 return this->$DCTree::hashCode();
}

bool DCTree$DCIdentifier::equals(Object$* arg0) {
	 return this->$DCTree::equals(arg0);
}

$Object* DCTree$DCIdentifier::clone() {
	 return this->$DCTree::clone();
}

void DCTree$DCIdentifier::finalize() {
	this->$DCTree::finalize();
}

void DCTree$DCIdentifier::init$($Name* name) {
	$DCTree::init$();
	$set(this, name, name);
}

$DocTree$Kind* DCTree$DCIdentifier::getKind() {
	$init($DocTree$Kind);
	return $DocTree$Kind::IDENTIFIER;
}

$Object* DCTree$DCIdentifier::accept($DocTreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitIdentifier(this, d));
}

$Name* DCTree$DCIdentifier::getName() {
	return this->name;
}

DCTree$DCIdentifier::DCTree$DCIdentifier() {
}

$Class* DCTree$DCIdentifier::load$($String* name, bool initialize) {
	$loadClass(DCTree$DCIdentifier, name, initialize, &_DCTree$DCIdentifier_ClassInfo_, allocate$DCTree$DCIdentifier);
	return class$;
}

$Class* DCTree$DCIdentifier::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com