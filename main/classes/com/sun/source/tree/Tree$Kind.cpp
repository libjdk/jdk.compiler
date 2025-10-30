#include <com/sun/source/tree/Tree$Kind.h>

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
#include <com/sun/source/tree/PrimitiveTypeTree.h>
#include <com/sun/source/tree/ProvidesTree.h>
#include <com/sun/source/tree/RequiresTree.h>
#include <com/sun/source/tree/ReturnTree.h>
#include <com/sun/source/tree/SwitchExpressionTree.h>
#include <com/sun/source/tree/SwitchTree.h>
#include <com/sun/source/tree/SynchronizedTree.h>
#include <com/sun/source/tree/ThrowTree.h>
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
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef AND
#undef AND_ASSIGNMENT
#undef ANNOTATED_TYPE
#undef ANNOTATION
#undef ANNOTATION_TYPE
#undef ARRAY_ACCESS
#undef ARRAY_TYPE
#undef ASSERT
#undef ASSIGNMENT
#undef BINDING_PATTERN
#undef BITWISE_COMPLEMENT
#undef BLOCK
#undef BOOLEAN_LITERAL
#undef BREAK
#undef CASE
#undef CATCH
#undef CHAR_LITERAL
#undef CLASS
#undef COMPILATION_UNIT
#undef CONDITIONAL_AND
#undef CONDITIONAL_EXPRESSION
#undef CONDITIONAL_OR
#undef CONTINUE
#undef DEFAULT_CASE_LABEL
#undef DIVIDE
#undef DIVIDE_ASSIGNMENT
#undef DOUBLE_LITERAL
#undef DO_WHILE_LOOP
#undef EMPTY_STATEMENT
#undef ENHANCED_FOR_LOOP
#undef ENUM
#undef EQUAL_TO
#undef ERRONEOUS
#undef EXPORTS
#undef EXPRESSION_STATEMENT
#undef EXTENDS_WILDCARD
#undef FLOAT_LITERAL
#undef FOR_LOOP
#undef GREATER_THAN
#undef GREATER_THAN_EQUAL
#undef GUARDED_PATTERN
#undef IDENTIFIER
#undef IF
#undef IMPORT
#undef INSTANCE_OF
#undef INTERFACE
#undef INTERSECTION_TYPE
#undef INT_LITERAL
#undef LABELED_STATEMENT
#undef LAMBDA_EXPRESSION
#undef LEFT_SHIFT
#undef LEFT_SHIFT_ASSIGNMENT
#undef LESS_THAN
#undef LESS_THAN_EQUAL
#undef LOGICAL_COMPLEMENT
#undef LONG_LITERAL
#undef MEMBER_REFERENCE
#undef MEMBER_SELECT
#undef METHOD
#undef METHOD_INVOCATION
#undef MINUS
#undef MINUS_ASSIGNMENT
#undef MODIFIERS
#undef MODULE
#undef MULTIPLY
#undef MULTIPLY_ASSIGNMENT
#undef NEW_ARRAY
#undef NEW_CLASS
#undef NOT_EQUAL_TO
#undef NULL_LITERAL
#undef OPENS
#undef OR
#undef OR_ASSIGNMENT
#undef OTHER
#undef PACKAGE
#undef PARAMETERIZED_TYPE
#undef PARENTHESIZED
#undef PARENTHESIZED_PATTERN
#undef PLUS
#undef PLUS_ASSIGNMENT
#undef POSTFIX_DECREMENT
#undef POSTFIX_INCREMENT
#undef PREFIX_DECREMENT
#undef PREFIX_INCREMENT
#undef PRIMITIVE_TYPE
#undef PROVIDES
#undef RECORD
#undef REMAINDER
#undef REMAINDER_ASSIGNMENT
#undef REQUIRES
#undef RETURN
#undef RIGHT_SHIFT
#undef RIGHT_SHIFT_ASSIGNMENT
#undef STRING_LITERAL
#undef SUPER_WILDCARD
#undef SWITCH
#undef SWITCH_EXPRESSION
#undef SYNCHRONIZED
#undef THROW
#undef TRY
#undef TYPE_ANNOTATION
#undef TYPE_CAST
#undef TYPE_PARAMETER
#undef UNARY_MINUS
#undef UNARY_PLUS
#undef UNBOUNDED_WILDCARD
#undef UNION_TYPE
#undef UNSIGNED_RIGHT_SHIFT
#undef UNSIGNED_RIGHT_SHIFT_ASSIGNMENT
#undef USES
#undef VARIABLE
#undef WHILE_LOOP
#undef XOR
#undef XOR_ASSIGNMENT
#undef YIELD

using $Tree$KindArray = $Array<::com::sun::source::tree::Tree$Kind>;
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
using $CaseTree = ::com::sun::source::tree::CaseTree;
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
using $PrimitiveTypeTree = ::com::sun::source::tree::PrimitiveTypeTree;
using $ProvidesTree = ::com::sun::source::tree::ProvidesTree;
using $RequiresTree = ::com::sun::source::tree::RequiresTree;
using $ReturnTree = ::com::sun::source::tree::ReturnTree;
using $SwitchExpressionTree = ::com::sun::source::tree::SwitchExpressionTree;
using $SwitchTree = ::com::sun::source::tree::SwitchTree;
using $SynchronizedTree = ::com::sun::source::tree::SynchronizedTree;
using $ThrowTree = ::com::sun::source::tree::ThrowTree;
using $Tree = ::com::sun::source::tree::Tree;
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
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$CompoundAttribute _Tree$Kind_FieldAnnotations_GUARDED_PATTERN[] = {
	{}
};

$CompoundAttribute _Tree$Kind_FieldAnnotations_PARENTHESIZED_PATTERN[] = {
	{}
};

$CompoundAttribute _Tree$Kind_FieldAnnotations_DEFAULT_CASE_LABEL[] = {
	{}
};

$FieldInfo _Tree$Kind_FieldInfo_[] = {
	{"ANNOTATED_TYPE", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, ANNOTATED_TYPE)},
	{"ANNOTATION", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, ANNOTATION)},
	{"TYPE_ANNOTATION", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, TYPE_ANNOTATION)},
	{"ARRAY_ACCESS", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, ARRAY_ACCESS)},
	{"ARRAY_TYPE", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, ARRAY_TYPE)},
	{"ASSERT", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, ASSERT)},
	{"ASSIGNMENT", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, ASSIGNMENT)},
	{"BLOCK", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, BLOCK)},
	{"BREAK", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, BREAK)},
	{"CASE", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, CASE)},
	{"CATCH", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, CATCH)},
	{"CLASS", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, CLASS)},
	{"COMPILATION_UNIT", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, COMPILATION_UNIT)},
	{"CONDITIONAL_EXPRESSION", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, CONDITIONAL_EXPRESSION)},
	{"CONTINUE", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, CONTINUE)},
	{"DO_WHILE_LOOP", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, DO_WHILE_LOOP)},
	{"ENHANCED_FOR_LOOP", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, ENHANCED_FOR_LOOP)},
	{"EXPRESSION_STATEMENT", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, EXPRESSION_STATEMENT)},
	{"MEMBER_SELECT", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, MEMBER_SELECT)},
	{"MEMBER_REFERENCE", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, MEMBER_REFERENCE)},
	{"FOR_LOOP", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, FOR_LOOP)},
	{"IDENTIFIER", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, IDENTIFIER)},
	{"IF", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, IF)},
	{"IMPORT", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, IMPORT)},
	{"INSTANCE_OF", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, INSTANCE_OF)},
	{"LABELED_STATEMENT", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, LABELED_STATEMENT)},
	{"METHOD", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, METHOD)},
	{"METHOD_INVOCATION", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, METHOD_INVOCATION)},
	{"MODIFIERS", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, MODIFIERS)},
	{"NEW_ARRAY", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, NEW_ARRAY)},
	{"NEW_CLASS", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, NEW_CLASS)},
	{"LAMBDA_EXPRESSION", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, LAMBDA_EXPRESSION)},
	{"PACKAGE", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, PACKAGE)},
	{"PARENTHESIZED", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, PARENTHESIZED)},
	{"BINDING_PATTERN", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, BINDING_PATTERN)},
	{"GUARDED_PATTERN", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, GUARDED_PATTERN), _Tree$Kind_FieldAnnotations_GUARDED_PATTERN},
	{"PARENTHESIZED_PATTERN", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, PARENTHESIZED_PATTERN), _Tree$Kind_FieldAnnotations_PARENTHESIZED_PATTERN},
	{"DEFAULT_CASE_LABEL", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, DEFAULT_CASE_LABEL), _Tree$Kind_FieldAnnotations_DEFAULT_CASE_LABEL},
	{"PRIMITIVE_TYPE", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, PRIMITIVE_TYPE)},
	{"RETURN", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, RETURN)},
	{"EMPTY_STATEMENT", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, EMPTY_STATEMENT)},
	{"SWITCH", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, SWITCH)},
	{"SWITCH_EXPRESSION", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, SWITCH_EXPRESSION)},
	{"SYNCHRONIZED", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, SYNCHRONIZED)},
	{"THROW", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, THROW)},
	{"TRY", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, TRY)},
	{"PARAMETERIZED_TYPE", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, PARAMETERIZED_TYPE)},
	{"UNION_TYPE", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, UNION_TYPE)},
	{"INTERSECTION_TYPE", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, INTERSECTION_TYPE)},
	{"TYPE_CAST", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, TYPE_CAST)},
	{"TYPE_PARAMETER", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, TYPE_PARAMETER)},
	{"VARIABLE", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, VARIABLE)},
	{"WHILE_LOOP", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, WHILE_LOOP)},
	{"POSTFIX_INCREMENT", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, POSTFIX_INCREMENT)},
	{"POSTFIX_DECREMENT", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, POSTFIX_DECREMENT)},
	{"PREFIX_INCREMENT", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, PREFIX_INCREMENT)},
	{"PREFIX_DECREMENT", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, PREFIX_DECREMENT)},
	{"UNARY_PLUS", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, UNARY_PLUS)},
	{"UNARY_MINUS", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, UNARY_MINUS)},
	{"BITWISE_COMPLEMENT", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, BITWISE_COMPLEMENT)},
	{"LOGICAL_COMPLEMENT", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, LOGICAL_COMPLEMENT)},
	{"MULTIPLY", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, MULTIPLY)},
	{"DIVIDE", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, DIVIDE)},
	{"REMAINDER", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, REMAINDER)},
	{"PLUS", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, PLUS)},
	{"MINUS", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, MINUS)},
	{"LEFT_SHIFT", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, LEFT_SHIFT)},
	{"RIGHT_SHIFT", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, RIGHT_SHIFT)},
	{"UNSIGNED_RIGHT_SHIFT", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, UNSIGNED_RIGHT_SHIFT)},
	{"LESS_THAN", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, LESS_THAN)},
	{"GREATER_THAN", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, GREATER_THAN)},
	{"LESS_THAN_EQUAL", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, LESS_THAN_EQUAL)},
	{"GREATER_THAN_EQUAL", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, GREATER_THAN_EQUAL)},
	{"EQUAL_TO", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, EQUAL_TO)},
	{"NOT_EQUAL_TO", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, NOT_EQUAL_TO)},
	{"AND", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, AND)},
	{"XOR", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, XOR)},
	{"OR", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, OR)},
	{"CONDITIONAL_AND", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, CONDITIONAL_AND)},
	{"CONDITIONAL_OR", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, CONDITIONAL_OR)},
	{"MULTIPLY_ASSIGNMENT", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, MULTIPLY_ASSIGNMENT)},
	{"DIVIDE_ASSIGNMENT", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, DIVIDE_ASSIGNMENT)},
	{"REMAINDER_ASSIGNMENT", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, REMAINDER_ASSIGNMENT)},
	{"PLUS_ASSIGNMENT", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, PLUS_ASSIGNMENT)},
	{"MINUS_ASSIGNMENT", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, MINUS_ASSIGNMENT)},
	{"LEFT_SHIFT_ASSIGNMENT", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, LEFT_SHIFT_ASSIGNMENT)},
	{"RIGHT_SHIFT_ASSIGNMENT", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, RIGHT_SHIFT_ASSIGNMENT)},
	{"UNSIGNED_RIGHT_SHIFT_ASSIGNMENT", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, UNSIGNED_RIGHT_SHIFT_ASSIGNMENT)},
	{"AND_ASSIGNMENT", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, AND_ASSIGNMENT)},
	{"XOR_ASSIGNMENT", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, XOR_ASSIGNMENT)},
	{"OR_ASSIGNMENT", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, OR_ASSIGNMENT)},
	{"INT_LITERAL", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, INT_LITERAL)},
	{"LONG_LITERAL", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, LONG_LITERAL)},
	{"FLOAT_LITERAL", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, FLOAT_LITERAL)},
	{"DOUBLE_LITERAL", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, DOUBLE_LITERAL)},
	{"BOOLEAN_LITERAL", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, BOOLEAN_LITERAL)},
	{"CHAR_LITERAL", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, CHAR_LITERAL)},
	{"STRING_LITERAL", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, STRING_LITERAL)},
	{"NULL_LITERAL", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, NULL_LITERAL)},
	{"UNBOUNDED_WILDCARD", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, UNBOUNDED_WILDCARD)},
	{"EXTENDS_WILDCARD", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, EXTENDS_WILDCARD)},
	{"SUPER_WILDCARD", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, SUPER_WILDCARD)},
	{"ERRONEOUS", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, ERRONEOUS)},
	{"INTERFACE", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, INTERFACE)},
	{"ENUM", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, ENUM)},
	{"ANNOTATION_TYPE", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, ANNOTATION_TYPE)},
	{"MODULE", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, MODULE)},
	{"EXPORTS", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, EXPORTS)},
	{"OPENS", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, OPENS)},
	{"PROVIDES", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, PROVIDES)},
	{"RECORD", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, RECORD)},
	{"REQUIRES", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, REQUIRES)},
	{"USES", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, USES)},
	{"OTHER", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, OTHER)},
	{"YIELD", "Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Tree$Kind, YIELD)},
	{"$VALUES", "[Lcom/sun/source/tree/Tree$Kind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Tree$Kind, $VALUES)},
	{"associatedInterface", "Ljava/lang/Class;", "Ljava/lang/Class<+Lcom/sun/source/tree/Tree;>;", $PRIVATE | $FINAL, $field(Tree$Kind, associatedInterface)},
	{}
};

$MethodInfo _Tree$Kind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/source/tree/Tree$Kind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Tree$KindArray*(*)()>(&Tree$Kind::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/Class;)V", "(Ljava/lang/Class<+Lcom/sun/source/tree/Tree;>;)V", $PRIVATE, $method(static_cast<void(Tree$Kind::*)($String*,int32_t,$Class*)>(&Tree$Kind::init$))},
	{"asInterface", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Lcom/sun/source/tree/Tree;>;", $PUBLIC, $method(static_cast<$Class*(Tree$Kind::*)()>(&Tree$Kind::asInterface))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Tree$Kind*(*)($String*)>(&Tree$Kind::valueOf))},
	{"values", "()[Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Tree$KindArray*(*)()>(&Tree$Kind::values))},
	{}
};

$InnerClassInfo _Tree$Kind_InnerClassesInfo_[] = {
	{"com.sun.source.tree.Tree$Kind", "com.sun.source.tree.Tree", "Kind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Tree$Kind_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.source.tree.Tree$Kind",
	"java.lang.Enum",
	nullptr,
	_Tree$Kind_FieldInfo_,
	_Tree$Kind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/source/tree/Tree$Kind;>;",
	nullptr,
	_Tree$Kind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.source.tree.Tree"
};

$Object* allocate$Tree$Kind($Class* clazz) {
	return $of($alloc(Tree$Kind));
}

Tree$Kind* Tree$Kind::ANNOTATED_TYPE = nullptr;
Tree$Kind* Tree$Kind::ANNOTATION = nullptr;
Tree$Kind* Tree$Kind::TYPE_ANNOTATION = nullptr;
Tree$Kind* Tree$Kind::ARRAY_ACCESS = nullptr;
Tree$Kind* Tree$Kind::ARRAY_TYPE = nullptr;
Tree$Kind* Tree$Kind::ASSERT = nullptr;
Tree$Kind* Tree$Kind::ASSIGNMENT = nullptr;
Tree$Kind* Tree$Kind::BLOCK = nullptr;
Tree$Kind* Tree$Kind::BREAK = nullptr;
Tree$Kind* Tree$Kind::CASE = nullptr;
Tree$Kind* Tree$Kind::CATCH = nullptr;
Tree$Kind* Tree$Kind::CLASS = nullptr;
Tree$Kind* Tree$Kind::COMPILATION_UNIT = nullptr;
Tree$Kind* Tree$Kind::CONDITIONAL_EXPRESSION = nullptr;
Tree$Kind* Tree$Kind::CONTINUE = nullptr;
Tree$Kind* Tree$Kind::DO_WHILE_LOOP = nullptr;
Tree$Kind* Tree$Kind::ENHANCED_FOR_LOOP = nullptr;
Tree$Kind* Tree$Kind::EXPRESSION_STATEMENT = nullptr;
Tree$Kind* Tree$Kind::MEMBER_SELECT = nullptr;
Tree$Kind* Tree$Kind::MEMBER_REFERENCE = nullptr;
Tree$Kind* Tree$Kind::FOR_LOOP = nullptr;
Tree$Kind* Tree$Kind::IDENTIFIER = nullptr;
Tree$Kind* Tree$Kind::IF = nullptr;
Tree$Kind* Tree$Kind::IMPORT = nullptr;
Tree$Kind* Tree$Kind::INSTANCE_OF = nullptr;
Tree$Kind* Tree$Kind::LABELED_STATEMENT = nullptr;
Tree$Kind* Tree$Kind::METHOD = nullptr;
Tree$Kind* Tree$Kind::METHOD_INVOCATION = nullptr;
Tree$Kind* Tree$Kind::MODIFIERS = nullptr;
Tree$Kind* Tree$Kind::NEW_ARRAY = nullptr;
Tree$Kind* Tree$Kind::NEW_CLASS = nullptr;
Tree$Kind* Tree$Kind::LAMBDA_EXPRESSION = nullptr;
Tree$Kind* Tree$Kind::PACKAGE = nullptr;
Tree$Kind* Tree$Kind::PARENTHESIZED = nullptr;
Tree$Kind* Tree$Kind::BINDING_PATTERN = nullptr;
Tree$Kind* Tree$Kind::GUARDED_PATTERN = nullptr;
Tree$Kind* Tree$Kind::PARENTHESIZED_PATTERN = nullptr;
Tree$Kind* Tree$Kind::DEFAULT_CASE_LABEL = nullptr;
Tree$Kind* Tree$Kind::PRIMITIVE_TYPE = nullptr;
Tree$Kind* Tree$Kind::RETURN = nullptr;
Tree$Kind* Tree$Kind::EMPTY_STATEMENT = nullptr;
Tree$Kind* Tree$Kind::SWITCH = nullptr;
Tree$Kind* Tree$Kind::SWITCH_EXPRESSION = nullptr;
Tree$Kind* Tree$Kind::SYNCHRONIZED = nullptr;
Tree$Kind* Tree$Kind::THROW = nullptr;
Tree$Kind* Tree$Kind::TRY = nullptr;
Tree$Kind* Tree$Kind::PARAMETERIZED_TYPE = nullptr;
Tree$Kind* Tree$Kind::UNION_TYPE = nullptr;
Tree$Kind* Tree$Kind::INTERSECTION_TYPE = nullptr;
Tree$Kind* Tree$Kind::TYPE_CAST = nullptr;
Tree$Kind* Tree$Kind::TYPE_PARAMETER = nullptr;
Tree$Kind* Tree$Kind::VARIABLE = nullptr;
Tree$Kind* Tree$Kind::WHILE_LOOP = nullptr;
Tree$Kind* Tree$Kind::POSTFIX_INCREMENT = nullptr;
Tree$Kind* Tree$Kind::POSTFIX_DECREMENT = nullptr;
Tree$Kind* Tree$Kind::PREFIX_INCREMENT = nullptr;
Tree$Kind* Tree$Kind::PREFIX_DECREMENT = nullptr;
Tree$Kind* Tree$Kind::UNARY_PLUS = nullptr;
Tree$Kind* Tree$Kind::UNARY_MINUS = nullptr;
Tree$Kind* Tree$Kind::BITWISE_COMPLEMENT = nullptr;
Tree$Kind* Tree$Kind::LOGICAL_COMPLEMENT = nullptr;
Tree$Kind* Tree$Kind::MULTIPLY = nullptr;
Tree$Kind* Tree$Kind::DIVIDE = nullptr;
Tree$Kind* Tree$Kind::REMAINDER = nullptr;
Tree$Kind* Tree$Kind::PLUS = nullptr;
Tree$Kind* Tree$Kind::MINUS = nullptr;
Tree$Kind* Tree$Kind::LEFT_SHIFT = nullptr;
Tree$Kind* Tree$Kind::RIGHT_SHIFT = nullptr;
Tree$Kind* Tree$Kind::UNSIGNED_RIGHT_SHIFT = nullptr;
Tree$Kind* Tree$Kind::LESS_THAN = nullptr;
Tree$Kind* Tree$Kind::GREATER_THAN = nullptr;
Tree$Kind* Tree$Kind::LESS_THAN_EQUAL = nullptr;
Tree$Kind* Tree$Kind::GREATER_THAN_EQUAL = nullptr;
Tree$Kind* Tree$Kind::EQUAL_TO = nullptr;
Tree$Kind* Tree$Kind::NOT_EQUAL_TO = nullptr;
Tree$Kind* Tree$Kind::AND = nullptr;
Tree$Kind* Tree$Kind::XOR = nullptr;
Tree$Kind* Tree$Kind::OR = nullptr;
Tree$Kind* Tree$Kind::CONDITIONAL_AND = nullptr;
Tree$Kind* Tree$Kind::CONDITIONAL_OR = nullptr;
Tree$Kind* Tree$Kind::MULTIPLY_ASSIGNMENT = nullptr;
Tree$Kind* Tree$Kind::DIVIDE_ASSIGNMENT = nullptr;
Tree$Kind* Tree$Kind::REMAINDER_ASSIGNMENT = nullptr;
Tree$Kind* Tree$Kind::PLUS_ASSIGNMENT = nullptr;
Tree$Kind* Tree$Kind::MINUS_ASSIGNMENT = nullptr;
Tree$Kind* Tree$Kind::LEFT_SHIFT_ASSIGNMENT = nullptr;
Tree$Kind* Tree$Kind::RIGHT_SHIFT_ASSIGNMENT = nullptr;
Tree$Kind* Tree$Kind::UNSIGNED_RIGHT_SHIFT_ASSIGNMENT = nullptr;
Tree$Kind* Tree$Kind::AND_ASSIGNMENT = nullptr;
Tree$Kind* Tree$Kind::XOR_ASSIGNMENT = nullptr;
Tree$Kind* Tree$Kind::OR_ASSIGNMENT = nullptr;
Tree$Kind* Tree$Kind::INT_LITERAL = nullptr;
Tree$Kind* Tree$Kind::LONG_LITERAL = nullptr;
Tree$Kind* Tree$Kind::FLOAT_LITERAL = nullptr;
Tree$Kind* Tree$Kind::DOUBLE_LITERAL = nullptr;
Tree$Kind* Tree$Kind::BOOLEAN_LITERAL = nullptr;
Tree$Kind* Tree$Kind::CHAR_LITERAL = nullptr;
Tree$Kind* Tree$Kind::STRING_LITERAL = nullptr;
Tree$Kind* Tree$Kind::NULL_LITERAL = nullptr;
Tree$Kind* Tree$Kind::UNBOUNDED_WILDCARD = nullptr;
Tree$Kind* Tree$Kind::EXTENDS_WILDCARD = nullptr;
Tree$Kind* Tree$Kind::SUPER_WILDCARD = nullptr;
Tree$Kind* Tree$Kind::ERRONEOUS = nullptr;
Tree$Kind* Tree$Kind::INTERFACE = nullptr;
Tree$Kind* Tree$Kind::ENUM = nullptr;
Tree$Kind* Tree$Kind::ANNOTATION_TYPE = nullptr;
Tree$Kind* Tree$Kind::MODULE = nullptr;
Tree$Kind* Tree$Kind::EXPORTS = nullptr;
Tree$Kind* Tree$Kind::OPENS = nullptr;
Tree$Kind* Tree$Kind::PROVIDES = nullptr;
Tree$Kind* Tree$Kind::RECORD = nullptr;
Tree$Kind* Tree$Kind::REQUIRES = nullptr;
Tree$Kind* Tree$Kind::USES = nullptr;
Tree$Kind* Tree$Kind::OTHER = nullptr;
Tree$Kind* Tree$Kind::YIELD = nullptr;
$Tree$KindArray* Tree$Kind::$VALUES = nullptr;

$Tree$KindArray* Tree$Kind::$values() {
	$init(Tree$Kind);
	return $new($Tree$KindArray, {
		Tree$Kind::ANNOTATED_TYPE,
		Tree$Kind::ANNOTATION,
		Tree$Kind::TYPE_ANNOTATION,
		Tree$Kind::ARRAY_ACCESS,
		Tree$Kind::ARRAY_TYPE,
		Tree$Kind::ASSERT,
		Tree$Kind::ASSIGNMENT,
		Tree$Kind::BLOCK,
		Tree$Kind::BREAK,
		Tree$Kind::CASE,
		Tree$Kind::CATCH,
		Tree$Kind::CLASS,
		Tree$Kind::COMPILATION_UNIT,
		Tree$Kind::CONDITIONAL_EXPRESSION,
		Tree$Kind::CONTINUE,
		Tree$Kind::DO_WHILE_LOOP,
		Tree$Kind::ENHANCED_FOR_LOOP,
		Tree$Kind::EXPRESSION_STATEMENT,
		Tree$Kind::MEMBER_SELECT,
		Tree$Kind::MEMBER_REFERENCE,
		Tree$Kind::FOR_LOOP,
		Tree$Kind::IDENTIFIER,
		Tree$Kind::IF,
		Tree$Kind::IMPORT,
		Tree$Kind::INSTANCE_OF,
		Tree$Kind::LABELED_STATEMENT,
		Tree$Kind::METHOD,
		Tree$Kind::METHOD_INVOCATION,
		Tree$Kind::MODIFIERS,
		Tree$Kind::NEW_ARRAY,
		Tree$Kind::NEW_CLASS,
		Tree$Kind::LAMBDA_EXPRESSION,
		Tree$Kind::PACKAGE,
		Tree$Kind::PARENTHESIZED,
		Tree$Kind::BINDING_PATTERN,
		Tree$Kind::GUARDED_PATTERN,
		Tree$Kind::PARENTHESIZED_PATTERN,
		Tree$Kind::DEFAULT_CASE_LABEL,
		Tree$Kind::PRIMITIVE_TYPE,
		Tree$Kind::RETURN,
		Tree$Kind::EMPTY_STATEMENT,
		Tree$Kind::SWITCH,
		Tree$Kind::SWITCH_EXPRESSION,
		Tree$Kind::SYNCHRONIZED,
		Tree$Kind::THROW,
		Tree$Kind::TRY,
		Tree$Kind::PARAMETERIZED_TYPE,
		Tree$Kind::UNION_TYPE,
		Tree$Kind::INTERSECTION_TYPE,
		Tree$Kind::TYPE_CAST,
		Tree$Kind::TYPE_PARAMETER,
		Tree$Kind::VARIABLE,
		Tree$Kind::WHILE_LOOP,
		Tree$Kind::POSTFIX_INCREMENT,
		Tree$Kind::POSTFIX_DECREMENT,
		Tree$Kind::PREFIX_INCREMENT,
		Tree$Kind::PREFIX_DECREMENT,
		Tree$Kind::UNARY_PLUS,
		Tree$Kind::UNARY_MINUS,
		Tree$Kind::BITWISE_COMPLEMENT,
		Tree$Kind::LOGICAL_COMPLEMENT,
		Tree$Kind::MULTIPLY,
		Tree$Kind::DIVIDE,
		Tree$Kind::REMAINDER,
		Tree$Kind::PLUS,
		Tree$Kind::MINUS,
		Tree$Kind::LEFT_SHIFT,
		Tree$Kind::RIGHT_SHIFT,
		Tree$Kind::UNSIGNED_RIGHT_SHIFT,
		Tree$Kind::LESS_THAN,
		Tree$Kind::GREATER_THAN,
		Tree$Kind::LESS_THAN_EQUAL,
		Tree$Kind::GREATER_THAN_EQUAL,
		Tree$Kind::EQUAL_TO,
		Tree$Kind::NOT_EQUAL_TO,
		Tree$Kind::AND,
		Tree$Kind::XOR,
		Tree$Kind::OR,
		Tree$Kind::CONDITIONAL_AND,
		Tree$Kind::CONDITIONAL_OR,
		Tree$Kind::MULTIPLY_ASSIGNMENT,
		Tree$Kind::DIVIDE_ASSIGNMENT,
		Tree$Kind::REMAINDER_ASSIGNMENT,
		Tree$Kind::PLUS_ASSIGNMENT,
		Tree$Kind::MINUS_ASSIGNMENT,
		Tree$Kind::LEFT_SHIFT_ASSIGNMENT,
		Tree$Kind::RIGHT_SHIFT_ASSIGNMENT,
		Tree$Kind::UNSIGNED_RIGHT_SHIFT_ASSIGNMENT,
		Tree$Kind::AND_ASSIGNMENT,
		Tree$Kind::XOR_ASSIGNMENT,
		Tree$Kind::OR_ASSIGNMENT,
		Tree$Kind::INT_LITERAL,
		Tree$Kind::LONG_LITERAL,
		Tree$Kind::FLOAT_LITERAL,
		Tree$Kind::DOUBLE_LITERAL,
		Tree$Kind::BOOLEAN_LITERAL,
		Tree$Kind::CHAR_LITERAL,
		Tree$Kind::STRING_LITERAL,
		Tree$Kind::NULL_LITERAL,
		Tree$Kind::UNBOUNDED_WILDCARD,
		Tree$Kind::EXTENDS_WILDCARD,
		Tree$Kind::SUPER_WILDCARD,
		Tree$Kind::ERRONEOUS,
		Tree$Kind::INTERFACE,
		Tree$Kind::ENUM,
		Tree$Kind::ANNOTATION_TYPE,
		Tree$Kind::MODULE,
		Tree$Kind::EXPORTS,
		Tree$Kind::OPENS,
		Tree$Kind::PROVIDES,
		Tree$Kind::RECORD,
		Tree$Kind::REQUIRES,
		Tree$Kind::USES,
		Tree$Kind::OTHER,
		Tree$Kind::YIELD
	});
}

$Tree$KindArray* Tree$Kind::values() {
	$init(Tree$Kind);
	return $cast($Tree$KindArray, Tree$Kind::$VALUES->clone());
}

Tree$Kind* Tree$Kind::valueOf($String* name) {
	$init(Tree$Kind);
	return $cast(Tree$Kind, $Enum::valueOf(Tree$Kind::class$, name));
}

void Tree$Kind::init$($String* $enum$name, int32_t $enum$ordinal, $Class* intf) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, associatedInterface, intf);
}

$Class* Tree$Kind::asInterface() {
	return this->associatedInterface;
}

void clinit$Tree$Kind($Class* class$) {
	$load($AnnotatedTypeTree);
	$assignStatic(Tree$Kind::ANNOTATED_TYPE, $new(Tree$Kind, "ANNOTATED_TYPE"_s, 0, $AnnotatedTypeTree::class$));
	$load($AnnotationTree);
	$assignStatic(Tree$Kind::ANNOTATION, $new(Tree$Kind, "ANNOTATION"_s, 1, $AnnotationTree::class$));
	$assignStatic(Tree$Kind::TYPE_ANNOTATION, $new(Tree$Kind, "TYPE_ANNOTATION"_s, 2, $AnnotationTree::class$));
	$load($ArrayAccessTree);
	$assignStatic(Tree$Kind::ARRAY_ACCESS, $new(Tree$Kind, "ARRAY_ACCESS"_s, 3, $ArrayAccessTree::class$));
	$load($ArrayTypeTree);
	$assignStatic(Tree$Kind::ARRAY_TYPE, $new(Tree$Kind, "ARRAY_TYPE"_s, 4, $ArrayTypeTree::class$));
	$load($AssertTree);
	$assignStatic(Tree$Kind::ASSERT, $new(Tree$Kind, "ASSERT"_s, 5, $AssertTree::class$));
	$load($AssignmentTree);
	$assignStatic(Tree$Kind::ASSIGNMENT, $new(Tree$Kind, "ASSIGNMENT"_s, 6, $AssignmentTree::class$));
	$load($BlockTree);
	$assignStatic(Tree$Kind::BLOCK, $new(Tree$Kind, "BLOCK"_s, 7, $BlockTree::class$));
	$load($BreakTree);
	$assignStatic(Tree$Kind::BREAK, $new(Tree$Kind, "BREAK"_s, 8, $BreakTree::class$));
	$load($CaseTree);
	$assignStatic(Tree$Kind::CASE, $new(Tree$Kind, "CASE"_s, 9, $CaseTree::class$));
	$load($CatchTree);
	$assignStatic(Tree$Kind::CATCH, $new(Tree$Kind, "CATCH"_s, 10, $CatchTree::class$));
	$load($ClassTree);
	$assignStatic(Tree$Kind::CLASS, $new(Tree$Kind, "CLASS"_s, 11, $ClassTree::class$));
	$load($CompilationUnitTree);
	$assignStatic(Tree$Kind::COMPILATION_UNIT, $new(Tree$Kind, "COMPILATION_UNIT"_s, 12, $CompilationUnitTree::class$));
	$load($ConditionalExpressionTree);
	$assignStatic(Tree$Kind::CONDITIONAL_EXPRESSION, $new(Tree$Kind, "CONDITIONAL_EXPRESSION"_s, 13, $ConditionalExpressionTree::class$));
	$load($ContinueTree);
	$assignStatic(Tree$Kind::CONTINUE, $new(Tree$Kind, "CONTINUE"_s, 14, $ContinueTree::class$));
	$load($DoWhileLoopTree);
	$assignStatic(Tree$Kind::DO_WHILE_LOOP, $new(Tree$Kind, "DO_WHILE_LOOP"_s, 15, $DoWhileLoopTree::class$));
	$load($EnhancedForLoopTree);
	$assignStatic(Tree$Kind::ENHANCED_FOR_LOOP, $new(Tree$Kind, "ENHANCED_FOR_LOOP"_s, 16, $EnhancedForLoopTree::class$));
	$load($ExpressionStatementTree);
	$assignStatic(Tree$Kind::EXPRESSION_STATEMENT, $new(Tree$Kind, "EXPRESSION_STATEMENT"_s, 17, $ExpressionStatementTree::class$));
	$load($MemberSelectTree);
	$assignStatic(Tree$Kind::MEMBER_SELECT, $new(Tree$Kind, "MEMBER_SELECT"_s, 18, $MemberSelectTree::class$));
	$load($MemberReferenceTree);
	$assignStatic(Tree$Kind::MEMBER_REFERENCE, $new(Tree$Kind, "MEMBER_REFERENCE"_s, 19, $MemberReferenceTree::class$));
	$load($ForLoopTree);
	$assignStatic(Tree$Kind::FOR_LOOP, $new(Tree$Kind, "FOR_LOOP"_s, 20, $ForLoopTree::class$));
	$load($IdentifierTree);
	$assignStatic(Tree$Kind::IDENTIFIER, $new(Tree$Kind, "IDENTIFIER"_s, 21, $IdentifierTree::class$));
	$load($IfTree);
	$assignStatic(Tree$Kind::IF, $new(Tree$Kind, "IF"_s, 22, $IfTree::class$));
	$load($ImportTree);
	$assignStatic(Tree$Kind::IMPORT, $new(Tree$Kind, "IMPORT"_s, 23, $ImportTree::class$));
	$load($InstanceOfTree);
	$assignStatic(Tree$Kind::INSTANCE_OF, $new(Tree$Kind, "INSTANCE_OF"_s, 24, $InstanceOfTree::class$));
	$load($LabeledStatementTree);
	$assignStatic(Tree$Kind::LABELED_STATEMENT, $new(Tree$Kind, "LABELED_STATEMENT"_s, 25, $LabeledStatementTree::class$));
	$load($MethodTree);
	$assignStatic(Tree$Kind::METHOD, $new(Tree$Kind, "METHOD"_s, 26, $MethodTree::class$));
	$load($MethodInvocationTree);
	$assignStatic(Tree$Kind::METHOD_INVOCATION, $new(Tree$Kind, "METHOD_INVOCATION"_s, 27, $MethodInvocationTree::class$));
	$load($ModifiersTree);
	$assignStatic(Tree$Kind::MODIFIERS, $new(Tree$Kind, "MODIFIERS"_s, 28, $ModifiersTree::class$));
	$load($NewArrayTree);
	$assignStatic(Tree$Kind::NEW_ARRAY, $new(Tree$Kind, "NEW_ARRAY"_s, 29, $NewArrayTree::class$));
	$load($NewClassTree);
	$assignStatic(Tree$Kind::NEW_CLASS, $new(Tree$Kind, "NEW_CLASS"_s, 30, $NewClassTree::class$));
	$load($LambdaExpressionTree);
	$assignStatic(Tree$Kind::LAMBDA_EXPRESSION, $new(Tree$Kind, "LAMBDA_EXPRESSION"_s, 31, $LambdaExpressionTree::class$));
	$load($PackageTree);
	$assignStatic(Tree$Kind::PACKAGE, $new(Tree$Kind, "PACKAGE"_s, 32, $PackageTree::class$));
	$load($ParenthesizedTree);
	$assignStatic(Tree$Kind::PARENTHESIZED, $new(Tree$Kind, "PARENTHESIZED"_s, 33, $ParenthesizedTree::class$));
	$load($BindingPatternTree);
	$assignStatic(Tree$Kind::BINDING_PATTERN, $new(Tree$Kind, "BINDING_PATTERN"_s, 34, $BindingPatternTree::class$));
	$load($GuardedPatternTree);
	$assignStatic(Tree$Kind::GUARDED_PATTERN, $new(Tree$Kind, "GUARDED_PATTERN"_s, 35, $GuardedPatternTree::class$));
	$load($ParenthesizedPatternTree);
	$assignStatic(Tree$Kind::PARENTHESIZED_PATTERN, $new(Tree$Kind, "PARENTHESIZED_PATTERN"_s, 36, $ParenthesizedPatternTree::class$));
	$load($DefaultCaseLabelTree);
	$assignStatic(Tree$Kind::DEFAULT_CASE_LABEL, $new(Tree$Kind, "DEFAULT_CASE_LABEL"_s, 37, $DefaultCaseLabelTree::class$));
	$load($PrimitiveTypeTree);
	$assignStatic(Tree$Kind::PRIMITIVE_TYPE, $new(Tree$Kind, "PRIMITIVE_TYPE"_s, 38, $PrimitiveTypeTree::class$));
	$load($ReturnTree);
	$assignStatic(Tree$Kind::RETURN, $new(Tree$Kind, "RETURN"_s, 39, $ReturnTree::class$));
	$load($EmptyStatementTree);
	$assignStatic(Tree$Kind::EMPTY_STATEMENT, $new(Tree$Kind, "EMPTY_STATEMENT"_s, 40, $EmptyStatementTree::class$));
	$load($SwitchTree);
	$assignStatic(Tree$Kind::SWITCH, $new(Tree$Kind, "SWITCH"_s, 41, $SwitchTree::class$));
	$load($SwitchExpressionTree);
	$assignStatic(Tree$Kind::SWITCH_EXPRESSION, $new(Tree$Kind, "SWITCH_EXPRESSION"_s, 42, $SwitchExpressionTree::class$));
	$load($SynchronizedTree);
	$assignStatic(Tree$Kind::SYNCHRONIZED, $new(Tree$Kind, "SYNCHRONIZED"_s, 43, $SynchronizedTree::class$));
	$load($ThrowTree);
	$assignStatic(Tree$Kind::THROW, $new(Tree$Kind, "THROW"_s, 44, $ThrowTree::class$));
	$load($TryTree);
	$assignStatic(Tree$Kind::TRY, $new(Tree$Kind, "TRY"_s, 45, $TryTree::class$));
	$load($ParameterizedTypeTree);
	$assignStatic(Tree$Kind::PARAMETERIZED_TYPE, $new(Tree$Kind, "PARAMETERIZED_TYPE"_s, 46, $ParameterizedTypeTree::class$));
	$load($UnionTypeTree);
	$assignStatic(Tree$Kind::UNION_TYPE, $new(Tree$Kind, "UNION_TYPE"_s, 47, $UnionTypeTree::class$));
	$load($IntersectionTypeTree);
	$assignStatic(Tree$Kind::INTERSECTION_TYPE, $new(Tree$Kind, "INTERSECTION_TYPE"_s, 48, $IntersectionTypeTree::class$));
	$load($TypeCastTree);
	$assignStatic(Tree$Kind::TYPE_CAST, $new(Tree$Kind, "TYPE_CAST"_s, 49, $TypeCastTree::class$));
	$load($TypeParameterTree);
	$assignStatic(Tree$Kind::TYPE_PARAMETER, $new(Tree$Kind, "TYPE_PARAMETER"_s, 50, $TypeParameterTree::class$));
	$load($VariableTree);
	$assignStatic(Tree$Kind::VARIABLE, $new(Tree$Kind, "VARIABLE"_s, 51, $VariableTree::class$));
	$load($WhileLoopTree);
	$assignStatic(Tree$Kind::WHILE_LOOP, $new(Tree$Kind, "WHILE_LOOP"_s, 52, $WhileLoopTree::class$));
	$load($UnaryTree);
	$assignStatic(Tree$Kind::POSTFIX_INCREMENT, $new(Tree$Kind, "POSTFIX_INCREMENT"_s, 53, $UnaryTree::class$));
	$assignStatic(Tree$Kind::POSTFIX_DECREMENT, $new(Tree$Kind, "POSTFIX_DECREMENT"_s, 54, $UnaryTree::class$));
	$assignStatic(Tree$Kind::PREFIX_INCREMENT, $new(Tree$Kind, "PREFIX_INCREMENT"_s, 55, $UnaryTree::class$));
	$assignStatic(Tree$Kind::PREFIX_DECREMENT, $new(Tree$Kind, "PREFIX_DECREMENT"_s, 56, $UnaryTree::class$));
	$assignStatic(Tree$Kind::UNARY_PLUS, $new(Tree$Kind, "UNARY_PLUS"_s, 57, $UnaryTree::class$));
	$assignStatic(Tree$Kind::UNARY_MINUS, $new(Tree$Kind, "UNARY_MINUS"_s, 58, $UnaryTree::class$));
	$assignStatic(Tree$Kind::BITWISE_COMPLEMENT, $new(Tree$Kind, "BITWISE_COMPLEMENT"_s, 59, $UnaryTree::class$));
	$assignStatic(Tree$Kind::LOGICAL_COMPLEMENT, $new(Tree$Kind, "LOGICAL_COMPLEMENT"_s, 60, $UnaryTree::class$));
	$load($BinaryTree);
	$assignStatic(Tree$Kind::MULTIPLY, $new(Tree$Kind, "MULTIPLY"_s, 61, $BinaryTree::class$));
	$assignStatic(Tree$Kind::DIVIDE, $new(Tree$Kind, "DIVIDE"_s, 62, $BinaryTree::class$));
	$assignStatic(Tree$Kind::REMAINDER, $new(Tree$Kind, "REMAINDER"_s, 63, $BinaryTree::class$));
	$assignStatic(Tree$Kind::PLUS, $new(Tree$Kind, "PLUS"_s, 64, $BinaryTree::class$));
	$assignStatic(Tree$Kind::MINUS, $new(Tree$Kind, "MINUS"_s, 65, $BinaryTree::class$));
	$assignStatic(Tree$Kind::LEFT_SHIFT, $new(Tree$Kind, "LEFT_SHIFT"_s, 66, $BinaryTree::class$));
	$assignStatic(Tree$Kind::RIGHT_SHIFT, $new(Tree$Kind, "RIGHT_SHIFT"_s, 67, $BinaryTree::class$));
	$assignStatic(Tree$Kind::UNSIGNED_RIGHT_SHIFT, $new(Tree$Kind, "UNSIGNED_RIGHT_SHIFT"_s, 68, $BinaryTree::class$));
	$assignStatic(Tree$Kind::LESS_THAN, $new(Tree$Kind, "LESS_THAN"_s, 69, $BinaryTree::class$));
	$assignStatic(Tree$Kind::GREATER_THAN, $new(Tree$Kind, "GREATER_THAN"_s, 70, $BinaryTree::class$));
	$assignStatic(Tree$Kind::LESS_THAN_EQUAL, $new(Tree$Kind, "LESS_THAN_EQUAL"_s, 71, $BinaryTree::class$));
	$assignStatic(Tree$Kind::GREATER_THAN_EQUAL, $new(Tree$Kind, "GREATER_THAN_EQUAL"_s, 72, $BinaryTree::class$));
	$assignStatic(Tree$Kind::EQUAL_TO, $new(Tree$Kind, "EQUAL_TO"_s, 73, $BinaryTree::class$));
	$assignStatic(Tree$Kind::NOT_EQUAL_TO, $new(Tree$Kind, "NOT_EQUAL_TO"_s, 74, $BinaryTree::class$));
	$assignStatic(Tree$Kind::AND, $new(Tree$Kind, "AND"_s, 75, $BinaryTree::class$));
	$assignStatic(Tree$Kind::XOR, $new(Tree$Kind, "XOR"_s, 76, $BinaryTree::class$));
	$assignStatic(Tree$Kind::OR, $new(Tree$Kind, "OR"_s, 77, $BinaryTree::class$));
	$assignStatic(Tree$Kind::CONDITIONAL_AND, $new(Tree$Kind, "CONDITIONAL_AND"_s, 78, $BinaryTree::class$));
	$assignStatic(Tree$Kind::CONDITIONAL_OR, $new(Tree$Kind, "CONDITIONAL_OR"_s, 79, $BinaryTree::class$));
	$load($CompoundAssignmentTree);
	$assignStatic(Tree$Kind::MULTIPLY_ASSIGNMENT, $new(Tree$Kind, "MULTIPLY_ASSIGNMENT"_s, 80, $CompoundAssignmentTree::class$));
	$assignStatic(Tree$Kind::DIVIDE_ASSIGNMENT, $new(Tree$Kind, "DIVIDE_ASSIGNMENT"_s, 81, $CompoundAssignmentTree::class$));
	$assignStatic(Tree$Kind::REMAINDER_ASSIGNMENT, $new(Tree$Kind, "REMAINDER_ASSIGNMENT"_s, 82, $CompoundAssignmentTree::class$));
	$assignStatic(Tree$Kind::PLUS_ASSIGNMENT, $new(Tree$Kind, "PLUS_ASSIGNMENT"_s, 83, $CompoundAssignmentTree::class$));
	$assignStatic(Tree$Kind::MINUS_ASSIGNMENT, $new(Tree$Kind, "MINUS_ASSIGNMENT"_s, 84, $CompoundAssignmentTree::class$));
	$assignStatic(Tree$Kind::LEFT_SHIFT_ASSIGNMENT, $new(Tree$Kind, "LEFT_SHIFT_ASSIGNMENT"_s, 85, $CompoundAssignmentTree::class$));
	$assignStatic(Tree$Kind::RIGHT_SHIFT_ASSIGNMENT, $new(Tree$Kind, "RIGHT_SHIFT_ASSIGNMENT"_s, 86, $CompoundAssignmentTree::class$));
	$assignStatic(Tree$Kind::UNSIGNED_RIGHT_SHIFT_ASSIGNMENT, $new(Tree$Kind, "UNSIGNED_RIGHT_SHIFT_ASSIGNMENT"_s, 87, $CompoundAssignmentTree::class$));
	$assignStatic(Tree$Kind::AND_ASSIGNMENT, $new(Tree$Kind, "AND_ASSIGNMENT"_s, 88, $CompoundAssignmentTree::class$));
	$assignStatic(Tree$Kind::XOR_ASSIGNMENT, $new(Tree$Kind, "XOR_ASSIGNMENT"_s, 89, $CompoundAssignmentTree::class$));
	$assignStatic(Tree$Kind::OR_ASSIGNMENT, $new(Tree$Kind, "OR_ASSIGNMENT"_s, 90, $CompoundAssignmentTree::class$));
	$load($LiteralTree);
	$assignStatic(Tree$Kind::INT_LITERAL, $new(Tree$Kind, "INT_LITERAL"_s, 91, $LiteralTree::class$));
	$assignStatic(Tree$Kind::LONG_LITERAL, $new(Tree$Kind, "LONG_LITERAL"_s, 92, $LiteralTree::class$));
	$assignStatic(Tree$Kind::FLOAT_LITERAL, $new(Tree$Kind, "FLOAT_LITERAL"_s, 93, $LiteralTree::class$));
	$assignStatic(Tree$Kind::DOUBLE_LITERAL, $new(Tree$Kind, "DOUBLE_LITERAL"_s, 94, $LiteralTree::class$));
	$assignStatic(Tree$Kind::BOOLEAN_LITERAL, $new(Tree$Kind, "BOOLEAN_LITERAL"_s, 95, $LiteralTree::class$));
	$assignStatic(Tree$Kind::CHAR_LITERAL, $new(Tree$Kind, "CHAR_LITERAL"_s, 96, $LiteralTree::class$));
	$assignStatic(Tree$Kind::STRING_LITERAL, $new(Tree$Kind, "STRING_LITERAL"_s, 97, $LiteralTree::class$));
	$assignStatic(Tree$Kind::NULL_LITERAL, $new(Tree$Kind, "NULL_LITERAL"_s, 98, $LiteralTree::class$));
	$load($WildcardTree);
	$assignStatic(Tree$Kind::UNBOUNDED_WILDCARD, $new(Tree$Kind, "UNBOUNDED_WILDCARD"_s, 99, $WildcardTree::class$));
	$assignStatic(Tree$Kind::EXTENDS_WILDCARD, $new(Tree$Kind, "EXTENDS_WILDCARD"_s, 100, $WildcardTree::class$));
	$assignStatic(Tree$Kind::SUPER_WILDCARD, $new(Tree$Kind, "SUPER_WILDCARD"_s, 101, $WildcardTree::class$));
	$load($ErroneousTree);
	$assignStatic(Tree$Kind::ERRONEOUS, $new(Tree$Kind, "ERRONEOUS"_s, 102, $ErroneousTree::class$));
	$assignStatic(Tree$Kind::INTERFACE, $new(Tree$Kind, "INTERFACE"_s, 103, $ClassTree::class$));
	$assignStatic(Tree$Kind::ENUM, $new(Tree$Kind, "ENUM"_s, 104, $ClassTree::class$));
	$assignStatic(Tree$Kind::ANNOTATION_TYPE, $new(Tree$Kind, "ANNOTATION_TYPE"_s, 105, $ClassTree::class$));
	$load($ModuleTree);
	$assignStatic(Tree$Kind::MODULE, $new(Tree$Kind, "MODULE"_s, 106, $ModuleTree::class$));
	$load($ExportsTree);
	$assignStatic(Tree$Kind::EXPORTS, $new(Tree$Kind, "EXPORTS"_s, 107, $ExportsTree::class$));
	$load($OpensTree);
	$assignStatic(Tree$Kind::OPENS, $new(Tree$Kind, "OPENS"_s, 108, $OpensTree::class$));
	$load($ProvidesTree);
	$assignStatic(Tree$Kind::PROVIDES, $new(Tree$Kind, "PROVIDES"_s, 109, $ProvidesTree::class$));
	$assignStatic(Tree$Kind::RECORD, $new(Tree$Kind, "RECORD"_s, 110, $ClassTree::class$));
	$load($RequiresTree);
	$assignStatic(Tree$Kind::REQUIRES, $new(Tree$Kind, "REQUIRES"_s, 111, $RequiresTree::class$));
	$load($UsesTree);
	$assignStatic(Tree$Kind::USES, $new(Tree$Kind, "USES"_s, 112, $UsesTree::class$));
	$assignStatic(Tree$Kind::OTHER, $new(Tree$Kind, "OTHER"_s, 113, nullptr));
	$load($YieldTree);
	$assignStatic(Tree$Kind::YIELD, $new(Tree$Kind, "YIELD"_s, 114, $YieldTree::class$));
	$assignStatic(Tree$Kind::$VALUES, Tree$Kind::$values());
}

Tree$Kind::Tree$Kind() {
}

$Class* Tree$Kind::load$($String* name, bool initialize) {
	$loadClass(Tree$Kind, name, initialize, &_Tree$Kind_ClassInfo_, clinit$Tree$Kind, allocate$Tree$Kind);
	return class$;
}

$Class* Tree$Kind::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com