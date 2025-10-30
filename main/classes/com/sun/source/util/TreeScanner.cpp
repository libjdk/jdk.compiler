#include <com/sun/source/util/TreeScanner.h>

#include <com/sun/source/tree/AnnotatedTypeTree.h>
#include <com/sun/source/tree/AnnotationTree.h>
#include <com/sun/source/tree/ArrayAccessTree.h>
#include <com/sun/source/tree/ArrayTypeTree.h>
#include <com/sun/source/tree/AssertTree.h>
#include <com/sun/source/tree/AssignmentTree.h>
#include <com/sun/source/tree/BinaryTree.h>
#include <com/sun/source/tree/BindingPatternTree.h>
#include <com/sun/source/tree/BlockTree.h>
#include <com/sun/source/tree/BreakTree.h>
#include <com/sun/source/tree/CaseLabelTree.h>
#include <com/sun/source/tree/CaseTree$CaseKind.h>
#include <com/sun/source/tree/CaseTree.h>
#include <com/sun/source/tree/CatchTree.h>
#include <com/sun/source/tree/ClassTree.h>
#include <com/sun/source/tree/CompilationUnitTree.h>
#include <com/sun/source/tree/CompoundAssignmentTree.h>
#include <com/sun/source/tree/ConditionalExpressionTree.h>
#include <com/sun/source/tree/ContinueTree.h>
#include <com/sun/source/tree/DefaultCaseLabelTree.h>
#include <com/sun/source/tree/DoWhileLoopTree.h>
#include <com/sun/source/tree/EmptyStatementTree.h>
#include <com/sun/source/tree/EnhancedForLoopTree.h>
#include <com/sun/source/tree/ErroneousTree.h>
#include <com/sun/source/tree/ExportsTree.h>
#include <com/sun/source/tree/ExpressionStatementTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/ForLoopTree.h>
#include <com/sun/source/tree/GuardedPatternTree.h>
#include <com/sun/source/tree/IdentifierTree.h>
#include <com/sun/source/tree/IfTree.h>
#include <com/sun/source/tree/ImportTree.h>
#include <com/sun/source/tree/InstanceOfTree.h>
#include <com/sun/source/tree/IntersectionTypeTree.h>
#include <com/sun/source/tree/LabeledStatementTree.h>
#include <com/sun/source/tree/LambdaExpressionTree.h>
#include <com/sun/source/tree/LiteralTree.h>
#include <com/sun/source/tree/MemberReferenceTree.h>
#include <com/sun/source/tree/MemberSelectTree.h>
#include <com/sun/source/tree/MethodInvocationTree.h>
#include <com/sun/source/tree/MethodTree.h>
#include <com/sun/source/tree/ModifiersTree.h>
#include <com/sun/source/tree/ModuleTree.h>
#include <com/sun/source/tree/NewArrayTree.h>
#include <com/sun/source/tree/NewClassTree.h>
#include <com/sun/source/tree/OpensTree.h>
#include <com/sun/source/tree/PackageTree.h>
#include <com/sun/source/tree/ParameterizedTypeTree.h>
#include <com/sun/source/tree/ParenthesizedPatternTree.h>
#include <com/sun/source/tree/ParenthesizedTree.h>
#include <com/sun/source/tree/PatternTree.h>
#include <com/sun/source/tree/PrimitiveTypeTree.h>
#include <com/sun/source/tree/ProvidesTree.h>
#include <com/sun/source/tree/RequiresTree.h>
#include <com/sun/source/tree/ReturnTree.h>
#include <com/sun/source/tree/StatementTree.h>
#include <com/sun/source/tree/SwitchExpressionTree.h>
#include <com/sun/source/tree/SwitchTree.h>
#include <com/sun/source/tree/SynchronizedTree.h>
#include <com/sun/source/tree/ThrowTree.h>
#include <com/sun/source/tree/Tree.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/source/tree/TryTree.h>
#include <com/sun/source/tree/TypeCastTree.h>
#include <com/sun/source/tree/TypeParameterTree.h>
#include <com/sun/source/tree/UnaryTree.h>
#include <com/sun/source/tree/UnionTypeTree.h>
#include <com/sun/source/tree/UsesTree.h>
#include <com/sun/source/tree/VariableTree.h>
#include <com/sun/source/tree/WhileLoopTree.h>
#include <com/sun/source/tree/WildcardTree.h>
#include <com/sun/source/tree/YieldTree.h>
#include <java/lang/Iterable.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef RULE

using $AnnotatedTypeTree = ::com::sun::source::tree::AnnotatedTypeTree;
using $AnnotationTree = ::com::sun::source::tree::AnnotationTree;
using $ArrayAccessTree = ::com::sun::source::tree::ArrayAccessTree;
using $ArrayTypeTree = ::com::sun::source::tree::ArrayTypeTree;
using $AssertTree = ::com::sun::source::tree::AssertTree;
using $AssignmentTree = ::com::sun::source::tree::AssignmentTree;
using $BinaryTree = ::com::sun::source::tree::BinaryTree;
using $BindingPatternTree = ::com::sun::source::tree::BindingPatternTree;
using $BlockTree = ::com::sun::source::tree::BlockTree;
using $BreakTree = ::com::sun::source::tree::BreakTree;
using $CaseLabelTree = ::com::sun::source::tree::CaseLabelTree;
using $CaseTree = ::com::sun::source::tree::CaseTree;
using $CaseTree$CaseKind = ::com::sun::source::tree::CaseTree$CaseKind;
using $CatchTree = ::com::sun::source::tree::CatchTree;
using $ClassTree = ::com::sun::source::tree::ClassTree;
using $CompilationUnitTree = ::com::sun::source::tree::CompilationUnitTree;
using $CompoundAssignmentTree = ::com::sun::source::tree::CompoundAssignmentTree;
using $ConditionalExpressionTree = ::com::sun::source::tree::ConditionalExpressionTree;
using $ContinueTree = ::com::sun::source::tree::ContinueTree;
using $DefaultCaseLabelTree = ::com::sun::source::tree::DefaultCaseLabelTree;
using $DoWhileLoopTree = ::com::sun::source::tree::DoWhileLoopTree;
using $EmptyStatementTree = ::com::sun::source::tree::EmptyStatementTree;
using $EnhancedForLoopTree = ::com::sun::source::tree::EnhancedForLoopTree;
using $ErroneousTree = ::com::sun::source::tree::ErroneousTree;
using $ExportsTree = ::com::sun::source::tree::ExportsTree;
using $ExpressionStatementTree = ::com::sun::source::tree::ExpressionStatementTree;
using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $ForLoopTree = ::com::sun::source::tree::ForLoopTree;
using $GuardedPatternTree = ::com::sun::source::tree::GuardedPatternTree;
using $IdentifierTree = ::com::sun::source::tree::IdentifierTree;
using $IfTree = ::com::sun::source::tree::IfTree;
using $ImportTree = ::com::sun::source::tree::ImportTree;
using $InstanceOfTree = ::com::sun::source::tree::InstanceOfTree;
using $IntersectionTypeTree = ::com::sun::source::tree::IntersectionTypeTree;
using $LabeledStatementTree = ::com::sun::source::tree::LabeledStatementTree;
using $LambdaExpressionTree = ::com::sun::source::tree::LambdaExpressionTree;
using $LiteralTree = ::com::sun::source::tree::LiteralTree;
using $MemberReferenceTree = ::com::sun::source::tree::MemberReferenceTree;
using $MemberSelectTree = ::com::sun::source::tree::MemberSelectTree;
using $MethodInvocationTree = ::com::sun::source::tree::MethodInvocationTree;
using $MethodTree = ::com::sun::source::tree::MethodTree;
using $ModifiersTree = ::com::sun::source::tree::ModifiersTree;
using $ModuleTree = ::com::sun::source::tree::ModuleTree;
using $NewArrayTree = ::com::sun::source::tree::NewArrayTree;
using $NewClassTree = ::com::sun::source::tree::NewClassTree;
using $OpensTree = ::com::sun::source::tree::OpensTree;
using $PackageTree = ::com::sun::source::tree::PackageTree;
using $ParameterizedTypeTree = ::com::sun::source::tree::ParameterizedTypeTree;
using $ParenthesizedPatternTree = ::com::sun::source::tree::ParenthesizedPatternTree;
using $ParenthesizedTree = ::com::sun::source::tree::ParenthesizedTree;
using $PatternTree = ::com::sun::source::tree::PatternTree;
using $PrimitiveTypeTree = ::com::sun::source::tree::PrimitiveTypeTree;
using $ProvidesTree = ::com::sun::source::tree::ProvidesTree;
using $RequiresTree = ::com::sun::source::tree::RequiresTree;
using $ReturnTree = ::com::sun::source::tree::ReturnTree;
using $StatementTree = ::com::sun::source::tree::StatementTree;
using $SwitchExpressionTree = ::com::sun::source::tree::SwitchExpressionTree;
using $SwitchTree = ::com::sun::source::tree::SwitchTree;
using $SynchronizedTree = ::com::sun::source::tree::SynchronizedTree;
using $ThrowTree = ::com::sun::source::tree::ThrowTree;
using $Tree = ::com::sun::source::tree::Tree;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $TryTree = ::com::sun::source::tree::TryTree;
using $TypeCastTree = ::com::sun::source::tree::TypeCastTree;
using $TypeParameterTree = ::com::sun::source::tree::TypeParameterTree;
using $UnaryTree = ::com::sun::source::tree::UnaryTree;
using $UnionTypeTree = ::com::sun::source::tree::UnionTypeTree;
using $UsesTree = ::com::sun::source::tree::UsesTree;
using $VariableTree = ::com::sun::source::tree::VariableTree;
using $WhileLoopTree = ::com::sun::source::tree::WhileLoopTree;
using $WildcardTree = ::com::sun::source::tree::WildcardTree;
using $YieldTree = ::com::sun::source::tree::YieldTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace util {

$CompoundAttribute _TreeScanner_MethodAnnotations_visitDefaultCaseLabel23[] = {
	{}
};

$CompoundAttribute _TreeScanner_MethodAnnotations_visitGuardedPattern31[] = {
	{}
};

$CompoundAttribute _TreeScanner_MethodAnnotations_visitParenthesizedPattern53[] = {
	{}
};

$MethodInfo _TreeScanner_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TreeScanner::*)()>(&TreeScanner::init$))},
	{"reduce", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TR;TR;)TR;", $PUBLIC},
	{"scan", "(Lcom/sun/source/tree/Tree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/Tree;TP;)TR;", $PUBLIC},
	{"scan", "(Ljava/lang/Iterable;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Iterable<+Lcom/sun/source/tree/Tree;>;TP;)TR;", $PUBLIC},
	{"scanAndReduce", "(Lcom/sun/source/tree/Tree;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/Tree;TP;TR;)TR;", $PRIVATE, $method(static_cast<$Object*(TreeScanner::*)($Tree*,Object$*,Object$*)>(&TreeScanner::scanAndReduce))},
	{"scanAndReduce", "(Ljava/lang/Iterable;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Iterable<+Lcom/sun/source/tree/Tree;>;TP;TR;)TR;", $PRIVATE, $method(static_cast<$Object*(TreeScanner::*)($Iterable*,Object$*,Object$*)>(&TreeScanner::scanAndReduce))},
	{"visitAnnotatedType", "(Lcom/sun/source/tree/AnnotatedTypeTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/AnnotatedTypeTree;TP;)TR;", $PUBLIC},
	{"visitAnnotation", "(Lcom/sun/source/tree/AnnotationTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/AnnotationTree;TP;)TR;", $PUBLIC},
	{"visitArrayAccess", "(Lcom/sun/source/tree/ArrayAccessTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/ArrayAccessTree;TP;)TR;", $PUBLIC},
	{"visitArrayType", "(Lcom/sun/source/tree/ArrayTypeTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/ArrayTypeTree;TP;)TR;", $PUBLIC},
	{"visitAssert", "(Lcom/sun/source/tree/AssertTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/AssertTree;TP;)TR;", $PUBLIC},
	{"visitAssignment", "(Lcom/sun/source/tree/AssignmentTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/AssignmentTree;TP;)TR;", $PUBLIC},
	{"visitBinary", "(Lcom/sun/source/tree/BinaryTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/BinaryTree;TP;)TR;", $PUBLIC},
	{"visitBindingPattern", "(Lcom/sun/source/tree/BindingPatternTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/BindingPatternTree;TP;)TR;", $PUBLIC},
	{"visitBlock", "(Lcom/sun/source/tree/BlockTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/BlockTree;TP;)TR;", $PUBLIC},
	{"visitBreak", "(Lcom/sun/source/tree/BreakTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/BreakTree;TP;)TR;", $PUBLIC},
	{"visitCase", "(Lcom/sun/source/tree/CaseTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/CaseTree;TP;)TR;", $PUBLIC},
	{"visitCatch", "(Lcom/sun/source/tree/CatchTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/CatchTree;TP;)TR;", $PUBLIC},
	{"visitClass", "(Lcom/sun/source/tree/ClassTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/ClassTree;TP;)TR;", $PUBLIC},
	{"visitCompilationUnit", "(Lcom/sun/source/tree/CompilationUnitTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/CompilationUnitTree;TP;)TR;", $PUBLIC},
	{"visitCompoundAssignment", "(Lcom/sun/source/tree/CompoundAssignmentTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/CompoundAssignmentTree;TP;)TR;", $PUBLIC},
	{"visitConditionalExpression", "(Lcom/sun/source/tree/ConditionalExpressionTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/ConditionalExpressionTree;TP;)TR;", $PUBLIC},
	{"visitContinue", "(Lcom/sun/source/tree/ContinueTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/ContinueTree;TP;)TR;", $PUBLIC},
	{"visitDefaultCaseLabel", "(Lcom/sun/source/tree/DefaultCaseLabelTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/DefaultCaseLabelTree;TP;)TR;", $PUBLIC, nullptr, nullptr, nullptr, _TreeScanner_MethodAnnotations_visitDefaultCaseLabel23},
	{"visitDoWhileLoop", "(Lcom/sun/source/tree/DoWhileLoopTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/DoWhileLoopTree;TP;)TR;", $PUBLIC},
	{"visitEmptyStatement", "(Lcom/sun/source/tree/EmptyStatementTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/EmptyStatementTree;TP;)TR;", $PUBLIC},
	{"visitEnhancedForLoop", "(Lcom/sun/source/tree/EnhancedForLoopTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/EnhancedForLoopTree;TP;)TR;", $PUBLIC},
	{"visitErroneous", "(Lcom/sun/source/tree/ErroneousTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/ErroneousTree;TP;)TR;", $PUBLIC},
	{"visitExports", "(Lcom/sun/source/tree/ExportsTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/ExportsTree;TP;)TR;", $PUBLIC},
	{"visitExpressionStatement", "(Lcom/sun/source/tree/ExpressionStatementTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/ExpressionStatementTree;TP;)TR;", $PUBLIC},
	{"visitForLoop", "(Lcom/sun/source/tree/ForLoopTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/ForLoopTree;TP;)TR;", $PUBLIC},
	{"visitGuardedPattern", "(Lcom/sun/source/tree/GuardedPatternTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/GuardedPatternTree;TP;)TR;", $PUBLIC, nullptr, nullptr, nullptr, _TreeScanner_MethodAnnotations_visitGuardedPattern31},
	{"visitIdentifier", "(Lcom/sun/source/tree/IdentifierTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/IdentifierTree;TP;)TR;", $PUBLIC},
	{"visitIf", "(Lcom/sun/source/tree/IfTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/IfTree;TP;)TR;", $PUBLIC},
	{"visitImport", "(Lcom/sun/source/tree/ImportTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/ImportTree;TP;)TR;", $PUBLIC},
	{"visitInstanceOf", "(Lcom/sun/source/tree/InstanceOfTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/InstanceOfTree;TP;)TR;", $PUBLIC},
	{"visitIntersectionType", "(Lcom/sun/source/tree/IntersectionTypeTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/IntersectionTypeTree;TP;)TR;", $PUBLIC},
	{"visitLabeledStatement", "(Lcom/sun/source/tree/LabeledStatementTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/LabeledStatementTree;TP;)TR;", $PUBLIC},
	{"visitLambdaExpression", "(Lcom/sun/source/tree/LambdaExpressionTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/LambdaExpressionTree;TP;)TR;", $PUBLIC},
	{"visitLiteral", "(Lcom/sun/source/tree/LiteralTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/LiteralTree;TP;)TR;", $PUBLIC},
	{"visitMemberReference", "(Lcom/sun/source/tree/MemberReferenceTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/MemberReferenceTree;TP;)TR;", $PUBLIC},
	{"visitMemberSelect", "(Lcom/sun/source/tree/MemberSelectTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/MemberSelectTree;TP;)TR;", $PUBLIC},
	{"visitMethod", "(Lcom/sun/source/tree/MethodTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/MethodTree;TP;)TR;", $PUBLIC},
	{"visitMethodInvocation", "(Lcom/sun/source/tree/MethodInvocationTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/MethodInvocationTree;TP;)TR;", $PUBLIC},
	{"visitModifiers", "(Lcom/sun/source/tree/ModifiersTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/ModifiersTree;TP;)TR;", $PUBLIC},
	{"visitModule", "(Lcom/sun/source/tree/ModuleTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/ModuleTree;TP;)TR;", $PUBLIC},
	{"visitNewArray", "(Lcom/sun/source/tree/NewArrayTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/NewArrayTree;TP;)TR;", $PUBLIC},
	{"visitNewClass", "(Lcom/sun/source/tree/NewClassTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/NewClassTree;TP;)TR;", $PUBLIC},
	{"visitOpens", "(Lcom/sun/source/tree/OpensTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/OpensTree;TP;)TR;", $PUBLIC},
	{"visitOther", "(Lcom/sun/source/tree/Tree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/Tree;TP;)TR;", $PUBLIC},
	{"visitPackage", "(Lcom/sun/source/tree/PackageTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/PackageTree;TP;)TR;", $PUBLIC},
	{"visitParameterizedType", "(Lcom/sun/source/tree/ParameterizedTypeTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/ParameterizedTypeTree;TP;)TR;", $PUBLIC},
	{"visitParenthesized", "(Lcom/sun/source/tree/ParenthesizedTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/ParenthesizedTree;TP;)TR;", $PUBLIC},
	{"visitParenthesizedPattern", "(Lcom/sun/source/tree/ParenthesizedPatternTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/ParenthesizedPatternTree;TP;)TR;", $PUBLIC, nullptr, nullptr, nullptr, _TreeScanner_MethodAnnotations_visitParenthesizedPattern53},
	{"visitPrimitiveType", "(Lcom/sun/source/tree/PrimitiveTypeTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/PrimitiveTypeTree;TP;)TR;", $PUBLIC},
	{"visitProvides", "(Lcom/sun/source/tree/ProvidesTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/ProvidesTree;TP;)TR;", $PUBLIC},
	{"visitRequires", "(Lcom/sun/source/tree/RequiresTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/RequiresTree;TP;)TR;", $PUBLIC},
	{"visitReturn", "(Lcom/sun/source/tree/ReturnTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/ReturnTree;TP;)TR;", $PUBLIC},
	{"visitSwitch", "(Lcom/sun/source/tree/SwitchTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/SwitchTree;TP;)TR;", $PUBLIC},
	{"visitSwitchExpression", "(Lcom/sun/source/tree/SwitchExpressionTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/SwitchExpressionTree;TP;)TR;", $PUBLIC},
	{"visitSynchronized", "(Lcom/sun/source/tree/SynchronizedTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/SynchronizedTree;TP;)TR;", $PUBLIC},
	{"visitThrow", "(Lcom/sun/source/tree/ThrowTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/ThrowTree;TP;)TR;", $PUBLIC},
	{"visitTry", "(Lcom/sun/source/tree/TryTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/TryTree;TP;)TR;", $PUBLIC},
	{"visitTypeCast", "(Lcom/sun/source/tree/TypeCastTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/TypeCastTree;TP;)TR;", $PUBLIC},
	{"visitTypeParameter", "(Lcom/sun/source/tree/TypeParameterTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/TypeParameterTree;TP;)TR;", $PUBLIC},
	{"visitUnary", "(Lcom/sun/source/tree/UnaryTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/UnaryTree;TP;)TR;", $PUBLIC},
	{"visitUnionType", "(Lcom/sun/source/tree/UnionTypeTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/UnionTypeTree;TP;)TR;", $PUBLIC},
	{"visitUses", "(Lcom/sun/source/tree/UsesTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/UsesTree;TP;)TR;", $PUBLIC},
	{"visitVariable", "(Lcom/sun/source/tree/VariableTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/VariableTree;TP;)TR;", $PUBLIC},
	{"visitWhileLoop", "(Lcom/sun/source/tree/WhileLoopTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/WhileLoopTree;TP;)TR;", $PUBLIC},
	{"visitWildcard", "(Lcom/sun/source/tree/WildcardTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/WildcardTree;TP;)TR;", $PUBLIC},
	{"visitYield", "(Lcom/sun/source/tree/YieldTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/YieldTree;TP;)TR;", $PUBLIC},
	{}
};

$ClassInfo _TreeScanner_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.source.util.TreeScanner",
	"java.lang.Object",
	"com.sun.source.tree.TreeVisitor",
	nullptr,
	_TreeScanner_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljava/lang/Object;Lcom/sun/source/tree/TreeVisitor<TR;TP;>;"
};

$Object* allocate$TreeScanner($Class* clazz) {
	return $of($alloc(TreeScanner));
}

void TreeScanner::init$() {
}

$Object* TreeScanner::scan($Tree* tree, Object$* p) {
	return $of((tree == nullptr) ? ($Object*)nullptr : $nc(tree)->accept(this, p));
}

$Object* TreeScanner::scanAndReduce($Tree* node, Object$* p, Object$* r) {
	return $of(reduce($(scan(node, p)), r));
}

$Object* TreeScanner::scan($Iterable* nodes, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, nullptr);
	if (nodes != nullptr) {
		bool first = true;
		{
			$var($Iterator, i$, nodes->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Tree, node, $cast($Tree, i$->next()));
				{
					$assign(r, first ? scan(node, p) : scanAndReduce(node, p, r));
					first = false;
				}
			}
		}
	}
	return $of(r);
}

$Object* TreeScanner::scanAndReduce($Iterable* nodes, Object$* p, Object$* r) {
	return $of(reduce($(scan(nodes, p)), r));
}

$Object* TreeScanner::reduce(Object$* r1, Object$* r2) {
	return $of(r1);
}

$Object* TreeScanner::visitCompilationUnit($CompilationUnitTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$Tree*>($nc(node)->getPackage())), p));
	$assign(r, scanAndReduce($(static_cast<$Iterable*>($nc(node)->getImports())), p, r));
	$assign(r, scanAndReduce($(static_cast<$Iterable*>($nc(node)->getTypeDecls())), p, r));
	$assign(r, scanAndReduce($(static_cast<$Tree*>($nc(node)->getModule())), p, r));
	return $of(r);
}

$Object* TreeScanner::visitPackage($PackageTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$Iterable*>($nc(node)->getAnnotations())), p));
	$assign(r, scanAndReduce($(static_cast<$Tree*>($nc(node)->getPackageName())), p, r));
	return $of(r);
}

$Object* TreeScanner::visitImport($ImportTree* node, Object$* p) {
	return $of(scan($($nc(node)->getQualifiedIdentifier()), p));
}

$Object* TreeScanner::visitClass($ClassTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$Tree*>($nc(node)->getModifiers())), p));
	$assign(r, scanAndReduce($(static_cast<$Iterable*>($nc(node)->getTypeParameters())), p, r));
	$assign(r, scanAndReduce($($nc(node)->getExtendsClause()), p, r));
	$assign(r, scanAndReduce($(static_cast<$Iterable*>($nc(node)->getImplementsClause())), p, r));
	$assign(r, scanAndReduce($(static_cast<$Iterable*>($nc(node)->getPermitsClause())), p, r));
	$assign(r, scanAndReduce($(static_cast<$Iterable*>($nc(node)->getMembers())), p, r));
	return $of(r);
}

$Object* TreeScanner::visitMethod($MethodTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$Tree*>($nc(node)->getModifiers())), p));
	$assign(r, scanAndReduce($($nc(node)->getReturnType()), p, r));
	$assign(r, scanAndReduce($(static_cast<$Iterable*>($nc(node)->getTypeParameters())), p, r));
	$assign(r, scanAndReduce($(static_cast<$Iterable*>($nc(node)->getParameters())), p, r));
	$assign(r, scanAndReduce($(static_cast<$Tree*>($nc(node)->getReceiverParameter())), p, r));
	$assign(r, scanAndReduce($(static_cast<$Iterable*>($nc(node)->getThrows())), p, r));
	$assign(r, scanAndReduce($(static_cast<$Tree*>($nc(node)->getBody())), p, r));
	$assign(r, scanAndReduce($($nc(node)->getDefaultValue()), p, r));
	return $of(r);
}

$Object* TreeScanner::visitVariable($VariableTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$Tree*>($nc(node)->getModifiers())), p));
	$assign(r, scanAndReduce($($nc(node)->getType()), p, r));
	$assign(r, scanAndReduce($(static_cast<$Tree*>($nc(node)->getNameExpression())), p, r));
	$assign(r, scanAndReduce($(static_cast<$Tree*>($nc(node)->getInitializer())), p, r));
	return $of(r);
}

$Object* TreeScanner::visitEmptyStatement($EmptyStatementTree* node, Object$* p) {
	return $of(nullptr);
}

$Object* TreeScanner::visitBlock($BlockTree* node, Object$* p) {
	return $of(scan($(static_cast<$Iterable*>($nc(node)->getStatements())), p));
}

$Object* TreeScanner::visitDoWhileLoop($DoWhileLoopTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$Tree*>($nc(node)->getStatement())), p));
	$assign(r, scanAndReduce($(static_cast<$Tree*>($nc(node)->getCondition())), p, r));
	return $of(r);
}

$Object* TreeScanner::visitWhileLoop($WhileLoopTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$Tree*>($nc(node)->getCondition())), p));
	$assign(r, scanAndReduce($(static_cast<$Tree*>($nc(node)->getStatement())), p, r));
	return $of(r);
}

$Object* TreeScanner::visitForLoop($ForLoopTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$Iterable*>($nc(node)->getInitializer())), p));
	$assign(r, scanAndReduce($(static_cast<$Tree*>($nc(node)->getCondition())), p, r));
	$assign(r, scanAndReduce($(static_cast<$Iterable*>($nc(node)->getUpdate())), p, r));
	$assign(r, scanAndReduce($(static_cast<$Tree*>($nc(node)->getStatement())), p, r));
	return $of(r);
}

$Object* TreeScanner::visitEnhancedForLoop($EnhancedForLoopTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$Tree*>($nc(node)->getVariable())), p));
	$assign(r, scanAndReduce($(static_cast<$Tree*>($nc(node)->getExpression())), p, r));
	$assign(r, scanAndReduce($(static_cast<$Tree*>($nc(node)->getStatement())), p, r));
	return $of(r);
}

$Object* TreeScanner::visitLabeledStatement($LabeledStatementTree* node, Object$* p) {
	return $of(scan($(static_cast<$Tree*>($nc(node)->getStatement())), p));
}

$Object* TreeScanner::visitSwitch($SwitchTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$Tree*>($nc(node)->getExpression())), p));
	$assign(r, scanAndReduce($(static_cast<$Iterable*>($nc(node)->getCases())), p, r));
	return $of(r);
}

$Object* TreeScanner::visitSwitchExpression($SwitchExpressionTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$Tree*>($nc(node)->getExpression())), p));
	$assign(r, scanAndReduce($(static_cast<$Iterable*>($nc(node)->getCases())), p, r));
	return $of(r);
}

$Object* TreeScanner::visitCase($CaseTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$Iterable*>($nc(node)->getExpressions())), p));
	$init($CaseTree$CaseKind);
	if ($nc(node)->getCaseKind() == $CaseTree$CaseKind::RULE) {
		$assign(r, scanAndReduce($(node->getBody()), p, r));
	} else {
		$assign(r, scanAndReduce($(static_cast<$Iterable*>(node->getStatements())), p, r));
	}
	return $of(r);
}

$Object* TreeScanner::visitSynchronized($SynchronizedTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$Tree*>($nc(node)->getExpression())), p));
	$assign(r, scanAndReduce($(static_cast<$Tree*>($nc(node)->getBlock())), p, r));
	return $of(r);
}

$Object* TreeScanner::visitTry($TryTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$Iterable*>($nc(node)->getResources())), p));
	$assign(r, scanAndReduce($(static_cast<$Tree*>($nc(node)->getBlock())), p, r));
	$assign(r, scanAndReduce($(static_cast<$Iterable*>($nc(node)->getCatches())), p, r));
	$assign(r, scanAndReduce($(static_cast<$Tree*>($nc(node)->getFinallyBlock())), p, r));
	return $of(r);
}

$Object* TreeScanner::visitCatch($CatchTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$Tree*>($nc(node)->getParameter())), p));
	$assign(r, scanAndReduce($(static_cast<$Tree*>($nc(node)->getBlock())), p, r));
	return $of(r);
}

$Object* TreeScanner::visitConditionalExpression($ConditionalExpressionTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$Tree*>($nc(node)->getCondition())), p));
	$assign(r, scanAndReduce($(static_cast<$Tree*>($nc(node)->getTrueExpression())), p, r));
	$assign(r, scanAndReduce($(static_cast<$Tree*>($nc(node)->getFalseExpression())), p, r));
	return $of(r);
}

$Object* TreeScanner::visitIf($IfTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$Tree*>($nc(node)->getCondition())), p));
	$assign(r, scanAndReduce($(static_cast<$Tree*>($nc(node)->getThenStatement())), p, r));
	$assign(r, scanAndReduce($(static_cast<$Tree*>($nc(node)->getElseStatement())), p, r));
	return $of(r);
}

$Object* TreeScanner::visitExpressionStatement($ExpressionStatementTree* node, Object$* p) {
	return $of(scan($(static_cast<$Tree*>($nc(node)->getExpression())), p));
}

$Object* TreeScanner::visitBreak($BreakTree* node, Object$* p) {
	return $of(nullptr);
}

$Object* TreeScanner::visitContinue($ContinueTree* node, Object$* p) {
	return $of(nullptr);
}

$Object* TreeScanner::visitReturn($ReturnTree* node, Object$* p) {
	return $of(scan($(static_cast<$Tree*>($nc(node)->getExpression())), p));
}

$Object* TreeScanner::visitThrow($ThrowTree* node, Object$* p) {
	return $of(scan($(static_cast<$Tree*>($nc(node)->getExpression())), p));
}

$Object* TreeScanner::visitAssert($AssertTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$Tree*>($nc(node)->getCondition())), p));
	$assign(r, scanAndReduce($(static_cast<$Tree*>($nc(node)->getDetail())), p, r));
	return $of(r);
}

$Object* TreeScanner::visitMethodInvocation($MethodInvocationTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$Iterable*>($nc(node)->getTypeArguments())), p));
	$assign(r, scanAndReduce($(static_cast<$Tree*>($nc(node)->getMethodSelect())), p, r));
	$assign(r, scanAndReduce($(static_cast<$Iterable*>($nc(node)->getArguments())), p, r));
	return $of(r);
}

$Object* TreeScanner::visitNewClass($NewClassTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$Tree*>($nc(node)->getEnclosingExpression())), p));
	$assign(r, scanAndReduce($(static_cast<$Tree*>($nc(node)->getIdentifier())), p, r));
	$assign(r, scanAndReduce($(static_cast<$Iterable*>($nc(node)->getTypeArguments())), p, r));
	$assign(r, scanAndReduce($(static_cast<$Iterable*>($nc(node)->getArguments())), p, r));
	$assign(r, scanAndReduce($(static_cast<$Tree*>($nc(node)->getClassBody())), p, r));
	return $of(r);
}

$Object* TreeScanner::visitNewArray($NewArrayTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($($nc(node)->getType()), p));
	$assign(r, scanAndReduce($(static_cast<$Iterable*>($nc(node)->getDimensions())), p, r));
	$assign(r, scanAndReduce($(static_cast<$Iterable*>($nc(node)->getInitializers())), p, r));
	$assign(r, scanAndReduce($(static_cast<$Iterable*>($nc(node)->getAnnotations())), p, r));
	{
		$var($Iterator, i$, $nc($($nc(node)->getDimAnnotations()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Iterable, dimAnno, $cast($Iterable, i$->next()));
			{
				$assign(r, scanAndReduce(dimAnno, p, r));
			}
		}
	}
	return $of(r);
}

$Object* TreeScanner::visitLambdaExpression($LambdaExpressionTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$Iterable*>($nc(node)->getParameters())), p));
	$assign(r, scanAndReduce($($nc(node)->getBody()), p, r));
	return $of(r);
}

$Object* TreeScanner::visitParenthesized($ParenthesizedTree* node, Object$* p) {
	return $of(scan($(static_cast<$Tree*>($nc(node)->getExpression())), p));
}

$Object* TreeScanner::visitAssignment($AssignmentTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$Tree*>($nc(node)->getVariable())), p));
	$assign(r, scanAndReduce($(static_cast<$Tree*>($nc(node)->getExpression())), p, r));
	return $of(r);
}

$Object* TreeScanner::visitCompoundAssignment($CompoundAssignmentTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$Tree*>($nc(node)->getVariable())), p));
	$assign(r, scanAndReduce($(static_cast<$Tree*>($nc(node)->getExpression())), p, r));
	return $of(r);
}

$Object* TreeScanner::visitUnary($UnaryTree* node, Object$* p) {
	return $of(scan($(static_cast<$Tree*>($nc(node)->getExpression())), p));
}

$Object* TreeScanner::visitBinary($BinaryTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$Tree*>($nc(node)->getLeftOperand())), p));
	$assign(r, scanAndReduce($(static_cast<$Tree*>($nc(node)->getRightOperand())), p, r));
	return $of(r);
}

$Object* TreeScanner::visitTypeCast($TypeCastTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($($nc(node)->getType()), p));
	$assign(r, scanAndReduce($(static_cast<$Tree*>($nc(node)->getExpression())), p, r));
	return $of(r);
}

$Object* TreeScanner::visitInstanceOf($InstanceOfTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$Tree*>($nc(node)->getExpression())), p));
	if ($nc(node)->getPattern() != nullptr) {
		$assign(r, scanAndReduce($(static_cast<$Tree*>(node->getPattern())), p, r));
	} else {
		$assign(r, scanAndReduce($(node->getType()), p, r));
	}
	return $of(r);
}

$Object* TreeScanner::visitBindingPattern($BindingPatternTree* node, Object$* p) {
	return $of(scan($(static_cast<$Tree*>($nc(node)->getVariable())), p));
}

$Object* TreeScanner::visitDefaultCaseLabel($DefaultCaseLabelTree* node, Object$* p) {
	return $of(nullptr);
}

$Object* TreeScanner::visitArrayAccess($ArrayAccessTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$Tree*>($nc(node)->getExpression())), p));
	$assign(r, scanAndReduce($(static_cast<$Tree*>($nc(node)->getIndex())), p, r));
	return $of(r);
}

$Object* TreeScanner::visitMemberSelect($MemberSelectTree* node, Object$* p) {
	return $of(scan($(static_cast<$Tree*>($nc(node)->getExpression())), p));
}

$Object* TreeScanner::visitParenthesizedPattern($ParenthesizedPatternTree* node, Object$* p) {
	return $of(scan($(static_cast<$Tree*>($nc(node)->getPattern())), p));
}

$Object* TreeScanner::visitGuardedPattern($GuardedPatternTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$Tree*>($nc(node)->getPattern())), p));
	return $of(scanAndReduce($(static_cast<$Tree*>($nc(node)->getExpression())), p, r));
}

$Object* TreeScanner::visitMemberReference($MemberReferenceTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$Tree*>($nc(node)->getQualifierExpression())), p));
	$assign(r, scanAndReduce($(static_cast<$Iterable*>($nc(node)->getTypeArguments())), p, r));
	return $of(r);
}

$Object* TreeScanner::visitIdentifier($IdentifierTree* node, Object$* p) {
	return $of(nullptr);
}

$Object* TreeScanner::visitLiteral($LiteralTree* node, Object$* p) {
	return $of(nullptr);
}

$Object* TreeScanner::visitPrimitiveType($PrimitiveTypeTree* node, Object$* p) {
	return $of(nullptr);
}

$Object* TreeScanner::visitArrayType($ArrayTypeTree* node, Object$* p) {
	return $of(scan($($nc(node)->getType()), p));
}

$Object* TreeScanner::visitParameterizedType($ParameterizedTypeTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($($nc(node)->getType()), p));
	$assign(r, scanAndReduce($(static_cast<$Iterable*>($nc(node)->getTypeArguments())), p, r));
	return $of(r);
}

$Object* TreeScanner::visitUnionType($UnionTypeTree* node, Object$* p) {
	return $of(scan($(static_cast<$Iterable*>($nc(node)->getTypeAlternatives())), p));
}

$Object* TreeScanner::visitIntersectionType($IntersectionTypeTree* node, Object$* p) {
	return $of(scan($(static_cast<$Iterable*>($nc(node)->getBounds())), p));
}

$Object* TreeScanner::visitTypeParameter($TypeParameterTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$Iterable*>($nc(node)->getAnnotations())), p));
	$assign(r, scanAndReduce($(static_cast<$Iterable*>($nc(node)->getBounds())), p, r));
	return $of(r);
}

$Object* TreeScanner::visitWildcard($WildcardTree* node, Object$* p) {
	return $of(scan($($nc(node)->getBound()), p));
}

$Object* TreeScanner::visitModifiers($ModifiersTree* node, Object$* p) {
	return $of(scan($(static_cast<$Iterable*>($nc(node)->getAnnotations())), p));
}

$Object* TreeScanner::visitAnnotation($AnnotationTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($($nc(node)->getAnnotationType()), p));
	$assign(r, scanAndReduce($(static_cast<$Iterable*>($nc(node)->getArguments())), p, r));
	return $of(r);
}

$Object* TreeScanner::visitAnnotatedType($AnnotatedTypeTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$Iterable*>($nc(node)->getAnnotations())), p));
	$assign(r, scanAndReduce($(static_cast<$Tree*>($nc(node)->getUnderlyingType())), p, r));
	return $of(r);
}

$Object* TreeScanner::visitModule($ModuleTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$Iterable*>($nc(node)->getAnnotations())), p));
	$assign(r, scanAndReduce($(static_cast<$Tree*>($nc(node)->getName())), p, r));
	$assign(r, scanAndReduce($(static_cast<$Iterable*>($nc(node)->getDirectives())), p, r));
	return $of(r);
}

$Object* TreeScanner::visitExports($ExportsTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$Tree*>($nc(node)->getPackageName())), p));
	$assign(r, scanAndReduce($(static_cast<$Iterable*>($nc(node)->getModuleNames())), p, r));
	return $of(r);
}

$Object* TreeScanner::visitOpens($OpensTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$Tree*>($nc(node)->getPackageName())), p));
	$assign(r, scanAndReduce($(static_cast<$Iterable*>($nc(node)->getModuleNames())), p, r));
	return $of(r);
}

$Object* TreeScanner::visitProvides($ProvidesTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$Tree*>($nc(node)->getServiceName())), p));
	$assign(r, scanAndReduce($(static_cast<$Iterable*>($nc(node)->getImplementationNames())), p, r));
	return $of(r);
}

$Object* TreeScanner::visitRequires($RequiresTree* node, Object$* p) {
	return $of(scan($(static_cast<$Tree*>($nc(node)->getModuleName())), p));
}

$Object* TreeScanner::visitUses($UsesTree* node, Object$* p) {
	return $of(scan($(static_cast<$Tree*>($nc(node)->getServiceName())), p));
}

$Object* TreeScanner::visitOther($Tree* node, Object$* p) {
	return $of(nullptr);
}

$Object* TreeScanner::visitErroneous($ErroneousTree* node, Object$* p) {
	return $of(nullptr);
}

$Object* TreeScanner::visitYield($YieldTree* node, Object$* p) {
	return $of(scan($(static_cast<$Tree*>($nc(node)->getValue())), p));
}

TreeScanner::TreeScanner() {
}

$Class* TreeScanner::load$($String* name, bool initialize) {
	$loadClass(TreeScanner, name, initialize, &_TreeScanner_ClassInfo_, allocate$TreeScanner);
	return class$;
}

$Class* TreeScanner::class$ = nullptr;

			} // util
		} // source
	} // sun
} // com