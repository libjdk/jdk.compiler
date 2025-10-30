#include <com/sun/tools/javac/tree/DCTree$DCVersion.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/source/doctree/VersionTree.h>
#include <com/sun/tools/javac/tree/DCTree$DCBlockTag.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef VERSION

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $VersionTree = ::com::sun::source::doctree::VersionTree;
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

$FieldInfo _DCTree$DCVersion_FieldInfo_[] = {
	{"body", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;", $PUBLIC | $FINAL, $field(DCTree$DCVersion, body)},
	{}
};

$MethodInfo _DCTree$DCVersion_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;)V", 0, $method(static_cast<void(DCTree$DCVersion::*)($List*)>(&DCTree$DCVersion::init$))},
	{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getBody", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DCTree$DCVersion_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.DCTree$DCVersion", "com.sun.tools.javac.tree.DCTree", "DCVersion", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCBlockTag", "com.sun.tools.javac.tree.DCTree", "DCBlockTag", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DCTree$DCVersion_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.DCTree$DCVersion",
	"com.sun.tools.javac.tree.DCTree$DCBlockTag",
	"com.sun.source.doctree.VersionTree",
	_DCTree$DCVersion_FieldInfo_,
	_DCTree$DCVersion_MethodInfo_,
	nullptr,
	nullptr,
	_DCTree$DCVersion_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.DCTree"
};

$Object* allocate$DCTree$DCVersion($Class* clazz) {
	return $of($alloc(DCTree$DCVersion));
}

$String* DCTree$DCVersion::getTagName() {
	 return this->$DCTree$DCBlockTag::getTagName();
}

$String* DCTree$DCVersion::toString() {
	 return this->$DCTree$DCBlockTag::toString();
}

int32_t DCTree$DCVersion::hashCode() {
	 return this->$DCTree$DCBlockTag::hashCode();
}

bool DCTree$DCVersion::equals(Object$* arg0) {
	 return this->$DCTree$DCBlockTag::equals(arg0);
}

$Object* DCTree$DCVersion::clone() {
	 return this->$DCTree$DCBlockTag::clone();
}

void DCTree$DCVersion::finalize() {
	this->$DCTree$DCBlockTag::finalize();
}

void DCTree$DCVersion::init$($List* body) {
	$DCTree$DCBlockTag::init$();
	$set(this, body, body);
}

$DocTree$Kind* DCTree$DCVersion::getKind() {
	$init($DocTree$Kind);
	return $DocTree$Kind::VERSION;
}

$Object* DCTree$DCVersion::accept($DocTreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitVersion(this, d));
}

$List* DCTree$DCVersion::getBody() {
	return this->body;
}

DCTree$DCVersion::DCTree$DCVersion() {
}

$Class* DCTree$DCVersion::load$($String* name, bool initialize) {
	$loadClass(DCTree$DCVersion, name, initialize, &_DCTree$DCVersion_ClassInfo_, allocate$DCTree$DCVersion);
	return class$;
}

$Class* DCTree$DCVersion::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com