#include <com/sun/tools/javac/tree/DCTree$DCLiteral.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/source/doctree/LiteralTree.h>
#include <com/sun/source/doctree/TextTree.h>
#include <com/sun/tools/javac/tree/DCTree$DCInlineTag.h>
#include <com/sun/tools/javac/tree/DCTree$DCText.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <jcpp.h>

#undef CODE
#undef LITERAL

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $LiteralTree = ::com::sun::source::doctree::LiteralTree;
using $TextTree = ::com::sun::source::doctree::TextTree;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $DCTree$DCInlineTag = ::com::sun::tools::javac::tree::DCTree$DCInlineTag;
using $DCTree$DCText = ::com::sun::tools::javac::tree::DCTree$DCText;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _DCTree$DCLiteral_FieldInfo_[] = {
	{"kind", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCLiteral, kind)},
	{"body", "Lcom/sun/tools/javac/tree/DCTree$DCText;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCLiteral, body)},
	{}
};

$MethodInfo _DCTree$DCLiteral_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/source/doctree/DocTree$Kind;Lcom/sun/tools/javac/tree/DCTree$DCText;)V", nullptr, 0, $method(static_cast<void(DCTree$DCLiteral::*)($DocTree$Kind*,$DCTree$DCText*)>(&DCTree$DCLiteral::init$))},
	{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getBody", "()Lcom/sun/tools/javac/tree/DCTree$DCText;", nullptr, $PUBLIC},
	{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DCTree$DCLiteral_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.DCTree$DCLiteral", "com.sun.tools.javac.tree.DCTree", "DCLiteral", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCInlineTag", "com.sun.tools.javac.tree.DCTree", "DCInlineTag", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DCTree$DCLiteral_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.DCTree$DCLiteral",
	"com.sun.tools.javac.tree.DCTree$DCInlineTag",
	"com.sun.source.doctree.LiteralTree",
	_DCTree$DCLiteral_FieldInfo_,
	_DCTree$DCLiteral_MethodInfo_,
	nullptr,
	nullptr,
	_DCTree$DCLiteral_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.DCTree"
};

$Object* allocate$DCTree$DCLiteral($Class* clazz) {
	return $of($alloc(DCTree$DCLiteral));
}

$String* DCTree$DCLiteral::getTagName() {
	 return this->$DCTree$DCInlineTag::getTagName();
}

$String* DCTree$DCLiteral::toString() {
	 return this->$DCTree$DCInlineTag::toString();
}

int32_t DCTree$DCLiteral::hashCode() {
	 return this->$DCTree$DCInlineTag::hashCode();
}

bool DCTree$DCLiteral::equals(Object$* arg0) {
	 return this->$DCTree$DCInlineTag::equals(arg0);
}

$Object* DCTree$DCLiteral::clone() {
	 return this->$DCTree$DCInlineTag::clone();
}

void DCTree$DCLiteral::finalize() {
	this->$DCTree$DCInlineTag::finalize();
}

void DCTree$DCLiteral::init$($DocTree$Kind* kind, $DCTree$DCText* body) {
	$DCTree$DCInlineTag::init$();
	$init($DocTree$Kind);
	$Assert::check(kind == $DocTree$Kind::CODE || kind == $DocTree$Kind::LITERAL);
	$set(this, kind, kind);
	$set(this, body, body);
}

$DocTree$Kind* DCTree$DCLiteral::getKind() {
	return this->kind;
}

$Object* DCTree$DCLiteral::accept($DocTreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitLiteral(this, d));
}

$TextTree* DCTree$DCLiteral::getBody() {
	return this->body;
}

DCTree$DCLiteral::DCTree$DCLiteral() {
}

$Class* DCTree$DCLiteral::load$($String* name, bool initialize) {
	$loadClass(DCTree$DCLiteral, name, initialize, &_DCTree$DCLiteral_ClassInfo_, allocate$DCTree$DCLiteral);
	return class$;
}

$Class* DCTree$DCLiteral::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com