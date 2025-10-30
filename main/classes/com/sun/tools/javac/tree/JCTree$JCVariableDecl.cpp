#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/ModifiersTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/source/tree/VariableTree.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Position.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

#undef IDENT
#undef NOPOS
#undef VARDEF
#undef VARIABLE

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $ModifiersTree = ::com::sun::source::tree::ModifiersTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $VariableTree = ::com::sun::source::tree::VariableTree;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $Name = ::com::sun::tools::javac::util::Name;
using $Position = ::com::sun::tools::javac::util::Position;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $1Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _JCTree$JCVariableDecl_FieldInfo_[] = {
	{"mods", "Lcom/sun/tools/javac/tree/JCTree$JCModifiers;", nullptr, $PUBLIC, $field(JCTree$JCVariableDecl, mods)},
	{"name", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC, $field(JCTree$JCVariableDecl, name)},
	{"nameexpr", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCVariableDecl, nameexpr)},
	{"vartype", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCVariableDecl, vartype)},
	{"init", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCVariableDecl, init)},
	{"sym", "Lcom/sun/tools/javac/code/Symbol$VarSymbol;", nullptr, $PUBLIC, $field(JCTree$JCVariableDecl, sym)},
	{"startPos", "I", nullptr, $PUBLIC, $field(JCTree$JCVariableDecl, startPos)},
	{"declaredUsingVar", "Z", nullptr, $PRIVATE, $field(JCTree$JCVariableDecl, declaredUsingVar$)},
	{}
};

$MethodInfo _JCTree$JCVariableDecl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/code/Symbol$VarSymbol;)V", nullptr, $PROTECTED, $method(static_cast<void(JCTree$JCVariableDecl::*)($JCTree$JCModifiers*,$Name*,$JCTree$JCExpression*,$JCTree$JCExpression*,$Symbol$VarSymbol*)>(&JCTree$JCVariableDecl::init$))},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/code/Symbol$VarSymbol;Z)V", nullptr, $PROTECTED, $method(static_cast<void(JCTree$JCVariableDecl::*)($JCTree$JCModifiers*,$Name*,$JCTree$JCExpression*,$JCTree$JCExpression*,$Symbol$VarSymbol*,bool)>(&JCTree$JCVariableDecl::init$))},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)V", nullptr, $PROTECTED, $method(static_cast<void(JCTree$JCVariableDecl::*)($JCTree$JCModifiers*,$JCTree$JCExpression*,$JCTree$JCExpression*)>(&JCTree$JCVariableDecl::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"declaredUsingVar", "()Z", nullptr, $PUBLIC},
	{"getInitializer", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getModifiers", "()Lcom/sun/tools/javac/tree/JCTree$JCModifiers;", nullptr, $PUBLIC},
	{"getName", "()Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{"getNameExpression", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"getType", "()Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC},
	{"isImplicitlyTyped", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCVariableDecl_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCVariableDecl", "com.sun.tools.javac.tree.JCTree", "JCVariableDecl", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCStatement", "com.sun.tools.javac.tree.JCTree", "JCStatement", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCVariableDecl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCVariableDecl",
	"com.sun.tools.javac.tree.JCTree$JCStatement",
	"com.sun.source.tree.VariableTree",
	_JCTree$JCVariableDecl_FieldInfo_,
	_JCTree$JCVariableDecl_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCVariableDecl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCVariableDecl($Class* clazz) {
	return $of($alloc(JCTree$JCVariableDecl));
}

$String* JCTree$JCVariableDecl::toString() {
	 return this->$JCTree$JCStatement::toString();
}

$Object* JCTree$JCVariableDecl::clone() {
	 return this->$JCTree$JCStatement::clone();
}

int32_t JCTree$JCVariableDecl::hashCode() {
	 return this->$JCTree$JCStatement::hashCode();
}

bool JCTree$JCVariableDecl::equals(Object$* arg0) {
	 return this->$JCTree$JCStatement::equals(arg0);
}

void JCTree$JCVariableDecl::finalize() {
	this->$JCTree$JCStatement::finalize();
}

void JCTree$JCVariableDecl::init$($JCTree$JCModifiers* mods, $Name* name, $JCTree$JCExpression* vartype, $JCTree$JCExpression* init, $Symbol$VarSymbol* sym) {
	JCTree$JCVariableDecl::init$(mods, name, vartype, init, sym, false);
}

void JCTree$JCVariableDecl::init$($JCTree$JCModifiers* mods, $Name* name, $JCTree$JCExpression* vartype, $JCTree$JCExpression* init, $Symbol$VarSymbol* sym, bool declaredUsingVar) {
	$JCTree$JCStatement::init$();
	this->startPos = $Position::NOPOS;
	$set(this, mods, mods);
	$set(this, name, name);
	$set(this, vartype, vartype);
	$set(this, init, init);
	$set(this, sym, sym);
	this->declaredUsingVar$ = declaredUsingVar;
}

void JCTree$JCVariableDecl::init$($JCTree$JCModifiers* mods, $JCTree$JCExpression* nameexpr, $JCTree$JCExpression* vartype) {
	JCTree$JCVariableDecl::init$(mods, nullptr, vartype, nullptr, nullptr, false);
	$set(this, nameexpr, nameexpr);
	$init($JCTree$Tag);
	if ($nc(nameexpr)->hasTag($JCTree$Tag::IDENT)) {
		$set(this, name, $nc(($cast($JCTree$JCIdent, nameexpr)))->name);
	} else {
		$set(this, name, $nc(($cast($JCTree$JCFieldAccess, nameexpr)))->name);
	}
}

bool JCTree$JCVariableDecl::isImplicitlyTyped() {
	return this->vartype == nullptr;
}

bool JCTree$JCVariableDecl::declaredUsingVar() {
	return this->declaredUsingVar$;
}

void JCTree$JCVariableDecl::accept($JCTree$Visitor* v) {
	$nc(v)->visitVarDef(this);
}

$Tree$Kind* JCTree$JCVariableDecl::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::VARIABLE;
}

$ModifiersTree* JCTree$JCVariableDecl::getModifiers() {
	return this->mods;
}

$1Name* JCTree$JCVariableDecl::getName() {
	return this->name;
}

$ExpressionTree* JCTree$JCVariableDecl::getNameExpression() {
	return this->nameexpr;
}

$JCTree* JCTree$JCVariableDecl::getType() {
	return this->vartype;
}

$ExpressionTree* JCTree$JCVariableDecl::getInitializer() {
	return this->init;
}

$Object* JCTree$JCVariableDecl::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitVariable(this, d));
}

$JCTree$Tag* JCTree$JCVariableDecl::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::VARDEF;
}

JCTree$JCVariableDecl::JCTree$JCVariableDecl() {
}

$Class* JCTree$JCVariableDecl::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCVariableDecl, name, initialize, &_JCTree$JCVariableDecl_ClassInfo_, allocate$JCTree$JCVariableDecl);
	return class$;
}

$Class* JCTree$JCVariableDecl::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com