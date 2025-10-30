#include <com/sun/tools/javac/tree/JCTree$JCExpressionStatement.h>

#include <com/sun/source/tree/ExpressionStatementTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/Pretty.h>
#include <java/io/IOException.h>
#include <java/io/StringWriter.h>
#include <java/io/Writer.h>
#include <java/lang/AssertionError.h>
#include <jcpp.h>

#undef EXEC
#undef EXPRESSION_STATEMENT

using $ExpressionStatementTree = ::com::sun::source::tree::ExpressionStatementTree;
using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $Pretty = ::com::sun::tools::javac::tree::Pretty;
using $IOException = ::java::io::IOException;
using $StringWriter = ::java::io::StringWriter;
using $Writer = ::java::io::Writer;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _JCTree$JCExpressionStatement_FieldInfo_[] = {
	{"expr", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC, $field(JCTree$JCExpressionStatement, expr)},
	{}
};

$MethodInfo _JCTree$JCExpressionStatement_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)V", nullptr, $PROTECTED, $method(static_cast<void(JCTree$JCExpressionStatement::*)($JCTree$JCExpression*)>(&JCTree$JCExpressionStatement::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getExpression", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree$JCExpressionStatement_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$JCExpressionStatement", "com.sun.tools.javac.tree.JCTree", "JCExpressionStatement", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCStatement", "com.sun.tools.javac.tree.JCTree", "JCStatement", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCTree$JCExpressionStatement_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.JCTree$JCExpressionStatement",
	"com.sun.tools.javac.tree.JCTree$JCStatement",
	"com.sun.source.tree.ExpressionStatementTree",
	_JCTree$JCExpressionStatement_FieldInfo_,
	_JCTree$JCExpressionStatement_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree$JCExpressionStatement_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree"
};

$Object* allocate$JCTree$JCExpressionStatement($Class* clazz) {
	return $of($alloc(JCTree$JCExpressionStatement));
}

$Object* JCTree$JCExpressionStatement::clone() {
	 return this->$JCTree$JCStatement::clone();
}

int32_t JCTree$JCExpressionStatement::hashCode() {
	 return this->$JCTree$JCStatement::hashCode();
}

bool JCTree$JCExpressionStatement::equals(Object$* arg0) {
	 return this->$JCTree$JCStatement::equals(arg0);
}

void JCTree$JCExpressionStatement::finalize() {
	this->$JCTree$JCStatement::finalize();
}

void JCTree$JCExpressionStatement::init$($JCTree$JCExpression* expr) {
	$JCTree$JCStatement::init$();
	$set(this, expr, expr);
}

void JCTree$JCExpressionStatement::accept($JCTree$Visitor* v) {
	$nc(v)->visitExec(this);
}

$Tree$Kind* JCTree$JCExpressionStatement::getKind() {
	$init($Tree$Kind);
	return $Tree$Kind::EXPRESSION_STATEMENT;
}

$ExpressionTree* JCTree$JCExpressionStatement::getExpression() {
	return this->expr;
}

$Object* JCTree$JCExpressionStatement::accept($TreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitExpressionStatement(this, d));
}

$JCTree$Tag* JCTree$JCExpressionStatement::getTag() {
	$init($JCTree$Tag);
	return $JCTree$Tag::EXEC;
}

$String* JCTree$JCExpressionStatement::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringWriter, s, $new($StringWriter));
	try {
		$$new($Pretty, s, false)->printStat(this);
	} catch ($IOException& e) {
		$throwNew($AssertionError, $of(e));
	}
	return s->toString();
}

JCTree$JCExpressionStatement::JCTree$JCExpressionStatement() {
}

$Class* JCTree$JCExpressionStatement::load$($String* name, bool initialize) {
	$loadClass(JCTree$JCExpressionStatement, name, initialize, &_JCTree$JCExpressionStatement_ClassInfo_, allocate$JCTree$JCExpressionStatement);
	return class$;
}

$Class* JCTree$JCExpressionStatement::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com