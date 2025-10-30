#include <com/sun/tools/javac/tree/JCTree$JCExports.h>

#include <com/sun/source/tree/ExportsTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/code/Directive$ExportsDirective.h>
#include <com/sun/tools/javac/tree/JCTree$JCDirective.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef EXPORTS

using $ExportsTree = ::com::sun::source::tree::ExportsTree;
using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $Directive$ExportsDirective = ::com::sun::tools::javac::code::Directive$ExportsDirective;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCDirective = ::com::sun::tools::javac::tree::JCTree$JCDirective;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
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

$FieldInfo _JCTree$JCExports_FieldInfo_[] = {
	{"qualid", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCExports, qualid)},
	{"moduleNames", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC, $field(JCTree$JCExports, moduleNames)},
	{"directive", "Lcom/sun/tools/javac/code/Directive$ExportsDirective;", nullptr, $PUBLIC, $field(JCTree$JCExports, directive)},
	{}
};

$MethodInfo _JCTree$JCExports_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)V", $PROTECTED, $method(static_cast<void(JCTree$JCExports::*)($JCTree$JCExpression*,$List*)>(&JCTree$JCExports::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getModuleNames", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC},
	{"getPackageName", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCExports_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCExports", "com.sun.tools.javac.tree.JCTree", "JCExports", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCDirective", "com.sun.tools.javac.tree.JCTree", "JCDirective", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCExports_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCExports",
	"com.sun.tools.javac.tree.JCTree$JCDirective",
	"com.sun.source.tree.ExportsTree",
	_JCTree$JCExports_FieldInfo_,
	_JCTree$JCExports_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCExports_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCExports($Class* clazz) {
	return $of($alloc(JCTree$JCExports));
}

$String* JCTree$JCExports::toString() {
	 return this->$JCTree$JCDirective::toString();
}

$Object* JCTree$JCExports::clone() {
	 return this->$JCTree$JCDirective::clone();
}

int32_t JCTree$JCExports::hashCode() {
	 return this->$JCTree$JCDirective::hashCode();
}

bool JCTree$JCExports::equals(Object$* arg0) {
	 return this->$JCTree$JCDirective::equals(arg0);
}

void JCTree$JCExports::finalize() {
	this->$JCTree$JCDirective::finalize();
}

void JCTree$JCExports::init$($JCTree$JCExpression* qualId, $List* moduleNames) {
	$JCTree$JCDirective::init$();
	$set(this, qualid, qualId);
	$set(this, moduleNames, moduleNames);
}

void JCTree$JCExports::accept($JCTree$Visitor* v) {
	$nc(v)->visitExports(this);
}

$Tree$Kind* JCTree$JCExports::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::EXPORTS;
}

$ExpressionTree* JCTree$JCExports::getPackageName() {
	return this->qualid;
}

$1List* JCTree$JCExports::getModuleNames() {
	return this->moduleNames;
}

$Object* JCTree$JCExports::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitExports(this, d));
}

$JCTree$Tag* JCTree$JCExports::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::EXPORTS;
}

JCTree$JCExports::JCTree$JCExports() {
}

$Class* JCTree$JCExports::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCExports, name, initialize, &_JCTree$JCExports_ClassInfo_, allocate$JCTree$JCExports);
	return class$;
}

$Class* JCTree$JCExports::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com