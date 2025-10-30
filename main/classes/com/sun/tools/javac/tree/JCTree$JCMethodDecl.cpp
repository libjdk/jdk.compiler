#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>

#include <com/sun/source/tree/BlockTree.h>
#include <com/sun/source/tree/MethodTree.h>
#include <com/sun/source/tree/ModifiersTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/source/tree/VariableTree.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/util/List.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

#undef METHOD
#undef METHODDEF

using $BlockTree = ::com::sun::source::tree::BlockTree;
using $MethodTree = ::com::sun::source::tree::MethodTree;
using $ModifiersTree = ::com::sun::source::tree::ModifiersTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $VariableTree = ::com::sun::source::tree::VariableTree;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCBlock = ::com::sun::tools::javac::tree::JCTree$JCBlock;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $1List = ::java::util::List;
using $1Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _JCTree$JCMethodDecl_FieldInfo_[] = {
	{"mods", "Lcom/sun/tools/javac/tree/JCTree$JCModifiers;", nullptr, $PUBLIC, $field(JCTree$JCMethodDecl, mods)},
	{"name", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC, $field(JCTree$JCMethodDecl, name)},
	{"restype", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCMethodDecl, restype)},
	{"typarams", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;>;", $PUBLIC, $field(JCTree$JCMethodDecl, typarams)},
	{"recvparam", "Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;", nullptr, $PUBLIC, $field(JCTree$JCMethodDecl, recvparam)},
	{"params", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;>;", $PUBLIC, $field(JCTree$JCMethodDecl, params)},
	{"thrown", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC, $field(JCTree$JCMethodDecl, thrown)},
	{"body", "Lcom/sun/tools/javac/tree/JCTree$JCBlock;", nullptr, $PUBLIC, $field(JCTree$JCMethodDecl, body)},
	{"defaultValue", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCMethodDecl, defaultValue)},
	{"sym", "Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, $PUBLIC, $field(JCTree$JCMethodDecl, sym)},
	{"completesNormally", "Z", nullptr, $PUBLIC, $field(JCTree$JCMethodDecl, completesNormally)},
	{}
};

$MethodInfo _JCTree$JCMethodDecl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCBlock;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;>;Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/tree/JCTree$JCBlock;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)V", $PROTECTED, $method(static_cast<void(JCTree$JCMethodDecl::*)($JCTree$JCModifiers*,$Name*,$JCTree$JCExpression*,$List*,$JCTree$JCVariableDecl*,$List*,$List*,$JCTree$JCBlock*,$JCTree$JCExpression*,$Symbol$MethodSymbol*)>(&JCTree$JCMethodDecl::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getBody", "()Lcom/sun/tools/javac/tree/JCTree$JCBlock;", nullptr, $PUBLIC},
	{"getDefaultValue", "()Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getModifiers", "()Lcom/sun/tools/javac/tree/JCTree$JCModifiers;", nullptr, $PUBLIC},
	{"getName", "()Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{"getParameters", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;>;", $PUBLIC},
	{"getReceiverParameter", "()Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;", nullptr, $PUBLIC},
	{"getReturnType", "()Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"getThrows", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC},
	{"getTypeParameters", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;>;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCMethodDecl_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCMethodDecl", "com.sun.tools.javac.tree.JCTree", "JCMethodDecl", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JCTree$JCMethodDecl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCMethodDecl",
	"com.sun.tools.javac.tree.JCTree",
	"com.sun.source.tree.MethodTree",
	_JCTree$JCMethodDecl_FieldInfo_,
	_JCTree$JCMethodDecl_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCMethodDecl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCMethodDecl($Class* clazz) {
	return $of($alloc(JCTree$JCMethodDecl));
}

$String* JCTree$JCMethodDecl::toString() {
	 return this->$JCTree::toString();
}

$Object* JCTree$JCMethodDecl::clone() {
	 return this->$JCTree::clone();
}

int32_t JCTree$JCMethodDecl::hashCode() {
	 return this->$JCTree::hashCode();
}

bool JCTree$JCMethodDecl::equals(Object$* arg0) {
	 return this->$JCTree::equals(arg0);
}

void JCTree$JCMethodDecl::finalize() {
	this->$JCTree::finalize();
}

void JCTree$JCMethodDecl::init$($JCTree$JCModifiers* mods, $Name* name, $JCTree$JCExpression* restype, $List* typarams, $JCTree$JCVariableDecl* recvparam, $List* params, $List* thrown, $JCTree$JCBlock* body, $JCTree$JCExpression* defaultValue, $Symbol$MethodSymbol* sym) {
	$JCTree::init$();
	$set(this, mods, mods);
	$set(this, name, name);
	$set(this, restype, restype);
	$set(this, typarams, typarams);
	$set(this, params, params);
	$set(this, recvparam, recvparam);
	$set(this, thrown, thrown);
	$set(this, body, body);
	$set(this, defaultValue, defaultValue);
	$set(this, sym, sym);
}

void JCTree$JCMethodDecl::accept($JCTree$Visitor* v) {
	$nc(v)->visitMethodDef(this);
}

$Tree$Kind* JCTree$JCMethodDecl::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::METHOD;
}

$ModifiersTree* JCTree$JCMethodDecl::getModifiers() {
	return this->mods;
}

$1Name* JCTree$JCMethodDecl::getName() {
	return this->name;
}

$JCTree* JCTree$JCMethodDecl::getReturnType() {
	return this->restype;
}

$1List* JCTree$JCMethodDecl::getTypeParameters() {
	return this->typarams;
}

$1List* JCTree$JCMethodDecl::getParameters() {
	return this->params;
}

$VariableTree* JCTree$JCMethodDecl::getReceiverParameter() {
	return this->recvparam;
}

$1List* JCTree$JCMethodDecl::getThrows() {
	return this->thrown;
}

$BlockTree* JCTree$JCMethodDecl::getBody() {
	return this->body;
}

$JCTree* JCTree$JCMethodDecl::getDefaultValue() {
	return this->defaultValue;
}

$Object* JCTree$JCMethodDecl::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitMethod(this, d));
}

$JCTree$Tag* JCTree$JCMethodDecl::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::METHODDEF;
}

JCTree$JCMethodDecl::JCTree$JCMethodDecl() {
}

$Class* JCTree$JCMethodDecl::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCMethodDecl, name, initialize, &_JCTree$JCMethodDecl_ClassInfo_, allocate$JCTree$JCMethodDecl);
	return class$;
}

$Class* JCTree$JCMethodDecl::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com