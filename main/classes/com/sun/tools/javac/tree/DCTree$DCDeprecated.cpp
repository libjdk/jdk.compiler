#include <com/sun/tools/javac/tree/DCTree$DCDeprecated.h>

#include <com/sun/source/doctree/DeprecatedTree.h>
#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/tools/javac/tree/DCTree$DCBlockTag.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef DEPRECATED

using $DeprecatedTree = ::com::sun::source::doctree::DeprecatedTree;
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

$FieldInfo _DCTree$DCDeprecated_FieldInfo_[] = {
	{"body", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;", $PUBLIC | $FINAL, $field(DCTree$DCDeprecated, body)},
	{}
};

$MethodInfo _DCTree$DCDeprecated_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;)V", 0, $method(static_cast<void(DCTree$DCDeprecated::*)($List*)>(&DCTree$DCDeprecated::init$))},
	{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getBody", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DCTree$DCDeprecated_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.DCTree$DCDeprecated", "com.sun.tools.javac.tree.DCTree", "DCDeprecated", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCBlockTag", "com.sun.tools.javac.tree.DCTree", "DCBlockTag", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DCTree$DCDeprecated_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.DCTree$DCDeprecated",
	"com.sun.tools.javac.tree.DCTree$DCBlockTag",
	"com.sun.source.doctree.DeprecatedTree",
	_DCTree$DCDeprecated_FieldInfo_,
	_DCTree$DCDeprecated_MethodInfo_,
	nullptr,
	nullptr,
	_DCTree$DCDeprecated_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.DCTree"
};

$Object* allocate$DCTree$DCDeprecated($Class* clazz) {
	return $of($alloc(DCTree$DCDeprecated));
}

$String* DCTree$DCDeprecated::getTagName() {
	 return this->$DCTree$DCBlockTag::getTagName();
}

$String* DCTree$DCDeprecated::toString() {
	 return this->$DCTree$DCBlockTag::toString();
}

int32_t DCTree$DCDeprecated::hashCode() {
	 return this->$DCTree$DCBlockTag::hashCode();
}

bool DCTree$DCDeprecated::equals(Object$* arg0) {
	 return this->$DCTree$DCBlockTag::equals(arg0);
}

$Object* DCTree$DCDeprecated::clone() {
	 return this->$DCTree$DCBlockTag::clone();
}

void DCTree$DCDeprecated::finalize() {
	this->$DCTree$DCBlockTag::finalize();
}

void DCTree$DCDeprecated::init$($List* body) {
	$DCTree$DCBlockTag::init$();
	$set(this, body, body);
}

$DocTree$Kind* DCTree$DCDeprecated::getKind() {
	$init($DocTree$Kind);
	return $DocTree$Kind::DEPRECATED;
}

$Object* DCTree$DCDeprecated::accept($DocTreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitDeprecated(this, d));
}

$List* DCTree$DCDeprecated::getBody() {
	return this->body;
}

DCTree$DCDeprecated::DCTree$DCDeprecated() {
}

$Class* DCTree$DCDeprecated::load$($String* name, bool initialize) {
	$loadClass(DCTree$DCDeprecated, name, initialize, &_DCTree$DCDeprecated_ClassInfo_, allocate$DCTree$DCDeprecated);
	return class$;
}

$Class* DCTree$DCDeprecated::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com