#include <com/sun/tools/javac/tree/DCTree$DCSerialField.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/source/doctree/IdentifierTree.h>
#include <com/sun/source/doctree/ReferenceTree.h>
#include <com/sun/source/doctree/SerialFieldTree.h>
#include <com/sun/tools/javac/tree/DCTree$DCBlockTag.h>
#include <com/sun/tools/javac/tree/DCTree$DCIdentifier.h>
#include <com/sun/tools/javac/tree/DCTree$DCReference.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef SERIAL_FIELD

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $IdentifierTree = ::com::sun::source::doctree::IdentifierTree;
using $ReferenceTree = ::com::sun::source::doctree::ReferenceTree;
using $SerialFieldTree = ::com::sun::source::doctree::SerialFieldTree;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $DCTree$DCBlockTag = ::com::sun::tools::javac::tree::DCTree$DCBlockTag;
using $DCTree$DCIdentifier = ::com::sun::tools::javac::tree::DCTree$DCIdentifier;
using $DCTree$DCReference = ::com::sun::tools::javac::tree::DCTree$DCReference;
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

$FieldInfo _DCTree$DCSerialField_FieldInfo_[] = {
	{"name", "Lcom/sun/tools/javac/tree/DCTree$DCIdentifier;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCSerialField, name)},
	{"type", "Lcom/sun/tools/javac/tree/DCTree$DCReference;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCSerialField, type)},
	{"description", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;", $PUBLIC | $FINAL, $field(DCTree$DCSerialField, description)},
	{}
};

$MethodInfo _DCTree$DCSerialField_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/DCTree$DCIdentifier;Lcom/sun/tools/javac/tree/DCTree$DCReference;Ljava/util/List;)V", "(Lcom/sun/tools/javac/tree/DCTree$DCIdentifier;Lcom/sun/tools/javac/tree/DCTree$DCReference;Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;)V", 0, $method(static_cast<void(DCTree$DCSerialField::*)($DCTree$DCIdentifier*,$DCTree$DCReference*,$List*)>(&DCTree$DCSerialField::init$))},
	{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getDescription", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC},
	{"getName", "()Lcom/sun/source/doctree/IdentifierTree;", nullptr, $PUBLIC},
	{"getType", "()Lcom/sun/source/doctree/ReferenceTree;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DCTree$DCSerialField_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.DCTree$DCSerialField", "com.sun.tools.javac.tree.DCTree", "DCSerialField", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCBlockTag", "com.sun.tools.javac.tree.DCTree", "DCBlockTag", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DCTree$DCSerialField_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.DCTree$DCSerialField",
	"com.sun.tools.javac.tree.DCTree$DCBlockTag",
	"com.sun.source.doctree.SerialFieldTree",
	_DCTree$DCSerialField_FieldInfo_,
	_DCTree$DCSerialField_MethodInfo_,
	nullptr,
	nullptr,
	_DCTree$DCSerialField_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.DCTree"
};

$Object* allocate$DCTree$DCSerialField($Class* clazz) {
	return $of($alloc(DCTree$DCSerialField));
}

$String* DCTree$DCSerialField::getTagName() {
	 return this->$DCTree$DCBlockTag::getTagName();
}

$String* DCTree$DCSerialField::toString() {
	 return this->$DCTree$DCBlockTag::toString();
}

int32_t DCTree$DCSerialField::hashCode() {
	 return this->$DCTree$DCBlockTag::hashCode();
}

bool DCTree$DCSerialField::equals(Object$* arg0) {
	 return this->$DCTree$DCBlockTag::equals(arg0);
}

$Object* DCTree$DCSerialField::clone() {
	 return this->$DCTree$DCBlockTag::clone();
}

void DCTree$DCSerialField::finalize() {
	this->$DCTree$DCBlockTag::finalize();
}

void DCTree$DCSerialField::init$($DCTree$DCIdentifier* name, $DCTree$DCReference* type, $List* description) {
	$DCTree$DCBlockTag::init$();
	$set(this, description, description);
	$set(this, name, name);
	$set(this, type, type);
}

$DocTree$Kind* DCTree$DCSerialField::getKind() {
	$init($DocTree$Kind);
	return $DocTree$Kind::SERIAL_FIELD;
}

$Object* DCTree$DCSerialField::accept($DocTreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitSerialField(this, d));
}

$List* DCTree$DCSerialField::getDescription() {
	return this->description;
}

$IdentifierTree* DCTree$DCSerialField::getName() {
	return this->name;
}

$ReferenceTree* DCTree$DCSerialField::getType() {
	return this->type;
}

DCTree$DCSerialField::DCTree$DCSerialField() {
}

$Class* DCTree$DCSerialField::load$($String* name, bool initialize) {
	$loadClass(DCTree$DCSerialField, name, initialize, &_DCTree$DCSerialField_ClassInfo_, allocate$DCTree$DCSerialField);
	return class$;
}

$Class* DCTree$DCSerialField::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com