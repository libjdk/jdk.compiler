#include <com/sun/tools/javac/tree/DCTree$DCParam.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/source/doctree/IdentifierTree.h>
#include <com/sun/source/doctree/ParamTree.h>
#include <com/sun/tools/javac/tree/DCTree$DCBlockTag.h>
#include <com/sun/tools/javac/tree/DCTree$DCIdentifier.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef PARAM

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $IdentifierTree = ::com::sun::source::doctree::IdentifierTree;
using $ParamTree = ::com::sun::source::doctree::ParamTree;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $DCTree$DCBlockTag = ::com::sun::tools::javac::tree::DCTree$DCBlockTag;
using $DCTree$DCIdentifier = ::com::sun::tools::javac::tree::DCTree$DCIdentifier;
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

$FieldInfo _DCTree$DCParam_FieldInfo_[] = {
	{"isTypeParameter", "Z", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCParam, isTypeParameter$)},
	{"name", "Lcom/sun/tools/javac/tree/DCTree$DCIdentifier;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCParam, name)},
	{"description", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;", $PUBLIC | $FINAL, $field(DCTree$DCParam, description)},
	{}
};

$MethodInfo _DCTree$DCParam_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(ZLcom/sun/tools/javac/tree/DCTree$DCIdentifier;Ljava/util/List;)V", "(ZLcom/sun/tools/javac/tree/DCTree$DCIdentifier;Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;)V", 0, $method(static_cast<void(DCTree$DCParam::*)(bool,$DCTree$DCIdentifier*,$List*)>(&DCTree$DCParam::init$))},
	{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getDescription", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC},
	{"getName", "()Lcom/sun/source/doctree/IdentifierTree;", nullptr, $PUBLIC},
	{"isTypeParameter", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DCTree$DCParam_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.DCTree$DCParam", "com.sun.tools.javac.tree.DCTree", "DCParam", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCBlockTag", "com.sun.tools.javac.tree.DCTree", "DCBlockTag", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DCTree$DCParam_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.DCTree$DCParam",
	"com.sun.tools.javac.tree.DCTree$DCBlockTag",
	"com.sun.source.doctree.ParamTree",
	_DCTree$DCParam_FieldInfo_,
	_DCTree$DCParam_MethodInfo_,
	nullptr,
	nullptr,
	_DCTree$DCParam_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.DCTree"
};

$Object* allocate$DCTree$DCParam($Class* clazz) {
	return $of($alloc(DCTree$DCParam));
}

$String* DCTree$DCParam::getTagName() {
	 return this->$DCTree$DCBlockTag::getTagName();
}

$String* DCTree$DCParam::toString() {
	 return this->$DCTree$DCBlockTag::toString();
}

int32_t DCTree$DCParam::hashCode() {
	 return this->$DCTree$DCBlockTag::hashCode();
}

bool DCTree$DCParam::equals(Object$* arg0) {
	 return this->$DCTree$DCBlockTag::equals(arg0);
}

$Object* DCTree$DCParam::clone() {
	 return this->$DCTree$DCBlockTag::clone();
}

void DCTree$DCParam::finalize() {
	this->$DCTree$DCBlockTag::finalize();
}

void DCTree$DCParam::init$(bool isTypeParameter, $DCTree$DCIdentifier* name, $List* description) {
	$DCTree$DCBlockTag::init$();
	this->isTypeParameter$ = isTypeParameter;
	$set(this, name, name);
	$set(this, description, description);
}

$DocTree$Kind* DCTree$DCParam::getKind() {
	$init($DocTree$Kind);
	return $DocTree$Kind::PARAM;
}

$Object* DCTree$DCParam::accept($DocTreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitParam(this, d));
}

bool DCTree$DCParam::isTypeParameter() {
	return this->isTypeParameter$;
}

$IdentifierTree* DCTree$DCParam::getName() {
	return this->name;
}

$List* DCTree$DCParam::getDescription() {
	return this->description;
}

DCTree$DCParam::DCTree$DCParam() {
}

$Class* DCTree$DCParam::load$($String* name, bool initialize) {
	$loadClass(DCTree$DCParam, name, initialize, &_DCTree$DCParam_ClassInfo_, allocate$DCTree$DCParam);
	return class$;
}

$Class* DCTree$DCParam::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com