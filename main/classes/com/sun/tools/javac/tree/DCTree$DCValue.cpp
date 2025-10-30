#include <com/sun/tools/javac/tree/DCTree$DCValue.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/source/doctree/ReferenceTree.h>
#include <com/sun/source/doctree/ValueTree.h>
#include <com/sun/tools/javac/tree/DCTree$DCInlineTag.h>
#include <com/sun/tools/javac/tree/DCTree$DCReference.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <jcpp.h>

#undef VALUE

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $ReferenceTree = ::com::sun::source::doctree::ReferenceTree;
using $ValueTree = ::com::sun::source::doctree::ValueTree;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $DCTree$DCInlineTag = ::com::sun::tools::javac::tree::DCTree$DCInlineTag;
using $DCTree$DCReference = ::com::sun::tools::javac::tree::DCTree$DCReference;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _DCTree$DCValue_FieldInfo_[] = {
	{"ref", "Lcom/sun/tools/javac/tree/DCTree$DCReference;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCValue, ref)},
	{}
};

$MethodInfo _DCTree$DCValue_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/DCTree$DCReference;)V", nullptr, 0, $method(static_cast<void(DCTree$DCValue::*)($DCTree$DCReference*)>(&DCTree$DCValue::init$))},
	{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC},
	{"getReference", "()Lcom/sun/source/doctree/ReferenceTree;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DCTree$DCValue_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.DCTree$DCValue", "com.sun.tools.javac.tree.DCTree", "DCValue", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCInlineTag", "com.sun.tools.javac.tree.DCTree", "DCInlineTag", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DCTree$DCValue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.DCTree$DCValue",
	"com.sun.tools.javac.tree.DCTree$DCInlineTag",
	"com.sun.source.doctree.ValueTree",
	_DCTree$DCValue_FieldInfo_,
	_DCTree$DCValue_MethodInfo_,
	nullptr,
	nullptr,
	_DCTree$DCValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.DCTree"
};

$Object* allocate$DCTree$DCValue($Class* clazz) {
	return $of($alloc(DCTree$DCValue));
}

$String* DCTree$DCValue::getTagName() {
	 return this->$DCTree$DCInlineTag::getTagName();
}

$String* DCTree$DCValue::toString() {
	 return this->$DCTree$DCInlineTag::toString();
}

int32_t DCTree$DCValue::hashCode() {
	 return this->$DCTree$DCInlineTag::hashCode();
}

bool DCTree$DCValue::equals(Object$* arg0) {
	 return this->$DCTree$DCInlineTag::equals(arg0);
}

$Object* DCTree$DCValue::clone() {
	 return this->$DCTree$DCInlineTag::clone();
}

void DCTree$DCValue::finalize() {
	this->$DCTree$DCInlineTag::finalize();
}

void DCTree$DCValue::init$($DCTree$DCReference* ref) {
	$DCTree$DCInlineTag::init$();
	$set(this, ref, ref);
}

$DocTree$Kind* DCTree$DCValue::getKind() {
	$init($DocTree$Kind);
	return $DocTree$Kind::VALUE;
}

$Object* DCTree$DCValue::accept($DocTreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitValue(this, d));
}

$ReferenceTree* DCTree$DCValue::getReference() {
	return this->ref;
}

DCTree$DCValue::DCTree$DCValue() {
}

$Class* DCTree$DCValue::load$($String* name, bool initialize) {
	$loadClass(DCTree$DCValue, name, initialize, &_DCTree$DCValue_ClassInfo_, allocate$DCTree$DCValue);
	return class$;
}

$Class* DCTree$DCValue::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com