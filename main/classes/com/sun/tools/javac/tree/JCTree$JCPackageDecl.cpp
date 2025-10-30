#include <com/sun/tools/javac/tree/JCTree$JCPackageDecl.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/PackageTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef PACKAGE
#undef PACKAGEDEF

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $PackageTree = ::com::sun::source::tree::PackageTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $1List = ::com::sun::tools::javac::util::List;
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

$FieldInfo _JCTree$JCPackageDecl_FieldInfo_[] = {
	{"annotations", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;", $PUBLIC, $field(JCTree$JCPackageDecl, annotations)},
	{"pid", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCPackageDecl, pid)},
	{"packge", "Lcom/sun/tools/javac/code/Symbol$PackageSymbol;", nullptr, $PUBLIC, $field(JCTree$JCPackageDecl, packge)},
	{}
};

$MethodInfo _JCTree$JCPackageDecl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)V", $PUBLIC, $method(static_cast<void(JCTree$JCPackageDecl::*)($1List*,$JCTree$JCExpression*)>(&JCTree$JCPackageDecl::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getAnnotations", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getPackageName", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCPackageDecl_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCPackageDecl", "com.sun.tools.javac.tree.JCTree", "JCPackageDecl", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JCTree$JCPackageDecl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCPackageDecl",
	"com.sun.tools.javac.tree.JCTree",
	"com.sun.source.tree.PackageTree",
	_JCTree$JCPackageDecl_FieldInfo_,
	_JCTree$JCPackageDecl_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCPackageDecl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCPackageDecl($Class* clazz) {
	return $of($alloc(JCTree$JCPackageDecl));
}

$String* JCTree$JCPackageDecl::toString() {
	 return this->$JCTree::toString();
}

$Object* JCTree$JCPackageDecl::clone() {
	 return this->$JCTree::clone();
}

int32_t JCTree$JCPackageDecl::hashCode() {
	 return this->$JCTree::hashCode();
}

bool JCTree$JCPackageDecl::equals(Object$* arg0) {
	 return this->$JCTree::equals(arg0);
}

void JCTree$JCPackageDecl::finalize() {
	this->$JCTree::finalize();
}

void JCTree$JCPackageDecl::init$($1List* annotations, $JCTree$JCExpression* pid) {
	$JCTree::init$();
	$set(this, annotations, annotations);
	$set(this, pid, pid);
}

void JCTree$JCPackageDecl::accept($JCTree$Visitor* v) {
	$nc(v)->visitPackageDef(this);
}

$Tree$Kind* JCTree$JCPackageDecl::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::PACKAGE;
}

$List* JCTree$JCPackageDecl::getAnnotations() {
	return this->annotations;
}

$ExpressionTree* JCTree$JCPackageDecl::getPackageName() {
	return this->pid;
}

$Object* JCTree$JCPackageDecl::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitPackage(this, d));
}

$JCTree$Tag* JCTree$JCPackageDecl::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::PACKAGEDEF;
}

JCTree$JCPackageDecl::JCTree$JCPackageDecl() {
}

$Class* JCTree$JCPackageDecl::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCPackageDecl, name, initialize, &_JCTree$JCPackageDecl_ClassInfo_, allocate$JCTree$JCPackageDecl);
	return class$;
}

$Class* JCTree$JCPackageDecl::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com