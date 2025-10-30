#include <com/sun/tools/javac/tree/JCTree$JCImport.h>

#include <com/sun/source/tree/ImportTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

#undef IMPORT

using $ImportTree = ::com::sun::source::tree::ImportTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
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

$FieldInfo _JCTree$JCImport_FieldInfo_[] = {
	{"staticImport", "Z", nullptr, $PUBLIC, $field(JCTree$JCImport, staticImport)},
	{"qualid", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC, $field(JCTree$JCImport, qualid)},
	{"importScope", "Lcom/sun/tools/javac/code/Scope;", nullptr, $PUBLIC, $field(JCTree$JCImport, importScope)},
	{}
};

$MethodInfo _JCTree$JCImport_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree;Z)V", nullptr, $PROTECTED, $method(static_cast<void(JCTree$JCImport::*)($JCTree*,bool)>(&JCTree$JCImport::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getQualifiedIdentifier", "()Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"isStatic", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCImport_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCImport", "com.sun.tools.javac.tree.JCTree", "JCImport", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JCTree$JCImport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCImport",
	"com.sun.tools.javac.tree.JCTree",
	"com.sun.source.tree.ImportTree",
	_JCTree$JCImport_FieldInfo_,
	_JCTree$JCImport_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCImport_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCImport($Class* clazz) {
	return $of($alloc(JCTree$JCImport));
}

$String* JCTree$JCImport::toString() {
	 return this->$JCTree::toString();
}

$Object* JCTree$JCImport::clone() {
	 return this->$JCTree::clone();
}

int32_t JCTree$JCImport::hashCode() {
	 return this->$JCTree::hashCode();
}

bool JCTree$JCImport::equals(Object$* arg0) {
	 return this->$JCTree::equals(arg0);
}

void JCTree$JCImport::finalize() {
	this->$JCTree::finalize();
}

void JCTree$JCImport::init$($JCTree* qualid, bool importStatic) {
	$JCTree::init$();
	$set(this, qualid, qualid);
	this->staticImport = importStatic;
}

void JCTree$JCImport::accept($JCTree$Visitor* v) {
	$nc(v)->visitImport(this);
}

bool JCTree$JCImport::isStatic() {
	return this->staticImport;
}

$JCTree* JCTree$JCImport::getQualifiedIdentifier() {
	return this->qualid;
}

$Tree$Kind* JCTree$JCImport::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::IMPORT;
}

$Object* JCTree$JCImport::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitImport(this, d));
}

$JCTree$Tag* JCTree$JCImport::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::IMPORT;
}

JCTree$JCImport::JCTree$JCImport() {
}

$Class* JCTree$JCImport::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCImport, name, initialize, &_JCTree$JCImport_ClassInfo_, allocate$JCTree$JCImport);
	return class$;
}

$Class* JCTree$JCImport::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com