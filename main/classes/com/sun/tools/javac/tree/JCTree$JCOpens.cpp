#include <com/sun/tools/javac/tree/JCTree$JCOpens.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/OpensTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/code/Directive$OpensDirective.h>
#include <com/sun/tools/javac/tree/JCTree$JCDirective.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef OPENS

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $OpensTree = ::com::sun::source::tree::OpensTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $Directive$OpensDirective = ::com::sun::tools::javac::code::Directive$OpensDirective;
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

$FieldInfo _JCTree$JCOpens_FieldInfo_[] = {
	{"qualid", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCOpens, qualid)},
	{"moduleNames", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC, $field(JCTree$JCOpens, moduleNames)},
	{"directive", "Lcom/sun/tools/javac/code/Directive$OpensDirective;", nullptr, $PUBLIC, $field(JCTree$JCOpens, directive)},
	{}
};

$MethodInfo _JCTree$JCOpens_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)V", $PROTECTED, $method(static_cast<void(JCTree$JCOpens::*)($JCTree$JCExpression*,$List*)>(&JCTree$JCOpens::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getModuleNames", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC},
	{"getPackageName", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCOpens_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCOpens", "com.sun.tools.javac.tree.JCTree", "JCOpens", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCDirective", "com.sun.tools.javac.tree.JCTree", "JCDirective", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCOpens_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCOpens",
	"com.sun.tools.javac.tree.JCTree$JCDirective",
	"com.sun.source.tree.OpensTree",
	_JCTree$JCOpens_FieldInfo_,
	_JCTree$JCOpens_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCOpens_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCOpens($Class* clazz) {
	return $of($alloc(JCTree$JCOpens));
}

$String* JCTree$JCOpens::toString() {
	 return this->$JCTree$JCDirective::toString();
}

$Object* JCTree$JCOpens::clone() {
	 return this->$JCTree$JCDirective::clone();
}

int32_t JCTree$JCOpens::hashCode() {
	 return this->$JCTree$JCDirective::hashCode();
}

bool JCTree$JCOpens::equals(Object$* arg0) {
	 return this->$JCTree$JCDirective::equals(arg0);
}

void JCTree$JCOpens::finalize() {
	this->$JCTree$JCDirective::finalize();
}

void JCTree$JCOpens::init$($JCTree$JCExpression* qualId, $List* moduleNames) {
	$JCTree$JCDirective::init$();
	$set(this, qualid, qualId);
	$set(this, moduleNames, moduleNames);
}

void JCTree$JCOpens::accept($JCTree$Visitor* v) {
	$nc(v)->visitOpens(this);
}

$Tree$Kind* JCTree$JCOpens::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::OPENS;
}

$ExpressionTree* JCTree$JCOpens::getPackageName() {
	return this->qualid;
}

$1List* JCTree$JCOpens::getModuleNames() {
	return this->moduleNames;
}

$Object* JCTree$JCOpens::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitOpens(this, d));
}

$JCTree$Tag* JCTree$JCOpens::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::OPENS;
}

JCTree$JCOpens::JCTree$JCOpens() {
}

$Class* JCTree$JCOpens::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCOpens, name, initialize, &_JCTree$JCOpens_ClassInfo_, allocate$JCTree$JCOpens);
	return class$;
}

$Class* JCTree$JCOpens::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com