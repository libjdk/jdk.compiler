#include <com/sun/tools/javac/tree/JCTree$JCModuleDecl.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/ModuleTree$ModuleKind.h>
#include <com/sun/source/tree/ModuleTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Type$ModuleType.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef MODULE
#undef MODULEDEF

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $ModuleTree = ::com::sun::source::tree::ModuleTree;
using $ModuleTree$ModuleKind = ::com::sun::source::tree::ModuleTree$ModuleKind;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Type$ModuleType = ::com::sun::tools::javac::code::Type$ModuleType;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
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

$FieldInfo _JCTree$JCModuleDecl_FieldInfo_[] = {
	{"mods", "Lcom/sun/tools/javac/tree/JCTree$JCModifiers;", nullptr, $PUBLIC, $field(JCTree$JCModuleDecl, mods)},
	{"type", "Lcom/sun/tools/javac/code/Type$ModuleType;", nullptr, $PUBLIC, $field(JCTree$JCModuleDecl, type)},
	{"kind", "Lcom/sun/source/tree/ModuleTree$ModuleKind;", nullptr, $PRIVATE | $FINAL, $field(JCTree$JCModuleDecl, kind)},
	{"qualId", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCModuleDecl, qualId)},
	{"directives", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCDirective;>;", $PUBLIC, $field(JCTree$JCModuleDecl, directives)},
	{"sym", "Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PUBLIC, $field(JCTree$JCModuleDecl, sym)},
	{}
};

$MethodInfo _JCTree$JCModuleDecl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/source/tree/ModuleTree$ModuleKind;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/source/tree/ModuleTree$ModuleKind;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCDirective;>;)V", $PROTECTED, $method(static_cast<void(JCTree$JCModuleDecl::*)($JCTree$JCModifiers*,$ModuleTree$ModuleKind*,$JCTree$JCExpression*,$List*)>(&JCTree$JCModuleDecl::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getAnnotations", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<+Lcom/sun/source/tree/AnnotationTree;>;", $PUBLIC},
	{"getDirectives", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCDirective;>;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getModuleType", "()Lcom/sun/source/tree/ModuleTree$ModuleKind;", nullptr, $PUBLIC},
	{"getName", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCModuleDecl_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCModuleDecl", "com.sun.tools.javac.tree.JCTree", "JCModuleDecl", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JCTree$JCModuleDecl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCModuleDecl",
	"com.sun.tools.javac.tree.JCTree",
	"com.sun.source.tree.ModuleTree",
	_JCTree$JCModuleDecl_FieldInfo_,
	_JCTree$JCModuleDecl_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCModuleDecl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCModuleDecl($Class* clazz) {
	return $of($alloc(JCTree$JCModuleDecl));
}

$String* JCTree$JCModuleDecl::toString() {
	 return this->$JCTree::toString();
}

$Object* JCTree$JCModuleDecl::clone() {
	 return this->$JCTree::clone();
}

int32_t JCTree$JCModuleDecl::hashCode() {
	 return this->$JCTree::hashCode();
}

bool JCTree$JCModuleDecl::equals(Object$* arg0) {
	 return this->$JCTree::equals(arg0);
}

void JCTree$JCModuleDecl::finalize() {
	this->$JCTree::finalize();
}

void JCTree$JCModuleDecl::init$($JCTree$JCModifiers* mods, $ModuleTree$ModuleKind* kind, $JCTree$JCExpression* qualId, $List* directives) {
	$JCTree::init$();
	$set(this, mods, mods);
	$set(this, kind, kind);
	$set(this, qualId, qualId);
	$set(this, directives, directives);
}

void JCTree$JCModuleDecl::accept($JCTree$Visitor* v) {
	$nc(v)->visitModuleDef(this);
}

$Tree$Kind* JCTree$JCModuleDecl::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::MODULE;
}

$1List* JCTree$JCModuleDecl::getAnnotations() {
	return $nc(this->mods)->annotations;
}

$ModuleTree$ModuleKind* JCTree$JCModuleDecl::getModuleType() {
	return this->kind;
}

$ExpressionTree* JCTree$JCModuleDecl::getName() {
	return this->qualId;
}

$1List* JCTree$JCModuleDecl::getDirectives() {
	return this->directives;
}

$Object* JCTree$JCModuleDecl::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitModule(this, d));
}

$JCTree$Tag* JCTree$JCModuleDecl::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::MODULEDEF;
}

JCTree$JCModuleDecl::JCTree$JCModuleDecl() {
}

$Class* JCTree$JCModuleDecl::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCModuleDecl, name, initialize, &_JCTree$JCModuleDecl_ClassInfo_, allocate$JCTree$JCModuleDecl);
	return class$;
}

$Class* JCTree$JCModuleDecl::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com