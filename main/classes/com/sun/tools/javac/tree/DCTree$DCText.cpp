#include <com/sun/tools/javac/tree/DCTree$DCText.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/source/doctree/TextTree.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <jcpp.h>

#undef TEXT

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $TextTree = ::com::sun::source::doctree::TextTree;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _DCTree$DCText_FieldInfo_[] = {
	{"text", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCText, text)},
	{}
};

$MethodInfo _DCTree$DCText_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(DCTree$DCText::*)($String*)>(&DCTree$DCText::init$))},
	{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getBody", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DCTree$DCText_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.DCTree$DCText", "com.sun.tools.javac.tree.DCTree", "DCText", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DCTree$DCText_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.DCTree$DCText",
	"com.sun.tools.javac.tree.DCTree",
	"com.sun.source.doctree.TextTree",
	_DCTree$DCText_FieldInfo_,
	_DCTree$DCText_MethodInfo_,
	nullptr,
	nullptr,
	_DCTree$DCText_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.DCTree"
};

$Object* allocate$DCTree$DCText($Class* clazz) {
	return $of($alloc(DCTree$DCText));
}

$String* DCTree$DCText::toString() {
	 return this->$DCTree::toString();
}

int32_t DCTree$DCText::hashCode() {
	 return this->$DCTree::hashCode();
}

bool DCTree$DCText::equals(Object$* arg0) {
	 return this->$DCTree::equals(arg0);
}

$Object* DCTree$DCText::clone() {
	 return this->$DCTree::clone();
}

void DCTree$DCText::finalize() {
	this->$DCTree::finalize();
}

void DCTree$DCText::init$($String* text) {
	$DCTree::init$();
	$set(this, text, text);
}

$DocTree$Kind* DCTree$DCText::getKind() {
	$init($DocTree$Kind);
	return $DocTree$Kind::TEXT;
}

$Object* DCTree$DCText::accept($DocTreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitText(this, d));
}

$String* DCTree$DCText::getBody() {
	return this->text;
}

DCTree$DCText::DCTree$DCText() {
}

$Class* DCTree$DCText::load$($String* name, bool initialize) {
	$loadClass(DCTree$DCText, name, initialize, &_DCTree$DCText_ClassInfo_, allocate$DCTree$DCText);
	return class$;
}

$Class* DCTree$DCText::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com