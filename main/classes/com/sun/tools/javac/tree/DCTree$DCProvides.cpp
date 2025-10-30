#include <com/sun/tools/javac/tree/DCTree$DCProvides.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/source/doctree/ProvidesTree.h>
#include <com/sun/source/doctree/ReferenceTree.h>
#include <com/sun/tools/javac/tree/DCTree$DCBlockTag.h>
#include <com/sun/tools/javac/tree/DCTree$DCReference.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef PROVIDES

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $ProvidesTree = ::com::sun::source::doctree::ProvidesTree;
using $ReferenceTree = ::com::sun::source::doctree::ReferenceTree;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $DCTree$DCBlockTag = ::com::sun::tools::javac::tree::DCTree$DCBlockTag;
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

$FieldInfo _DCTree$DCProvides_FieldInfo_[] = {
	{"serviceType", "Lcom/sun/tools/javac/tree/DCTree$DCReference;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCProvides, serviceType)},
	{"description", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;", $PUBLIC | $FINAL, $field(DCTree$DCProvides, description)},
	{}
};

$MethodInfo _DCTree$DCProvides_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/DCTree$DCReference;Ljava/util/List;)V", "(Lcom/sun/tools/javac/tree/DCTree$DCReference;Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;)V", 0, $method(static_cast<void(DCTree$DCProvides::*)($DCTree$DCReference*,$List*)>(&DCTree$DCProvides::init$))},
	{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getDescription", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC},
	{"getServiceType", "()Lcom/sun/source/doctree/ReferenceTree;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DCTree$DCProvides_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.DCTree$DCProvides", "com.sun.tools.javac.tree.DCTree", "DCProvides", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCBlockTag", "com.sun.tools.javac.tree.DCTree", "DCBlockTag", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DCTree$DCProvides_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.DCTree$DCProvides",
	"com.sun.tools.javac.tree.DCTree$DCBlockTag",
	"com.sun.source.doctree.ProvidesTree",
	_DCTree$DCProvides_FieldInfo_,
	_DCTree$DCProvides_MethodInfo_,
	nullptr,
	nullptr,
	_DCTree$DCProvides_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.DCTree"
};

$Object* allocate$DCTree$DCProvides($Class* clazz) {
	return $of($alloc(DCTree$DCProvides));
}

$String* DCTree$DCProvides::getTagName() {
	 return this->$DCTree$DCBlockTag::getTagName();
}

$String* DCTree$DCProvides::toString() {
	 return this->$DCTree$DCBlockTag::toString();
}

int32_t DCTree$DCProvides::hashCode() {
	 return this->$DCTree$DCBlockTag::hashCode();
}

bool DCTree$DCProvides::equals(Object$* arg0) {
	 return this->$DCTree$DCBlockTag::equals(arg0);
}

$Object* DCTree$DCProvides::clone() {
	 return this->$DCTree$DCBlockTag::clone();
}

void DCTree$DCProvides::finalize() {
	this->$DCTree$DCBlockTag::finalize();
}

void DCTree$DCProvides::init$($DCTree$DCReference* serviceType, $List* description) {
	$DCTree$DCBlockTag::init$();
	$set(this, serviceType, serviceType);
	$set(this, description, description);
}

$DocTree$Kind* DCTree$DCProvides::getKind() {
	$init($DocTree$Kind);
	return $DocTree$Kind::PROVIDES;
}

$Object* DCTree$DCProvides::accept($DocTreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitProvides(this, d));
}

$ReferenceTree* DCTree$DCProvides::getServiceType() {
	return this->serviceType;
}

$List* DCTree$DCProvides::getDescription() {
	return this->description;
}

DCTree$DCProvides::DCTree$DCProvides() {
}

$Class* DCTree$DCProvides::load$($String* name, bool initialize) {
	$loadClass(DCTree$DCProvides, name, initialize, &_DCTree$DCProvides_ClassInfo_, allocate$DCTree$DCProvides);
	return class$;
}

$Class* DCTree$DCProvides::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com