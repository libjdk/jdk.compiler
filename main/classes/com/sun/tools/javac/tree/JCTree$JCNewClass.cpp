#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>

#include <com/sun/source/tree/ClassTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/NewClassTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef NEWCLASS
#undef NEW_CLASS

using $ClassTree = ::com::sun::source::tree::ClassTree;
using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $NewClassTree = ::com::sun::source::tree::NewClassTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $1List = ::java::util::List;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _JCTree$JCNewClass_FieldInfo_[] = {
	{"encl", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCNewClass, encl)},
	{"typeargs", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC, $field(JCTree$JCNewClass, typeargs)},
	{"clazz", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCNewClass, clazz)},
	{"args", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC, $field(JCTree$JCNewClass, args)},
	{"def", "Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;", nullptr, $PUBLIC, $field(JCTree$JCNewClass, def)},
	{"constructor", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $field(JCTree$JCNewClass, constructor)},
	{"varargsElement", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(JCTree$JCNewClass, varargsElement)},
	{"constructorType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(JCTree$JCNewClass, constructorType)},
	{}
};

$MethodInfo _JCTree$JCNewClass_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", $PROTECTED, $method(static_cast<void(JCTree$JCNewClass::*)($JCTree$JCExpression*,$List*,$JCTree$JCExpression*,$List*,$JCTree$JCClassDecl*)>(&JCTree$JCNewClass::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"classDeclRemoved", "()Z", nullptr, $PUBLIC},
	{"getArguments", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC},
	{"getClassBody", "()Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;", nullptr, $PUBLIC},
	{"getEnclosingExpression", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getIdentifier", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"getTypeArguments", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCNewClass_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCNewClass", "com.sun.tools.javac.tree.JCTree", "JCNewClass", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCPolyExpression", "com.sun.tools.javac.tree.JCTree", "JCPolyExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCNewClass_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCNewClass",
	"com.sun.tools.javac.tree.JCTree$JCPolyExpression",
	"com.sun.source.tree.NewClassTree",
	_JCTree$JCNewClass_FieldInfo_,
	_JCTree$JCNewClass_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCNewClass_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCNewClass($Class* clazz) {
	return $of($alloc(JCTree$JCNewClass));
}

$String* JCTree$JCNewClass::toString() {
	 return this->$JCTree$JCPolyExpression::toString();
}

$Object* JCTree$JCNewClass::clone() {
	 return this->$JCTree$JCPolyExpression::clone();
}

int32_t JCTree$JCNewClass::hashCode() {
	 return this->$JCTree$JCPolyExpression::hashCode();
}

bool JCTree$JCNewClass::equals(Object$* arg0) {
	 return this->$JCTree$JCPolyExpression::equals(arg0);
}

void JCTree$JCNewClass::finalize() {
	this->$JCTree$JCPolyExpression::finalize();
}

void JCTree$JCNewClass::init$($JCTree$JCExpression* encl, $List* typeargs, $JCTree$JCExpression* clazz, $List* args, $JCTree$JCClassDecl* def) {
	$JCTree$JCPolyExpression::init$();
	$set(this, encl, encl);
	$set(this, typeargs, (typeargs == nullptr) ? $List::nil() : typeargs);
	$set(this, clazz, clazz);
	$set(this, args, args);
	$set(this, def, def);
}

void JCTree$JCNewClass::accept($JCTree$Visitor* v) {
	$nc(v)->visitNewClass(this);
}

$Tree$Kind* JCTree$JCNewClass::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::NEW_CLASS;
}

$ExpressionTree* JCTree$JCNewClass::getEnclosingExpression() {
	return this->encl;
}

$1List* JCTree$JCNewClass::getTypeArguments() {
	return this->typeargs;
}

$ExpressionTree* JCTree$JCNewClass::getIdentifier() {
	return this->clazz;
}

$1List* JCTree$JCNewClass::getArguments() {
	return this->args;
}

$ClassTree* JCTree$JCNewClass::getClassBody() {
	return this->def;
}

$Object* JCTree$JCNewClass::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitNewClass(this, d));
}

$JCTree$Tag* JCTree$JCNewClass::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::NEWCLASS;
}

bool JCTree$JCNewClass::classDeclRemoved() {
	return false;
}

JCTree$JCNewClass::JCTree$JCNewClass() {
}

$Class* JCTree$JCNewClass::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCNewClass, name, initialize, &_JCTree$JCNewClass_ClassInfo_, allocate$JCTree$JCNewClass);
	return class$;
}

$Class* JCTree$JCNewClass::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com