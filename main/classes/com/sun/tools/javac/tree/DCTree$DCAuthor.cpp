#include <com/sun/tools/javac/tree/DCTree$DCAuthor.h>

#include <com/sun/source/doctree/AuthorTree.h>
#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/tools/javac/tree/DCTree$DCBlockTag.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef AUTHOR

using $AuthorTree = ::com::sun::source::doctree::AuthorTree;
using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
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

$FieldInfo _DCTree$DCAuthor_FieldInfo_[] = {
	{"name", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;", $PUBLIC | $FINAL, $field(DCTree$DCAuthor, name)},
	{}
};

$MethodInfo _DCTree$DCAuthor_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;)V", 0, $method(static_cast<void(DCTree$DCAuthor::*)($List*)>(&DCTree$DCAuthor::init$))},
	{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC},
	{"getName", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DCTree$DCAuthor_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.DCTree$DCAuthor", "com.sun.tools.javac.tree.DCTree", "DCAuthor", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCBlockTag", "com.sun.tools.javac.tree.DCTree", "DCBlockTag", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DCTree$DCAuthor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.DCTree$DCAuthor",
	"com.sun.tools.javac.tree.DCTree$DCBlockTag",
	"com.sun.source.doctree.AuthorTree",
	_DCTree$DCAuthor_FieldInfo_,
	_DCTree$DCAuthor_MethodInfo_,
	nullptr,
	nullptr,
	_DCTree$DCAuthor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.DCTree"
};

$Object* allocate$DCTree$DCAuthor($Class* clazz) {
	return $of($alloc(DCTree$DCAuthor));
}

$String* DCTree$DCAuthor::getTagName() {
	 return this->$DCTree$DCBlockTag::getTagName();
}

$String* DCTree$DCAuthor::toString() {
	 return this->$DCTree$DCBlockTag::toString();
}

int32_t DCTree$DCAuthor::hashCode() {
	 return this->$DCTree$DCBlockTag::hashCode();
}

bool DCTree$DCAuthor::equals(Object$* arg0) {
	 return this->$DCTree$DCBlockTag::equals(arg0);
}

$Object* DCTree$DCAuthor::clone() {
	 return this->$DCTree$DCBlockTag::clone();
}

void DCTree$DCAuthor::finalize() {
	this->$DCTree$DCBlockTag::finalize();
}

void DCTree$DCAuthor::init$($List* name) {
	$DCTree$DCBlockTag::init$();
	$set(this, name, name);
}

$DocTree$Kind* DCTree$DCAuthor::getKind() {
	$init($DocTree$Kind);
	return $DocTree$Kind::AUTHOR;
}

$Object* DCTree$DCAuthor::accept($DocTreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitAuthor(this, d));
}

$List* DCTree$DCAuthor::getName() {
	return this->name;
}

DCTree$DCAuthor::DCTree$DCAuthor() {
}

$Class* DCTree$DCAuthor::load$($String* name, bool initialize) {
	$loadClass(DCTree$DCAuthor, name, initialize, &_DCTree$DCAuthor_ClassInfo_, allocate$DCTree$DCAuthor);
	return class$;
}

$Class* DCTree$DCAuthor::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com