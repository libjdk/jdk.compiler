#ifndef _com_sun_source_util_SimpleTreeVisitor_h_
#define _com_sun_source_util_SimpleTreeVisitor_h_
//$ class com.sun.source.util.SimpleTreeVisitor
//$ extends com.sun.source.tree.TreeVisitor

#include <com/sun/source/tree/TreeVisitor.h>

#pragma push_macro("DEFAULT_VALUE")
#undef DEFAULT_VALUE

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
namespace java {
	namespace lang {
		class Iterable;
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace util {

class $export SimpleTreeVisitor : public ::com::sun::source::tree::TreeVisitor {
	$class(SimpleTreeVisitor, $NO_CLASS_INIT, ::com::sun::source::tree::TreeVisitor)
public:
	SimpleTreeVisitor();
	void init$();
	void init$(Object$* defaultValue);
	virtual $Object* defaultAction(::com::sun::source::tree::Tree* node, Object$* p);
	$Object* visit(::com::sun::source::tree::Tree* node, Object$* p);
	$Object* visit(::java::lang::Iterable* nodes, Object$* p);
	virtual $Object* visitAnnotatedType(::com::sun::source::tree::AnnotatedTypeTree* node, Object$* p) override;
	virtual $Object* visitAnnotation(::com::sun::source::tree::AnnotationTree* node, Object$* p) override;
	virtual $Object* visitArrayAccess(::com::sun::source::tree::ArrayAccessTree* node, Object$* p) override;
	virtual $Object* visitArrayType(::com::sun::source::tree::ArrayTypeTree* node, Object$* p) override;
	virtual $Object* visitAssert(::com::sun::source::tree::AssertTree* node, Object$* p) override;
	virtual $Object* visitAssignment(::com::sun::source::tree::AssignmentTree* node, Object$* p) override;
	virtual $Object* visitBinary(::com::sun::source::tree::BinaryTree* node, Object$* p) override;
	virtual $Object* visitBindingPattern(::com::sun::source::tree::BindingPatternTree* node, Object$* p) override;
	virtual $Object* visitBlock(::com::sun::source::tree::BlockTree* node, Object$* p) override;
	virtual $Object* visitBreak(::com::sun::source::tree::BreakTree* node, Object$* p) override;
	virtual $Object* visitCase(::com::sun::source::tree::CaseTree* node, Object$* p) override;
	virtual $Object* visitCatch(::com::sun::source::tree::CatchTree* node, Object$* p) override;
	virtual $Object* visitClass(::com::sun::source::tree::ClassTree* node, Object$* p) override;
	virtual $Object* visitCompilationUnit(::com::sun::source::tree::CompilationUnitTree* node, Object$* p) override;
	virtual $Object* visitCompoundAssignment(::com::sun::source::tree::CompoundAssignmentTree* node, Object$* p) override;
	virtual $Object* visitConditionalExpression(::com::sun::source::tree::ConditionalExpressionTree* node, Object$* p) override;
	virtual $Object* visitContinue(::com::sun::source::tree::ContinueTree* node, Object$* p) override;
	virtual $Object* visitDefaultCaseLabel(::com::sun::source::tree::DefaultCaseLabelTree* node, Object$* p) override;
	virtual $Object* visitDoWhileLoop(::com::sun::source::tree::DoWhileLoopTree* node, Object$* p) override;
	virtual $Object* visitEmptyStatement(::com::sun::source::tree::EmptyStatementTree* node, Object$* p) override;
	virtual $Object* visitEnhancedForLoop(::com::sun::source::tree::EnhancedForLoopTree* node, Object$* p) override;
	virtual $Object* visitErroneous(::com::sun::source::tree::ErroneousTree* node, Object$* p) override;
	virtual $Object* visitExports(::com::sun::source::tree::ExportsTree* node, Object$* p) override;
	virtual $Object* visitExpressionStatement(::com::sun::source::tree::ExpressionStatementTree* node, Object$* p) override;
	virtual $Object* visitForLoop(::com::sun::source::tree::ForLoopTree* node, Object$* p) override;
	virtual $Object* visitGuardedPattern(::com::sun::source::tree::GuardedPatternTree* node, Object$* p) override;
	virtual $Object* visitIdentifier(::com::sun::source::tree::IdentifierTree* node, Object$* p) override;
	virtual $Object* visitIf(::com::sun::source::tree::IfTree* node, Object$* p) override;
	virtual $Object* visitImport(::com::sun::source::tree::ImportTree* node, Object$* p) override;
	virtual $Object* visitInstanceOf(::com::sun::source::tree::InstanceOfTree* node, Object$* p) override;
	virtual $Object* visitIntersectionType(::com::sun::source::tree::IntersectionTypeTree* node, Object$* p) override;
	virtual $Object* visitLabeledStatement(::com::sun::source::tree::LabeledStatementTree* node, Object$* p) override;
	virtual $Object* visitLambdaExpression(::com::sun::source::tree::LambdaExpressionTree* node, Object$* p) override;
	virtual $Object* visitLiteral(::com::sun::source::tree::LiteralTree* node, Object$* p) override;
	virtual $Object* visitMemberReference(::com::sun::source::tree::MemberReferenceTree* node, Object$* p) override;
	virtual $Object* visitMemberSelect(::com::sun::source::tree::MemberSelectTree* node, Object$* p) override;
	virtual $Object* visitMethod(::com::sun::source::tree::MethodTree* node, Object$* p) override;
	virtual $Object* visitMethodInvocation(::com::sun::source::tree::MethodInvocationTree* node, Object$* p) override;
	virtual $Object* visitModifiers(::com::sun::source::tree::ModifiersTree* node, Object$* p) override;
	virtual $Object* visitModule(::com::sun::source::tree::ModuleTree* node, Object$* p) override;
	virtual $Object* visitNewArray(::com::sun::source::tree::NewArrayTree* node, Object$* p) override;
	virtual $Object* visitNewClass(::com::sun::source::tree::NewClassTree* node, Object$* p) override;
	virtual $Object* visitOpens(::com::sun::source::tree::OpensTree* node, Object$* p) override;
	virtual $Object* visitOther(::com::sun::source::tree::Tree* node, Object$* p) override;
	virtual $Object* visitPackage(::com::sun::source::tree::PackageTree* node, Object$* p) override;
	virtual $Object* visitParameterizedType(::com::sun::source::tree::ParameterizedTypeTree* node, Object$* p) override;
	virtual $Object* visitParenthesized(::com::sun::source::tree::ParenthesizedTree* node, Object$* p) override;
	virtual $Object* visitParenthesizedPattern(::com::sun::source::tree::ParenthesizedPatternTree* node, Object$* p) override;
	virtual $Object* visitPrimitiveType(::com::sun::source::tree::PrimitiveTypeTree* node, Object$* p) override;
	virtual $Object* visitProvides(::com::sun::source::tree::ProvidesTree* node, Object$* p) override;
	virtual $Object* visitRequires(::com::sun::source::tree::RequiresTree* node, Object$* p) override;
	virtual $Object* visitReturn(::com::sun::source::tree::ReturnTree* node, Object$* p) override;
	virtual $Object* visitSwitch(::com::sun::source::tree::SwitchTree* node, Object$* p) override;
	virtual $Object* visitSwitchExpression(::com::sun::source::tree::SwitchExpressionTree* node, Object$* p) override;
	virtual $Object* visitSynchronized(::com::sun::source::tree::SynchronizedTree* node, Object$* p) override;
	virtual $Object* visitThrow(::com::sun::source::tree::ThrowTree* node, Object$* p) override;
	virtual $Object* visitTry(::com::sun::source::tree::TryTree* node, Object$* p) override;
	virtual $Object* visitTypeCast(::com::sun::source::tree::TypeCastTree* node, Object$* p) override;
	virtual $Object* visitTypeParameter(::com::sun::source::tree::TypeParameterTree* node, Object$* p) override;
	virtual $Object* visitUnary(::com::sun::source::tree::UnaryTree* node, Object$* p) override;
	virtual $Object* visitUnionType(::com::sun::source::tree::UnionTypeTree* node, Object$* p) override;
	virtual $Object* visitUses(::com::sun::source::tree::UsesTree* node, Object$* p) override;
	virtual $Object* visitVariable(::com::sun::source::tree::VariableTree* node, Object$* p) override;
	virtual $Object* visitWhileLoop(::com::sun::source::tree::WhileLoopTree* node, Object$* p) override;
	virtual $Object* visitWildcard(::com::sun::source::tree::WildcardTree* node, Object$* p) override;
	virtual $Object* visitYield(::com::sun::source::tree::YieldTree* node, Object$* p) override;
	$Object* DEFAULT_VALUE = nullptr;
};

			} // util
		} // source
	} // sun
} // com

#pragma pop_macro("DEFAULT_VALUE")

#endif // _com_sun_source_util_SimpleTreeVisitor_h_