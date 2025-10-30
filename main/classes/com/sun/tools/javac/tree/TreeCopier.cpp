#include <com/sun/tools/javac/tree/TreeCopier.h>

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
#include <com/sun/source/tree/MemberReferenceTree$ReferenceMode.h>
#include <com/sun/source/tree/MemberReferenceTree.h>
#include <com/sun/source/tree/MemberSelectTree.h>
#include <com/sun/source/tree/MethodInvocationTree.h>
#include <com/sun/source/tree/MethodTree.h>
#include <com/sun/source/tree/ModifiersTree.h>
#include <com/sun/source/tree/ModuleTree$ModuleKind.h>
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
#include <com/sun/source/tree/Tree$Kind.h>
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
#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/BoundKind.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/tree/JCTree$JCAnnotatedType.h>
#include <com/sun/tools/javac/tree/JCTree$JCAnnotation.h>
#include <com/sun/tools/javac/tree/JCTree$JCArrayAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCArrayTypeTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssert.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssign.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssignOp.h>
#include <com/sun/tools/javac/tree/JCTree$JCBinary.h>
#include <com/sun/tools/javac/tree/JCTree$JCBindingPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCBreak.h>
#include <com/sun/tools/javac/tree/JCTree$JCCase.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCCatch.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree$JCConditional.h>
#include <com/sun/tools/javac/tree/JCTree$JCContinue.h>
#include <com/sun/tools/javac/tree/JCTree$JCDefaultCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCDoWhileLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCEnhancedForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCErroneous.h>
#include <com/sun/tools/javac/tree/JCTree$JCExports.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpressionStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCGuardPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCIf.h>
#include <com/sun/tools/javac/tree/JCTree$JCImport.h>
#include <com/sun/tools/javac/tree/JCTree$JCInstanceOf.h>
#include <com/sun/tools/javac/tree/JCTree$JCLabeledStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCLiteral.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodInvocation.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCModuleDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewArray.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCOpens.h>
#include <com/sun/tools/javac/tree/JCTree$JCPackageDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCParens.h>
#include <com/sun/tools/javac/tree/JCTree$JCParenthesizedPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCPrimitiveTypeTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCProvides.h>
#include <com/sun/tools/javac/tree/JCTree$JCRequires.h>
#include <com/sun/tools/javac/tree/JCTree$JCReturn.h>
#include <com/sun/tools/javac/tree/JCTree$JCSkip.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCSwitch.h>
#include <com/sun/tools/javac/tree/JCTree$JCSwitchExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCSynchronized.h>
#include <com/sun/tools/javac/tree/JCTree$JCThrow.h>
#include <com/sun/tools/javac/tree/JCTree$JCTry.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeApply.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeCast.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeIntersection.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeParameter.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeUnion.h>
#include <com/sun/tools/javac/tree/JCTree$JCUnary.h>
#include <com/sun/tools/javac/tree/JCTree$JCUses.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCWhileLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCWildcard.h>
#include <com/sun/tools/javac/tree/JCTree$JCYield.h>
#include <com/sun/tools/javac/tree/JCTree$LetExpr.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$TypeBoundKind.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeCopier$1.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/lang/AssertionError.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef M
#undef RULE
#undef TYPE_ANNOTATION
#undef YIELD

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
using $MemberReferenceTree$ReferenceMode = ::com::sun::source::tree::MemberReferenceTree$ReferenceMode;
using $MemberSelectTree = ::com::sun::source::tree::MemberSelectTree;
using $MethodInvocationTree = ::com::sun::source::tree::MethodInvocationTree;
using $MethodTree = ::com::sun::source::tree::MethodTree;
using $ModifiersTree = ::com::sun::source::tree::ModifiersTree;
using $ModuleTree = ::com::sun::source::tree::ModuleTree;
using $ModuleTree$ModuleKind = ::com::sun::source::tree::ModuleTree$ModuleKind;
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
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
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
using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $BoundKind = ::com::sun::tools::javac::code::BoundKind;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCAnnotatedType = ::com::sun::tools::javac::tree::JCTree$JCAnnotatedType;
using $JCTree$JCAnnotation = ::com::sun::tools::javac::tree::JCTree$JCAnnotation;
using $JCTree$JCArrayAccess = ::com::sun::tools::javac::tree::JCTree$JCArrayAccess;
using $JCTree$JCArrayTypeTree = ::com::sun::tools::javac::tree::JCTree$JCArrayTypeTree;
using $JCTree$JCAssert = ::com::sun::tools::javac::tree::JCTree$JCAssert;
using $JCTree$JCAssign = ::com::sun::tools::javac::tree::JCTree$JCAssign;
using $JCTree$JCAssignOp = ::com::sun::tools::javac::tree::JCTree$JCAssignOp;
using $JCTree$JCBinary = ::com::sun::tools::javac::tree::JCTree$JCBinary;
using $JCTree$JCBindingPattern = ::com::sun::tools::javac::tree::JCTree$JCBindingPattern;
using $JCTree$JCBlock = ::com::sun::tools::javac::tree::JCTree$JCBlock;
using $JCTree$JCBreak = ::com::sun::tools::javac::tree::JCTree$JCBreak;
using $JCTree$JCCase = ::com::sun::tools::javac::tree::JCTree$JCCase;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCCatch = ::com::sun::tools::javac::tree::JCTree$JCCatch;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $JCTree$JCConditional = ::com::sun::tools::javac::tree::JCTree$JCConditional;
using $JCTree$JCContinue = ::com::sun::tools::javac::tree::JCTree$JCContinue;
using $JCTree$JCDefaultCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCDefaultCaseLabel;
using $JCTree$JCDoWhileLoop = ::com::sun::tools::javac::tree::JCTree$JCDoWhileLoop;
using $JCTree$JCEnhancedForLoop = ::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop;
using $JCTree$JCErroneous = ::com::sun::tools::javac::tree::JCTree$JCErroneous;
using $JCTree$JCExports = ::com::sun::tools::javac::tree::JCTree$JCExports;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCExpressionStatement = ::com::sun::tools::javac::tree::JCTree$JCExpressionStatement;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCForLoop = ::com::sun::tools::javac::tree::JCTree$JCForLoop;
using $JCTree$JCGuardPattern = ::com::sun::tools::javac::tree::JCTree$JCGuardPattern;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCIf = ::com::sun::tools::javac::tree::JCTree$JCIf;
using $JCTree$JCImport = ::com::sun::tools::javac::tree::JCTree$JCImport;
using $JCTree$JCInstanceOf = ::com::sun::tools::javac::tree::JCTree$JCInstanceOf;
using $JCTree$JCLabeledStatement = ::com::sun::tools::javac::tree::JCTree$JCLabeledStatement;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCLiteral = ::com::sun::tools::javac::tree::JCTree$JCLiteral;
using $JCTree$JCMemberReference = ::com::sun::tools::javac::tree::JCTree$JCMemberReference;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCMethodInvocation = ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCModuleDecl = ::com::sun::tools::javac::tree::JCTree$JCModuleDecl;
using $JCTree$JCNewArray = ::com::sun::tools::javac::tree::JCTree$JCNewArray;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCOpens = ::com::sun::tools::javac::tree::JCTree$JCOpens;
using $JCTree$JCOperatorExpression = ::com::sun::tools::javac::tree::JCTree$JCOperatorExpression;
using $JCTree$JCPackageDecl = ::com::sun::tools::javac::tree::JCTree$JCPackageDecl;
using $JCTree$JCParens = ::com::sun::tools::javac::tree::JCTree$JCParens;
using $JCTree$JCParenthesizedPattern = ::com::sun::tools::javac::tree::JCTree$JCParenthesizedPattern;
using $JCTree$JCPattern = ::com::sun::tools::javac::tree::JCTree$JCPattern;
using $JCTree$JCPrimitiveTypeTree = ::com::sun::tools::javac::tree::JCTree$JCPrimitiveTypeTree;
using $JCTree$JCProvides = ::com::sun::tools::javac::tree::JCTree$JCProvides;
using $JCTree$JCRequires = ::com::sun::tools::javac::tree::JCTree$JCRequires;
using $JCTree$JCReturn = ::com::sun::tools::javac::tree::JCTree$JCReturn;
using $JCTree$JCSkip = ::com::sun::tools::javac::tree::JCTree$JCSkip;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$JCSwitch = ::com::sun::tools::javac::tree::JCTree$JCSwitch;
using $JCTree$JCSwitchExpression = ::com::sun::tools::javac::tree::JCTree$JCSwitchExpression;
using $JCTree$JCSynchronized = ::com::sun::tools::javac::tree::JCTree$JCSynchronized;
using $JCTree$JCThrow = ::com::sun::tools::javac::tree::JCTree$JCThrow;
using $JCTree$JCTry = ::com::sun::tools::javac::tree::JCTree$JCTry;
using $JCTree$JCTypeApply = ::com::sun::tools::javac::tree::JCTree$JCTypeApply;
using $JCTree$JCTypeCast = ::com::sun::tools::javac::tree::JCTree$JCTypeCast;
using $JCTree$JCTypeIntersection = ::com::sun::tools::javac::tree::JCTree$JCTypeIntersection;
using $JCTree$JCTypeParameter = ::com::sun::tools::javac::tree::JCTree$JCTypeParameter;
using $JCTree$JCTypeUnion = ::com::sun::tools::javac::tree::JCTree$JCTypeUnion;
using $JCTree$JCUnary = ::com::sun::tools::javac::tree::JCTree$JCUnary;
using $JCTree$JCUses = ::com::sun::tools::javac::tree::JCTree$JCUses;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$JCWhileLoop = ::com::sun::tools::javac::tree::JCTree$JCWhileLoop;
using $JCTree$JCWildcard = ::com::sun::tools::javac::tree::JCTree$JCWildcard;
using $JCTree$JCYield = ::com::sun::tools::javac::tree::JCTree$JCYield;
using $JCTree$LetExpr = ::com::sun::tools::javac::tree::JCTree$LetExpr;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$TypeBoundKind = ::com::sun::tools::javac::tree::JCTree$TypeBoundKind;
using $TreeCopier$1 = ::com::sun::tools::javac::tree::TreeCopier$1;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _TreeCopier_FieldInfo_[] = {
	{"M", "Lcom/sun/tools/javac/tree/TreeMaker;", nullptr, $PRIVATE, $field(TreeCopier, M)},
	{}
};

$MethodInfo _TreeCopier_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/tree/TreeMaker;)V", nullptr, $PUBLIC, $method(static_cast<void(TreeCopier::*)($TreeMaker*)>(&TreeCopier::init$))},
	{"copy", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree;", "<T:Lcom/sun/tools/javac/tree/JCTree;>(TT;)TT;", $PUBLIC},
	{"copy", "(Lcom/sun/tools/javac/tree/JCTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "<T:Lcom/sun/tools/javac/tree/JCTree;>(TT;TP;)TT;", $PUBLIC},
	{"copy", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "<T:Lcom/sun/tools/javac/tree/JCTree;>(Lcom/sun/tools/javac/util/List<TT;>;)Lcom/sun/tools/javac/util/List<TT;>;", $PUBLIC},
	{"copy", "(Lcom/sun/tools/javac/util/List;Ljava/lang/Object;)Lcom/sun/tools/javac/util/List;", "<T:Lcom/sun/tools/javac/tree/JCTree;>(Lcom/sun/tools/javac/util/List<TT;>;TP;)Lcom/sun/tools/javac/util/List<TT;>;", $PUBLIC},
	{"visitAnnotatedType", "(Lcom/sun/source/tree/AnnotatedTypeTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/AnnotatedTypeTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitAnnotation", "(Lcom/sun/source/tree/AnnotationTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/AnnotationTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitArrayAccess", "(Lcom/sun/source/tree/ArrayAccessTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/ArrayAccessTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitArrayType", "(Lcom/sun/source/tree/ArrayTypeTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/ArrayTypeTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitAssert", "(Lcom/sun/source/tree/AssertTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/AssertTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitAssignment", "(Lcom/sun/source/tree/AssignmentTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/AssignmentTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitBinary", "(Lcom/sun/source/tree/BinaryTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/BinaryTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitBindingPattern", "(Lcom/sun/source/tree/BindingPatternTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/BindingPatternTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitBlock", "(Lcom/sun/source/tree/BlockTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/BlockTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitBreak", "(Lcom/sun/source/tree/BreakTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/BreakTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitCase", "(Lcom/sun/source/tree/CaseTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/CaseTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitCatch", "(Lcom/sun/source/tree/CatchTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/CatchTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitClass", "(Lcom/sun/source/tree/ClassTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/ClassTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitCompilationUnit", "(Lcom/sun/source/tree/CompilationUnitTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/CompilationUnitTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitCompoundAssignment", "(Lcom/sun/source/tree/CompoundAssignmentTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/CompoundAssignmentTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitConditionalExpression", "(Lcom/sun/source/tree/ConditionalExpressionTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/ConditionalExpressionTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitContinue", "(Lcom/sun/source/tree/ContinueTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/ContinueTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitDefaultCaseLabel", "(Lcom/sun/source/tree/DefaultCaseLabelTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/DefaultCaseLabelTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitDoWhileLoop", "(Lcom/sun/source/tree/DoWhileLoopTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/DoWhileLoopTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitEmptyStatement", "(Lcom/sun/source/tree/EmptyStatementTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/EmptyStatementTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitEnhancedForLoop", "(Lcom/sun/source/tree/EnhancedForLoopTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/EnhancedForLoopTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitErroneous", "(Lcom/sun/source/tree/ErroneousTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/ErroneousTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitExports", "(Lcom/sun/source/tree/ExportsTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree$JCExports;", "(Lcom/sun/source/tree/ExportsTree;TP;)Lcom/sun/tools/javac/tree/JCTree$JCExports;", $PUBLIC},
	{"visitExpressionStatement", "(Lcom/sun/source/tree/ExpressionStatementTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/ExpressionStatementTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitForLoop", "(Lcom/sun/source/tree/ForLoopTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/ForLoopTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitGuardedPattern", "(Lcom/sun/source/tree/GuardedPatternTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/GuardedPatternTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitIdentifier", "(Lcom/sun/source/tree/IdentifierTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/IdentifierTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitIf", "(Lcom/sun/source/tree/IfTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/IfTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitImport", "(Lcom/sun/source/tree/ImportTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/ImportTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitInstanceOf", "(Lcom/sun/source/tree/InstanceOfTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/InstanceOfTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitIntersectionType", "(Lcom/sun/source/tree/IntersectionTypeTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/IntersectionTypeTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitLabeledStatement", "(Lcom/sun/source/tree/LabeledStatementTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/LabeledStatementTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitLambdaExpression", "(Lcom/sun/source/tree/LambdaExpressionTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/LambdaExpressionTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitLiteral", "(Lcom/sun/source/tree/LiteralTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/LiteralTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitMemberReference", "(Lcom/sun/source/tree/MemberReferenceTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/MemberReferenceTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitMemberSelect", "(Lcom/sun/source/tree/MemberSelectTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/MemberSelectTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitMethod", "(Lcom/sun/source/tree/MethodTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/MethodTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitMethodInvocation", "(Lcom/sun/source/tree/MethodInvocationTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/MethodInvocationTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitModifiers", "(Lcom/sun/source/tree/ModifiersTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/ModifiersTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitModule", "(Lcom/sun/source/tree/ModuleTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/ModuleTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitNewArray", "(Lcom/sun/source/tree/NewArrayTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/NewArrayTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitNewClass", "(Lcom/sun/source/tree/NewClassTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/NewClassTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitOpens", "(Lcom/sun/source/tree/OpensTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree$JCOpens;", "(Lcom/sun/source/tree/OpensTree;TP;)Lcom/sun/tools/javac/tree/JCTree$JCOpens;", $PUBLIC},
	{"visitOther", "(Lcom/sun/source/tree/Tree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/Tree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitPackage", "(Lcom/sun/source/tree/PackageTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/PackageTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitParameterizedType", "(Lcom/sun/source/tree/ParameterizedTypeTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/ParameterizedTypeTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitParenthesized", "(Lcom/sun/source/tree/ParenthesizedTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/ParenthesizedTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitParenthesizedPattern", "(Lcom/sun/source/tree/ParenthesizedPatternTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/ParenthesizedPatternTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitPrimitiveType", "(Lcom/sun/source/tree/PrimitiveTypeTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/PrimitiveTypeTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitProvides", "(Lcom/sun/source/tree/ProvidesTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree$JCProvides;", "(Lcom/sun/source/tree/ProvidesTree;TP;)Lcom/sun/tools/javac/tree/JCTree$JCProvides;", $PUBLIC},
	{"visitRequires", "(Lcom/sun/source/tree/RequiresTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree$JCRequires;", "(Lcom/sun/source/tree/RequiresTree;TP;)Lcom/sun/tools/javac/tree/JCTree$JCRequires;", $PUBLIC},
	{"visitReturn", "(Lcom/sun/source/tree/ReturnTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/ReturnTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitSwitch", "(Lcom/sun/source/tree/SwitchTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/SwitchTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitSwitchExpression", "(Lcom/sun/source/tree/SwitchExpressionTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/SwitchExpressionTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitSynchronized", "(Lcom/sun/source/tree/SynchronizedTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/SynchronizedTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitThrow", "(Lcom/sun/source/tree/ThrowTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/ThrowTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitTry", "(Lcom/sun/source/tree/TryTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/TryTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitTypeCast", "(Lcom/sun/source/tree/TypeCastTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/TypeCastTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitTypeParameter", "(Lcom/sun/source/tree/TypeParameterTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/TypeParameterTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitUnary", "(Lcom/sun/source/tree/UnaryTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/UnaryTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitUnionType", "(Lcom/sun/source/tree/UnionTypeTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/UnionTypeTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitUses", "(Lcom/sun/source/tree/UsesTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree$JCUses;", "(Lcom/sun/source/tree/UsesTree;TP;)Lcom/sun/tools/javac/tree/JCTree$JCUses;", $PUBLIC},
	{"visitVariable", "(Lcom/sun/source/tree/VariableTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/VariableTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitWhileLoop", "(Lcom/sun/source/tree/WhileLoopTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/WhileLoopTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitWildcard", "(Lcom/sun/source/tree/WildcardTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/WildcardTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitYield", "(Lcom/sun/source/tree/YieldTree;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/source/tree/YieldTree;TP;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{}
};

$InnerClassInfo _TreeCopier_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.TreeCopier$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _TreeCopier_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.TreeCopier",
	"java.lang.Object",
	"com.sun.source.tree.TreeVisitor",
	_TreeCopier_FieldInfo_,
	_TreeCopier_MethodInfo_,
	"<P:Ljava/lang/Object;>Ljava/lang/Object;Lcom/sun/source/tree/TreeVisitor<Lcom/sun/tools/javac/tree/JCTree;TP;>;",
	nullptr,
	_TreeCopier_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.TreeCopier$1"
};

$Object* allocate$TreeCopier($Class* clazz) {
	return $of($alloc(TreeCopier));
}

void TreeCopier::init$($TreeMaker* M) {
	$set(this, M, M);
}

$JCTree* TreeCopier::copy($JCTree* tree) {
	return copy(tree, ($Object*)nullptr);
}

$JCTree* TreeCopier::copy($JCTree* tree, Object$* p) {
	if (tree == nullptr) {
		return nullptr;
	}
	return ($cast($JCTree, $nc(tree)->accept(this, p)));
}

$List* TreeCopier::copy($List* trees) {
	return copy(trees, ($Object*)nullptr);
}

$List* TreeCopier::copy($List* trees, Object$* p) {
	$useLocalCurrentObjectStackCache();
	if (trees == nullptr) {
		return nullptr;
	}
	$var($ListBuffer, lb, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(trees)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree, tree, $cast($JCTree, i$->next()));
			lb->append($(copy(tree, p)));
		}
	}
	return lb->toList();
}

$Object* TreeCopier::visitAnnotatedType($AnnotatedTypeTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCAnnotatedType, t, $cast($JCTree$JCAnnotatedType, node));
	$var($List, annotations, copy($nc(t)->annotations, p));
	$var($JCTree$JCExpression, underlyingType, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->underlyingType), p)));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->AnnotatedType(annotations, underlyingType));
}

$Object* TreeCopier::visitAnnotation($AnnotationTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCAnnotation, t, $cast($JCTree$JCAnnotation, node));
	$var($JCTree, annotationType, copy($nc(t)->annotationType, p));
	$var($List, args, copy($nc(t)->args, p));
	$init($Tree$Kind);
	if ($nc(t)->getKind() == $Tree$Kind::TYPE_ANNOTATION) {
		$var($JCTree$JCAnnotation, newTA, $nc($($nc(this->M)->at(t->pos$)))->TypeAnnotation(annotationType, args));
		$set($nc(newTA), attribute, t->attribute);
		return $of(newTA);
	} else {
		$var($JCTree$JCAnnotation, newT, $nc($($nc(this->M)->at(t->pos$)))->Annotation(annotationType, args));
		$set($nc(newT), attribute, t->attribute);
		return $of(newT);
	}
}

$Object* TreeCopier::visitAssert($AssertTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCAssert, t, $cast($JCTree$JCAssert, node));
	$var($JCTree$JCExpression, cond, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->cond), p)));
	$var($JCTree$JCExpression, detail, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->detail), p)));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->Assert(cond, detail));
}

$Object* TreeCopier::visitAssignment($AssignmentTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCAssign, t, $cast($JCTree$JCAssign, node));
	$var($JCTree$JCExpression, lhs, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->lhs), p)));
	$var($JCTree$JCExpression, rhs, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->rhs), p)));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->Assign(lhs, rhs));
}

$Object* TreeCopier::visitCompoundAssignment($CompoundAssignmentTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCAssignOp, t, $cast($JCTree$JCAssignOp, node));
	$var($JCTree, lhs, copy(static_cast<$JCTree*>($nc(t)->lhs), p));
	$var($JCTree, rhs, copy(static_cast<$JCTree*>($nc(t)->rhs), p));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->Assignop($($nc(t)->getTag()), lhs, rhs));
}

$Object* TreeCopier::visitBinary($BinaryTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCBinary, t, $cast($JCTree$JCBinary, node));
	$var($JCTree$JCExpression, lhs, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->lhs), p)));
	$var($JCTree$JCExpression, rhs, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->rhs), p)));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->Binary($($nc(t)->getTag()), lhs, rhs));
}

$Object* TreeCopier::visitBlock($BlockTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCBlock, t, $cast($JCTree$JCBlock, node));
	$var($List, stats, copy($nc(t)->stats, p));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->Block($nc(t)->flags, stats));
}

$Object* TreeCopier::visitBreak($BreakTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCBreak, t, $cast($JCTree$JCBreak, node));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->Break($nc(t)->label));
}

$Object* TreeCopier::visitYield($YieldTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCYield, t, $cast($JCTree$JCYield, node));
	$var($JCTree$JCExpression, value, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->value), p)));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->Yield(value));
}

$Object* TreeCopier::visitCase($CaseTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCCase, t, $cast($JCTree$JCCase, node));
	$var($List, labels, copy($nc(t)->labels, p));
	$var($List, stats, copy($nc(t)->stats, p));
	$var($JCTree, body, nullptr);
	$init($CaseTree$CaseKind);
	if ($nc(node)->getCaseKind() == $CaseTree$CaseKind::RULE) {
		$init($JCTree$Tag);
		$assign(body, $instanceOf($JCTree$JCExpression, $nc(t)->body) && $nc(($cast($JCTree$JCStatement, $nc(t->stats)->head)))->hasTag($JCTree$Tag::YIELD) ? static_cast<$JCTree*>($nc(($cast($JCTree$JCYield, $nc($nc(t)->stats)->head)))->value) : $cast($JCTree, $nc(t->stats)->head));
	} else {
		$assign(body, nullptr);
	}
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->Case($nc(t)->caseKind, labels, stats, body));
}

$Object* TreeCopier::visitCatch($CatchTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCCatch, t, $cast($JCTree$JCCatch, node));
	$var($JCTree$JCVariableDecl, param, $cast($JCTree$JCVariableDecl, copy(static_cast<$JCTree*>($nc(t)->param), p)));
	$var($JCTree$JCBlock, body, $cast($JCTree$JCBlock, copy(static_cast<$JCTree*>($nc(t)->body), p)));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->Catch(param, body));
}

$Object* TreeCopier::visitClass($ClassTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCClassDecl, t, $cast($JCTree$JCClassDecl, node));
	$var($JCTree$JCModifiers, mods, $cast($JCTree$JCModifiers, copy(static_cast<$JCTree*>($nc(t)->mods), p)));
	$var($List, typarams, copy($nc(t)->typarams, p));
	$var($JCTree$JCExpression, extending, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->extending), p)));
	$var($List, implementing, copy($nc(t)->implementing, p));
	$var($List, defs, copy($nc(t)->defs, p));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->ClassDef(mods, $nc(t)->name, typarams, extending, implementing, defs));
}

$Object* TreeCopier::visitConditionalExpression($ConditionalExpressionTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCConditional, t, $cast($JCTree$JCConditional, node));
	$var($JCTree$JCExpression, cond, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->cond), p)));
	$var($JCTree$JCExpression, truepart, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->truepart), p)));
	$var($JCTree$JCExpression, falsepart, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->falsepart), p)));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->Conditional(cond, truepart, falsepart));
}

$Object* TreeCopier::visitContinue($ContinueTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCContinue, t, $cast($JCTree$JCContinue, node));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->Continue($nc(t)->label));
}

$Object* TreeCopier::visitDoWhileLoop($DoWhileLoopTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCDoWhileLoop, t, $cast($JCTree$JCDoWhileLoop, node));
	$var($JCTree$JCStatement, body, $cast($JCTree$JCStatement, copy(static_cast<$JCTree*>($nc(t)->body), p)));
	$var($JCTree$JCExpression, cond, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->cond), p)));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->DoLoop(body, cond));
}

$Object* TreeCopier::visitErroneous($ErroneousTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCErroneous, t, $cast($JCTree$JCErroneous, node));
	$var($List, errs, copy($nc(t)->errs, p));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->Erroneous(errs));
}

$Object* TreeCopier::visitExpressionStatement($ExpressionStatementTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCExpressionStatement, t, $cast($JCTree$JCExpressionStatement, node));
	$var($JCTree$JCExpression, expr, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->expr), p)));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->Exec(expr));
}

$Object* TreeCopier::visitEnhancedForLoop($EnhancedForLoopTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCEnhancedForLoop, t, $cast($JCTree$JCEnhancedForLoop, node));
	$var($JCTree$JCVariableDecl, var, $cast($JCTree$JCVariableDecl, copy(static_cast<$JCTree*>($nc(t)->var), p)));
	$var($JCTree$JCExpression, expr, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->expr), p)));
	$var($JCTree$JCStatement, body, $cast($JCTree$JCStatement, copy(static_cast<$JCTree*>($nc(t)->body), p)));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->ForeachLoop(var, expr, body));
}

$Object* TreeCopier::visitForLoop($ForLoopTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCForLoop, t, $cast($JCTree$JCForLoop, node));
	$var($List, init, copy($nc(t)->init, p));
	$var($JCTree$JCExpression, cond, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->cond), p)));
	$var($List, step, copy($nc(t)->step, p));
	$var($JCTree$JCStatement, body, $cast($JCTree$JCStatement, copy(static_cast<$JCTree*>($nc(t)->body), p)));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->ForLoop(init, cond, step, body));
}

$Object* TreeCopier::visitIdentifier($IdentifierTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCIdent, t, $cast($JCTree$JCIdent, node));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->Ident($nc(t)->name));
}

$Object* TreeCopier::visitIf($IfTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCIf, t, $cast($JCTree$JCIf, node));
	$var($JCTree$JCExpression, cond, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->cond), p)));
	$var($JCTree$JCStatement, thenpart, $cast($JCTree$JCStatement, copy(static_cast<$JCTree*>($nc(t)->thenpart), p)));
	$var($JCTree$JCStatement, elsepart, $cast($JCTree$JCStatement, copy(static_cast<$JCTree*>($nc(t)->elsepart), p)));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->If(cond, thenpart, elsepart));
}

$Object* TreeCopier::visitImport($ImportTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCImport, t, $cast($JCTree$JCImport, node));
	$var($JCTree, qualid, copy($nc(t)->qualid, p));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->Import(qualid, $nc(t)->staticImport));
}

$Object* TreeCopier::visitArrayAccess($ArrayAccessTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCArrayAccess, t, $cast($JCTree$JCArrayAccess, node));
	$var($JCTree$JCExpression, indexed, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->indexed), p)));
	$var($JCTree$JCExpression, index, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->index), p)));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->Indexed(indexed, index));
}

$Object* TreeCopier::visitLabeledStatement($LabeledStatementTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCLabeledStatement, t, $cast($JCTree$JCLabeledStatement, node));
	$var($JCTree$JCStatement, body, $cast($JCTree$JCStatement, copy(static_cast<$JCTree*>($nc(t)->body), p)));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->Labelled($nc(t)->label, body));
}

$Object* TreeCopier::visitLiteral($LiteralTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCLiteral, t, $cast($JCTree$JCLiteral, node));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->Literal($nc(t)->typetag, t->value));
}

$Object* TreeCopier::visitMethod($MethodTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCMethodDecl, t, $cast($JCTree$JCMethodDecl, node));
	$var($JCTree$JCModifiers, mods, $cast($JCTree$JCModifiers, copy(static_cast<$JCTree*>($nc(t)->mods), p)));
	$var($JCTree$JCExpression, restype, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->restype), p)));
	$var($List, typarams, copy($nc(t)->typarams, p));
	$var($List, params, copy($nc(t)->params, p));
	$var($JCTree$JCVariableDecl, recvparam, $cast($JCTree$JCVariableDecl, copy(static_cast<$JCTree*>($nc(t)->recvparam), p)));
	$var($List, thrown, copy($nc(t)->thrown, p));
	$var($JCTree$JCBlock, body, $cast($JCTree$JCBlock, copy(static_cast<$JCTree*>($nc(t)->body), p)));
	$var($JCTree$JCExpression, defaultValue, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->defaultValue), p)));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->MethodDef(mods, $nc(t)->name, restype, typarams, recvparam, params, thrown, body, defaultValue));
}

$Object* TreeCopier::visitMethodInvocation($MethodInvocationTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCMethodInvocation, t, $cast($JCTree$JCMethodInvocation, node));
	$var($List, typeargs, copy($nc(t)->typeargs, p));
	$var($JCTree$JCExpression, meth, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->meth), p)));
	$var($List, args, copy($nc(t)->args, p));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->Apply(typeargs, meth, args));
}

$Object* TreeCopier::visitModifiers($ModifiersTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCModifiers, t, $cast($JCTree$JCModifiers, node));
	$var($List, annotations, copy($nc(t)->annotations, p));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->Modifiers($nc(t)->flags, annotations));
}

$Object* TreeCopier::visitNewArray($NewArrayTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCNewArray, t, $cast($JCTree$JCNewArray, node));
	$var($JCTree$JCExpression, elemtype, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->elemtype), p)));
	$var($List, dims, copy($nc(t)->dims, p));
	$var($List, elems, copy($nc(t)->elems, p));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->NewArray(elemtype, dims, elems));
}

$Object* TreeCopier::visitNewClass($NewClassTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCNewClass, t, $cast($JCTree$JCNewClass, node));
	$var($JCTree$JCExpression, encl, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->encl), p)));
	$var($List, typeargs, copy($nc(t)->typeargs, p));
	$var($JCTree$JCExpression, clazz, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->clazz), p)));
	$var($List, args, copy($nc(t)->args, p));
	$var($JCTree$JCClassDecl, def, $cast($JCTree$JCClassDecl, copy(static_cast<$JCTree*>($nc(t)->def), p)));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->NewClass(encl, typeargs, clazz, args, def));
}

$Object* TreeCopier::visitLambdaExpression($LambdaExpressionTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCLambda, t, $cast($JCTree$JCLambda, node));
	$var($List, params, copy($nc(t)->params, p));
	$var($JCTree, body, copy($nc(t)->body, p));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->Lambda(params, body));
}

$Object* TreeCopier::visitParenthesized($ParenthesizedTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCParens, t, $cast($JCTree$JCParens, node));
	$var($JCTree$JCExpression, expr, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->expr), p)));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->Parens(expr));
}

$Object* TreeCopier::visitReturn($ReturnTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCReturn, t, $cast($JCTree$JCReturn, node));
	$var($JCTree$JCExpression, expr, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->expr), p)));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->Return(expr));
}

$Object* TreeCopier::visitMemberSelect($MemberSelectTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCFieldAccess, t, $cast($JCTree$JCFieldAccess, node));
	$var($JCTree$JCExpression, selected, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->selected), p)));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->Select(selected, $nc(t)->name));
}

$Object* TreeCopier::visitMemberReference($MemberReferenceTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCMemberReference, t, $cast($JCTree$JCMemberReference, node));
	$var($JCTree$JCExpression, expr, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->expr), p)));
	$var($List, typeargs, copy($nc(t)->typeargs, p));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->Reference($nc(t)->mode, t->name, expr, typeargs));
}

$Object* TreeCopier::visitEmptyStatement($EmptyStatementTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCSkip, t, $cast($JCTree$JCSkip, node));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->Skip());
}

$Object* TreeCopier::visitSwitch($SwitchTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCSwitch, t, $cast($JCTree$JCSwitch, node));
	$var($JCTree$JCExpression, selector, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->selector), p)));
	$var($List, cases, copy($nc(t)->cases, p));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->Switch(selector, cases));
}

$Object* TreeCopier::visitSwitchExpression($SwitchExpressionTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCSwitchExpression, t, $cast($JCTree$JCSwitchExpression, node));
	$var($JCTree$JCExpression, selector, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->selector), p)));
	$var($List, cases, copy($nc(t)->cases, p));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->SwitchExpression(selector, cases));
}

$Object* TreeCopier::visitSynchronized($SynchronizedTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCSynchronized, t, $cast($JCTree$JCSynchronized, node));
	$var($JCTree$JCExpression, lock, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->lock), p)));
	$var($JCTree$JCBlock, body, $cast($JCTree$JCBlock, copy(static_cast<$JCTree*>($nc(t)->body), p)));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->Synchronized(lock, body));
}

$Object* TreeCopier::visitThrow($ThrowTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCThrow, t, $cast($JCTree$JCThrow, node));
	$var($JCTree$JCExpression, expr, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->expr), p)));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->Throw(expr));
}

$Object* TreeCopier::visitCompilationUnit($CompilationUnitTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCCompilationUnit, t, $cast($JCTree$JCCompilationUnit, node));
	$var($List, defs, copy($nc(t)->defs, p));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->TopLevel(defs));
}

$Object* TreeCopier::visitPackage($PackageTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCPackageDecl, t, $cast($JCTree$JCPackageDecl, node));
	$var($List, annotations, copy($nc(t)->annotations, p));
	$var($JCTree$JCExpression, pid, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->pid), p)));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->PackageDecl(annotations, pid));
}

$Object* TreeCopier::visitTry($TryTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCTry, t, $cast($JCTree$JCTry, node));
	$var($List, resources, copy($nc(t)->resources, p));
	$var($JCTree$JCBlock, body, $cast($JCTree$JCBlock, copy(static_cast<$JCTree*>($nc(t)->body), p)));
	$var($List, catchers, copy($nc(t)->catchers, p));
	$var($JCTree$JCBlock, finalizer, $cast($JCTree$JCBlock, copy(static_cast<$JCTree*>($nc(t)->finalizer), p)));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->Try(resources, body, catchers, finalizer));
}

$Object* TreeCopier::visitParameterizedType($ParameterizedTypeTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCTypeApply, t, $cast($JCTree$JCTypeApply, node));
	$var($JCTree$JCExpression, clazz, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->clazz), p)));
	$var($List, arguments, copy($nc(t)->arguments, p));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->TypeApply(clazz, arguments));
}

$Object* TreeCopier::visitUnionType($UnionTypeTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCTypeUnion, t, $cast($JCTree$JCTypeUnion, node));
	$var($List, components, copy($nc(t)->alternatives, p));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->TypeUnion(components));
}

$Object* TreeCopier::visitIntersectionType($IntersectionTypeTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCTypeIntersection, t, $cast($JCTree$JCTypeIntersection, node));
	$var($List, bounds, copy($nc(t)->bounds, p));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->TypeIntersection(bounds));
}

$Object* TreeCopier::visitArrayType($ArrayTypeTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCArrayTypeTree, t, $cast($JCTree$JCArrayTypeTree, node));
	$var($JCTree$JCExpression, elemtype, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->elemtype), p)));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->TypeArray(elemtype));
}

$Object* TreeCopier::visitTypeCast($TypeCastTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCTypeCast, t, $cast($JCTree$JCTypeCast, node));
	$var($JCTree, clazz, copy($nc(t)->clazz, p));
	$var($JCTree$JCExpression, expr, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->expr), p)));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->TypeCast(clazz, expr));
}

$Object* TreeCopier::visitPrimitiveType($PrimitiveTypeTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCPrimitiveTypeTree, t, $cast($JCTree$JCPrimitiveTypeTree, node));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->TypeIdent($nc(t)->typetag));
}

$Object* TreeCopier::visitTypeParameter($TypeParameterTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCTypeParameter, t, $cast($JCTree$JCTypeParameter, node));
	$var($List, annos, copy($nc(t)->annotations, p));
	$var($List, bounds, copy($nc(t)->bounds, p));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->TypeParameter($nc(t)->name, bounds, annos));
}

$Object* TreeCopier::visitInstanceOf($InstanceOfTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCInstanceOf, t, $cast($JCTree$JCInstanceOf, node));
	$var($JCTree$JCExpression, expr, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->expr), p)));
	$var($JCTree, pattern, copy($nc(t)->pattern, p));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->TypeTest(expr, pattern));
}

$Object* TreeCopier::visitBindingPattern($BindingPatternTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCBindingPattern, t, $cast($JCTree$JCBindingPattern, node));
	$var($JCTree$JCVariableDecl, var, $cast($JCTree$JCVariableDecl, copy(static_cast<$JCTree*>($nc(t)->var), p)));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->BindingPattern(var));
}

$Object* TreeCopier::visitGuardedPattern($GuardedPatternTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCGuardPattern, t, $cast($JCTree$JCGuardPattern, node));
	$var($JCTree$JCPattern, patt, $cast($JCTree$JCPattern, copy(static_cast<$JCTree*>($nc(t)->patt), p)));
	$var($JCTree$JCExpression, expr, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->expr), p)));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->GuardPattern(patt, expr));
}

$Object* TreeCopier::visitParenthesizedPattern($ParenthesizedPatternTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCParenthesizedPattern, t, $cast($JCTree$JCParenthesizedPattern, node));
	$var($JCTree$JCPattern, pattern, $cast($JCTree$JCPattern, copy(static_cast<$JCTree*>($nc(t)->pattern), p)));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->ParenthesizedPattern(pattern));
}

$Object* TreeCopier::visitDefaultCaseLabel($DefaultCaseLabelTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCDefaultCaseLabel, t, $cast($JCTree$JCDefaultCaseLabel, node));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->DefaultCaseLabel());
}

$Object* TreeCopier::visitUnary($UnaryTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCUnary, t, $cast($JCTree$JCUnary, node));
	$var($JCTree$JCExpression, arg, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->arg), p)));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->Unary($($nc(t)->getTag()), arg));
}

$Object* TreeCopier::visitVariable($VariableTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCVariableDecl, t, $cast($JCTree$JCVariableDecl, node));
	$var($JCTree$JCModifiers, mods, $cast($JCTree$JCModifiers, copy(static_cast<$JCTree*>($nc(t)->mods), p)));
	$var($JCTree$JCExpression, vartype, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->vartype), p)));
	if ($nc(t)->nameexpr == nullptr) {
		$var($JCTree$JCExpression, init, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>(t->init), p)));
		return $of($nc($($nc(this->M)->at(t->pos$)))->VarDef(mods, t->name, vartype, init));
	} else {
		$var($JCTree$JCExpression, nameexpr, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>(t->nameexpr), p)));
		return $of($nc($($nc(this->M)->at(t->pos$)))->ReceiverVarDef(mods, nameexpr, vartype));
	}
}

$Object* TreeCopier::visitWhileLoop($WhileLoopTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCWhileLoop, t, $cast($JCTree$JCWhileLoop, node));
	$var($JCTree$JCStatement, body, $cast($JCTree$JCStatement, copy(static_cast<$JCTree*>($nc(t)->body), p)));
	$var($JCTree$JCExpression, cond, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->cond), p)));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->WhileLoop(cond, body));
}

$Object* TreeCopier::visitWildcard($WildcardTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCWildcard, t, $cast($JCTree$JCWildcard, node));
	$var($JCTree$TypeBoundKind, kind, $nc($($nc(this->M)->at($nc($nc(t)->kind)->pos$)))->TypeBoundKind($nc($nc(t)->kind)->kind));
	$var($JCTree, inner, copy($nc(t)->inner, p));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->Wildcard(kind, inner));
}

$Object* TreeCopier::visitModule($ModuleTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCModuleDecl, t, $cast($JCTree$JCModuleDecl, node));
	$var($JCTree$JCModifiers, mods, $cast($JCTree$JCModifiers, copy(static_cast<$JCTree*>($nc(t)->mods), p)));
	$var($JCTree$JCExpression, qualId, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->qualId))));
	$var($List, directives, copy($nc(t)->directives));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->ModuleDef(mods, $($nc(t)->getModuleType()), qualId, directives));
}

$Object* TreeCopier::visitExports($ExportsTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCExports, t, $cast($JCTree$JCExports, node));
	$var($JCTree$JCExpression, qualId, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->qualid), p)));
	$var($List, moduleNames, copy($nc(t)->moduleNames, p));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->Exports(qualId, moduleNames));
}

$Object* TreeCopier::visitOpens($OpensTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCOpens, t, $cast($JCTree$JCOpens, node));
	$var($JCTree$JCExpression, qualId, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->qualid), p)));
	$var($List, moduleNames, copy($nc(t)->moduleNames, p));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->Opens(qualId, moduleNames));
}

$Object* TreeCopier::visitProvides($ProvidesTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCProvides, t, $cast($JCTree$JCProvides, node));
	$var($JCTree$JCExpression, serviceName, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->serviceName), p)));
	$var($List, implNames, copy($nc(t)->implNames, p));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->Provides(serviceName, implNames));
}

$Object* TreeCopier::visitRequires($RequiresTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCRequires, t, $cast($JCTree$JCRequires, node));
	$var($JCTree$JCExpression, moduleName, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->moduleName), p)));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->Requires($nc(t)->isTransitive$, t->isStaticPhase, moduleName));
}

$Object* TreeCopier::visitUses($UsesTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCUses, t, $cast($JCTree$JCUses, node));
	$var($JCTree$JCExpression, serviceName, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->qualid), p)));
	return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->Uses(serviceName));
}

$Object* TreeCopier::visitOther($Tree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree, tree, $cast($JCTree, node));
	$init($TreeCopier$1);
	switch ($nc($TreeCopier$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(tree)->getTag())))->ordinal())) {
	case 1:
		{
			{
				$var($JCTree$LetExpr, t, $cast($JCTree$LetExpr, node));
				$var($List, defs, copy($nc(t)->defs, p));
				$var($JCTree$JCExpression, expr, $cast($JCTree$JCExpression, copy(static_cast<$JCTree*>($nc(t)->expr), p)));
				return $of($nc($($nc(this->M)->at($nc(t)->pos$)))->LetExpr(defs, expr));
			}
		}
	default:
		{
			$throwNew($AssertionError, $of($$str({"unknown tree tag: "_s, $(tree->getTag())})));
		}
	}
}

TreeCopier::TreeCopier() {
}

$Class* TreeCopier::load$($String* name, bool initialize) {
	$loadClass(TreeCopier, name, initialize, &_TreeCopier_ClassInfo_, allocate$TreeCopier);
	return class$;
}

$Class* TreeCopier::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com