#ifndef _com_sun_source_tree_TreeVisitor_h_
#define _com_sun_source_tree_TreeVisitor_h_
//$ interface com.sun.source.tree.TreeVisitor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class AnnotatedTypeTree;
				class AnnotationTree;
				class ArrayAccessTree;
				class ArrayTypeTree;
				class AssertTree;
				class AssignmentTree;
				class BinaryTree;
				class BindingPatternTree;
				class BlockTree;
				class BreakTree;
				class CaseTree;
				class CatchTree;
				class ClassTree;
				class CompilationUnitTree;
				class CompoundAssignmentTree;
				class ConditionalExpressionTree;
				class ContinueTree;
				class DefaultCaseLabelTree;
				class DoWhileLoopTree;
				class EmptyStatementTree;
				class EnhancedForLoopTree;
				class ErroneousTree;
				class ExportsTree;
				class ExpressionStatementTree;
				class ForLoopTree;
				class GuardedPatternTree;
				class IdentifierTree;
				class IfTree;
				class ImportTree;
				class InstanceOfTree;
				class IntersectionTypeTree;
				class LabeledStatementTree;
				class LambdaExpressionTree;
				class LiteralTree;
				class MemberReferenceTree;
				class MemberSelectTree;
				class MethodInvocationTree;
				class MethodTree;
				class ModifiersTree;
				class ModuleTree;
				class NewArrayTree;
				class NewClassTree;
				class OpensTree;
				class PackageTree;
				class ParameterizedTypeTree;
				class ParenthesizedPatternTree;
				class ParenthesizedTree;
				class PrimitiveTypeTree;
				class ProvidesTree;
				class RequiresTree;
				class ReturnTree;
				class SwitchExpressionTree;
				class SwitchTree;
				class SynchronizedTree;
				class ThrowTree;
				class Tree;
				class TryTree;
				class TypeCastTree;
				class TypeParameterTree;
				class UnaryTree;
				class UnionTypeTree;
				class UsesTree;
				class VariableTree;
				class WhileLoopTree;
				class WildcardTree;
				class YieldTree;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

class $export TreeVisitor : public ::java::lang::Object {
	$interface(TreeVisitor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* visitAnnotatedType(::com::sun::source::tree::AnnotatedTypeTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitAnnotation(::com::sun::source::tree::AnnotationTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitArrayAccess(::com::sun::source::tree::ArrayAccessTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitArrayType(::com::sun::source::tree::ArrayTypeTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitAssert(::com::sun::source::tree::AssertTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitAssignment(::com::sun::source::tree::AssignmentTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitBinary(::com::sun::source::tree::BinaryTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitBindingPattern(::com::sun::source::tree::BindingPatternTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitBlock(::com::sun::source::tree::BlockTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitBreak(::com::sun::source::tree::BreakTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitCase(::com::sun::source::tree::CaseTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitCatch(::com::sun::source::tree::CatchTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitClass(::com::sun::source::tree::ClassTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitCompilationUnit(::com::sun::source::tree::CompilationUnitTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitCompoundAssignment(::com::sun::source::tree::CompoundAssignmentTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitConditionalExpression(::com::sun::source::tree::ConditionalExpressionTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitContinue(::com::sun::source::tree::ContinueTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitDefaultCaseLabel(::com::sun::source::tree::DefaultCaseLabelTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitDoWhileLoop(::com::sun::source::tree::DoWhileLoopTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitEmptyStatement(::com::sun::source::tree::EmptyStatementTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitEnhancedForLoop(::com::sun::source::tree::EnhancedForLoopTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitErroneous(::com::sun::source::tree::ErroneousTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitExports(::com::sun::source::tree::ExportsTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitExpressionStatement(::com::sun::source::tree::ExpressionStatementTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitForLoop(::com::sun::source::tree::ForLoopTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitGuardedPattern(::com::sun::source::tree::GuardedPatternTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitIdentifier(::com::sun::source::tree::IdentifierTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitIf(::com::sun::source::tree::IfTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitImport(::com::sun::source::tree::ImportTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitInstanceOf(::com::sun::source::tree::InstanceOfTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitIntersectionType(::com::sun::source::tree::IntersectionTypeTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitLabeledStatement(::com::sun::source::tree::LabeledStatementTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitLambdaExpression(::com::sun::source::tree::LambdaExpressionTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitLiteral(::com::sun::source::tree::LiteralTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitMemberReference(::com::sun::source::tree::MemberReferenceTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitMemberSelect(::com::sun::source::tree::MemberSelectTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitMethod(::com::sun::source::tree::MethodTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitMethodInvocation(::com::sun::source::tree::MethodInvocationTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitModifiers(::com::sun::source::tree::ModifiersTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitModule(::com::sun::source::tree::ModuleTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitNewArray(::com::sun::source::tree::NewArrayTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitNewClass(::com::sun::source::tree::NewClassTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitOpens(::com::sun::source::tree::OpensTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitOther(::com::sun::source::tree::Tree* node, Object$* p) {return nullptr;}
	virtual $Object* visitPackage(::com::sun::source::tree::PackageTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitParameterizedType(::com::sun::source::tree::ParameterizedTypeTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitParenthesized(::com::sun::source::tree::ParenthesizedTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitParenthesizedPattern(::com::sun::source::tree::ParenthesizedPatternTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitPrimitiveType(::com::sun::source::tree::PrimitiveTypeTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitProvides(::com::sun::source::tree::ProvidesTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitRequires(::com::sun::source::tree::RequiresTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitReturn(::com::sun::source::tree::ReturnTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitSwitch(::com::sun::source::tree::SwitchTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitSwitchExpression(::com::sun::source::tree::SwitchExpressionTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitSynchronized(::com::sun::source::tree::SynchronizedTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitThrow(::com::sun::source::tree::ThrowTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitTry(::com::sun::source::tree::TryTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitTypeCast(::com::sun::source::tree::TypeCastTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitTypeParameter(::com::sun::source::tree::TypeParameterTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitUnary(::com::sun::source::tree::UnaryTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitUnionType(::com::sun::source::tree::UnionTypeTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitUses(::com::sun::source::tree::UsesTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitVariable(::com::sun::source::tree::VariableTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitWhileLoop(::com::sun::source::tree::WhileLoopTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitWildcard(::com::sun::source::tree::WildcardTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitYield(::com::sun::source::tree::YieldTree* node, Object$* p) {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_TreeVisitor_h_