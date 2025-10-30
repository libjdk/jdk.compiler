#include <com/sun/tools/javac/tree/JCTree$JCLabeledStatement.h>

#include <com/sun/source/tree/LabeledStatementTree.h>
#include <com/sun/source/tree/StatementTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Name.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

#undef LABELED_STATEMENT
#undef LABELLED

using $LabeledStatementTree = ::com::sun::source::tree::LabeledStatementTree;
using $StatementTree = ::com::sun::source::tree::StatementTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
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

$FieldInfo _JCTree$JCLabeledStatement_FieldInfo_[] = {
	{"label", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC, $field(JCTree$JCLabeledStatement, label)},
	{"body", "Lcom/sun/tools/javac/tree/JCTree$JCStatement;", nullptr, $PUBLIC, $field(JCTree$JCLabeledStatement, body)},
	{}
};

$MethodInfo _JCTree$JCLabeledStatement_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/tree/JCTree$JCStatement;)V", nullptr, $PROTECTED, $method(static_cast<void(JCTree$JCLabeledStatement::*)($Name*,$JCTree$JCStatement*)>(&JCTree$JCLabeledStatement::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getLabel", "()Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{"getStatement", "()Lcom/sun/tools/javac/tree/JCTree$JCStatement;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCLabeledStatement_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCLabeledStatement", "com.sun.tools.javac.tree.JCTree", "JCLabeledStatement", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCStatement", "com.sun.tools.javac.tree.JCTree", "JCStatement", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCLabeledStatement_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCLabeledStatement",
	"com.sun.tools.javac.tree.JCTree$JCStatement",
	"com.sun.source.tree.LabeledStatementTree",
	_JCTree$JCLabeledStatement_FieldInfo_,
	_JCTree$JCLabeledStatement_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCLabeledStatement_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCLabeledStatement($Class* clazz) {
	return $of($alloc(JCTree$JCLabeledStatement));
}

$String* JCTree$JCLabeledStatement::toString() {
	 return this->$JCTree$JCStatement::toString();
}

$Object* JCTree$JCLabeledStatement::clone() {
	 return this->$JCTree$JCStatement::clone();
}

int32_t JCTree$JCLabeledStatement::hashCode() {
	 return this->$JCTree$JCStatement::hashCode();
}

bool JCTree$JCLabeledStatement::equals(Object$* arg0) {
	 return this->$JCTree$JCStatement::equals(arg0);
}

void JCTree$JCLabeledStatement::finalize() {
	this->$JCTree$JCStatement::finalize();
}

void JCTree$JCLabeledStatement::init$($Name* label, $JCTree$JCStatement* body) {
	$JCTree$JCStatement::init$();
	$set(this, label, label);
	$set(this, body, body);
}

void JCTree$JCLabeledStatement::accept($JCTree$Visitor* v) {
	$nc(v)->visitLabelled(this);
}

$Tree$Kind* JCTree$JCLabeledStatement::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::LABELED_STATEMENT;
}

$1Name* JCTree$JCLabeledStatement::getLabel() {
	return this->label;
}

$StatementTree* JCTree$JCLabeledStatement::getStatement() {
	return this->body;
}

$Object* JCTree$JCLabeledStatement::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitLabeledStatement(this, d));
}

$JCTree$Tag* JCTree$JCLabeledStatement::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::LABELLED;
}

JCTree$JCLabeledStatement::JCTree$JCLabeledStatement() {
}

$Class* JCTree$JCLabeledStatement::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCLabeledStatement, name, initialize, &_JCTree$JCLabeledStatement_ClassInfo_, allocate$JCTree$JCLabeledStatement);
	return class$;
}

$Class* JCTree$JCLabeledStatement::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com