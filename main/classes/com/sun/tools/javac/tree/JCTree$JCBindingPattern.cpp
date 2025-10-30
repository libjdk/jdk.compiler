#include <com/sun/tools/javac/tree/JCTree$JCBindingPattern.h>

#include <com/sun/source/tree/BindingPatternTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/source/tree/VariableTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

#undef BINDINGPATTERN
#undef BINDING_PATTERN

using $BindingPatternTree = ::com::sun::source::tree::BindingPatternTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $VariableTree = ::com::sun::source::tree::VariableTree;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCPattern = ::com::sun::tools::javac::tree::JCTree$JCPattern;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
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

$FieldInfo _JCTree$JCBindingPattern_FieldInfo_[] = {
	{"var", "Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;", nullptr, $PUBLIC, $field(JCTree$JCBindingPattern, var)},
	{}
};

$MethodInfo _JCTree$JCBindingPattern_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PROTECTED, $method(static_cast<void(JCTree$JCBindingPattern::*)($JCTree$JCVariableDecl*)>(&JCTree$JCBindingPattern::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"getVariable", "()Lcom/sun/source/tree/VariableTree;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCBindingPattern_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCBindingPattern", "com.sun.tools.javac.tree.JCTree", "JCBindingPattern", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCPattern", "com.sun.tools.javac.tree.JCTree", "JCPattern", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCBindingPattern_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCBindingPattern",
	"com.sun.tools.javac.tree.JCTree$JCPattern",
	"com.sun.source.tree.BindingPatternTree",
	_JCTree$JCBindingPattern_FieldInfo_,
	_JCTree$JCBindingPattern_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCBindingPattern_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCBindingPattern($Class* clazz) {
	return $of($alloc(JCTree$JCBindingPattern));
}

$String* JCTree$JCBindingPattern::toString() {
	 return this->$JCTree$JCPattern::toString();
}

$Object* JCTree$JCBindingPattern::clone() {
	 return this->$JCTree$JCPattern::clone();
}

int32_t JCTree$JCBindingPattern::hashCode() {
	 return this->$JCTree$JCPattern::hashCode();
}

bool JCTree$JCBindingPattern::equals(Object$* arg0) {
	 return this->$JCTree$JCPattern::equals(arg0);
}

void JCTree$JCBindingPattern::finalize() {
	this->$JCTree$JCPattern::finalize();
}

void JCTree$JCBindingPattern::init$($JCTree$JCVariableDecl* var) {
	$JCTree$JCPattern::init$();
	$set(this, var, var);
}

$VariableTree* JCTree$JCBindingPattern::getVariable() {
	return this->var;
}

void JCTree$JCBindingPattern::accept($JCTree$Visitor* v) {
	$nc(v)->visitBindingPattern(this);
}

$Tree$Kind* JCTree$JCBindingPattern::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::BINDING_PATTERN;
}

$Object* JCTree$JCBindingPattern::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitBindingPattern(this, d));
}

$JCTree$Tag* JCTree$JCBindingPattern::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::BINDINGPATTERN;
}

JCTree$JCBindingPattern::JCTree$JCBindingPattern() {
}

$Class* JCTree$JCBindingPattern::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCBindingPattern, name, initialize, &_JCTree$JCBindingPattern_ClassInfo_, allocate$JCTree$JCBindingPattern);
	return class$;
}

$Class* JCTree$JCBindingPattern::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com