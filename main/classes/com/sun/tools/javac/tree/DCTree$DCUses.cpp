#include <com/sun/tools/javac/tree/DCTree$DCUses.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/source/doctree/ReferenceTree.h>
#include <com/sun/source/doctree/UsesTree.h>
#include <com/sun/tools/javac/tree/DCTree$DCBlockTag.h>
#include <com/sun/tools/javac/tree/DCTree$DCReference.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef USES

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $ReferenceTree = ::com::sun::source::doctree::ReferenceTree;
using $UsesTree = ::com::sun::source::doctree::UsesTree;
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

$FieldInfo _DCTree$DCUses_FieldInfo_[] = {
	{"serviceType", "Lcom/sun/tools/javac/tree/DCTree$DCReference;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCUses, serviceType)},
	{"description", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;", $PUBLIC | $FINAL, $field(DCTree$DCUses, description)},
	{}
};

$MethodInfo _DCTree$DCUses_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/DCTree$DCReference;Ljava/util/List;)V", "(Lcom/sun/tools/javac/tree/DCTree$DCReference;Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;)V", 0, $method(static_cast<void(DCTree$DCUses::*)($DCTree$DCReference*,$List*)>(&DCTree$DCUses::init$))},
	{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getDescription", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC},
	{"getServiceType", "()Lcom/sun/source/doctree/ReferenceTree;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DCTree$DCUses_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.DCTree$DCUses", "com.sun.tools.javac.tree.DCTree", "DCUses", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCBlockTag", "com.sun.tools.javac.tree.DCTree", "DCBlockTag", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DCTree$DCUses_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.DCTree$DCUses",
	"com.sun.tools.javac.tree.DCTree$DCBlockTag",
	"com.sun.source.doctree.UsesTree",
	_DCTree$DCUses_FieldInfo_,
	_DCTree$DCUses_MethodInfo_,
	nullptr,
	nullptr,
	_DCTree$DCUses_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.DCTree"
};

$Object* allocate$DCTree$DCUses($Class* clazz) {
	return $of($alloc(DCTree$DCUses));
}

$String* DCTree$DCUses::getTagName() {
	 return this->$DCTree$DCBlockTag::getTagName();
}

$String* DCTree$DCUses::toString() {
	 return this->$DCTree$DCBlockTag::toString();
}

int32_t DCTree$DCUses::hashCode() {
	 return this->$DCTree$DCBlockTag::hashCode();
}

bool DCTree$DCUses::equals(Object$* arg0) {
	 return this->$DCTree$DCBlockTag::equals(arg0);
}

$Object* DCTree$DCUses::clone() {
	 return this->$DCTree$DCBlockTag::clone();
}

void DCTree$DCUses::finalize() {
	this->$DCTree$DCBlockTag::finalize();
}

void DCTree$DCUses::init$($DCTree$DCReference* serviceType, $List* description) {
	$DCTree$DCBlockTag::init$();
	$set(this, serviceType, serviceType);
	$set(this, description, description);
}

$DocTree$Kind* DCTree$DCUses::getKind() {
	$init($DocTree$Kind);
	return $DocTree$Kind::USES;
}

$Object* DCTree$DCUses::accept($DocTreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitUses(this, d));
}

$ReferenceTree* DCTree$DCUses::getServiceType() {
	return this->serviceType;
}

$List* DCTree$DCUses::getDescription() {
	return this->description;
}

DCTree$DCUses::DCTree$DCUses() {
}

$Class* DCTree$DCUses::load$($String* name, bool initialize) {
	$loadClass(DCTree$DCUses, name, initialize, &_DCTree$DCUses_ClassInfo_, allocate$DCTree$DCUses);
	return class$;
}

$Class* DCTree$DCUses::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com