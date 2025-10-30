#include <com/sun/tools/javac/tree/JCTree$JCRequires.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/RequiresTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/code/Directive$RequiresDirective.h>
#include <com/sun/tools/javac/tree/JCTree$JCDirective.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

#undef REQUIRES

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $RequiresTree = ::com::sun::source::tree::RequiresTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $Directive$RequiresDirective = ::com::sun::tools::javac::code::Directive$RequiresDirective;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCDirective = ::com::sun::tools::javac::tree::JCTree$JCDirective;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _JCTree$JCRequires_FieldInfo_[] = {
	{"isTransitive", "Z", nullptr, $PUBLIC, $field(JCTree$JCRequires, isTransitive$)},
	{"isStaticPhase", "Z", nullptr, $PUBLIC, $field(JCTree$JCRequires, isStaticPhase)},
	{"moduleName", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCRequires, moduleName)},
	{"directive", "Lcom/sun/tools/javac/code/Directive$RequiresDirective;", nullptr, $PUBLIC, $field(JCTree$JCRequires, directive)},
	{}
};

$MethodInfo _JCTree$JCRequires_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(ZZLcom/sun/tools/javac/tree/JCTree$JCExpression;)V", nullptr, $PROTECTED, $method(static_cast<void(JCTree$JCRequires::*)(bool,bool,$JCTree$JCExpression*)>(&JCTree$JCRequires::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getModuleName", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"isStatic", "()Z", nullptr, $PUBLIC},
	{"isTransitive", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCRequires_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCRequires", "com.sun.tools.javac.tree.JCTree", "JCRequires", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCDirective", "com.sun.tools.javac.tree.JCTree", "JCDirective", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCRequires_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCRequires",
	"com.sun.tools.javac.tree.JCTree$JCDirective",
	"com.sun.source.tree.RequiresTree",
	_JCTree$JCRequires_FieldInfo_,
	_JCTree$JCRequires_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCRequires_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCRequires($Class* clazz) {
	return $of($alloc(JCTree$JCRequires));
}

$String* JCTree$JCRequires::toString() {
	 return this->$JCTree$JCDirective::toString();
}

$Object* JCTree$JCRequires::clone() {
	 return this->$JCTree$JCDirective::clone();
}

int32_t JCTree$JCRequires::hashCode() {
	 return this->$JCTree$JCDirective::hashCode();
}

bool JCTree$JCRequires::equals(Object$* arg0) {
	 return this->$JCTree$JCDirective::equals(arg0);
}

void JCTree$JCRequires::finalize() {
	this->$JCTree$JCDirective::finalize();
}

void JCTree$JCRequires::init$(bool isTransitive, bool isStaticPhase, $JCTree$JCExpression* moduleName) {
	$JCTree$JCDirective::init$();
	this->isTransitive$ = isTransitive;
	this->isStaticPhase = isStaticPhase;
	$set(this, moduleName, moduleName);
}

void JCTree$JCRequires::accept($JCTree$Visitor* v) {
	$nc(v)->visitRequires(this);
}

$Tree$Kind* JCTree$JCRequires::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::REQUIRES;
}

$Object* JCTree$JCRequires::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitRequires(this, d));
}

bool JCTree$JCRequires::isTransitive() {
	return this->isTransitive$;
}

bool JCTree$JCRequires::isStatic() {
	return this->isStaticPhase;
}

$ExpressionTree* JCTree$JCRequires::getModuleName() {
	return this->moduleName;
}

$JCTree$Tag* JCTree$JCRequires::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::REQUIRES;
}

JCTree$JCRequires::JCTree$JCRequires() {
}

$Class* JCTree$JCRequires::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCRequires, name, initialize, &_JCTree$JCRequires_ClassInfo_, allocate$JCTree$JCRequires);
	return class$;
}

$Class* JCTree$JCRequires::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com