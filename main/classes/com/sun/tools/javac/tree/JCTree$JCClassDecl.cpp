#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>

#include <com/sun/source/tree/ClassTree.h>
#include <com/sun/source/tree/ModifiersTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/Tree.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/util/List.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

#undef ANNOTATION
#undef ANNOTATION_TYPE
#undef CLASS
#undef CLASSDEF
#undef ENUM
#undef INTERFACE
#undef RECORD

using $ClassTree = ::com::sun::source::tree::ClassTree;
using $ModifiersTree = ::com::sun::source::tree::ModifiersTree;
using $Tree = ::com::sun::source::tree::Tree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
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

$FieldInfo _JCTree$JCClassDecl_FieldInfo_[] = {
	{"mods", "Lcom/sun/tools/javac/tree/JCTree$JCModifiers;", nullptr, $PUBLIC, $field(JCTree$JCClassDecl, mods)},
	{"name", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC, $field(JCTree$JCClassDecl, name)},
	{"typarams", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;>;", $PUBLIC, $field(JCTree$JCClassDecl, typarams)},
	{"extending", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCClassDecl, extending)},
	{"implementing", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC, $field(JCTree$JCClassDecl, implementing)},
	{"permitting", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC, $field(JCTree$JCClassDecl, permitting)},
	{"defs", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;", $PUBLIC, $field(JCTree$JCClassDecl, defs)},
	{"sym", "Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC, $field(JCTree$JCClassDecl, sym)},
	{}
};

$MethodInfo _JCTree$JCClassDecl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;>;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", $PROTECTED, $method(static_cast<void(JCTree$JCClassDecl::*)($JCTree$JCModifiers*,$Name*,$List*,$JCTree$JCExpression*,$List*,$List*,$List*,$Symbol$ClassSymbol*)>(&JCTree$JCClassDecl::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getExtendsClause", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getImplementsClause", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getMembers", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;", $PUBLIC},
	{"getModifiers", "()Lcom/sun/tools/javac/tree/JCTree$JCModifiers;", nullptr, $PUBLIC},
	{"getPermitsClause", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC},
	{"getSimpleName", "()Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"getTypeParameters", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;>;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCClassDecl_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCClassDecl", "com.sun.tools.javac.tree.JCTree", "JCClassDecl", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCStatement", "com.sun.tools.javac.tree.JCTree", "JCStatement", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCClassDecl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCClassDecl",
	"com.sun.tools.javac.tree.JCTree$JCStatement",
	"com.sun.source.tree.ClassTree",
	_JCTree$JCClassDecl_FieldInfo_,
	_JCTree$JCClassDecl_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCClassDecl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCClassDecl($Class* clazz) {
	return $of($alloc(JCTree$JCClassDecl));
}

$String* JCTree$JCClassDecl::toString() {
	 return this->$JCTree$JCStatement::toString();
}

$Object* JCTree$JCClassDecl::clone() {
	 return this->$JCTree$JCStatement::clone();
}

int32_t JCTree$JCClassDecl::hashCode() {
	 return this->$JCTree$JCStatement::hashCode();
}

bool JCTree$JCClassDecl::equals(Object$* arg0) {
	 return this->$JCTree$JCStatement::equals(arg0);
}

void JCTree$JCClassDecl::finalize() {
	this->$JCTree$JCStatement::finalize();
}

void JCTree$JCClassDecl::init$($JCTree$JCModifiers* mods, $Name* name, $List* typarams, $JCTree$JCExpression* extending, $List* implementing, $List* permitting, $List* defs, $Symbol$ClassSymbol* sym) {
	$JCTree$JCStatement::init$();
	$set(this, mods, mods);
	$set(this, name, name);
	$set(this, typarams, typarams);
	$set(this, extending, extending);
	$set(this, implementing, implementing);
	$set(this, permitting, permitting);
	$set(this, defs, defs);
	$set(this, sym, sym);
}

void JCTree$JCClassDecl::accept($JCTree$Visitor* v) {
	$nc(v)->visitClassDef(this);
}

$Tree$Kind* JCTree$JCClassDecl::getKind() {
	if (((int64_t)($nc(this->mods)->flags & (uint64_t)(int64_t)$Flags::ANNOTATION)) != 0) {
		$init($Tree$Kind);
		return $Tree$Kind::ANNOTATION_TYPE;
	} else if (((int64_t)($nc(this->mods)->flags & (uint64_t)(int64_t)$Flags::INTERFACE)) != 0) {
		$init($Tree$Kind);
		return $Tree$Kind::INTERFACE;
	} else if (((int64_t)($nc(this->mods)->flags & (uint64_t)(int64_t)$Flags::ENUM)) != 0) {
		$init($Tree$Kind);
		return $Tree$Kind::ENUM;
	} else if (((int64_t)($nc(this->mods)->flags & (uint64_t)$Flags::RECORD)) != 0) {
		$init($Tree$Kind);
		return $Tree$Kind::RECORD;
	} else {
		$init($Tree$Kind);
		return $Tree$Kind::CLASS;
	}
}

$ModifiersTree* JCTree$JCClassDecl::getModifiers() {
	return this->mods;
}

$1Name* JCTree$JCClassDecl::getSimpleName() {
	return this->name;
}

$1List* JCTree$JCClassDecl::getTypeParameters() {
	return this->typarams;
}

$Tree* JCTree$JCClassDecl::getExtendsClause() {
	return static_cast<$Tree*>(static_cast<$JCTree*>(static_cast<$JCTree$JCCaseLabel*>(this->extending)));
}

$1List* JCTree$JCClassDecl::getImplementsClause() {
	return this->implementing;
}

$1List* JCTree$JCClassDecl::getPermitsClause() {
	return this->permitting;
}

$1List* JCTree$JCClassDecl::getMembers() {
	return this->defs;
}

$Object* JCTree$JCClassDecl::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitClass(this, d));
}

$JCTree$Tag* JCTree$JCClassDecl::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::CLASSDEF;
}

JCTree$JCClassDecl::JCTree$JCClassDecl() {
}

$Class* JCTree$JCClassDecl::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCClassDecl, name, initialize, &_JCTree$JCClassDecl_ClassInfo_, allocate$JCTree$JCClassDecl);
	return class$;
}

$Class* JCTree$JCClassDecl::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com