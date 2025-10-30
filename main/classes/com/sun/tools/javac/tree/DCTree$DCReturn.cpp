#include <com/sun/tools/javac/tree/DCTree$DCReturn.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/source/doctree/ReturnTree.h>
#include <com/sun/tools/javac/tree/DCTree$DCEndPosTree.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef RETURN

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $ReturnTree = ::com::sun::source::doctree::ReturnTree;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $DCTree$DCEndPosTree = ::com::sun::tools::javac::tree::DCTree$DCEndPosTree;
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

$FieldInfo _DCTree$DCReturn_FieldInfo_[] = {
	{"inline", "Z", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCReturn, inline$)},
	{"description", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;", $PUBLIC | $FINAL, $field(DCTree$DCReturn, description)},
	{}
};

$MethodInfo _DCTree$DCReturn_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(ZLjava/util/List;)V", "(ZLjava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;)V", 0, $method(static_cast<void(DCTree$DCReturn::*)(bool,$List*)>(&DCTree$DCReturn::init$))},
	{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getDescription", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC},
	{"getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isInline", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DCTree$DCReturn_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.DCTree$DCReturn", "com.sun.tools.javac.tree.DCTree", "DCReturn", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCEndPosTree", "com.sun.tools.javac.tree.DCTree", "DCEndPosTree", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DCTree$DCReturn_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.DCTree$DCReturn",
	"com.sun.tools.javac.tree.DCTree$DCEndPosTree",
	"com.sun.source.doctree.ReturnTree",
	_DCTree$DCReturn_FieldInfo_,
	_DCTree$DCReturn_MethodInfo_,
	"Lcom/sun/tools/javac/tree/DCTree$DCEndPosTree<Lcom/sun/tools/javac/tree/DCTree$DCReturn;>;Lcom/sun/source/doctree/ReturnTree;",
	nullptr,
	_DCTree$DCReturn_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.DCTree"
};

$Object* allocate$DCTree$DCReturn($Class* clazz) {
	return $of($alloc(DCTree$DCReturn));
}

$String* DCTree$DCReturn::toString() {
	 return this->$DCTree$DCEndPosTree::toString();
}

int32_t DCTree$DCReturn::hashCode() {
	 return this->$DCTree$DCEndPosTree::hashCode();
}

bool DCTree$DCReturn::equals(Object$* arg0) {
	 return this->$DCTree$DCEndPosTree::equals(arg0);
}

$Object* DCTree$DCReturn::clone() {
	 return this->$DCTree$DCEndPosTree::clone();
}

void DCTree$DCReturn::finalize() {
	this->$DCTree$DCEndPosTree::finalize();
}

void DCTree$DCReturn::init$(bool inline$, $List* description) {
	$DCTree$DCEndPosTree::init$();
	this->inline$ = inline$;
	$set(this, description, description);
}

$String* DCTree$DCReturn::getTagName() {
	return "return"_s;
}

$DocTree$Kind* DCTree$DCReturn::getKind() {
	$init($DocTree$Kind);
	return $DocTree$Kind::RETURN;
}

$Object* DCTree$DCReturn::accept($DocTreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitReturn(this, d));
}

bool DCTree$DCReturn::isInline() {
	return this->inline$;
}

$List* DCTree$DCReturn::getDescription() {
	return this->description;
}

DCTree$DCReturn::DCTree$DCReturn() {
}

$Class* DCTree$DCReturn::load$($String* name, bool initialize) {
	$loadClass(DCTree$DCReturn, name, initialize, &_DCTree$DCReturn_ClassInfo_, allocate$DCTree$DCReturn);
	return class$;
}

$Class* DCTree$DCReturn::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com