#include <com/sun/tools/javac/tree/DCTree$DCSerial.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/source/doctree/SerialTree.h>
#include <com/sun/tools/javac/tree/DCTree$DCBlockTag.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef SERIAL

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $SerialTree = ::com::sun::source::doctree::SerialTree;
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

$FieldInfo _DCTree$DCSerial_FieldInfo_[] = {
	{"description", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;", $PUBLIC | $FINAL, $field(DCTree$DCSerial, description)},
	{}
};

$MethodInfo _DCTree$DCSerial_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;)V", 0, $method(static_cast<void(DCTree$DCSerial::*)($List*)>(&DCTree$DCSerial::init$))},
	{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getDescription", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DCTree$DCSerial_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.DCTree$DCSerial", "com.sun.tools.javac.tree.DCTree", "DCSerial", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCBlockTag", "com.sun.tools.javac.tree.DCTree", "DCBlockTag", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DCTree$DCSerial_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.DCTree$DCSerial",
	"com.sun.tools.javac.tree.DCTree$DCBlockTag",
	"com.sun.source.doctree.SerialTree",
	_DCTree$DCSerial_FieldInfo_,
	_DCTree$DCSerial_MethodInfo_,
	nullptr,
	nullptr,
	_DCTree$DCSerial_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.DCTree"
};

$Object* allocate$DCTree$DCSerial($Class* clazz) {
	return $of($alloc(DCTree$DCSerial));
}

$String* DCTree$DCSerial::getTagName() {
	 return this->$DCTree$DCBlockTag::getTagName();
}

$String* DCTree$DCSerial::toString() {
	 return this->$DCTree$DCBlockTag::toString();
}

int32_t DCTree$DCSerial::hashCode() {
	 return this->$DCTree$DCBlockTag::hashCode();
}

bool DCTree$DCSerial::equals(Object$* arg0) {
	 return this->$DCTree$DCBlockTag::equals(arg0);
}

$Object* DCTree$DCSerial::clone() {
	 return this->$DCTree$DCBlockTag::clone();
}

void DCTree$DCSerial::finalize() {
	this->$DCTree$DCBlockTag::finalize();
}

void DCTree$DCSerial::init$($List* description) {
	$DCTree$DCBlockTag::init$();
	$set(this, description, description);
}

$DocTree$Kind* DCTree$DCSerial::getKind() {
	$init($DocTree$Kind);
	return $DocTree$Kind::SERIAL;
}

$Object* DCTree$DCSerial::accept($DocTreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitSerial(this, d));
}

$List* DCTree$DCSerial::getDescription() {
	return this->description;
}

DCTree$DCSerial::DCTree$DCSerial() {
}

$Class* DCTree$DCSerial::load$($String* name, bool initialize) {
	$loadClass(DCTree$DCSerial, name, initialize, &_DCTree$DCSerial_ClassInfo_, allocate$DCTree$DCSerial);
	return class$;
}

$Class* DCTree$DCSerial::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com