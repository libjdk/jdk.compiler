#include <com/sun/tools/javac/tree/DCTree$DCHidden.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/source/doctree/HiddenTree.h>
#include <com/sun/tools/javac/tree/DCTree$DCBlockTag.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef HIDDEN

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $HiddenTree = ::com::sun::source::doctree::HiddenTree;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $DCTree$DCBlockTag = ::com::sun::tools::javac::tree::DCTree$DCBlockTag;
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

$FieldInfo _DCTree$DCHidden_FieldInfo_[] = {
	{"body", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;", $PUBLIC | $FINAL, $field(DCTree$DCHidden, body)},
	{}
};

$MethodInfo _DCTree$DCHidden_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;)V", 0, $method(static_cast<void(DCTree$DCHidden::*)($List*)>(&DCTree$DCHidden::init$))},
	{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getBody", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DCTree$DCHidden_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.DCTree$DCHidden", "com.sun.tools.javac.tree.DCTree", "DCHidden", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCBlockTag", "com.sun.tools.javac.tree.DCTree", "DCBlockTag", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DCTree$DCHidden_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.DCTree$DCHidden",
	"com.sun.tools.javac.tree.DCTree$DCBlockTag",
	"com.sun.source.doctree.HiddenTree",
	_DCTree$DCHidden_FieldInfo_,
	_DCTree$DCHidden_MethodInfo_,
	nullptr,
	nullptr,
	_DCTree$DCHidden_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.DCTree"
};

$Object* allocate$DCTree$DCHidden($Class* clazz) {
	return $of($alloc(DCTree$DCHidden));
}

$String* DCTree$DCHidden::getTagName() {
	 return this->$DCTree$DCBlockTag::getTagName();
}

$String* DCTree$DCHidden::toString() {
	 return this->$DCTree$DCBlockTag::toString();
}

int32_t DCTree$DCHidden::hashCode() {
	 return this->$DCTree$DCBlockTag::hashCode();
}

bool DCTree$DCHidden::equals(Object$* arg0) {
	 return this->$DCTree$DCBlockTag::equals(arg0);
}

$Object* DCTree$DCHidden::clone() {
	 return this->$DCTree$DCBlockTag::clone();
}

void DCTree$DCHidden::finalize() {
	this->$DCTree$DCBlockTag::finalize();
}

void DCTree$DCHidden::init$($List* body) {
	$DCTree$DCBlockTag::init$();
	$set(this, body, body);
}

$DocTree$Kind* DCTree$DCHidden::getKind() {
	$init($DocTree$Kind);
	return $DocTree$Kind::HIDDEN;
}

$Object* DCTree$DCHidden::accept($DocTreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitHidden(this, d));
}

$List* DCTree$DCHidden::getBody() {
	return this->body;
}

DCTree$DCHidden::DCTree$DCHidden() {
}

$Class* DCTree$DCHidden::load$($String* name, bool initialize) {
	$loadClass(DCTree$DCHidden, name, initialize, &_DCTree$DCHidden_ClassInfo_, allocate$DCTree$DCHidden);
	return class$;
}

$Class* DCTree$DCHidden::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com