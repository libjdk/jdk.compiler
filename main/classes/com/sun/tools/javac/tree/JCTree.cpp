#include <com/sun/tools/javac/tree/JCTree.h>

#include <com/sun/source/tree/Tree.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/tree/EndPosTable.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/Pretty.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <java/io/IOException.h>
#include <java/io/StringWriter.h>
#include <java/io/Writer.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CloneNotSupportedException.h>
#include <jcpp.h>

using $Tree = ::com::sun::source::tree::Tree;
using $Type = ::com::sun::tools::javac::code::Type;
using $EndPosTable = ::com::sun::tools::javac::tree::EndPosTable;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $Pretty = ::com::sun::tools::javac::tree::Pretty;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $IOException = ::java::io::IOException;
using $StringWriter = ::java::io::StringWriter;
using $Writer = ::java::io::Writer;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _JCTree_FieldInfo_[] = {
	{"pos", "I", nullptr, $PUBLIC, $field(JCTree, pos$)},
	{"type", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(JCTree, type)},
	{}
};

$MethodInfo _JCTree_MethodInfo_[] = {
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JCTree::*)()>(&JCTree::init$))},
	{"accept", "(Lcom/sun/tools/javac/tree/JCTree$Visitor;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getEndPosition", "(Lcom/sun/tools/javac/tree/EndPosTable;)I", nullptr, $PUBLIC},
	{"getPreferredPosition", "()I", nullptr, $PUBLIC},
	{"getStartPosition", "()I", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTree", "()Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC},
	{"hasTag", "(Lcom/sun/tools/javac/tree/JCTree$Tag;)Z", nullptr, $PUBLIC},
	{"pos", "()Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC},
	{"setPos", "(I)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC},
	{"setType", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCTree_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.JCDiagnostic$DiagnosticPosition", "com.sun.tools.javac.util.JCDiagnostic", "DiagnosticPosition", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.tree.JCTree$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.tree.JCTree$Visitor", "com.sun.tools.javac.tree.JCTree", "Visitor", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.tree.JCTree$Factory", "com.sun.tools.javac.tree.JCTree", "Factory", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.tree.JCTree$LetExpr", "com.sun.tools.javac.tree.JCTree", "LetExpr", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCErroneous", "com.sun.tools.javac.tree.JCTree", "JCErroneous", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCUses", "com.sun.tools.javac.tree.JCTree", "JCUses", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCRequires", "com.sun.tools.javac.tree.JCTree", "JCRequires", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCProvides", "com.sun.tools.javac.tree.JCTree", "JCProvides", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCOpens", "com.sun.tools.javac.tree.JCTree", "JCOpens", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCExports", "com.sun.tools.javac.tree.JCTree", "JCExports", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCModuleDecl", "com.sun.tools.javac.tree.JCTree", "JCModuleDecl", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCDirective", "com.sun.tools.javac.tree.JCTree", "JCDirective", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.tree.JCTree$JCAnnotatedType", "com.sun.tools.javac.tree.JCTree", "JCAnnotatedType", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCModifiers", "com.sun.tools.javac.tree.JCTree", "JCModifiers", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCAnnotation", "com.sun.tools.javac.tree.JCTree", "JCAnnotation", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$TypeBoundKind", "com.sun.tools.javac.tree.JCTree", "TypeBoundKind", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCWildcard", "com.sun.tools.javac.tree.JCTree", "JCWildcard", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCTypeParameter", "com.sun.tools.javac.tree.JCTree", "JCTypeParameter", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCTypeIntersection", "com.sun.tools.javac.tree.JCTree", "JCTypeIntersection", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCTypeUnion", "com.sun.tools.javac.tree.JCTree", "JCTypeUnion", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCTypeApply", "com.sun.tools.javac.tree.JCTree", "JCTypeApply", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCArrayTypeTree", "com.sun.tools.javac.tree.JCTree", "JCArrayTypeTree", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCPrimitiveTypeTree", "com.sun.tools.javac.tree.JCTree", "JCPrimitiveTypeTree", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCLiteral", "com.sun.tools.javac.tree.JCTree", "JCLiteral", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCIdent", "com.sun.tools.javac.tree.JCTree", "JCIdent", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCMemberReference", "com.sun.tools.javac.tree.JCTree", "JCMemberReference", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCFieldAccess", "com.sun.tools.javac.tree.JCTree", "JCFieldAccess", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCArrayAccess", "com.sun.tools.javac.tree.JCTree", "JCArrayAccess", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCGuardPattern", "com.sun.tools.javac.tree.JCTree", "JCGuardPattern", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCParenthesizedPattern", "com.sun.tools.javac.tree.JCTree", "JCParenthesizedPattern", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCDefaultCaseLabel", "com.sun.tools.javac.tree.JCTree", "JCDefaultCaseLabel", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCBindingPattern", "com.sun.tools.javac.tree.JCTree", "JCBindingPattern", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCPattern", "com.sun.tools.javac.tree.JCTree", "JCPattern", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.tree.JCTree$JCInstanceOf", "com.sun.tools.javac.tree.JCTree", "JCInstanceOf", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCTypeCast", "com.sun.tools.javac.tree.JCTree", "JCTypeCast", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCBinary", "com.sun.tools.javac.tree.JCTree", "JCBinary", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCUnary", "com.sun.tools.javac.tree.JCTree", "JCUnary", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCAssignOp", "com.sun.tools.javac.tree.JCTree", "JCAssignOp", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCOperatorExpression", "com.sun.tools.javac.tree.JCTree", "JCOperatorExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.tree.JCTree$JCAssign", "com.sun.tools.javac.tree.JCTree", "JCAssign", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCParens", "com.sun.tools.javac.tree.JCTree", "JCParens", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCLambda", "com.sun.tools.javac.tree.JCTree", "JCLambda", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCNewArray", "com.sun.tools.javac.tree.JCTree", "JCNewArray", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCNewClass", "com.sun.tools.javac.tree.JCTree", "JCNewClass", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCMethodInvocation", "com.sun.tools.javac.tree.JCTree", "JCMethodInvocation", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCAssert", "com.sun.tools.javac.tree.JCTree", "JCAssert", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCThrow", "com.sun.tools.javac.tree.JCTree", "JCThrow", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCReturn", "com.sun.tools.javac.tree.JCTree", "JCReturn", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCContinue", "com.sun.tools.javac.tree.JCTree", "JCContinue", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCYield", "com.sun.tools.javac.tree.JCTree", "JCYield", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCBreak", "com.sun.tools.javac.tree.JCTree", "JCBreak", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCExpressionStatement", "com.sun.tools.javac.tree.JCTree", "JCExpressionStatement", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCIf", "com.sun.tools.javac.tree.JCTree", "JCIf", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCConditional", "com.sun.tools.javac.tree.JCTree", "JCConditional", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCCatch", "com.sun.tools.javac.tree.JCTree", "JCCatch", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCTry", "com.sun.tools.javac.tree.JCTree", "JCTry", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCSynchronized", "com.sun.tools.javac.tree.JCTree", "JCSynchronized", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCSwitchExpression", "com.sun.tools.javac.tree.JCTree", "JCSwitchExpression", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCCase", "com.sun.tools.javac.tree.JCTree", "JCCase", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCSwitch", "com.sun.tools.javac.tree.JCTree", "JCSwitch", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCLabeledStatement", "com.sun.tools.javac.tree.JCTree", "JCLabeledStatement", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCEnhancedForLoop", "com.sun.tools.javac.tree.JCTree", "JCEnhancedForLoop", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCForLoop", "com.sun.tools.javac.tree.JCTree", "JCForLoop", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCWhileLoop", "com.sun.tools.javac.tree.JCTree", "JCWhileLoop", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCDoWhileLoop", "com.sun.tools.javac.tree.JCTree", "JCDoWhileLoop", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCBlock", "com.sun.tools.javac.tree.JCTree", "JCBlock", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCSkip", "com.sun.tools.javac.tree.JCTree", "JCSkip", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCVariableDecl", "com.sun.tools.javac.tree.JCTree", "JCVariableDecl", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCMethodDecl", "com.sun.tools.javac.tree.JCTree", "JCMethodDecl", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCClassDecl", "com.sun.tools.javac.tree.JCTree", "JCClassDecl", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCFunctionalExpression", "com.sun.tools.javac.tree.JCTree", "JCFunctionalExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.tree.JCTree$JCPolyExpression", "com.sun.tools.javac.tree.JCTree", "JCPolyExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.tree.JCTree$JCExpression", "com.sun.tools.javac.tree.JCTree", "JCExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.tree.JCTree$JCCaseLabel", "com.sun.tools.javac.tree.JCTree", "JCCaseLabel", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.tree.JCTree$JCStatement", "com.sun.tools.javac.tree.JCTree", "JCStatement", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.tree.JCTree$JCImport", "com.sun.tools.javac.tree.JCTree", "JCImport", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCPackageDecl", "com.sun.tools.javac.tree.JCTree", "JCPackageDecl", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCCompilationUnit", "com.sun.tools.javac.tree.JCTree", "JCCompilationUnit", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$Tag", "com.sun.tools.javac.tree.JCTree", "Tag", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _JCTree_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.tree.JCTree",
	"java.lang.Object",
	"com.sun.source.tree.Tree,java.lang.Cloneable,com.sun.tools.javac.util.JCDiagnostic$DiagnosticPosition",
	_JCTree_FieldInfo_,
	_JCTree_MethodInfo_,
	nullptr,
	nullptr,
	_JCTree_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.JCTree$1,com.sun.tools.javac.tree.JCTree$Visitor,com.sun.tools.javac.tree.JCTree$Factory,com.sun.tools.javac.tree.JCTree$LetExpr,com.sun.tools.javac.tree.JCTree$JCErroneous,com.sun.tools.javac.tree.JCTree$JCUses,com.sun.tools.javac.tree.JCTree$JCRequires,com.sun.tools.javac.tree.JCTree$JCProvides,com.sun.tools.javac.tree.JCTree$JCOpens,com.sun.tools.javac.tree.JCTree$JCExports,com.sun.tools.javac.tree.JCTree$JCModuleDecl,com.sun.tools.javac.tree.JCTree$JCDirective,com.sun.tools.javac.tree.JCTree$JCAnnotatedType,com.sun.tools.javac.tree.JCTree$JCModifiers,com.sun.tools.javac.tree.JCTree$JCAnnotation,com.sun.tools.javac.tree.JCTree$TypeBoundKind,com.sun.tools.javac.tree.JCTree$JCWildcard,com.sun.tools.javac.tree.JCTree$JCTypeParameter,com.sun.tools.javac.tree.JCTree$JCTypeIntersection,com.sun.tools.javac.tree.JCTree$JCTypeUnion,com.sun.tools.javac.tree.JCTree$JCTypeApply,com.sun.tools.javac.tree.JCTree$JCArrayTypeTree,com.sun.tools.javac.tree.JCTree$JCPrimitiveTypeTree,com.sun.tools.javac.tree.JCTree$JCLiteral,com.sun.tools.javac.tree.JCTree$JCIdent,com.sun.tools.javac.tree.JCTree$JCMemberReference,com.sun.tools.javac.tree.JCTree$JCMemberReference$ReferenceKind,com.sun.tools.javac.tree.JCTree$JCMemberReference$OverloadKind,com.sun.tools.javac.tree.JCTree$JCFieldAccess,com.sun.tools.javac.tree.JCTree$JCArrayAccess,com.sun.tools.javac.tree.JCTree$JCGuardPattern,com.sun.tools.javac.tree.JCTree$JCParenthesizedPattern,com.sun.tools.javac.tree.JCTree$JCDefaultCaseLabel,com.sun.tools.javac.tree.JCTree$JCBindingPattern,com.sun.tools.javac.tree.JCTree$JCPattern,com.sun.tools.javac.tree.JCTree$JCInstanceOf,com.sun.tools.javac.tree.JCTree$JCTypeCast,com.sun.tools.javac.tree.JCTree$JCBinary,com.sun.tools.javac.tree.JCTree$JCUnary,com.sun.tools.javac.tree.JCTree$JCAssignOp,com.sun.tools.javac.tree.JCTree$JCOperatorExpression,com.sun.tools.javac.tree.JCTree$JCOperatorExpression$OperandPos,com.sun.tools.javac.tree.JCTree$JCAssign,com.sun.tools.javac.tree.JCTree$JCParens,com.sun.tools.javac.tree.JCTree$JCLambda,com.sun.tools.javac.tree.JCTree$JCLambda$ParameterKind,com.sun.tools.javac.tree.JCTree$JCNewArray,com.sun.tools.javac.tree.JCTree$JCNewClass,com.sun.tools.javac.tree.JCTree$JCMethodInvocation,com.sun.tools.javac.tree.JCTree$JCAssert,com.sun.tools.javac.tree.JCTree$JCThrow,com.sun.tools.javac.tree.JCTree$JCReturn,com.sun.tools.javac.tree.JCTree$JCContinue,com.sun.tools.javac.tree.JCTree$JCYield,com.sun.tools.javac.tree.JCTree$JCBreak,com.sun.tools.javac.tree.JCTree$JCExpressionStatement,com.sun.tools.javac.tree.JCTree$JCIf,com.sun.tools.javac.tree.JCTree$JCConditional,com.sun.tools.javac.tree.JCTree$JCCatch,com.sun.tools.javac.tree.JCTree$JCTry,com.sun.tools.javac.tree.JCTree$JCSynchronized,com.sun.tools.javac.tree.JCTree$JCSwitchExpression,com.sun.tools.javac.tree.JCTree$JCCase,com.sun.tools.javac.tree.JCTree$JCSwitch,com.sun.tools.javac.tree.JCTree$JCLabeledStatement,com.sun.tools.javac.tree.JCTree$JCEnhancedForLoop,com.sun.tools.javac.tree.JCTree$JCForLoop,com.sun.tools.javac.tree.JCTree$JCWhileLoop,com.sun.tools.javac.tree.JCTree$JCDoWhileLoop,com.sun.tools.javac.tree.JCTree$JCBlock,com.sun.tools.javac.tree.JCTree$JCSkip,com.sun.tools.javac.tree.JCTree$JCVariableDecl,com.sun.tools.javac.tree.JCTree$JCMethodDecl,com.sun.tools.javac.tree.JCTree$JCClassDecl,com.sun.tools.javac.tree.JCTree$JCFunctionalExpression,com.sun.tools.javac.tree.JCTree$JCPolyExpression,com.sun.tools.javac.tree.JCTree$JCPolyExpression$PolyKind,com.sun.tools.javac.tree.JCTree$JCExpression,com.sun.tools.javac.tree.JCTree$JCCaseLabel,com.sun.tools.javac.tree.JCTree$JCStatement,com.sun.tools.javac.tree.JCTree$JCImport,com.sun.tools.javac.tree.JCTree$JCPackageDecl,com.sun.tools.javac.tree.JCTree$JCCompilationUnit,com.sun.tools.javac.tree.JCTree$Tag"
};

$Object* allocate$JCTree($Class* clazz) {
	return $of($alloc(JCTree));
}

int32_t JCTree::hashCode() {
	 return this->$Tree::hashCode();
}

bool JCTree::equals(Object$* arg0) {
	 return this->$Tree::equals(arg0);
}

void JCTree::finalize() {
	this->$Tree::finalize();
}

void JCTree::init$() {
}

bool JCTree::hasTag($JCTree$Tag* tag) {
	return tag == getTag();
}

$String* JCTree::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringWriter, s, $new($StringWriter));
	try {
		$$new($Pretty, s, false)->printExpr(this);
	} catch ($IOException& e) {
		$throwNew($AssertionError, $of(e));
	}
	return s->toString();
}

JCTree* JCTree::setPos(int32_t pos) {
	this->pos$ = pos;
	return this;
}

JCTree* JCTree::setType($Type* type) {
	$set(this, type, type);
	return this;
}

$Object* JCTree::clone() {
	try {
		return $of($Tree::clone());
	} catch ($CloneNotSupportedException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

$JCDiagnostic$DiagnosticPosition* JCTree::pos() {
	return this;
}

JCTree* JCTree::getTree() {
	return this;
}

int32_t JCTree::getStartPosition() {
	return $TreeInfo::getStartPos(this);
}

int32_t JCTree::getPreferredPosition() {
	return this->pos$;
}

int32_t JCTree::getEndPosition($EndPosTable* endPosTable) {
	return $TreeInfo::getEndPos(this, endPosTable);
}

JCTree::JCTree() {
}

$Class* JCTree::load$($String* name, bool initialize) {
	$loadClass(JCTree, name, initialize, &_JCTree_ClassInfo_, allocate$JCTree);
	return class$;
}

$Class* JCTree::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com