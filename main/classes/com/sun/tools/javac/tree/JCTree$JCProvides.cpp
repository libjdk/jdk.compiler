#include <com/sun/tools/javac/tree/JCTree$JCProvides.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/ProvidesTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/tree/JCTree$JCDirective.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef PROVIDES

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $ProvidesTree = ::com::sun::source::tree::ProvidesTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCDirective = ::com::sun::tools::javac::tree::JCTree$JCDirective;
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

$FieldInfo _JCTree$JCProvides_FieldInfo_[] = {
	{"serviceName", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCProvides, serviceName)},
	{"implNames", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC, $field(JCTree$JCProvides, implNames)},
	{}
};

$MethodInfo _JCTree$JCProvides_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)V", $PROTECTED, $method(static_cast<void(JCTree$JCProvides::*)($JCTree$JCExpression*,$1List*)>(&JCTree$JCProvides::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getImplementationNames", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getServiceName", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCProvides_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCProvides", "com.sun.tools.javac.tree.JCTree", "JCProvides", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCDirective", "com.sun.tools.javac.tree.JCTree", "JCDirective", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCProvides_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCProvides",
	"com.sun.tools.javac.tree.JCTree$JCDirective",
	"com.sun.source.tree.ProvidesTree",
	_JCTree$JCProvides_FieldInfo_,
	_JCTree$JCProvides_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCProvides_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCProvides($Class* clazz) {
	return $of($alloc(JCTree$JCProvides));
}

$String* JCTree$JCProvides::toString() {
	 return this->$JCTree$JCDirective::toString();
}

$Object* JCTree$JCProvides::clone() {
	 return this->$JCTree$JCDirective::clone();
}

int32_t JCTree$JCProvides::hashCode() {
	 return this->$JCTree$JCDirective::hashCode();
}

bool JCTree$JCProvides::equals(Object$* arg0) {
	 return this->$JCTree$JCDirective::equals(arg0);
}

void JCTree$JCProvides::finalize() {
	this->$JCTree$JCDirective::finalize();
}

void JCTree$JCProvides::init$($JCTree$JCExpression* serviceName, $1List* implNames) {
	$JCTree$JCDirective::init$();
	$set(this, serviceName, serviceName);
	$set(this, implNames, implNames);
}

void JCTree$JCProvides::accept($JCTree$Visitor* v) {
	$nc(v)->visitProvides(this);
}

$Tree$Kind* JCTree$JCProvides::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::PROVIDES;
}

$Object* JCTree$JCProvides::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitProvides(this, d));
}

$ExpressionTree* JCTree$JCProvides::getServiceName() {
	return this->serviceName;
}

$List* JCTree$JCProvides::getImplementationNames() {
	return this->implNames;
}

$JCTree$Tag* JCTree$JCProvides::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::PROVIDES;
}

JCTree$JCProvides::JCTree$JCProvides() {
}

$Class* JCTree$JCProvides::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCProvides, name, initialize, &_JCTree$JCProvides_ClassInfo_, allocate$JCTree$JCProvides);
	return class$;
}

$Class* JCTree$JCProvides::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com