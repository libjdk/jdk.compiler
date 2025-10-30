#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>

#include <com/sun/source/tree/IdentifierTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Name.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

#undef IDENT
#undef IDENTIFIER

using $IdentifierTree = ::com::sun::source::tree::IdentifierTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $Name = ::com::sun::tools::javac::util::Name;
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

$FieldInfo _JCTree$JCIdent_FieldInfo_[] = {
	{"name", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC, $field(JCTree$JCIdent, name)},
	{"sym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $field(JCTree$JCIdent, sym)},
	{}
};

$MethodInfo _JCTree$JCIdent_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PROTECTED, $method(static_cast<void(JCTree$JCIdent::*)($Name*,$Symbol*)>(&JCTree$JCIdent::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getName", "()Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCIdent_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCIdent", "com.sun.tools.javac.tree.JCTree", "JCIdent", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCExpression", "com.sun.tools.javac.tree.JCTree", "JCExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCIdent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCIdent",
	"com.sun.tools.javac.tree.JCTree$JCExpression",
	"com.sun.source.tree.IdentifierTree",
	_JCTree$JCIdent_FieldInfo_,
	_JCTree$JCIdent_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCIdent_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCIdent($Class* clazz) {
	return $of($alloc(JCTree$JCIdent));
}

$String* JCTree$JCIdent::toString() {
	 return this->$JCTree$JCExpression::toString();
}

$Object* JCTree$JCIdent::clone() {
	 return this->$JCTree$JCExpression::clone();
}

int32_t JCTree$JCIdent::hashCode() {
	 return this->$JCTree$JCExpression::hashCode();
}

bool JCTree$JCIdent::equals(Object$* arg0) {
	 return this->$JCTree$JCExpression::equals(arg0);
}

void JCTree$JCIdent::finalize() {
	this->$JCTree$JCExpression::finalize();
}

void JCTree$JCIdent::init$($Name* name, $Symbol* sym) {
	$JCTree$JCExpression::init$();
	$set(this, name, name);
	$set(this, sym, sym);
}

void JCTree$JCIdent::accept($JCTree$Visitor* v) {
	$nc(v)->visitIdent(this);
}

$Tree$Kind* JCTree$JCIdent::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::IDENTIFIER;
}

$1Name* JCTree$JCIdent::getName() {
	return this->name;
}

$Object* JCTree$JCIdent::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitIdentifier(this, d));
}

$JCTree$Tag* JCTree$JCIdent::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::IDENT;
}

JCTree$JCIdent::JCTree$JCIdent() {
}

$Class* JCTree$JCIdent::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCIdent, name, initialize, &_JCTree$JCIdent_ClassInfo_, allocate$JCTree$JCIdent);
	return class$;
}

$Class* JCTree$JCIdent::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com