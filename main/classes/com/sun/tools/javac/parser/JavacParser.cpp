#include <com/sun/tools/javac/parser/JavacParser.h>

#include <com/sun/source/tree/CaseTree$CaseKind.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/MemberReferenceTree$ReferenceMode.h>
#include <com/sun/source/tree/ModuleTree$ModuleKind.h>
#include <com/sun/tools/javac/code/BoundKind.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Preview.h>
#include <com/sun/tools/javac/code/Source$Feature.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/parser/JavacParser$1.h>
#include <com/sun/tools/javac/parser/JavacParser$AbstractEndPosTable.h>
#include <com/sun/tools/javac/parser/JavacParser$BasicErrorRecoveryAction.h>
#include <com/sun/tools/javac/parser/JavacParser$EmptyEndPosTable.h>
#include <com/sun/tools/javac/parser/JavacParser$EnumeratorEstimate.h>
#include <com/sun/tools/javac/parser/JavacParser$ErrorRecoveryAction.h>
#include <com/sun/tools/javac/parser/JavacParser$LambdaClassifier.h>
#include <com/sun/tools/javac/parser/JavacParser$LambdaParameterKind.h>
#include <com/sun/tools/javac/parser/JavacParser$ParensResult.h>
#include <com/sun/tools/javac/parser/JavacParser$PatternResult.h>
#include <com/sun/tools/javac/parser/JavacParser$SimpleEndPosTable.h>
#include <com/sun/tools/javac/parser/LazyDocCommentTable.h>
#include <com/sun/tools/javac/parser/Lexer.h>
#include <com/sun/tools/javac/parser/ParserFactory.h>
#include <com/sun/tools/javac/parser/Tokens$Comment$CommentStyle.h>
#include <com/sun/tools/javac/parser/Tokens$Comment.h>
#include <com/sun/tools/javac/parser/Tokens$Token.h>
#include <com/sun/tools/javac/parser/Tokens$TokenKind.h>
#include <com/sun/tools/javac/parser/Tokens.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Warnings.h>
#include <com/sun/tools/javac/tree/DocCommentTable.h>
#include <com/sun/tools/javac/tree/EndPosTable.h>
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
#include <com/sun/tools/javac/tree/JCTree$JCDirective.h>
#include <com/sun/tools/javac/tree/JCTree$JCDoWhileLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCEnhancedForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCErroneous.h>
#include <com/sun/tools/javac/tree/JCTree$JCExports.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpressionStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCFunctionalExpression.h>
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
#include <com/sun/tools/javac/tree/JCTree$JCOperatorExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCPackageDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCParens.h>
#include <com/sun/tools/javac/tree/JCTree$JCParenthesizedPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
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
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$TypeBoundKind.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Convert.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic$SimpleDiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Options.h>
#include <com/sun/tools/javac/util/Position$LineMap.h>
#include <com/sun/tools/javac/util/Position.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Enum.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/EnumSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef ABSTRACT
#undef AMP
#undef AMPAMP
#undef AND
#undef ANNOTATED_TYPE
#undef ANNOTATION
#undef ANNOTATIONS_AFTER_TYPE_PARAMS
#undef ARROW
#undef ASSERT
#undef BAR
#undef BITAND
#undef BITAND_ASG
#undef BITOR
#undef BITOR_ASG
#undef BITXOR
#undef BITXOR_ASG
#undef BLOCK
#undef BLOCK_STMT
#undef BOOLEAN
#undef BOT
#undef BYTE
#undef CASE
#undef CAST
#undef CATCH
#undef CATCH_CLAUSE
#undef CHAR
#undef CLASS
#undef COLCOL
#undef COLON
#undef COMMA
#undef COMPACT_RECORD_CONSTRUCTOR
#undef COMPL
#undef DEFAULT
#undef DEFAULT_METHODS
#undef DEPRECATED
#undef DIAMOND
#undef DIV
#undef DIV_ASG
#undef DOT
#undef DOUBLE
#undef DUMMY
#undef EFFECTIVELY_FINAL_VARIABLES_IN_TRY_WITH_RESOURCES
#undef ELLIPSIS
#undef ELSE
#undef ENUM
#undef ENUMERATOR
#undef EOF
#undef EQ
#undef ERROR
#undef EXEC
#undef EXPLICIT_LAMBDA
#undef EXPR
#undef EXPRESSION
#undef EXTENDS
#undef F
#undef FINAL
#undef FINALLY
#undef FLOAT
#undef GE
#undef GENERATED_MEMBER
#undef GT
#undef GTGTGTEQ
#undef IDENT
#undef IDENTIFIER
#undef IMPLEMENTS
#undef IMPLICIT_LAMBDA
#undef IMPORT
#undef INSTANCEOF
#undef INT
#undef INTERFACE
#undef INTERSECTION_TYPES_IN_CAST
#undef INTLITERAL
#undef INVOKE
#undef JAVADOC
#undef JDK10
#undef JDK14
#undef JDK15
#undef LAMBDA
#undef LAX_IDENTIFIER
#undef LBRACE
#undef LBRACKET
#undef LE
#undef LITERAL
#undef LOCAL_VARIABLE_TYPE_INFERENCE
#undef LONG
#undef LONGLITERAL
#undef LPAREN
#undef LT
#undef MEMBER
#undef METHODDEF
#undef METHOD_REFERENCES
#undef MINUS
#undef MINUS_ASG
#undef MOD
#undef MODULES
#undef MOD_ASG
#undef MONKEYS_AT
#undef MUL
#undef MUL_ASG
#undef NATIVE
#undef NE
#undef NEG
#undef NEW
#undef NOLAMBDA
#undef NONE
#undef NON_SEALED
#undef NOPARAMS
#undef NOPOS
#undef NOT
#undef NO_TAG
#undef OPEN
#undef OR
#undef PACKAGE
#undef PARAMETER
#undef PARENS
#undef PATTERN
#undef PATTERN_MATCHING_IN_INSTANCEOF
#undef PATTERN_SWITCH
#undef PLUS
#undef PLUSEQ
#undef PLUSPLUS
#undef PLUS_ASG
#undef POS
#undef POSITIVE_INFINITY
#undef POSTDEC
#undef POSTINC
#undef PREDEC
#undef PREINC
#undef PRIVATE
#undef PRIVATE_INTERFACE_METHODS
#undef PROTECTED
#undef PUBLIC
#undef QUES
#undef RBRACE
#undef RBRACKET
#undef RECORD
#undef RECORDS
#undef RECOVERY_THRESHOLD
#undef RPAREN
#undef RULE
#undef S
#undef SEALED
#undef SEALED_CLASSES
#undef SELECT
#undef SEMI
#undef SHORT
#undef SL
#undef SL_ASG
#undef SOURCE_LEVEL
#undef SR
#undef SR_ASG
#undef STAR
#undef STATEMENT
#undef STATIC
#undef STATIC_INTERFACE_METHODS
#undef STRICTFP
#undef STRONG
#undef SUB
#undef SUBSUB
#undef SUPER
#undef SWITCH_EXPRESSION
#undef SWITCH_MULTIPLE_CASE_LABELS
#undef SWITCH_RULE
#undef SYNCHRONIZED
#undef SYNTAX
#undef THIS
#undef THROW
#undef THROWS
#undef TRANSIENT
#undef TRUE
#undef TYPE
#undef TYPEAPPLY
#undef TYPEARG
#undef TYPEARRAY
#undef TYPETEST
#undef TYPE_ANNOTATION
#undef TYPE_ANNOTATIONS
#undef UNBOUND
#undef UNDERSCORE
#undef UNDERSCORE_IDENTIFIER
#undef UNKNOWN
#undef USR
#undef USR_ASG
#undef VARARGS
#undef VARDEF
#undef VAR_SYNTAX_IMPLICIT_LAMBDAS
#undef VOID
#undef VOLATILE
#undef WHILE

using $Tokens$TokenArray = $Array<::com::sun::tools::javac::parser::Tokens$Token>;
using $JCTree$JCExpressionArray = $Array<::com::sun::tools::javac::tree::JCTree$JCExpression>;
using $JCDiagnostic$FragmentArray = $Array<::com::sun::tools::javac::util::JCDiagnostic$Fragment>;
using $PredicateArray = $Array<::java::util::function::Predicate>;
using $JCDiagnostic$FragmentArray2 = $Array<::com::sun::tools::javac::util::JCDiagnostic$Fragment, 2>;
using $CaseTree$CaseKind = ::com::sun::source::tree::CaseTree$CaseKind;
using $MemberReferenceTree$ReferenceMode = ::com::sun::source::tree::MemberReferenceTree$ReferenceMode;
using $ModuleTree$ModuleKind = ::com::sun::source::tree::ModuleTree$ModuleKind;
using $BoundKind = ::com::sun::tools::javac::code::BoundKind;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Preview = ::com::sun::tools::javac::code::Preview;
using $Source = ::com::sun::tools::javac::code::Source;
using $Source$Feature = ::com::sun::tools::javac::code::Source$Feature;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $JavacParser$1 = ::com::sun::tools::javac::parser::JavacParser$1;
using $JavacParser$AbstractEndPosTable = ::com::sun::tools::javac::parser::JavacParser$AbstractEndPosTable;
using $JavacParser$BasicErrorRecoveryAction = ::com::sun::tools::javac::parser::JavacParser$BasicErrorRecoveryAction;
using $JavacParser$EmptyEndPosTable = ::com::sun::tools::javac::parser::JavacParser$EmptyEndPosTable;
using $JavacParser$EnumeratorEstimate = ::com::sun::tools::javac::parser::JavacParser$EnumeratorEstimate;
using $JavacParser$ErrorRecoveryAction = ::com::sun::tools::javac::parser::JavacParser$ErrorRecoveryAction;
using $JavacParser$LambdaClassifier = ::com::sun::tools::javac::parser::JavacParser$LambdaClassifier;
using $JavacParser$LambdaParameterKind = ::com::sun::tools::javac::parser::JavacParser$LambdaParameterKind;
using $JavacParser$ParensResult = ::com::sun::tools::javac::parser::JavacParser$ParensResult;
using $JavacParser$PatternResult = ::com::sun::tools::javac::parser::JavacParser$PatternResult;
using $JavacParser$SimpleEndPosTable = ::com::sun::tools::javac::parser::JavacParser$SimpleEndPosTable;
using $LazyDocCommentTable = ::com::sun::tools::javac::parser::LazyDocCommentTable;
using $Lexer = ::com::sun::tools::javac::parser::Lexer;
using $Parser = ::com::sun::tools::javac::parser::Parser;
using $ParserFactory = ::com::sun::tools::javac::parser::ParserFactory;
using $Tokens = ::com::sun::tools::javac::parser::Tokens;
using $Tokens$Comment = ::com::sun::tools::javac::parser::Tokens$Comment;
using $Tokens$Comment$CommentStyle = ::com::sun::tools::javac::parser::Tokens$Comment$CommentStyle;
using $Tokens$Token = ::com::sun::tools::javac::parser::Tokens$Token;
using $Tokens$TokenKind = ::com::sun::tools::javac::parser::Tokens$TokenKind;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
using $CompilerProperties$Warnings = ::com::sun::tools::javac::resources::CompilerProperties$Warnings;
using $DocCommentTable = ::com::sun::tools::javac::tree::DocCommentTable;
using $EndPosTable = ::com::sun::tools::javac::tree::EndPosTable;
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
using $JCTree$JCDirective = ::com::sun::tools::javac::tree::JCTree$JCDirective;
using $JCTree$JCDoWhileLoop = ::com::sun::tools::javac::tree::JCTree$JCDoWhileLoop;
using $JCTree$JCEnhancedForLoop = ::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop;
using $JCTree$JCErroneous = ::com::sun::tools::javac::tree::JCTree$JCErroneous;
using $JCTree$JCExports = ::com::sun::tools::javac::tree::JCTree$JCExports;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCExpressionStatement = ::com::sun::tools::javac::tree::JCTree$JCExpressionStatement;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCForLoop = ::com::sun::tools::javac::tree::JCTree$JCForLoop;
using $JCTree$JCFunctionalExpression = ::com::sun::tools::javac::tree::JCTree$JCFunctionalExpression;
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
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
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
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$TypeBoundKind = ::com::sun::tools::javac::tree::JCTree$TypeBoundKind;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Convert = ::com::sun::tools::javac::util::Convert;
using $JCDiagnostic$DiagnosticFlag = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $JCDiagnostic$Fragment = ::com::sun::tools::javac::util::JCDiagnostic$Fragment;
using $JCDiagnostic$SimpleDiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$SimpleDiagnosticPosition;
using $JCDiagnostic$Warning = ::com::sun::tools::javac::util::JCDiagnostic$Warning;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Options = ::com::sun::tools::javac::util::Options;
using $Position = ::com::sun::tools::javac::util::Position;
using $Position$LineMap = ::com::sun::tools::javac::util::Position$LineMap;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $EnumSet = ::java::util::EnumSet;
using $Iterator = ::java::util::Iterator;
using $1List = ::java::util::List;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

class JavacParser$$Lambda$lambda$new$3 : public $Predicate {
	$class(JavacParser$$Lambda$lambda$new$3, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* t) override {
		 return JavacParser::lambda$new$3($cast($Tokens$TokenKind, t));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacParser$$Lambda$lambda$new$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavacParser$$Lambda$lambda$new$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavacParser$$Lambda$lambda$new$3::*)()>(&JavacParser$$Lambda$lambda$new$3::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacParser$$Lambda$lambda$new$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.parser.JavacParser$$Lambda$lambda$new$3",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* JavacParser$$Lambda$lambda$new$3::load$($String* name, bool initialize) {
	$loadClass(JavacParser$$Lambda$lambda$new$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacParser$$Lambda$lambda$new$3::class$ = nullptr;

class JavacParser$$Lambda$Expected$1 : public $Function {
	$class(JavacParser$$Lambda$Expected$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* arg0) override {
		 return $of($CompilerProperties$Errors::Expected($cast($Tokens$TokenKind, arg0)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacParser$$Lambda$Expected$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavacParser$$Lambda$Expected$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavacParser$$Lambda$Expected$1::*)()>(&JavacParser$$Lambda$Expected$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacParser$$Lambda$Expected$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.parser.JavacParser$$Lambda$Expected$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* JavacParser$$Lambda$Expected$1::load$($String* name, bool initialize) {
	$loadClass(JavacParser$$Lambda$Expected$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacParser$$Lambda$Expected$1::class$ = nullptr;

class JavacParser$$Lambda$lambda$term2Rest$0$2 : public $Function {
	$class(JavacParser$$Lambda$lambda$term2Rest$0$2, $NO_CLASS_INIT, $Function)
public:
	void init$(JavacParser* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* decl) override {
		 return $of($nc(inst$)->lambda$term2Rest$0($cast($JCTree$JCAnnotation, decl)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacParser$$Lambda$lambda$term2Rest$0$2>());
	}
	JavacParser* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JavacParser$$Lambda$lambda$term2Rest$0$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JavacParser$$Lambda$lambda$term2Rest$0$2, inst$)},
	{}
};
$MethodInfo JavacParser$$Lambda$lambda$term2Rest$0$2::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/parser/JavacParser;)V", nullptr, $PUBLIC, $method(static_cast<void(JavacParser$$Lambda$lambda$term2Rest$0$2::*)(JavacParser*)>(&JavacParser$$Lambda$lambda$term2Rest$0$2::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacParser$$Lambda$lambda$term2Rest$0$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.parser.JavacParser$$Lambda$lambda$term2Rest$0$2",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* JavacParser$$Lambda$lambda$term2Rest$0$2::load$($String* name, bool initialize) {
	$loadClass(JavacParser$$Lambda$lambda$term2Rest$0$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacParser$$Lambda$lambda$term2Rest$0$2::class$ = nullptr;

class JavacParser$$Lambda$lambda$merge$1$3 : public $Function {
	$class(JavacParser$$Lambda$lambda$merge$1$3, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* lit) override {
		 return $of(JavacParser::lambda$merge$1($cast($JCTree$JCLiteral, lit)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacParser$$Lambda$lambda$merge$1$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavacParser$$Lambda$lambda$merge$1$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavacParser$$Lambda$lambda$merge$1$3::*)()>(&JavacParser$$Lambda$lambda$merge$1$3::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacParser$$Lambda$lambda$merge$1$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.parser.JavacParser$$Lambda$lambda$merge$1$3",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* JavacParser$$Lambda$lambda$merge$1$3::load$($String* name, bool initialize) {
	$loadClass(JavacParser$$Lambda$lambda$merge$1$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacParser$$Lambda$lambda$merge$1$3::class$ = nullptr;

class JavacParser$$Lambda$lambda$switchExpressionStatementGroup$2$4 : public $Function {
	$class(JavacParser$$Lambda$lambda$switchExpressionStatementGroup$2$4, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* tk) override {
		 return $of(JavacParser::lambda$switchExpressionStatementGroup$2($cast($Tokens$TokenKind, tk)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacParser$$Lambda$lambda$switchExpressionStatementGroup$2$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavacParser$$Lambda$lambda$switchExpressionStatementGroup$2$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavacParser$$Lambda$lambda$switchExpressionStatementGroup$2$4::*)()>(&JavacParser$$Lambda$lambda$switchExpressionStatementGroup$2$4::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacParser$$Lambda$lambda$switchExpressionStatementGroup$2$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.parser.JavacParser$$Lambda$lambda$switchExpressionStatementGroup$2$4",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* JavacParser$$Lambda$lambda$switchExpressionStatementGroup$2$4::load$($String* name, bool initialize) {
	$loadClass(JavacParser$$Lambda$lambda$switchExpressionStatementGroup$2$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacParser$$Lambda$lambda$switchExpressionStatementGroup$2$4::class$ = nullptr;

$FieldInfo _JavacParser_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JavacParser, $assertionsDisabled)},
	{"infixPrecedenceLevels", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JavacParser, infixPrecedenceLevels)},
	{"parseModuleInfo", "Z", nullptr, $PRIVATE | $FINAL, $field(JavacParser, parseModuleInfo)},
	{"S", "Lcom/sun/tools/javac/parser/Lexer;", nullptr, $PROTECTED, $field(JavacParser, S)},
	{"F", "Lcom/sun/tools/javac/tree/TreeMaker;", nullptr, $PROTECTED, $field(JavacParser, F)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $PRIVATE, $field(JavacParser, log)},
	{"source", "Lcom/sun/tools/javac/code/Source;", nullptr, $PRIVATE, $field(JavacParser, source)},
	{"preview", "Lcom/sun/tools/javac/code/Preview;", nullptr, $PRIVATE, $field(JavacParser, preview)},
	{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, $PRIVATE, $field(JavacParser, names)},
	{"endPosTable", "Lcom/sun/tools/javac/parser/JavacParser$AbstractEndPosTable;", nullptr, $PROTECTED | $FINAL, $field(JavacParser, endPosTable)},
	{"typeAnnotationsPushedBack", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;", $PRIVATE, $field(JavacParser, typeAnnotationsPushedBack)},
	{"permitTypeAnnotationsPushBack", "Z", nullptr, $PRIVATE, $field(JavacParser, permitTypeAnnotationsPushBack)},
	{"allowStringFolding", "Z", nullptr, 0, $field(JavacParser, allowStringFolding)},
	{"keepDocComments", "Z", nullptr, 0, $field(JavacParser, keepDocComments)},
	{"keepLineMap", "Z", nullptr, 0, $field(JavacParser, keepLineMap)},
	{"allowThisIdent", "Z", nullptr, 0, $field(JavacParser, allowThisIdent)},
	{"allowYieldStatement", "Z", nullptr, 0, $field(JavacParser, allowYieldStatement)},
	{"allowRecords", "Z", nullptr, 0, $field(JavacParser, allowRecords)},
	{"allowSealedTypes", "Z", nullptr, 0, $field(JavacParser, allowSealedTypes)},
	{"receiverParam", "Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;", nullptr, 0, $field(JavacParser, receiverParam)},
	{"EXPR", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(JavacParser, EXPR)},
	{"TYPE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(JavacParser, TYPE)},
	{"NOPARAMS", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(JavacParser, NOPARAMS)},
	{"TYPEARG", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(JavacParser, TYPEARG)},
	{"DIAMOND", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(JavacParser, DIAMOND)},
	{"NOLAMBDA", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(JavacParser, NOLAMBDA)},
	{"mode", "I", nullptr, $PROTECTED, $field(JavacParser, mode)},
	{"lastmode", "I", nullptr, $PROTECTED, $field(JavacParser, lastmode)},
	{"token", "Lcom/sun/tools/javac/parser/Tokens$Token;", nullptr, $PROTECTED, $field(JavacParser, token$)},
	{"errorTree", "Lcom/sun/tools/javac/tree/JCTree$JCErroneous;", nullptr, $PRIVATE, $field(JavacParser, errorTree)},
	{"RECOVERY_THRESHOLD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JavacParser, RECOVERY_THRESHOLD)},
	{"errorPos", "I", nullptr, $PRIVATE, $field(JavacParser, errorPos)},
	{"count", "I", nullptr, $PRIVATE, $field(JavacParser, count)},
	{"docComments", "Lcom/sun/tools/javac/tree/DocCommentTable;", nullptr, $PRIVATE | $FINAL, $field(JavacParser, docComments)},
	{"odStackSupply", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<[Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", 0, $field(JavacParser, odStackSupply)},
	{"opStackSupply", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<[Lcom/sun/tools/javac/parser/Tokens$Token;>;", 0, $field(JavacParser, opStackSupply)},
	{"LAX_IDENTIFIER", "Ljava/util/function/Predicate;", "Ljava/util/function/Predicate<Lcom/sun/tools/javac/parser/Tokens$TokenKind;>;", $PROTECTED, $field(JavacParser, LAX_IDENTIFIER)},
	{"decisionTable", "[[Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JavacParser, decisionTable)},
	{}
};

$MethodInfo _JavacParser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/parser/ParserFactory;Lcom/sun/tools/javac/parser/Lexer;ZZZ)V", nullptr, $PROTECTED, $method(static_cast<void(JavacParser::*)($ParserFactory*,$Lexer*,bool,bool,bool)>(&JavacParser::init$))},
	{"<init>", "(Lcom/sun/tools/javac/parser/ParserFactory;Lcom/sun/tools/javac/parser/Lexer;ZZZZ)V", nullptr, $PROTECTED, $method(static_cast<void(JavacParser::*)($ParserFactory*,$Lexer*,bool,bool,bool,bool)>(&JavacParser::init$))},
	{"accept", "(Lcom/sun/tools/javac/parser/Tokens$TokenKind;)V", nullptr, $PUBLIC},
	{"accept", "(Lcom/sun/tools/javac/parser/Tokens$TokenKind;Ljava/util/function/Function;)V", "(Lcom/sun/tools/javac/parser/Tokens$TokenKind;Ljava/util/function/Function<Lcom/sun/tools/javac/parser/Tokens$TokenKind;Lcom/sun/tools/javac/util/JCDiagnostic$Error;>;)V", $PUBLIC},
	{"allowedAfterSealedOrNonSealed", "(Lcom/sun/tools/javac/parser/Tokens$Token;ZZ)Z", nullptr, $PRIVATE, $method(static_cast<bool(JavacParser::*)($Tokens$Token*,bool,bool)>(&JavacParser::allowedAfterSealedOrNonSealed))},
	{"analyzeParens", "()Lcom/sun/tools/javac/parser/JavacParser$ParensResult;", nullptr, 0},
	{"analyzePattern", "(I)Lcom/sun/tools/javac/parser/JavacParser$PatternResult;", nullptr, 0},
	{"annotation", "(ILcom/sun/tools/javac/tree/JCTree$Tag;)Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;", nullptr, 0},
	{"annotationFieldValue", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"annotationFieldValues", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", 0},
	{"annotationFieldValuesOpt", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", 0},
	{"annotationValue", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"annotationsOpt", "(Lcom/sun/tools/javac/tree/JCTree$Tag;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/tree/JCTree$Tag;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;", $PROTECTED},
	{"arguments", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", 0},
	{"arguments", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", 0},
	{"argumentsOpt", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", 0},
	{"arrayCreatorRest", "(ILcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"arrayInitializer", "(ILcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"arrayInitializerElements", "(ILcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/util/List;", "(ILcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", 0},
	{"attach", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/parser/Tokens$Comment;)V", nullptr, $PROTECTED},
	{"basicType", "()Lcom/sun/tools/javac/tree/JCTree$JCPrimitiveTypeTree;", nullptr, 0},
	{"block", "(IJ)Lcom/sun/tools/javac/tree/JCTree$JCBlock;", nullptr, 0},
	{"block", "()Lcom/sun/tools/javac/tree/JCTree$JCBlock;", nullptr, $PUBLIC},
	{"blockStatement", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCStatement;>;", 0},
	{"blockStatements", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCStatement;>;", 0},
	{"bracketsOpt", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", $PRIVATE, $method(static_cast<$JCTree$JCExpression*(JavacParser::*)($JCTree$JCExpression*,$List*)>(&JavacParser::bracketsOpt))},
	{"bracketsOpt", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PRIVATE, $method(static_cast<$JCTree$JCExpression*(JavacParser::*)($JCTree$JCExpression*)>(&JavacParser::bracketsOpt))},
	{"bracketsOptCont", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;ILcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;ILcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", $PRIVATE, $method(static_cast<$JCTree$JCExpression*(JavacParser::*)($JCTree$JCExpression*,int32_t,$List*)>(&JavacParser::bracketsOptCont))},
	{"bracketsSuffix", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"catchClause", "()Lcom/sun/tools/javac/tree/JCTree$JCCatch;", nullptr, $PROTECTED},
	{"catchTypes", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", 0},
	{"checkExprStat", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PROTECTED},
	{"checkNoMods", "(J)V", nullptr, $PROTECTED},
	{"checkNoMods", "(IJ)V", nullptr, $PROTECTED},
	{"checkSourceLevel", "(Lcom/sun/tools/javac/code/Source$Feature;)V", nullptr, 0},
	{"checkSourceLevel", "(ILcom/sun/tools/javac/code/Source$Feature;)V", nullptr, $PROTECTED},
	{"classCreatorRest", "(ILcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCNewClass;", "(ILcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCNewClass;", 0},
	{"classDeclaration", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/parser/Tokens$Comment;)Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;", nullptr, $PROTECTED},
	{"classInterfaceOrRecordBody", "(Lcom/sun/tools/javac/util/Name;ZZ)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/Name;ZZ)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;", 0},
	{"classOrInterfaceOrRecordBodyDeclaration", "(Lcom/sun/tools/javac/util/Name;ZZ)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/Name;ZZ)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;", $PROTECTED},
	{"classOrRecordOrInterfaceOrEnumDeclaration", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/parser/Tokens$Comment;)Lcom/sun/tools/javac/tree/JCTree$JCStatement;", nullptr, $PROTECTED},
	{"creator", "(ILcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", "(ILcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", 0},
	{"doRecover", "(ILcom/sun/tools/javac/parser/JavacParser$ErrorRecoveryAction;Lcom/sun/tools/javac/util/JCDiagnostic$Error;)Lcom/sun/tools/javac/tree/JCTree$JCStatement;", nullptr, $PRIVATE, $method(static_cast<$JCTree$JCStatement*(JavacParser::*)(int32_t,$JavacParser$ErrorRecoveryAction*,$JCDiagnostic$Error*)>(&JavacParser::doRecover))},
	{"earlier", "(II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&JavacParser::earlier))},
	{"enumBody", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;", 0},
	{"enumDeclaration", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/parser/Tokens$Comment;)Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;", nullptr, $PROTECTED},
	{"enumeratorDeclaration", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, 0},
	{"estimateEnumeratorOrMember", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/parser/JavacParser$EnumeratorEstimate;", nullptr, $PRIVATE, $method(static_cast<$JavacParser$EnumeratorEstimate*(JavacParser::*)($Name*)>(&JavacParser::estimateEnumeratorOrMember))},
	{"foldIfNeeded", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/ListBuffer;Lcom/sun/tools/javac/util/ListBuffer;Z)Z", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/tree/JCTree$JCLiteral;>;Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Z)Z", $PRIVATE, $method(static_cast<bool(JavacParser::*)($JCTree$JCExpression*,$ListBuffer*,$ListBuffer*,bool)>(&JavacParser::foldIfNeeded))},
	{"foldStrings", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PROTECTED},
	{"forInit", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCStatement;>;", 0},
	{"forUpdate", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpressionStatement;>;", 0},
	{"formalParameter", "(ZZ)Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;", nullptr, $PROTECTED},
	{"formalParameters", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;>;", 0},
	{"formalParameters", "(ZZ)Lcom/sun/tools/javac/util/List;", "(ZZ)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;>;", 0},
	{"getEndPos", "(Lcom/sun/tools/javac/tree/JCTree;)I", nullptr, $PUBLIC},
	{"getStartPos", "(Lcom/sun/tools/javac/tree/JCTree;)I", nullptr, $PUBLIC},
	{"ident", "()Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{"ident", "(Z)Lcom/sun/tools/javac/util/Name;", nullptr, $PROTECTED},
	{"illegal", "(I)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"illegal", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"implicitParameter", "()Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;", nullptr, $PROTECTED},
	{"implicitParameters", "(Z)Lcom/sun/tools/javac/util/List;", "(Z)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;>;", 0},
	{"importDeclaration", "()Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PROTECTED},
	{"innerCreator", "(ILcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", "(ILcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", 0},
	{"insertAnnotationsToMostInner", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;Z)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;Z)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", $PRIVATE, $method(static_cast<$JCTree$JCExpression*(JavacParser::*)($JCTree$JCExpression*,$List*,bool)>(&JavacParser::insertAnnotationsToMostInner))},
	{"interfaceDeclaration", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/parser/Tokens$Comment;)Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;", nullptr, $PROTECTED},
	{"isInvalidUnqualifiedMethodIdentifier", "(ILcom/sun/tools/javac/util/Name;)Z", nullptr, 0},
	{"isNonSealedClassStart", "(Z)Z", nullptr, $PROTECTED},
	{"isNonSealedIdentifier", "(Lcom/sun/tools/javac/parser/Tokens$Token;I)Z", nullptr, $PROTECTED},
	{"isRecordStart", "()Z", nullptr, $PROTECTED},
	{"isSealedClassStart", "(Z)Z", nullptr, $PROTECTED},
	{"isUnboundMemberRef", "()Z", nullptr, 0},
	{"isZero", "(Ljava/lang/String;)Z", nullptr, 0},
	{"lambda$merge$1", "(Lcom/sun/tools/javac/tree/JCTree$JCLiteral;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($JCTree$JCLiteral*)>(&JavacParser::lambda$merge$1))},
	{"lambda$new$3", "(Lcom/sun/tools/javac/parser/Tokens$TokenKind;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Tokens$TokenKind*)>(&JavacParser::lambda$new$3))},
	{"lambda$switchExpressionStatementGroup$2", "(Lcom/sun/tools/javac/parser/Tokens$TokenKind;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$JCDiagnostic$Error*(*)($Tokens$TokenKind*)>(&JavacParser::lambda$switchExpressionStatementGroup$2))},
	{"lambda$term2Rest$0", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;)Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$JCTree$JCAnnotation*(JavacParser::*)($JCTree$JCAnnotation*)>(&JavacParser::lambda$term2Rest$0))},
	{"lambdaExpression", "(Lcom/sun/tools/javac/util/List;I)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;>;I)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", 0},
	{"lambdaExpressionOrStatement", "(ZZI)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"lambdaExpressionOrStatementRest", "(Lcom/sun/tools/javac/util/List;I)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;>;I)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", 0},
	{"lambdaStatement", "(Lcom/sun/tools/javac/util/List;II)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;>;II)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", 0},
	{"literal", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"literal", "(Lcom/sun/tools/javac/util/Name;I)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"localVariableDeclarations", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCStatement;>;", $PRIVATE, $method(static_cast<$List*(JavacParser::*)($JCTree$JCModifiers*,$JCTree$JCExpression*)>(&JavacParser::localVariableDeclarations))},
	{"memberReferenceSuffix", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"memberReferenceSuffix", "(ILcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"merge", "(Lcom/sun/tools/javac/util/ListBuffer;Lcom/sun/tools/javac/util/ListBuffer;)Z", "(Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/tree/JCTree$JCLiteral;>;Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)Z", 0},
	{"methodDeclaratorRest", "(ILcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;ZZZLcom/sun/tools/javac/parser/Tokens$Comment;)Lcom/sun/tools/javac/tree/JCTree;", "(ILcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;>;ZZZLcom/sun/tools/javac/parser/Tokens$Comment;)Lcom/sun/tools/javac/tree/JCTree;", $PROTECTED},
	{"modifiersOpt", "()Lcom/sun/tools/javac/tree/JCTree$JCModifiers;", nullptr, $PROTECTED},
	{"modifiersOpt", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;)Lcom/sun/tools/javac/tree/JCTree$JCModifiers;", nullptr, $PROTECTED},
	{"moduleDecl", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/source/tree/ModuleTree$ModuleKind;Lcom/sun/tools/javac/parser/Tokens$Comment;)Lcom/sun/tools/javac/tree/JCTree$JCModuleDecl;", nullptr, 0},
	{"moduleDirectiveList", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCDirective;>;", 0},
	{"moreStatementExpressions", "(ILcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/ListBuffer;)Lcom/sun/tools/javac/util/ListBuffer;", "<T:Lcom/sun/tools/javac/util/ListBuffer<-Lcom/sun/tools/javac/tree/JCTree$JCExpressionStatement;>;>(ILcom/sun/tools/javac/tree/JCTree$JCExpression;TT;)TT;", 0},
	{"newDocCommentTable", "(ZLcom/sun/tools/javac/parser/ParserFactory;)Lcom/sun/tools/javac/tree/DocCommentTable;", nullptr, $PROTECTED},
	{"newEndPosTable", "(Z)Lcom/sun/tools/javac/parser/JavacParser$AbstractEndPosTable;", nullptr, $PROTECTED},
	{"newOdStack", "()[Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PRIVATE, $method(static_cast<$JCTree$JCExpressionArray*(JavacParser::*)()>(&JavacParser::newOdStack))},
	{"newOpStack", "()[Lcom/sun/tools/javac/parser/Tokens$Token;", nullptr, $PRIVATE, $method(static_cast<$Tokens$TokenArray*(JavacParser::*)()>(&JavacParser::newOpStack))},
	{"nextToken", "()V", nullptr, $PUBLIC},
	{"optFinal", "(J)Lcom/sun/tools/javac/tree/JCTree$JCModifiers;", nullptr, 0},
	{"optag", "(Lcom/sun/tools/javac/parser/Tokens$TokenKind;)Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $STATIC, $method(static_cast<$JCTree$Tag*(*)($Tokens$TokenKind*)>(&JavacParser::optag))},
	{"parExpression", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"parseCaseLabel", "()Lcom/sun/tools/javac/tree/JCTree$JCCaseLabel;", nullptr, $PRIVATE, $method(static_cast<$JCTree$JCCaseLabel*(JavacParser::*)()>(&JavacParser::parseCaseLabel))},
	{"parseCompilationUnit", "()Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;", nullptr, $PUBLIC},
	{"parseExpression", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"parsePattern", "(ILcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Z)Lcom/sun/tools/javac/tree/JCTree$JCPattern;", nullptr, $PUBLIC},
	{"parseSimpleStatement", "()Lcom/sun/tools/javac/tree/JCTree$JCStatement;", nullptr, $PUBLIC},
	{"parseStatement", "()Lcom/sun/tools/javac/tree/JCTree$JCStatement;", nullptr, $PUBLIC},
	{"parseStatementAsBlock", "()Lcom/sun/tools/javac/tree/JCTree$JCStatement;", nullptr, 0},
	{"parseType", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"parseType", "(Z)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"parseType", "(ZLcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", "(ZLcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", $PUBLIC},
	{"peekToken", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<Lcom/sun/tools/javac/parser/Tokens$TokenKind;>;)Z", $PROTECTED},
	{"peekToken", "(ILjava/util/function/Predicate;)Z", "(ILjava/util/function/Predicate<Lcom/sun/tools/javac/parser/Tokens$TokenKind;>;)Z", $PROTECTED},
	{"peekToken", "(Ljava/util/function/Predicate;Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<Lcom/sun/tools/javac/parser/Tokens$TokenKind;>;Ljava/util/function/Predicate<Lcom/sun/tools/javac/parser/Tokens$TokenKind;>;)Z", $PROTECTED},
	{"peekToken", "(ILjava/util/function/Predicate;Ljava/util/function/Predicate;)Z", "(ILjava/util/function/Predicate<Lcom/sun/tools/javac/parser/Tokens$TokenKind;>;Ljava/util/function/Predicate<Lcom/sun/tools/javac/parser/Tokens$TokenKind;>;)Z", $PROTECTED},
	{"peekToken", "(Ljava/util/function/Predicate;Ljava/util/function/Predicate;Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<Lcom/sun/tools/javac/parser/Tokens$TokenKind;>;Ljava/util/function/Predicate<Lcom/sun/tools/javac/parser/Tokens$TokenKind;>;Ljava/util/function/Predicate<Lcom/sun/tools/javac/parser/Tokens$TokenKind;>;)Z", $PROTECTED},
	{"peekToken", "(ILjava/util/function/Predicate;Ljava/util/function/Predicate;Ljava/util/function/Predicate;)Z", "(ILjava/util/function/Predicate<Lcom/sun/tools/javac/parser/Tokens$TokenKind;>;Ljava/util/function/Predicate<Lcom/sun/tools/javac/parser/Tokens$TokenKind;>;Ljava/util/function/Predicate<Lcom/sun/tools/javac/parser/Tokens$TokenKind;>;)Z", $PROTECTED},
	{"peekToken", "([Ljava/util/function/Predicate;)Z", "([Ljava/util/function/Predicate<Lcom/sun/tools/javac/parser/Tokens$TokenKind;>;)Z", $PROTECTED | $TRANSIENT},
	{"peekToken", "(I[Ljava/util/function/Predicate;)Z", "(I[Ljava/util/function/Predicate<Lcom/sun/tools/javac/parser/Tokens$TokenKind;>;)Z", $PROTECTED | $TRANSIENT},
	{"permitsClause", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Ljava/lang/String;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Ljava/lang/String;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", 0},
	{"prec", "(Lcom/sun/tools/javac/parser/Tokens$TokenKind;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($Tokens$TokenKind*)>(&JavacParser::prec))},
	{"qualident", "(Z)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"qualidentList", "(Z)Lcom/sun/tools/javac/util/List;", "(Z)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", 0},
	{"recordDeclaration", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/parser/Tokens$Comment;)Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;", nullptr, $PROTECTED},
	{"reportSyntaxError", "(ILcom/sun/tools/javac/util/JCDiagnostic$Error;)V", nullptr, $PROTECTED},
	{"reportSyntaxError", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic$Error;)V", nullptr, $PROTECTED},
	{"resource", "()Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PROTECTED},
	{"resources", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;", 0},
	{"restrictedTypeName", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Z)Lcom/sun/tools/javac/util/Name;", nullptr, 0},
	{"restrictedTypeNameStartingAtSource", "(Lcom/sun/tools/javac/util/Name;IZ)Lcom/sun/tools/javac/code/Source;", nullptr, 0},
	{"selectExprMode", "()V", nullptr, $PROTECTED},
	{"selectTypeMode", "()V", nullptr, $PROTECTED},
	{"setErrorEndPos", "(I)V", nullptr, $PROTECTED},
	{"skip", "(ZZZZ)V", nullptr, $PROTECTED},
	{"skipAnnotation", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(JavacParser::*)(int32_t)>(&JavacParser::skipAnnotation))},
	{"storeEnd", "(Lcom/sun/tools/javac/tree/JCTree;I)V", nullptr, $PROTECTED},
	{"stringLiteral", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree$JCLiteral;", nullptr, $PRIVATE, $method(static_cast<$JCTree$JCLiteral*(JavacParser::*)($JCTree*)>(&JavacParser::stringLiteral))},
	{"strval", "(Lcom/sun/tools/javac/util/Name;)Ljava/lang/String;", nullptr, 0},
	{"superSuffix", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", 0},
	{"switchBlockStatementGroup", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCase;>;", $PROTECTED},
	{"switchBlockStatementGroups", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCase;>;", 0},
	{"switchExpressionStatementGroup", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCase;>;", $PRIVATE, $method(static_cast<$List*(JavacParser::*)()>(&JavacParser::switchExpressionStatementGroup))},
	{"syntaxError", "(ILcom/sun/tools/javac/util/JCDiagnostic$Error;)Lcom/sun/tools/javac/tree/JCTree$JCErroneous;", nullptr, $PROTECTED},
	{"syntaxError", "(ILcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/JCDiagnostic$Error;)Lcom/sun/tools/javac/tree/JCTree$JCErroneous;", "(ILcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;Lcom/sun/tools/javac/util/JCDiagnostic$Error;)Lcom/sun/tools/javac/tree/JCTree$JCErroneous;", $PROTECTED},
	{"term", "(I)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PROTECTED},
	{"term", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"term1", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"term1Rest", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"term2", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"term2Rest", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;I)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"term3", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PROTECTED},
	{"term3Rest", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", 0},
	{"termRest", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"to", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree;", "<T:Lcom/sun/tools/javac/tree/JCTree;>(TT;)TT;", $PROTECTED},
	{"toP", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree;", "<T:Lcom/sun/tools/javac/tree/JCTree;>(TT;)TT;", $PROTECTED},
	{"token", "()Lcom/sun/tools/javac/parser/Tokens$Token;", nullptr, $PUBLIC},
	{"typeAnnotationsOpt", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;", 0},
	{"typeArgument", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"typeArguments", "(Z)Lcom/sun/tools/javac/util/List;", "(Z)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", 0},
	{"typeArguments", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Z)Lcom/sun/tools/javac/tree/JCTree$JCTypeApply;", nullptr, 0},
	{"typeArgumentsOpt", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"typeArgumentsOpt", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", 0},
	{"typeArgumentsOpt", "(I)Lcom/sun/tools/javac/util/List;", "(I)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", 0},
	{"typeDeclaration", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/parser/Tokens$Comment;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, 0},
	{"typeList", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", 0},
	{"typeName", "()Lcom/sun/tools/javac/util/Name;", nullptr, 0},
	{"typeParameter", "()Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;", nullptr, 0},
	{"typeParametersOpt", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;>;", $PROTECTED},
	{"typetag", "(Lcom/sun/tools/javac/parser/Tokens$TokenKind;)Lcom/sun/tools/javac/code/TypeTag;", nullptr, $STATIC, $method(static_cast<$TypeTag*(*)($Tokens$TokenKind*)>(&JavacParser::typetag))},
	{"unannotatedType", "(Z)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"unoptag", "(Lcom/sun/tools/javac/parser/Tokens$TokenKind;)Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $STATIC, $method(static_cast<$JCTree$Tag*(*)($Tokens$TokenKind*)>(&JavacParser::unoptag))},
	{"variableDeclarator", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/tree/JCTree$JCExpression;ZLcom/sun/tools/javac/parser/Tokens$Comment;Z)Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;", nullptr, 0},
	{"variableDeclaratorId", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;", nullptr, 0},
	{"variableDeclaratorId", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/tree/JCTree$JCExpression;ZZ)Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;", nullptr, 0},
	{"variableDeclaratorRest", "(ILcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/Name;ZLcom/sun/tools/javac/parser/Tokens$Comment;ZZ)Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;", nullptr, 0},
	{"variableDeclarators", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/ListBuffer;Z)Lcom/sun/tools/javac/util/ListBuffer;", "<T:Lcom/sun/tools/javac/util/ListBuffer<-Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;>;>(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/tree/JCTree$JCExpression;TT;Z)TT;", $PUBLIC},
	{"variableDeclaratorsRest", "(ILcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/Name;ZLcom/sun/tools/javac/parser/Tokens$Comment;Lcom/sun/tools/javac/util/ListBuffer;Z)Lcom/sun/tools/javac/util/ListBuffer;", "<T:Lcom/sun/tools/javac/util/ListBuffer<-Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;>;>(ILcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/Name;ZLcom/sun/tools/javac/parser/Tokens$Comment;TT;Z)TT;", $PROTECTED},
	{"variableInitializer", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JavacParser_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.JavacParser$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.parser.JavacParser$AbstractEndPosTable", "com.sun.tools.javac.parser.JavacParser", "AbstractEndPosTable", $PROTECTED | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.parser.JavacParser$EmptyEndPosTable", "com.sun.tools.javac.parser.JavacParser", "EmptyEndPosTable", $PROTECTED | $STATIC},
	{"com.sun.tools.javac.parser.JavacParser$SimpleEndPosTable", "com.sun.tools.javac.parser.JavacParser", "SimpleEndPosTable", $PROTECTED | $STATIC},
	{"com.sun.tools.javac.parser.JavacParser$EnumeratorEstimate", "com.sun.tools.javac.parser.JavacParser", "EnumeratorEstimate", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.parser.JavacParser$PatternResult", "com.sun.tools.javac.parser.JavacParser", "PatternResult", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.parser.JavacParser$LambdaClassifier", "com.sun.tools.javac.parser.JavacParser", "LambdaClassifier", 0},
	{"com.sun.tools.javac.parser.JavacParser$LambdaParameterKind", "com.sun.tools.javac.parser.JavacParser", "LambdaParameterKind", $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.parser.JavacParser$ParensResult", "com.sun.tools.javac.parser.JavacParser", "ParensResult", $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.parser.JavacParser$BasicErrorRecoveryAction", "com.sun.tools.javac.parser.JavacParser", "BasicErrorRecoveryAction", $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.tools.javac.parser.JavacParser$ErrorRecoveryAction", "com.sun.tools.javac.parser.JavacParser", "ErrorRecoveryAction", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JavacParser_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.parser.JavacParser",
	"java.lang.Object",
	"com.sun.tools.javac.parser.Parser",
	_JavacParser_FieldInfo_,
	_JavacParser_MethodInfo_,
	nullptr,
	nullptr,
	_JavacParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.JavacParser$1,com.sun.tools.javac.parser.JavacParser$AbstractEndPosTable,com.sun.tools.javac.parser.JavacParser$EmptyEndPosTable,com.sun.tools.javac.parser.JavacParser$SimpleEndPosTable,com.sun.tools.javac.parser.JavacParser$EnumeratorEstimate,com.sun.tools.javac.parser.JavacParser$PatternResult,com.sun.tools.javac.parser.JavacParser$LambdaClassifier,com.sun.tools.javac.parser.JavacParser$LambdaParameterKind,com.sun.tools.javac.parser.JavacParser$ParensResult,com.sun.tools.javac.parser.JavacParser$BasicErrorRecoveryAction,com.sun.tools.javac.parser.JavacParser$BasicErrorRecoveryAction$2,com.sun.tools.javac.parser.JavacParser$BasicErrorRecoveryAction$1,com.sun.tools.javac.parser.JavacParser$ErrorRecoveryAction"
};

$Object* allocate$JavacParser($Class* clazz) {
	return $of($alloc(JavacParser));
}

bool JavacParser::$assertionsDisabled = false;
$JCDiagnostic$FragmentArray2* JavacParser::decisionTable = nullptr;

void JavacParser::init$($ParserFactory* fac, $Lexer* S, bool keepDocComments, bool keepLineMap, bool keepEndPositions) {
	JavacParser::init$(fac, S, keepDocComments, keepLineMap, keepEndPositions, false);
}

void JavacParser::init$($ParserFactory* fac, $Lexer* S, bool keepDocComments, bool keepLineMap, bool keepEndPositions, bool parseModuleInfo) {
	$set(this, typeAnnotationsPushedBack, $List::nil());
	this->permitTypeAnnotationsPushBack = false;
	this->mode = 0;
	this->lastmode = 0;
	this->errorPos = $Position::NOPOS;
	this->count = 0;
	$set(this, odStackSupply, $new($ArrayList));
	$set(this, opStackSupply, $new($ArrayList));
	$set(this, LAX_IDENTIFIER, static_cast<$Predicate*>($new(JavacParser$$Lambda$lambda$new$3)));
	$set(this, S, S);
	nextToken();
	$set(this, F, $nc(fac)->F);
	$set(this, log, fac->log);
	$set(this, names, fac->names);
	$set(this, source, fac->source);
	$set(this, preview, fac->preview);
	this->allowStringFolding = $nc(fac->options)->getBoolean("allowStringFolding"_s, true);
	this->keepDocComments = keepDocComments;
	this->parseModuleInfo = parseModuleInfo;
	$set(this, docComments, newDocCommentTable(keepDocComments, fac));
	this->keepLineMap = keepLineMap;
	$set(this, errorTree, $nc(this->F)->Erroneous());
	$set(this, endPosTable, newEndPosTable(keepEndPositions));
	$init($Source$Feature);
	this->allowYieldStatement = $Source$Feature::SWITCH_EXPRESSION->allowedInSource(this->source);
	this->allowRecords = $Source$Feature::RECORDS->allowedInSource(this->source);
	this->allowSealedTypes = $Source$Feature::SEALED_CLASSES->allowedInSource(this->source);
}

$JavacParser$AbstractEndPosTable* JavacParser::newEndPosTable(bool keepEndPositions) {
	return keepEndPositions ? static_cast<$JavacParser$AbstractEndPosTable*>($new($JavacParser$SimpleEndPosTable, this)) : static_cast<$JavacParser$AbstractEndPosTable*>($new($JavacParser$EmptyEndPosTable, this));
}

$DocCommentTable* JavacParser::newDocCommentTable(bool keepDocComments, $ParserFactory* fac) {
	return keepDocComments ? static_cast<$DocCommentTable*>($new($LazyDocCommentTable, fac)) : ($DocCommentTable*)nullptr;
}

void JavacParser::selectExprMode() {
	this->mode = ((int32_t)(this->mode & (uint32_t)JavacParser::NOLAMBDA)) | JavacParser::EXPR;
}

void JavacParser::selectTypeMode() {
	this->mode = ((int32_t)(this->mode & (uint32_t)JavacParser::NOLAMBDA)) | JavacParser::TYPE;
}

$Tokens$Token* JavacParser::token() {
	return this->token$;
}

void JavacParser::nextToken() {
	$nc(this->S)->nextToken();
	$set(this, token$, $nc(this->S)->token());
}

bool JavacParser::peekToken($Predicate* tk) {
	return peekToken(0, tk);
}

bool JavacParser::peekToken(int32_t lookahead, $Predicate* tk) {
	return $nc(tk)->test($nc($($nc(this->S)->token(lookahead + 1)))->kind);
}

bool JavacParser::peekToken($Predicate* tk1, $Predicate* tk2) {
	return peekToken(0, tk1, tk2);
}

bool JavacParser::peekToken(int32_t lookahead, $Predicate* tk1, $Predicate* tk2) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(tk1)->test($nc($($nc(this->S)->token(lookahead + 1)))->kind);
	return var$0 && $nc(tk2)->test($nc($($nc(this->S)->token(lookahead + 2)))->kind);
}

bool JavacParser::peekToken($Predicate* tk1, $Predicate* tk2, $Predicate* tk3) {
	return peekToken(0, tk1, tk2, tk3);
}

bool JavacParser::peekToken(int32_t lookahead, $Predicate* tk1, $Predicate* tk2, $Predicate* tk3) {
	$useLocalCurrentObjectStackCache();
	bool var$1 = $nc(tk1)->test($nc($($nc(this->S)->token(lookahead + 1)))->kind);
	bool var$0 = var$1 && $nc(tk2)->test($nc($($nc(this->S)->token(lookahead + 2)))->kind);
	return var$0 && $nc(tk3)->test($nc($($nc(this->S)->token(lookahead + 3)))->kind);
}

bool JavacParser::peekToken($PredicateArray* kinds) {
	return peekToken(0, kinds);
}

bool JavacParser::peekToken(int32_t lookahead, $PredicateArray* kinds) {
	$useLocalCurrentObjectStackCache();
	{
		$var($PredicateArray, arr$, kinds);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Predicate, kind, arr$->get(i$));
			{
				if (!$nc(kind)->test($nc($($nc(this->S)->token(++lookahead)))->kind)) {
					return false;
				}
			}
		}
	}
	return true;
}

void JavacParser::skip(bool stopAtImport, bool stopAtMemberDecl, bool stopAtIdentifier, bool stopAtStatement) {
	while (true) {
		$init($JavacParser$1);
		switch ($nc($JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->get(($nc(this->token$)->kind)->ordinal())) {
		case 1:
			{
				nextToken();
				return;
			}
		case 2:
			{}
		case 3:
			{}
		case 4:
			{}
		case 5:
			{}
		case 6:
			{}
		case 7:
			{}
		case 8:
			{}
		case 9:
			{
				return;
			}
		case 10:
			{
				if (stopAtImport) {
					return;
				}
				break;
			}
		case 11:
			{}
		case 12:
			{}
		case 13:
			{}
		case 14:
			{}
		case 15:
			{}
		case 16:
			{}
		case 17:
			{}
		case 18:
			{}
		case 19:
			{}
		case 20:
			{}
		case 21:
			{}
		case 22:
			{}
		case 23:
			{}
		case 24:
			{}
		case 25:
			{}
		case 26:
			{}
		case 27:
			{}
		case 28:
			{}
		case 29:
			{}
		case 30:
			{
				if (stopAtMemberDecl) {
					return;
				}
				break;
			}
		case 31:
			{}
		case 32:
			{
				if (stopAtIdentifier) {
					return;
				}
				break;
			}
		case 33:
			{}
		case 34:
			{}
		case 35:
			{}
		case 36:
			{}
		case 37:
			{}
		case 38:
			{}
		case 39:
			{}
		case 40:
			{}
		case 41:
			{}
		case 42:
			{}
		case 43:
			{}
		case 44:
			{}
		case 45:
			{}
		case 46:
			{}
		case 47:
			{}
		case 48:
			{}
		case 49:
			{}
		case 50:
			{
				if (stopAtStatement) {
					return;
				}
				break;
			}
		case 51:
			{
				if (stopAtStatement) {
					return;
				}
				break;
			}
		}
		nextToken();
	}
}

$JCTree$JCErroneous* JavacParser::syntaxError(int32_t pos, $JCDiagnostic$Error* errorKey) {
	return syntaxError(pos, $($List::nil()), errorKey);
}

$JCTree$JCErroneous* JavacParser::syntaxError(int32_t pos, $List* errs, $JCDiagnostic$Error* errorKey) {
	$useLocalCurrentObjectStackCache();
	setErrorEndPos(pos);
	$var($JCTree$JCErroneous, err, $nc($($nc(this->F)->at(pos)))->Erroneous(errs));
	reportSyntaxError(static_cast<$JCDiagnostic$DiagnosticPosition*>(err), errorKey);
	if (errs != nullptr) {
		$var($JCTree, last, $cast($JCTree, errs->last()));
		if (last != nullptr) {
			storeEnd(last, pos);
		}
	}
	return $cast($JCTree$JCErroneous, toP(err));
}

void JavacParser::reportSyntaxError(int32_t pos, $JCDiagnostic$Error* errorKey) {
	$var($JCDiagnostic$DiagnosticPosition, diag, $new($JCDiagnostic$SimpleDiagnosticPosition, pos));
	reportSyntaxError(diag, errorKey);
}

void JavacParser::reportSyntaxError($JCDiagnostic$DiagnosticPosition* diagPos, $JCDiagnostic$Error* errorKey) {
	int32_t pos = $nc(diagPos)->getPreferredPosition();
	if (pos > $nc(this->S)->errPos() || pos == $Position::NOPOS) {
		$init($Tokens$TokenKind);
		if ($nc(this->token$)->kind == $Tokens$TokenKind::EOF) {
			$init($JCDiagnostic$DiagnosticFlag);
			$init($CompilerProperties$Errors);
			$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::SYNTAX, diagPos, $CompilerProperties$Errors::PrematureEof);
		} else {
			$init($JCDiagnostic$DiagnosticFlag);
			$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::SYNTAX, diagPos, errorKey);
		}
	}
	$nc(this->S)->errPos(pos);
	$init($Tokens$TokenKind);
	if ($nc(this->token$)->pos == this->errorPos && $nc(this->token$)->kind != $Tokens$TokenKind::EOF) {
		$Assert::check(this->count++ < JavacParser::RECOVERY_THRESHOLD);
	} else {
		this->count = 0;
		this->errorPos = $nc(this->token$)->pos;
	}
}

void JavacParser::accept($Tokens$TokenKind* tk) {
	accept(tk, static_cast<$Function*>($$new(JavacParser$$Lambda$Expected$1)));
}

void JavacParser::accept($Tokens$TokenKind* tk, $Function* errorProvider) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->token$)->kind == tk) {
		nextToken();
	} else {
		setErrorEndPos($nc(this->token$)->pos);
		int32_t var$0 = $nc($($nc(this->S)->prevToken()))->endPos;
		reportSyntaxError(var$0, $cast($JCDiagnostic$Error, $($nc(errorProvider)->apply(tk))));
	}
}

$JCTree$JCExpression* JavacParser::illegal(int32_t pos) {
	setErrorEndPos(pos);
	if (((int32_t)(this->mode & (uint32_t)JavacParser::EXPR)) != 0) {
		$init($CompilerProperties$Errors);
		return syntaxError(pos, $CompilerProperties$Errors::IllegalStartOfExpr);
	} else {
		$init($CompilerProperties$Errors);
		return syntaxError(pos, $CompilerProperties$Errors::IllegalStartOfType);
	}
}

$JCTree$JCExpression* JavacParser::illegal() {
	return illegal($nc(this->token$)->pos);
}

void JavacParser::checkNoMods(int64_t mods) {
	checkNoMods($nc(this->token$)->pos, mods);
}

void JavacParser::checkNoMods(int32_t pos, int64_t mods) {
	$useLocalCurrentObjectStackCache();
	if (mods != 0) {
		int64_t lowestMod = (int64_t)(mods & (uint64_t)-mods);
		$init($JCDiagnostic$DiagnosticFlag);
		$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::SYNTAX, pos, $($CompilerProperties$Errors::ModNotAllowedHere($($Flags::asFlagSet(lowestMod)))));
	}
}

void JavacParser::attach($JCTree* tree, $Tokens$Comment* dc) {
	if (this->keepDocComments && dc != nullptr) {
		$nc(this->docComments)->putComment(tree, dc);
	}
}

void JavacParser::setErrorEndPos(int32_t errPos) {
	$nc(this->endPosTable)->setErrorEndPos(errPos);
}

void JavacParser::storeEnd($JCTree* tree, int32_t endpos) {
	$nc(this->endPosTable)->storeEnd(tree, endpos);
}

$JCTree* JavacParser::to($JCTree* t) {
	return $nc(this->endPosTable)->to(t);
}

$JCTree* JavacParser::toP($JCTree* t) {
	return $nc(this->endPosTable)->toP(t);
}

int32_t JavacParser::getStartPos($JCTree* tree) {
	return $TreeInfo::getStartPos(tree);
}

int32_t JavacParser::getEndPos($JCTree* tree) {
	return $nc(this->endPosTable)->getEndPos(tree);
}

$Name* JavacParser::ident() {
	return ident(false);
}

$Name* JavacParser::ident(bool allowClass) {
	$useLocalCurrentObjectStackCache();
	$init($Tokens$TokenKind);
	if ($nc(this->token$)->kind == $Tokens$TokenKind::IDENTIFIER) {
		$var($Name, name, $nc(this->token$)->name());
		nextToken();
		return name;
	} else {
		if ($nc(this->token$)->kind == $Tokens$TokenKind::ASSERT) {
			$init($JCDiagnostic$DiagnosticFlag);
			$init($CompilerProperties$Errors);
			$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::SYNTAX, $nc(this->token$)->pos, $CompilerProperties$Errors::AssertAsIdentifier);
			nextToken();
			return $nc(this->names)->error;
		} else {
			if ($nc(this->token$)->kind == $Tokens$TokenKind::ENUM) {
				$init($JCDiagnostic$DiagnosticFlag);
				$init($CompilerProperties$Errors);
				$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::SYNTAX, $nc(this->token$)->pos, $CompilerProperties$Errors::EnumAsIdentifier);
				nextToken();
				return $nc(this->names)->error;
			} else {
				if ($nc(this->token$)->kind == $Tokens$TokenKind::THIS) {
					if (this->allowThisIdent) {
						$init($Source$Feature);
						checkSourceLevel($Source$Feature::TYPE_ANNOTATIONS);
						$var($Name, name, $nc(this->token$)->name());
						nextToken();
						return name;
					} else {
						$init($JCDiagnostic$DiagnosticFlag);
						$init($CompilerProperties$Errors);
						$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::SYNTAX, $nc(this->token$)->pos, $CompilerProperties$Errors::ThisAsIdentifier);
						nextToken();
						return $nc(this->names)->error;
					}
				} else {
					if ($nc(this->token$)->kind == $Tokens$TokenKind::UNDERSCORE) {
						$init($Source$Feature);
						if ($Source$Feature::UNDERSCORE_IDENTIFIER->allowedInSource(this->source)) {
							$init($CompilerProperties$Warnings);
							$nc(this->log)->warning($nc(this->token$)->pos, $CompilerProperties$Warnings::UnderscoreAsIdentifier);
						} else {
							$init($JCDiagnostic$DiagnosticFlag);
							$init($CompilerProperties$Errors);
							$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::SYNTAX, $nc(this->token$)->pos, $CompilerProperties$Errors::UnderscoreAsIdentifier);
						}
						$var($Name, name, $nc(this->token$)->name());
						nextToken();
						return name;
					} else {
						accept($Tokens$TokenKind::IDENTIFIER);
						if (allowClass && $nc(this->token$)->kind == $Tokens$TokenKind::CLASS) {
							nextToken();
							return $nc(this->names)->_class;
						}
						return $nc(this->names)->error;
					}
				}
			}
		}
	}
}

$JCTree$JCExpression* JavacParser::qualident(bool allowAnnos) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCExpression, t, $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at($nc(this->token$)->pos)))->Ident($(ident()))))));
	$init($Tokens$TokenKind);
	while ($nc(this->token$)->kind == $Tokens$TokenKind::DOT) {
		int32_t pos = $nc(this->token$)->pos;
		nextToken();
		$var($List, tyannos, nullptr);
		if (allowAnnos) {
			$assign(tyannos, typeAnnotationsOpt());
		}
		$assign(t, $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at(pos)))->Select(t, $(ident()))))));
		if (tyannos != nullptr && tyannos->nonEmpty()) {
			$assign(t, $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at($nc(($cast($JCTree$JCAnnotation, tyannos->head)))->pos$)))->AnnotatedType(tyannos, t)))));
		}
	}
	return t;
}

$JCTree$JCExpression* JavacParser::literal($Name* prefix) {
	return literal(prefix, $nc(this->token$)->pos);
}

$JCTree$JCExpression* JavacParser::literal($Name* prefix, int32_t pos) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCExpression, t, this->errorTree);
	$init($JavacParser$1);
	switch ($nc($JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->get(($nc(this->token$)->kind)->ordinal())) {
	case 52:
		{
			try {
				$init($TypeTag);
				$var($String, var$0, strval(prefix));
				$assign(t, $nc($($nc(this->F)->at(pos)))->Literal($TypeTag::INT, $($Integer::valueOf($Convert::string2int(var$0, $nc(this->token$)->radix())))));
			} catch ($NumberFormatException& ex) {
				$init($JCDiagnostic$DiagnosticFlag);
				$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::SYNTAX, $nc(this->token$)->pos, $($CompilerProperties$Errors::IntNumberTooLarge($(strval(prefix)))));
			}
			break;
		}
	case 53:
		{
			try {
				$init($TypeTag);
				$var($String, var$1, strval(prefix));
				$assign(t, $nc($($nc(this->F)->at(pos)))->Literal($TypeTag::LONG, $($Long::valueOf($Convert::string2long(var$1, $nc(this->token$)->radix())))));
			} catch ($NumberFormatException& ex) {
				$init($JCDiagnostic$DiagnosticFlag);
				$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::SYNTAX, $nc(this->token$)->pos, $($CompilerProperties$Errors::IntNumberTooLarge($(strval(prefix)))));
			}
			break;
		}
	case 54:
		{
			{
				$var($String, proper, $nc(this->token$)->radix() == 16 ? ($str({"0x"_s, $($nc(this->token$)->stringVal())})) : $nc(this->token$)->stringVal());
				$var($Float, n, nullptr);
				try {
					$assign(n, $Float::valueOf(proper));
				} catch ($NumberFormatException& ex) {
					$init($Float);
					$assign(n, $Float::valueOf($Float::NaN));
				}
				bool var$2 = $nc(n)->floatValue() == 0.0f;
				if (var$2 && !isZero(proper)) {
					$init($JCDiagnostic$DiagnosticFlag);
					$init($CompilerProperties$Errors);
					$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::SYNTAX, $nc(this->token$)->pos, $CompilerProperties$Errors::FpNumberTooSmall);
				} else {
					if (n->floatValue() == $Float::POSITIVE_INFINITY) {
						$init($JCDiagnostic$DiagnosticFlag);
						$init($CompilerProperties$Errors);
						$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::SYNTAX, $nc(this->token$)->pos, $CompilerProperties$Errors::FpNumberTooLarge);
					} else {
						$init($TypeTag);
						$assign(t, $nc($($nc(this->F)->at(pos)))->Literal($TypeTag::FLOAT, n));
					}
				}
				break;
			}
		}
	case 55:
		{
			{
				$var($String, proper, $nc(this->token$)->radix() == 16 ? ($str({"0x"_s, $($nc(this->token$)->stringVal())})) : $nc(this->token$)->stringVal());
				$var($Double, n, nullptr);
				try {
					$assign(n, $Double::valueOf(proper));
				} catch ($NumberFormatException& ex) {
					$init($Double);
					$assign(n, $Double::valueOf($Double::NaN));
				}
				bool var$3 = $nc(n)->doubleValue() == 0.0;
				if (var$3 && !isZero(proper)) {
					$init($JCDiagnostic$DiagnosticFlag);
					$init($CompilerProperties$Errors);
					$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::SYNTAX, $nc(this->token$)->pos, $CompilerProperties$Errors::FpNumberTooSmall);
				} else {
					if (n->doubleValue() == $Double::POSITIVE_INFINITY) {
						$init($JCDiagnostic$DiagnosticFlag);
						$init($CompilerProperties$Errors);
						$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::SYNTAX, $nc(this->token$)->pos, $CompilerProperties$Errors::FpNumberTooLarge);
					} else {
						$init($TypeTag);
						$assign(t, $nc($($nc(this->F)->at(pos)))->Literal($TypeTag::DOUBLE, n));
					}
				}
				break;
			}
		}
	case 56:
		{
			$init($TypeTag);
			$assign(t, $nc($($nc(this->F)->at(pos)))->Literal($TypeTag::CHAR, $($Integer::valueOf($nc($($nc(this->token$)->stringVal()))->charAt(0) + 0))));
			break;
		}
	case 57:
		{
			$init($TypeTag);
			$assign(t, $nc($($nc(this->F)->at(pos)))->Literal($TypeTag::CLASS, $($nc(this->token$)->stringVal())));
			break;
		}
	case 58:
		{}
	case 59:
		{
			$init($TypeTag);
			$init($Tokens$TokenKind);
			$assign(t, $nc($($nc(this->F)->at(pos)))->Literal($TypeTag::BOOLEAN, $($Integer::valueOf(($nc(this->token$)->kind == $Tokens$TokenKind::TRUE ? 1 : 0)))));
			break;
		}
	case 60:
		{
			$init($TypeTag);
			$assign(t, $nc($($nc(this->F)->at(pos)))->Literal($TypeTag::BOT, nullptr));
			break;
		}
	default:
		{
			$Assert::error();
		}
	}
	if ($equals(t, this->errorTree)) {
		$assign(t, $nc($($nc(this->F)->at(pos)))->Erroneous());
	}
	storeEnd(t, $nc(this->token$)->endPos);
	nextToken();
	return t;
}

bool JavacParser::isZero($String* s) {
	$var($chars, cs, $nc(s)->toCharArray());
	int32_t base = ((cs->length > 1 && $Character::toLowerCase(cs->get(1)) == u'x') ? 16 : 10);
	int32_t i = ((base == 16) ? 2 : 0);
	while (i < cs->length && (cs->get(i) == u'0' || cs->get(i) == u'.')) {
		++i;
	}
	return !(i < cs->length && ($Character::digit(cs->get(i), base) > 0));
}

$String* JavacParser::strval($Name* prefix) {
	$var($String, s, $nc(this->token$)->stringVal());
	return $nc(prefix)->isEmpty() ? s : $str({prefix, s});
}

$JCTree$JCExpression* JavacParser::parseExpression() {
	return term(JavacParser::EXPR);
}

$JCTree$JCPattern* JavacParser::parsePattern(int32_t pos, $JCTree$JCModifiers* mods$renamed, $JCTree$JCExpression* parsedType, bool inInstanceOf) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCModifiers, mods, mods$renamed);
	$var($JCTree$JCPattern, pattern, nullptr);
	$init($Tokens$TokenKind);
	if ($nc(this->token$)->kind == $Tokens$TokenKind::LPAREN && parsedType == nullptr) {
		int32_t startPos = $nc(this->token$)->pos;
		accept($Tokens$TokenKind::LPAREN);
		$var($JCTree$JCPattern, p, parsePattern($nc(this->token$)->pos, nullptr, nullptr, false));
		accept($Tokens$TokenKind::RPAREN);
		$assign(pattern, $cast($JCTree$JCPattern, toP($($nc($($nc(this->F)->at(startPos)))->ParenthesizedPattern(p)))));
	} else {
		$assign(mods, mods != nullptr ? mods : optFinal(0));
		$var($JCTree$JCExpression, e, parsedType == nullptr ? term(JavacParser::TYPE | JavacParser::NOLAMBDA) : parsedType);
		$var($JCTree$JCVariableDecl, var, $cast($JCTree$JCVariableDecl, toP($($nc($($nc(this->F)->at($nc(this->token$)->pos)))->VarDef(mods, $(ident()), e, nullptr)))));
		$assign(pattern, $cast($JCTree$JCPattern, toP($($nc($($nc(this->F)->at(pos)))->BindingPattern(var)))));
	}
	if (!inInstanceOf && $nc(this->token$)->kind == $Tokens$TokenKind::AMPAMP) {
		$init($Source$Feature);
		checkSourceLevel($Source$Feature::PATTERN_SWITCH);
		nextToken();
		$var($JCTree$JCExpression, guard, term(JavacParser::EXPR | JavacParser::NOLAMBDA));
		$assign(pattern, $nc($($nc(this->F)->at(pos)))->GuardPattern(pattern, guard));
	}
	return pattern;
}

$JCTree$JCExpression* JavacParser::parseType() {
	return parseType(false);
}

$JCTree$JCExpression* JavacParser::parseType(bool allowVar) {
	$var($List, annotations, typeAnnotationsOpt());
	return parseType(allowVar, annotations);
}

$JCTree$JCExpression* JavacParser::parseType(bool allowVar, $List* annotations) {
	$var($JCTree$JCExpression, result, unannotatedType(allowVar));
	if ($nc(annotations)->nonEmpty()) {
		$assign(result, insertAnnotationsToMostInner(result, annotations, false));
	}
	return result;
}

$JCTree$JCExpression* JavacParser::unannotatedType(bool allowVar) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCExpression, result, term(JavacParser::TYPE));
	$var($Name, restrictedTypeName, this->restrictedTypeName(result, !allowVar));
	if (restrictedTypeName != nullptr && (!allowVar || restrictedTypeName != $nc(this->names)->var)) {
		syntaxError($nc(result)->pos$, $($CompilerProperties$Errors::RestrictedTypeNotAllowedHere(restrictedTypeName)));
	}
	return result;
}

$JCTree$JCExpression* JavacParser::term(int32_t newmode) {
	int32_t prevmode = this->mode;
	this->mode = newmode;
	$var($JCTree$JCExpression, t, term());
	this->lastmode = this->mode;
	this->mode = prevmode;
	return t;
}

$JCTree$JCExpression* JavacParser::term() {
	$var($JCTree$JCExpression, t, term1());
	bool var$0 = ((int32_t)(this->mode & (uint32_t)JavacParser::EXPR)) != 0;
	if (var$0) {
		$init($Tokens$TokenKind);
		bool var$1 = $nc(this->token$)->kind == $Tokens$TokenKind::EQ;
		if (!var$1) {
			bool var$2 = $Tokens$TokenKind::PLUSEQ->compareTo(static_cast<$Enum*>($nc(this->token$)->kind)) <= 0;
			var$1 = var$2 && $nc(this->token$)->kind->compareTo(static_cast<$Enum*>($Tokens$TokenKind::GTGTGTEQ)) <= 0;
		}
		var$0 = (var$1);
	}
	if (var$0) {
		return termRest(t);
	} else {
		return t;
	}
}

$JCTree$JCExpression* JavacParser::termRest($JCTree$JCExpression* t) {
	$useLocalCurrentObjectStackCache();
	$init($JavacParser$1);
	{
		int32_t pos = 0;
		$var($Tokens$TokenKind, tk, nullptr)
		$var($JCTree$JCExpression, t1, nullptr)
		switch ($nc($JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->get(($nc(this->token$)->kind)->ordinal())) {
		case 61:
			{
				{
					int32_t pos = $nc(this->token$)->pos;
					nextToken();
					selectExprMode();
					$var($JCTree$JCExpression, t1, term());
					return $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at(pos)))->Assign(t, t1))));
				}
			}
		case 62:
			{}
		case 63:
			{}
		case 64:
			{}
		case 65:
			{}
		case 66:
			{}
		case 67:
			{}
		case 68:
			{}
		case 69:
			{}
		case 70:
			{}
		case 71:
			{}
		case 72:
			{
				pos = $nc(this->token$)->pos;
				$assign(tk, $nc(this->token$)->kind);
				nextToken();
				selectExprMode();
				$assign(t1, term());
				return $nc($($nc(this->F)->at(pos)))->Assignop($(optag(tk)), t, t1);
			}
		default:
			{
				return t;
			}
		}
	}
}

$JCTree$JCExpression* JavacParser::term1() {
	$var($JCTree$JCExpression, t, term2());
	$init($Tokens$TokenKind);
	if (((int32_t)(this->mode & (uint32_t)JavacParser::EXPR)) != 0 && $nc(this->token$)->kind == $Tokens$TokenKind::QUES) {
		selectExprMode();
		return term1Rest(t);
	} else {
		return t;
	}
}

$JCTree$JCExpression* JavacParser::term1Rest($JCTree$JCExpression* t) {
	$useLocalCurrentObjectStackCache();
	$init($Tokens$TokenKind);
	if ($nc(this->token$)->kind == $Tokens$TokenKind::QUES) {
		int32_t pos = $nc(this->token$)->pos;
		nextToken();
		$var($JCTree$JCExpression, t1, term());
		accept($Tokens$TokenKind::COLON);
		$var($JCTree$JCExpression, t2, term1());
		return $nc($($nc(this->F)->at(pos)))->Conditional(t, t1, t2);
	} else {
		return t;
	}
}

$JCTree$JCExpression* JavacParser::term2() {
	$var($JCTree$JCExpression, t, term3());
	if (((int32_t)(this->mode & (uint32_t)JavacParser::EXPR)) != 0 && prec($nc(this->token$)->kind) >= $TreeInfo::orPrec) {
		selectExprMode();
		return term2Rest(t, $TreeInfo::orPrec);
	} else {
		return t;
	}
}

$JCTree$JCExpression* JavacParser::term2Rest($JCTree$JCExpression* t$renamed, int32_t minprec) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCExpression, t, t$renamed);
	$var($JCTree$JCExpressionArray, odStack, newOdStack());
	$var($Tokens$TokenArray, opStack, newOpStack());
	int32_t top = 0;
	$nc(odStack)->set(0, t);
	int32_t startPos = $nc(this->token$)->pos;
	$init($Tokens);
	$var($Tokens$Token, topOp, $Tokens::DUMMY);
	while (prec($nc(this->token$)->kind) >= minprec) {
		$nc(opStack)->set(top, topOp);
		$init($Tokens$TokenKind);
		if ($nc(this->token$)->kind == $Tokens$TokenKind::INSTANCEOF) {
			int32_t pos = $nc(this->token$)->pos;
			nextToken();
			$var($JCTree, pattern, nullptr);
			if ($nc(this->token$)->kind == $Tokens$TokenKind::LPAREN) {
				$init($Source$Feature);
				checkSourceLevel($nc(this->token$)->pos, $Source$Feature::PATTERN_SWITCH);
				$assign(pattern, parsePattern($nc(this->token$)->pos, nullptr, nullptr, true));
			} else {
				int32_t patternPos = $nc(this->token$)->pos;
				$var($JCTree$JCModifiers, mods, optFinal(0));
				int32_t typePos = $nc(this->token$)->pos;
				$var($JCTree$JCExpression, type, unannotatedType(false));
				if ($nc(this->token$)->kind == $Tokens$TokenKind::IDENTIFIER) {
					$init($Source$Feature);
					checkSourceLevel($nc(this->token$)->pos, $Source$Feature::PATTERN_MATCHING_IN_INSTANCEOF);
					$assign(pattern, parsePattern(patternPos, mods, type, true));
				} else {
					checkNoMods(typePos, (int64_t)($nc(mods)->flags & (uint64_t)(int64_t)~$Flags::DEPRECATED));
					if ($nc($nc(mods)->annotations)->nonEmpty()) {
						$init($Source$Feature);
						checkSourceLevel($nc(($cast($JCTree$JCAnnotation, $nc(mods->annotations)->head)))->pos$, $Source$Feature::TYPE_ANNOTATIONS);
						$var($List, typeAnnos, $nc(mods->annotations)->map(static_cast<$Function*>($$new(JavacParser$$Lambda$lambda$term2Rest$0$2, this))));
						$assign(type, insertAnnotationsToMostInner(type, typeAnnos, false));
					}
					$assign(pattern, type);
				}
			}
			odStack->set(top, $($nc($($nc(this->F)->at(pos)))->TypeTest(odStack->get(top), pattern)));
		} else {
			$assign(topOp, this->token$);
			nextToken();
			++top;
			odStack->set(top, $(term3()));
		}
		while (true) {
			bool var$0 = top > 0;
			if (var$0) {
				int32_t var$1 = prec($nc(topOp)->kind);
				var$0 = var$1 >= prec($nc(this->token$)->kind);
			}
			if (!(var$0)) {
				break;
			}
			{
				odStack->set(top - 1, $($nc($($nc(this->F)->at($nc(topOp)->pos)))->Binary($(optag($nc(topOp)->kind)), odStack->get(top - 1), odStack->get(top))));
				--top;
				$assign(topOp, opStack->get(top));
			}
		}
	}
	$Assert::check(top == 0);
	$assign(t, odStack->get(0));
	$init($JCTree$Tag);
	if ($nc(t)->hasTag($JCTree$Tag::PLUS)) {
		$assign(t, foldStrings(t));
	}
	$nc(this->odStackSupply)->add(odStack);
	$nc(this->opStackSupply)->add(opStack);
	return t;
}

$JCTree$JCExpression* JavacParser::foldStrings($JCTree$JCExpression* tree) {
	$useLocalCurrentObjectStackCache();
	if (!this->allowStringFolding) {
		return tree;
	}
	$var($ListBuffer, opStack, $new($ListBuffer));
	$var($ListBuffer, litBuf, $new($ListBuffer));
	bool needsFolding = false;
	$var($JCTree$JCExpression, curr, tree);
	while (true) {
		$init($JCTree$Tag);
		if ($nc(curr)->hasTag($JCTree$Tag::PLUS)) {
			$var($JCTree$JCBinary, op, $cast($JCTree$JCBinary, curr));
			needsFolding |= foldIfNeeded(op->rhs, litBuf, opStack, false);
			$assign(curr, op->lhs);
		} else {
			needsFolding |= foldIfNeeded(curr, litBuf, opStack, true);
			break;
		}
	}
	if (needsFolding) {
		$var($List, ops, opStack->toList());
		$var($JCTree$JCExpression, res, $cast($JCTree$JCExpression, $nc(ops)->head));
		{
			$var($Iterator, i$, $nc(ops->tail)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JCTree$JCExpression, op, $cast($JCTree$JCExpression, i$->next()));
				{
					$init($Tokens$TokenKind);
					$assign(res, $nc($($nc(this->F)->at($nc(op)->getStartPosition())))->Binary($(optag($Tokens$TokenKind::PLUS)), res, op));
					storeEnd(res, getEndPos(op));
				}
			}
		}
		return res;
	} else {
		return tree;
	}
}

bool JavacParser::foldIfNeeded($JCTree$JCExpression* tree, $ListBuffer* litBuf, $ListBuffer* opStack, bool last) {
	$var($JCTree$JCLiteral, str, stringLiteral(tree));
	if (str != nullptr) {
		$nc(litBuf)->prepend(str);
		return last && merge(litBuf, opStack);
	} else {
		bool res = merge(litBuf, opStack);
		$nc(litBuf)->clear();
		$nc(opStack)->prepend(tree);
		return res;
	}
}

bool JavacParser::merge($ListBuffer* litBuf, $ListBuffer* opStack) {
	$useLocalCurrentObjectStackCache();
	if ($nc(litBuf)->isEmpty()) {
		return false;
	} else if (litBuf->size() == 1) {
		$nc(opStack)->prepend($cast($JCTree$JCExpression, $(litBuf->first())));
		return false;
	} else {
		$init($TypeTag);
		$var($JCTree$JCExpression, t, $nc($($nc(this->F)->at($nc(($cast($JCTree$JCLiteral, $(litBuf->first()))))->getStartPosition())))->Literal($TypeTag::CLASS, $($nc($($nc($(litBuf->stream()))->map(static_cast<$Function*>($$new(JavacParser$$Lambda$lambda$merge$1$3)))))->collect($($Collectors::joining())))));
		storeEnd(t, $nc(($cast($JCTree$JCLiteral, $(litBuf->last()))))->getEndPosition(this->endPosTable));
		$nc(opStack)->prepend(t);
		return true;
	}
}

$JCTree$JCLiteral* JavacParser::stringLiteral($JCTree* tree) {
	$init($JCTree$Tag);
	if ($nc(tree)->hasTag($JCTree$Tag::LITERAL)) {
		$var($JCTree$JCLiteral, lit, $cast($JCTree$JCLiteral, tree));
		$init($TypeTag);
		if (lit->typetag == $TypeTag::CLASS) {
			return lit;
		}
	}
	return nullptr;
}

$JCTree$JCExpressionArray* JavacParser::newOdStack() {
	if ($nc(this->odStackSupply)->isEmpty()) {
		return $new($JCTree$JCExpressionArray, JavacParser::infixPrecedenceLevels + 1);
	}
	return $cast($JCTree$JCExpressionArray, $nc(this->odStackSupply)->remove($nc(this->odStackSupply)->size() - 1));
}

$Tokens$TokenArray* JavacParser::newOpStack() {
	if ($nc(this->opStackSupply)->isEmpty()) {
		return $new($Tokens$TokenArray, JavacParser::infixPrecedenceLevels + 1);
	}
	return $cast($Tokens$TokenArray, $nc(this->opStackSupply)->remove($nc(this->opStackSupply)->size() - 1));
}

$JCTree$JCExpression* JavacParser::term3() {
	$useLocalCurrentObjectStackCache();
	int32_t pos = $nc(this->token$)->pos;
	$var($JCTree$JCExpression, t, nullptr);
	$var($List, typeArgs, typeArgumentsOpt(JavacParser::EXPR));
	$init($JavacParser$1);
	{
		$var($List, typeAnnos, nullptr)
		$var($JCTree$JCExpression, expr, nullptr)
		int32_t switchPos = 0;
		$var($JCTree$JCExpression, selector, nullptr)
		$var($ListBuffer, cases, nullptr)
		switch ($nc($JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->get(($nc(this->token$)->kind)->ordinal())) {
		case 77:
			{
				if (((int32_t)(this->mode & (uint32_t)JavacParser::TYPE)) != 0 && ((int32_t)(this->mode & (uint32_t)(JavacParser::TYPEARG | JavacParser::NOPARAMS))) == JavacParser::TYPEARG) {
					selectTypeMode();
					return typeArgument();
				} else {
					return illegal();
				}
			}
		case 78:
			{}
		case 79:
			{}
		case 80:
			{}
		case 81:
			{}
		case 82:
			{}
		case 83:
			{
				if (typeArgs == nullptr && ((int32_t)(this->mode & (uint32_t)JavacParser::EXPR)) != 0) {
					$Tokens$TokenKind* tk = $nc(this->token$)->kind;
					nextToken();
					selectExprMode();
					$init($Tokens$TokenKind);
					if (tk == $Tokens$TokenKind::SUB && ($nc(this->token$)->kind == $Tokens$TokenKind::INTLITERAL || $nc(this->token$)->kind == $Tokens$TokenKind::LONGLITERAL) && $nc(this->token$)->radix() == 10) {
						selectExprMode();
						$assign(t, literal($nc(this->names)->hyphen, pos));
					} else {
						$assign(t, term3());
						return $nc($($nc(this->F)->at(pos)))->Unary($(unoptag(tk)), t);
					}
				} else {
					return illegal();
				}
				break;
			}
		case 74:
			{
				if (typeArgs == nullptr && ((int32_t)(this->mode & (uint32_t)JavacParser::EXPR)) != 0) {
					$JavacParser$ParensResult* pres = analyzeParens();
					{
						int32_t pos1 = 0;
						$var($List, targets, nullptr)
						$var($JCTree$JCExpression, t1, nullptr)
						switch ($nc($JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$JavacParser$ParensResult)->get($nc((pres))->ordinal())) {
						case 1:
							{
								$init($Tokens$TokenKind);
								accept($Tokens$TokenKind::LPAREN);
								selectTypeMode();
								pos1 = pos;
								$assign(targets, $List::of($assign(t, parseType())));
								$init($Tokens$TokenKind);
								while ($nc(this->token$)->kind == $Tokens$TokenKind::AMP) {
									$init($Source$Feature);
									checkSourceLevel($Source$Feature::INTERSECTION_TYPES_IN_CAST);
									accept($Tokens$TokenKind::AMP);
									$assign(targets, $nc(targets)->prepend($(parseType())));
								}
								if ($nc(targets)->length() > 1) {
									$assign(t, $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at(pos1)))->TypeIntersection($(targets->reverse()))))));
								}
								$init($Tokens$TokenKind);
								accept($Tokens$TokenKind::RPAREN);
								selectExprMode();
								$assign(t1, term3());
								return $nc($($nc(this->F)->at(pos)))->TypeCast(static_cast<$JCTree*>(t), t1);
							}
						case 2:
							{}
						case 3:
							{
								$init($JavacParser$ParensResult);
								$assign(t, lambdaExpressionOrStatement(true, pres == $JavacParser$ParensResult::EXPLICIT_LAMBDA, pos));
								break;
							}
						default:
							{
								$init($Tokens$TokenKind);
								accept($Tokens$TokenKind::LPAREN);
								selectExprMode();
								$assign(t, termRest($(term1Rest($(term2Rest($(term3()), $TreeInfo::orPrec))))));
								$init($Tokens$TokenKind);
								accept($Tokens$TokenKind::RPAREN);
								$assign(t, $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at(pos)))->Parens(t)))));
								break;
							}
						}
					}
				} else {
					return illegal();
				}
				break;
			}
		case 48:
			{
				if (((int32_t)(this->mode & (uint32_t)JavacParser::EXPR)) != 0) {
					selectExprMode();
					$assign(t, $cast($JCTree$JCExpression, to($($nc($($nc(this->F)->at(pos)))->Ident($nc(this->names)->_this)))));
					nextToken();
					if (typeArgs == nullptr) {
						$assign(t, argumentsOpt(nullptr, t));
					} else {
						$assign(t, arguments(typeArgs, t));
					}
					$assign(typeArgs, nullptr);
				} else {
					return illegal();
				}
				break;
			}
		case 49:
			{
				if (((int32_t)(this->mode & (uint32_t)JavacParser::EXPR)) != 0) {
					selectExprMode();
					$assign(t, $cast($JCTree$JCExpression, to($($nc($($nc(this->F)->at(pos)))->Ident($nc(this->names)->_super)))));
					$assign(t, superSuffix(typeArgs, t));
					$assign(typeArgs, nullptr);
				} else {
					return illegal();
				}
				break;
			}
		case 52:
			{}
		case 53:
			{}
		case 54:
			{}
		case 55:
			{}
		case 56:
			{}
		case 57:
			{}
		case 58:
			{}
		case 59:
			{}
		case 60:
			{
				if (typeArgs == nullptr && ((int32_t)(this->mode & (uint32_t)JavacParser::EXPR)) != 0) {
					selectExprMode();
					$assign(t, literal($nc(this->names)->empty));
				} else {
					return illegal();
				}
				break;
			}
		case 50:
			{
				if (typeArgs != nullptr) {
					return illegal();
				}
				if (((int32_t)(this->mode & (uint32_t)JavacParser::EXPR)) != 0) {
					selectExprMode();
					nextToken();
					$init($Tokens$TokenKind);
					if ($nc(this->token$)->kind == $Tokens$TokenKind::LT) {
						$assign(typeArgs, typeArguments(false));
					}
					$assign(t, creator(pos, typeArgs));
					$assign(typeArgs, nullptr);
				} else {
					return illegal();
				}
				break;
			}
		case 5:
			{
				$assign(typeAnnos, typeAnnotationsOpt());
				if ($nc(typeAnnos)->isEmpty()) {
					$throwNew($AssertionError, $of("Expected type annotations, but found none!"_s));
				}
				$assign(expr, term3());
				if (((int32_t)(this->mode & (uint32_t)JavacParser::TYPE)) == 0) {
					switch ($nc($JavacParser$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(expr)->getTag())))->ordinal())) {
					case 1:
						{
							{
								$var($JCTree$JCMemberReference, mref, $cast($JCTree$JCMemberReference, expr));
								$set(mref, expr, $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at(pos)))->AnnotatedType(typeAnnos, mref->expr)))));
								$assign(t, mref);
								break;
							}
						}
					case 2:
						{
							{
								$var($JCTree$JCFieldAccess, sel, $cast($JCTree$JCFieldAccess, expr));
								if (sel->name != $nc(this->names)->_class) {
									return illegal();
								} else {
									$init($CompilerProperties$Errors);
									$nc(this->log)->error($nc(this->token$)->pos, $CompilerProperties$Errors::NoAnnotationsOnDotClass);
									return expr;
								}
							}
						}
					default:
						{
							return illegal($nc(($cast($JCTree$JCAnnotation, $nc(typeAnnos)->head)))->pos$);
						}
					}
				} else {
					$assign(t, insertAnnotationsToMostInner(expr, typeAnnos, false));
				}
				break;
			}
		case 31:
			{}
		case 32:
			{}
		case 51:
			{}
		case 9:
			{
				if (typeArgs != nullptr) {
					return illegal();
				}
				$init($Tokens$TokenKind);
				if (((int32_t)(this->mode & (uint32_t)JavacParser::EXPR)) != 0 && ((int32_t)(this->mode & (uint32_t)JavacParser::NOLAMBDA)) == 0 && peekToken(static_cast<$Predicate*>($Tokens$TokenKind::ARROW))) {
					$assign(t, lambdaExpressionOrStatement(false, false, pos));
				} else {
					$assign(t, $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at($nc(this->token$)->pos)))->Ident($(ident()))))));
					bool loop$break = false;
					while (true) {
						pos = $nc(this->token$)->pos;
						$var($List, annos, typeAnnotationsOpt());
						if (!$nc(annos)->isEmpty() && $nc(this->token$)->kind != $Tokens$TokenKind::LBRACKET && $nc(this->token$)->kind != $Tokens$TokenKind::ELLIPSIS) {
							return illegal($nc(($cast($JCTree$JCAnnotation, annos->head)))->pos$);
						}
						{
							int32_t oldmode = 0;
							$var($List, tyannos, nullptr)
							switch ($nc($JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->get(($nc(this->token$)->kind)->ordinal())) {
							case 73:
								{
									nextToken();
									if ($nc(this->token$)->kind == $Tokens$TokenKind::RBRACKET) {
										nextToken();
										$assign(t, bracketsOpt(t));
										$assign(t, $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at(pos)))->TypeArray(t)))));
										if ($nc(annos)->nonEmpty()) {
											$assign(t, $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at(pos)))->AnnotatedType(annos, t)))));
										}
										$assign(t, bracketsSuffix(t));
									} else {
										if (((int32_t)(this->mode & (uint32_t)JavacParser::EXPR)) != 0) {
											selectExprMode();
											$var($JCTree$JCExpression, t1, term());
											if (!$nc(annos)->isEmpty()) {
												$assign(t, illegal($nc(($cast($JCTree$JCAnnotation, annos->head)))->pos$));
											}
											$assign(t, $cast($JCTree$JCExpression, to($($nc($($nc(this->F)->at(pos)))->Indexed(t, t1)))));
										}
										accept($Tokens$TokenKind::RBRACKET);
									}
									loop$break = true;
									break;
								}
							case 74:
								{
									if (((int32_t)(this->mode & (uint32_t)JavacParser::EXPR)) != 0) {
										selectExprMode();
										$assign(t, arguments(typeArgs, t));
										if (!$nc(annos)->isEmpty()) {
											$assign(t, illegal($nc(($cast($JCTree$JCAnnotation, annos->head)))->pos$));
										}
										$assign(typeArgs, nullptr);
									}
									loop$break = true;
									break;
								}
							case 75:
								{
									nextToken();
									if ($nc(this->token$)->kind == $Tokens$TokenKind::IDENTIFIER && typeArgs != nullptr) {
										return illegal();
									}
									oldmode = this->mode;
									this->mode &= (uint32_t)~JavacParser::NOPARAMS;
									$assign(typeArgs, typeArgumentsOpt(JavacParser::EXPR));
									this->mode = oldmode;
									if (((int32_t)(this->mode & (uint32_t)JavacParser::EXPR)) != 0) {
										{
											int32_t pos1 = 0;
											switch ($nc($JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->get(($nc(this->token$)->kind)->ordinal())) {
											case 7:
												{
													if (typeArgs != nullptr) {
														return illegal();
													}
													selectExprMode();
													$assign(t, $cast($JCTree$JCExpression, to($($nc($($nc(this->F)->at(pos)))->Select(t, $nc(this->names)->_class)))));
													nextToken();
													loop$break = true;
													break;
												}
											case 48:
												{
													if (typeArgs != nullptr) {
														return illegal();
													}
													selectExprMode();
													$assign(t, $cast($JCTree$JCExpression, to($($nc($($nc(this->F)->at(pos)))->Select(t, $nc(this->names)->_this)))));
													nextToken();
													loop$break = true;
													break;
												}
											case 49:
												{
													selectExprMode();
													$assign(t, $cast($JCTree$JCExpression, to($($nc($($nc(this->F)->at(pos)))->Select(t, $nc(this->names)->_super)))));
													$assign(t, superSuffix(typeArgs, t));
													$assign(typeArgs, nullptr);
													loop$break = true;
													break;
												}
											case 50:
												{
													if (typeArgs != nullptr) {
														return illegal();
													}
													selectExprMode();
													pos1 = $nc(this->token$)->pos;
													nextToken();
													if ($nc(this->token$)->kind == $Tokens$TokenKind::LT) {
														$assign(typeArgs, typeArguments(false));
													}
													$assign(t, innerCreator(pos1, typeArgs, t));
													$assign(typeArgs, nullptr);
													loop$break = true;
													break;
												}
											}

											if (loop$break) {
												break;
											}
										}
									}
									$assign(tyannos, nullptr);
									if (((int32_t)(this->mode & (uint32_t)JavacParser::TYPE)) != 0 && $nc(this->token$)->kind == $Tokens$TokenKind::MONKEYS_AT) {
										$assign(tyannos, typeAnnotationsOpt());
									}
									$assign(t, $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at(pos)))->Select(t, $(ident()))))));
									if ($nc(this->token$)->pos <= $nc(this->endPosTable)->errorEndPos && $nc(this->token$)->kind == $Tokens$TokenKind::MONKEYS_AT) {
										if (typeArgs != nullptr) {
											illegal();
										}
										return $cast($JCTree$JCExpression, toP(t));
									}
									if (tyannos != nullptr && tyannos->nonEmpty()) {
										$assign(t, $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at($nc(($cast($JCTree$JCAnnotation, tyannos->head)))->pos$)))->AnnotatedType(tyannos, t)))));
									}
									break;
								}
							case 76:
								{
									if (this->permitTypeAnnotationsPushBack) {
										$set(this, typeAnnotationsPushedBack, annos);
									} else if ($nc(annos)->nonEmpty()) {
										illegal($nc(($cast($JCTree$JCAnnotation, annos->head)))->pos$);
									}
									loop$break = true;
									break;
								}
							case 21:
								{
									if (((int32_t)(this->mode & (uint32_t)JavacParser::TYPE)) == 0 && isUnboundMemberRef()) {
										int32_t pos1 = $nc(this->token$)->pos;
										accept($Tokens$TokenKind::LT);
										$var($ListBuffer, args, $new($ListBuffer));
										args->append($(typeArgument()));
										while ($nc(this->token$)->kind == $Tokens$TokenKind::COMMA) {
											nextToken();
											args->append($(typeArgument()));
										}
										accept($Tokens$TokenKind::GT);
										$assign(t, $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at(pos1)))->TypeApply(t, $(args->toList()))))));
										while ($nc(this->token$)->kind == $Tokens$TokenKind::DOT) {
											nextToken();
											selectTypeMode();
											$assign(t, $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at($nc(this->token$)->pos)))->Select(t, $(ident()))))));
											$assign(t, typeArgumentsOpt(t));
										}
										$assign(t, bracketsOpt(t));
										if ($nc(this->token$)->kind != $Tokens$TokenKind::COLCOL) {
											$assign(t, illegal());
										}
										selectExprMode();
										return term3Rest(t, typeArgs);
									}
									loop$break = true;
									break;
								}
							default:
								{
									loop$break = true;
									break;
								}
							}

							if (loop$break) {
								break;
							}						}
					}
				}
				if (typeArgs != nullptr) {
					illegal();
				}
				$assign(t, typeArgumentsOpt(t));
				break;
			}
		case 22:
			{}
		case 23:
			{}
		case 24:
			{}
		case 25:
			{}
		case 26:
			{}
		case 27:
			{}
		case 28:
			{}
		case 29:
			{
				if (typeArgs != nullptr) {
					illegal();
				}
				$assign(t, bracketsSuffix($(bracketsOpt($(basicType())))));
				break;
			}
		case 30:
			{
				if (typeArgs != nullptr) {
					illegal();
				}
				if (((int32_t)(this->mode & (uint32_t)JavacParser::EXPR)) != 0) {
					nextToken();
					$init($Tokens$TokenKind);
					if ($nc(this->token$)->kind == $Tokens$TokenKind::DOT) {
						$init($TypeTag);
						$var($JCTree$JCPrimitiveTypeTree, ti, $cast($JCTree$JCPrimitiveTypeTree, toP($($nc($($nc(this->F)->at(pos)))->TypeIdent($TypeTag::VOID)))));
						$assign(t, bracketsSuffix(ti));
					} else {
						return illegal(pos);
					}
				} else {
					$init($TypeTag);
					$var($JCTree$JCPrimitiveTypeTree, ti, $cast($JCTree$JCPrimitiveTypeTree, to($($nc($($nc(this->F)->at(pos)))->TypeIdent($TypeTag::VOID)))));
					nextToken();
					return ti;
				}
				break;
			}
		case 40:
			{
				$init($Source$Feature);
				checkSourceLevel($Source$Feature::SWITCH_EXPRESSION);
				this->allowYieldStatement = true;
				switchPos = $nc(this->token$)->pos;
				nextToken();
				$assign(selector, parExpression());
				$init($Tokens$TokenKind);
				accept($Tokens$TokenKind::LBRACE);
				$assign(cases, $new($ListBuffer));
				while (true) {
					pos = $nc(this->token$)->pos;
					{
						$var($JCTree$JCSwitchExpression, e, nullptr)
						switch ($nc($JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->get(($nc(this->token$)->kind)->ordinal())) {
						case 33:
							{}
						case 34:
							{
								$nc(cases)->appendList($(switchExpressionStatementGroup()));
								break;
							}
						case 12:
							{}
						case 6:
							{
								$assign(e, $cast($JCTree$JCSwitchExpression, to($($nc($($nc(this->F)->at(switchPos)))->SwitchExpression(selector, $($nc(cases)->toList()))))));
								$nc(e)->endpos = $nc(this->token$)->pos;
								$init($Tokens$TokenKind);
								accept($Tokens$TokenKind::RBRACE);
								return e;
							}
						default:
							{
								nextToken();
								$init($Tokens$TokenKind);
								syntaxError(pos, $($CompilerProperties$Errors::Expected3($Tokens$TokenKind::CASE, $Tokens$TokenKind::DEFAULT, $Tokens$TokenKind::RBRACE)));
							}
						}
					}
				}
			}
		default:
			{
				return illegal();
			}
		}
	}
	return term3Rest(t, typeArgs);
}

$List* JavacParser::switchExpressionStatementGroup() {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, caseExprs, $new($ListBuffer));
	int32_t casePos = $nc(this->token$)->pos;
	$var($ListBuffer, pats, $new($ListBuffer));
	$init($Tokens$TokenKind);
	if ($nc(this->token$)->kind == $Tokens$TokenKind::DEFAULT) {
		nextToken();
		pats->append($cast($JCTree$JCCaseLabel, $(toP($($nc($($nc(this->F)->at(casePos)))->DefaultCaseLabel())))));
	} else {
		accept($Tokens$TokenKind::CASE);
		while (true) {
			$var($JCTree$JCCaseLabel, label, parseCaseLabel());
			pats->append(label);
			if ($nc(this->token$)->kind != $Tokens$TokenKind::COMMA) {
				break;
			}
			$init($Source$Feature);
			checkSourceLevel($Source$Feature::SWITCH_MULTIPLE_CASE_LABELS);
			nextToken();
		}
	}
	$var($List, stats, nullptr);
	$var($JCTree, body, nullptr);
	$CaseTree$CaseKind* kind = nullptr;
	$init($JavacParser$1);
	switch ($nc($JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->get(($nc(this->token$)->kind)->ordinal())) {
	case 84:
		{
			$init($Source$Feature);
			checkSourceLevel($Source$Feature::SWITCH_RULE);
			nextToken();
			if ($nc(this->token$)->kind == $Tokens$TokenKind::THROW || $nc(this->token$)->kind == $Tokens$TokenKind::LBRACE) {
				$assign(stats, $List::of($(parseStatement())));
				$assign(body, $cast($JCTree, $nc(stats)->head));
				$init($JCTree$JCCase);
				kind = $JCTree$JCCase::RULE;
			} else {
				$var($JCTree$JCExpression, value, parseExpression());
				$assign(stats, $List::of($cast($JCTree$JCStatement, $(to($($nc($($nc(this->F)->at(static_cast<$JCDiagnostic$DiagnosticPosition*>(value))))->Yield(value)))))));
				$assign(body, value);
				$init($JCTree$JCCase);
				kind = $JCTree$JCCase::RULE;
				accept($Tokens$TokenKind::SEMI);
			}
			break;
		}
	default:
		{
			accept($Tokens$TokenKind::COLON, static_cast<$Function*>($$new(JavacParser$$Lambda$lambda$switchExpressionStatementGroup$2$4)));
			$assign(stats, blockStatements());
			$init($JCTree$JCCase);
			kind = $JCTree$JCCase::STATEMENT;
			break;
		}
	}
	caseExprs->append($cast($JCTree$JCCase, $(toP($($nc($($nc(this->F)->at(casePos)))->Case(kind, $(pats->toList()), stats, body))))));
	return caseExprs->toList();
}

$JCTree$JCExpression* JavacParser::term3Rest($JCTree$JCExpression* t$renamed, $List* typeArgs$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($List, typeArgs, typeArgs$renamed);
	$var($JCTree$JCExpression, t, t$renamed);
	if (typeArgs != nullptr) {
		illegal();
	}
	while (true) {
		int32_t pos1 = $nc(this->token$)->pos;
		$var($List, annos, typeAnnotationsOpt());
		$init($Tokens$TokenKind);
		if ($nc(this->token$)->kind == $Tokens$TokenKind::LBRACKET) {
			nextToken();
			if (((int32_t)(this->mode & (uint32_t)JavacParser::TYPE)) != 0) {
				int32_t oldmode = this->mode;
				selectTypeMode();
				if ($nc(this->token$)->kind == $Tokens$TokenKind::RBRACKET) {
					nextToken();
					$assign(t, bracketsOpt(t));
					$assign(t, $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at(pos1)))->TypeArray(t)))));
					if ($nc(this->token$)->kind == $Tokens$TokenKind::COLCOL) {
						selectExprMode();
						continue;
					}
					if ($nc(annos)->nonEmpty()) {
						$assign(t, $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at(pos1)))->AnnotatedType(annos, t)))));
					}
					return t;
				}
				this->mode = oldmode;
			}
			if (((int32_t)(this->mode & (uint32_t)JavacParser::EXPR)) != 0) {
				selectExprMode();
				$var($JCTree$JCExpression, t1, term());
				$assign(t, $cast($JCTree$JCExpression, to($($nc($($nc(this->F)->at(pos1)))->Indexed(t, t1)))));
			}
			accept($Tokens$TokenKind::RBRACKET);
		} else {
			if ($nc(this->token$)->kind == $Tokens$TokenKind::DOT) {
				nextToken();
				$assign(typeArgs, typeArgumentsOpt(JavacParser::EXPR));
				if ($nc(this->token$)->kind == $Tokens$TokenKind::SUPER && ((int32_t)(this->mode & (uint32_t)JavacParser::EXPR)) != 0) {
					selectExprMode();
					$assign(t, $cast($JCTree$JCExpression, to($($nc($($nc(this->F)->at(pos1)))->Select(t, $nc(this->names)->_super)))));
					nextToken();
					$assign(t, arguments(typeArgs, t));
					$assign(typeArgs, nullptr);
				} else {
					if ($nc(this->token$)->kind == $Tokens$TokenKind::NEW && ((int32_t)(this->mode & (uint32_t)JavacParser::EXPR)) != 0) {
						if (typeArgs != nullptr) {
							return illegal();
						}
						selectExprMode();
						int32_t pos2 = $nc(this->token$)->pos;
						nextToken();
						if ($nc(this->token$)->kind == $Tokens$TokenKind::LT) {
							$assign(typeArgs, typeArguments(false));
						}
						$assign(t, innerCreator(pos2, typeArgs, t));
						$assign(typeArgs, nullptr);
					} else {
						$var($List, tyannos, nullptr);
						if (((int32_t)(this->mode & (uint32_t)JavacParser::TYPE)) != 0 && $nc(this->token$)->kind == $Tokens$TokenKind::MONKEYS_AT) {
							$assign(tyannos, typeAnnotationsOpt());
						}
						$assign(t, $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at(pos1)))->Select(t, $(ident(true)))))));
						if ($nc(this->token$)->pos <= $nc(this->endPosTable)->errorEndPos && $nc(this->token$)->kind == $Tokens$TokenKind::MONKEYS_AT) {
							break;
						}
						if (tyannos != nullptr && tyannos->nonEmpty()) {
							$assign(t, $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at($nc(($cast($JCTree$JCAnnotation, tyannos->head)))->pos$)))->AnnotatedType(tyannos, t)))));
						}
						$assign(t, argumentsOpt(typeArgs, $(typeArgumentsOpt(t))));
						$assign(typeArgs, nullptr);
					}
				}
			} else {
				if (((int32_t)(this->mode & (uint32_t)JavacParser::EXPR)) != 0 && $nc(this->token$)->kind == $Tokens$TokenKind::COLCOL) {
					selectExprMode();
					if (typeArgs != nullptr) {
						return illegal();
					}
					accept($Tokens$TokenKind::COLCOL);
					$assign(t, memberReferenceSuffix(pos1, t));
				} else {
					if (!$nc(annos)->isEmpty()) {
						if (this->permitTypeAnnotationsPushBack) {
							$set(this, typeAnnotationsPushedBack, annos);
						} else {
							return illegal($nc(($cast($JCTree$JCAnnotation, annos->head)))->pos$);
						}
					}
					break;
				}
			}
		}
	}
	$init($Tokens$TokenKind);
	while (($nc(this->token$)->kind == $Tokens$TokenKind::PLUSPLUS || $nc(this->token$)->kind == $Tokens$TokenKind::SUBSUB) && ((int32_t)(this->mode & (uint32_t)JavacParser::EXPR)) != 0) {
		selectExprMode();
		$init($JCTree$Tag);
		$assign(t, $cast($JCTree$JCExpression, to($($nc($($nc(this->F)->at($nc(this->token$)->pos)))->Unary($nc(this->token$)->kind == $Tokens$TokenKind::PLUSPLUS ? $JCTree$Tag::POSTINC : $JCTree$Tag::POSTDEC, t)))));
		nextToken();
	}
	return $cast($JCTree$JCExpression, toP(t));
}

bool JavacParser::isUnboundMemberRef() {
	$useLocalCurrentObjectStackCache();
	int32_t pos = 0;
	int32_t depth = 0;
	bool outer$continue = false;
	{
		$var($Tokens$Token, t, $nc(this->S)->token(pos));
		for (;; $assign(t, $nc(this->S)->token(++pos))) {
			$init($JavacParser$1);
			{
				int32_t nesting = 0;
				switch ($nc($JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->get(($nc(t)->kind)->ordinal())) {
				case 32:
					{}
				case 31:
					{}
				case 77:
					{}
				case 86:
					{}
				case 49:
					{}
				case 75:
					{}
				case 87:
					{}
				case 73:
					{}
				case 88:
					{}
				case 22:
					{}
				case 23:
					{}
				case 25:
					{}
				case 26:
					{}
				case 27:
					{}
				case 28:
					{}
				case 29:
					{}
				case 24:
					{}
				case 5:
					{
						break;
					}
				case 74:
					{
						nesting = 0;
						for (;; ++pos) {
							$Tokens$TokenKind* tk2 = $nc($($nc(this->S)->token(pos)))->kind;
							switch ($nc($JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->get($nc((tk2))->ordinal())) {
							case 6:
								{
									return false;
								}
							case 74:
								{
									++nesting;
									break;
								}
							case 85:
								{
									--nesting;
									if (nesting == 0) {
										outer$continue = true;
										break;
									}
									break;
								}
							}

							if (outer$continue) {
								break;
							}						}
						if (outer$continue) {
							outer$continue = false;
							continue;
						}
					}
				case 21:
					{
						++depth;
						break;
					}
				case 89:
					{
						--depth;
					}
				case 90:
					{
						--depth;
					}
				case 91:
					{
						--depth;
						if (depth == 0) {
							$Tokens$TokenKind* nextKind = $nc($($nc(this->S)->token(pos + 1)))->kind;
							$init($Tokens$TokenKind);
							return nextKind == $Tokens$TokenKind::DOT || nextKind == $Tokens$TokenKind::LBRACKET || nextKind == $Tokens$TokenKind::COLCOL;
						}
						break;
					}
				default:
					{
						return false;
					}
				}

				if (outer$continue) {
					outer$continue = false;
					continue;
				}
			}
		}
	}
}

$JavacParser$ParensResult* JavacParser::analyzeParens() {
	$useLocalCurrentObjectStackCache();
	int32_t depth = 0;
	bool type = false;
	$init($JavacParser$ParensResult);
	$JavacParser$ParensResult* defaultResult = $JavacParser$ParensResult::PARENS;
	for (int32_t lookahead = 0;; ++lookahead) {
		$Tokens$TokenKind* tk = $nc($($nc(this->S)->token(lookahead)))->kind;
		$init($JavacParser$1);
		switch ($nc($JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->get($nc((tk))->ordinal())) {
		case 88:
			{
				type = true;
			}
		case 86:
			{}
		case 49:
			{}
		case 75:
			{}
		case 92:
			{
				break;
			}
		case 77:
			{
				$init($Tokens$TokenKind);
				bool var$0 = peekToken(lookahead, static_cast<$Predicate*>($Tokens$TokenKind::EXTENDS));
				if (var$0 || peekToken(lookahead, static_cast<$Predicate*>($Tokens$TokenKind::SUPER))) {
					type = true;
				}
				break;
			}
		case 22:
			{}
		case 23:
			{}
		case 25:
			{}
		case 26:
			{}
		case 27:
			{}
		case 28:
			{}
		case 29:
			{}
		case 24:
			{}
		case 30:
			{
				$init($Tokens$TokenKind);
				if (peekToken(lookahead, static_cast<$Predicate*>($Tokens$TokenKind::RPAREN))) {
					return $JavacParser$ParensResult::CAST;
				} else if (peekToken(lookahead, this->LAX_IDENTIFIER)) {
					return $JavacParser$ParensResult::EXPLICIT_LAMBDA;
				}
				break;
			}
		case 74:
			{
				if (lookahead != 0) {
					return $JavacParser$ParensResult::PARENS;
				} else {
					$init($Tokens$TokenKind);
					if (peekToken(lookahead, static_cast<$Predicate*>($Tokens$TokenKind::RPAREN))) {
						return $JavacParser$ParensResult::EXPLICIT_LAMBDA;
					}
				}
				break;
			}
		case 85:
			{
				if (type) {
					return $JavacParser$ParensResult::CAST;
				}
				switch ($nc($JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->get(($nc($($nc(this->S)->token(lookahead + 1)))->kind)->ordinal())) {
				case 80:
					{}
				case 81:
					{}
				case 74:
					{}
				case 48:
					{}
				case 49:
					{}
				case 52:
					{}
				case 53:
					{}
				case 54:
					{}
				case 55:
					{}
				case 56:
					{}
				case 57:
					{}
				case 58:
					{}
				case 59:
					{}
				case 60:
					{}
				case 50:
					{}
				case 32:
					{}
				case 51:
					{}
				case 9:
					{}
				case 31:
					{}
				case 40:
					{}
				case 22:
					{}
				case 23:
					{}
				case 24:
					{}
				case 25:
					{}
				case 26:
					{}
				case 27:
					{}
				case 28:
					{}
				case 29:
					{}
				case 30:
					{
						return $JavacParser$ParensResult::CAST;
					}
				default:
					{
						return defaultResult;
					}
				}
			}
		case 31:
			{}
		case 51:
			{}
		case 9:
			{}
		case 32:
			{
				if (peekToken(lookahead, this->LAX_IDENTIFIER)) {
					return $JavacParser$ParensResult::EXPLICIT_LAMBDA;
				} else {
					$init($Tokens$TokenKind);
					if (peekToken(lookahead, static_cast<$Predicate*>($Tokens$TokenKind::RPAREN), static_cast<$Predicate*>($Tokens$TokenKind::ARROW))) {
						return ((int32_t)(this->mode & (uint32_t)JavacParser::NOLAMBDA)) == 0 ? $JavacParser$ParensResult::IMPLICIT_LAMBDA : $JavacParser$ParensResult::PARENS;
					} else {
						if (depth == 0 && peekToken(lookahead, static_cast<$Predicate*>($Tokens$TokenKind::COMMA))) {
							defaultResult = $JavacParser$ParensResult::IMPLICIT_LAMBDA;
						}
					}
				}
				type = false;
				break;
			}
		case 3:
			{}
		case 76:
			{
				return $JavacParser$ParensResult::EXPLICIT_LAMBDA;
			}
		case 5:
			{
				type = true;
				lookahead = skipAnnotation(lookahead);
				break;
			}
		case 73:
			{
				$init($Tokens$TokenKind);
				if (peekToken(lookahead, static_cast<$Predicate*>($Tokens$TokenKind::RBRACKET), this->LAX_IDENTIFIER)) {
					return $JavacParser$ParensResult::EXPLICIT_LAMBDA;
				} else {
					bool var$2 = peekToken(lookahead, static_cast<$Predicate*>($Tokens$TokenKind::RBRACKET), static_cast<$Predicate*>($Tokens$TokenKind::RPAREN));
					if (var$2 || peekToken(lookahead, static_cast<$Predicate*>($Tokens$TokenKind::RBRACKET), static_cast<$Predicate*>($Tokens$TokenKind::AMP))) {
						return $JavacParser$ParensResult::CAST;
					} else {
						if (peekToken(lookahead, static_cast<$Predicate*>($Tokens$TokenKind::RBRACKET))) {
							type = true;
							++lookahead;
							break;
						} else {
							return $JavacParser$ParensResult::PARENS;
						}
					}
				}
			}
		case 21:
			{
				++depth;
				break;
			}
		case 89:
			{
				--depth;
			}
		case 90:
			{
				--depth;
			}
		case 91:
			{
				--depth;
				if (depth == 0) {
					$init($Tokens$TokenKind);
					bool var$3 = peekToken(lookahead, static_cast<$Predicate*>($Tokens$TokenKind::RPAREN));
					if (var$3 || peekToken(lookahead, static_cast<$Predicate*>($Tokens$TokenKind::AMP))) {
						return $JavacParser$ParensResult::CAST;
					} else {
						bool var$7 = peekToken(lookahead, this->LAX_IDENTIFIER, static_cast<$Predicate*>($Tokens$TokenKind::COMMA));
						bool var$6 = var$7 || peekToken(lookahead, this->LAX_IDENTIFIER, $Tokens$TokenKind::RPAREN, $Tokens$TokenKind::ARROW);
						if (var$6 || peekToken(lookahead, static_cast<$Predicate*>($Tokens$TokenKind::ELLIPSIS))) {
							return $JavacParser$ParensResult::EXPLICIT_LAMBDA;
						}
					}
					type = true;
					break;
				} else if (depth < 0) {
					return $JavacParser$ParensResult::PARENS;
				}
				break;
			}
		default:
			{
				return defaultResult;
			}
		}
	}
}

int32_t JavacParser::skipAnnotation(int32_t lookahead) {
	$useLocalCurrentObjectStackCache();
	lookahead += 1;
	$init($Tokens$TokenKind);
	while (peekToken(lookahead, static_cast<$Predicate*>($Tokens$TokenKind::DOT))) {
		lookahead += 2;
	}
	if (peekToken(lookahead, static_cast<$Predicate*>($Tokens$TokenKind::LPAREN))) {
		++lookahead;
		int32_t nesting = 0;
		for (;; ++lookahead) {
			$Tokens$TokenKind* tk2 = $nc($($nc(this->S)->token(lookahead)))->kind;
			$init($JavacParser$1);
			switch ($nc($JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->get($nc((tk2))->ordinal())) {
			case 6:
				{
					return lookahead;
				}
			case 74:
				{
					++nesting;
					break;
				}
			case 85:
				{
					--nesting;
					if (nesting == 0) {
						return lookahead;
					}
					break;
				}
			}
		}
	}
	return lookahead;
}

$JCTree$JCExpression* JavacParser::lambdaExpressionOrStatement(bool hasParens, bool explicitParams, int32_t pos) {
	$useLocalCurrentObjectStackCache();
	$var($List, params, explicitParams ? formalParameters(true, false) : implicitParameters(hasParens));
	if (explicitParams) {
		$var($JavacParser$LambdaClassifier, lambdaClassifier, $new($JavacParser$LambdaClassifier, this));
		{
			$var($Iterator, i$, $nc(params)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JCTree$JCVariableDecl, param, $cast($JCTree$JCVariableDecl, i$->next()));
				{
					$var($Name, restrictedTypeName, nullptr);
					bool var$0 = $nc(param)->vartype != nullptr && ($assign(restrictedTypeName, this->restrictedTypeName(param->vartype, false))) != nullptr;
					$init($JCTree$Tag);
					if (var$0 && $nc(param->vartype)->hasTag($JCTree$Tag::TYPEARRAY)) {
						$init($JCDiagnostic$DiagnosticFlag);
						$init($Source$Feature);
						$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::SYNTAX, param->pos$, $Source$Feature::VAR_SYNTAX_IMPLICIT_LAMBDAS->allowedInSource(this->source) ? $($CompilerProperties$Errors::RestrictedTypeNotAllowedArray(restrictedTypeName)) : $($CompilerProperties$Errors::RestrictedTypeNotAllowedHere(restrictedTypeName)));
					}
					lambdaClassifier->addParameter(param);
					$init($JavacParser$LambdaParameterKind);
					if (lambdaClassifier->result() == $JavacParser$LambdaParameterKind::ERROR) {
						break;
					}
				}
			}
		}
		if (lambdaClassifier->diagFragment != nullptr) {
			$init($JCDiagnostic$DiagnosticFlag);
			$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::SYNTAX, pos, $($CompilerProperties$Errors::InvalidLambdaParameterDeclaration(lambdaClassifier->diagFragment)));
		}
		{
			$var($Iterator, i$, params->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JCTree$JCVariableDecl, param, $cast($JCTree$JCVariableDecl, i$->next()));
				{
					if ($nc(param)->vartype != nullptr && this->restrictedTypeName(param->vartype, true) != nullptr) {
						$init($Source$Feature);
						checkSourceLevel(param->pos$, $Source$Feature::VAR_SYNTAX_IMPLICIT_LAMBDAS);
						param->startPos = $TreeInfo::getStartPos(param->vartype);
						$set(param, vartype, nullptr);
					}
				}
			}
		}
	}
	return lambdaExpressionOrStatementRest(params, pos);
}

$JCTree$JCExpression* JavacParser::lambdaExpressionOrStatementRest($List* args, int32_t pos) {
	$init($Source$Feature);
	checkSourceLevel($Source$Feature::LAMBDA);
	$init($Tokens$TokenKind);
	accept($Tokens$TokenKind::ARROW);
	return $nc(this->token$)->kind == $Tokens$TokenKind::LBRACE ? lambdaStatement(args, pos, $nc(this->token$)->pos) : lambdaExpression(args, pos);
}

$JCTree$JCExpression* JavacParser::lambdaStatement($List* args, int32_t pos, int32_t pos2) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCBlock, block, this->block(pos2, 0));
	return $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at(pos)))->Lambda(args, block))));
}

$JCTree$JCExpression* JavacParser::lambdaExpression($List* args, int32_t pos) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree, expr, parseExpression());
	return $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at(pos)))->Lambda(args, expr))));
}

$JCTree$JCExpression* JavacParser::superSuffix($List* typeArgs$renamed, $JCTree$JCExpression* t$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($List, typeArgs, typeArgs$renamed);
	$var($JCTree$JCExpression, t, t$renamed);
	nextToken();
	$init($Tokens$TokenKind);
	if ($nc(this->token$)->kind == $Tokens$TokenKind::LPAREN || typeArgs != nullptr) {
		$assign(t, arguments(typeArgs, t));
	} else {
		if ($nc(this->token$)->kind == $Tokens$TokenKind::COLCOL) {
			if (typeArgs != nullptr) {
				return illegal();
			}
			$assign(t, memberReferenceSuffix(t));
		} else {
			int32_t pos = $nc(this->token$)->pos;
			accept($Tokens$TokenKind::DOT);
			$assign(typeArgs, ($nc(this->token$)->kind == $Tokens$TokenKind::LT) ? typeArguments(false) : ($List*)nullptr);
			$assign(t, $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at(pos)))->Select(t, $(ident()))))));
			$assign(t, argumentsOpt(typeArgs, t));
		}
	}
	return t;
}

$JCTree$JCPrimitiveTypeTree* JavacParser::basicType() {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCPrimitiveTypeTree, t, $cast($JCTree$JCPrimitiveTypeTree, to($($nc($($nc(this->F)->at($nc(this->token$)->pos)))->TypeIdent($(typetag($nc(this->token$)->kind)))))));
	nextToken();
	return t;
}

$JCTree$JCExpression* JavacParser::argumentsOpt($List* typeArgs, $JCTree$JCExpression* t) {
	$init($Tokens$TokenKind);
	if (((int32_t)(this->mode & (uint32_t)JavacParser::EXPR)) != 0 && $nc(this->token$)->kind == $Tokens$TokenKind::LPAREN || typeArgs != nullptr) {
		selectExprMode();
		return arguments(typeArgs, t);
	} else {
		return t;
	}
}

$List* JavacParser::arguments() {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, args, $new($ListBuffer));
	$init($Tokens$TokenKind);
	if ($nc(this->token$)->kind == $Tokens$TokenKind::LPAREN) {
		nextToken();
		if ($nc(this->token$)->kind != $Tokens$TokenKind::RPAREN) {
			args->append($(parseExpression()));
			while ($nc(this->token$)->kind == $Tokens$TokenKind::COMMA) {
				nextToken();
				args->append($(parseExpression()));
			}
		}
		accept($Tokens$TokenKind::RPAREN);
	} else {
		syntaxError($nc(this->token$)->pos, $($CompilerProperties$Errors::Expected($Tokens$TokenKind::LPAREN)));
	}
	return args->toList();
}

$JCTree$JCExpression* JavacParser::arguments($List* typeArgs, $JCTree$JCExpression* t) {
	$useLocalCurrentObjectStackCache();
	int32_t pos = $nc(this->token$)->pos;
	$var($List, args, arguments());
	$var($JCTree$JCExpression, mi, $nc($($nc(this->F)->at(pos)))->Apply(typeArgs, t, args));
	$init($JCTree$Tag);
	bool var$0 = $nc(t)->hasTag($JCTree$Tag::IDENT);
	if (var$0 && isInvalidUnqualifiedMethodIdentifier($nc(($cast($JCTree$JCIdent, t)))->pos$, ($cast($JCTree$JCIdent, t))->name)) {
		$init($JCDiagnostic$DiagnosticFlag);
		$init($CompilerProperties$Errors);
		$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::SYNTAX, static_cast<$JCDiagnostic$DiagnosticPosition*>(t), $CompilerProperties$Errors::InvalidYield);
		$assign(mi, $nc(this->F)->Erroneous($($List::of(mi))));
	}
	return $cast($JCTree$JCExpression, toP(mi));
}

bool JavacParser::isInvalidUnqualifiedMethodIdentifier(int32_t pos, $Name* name) {
	if (name == $nc(this->names)->yield) {
		if (this->allowYieldStatement) {
			return true;
		} else {
			$init($CompilerProperties$Warnings);
			$nc(this->log)->warning(pos, $CompilerProperties$Warnings::InvalidYield);
		}
	}
	return false;
}

$JCTree$JCExpression* JavacParser::typeArgumentsOpt($JCTree$JCExpression* t) {
	$init($Tokens$TokenKind);
	if ($nc(this->token$)->kind == $Tokens$TokenKind::LT && ((int32_t)(this->mode & (uint32_t)JavacParser::TYPE)) != 0 && ((int32_t)(this->mode & (uint32_t)JavacParser::NOPARAMS)) == 0) {
		selectTypeMode();
		return typeArguments(t, false);
	} else {
		return t;
	}
}

$List* JavacParser::typeArgumentsOpt() {
	return typeArgumentsOpt(JavacParser::TYPE);
}

$List* JavacParser::typeArgumentsOpt(int32_t useMode) {
	$init($Tokens$TokenKind);
	if ($nc(this->token$)->kind == $Tokens$TokenKind::LT) {
		if (((int32_t)(this->mode & (uint32_t)useMode)) == 0 || ((int32_t)(this->mode & (uint32_t)JavacParser::NOPARAMS)) != 0) {
			illegal();
		}
		this->mode = useMode;
		return typeArguments(false);
	}
	return nullptr;
}

$List* JavacParser::typeArguments(bool diamondAllowed) {
	$useLocalCurrentObjectStackCache();
	$init($Tokens$TokenKind);
	if ($nc(this->token$)->kind == $Tokens$TokenKind::LT) {
		nextToken();
		if ($nc(this->token$)->kind == $Tokens$TokenKind::GT && diamondAllowed) {
			$init($Source$Feature);
			checkSourceLevel($Source$Feature::DIAMOND);
			this->mode |= JavacParser::DIAMOND;
			nextToken();
			return $List::nil();
		} else {
			$var($ListBuffer, args, $new($ListBuffer));
			args->append((((int32_t)(this->mode & (uint32_t)JavacParser::EXPR)) == 0) ? $(typeArgument()) : $(parseType()));
			while ($nc(this->token$)->kind == $Tokens$TokenKind::COMMA) {
				nextToken();
				args->append((((int32_t)(this->mode & (uint32_t)JavacParser::EXPR)) == 0) ? $(typeArgument()) : $(parseType()));
			}
			$init($JavacParser$1);
			switch ($nc($JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->get(($nc(this->token$)->kind)->ordinal())) {
			case 72:
				{}
			case 71:
				{}
			case 93:
				{}
			case 89:
				{}
			case 90:
				{
					$set(this, token$, $nc(this->S)->split());
					break;
				}
			case 91:
				{
					nextToken();
					break;
				}
			default:
				{
					args->append($(syntaxError($nc(this->token$)->pos, $($CompilerProperties$Errors::Expected($Tokens$TokenKind::GT)))));
					break;
				}
			}
			return args->toList();
		}
	} else {
		return $List::of($(syntaxError($nc(this->token$)->pos, $($CompilerProperties$Errors::Expected($Tokens$TokenKind::LT)))));
	}
}

$JCTree$JCExpression* JavacParser::typeArgument() {
	$useLocalCurrentObjectStackCache();
	$var($List, annotations, typeAnnotationsOpt());
	$init($Tokens$TokenKind);
	if ($nc(this->token$)->kind != $Tokens$TokenKind::QUES) {
		return parseType(false, annotations);
	}
	int32_t pos = $nc(this->token$)->pos;
	nextToken();
	$var($JCTree$JCExpression, result, nullptr);
	if ($nc(this->token$)->kind == $Tokens$TokenKind::EXTENDS) {
		$init($BoundKind);
		$var($JCTree$TypeBoundKind, t, $cast($JCTree$TypeBoundKind, to($($nc($($nc(this->F)->at(pos)))->TypeBoundKind($BoundKind::EXTENDS)))));
		nextToken();
		$var($JCTree$JCExpression, bound, parseType());
		$assign(result, $nc($($nc(this->F)->at(pos)))->Wildcard(t, bound));
	} else {
		if ($nc(this->token$)->kind == $Tokens$TokenKind::SUPER) {
			$init($BoundKind);
			$var($JCTree$TypeBoundKind, t, $cast($JCTree$TypeBoundKind, to($($nc($($nc(this->F)->at(pos)))->TypeBoundKind($BoundKind::SUPER)))));
			nextToken();
			$var($JCTree$JCExpression, bound, parseType());
			$assign(result, $nc($($nc(this->F)->at(pos)))->Wildcard(t, bound));
		} else if ($nc(this->LAX_IDENTIFIER)->test($nc(this->token$)->kind)) {
			$init($BoundKind);
			$var($JCTree$TypeBoundKind, t, $nc($($nc(this->F)->at($Position::NOPOS)))->TypeBoundKind($BoundKind::UNBOUND));
			$var($JCTree$JCExpression, wc, $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at(pos)))->Wildcard(t, nullptr)))));
			$var($JCTree$JCIdent, id, $cast($JCTree$JCIdent, toP($($nc($($nc(this->F)->at($nc(this->token$)->pos)))->Ident($(ident()))))));
			$var($JCTree$JCErroneous, err, $nc($($nc(this->F)->at(pos)))->Erroneous($($List::of(wc, id))));
			reportSyntaxError(static_cast<$JCDiagnostic$DiagnosticPosition*>(err), $($CompilerProperties$Errors::Expected3($Tokens$TokenKind::GT, $Tokens$TokenKind::EXTENDS, $Tokens$TokenKind::SUPER)));
			$assign(result, err);
		} else {
			$init($BoundKind);
			$var($JCTree$TypeBoundKind, t, $cast($JCTree$TypeBoundKind, toP($($nc($($nc(this->F)->at(pos)))->TypeBoundKind($BoundKind::UNBOUND)))));
			$assign(result, $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at(pos)))->Wildcard(t, nullptr)))));
		}
	}
	if (!$nc(annotations)->isEmpty()) {
		$assign(result, $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at($nc(($cast($JCTree$JCAnnotation, annotations->head)))->pos$)))->AnnotatedType(annotations, result)))));
	}
	return result;
}

$JCTree$JCTypeApply* JavacParser::typeArguments($JCTree$JCExpression* t, bool diamondAllowed) {
	$useLocalCurrentObjectStackCache();
	int32_t pos = $nc(this->token$)->pos;
	$var($List, args, typeArguments(diamondAllowed));
	return $cast($JCTree$JCTypeApply, toP($($nc($($nc(this->F)->at(pos)))->TypeApply(t, args))));
}

$JCTree$JCExpression* JavacParser::bracketsOpt($JCTree$JCExpression* t$renamed, $List* annotations) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCExpression, t, t$renamed);
	$var($List, nextLevelAnnotations, typeAnnotationsOpt());
	$init($Tokens$TokenKind);
	if ($nc(this->token$)->kind == $Tokens$TokenKind::LBRACKET) {
		int32_t pos = $nc(this->token$)->pos;
		nextToken();
		$assign(t, bracketsOptCont(t, pos, nextLevelAnnotations));
	} else if (!$nc(nextLevelAnnotations)->isEmpty()) {
		if (this->permitTypeAnnotationsPushBack) {
			$set(this, typeAnnotationsPushedBack, nextLevelAnnotations);
		} else {
			return illegal($nc(($cast($JCTree$JCAnnotation, nextLevelAnnotations->head)))->pos$);
		}
	}
	if (!$nc(annotations)->isEmpty()) {
		$assign(t, $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at($nc(this->token$)->pos)))->AnnotatedType(annotations, t)))));
	}
	return t;
}

$JCTree$JCExpression* JavacParser::bracketsOpt($JCTree$JCExpression* t) {
	return bracketsOpt(t, $($List::nil()));
}

$JCTree$JCExpression* JavacParser::bracketsOptCont($JCTree$JCExpression* t$renamed, int32_t pos, $List* annotations) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCExpression, t, t$renamed);
	$init($Tokens$TokenKind);
	accept($Tokens$TokenKind::RBRACKET);
	$assign(t, bracketsOpt(t));
	$assign(t, $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at(pos)))->TypeArray(t)))));
	if ($nc(annotations)->nonEmpty()) {
		$assign(t, $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at(pos)))->AnnotatedType(annotations, t)))));
	}
	return t;
}

$JCTree$JCExpression* JavacParser::bracketsSuffix($JCTree$JCExpression* t$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCExpression, t, t$renamed);
	$init($Tokens$TokenKind);
	if (((int32_t)(this->mode & (uint32_t)JavacParser::EXPR)) != 0 && $nc(this->token$)->kind == $Tokens$TokenKind::DOT) {
		selectExprMode();
		int32_t pos = $nc(this->token$)->pos;
		nextToken();
		accept($Tokens$TokenKind::CLASS);
		if ($nc(this->token$)->pos == $nc(this->endPosTable)->errorEndPos) {
			$var($Name, name, nullptr);
			if ($nc(this->LAX_IDENTIFIER)->test($nc(this->token$)->kind)) {
				$assign(name, $nc(this->token$)->name());
				nextToken();
			} else {
				$assign(name, $nc(this->names)->error);
			}
			$assign(t, $nc($($nc(this->F)->at(pos)))->Erroneous($($List::of($(toP($($nc($($nc(this->F)->at(pos)))->Select(t, name))))))));
		} else {
			$JCTree$Tag* tag = $nc(t)->getTag();
			$init($JCTree$Tag);
			if ((tag == $JCTree$Tag::TYPEARRAY && $TreeInfo::containsTypeAnnotation(t)) || tag == $JCTree$Tag::ANNOTATED_TYPE) {
				$init($CompilerProperties$Errors);
				syntaxError($nc(this->token$)->pos, $CompilerProperties$Errors::NoAnnotationsOnDotClass);
			}
			$assign(t, $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at(pos)))->Select(t, $nc(this->names)->_class)))));
		}
	} else if (((int32_t)(this->mode & (uint32_t)JavacParser::TYPE)) != 0) {
		if ($nc(this->token$)->kind != $Tokens$TokenKind::COLCOL) {
			selectTypeMode();
		}
	} else {
		if ($nc(this->token$)->kind != $Tokens$TokenKind::COLCOL) {
			$init($CompilerProperties$Errors);
			syntaxError($nc(this->token$)->pos, $CompilerProperties$Errors::DotClassExpected);
		}
	}
	return t;
}

$JCTree$JCExpression* JavacParser::memberReferenceSuffix($JCTree$JCExpression* t) {
	int32_t pos1 = $nc(this->token$)->pos;
	$init($Tokens$TokenKind);
	accept($Tokens$TokenKind::COLCOL);
	return memberReferenceSuffix(pos1, t);
}

$JCTree$JCExpression* JavacParser::memberReferenceSuffix(int32_t pos1, $JCTree$JCExpression* t) {
	$useLocalCurrentObjectStackCache();
	$init($Source$Feature);
	checkSourceLevel($Source$Feature::METHOD_REFERENCES);
	selectExprMode();
	$var($List, typeArgs, nullptr);
	$init($Tokens$TokenKind);
	if ($nc(this->token$)->kind == $Tokens$TokenKind::LT) {
		$assign(typeArgs, typeArguments(false));
	}
	$var($Name, refName, nullptr);
	$MemberReferenceTree$ReferenceMode* refMode = nullptr;
	if ($nc(this->token$)->kind == $Tokens$TokenKind::NEW) {
		$init($MemberReferenceTree$ReferenceMode);
		refMode = $MemberReferenceTree$ReferenceMode::NEW;
		$assign(refName, $nc(this->names)->init);
		nextToken();
	} else {
		$init($MemberReferenceTree$ReferenceMode);
		refMode = $MemberReferenceTree$ReferenceMode::INVOKE;
		$assign(refName, ident());
	}
	return $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at($nc(t)->getStartPosition())))->Reference(refMode, refName, t, typeArgs))));
}

$JCTree$JCExpression* JavacParser::creator(int32_t newpos, $List* typeArgs) {
	$useLocalCurrentObjectStackCache();
	$var($List, newAnnotations, typeAnnotationsOpt());
	$init($JavacParser$1);
	switch ($nc($JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->get(($nc(this->token$)->kind)->ordinal())) {
	case 22:
		{}
	case 23:
		{}
	case 24:
		{}
	case 25:
		{}
	case 26:
		{}
	case 27:
		{}
	case 28:
		{}
	case 29:
		{
			if (typeArgs == nullptr) {
				if ($nc(newAnnotations)->isEmpty()) {
					return arrayCreatorRest(newpos, $(basicType()));
				} else {
					return arrayCreatorRest(newpos, $cast($JCTree$JCExpression, $(toP($($nc($($nc(this->F)->at($nc(($cast($JCTree$JCAnnotation, newAnnotations->head)))->pos$)))->AnnotatedType(newAnnotations, $(basicType())))))));
				}
			}
			break;
		}
	default:
		{}
	}
	$var($JCTree$JCExpression, t, qualident(true));
	int32_t oldmode = this->mode;
	selectTypeMode();
	bool diamondFound = false;
	int32_t lastTypeargsPos = -1;
	if ($nc(this->token$)->kind == $Tokens$TokenKind::LT) {
		lastTypeargsPos = $nc(this->token$)->pos;
		$assign(t, typeArguments(t, true));
		diamondFound = ((int32_t)(this->mode & (uint32_t)JavacParser::DIAMOND)) != 0;
	}
	while ($nc(this->token$)->kind == $Tokens$TokenKind::DOT) {
		if (diamondFound) {
			illegal();
		}
		int32_t pos = $nc(this->token$)->pos;
		nextToken();
		$var($List, tyannos, typeAnnotationsOpt());
		$assign(t, $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at(pos)))->Select(t, $(ident()))))));
		if (tyannos != nullptr && tyannos->nonEmpty()) {
			$assign(t, $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at($nc(($cast($JCTree$JCAnnotation, tyannos->head)))->pos$)))->AnnotatedType(tyannos, t)))));
		}
		if ($nc(this->token$)->kind == $Tokens$TokenKind::LT) {
			lastTypeargsPos = $nc(this->token$)->pos;
			$assign(t, typeArguments(t, true));
			diamondFound = ((int32_t)(this->mode & (uint32_t)JavacParser::DIAMOND)) != 0;
		}
	}
	this->mode = oldmode;
	if ($nc(this->token$)->kind == $Tokens$TokenKind::LBRACKET || $nc(this->token$)->kind == $Tokens$TokenKind::MONKEYS_AT) {
		if ($nc(newAnnotations)->nonEmpty()) {
			$assign(t, insertAnnotationsToMostInner(t, newAnnotations, false));
		}
		$var($JCTree$JCExpression, e, arrayCreatorRest(newpos, t));
		if (diamondFound) {
			$init($CompilerProperties$Errors);
			reportSyntaxError(lastTypeargsPos, $CompilerProperties$Errors::CannotCreateArrayWithDiamond);
			return $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at(newpos)))->Erroneous($($List::of(e))))));
		} else if (typeArgs != nullptr) {
			int32_t pos = newpos;
			if (!typeArgs->isEmpty() && $nc(($cast($JCTree$JCExpression, typeArgs->head)))->pos$ != $Position::NOPOS) {
				pos = $nc(($cast($JCTree$JCExpression, typeArgs->head)))->pos$;
			}
			setErrorEndPos($nc($($nc(this->S)->prevToken()))->endPos);
			$var($JCTree$JCErroneous, err, $nc($($nc(this->F)->at(pos)))->Erroneous($(typeArgs->prepend(e))));
			$init($CompilerProperties$Errors);
			reportSyntaxError(static_cast<$JCDiagnostic$DiagnosticPosition*>(err), $CompilerProperties$Errors::CannotCreateArrayWithTypeArguments);
			return $cast($JCTree$JCExpression, toP(err));
		}
		return e;
	} else {
		if ($nc(this->token$)->kind == $Tokens$TokenKind::LPAREN) {
			if ($nc(newAnnotations)->nonEmpty()) {
				$assign(t, insertAnnotationsToMostInner(t, newAnnotations, false));
			}
			return classCreatorRest(newpos, nullptr, typeArgs, t);
		} else {
			setErrorEndPos($nc(this->token$)->pos);
			reportSyntaxError($nc(this->token$)->pos, $($CompilerProperties$Errors::Expected2($Tokens$TokenKind::LPAREN, $Tokens$TokenKind::LBRACKET)));
			$assign(t, $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at(newpos)))->NewClass(nullptr, typeArgs, t, $($List::nil()), nullptr)))));
			return $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at(newpos)))->Erroneous($($List::of(t))))));
		}
	}
}

$JCTree$JCExpression* JavacParser::innerCreator(int32_t newpos, $List* typeArgs, $JCTree$JCExpression* encl) {
	$useLocalCurrentObjectStackCache();
	$var($List, newAnnotations, typeAnnotationsOpt());
	$var($JCTree$JCExpression, t, $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at($nc(this->token$)->pos)))->Ident($(ident()))))));
	if ($nc(newAnnotations)->nonEmpty()) {
		$assign(t, $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at($nc(($cast($JCTree$JCAnnotation, newAnnotations->head)))->pos$)))->AnnotatedType(newAnnotations, t)))));
	}
	$init($Tokens$TokenKind);
	if ($nc(this->token$)->kind == $Tokens$TokenKind::LT) {
		int32_t oldmode = this->mode;
		$assign(t, typeArguments(t, true));
		this->mode = oldmode;
	}
	return classCreatorRest(newpos, encl, typeArgs, t);
}

$JCTree$JCExpression* JavacParser::arrayCreatorRest(int32_t newpos, $JCTree$JCExpression* elemtype$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCExpression, elemtype, elemtype$renamed);
	$var($List, annos, typeAnnotationsOpt());
	$init($Tokens$TokenKind);
	accept($Tokens$TokenKind::LBRACKET);
	if ($nc(this->token$)->kind == $Tokens$TokenKind::RBRACKET) {
		accept($Tokens$TokenKind::RBRACKET);
		$assign(elemtype, bracketsOpt(elemtype, annos));
		if ($nc(this->token$)->kind == $Tokens$TokenKind::LBRACE) {
			$var($JCTree$JCNewArray, na, $cast($JCTree$JCNewArray, arrayInitializer(newpos, elemtype)));
			if ($nc(annos)->nonEmpty()) {
				$var($JCTree$JCAnnotatedType, annotated, $cast($JCTree$JCAnnotatedType, elemtype));
				if (!JavacParser::$assertionsDisabled && !($nc(annotated)->annotations == annos)) {
					$throwNew($AssertionError);
				}
				$set($nc(na), annotations, $nc(annotated)->annotations);
				$set(na, elemtype, annotated->underlyingType);
			}
			return na;
		} else {
			$var($JCTree$JCExpression, t, $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at(newpos)))->NewArray(elemtype, $($List::nil()), nullptr)))));
			$init($CompilerProperties$Errors);
			return syntaxError($nc(this->token$)->pos, $($List::of(t)), $CompilerProperties$Errors::ArrayDimensionMissing);
		}
	} else {
		$var($ListBuffer, dims, $new($ListBuffer));
		$var($ListBuffer, dimAnnotations, $new($ListBuffer));
		dimAnnotations->append(annos);
		dims->append($(parseExpression()));
		accept($Tokens$TokenKind::RBRACKET);
		while ($nc(this->token$)->kind == $Tokens$TokenKind::LBRACKET || $nc(this->token$)->kind == $Tokens$TokenKind::MONKEYS_AT) {
			$var($List, maybeDimAnnos, typeAnnotationsOpt());
			int32_t pos = $nc(this->token$)->pos;
			nextToken();
			if ($nc(this->token$)->kind == $Tokens$TokenKind::RBRACKET) {
				$assign(elemtype, bracketsOptCont(elemtype, pos, maybeDimAnnos));
			} else {
				dimAnnotations->append(maybeDimAnnos);
				dims->append($(parseExpression()));
				accept($Tokens$TokenKind::RBRACKET);
			}
		}
		$var($List, elems, nullptr);
		int32_t errpos = $nc(this->token$)->pos;
		if ($nc(this->token$)->kind == $Tokens$TokenKind::LBRACE) {
			$assign(elems, arrayInitializerElements(newpos, elemtype));
		}
		$var($JCTree$JCNewArray, na, $cast($JCTree$JCNewArray, toP($($nc($($nc(this->F)->at(newpos)))->NewArray(elemtype, $(dims->toList()), elems)))));
		$set($nc(na), dimAnnotations, dimAnnotations->toList());
		if (elems != nullptr) {
			$init($CompilerProperties$Errors);
			return syntaxError(errpos, $($List::of(na)), $CompilerProperties$Errors::IllegalArrayCreationBothDimensionAndInitialization);
		}
		return na;
	}
}

$JCTree$JCNewClass* JavacParser::classCreatorRest(int32_t newpos, $JCTree$JCExpression* encl, $List* typeArgs, $JCTree$JCExpression* t) {
	$useLocalCurrentObjectStackCache();
	$var($List, args, arguments());
	$var($JCTree$JCClassDecl, body, nullptr);
	$init($Tokens$TokenKind);
	if ($nc(this->token$)->kind == $Tokens$TokenKind::LBRACE) {
		int32_t pos = $nc(this->token$)->pos;
		$var($List, defs, classInterfaceOrRecordBody($nc(this->names)->empty, false, false));
		$var($JCTree$JCModifiers, mods, $nc($($nc(this->F)->at($Position::NOPOS)))->Modifiers(0));
		$assign(body, $cast($JCTree$JCClassDecl, toP($($nc($($nc(this->F)->at(pos)))->AnonymousClassDef(mods, defs)))));
	}
	return $cast($JCTree$JCNewClass, toP($($nc($($nc(this->F)->at(newpos)))->NewClass(encl, typeArgs, t, args, body))));
}

$JCTree$JCExpression* JavacParser::arrayInitializer(int32_t newpos, $JCTree$JCExpression* t) {
	$useLocalCurrentObjectStackCache();
	$var($List, elems, arrayInitializerElements(newpos, t));
	return $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at(newpos)))->NewArray(t, $($List::nil()), elems))));
}

$List* JavacParser::arrayInitializerElements(int32_t newpos, $JCTree$JCExpression* t) {
	$useLocalCurrentObjectStackCache();
	$init($Tokens$TokenKind);
	accept($Tokens$TokenKind::LBRACE);
	$var($ListBuffer, elems, $new($ListBuffer));
	if ($nc(this->token$)->kind == $Tokens$TokenKind::COMMA) {
		nextToken();
	} else {
		if ($nc(this->token$)->kind != $Tokens$TokenKind::RBRACE) {
			elems->append($(variableInitializer()));
			while ($nc(this->token$)->kind == $Tokens$TokenKind::COMMA) {
				nextToken();
				if ($nc(this->token$)->kind == $Tokens$TokenKind::RBRACE) {
					break;
				}
				elems->append($(variableInitializer()));
			}
		}
	}
	accept($Tokens$TokenKind::RBRACE);
	return elems->toList();
}

$JCTree$JCExpression* JavacParser::variableInitializer() {
	$init($Tokens$TokenKind);
	return $nc(this->token$)->kind == $Tokens$TokenKind::LBRACE ? arrayInitializer($nc(this->token$)->pos, nullptr) : parseExpression();
}

$JCTree$JCExpression* JavacParser::parExpression() {
	$useLocalCurrentObjectStackCache();
	int32_t pos = $nc(this->token$)->pos;
	$init($Tokens$TokenKind);
	accept($Tokens$TokenKind::LPAREN);
	$var($JCTree$JCExpression, t, parseExpression());
	accept($Tokens$TokenKind::RPAREN);
	return $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at(pos)))->Parens(t))));
}

$JCTree$JCBlock* JavacParser::block(int32_t pos, int64_t flags) {
	$useLocalCurrentObjectStackCache();
	$init($Tokens$TokenKind);
	accept($Tokens$TokenKind::LBRACE);
	$var($List, stats, blockStatements());
	$var($JCTree$JCBlock, t, $nc($($nc(this->F)->at(pos)))->Block(flags, stats));
	while ($nc(this->token$)->kind == $Tokens$TokenKind::CASE || $nc(this->token$)->kind == $Tokens$TokenKind::DEFAULT) {
		syntaxError($nc(this->token$)->pos, $($CompilerProperties$Errors::Orphaned($nc(this->token$)->kind)));
		switchBlockStatementGroups();
	}
	$nc(t)->endpos = $nc(this->token$)->pos;
	accept($Tokens$TokenKind::RBRACE);
	return $cast($JCTree$JCBlock, toP(t));
}

$JCTree$JCBlock* JavacParser::block() {
	return block($nc(this->token$)->pos, 0);
}

$List* JavacParser::blockStatements() {
	$useLocalCurrentObjectStackCache();
	int32_t lastErrPos = -1;
	$var($ListBuffer, stats, $new($ListBuffer));
	while (true) {
		$var($List, stat, blockStatement());
		if ($nc(stat)->isEmpty()) {
			return stats->toList();
		} else {
			if ($nc(this->token$)->pos == lastErrPos) {
				return stats->toList();
			}
			if ($nc(this->token$)->pos <= $nc(this->endPosTable)->errorEndPos) {
				skip(false, true, true, true);
				lastErrPos = $nc(this->token$)->pos;
			}
			stats->addAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(stat)));
		}
	}
}

$JCTree$JCStatement* JavacParser::parseStatementAsBlock() {
	$useLocalCurrentObjectStackCache();
	int32_t pos = $nc(this->token$)->pos;
	$var($List, stats, blockStatement());
	if ($nc(stats)->isEmpty()) {
		$init($CompilerProperties$Errors);
		$var($JCTree$JCErroneous, e, syntaxError(pos, $CompilerProperties$Errors::IllegalStartOfStmt));
		return $cast($JCTree$JCStatement, toP($($nc($($nc(this->F)->at(pos)))->Exec(e))));
	} else {
		$var($JCTree$JCStatement, first, $cast($JCTree$JCStatement, stats->head));
		$var($JCDiagnostic$Error, error, nullptr);
		$init($JavacParser$1);
		switch ($nc($JavacParser$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(first)->getTag())))->ordinal())) {
		case 3:
			{
				$init($CompilerProperties$Errors);
				$assign(error, $CompilerProperties$Errors::ClassNotAllowed);
				break;
			}
		case 4:
			{
				$init($CompilerProperties$Errors);
				$assign(error, $CompilerProperties$Errors::VariableNotAllowed);
				break;
			}
		}
		if (error != nullptr) {
			$init($JCDiagnostic$DiagnosticFlag);
			$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::SYNTAX, static_cast<$JCDiagnostic$DiagnosticPosition*>(first), error);
			$var($List, blist, $List::of($($nc($($nc(this->F)->at(first->pos$)))->Block(0, stats))));
			return $cast($JCTree$JCStatement, toP($($nc($($nc(this->F)->at(pos)))->Exec($($nc($($nc(this->F)->at(first->pos$)))->Erroneous(blist))))));
		}
		return first;
	}
}

$List* JavacParser::blockStatement() {
	$useLocalCurrentObjectStackCache();
	$var($Tokens$Comment, dc, nullptr);
	int32_t pos = $nc(this->token$)->pos;
	$init($JavacParser$1);
	switch ($nc($JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->get(($nc(this->token$)->kind)->ordinal())) {
	case 12:
		{}
	case 33:
		{}
	case 34:
		{}
	case 6:
		{
			return $List::nil();
		}
	case 11:
		{}
	case 35:
		{}
	case 36:
		{}
	case 37:
		{}
	case 38:
		{}
	case 39:
		{}
	case 40:
		{}
	case 19:
		{}
	case 41:
		{}
	case 42:
		{}
	case 43:
		{}
	case 44:
		{}
	case 1:
		{}
	case 45:
		{}
	case 46:
		{}
	case 47:
		{}
	case 51:
		{
			return $List::of($(parseSimpleStatement()));
		}
	case 5:
		{}
	case 3:
		{
			{
				$init($Tokens$Comment$CommentStyle);
				$assign(dc, $nc(this->token$)->comment($Tokens$Comment$CommentStyle::JAVADOC));
				$var($JCTree$JCModifiers, mods, modifiersOpt());
				$init($Tokens$TokenKind);
				if ($nc(this->token$)->kind == $Tokens$TokenKind::INTERFACE || $nc(this->token$)->kind == $Tokens$TokenKind::CLASS || $nc(this->token$)->kind == $Tokens$TokenKind::ENUM || isRecordStart()) {
					return $List::of($(classOrRecordOrInterfaceOrEnumDeclaration(mods, dc)));
				} else {
					$var($JCTree$JCExpression, t, parseType(true));
					return localVariableDeclarations(mods, t);
				}
			}
		}
	case 4:
		{}
	case 20:
		{
			{
				$init($Tokens$Comment$CommentStyle);
				$assign(dc, $nc(this->token$)->comment($Tokens$Comment$CommentStyle::JAVADOC));
				$var($JCTree$JCModifiers, mods, modifiersOpt());
				return $List::of($(classOrRecordOrInterfaceOrEnumDeclaration(mods, dc)));
			}
		}
	case 8:
		{}
	case 7:
		{
			$init($Tokens$Comment$CommentStyle);
			$assign(dc, $nc(this->token$)->comment($Tokens$Comment$CommentStyle::JAVADOC));
			return $List::of($(classOrRecordOrInterfaceOrEnumDeclaration($(modifiersOpt()), dc)));
		}
	case 9:
		{
			if (!this->allowRecords) {
				$init($JCDiagnostic$DiagnosticFlag);
				$init($CompilerProperties$Errors);
				$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::SYNTAX, $nc(this->token$)->pos, $CompilerProperties$Errors::LocalEnum);
			}
			$init($Tokens$Comment$CommentStyle);
			$assign(dc, $nc(this->token$)->comment($Tokens$Comment$CommentStyle::JAVADOC));
			return $List::of($(classOrRecordOrInterfaceOrEnumDeclaration($(modifiersOpt()), dc)));
		}
	case 32:
		{
			if ($nc(this->token$)->name() == $nc(this->names)->yield && this->allowYieldStatement) {
				$var($Tokens$Token, next, $nc(this->S)->token(1));
				bool isYieldStatement = false;
				{
					int32_t lookahead = 0;
					int32_t balance = 0;
					bool hasComma = false;
					$var($Tokens$Token, l, nullptr)
					switch ($nc($JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->get(($nc(next)->kind)->ordinal())) {
					case 82:
						{}
					case 83:
						{}
					case 57:
						{}
					case 56:
						{}
					case 52:
						{}
					case 53:
						{}
					case 54:
						{}
					case 55:
						{}
					case 60:
						{}
					case 32:
						{}
					case 58:
						{}
					case 59:
						{}
					case 50:
						{}
					case 40:
						{}
					case 48:
						{}
					case 49:
						{
							isYieldStatement = true;
							break;
						}
					case 78:
						{}
					case 79:
						{
							$init($Tokens$TokenKind);
							isYieldStatement = $nc($($nc(this->S)->token(2)))->kind != $Tokens$TokenKind::SEMI;
							break;
						}
					case 80:
						{}
					case 81:
						{
							$init($Tokens$TokenKind);
							isYieldStatement = $nc($($nc(this->S)->token(1)))->kind != $Tokens$TokenKind::SEMI;
							break;
						}
					case 74:
						{
							lookahead = 2;
							balance = 1;
							hasComma = false;
							$init($Tokens$TokenKind);
							while ($nc(($assign(l, $nc(this->S)->token(lookahead))))->kind != $Tokens$TokenKind::EOF && balance != 0) {
								switch ($nc($JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->get(($nc(l)->kind)->ordinal())) {
								case 74:
									{
										++balance;
										break;
									}
								case 85:
									{
										--balance;
										break;
									}
								case 88:
									{
										if (balance == 1) {
											hasComma = true;
										}
										break;
									}
								}
								++lookahead;
							}
							$init($Tokens$TokenKind);
							isYieldStatement = (!hasComma && lookahead != 3) || $nc(l)->kind == $Tokens$TokenKind::ARROW;
							break;
						}
					case 1:
						{
							isYieldStatement = true;
							break;
						}
					default:
						{
							isYieldStatement = false;
							break;
						}
					}
				}
				if (isYieldStatement) {
					nextToken();
					$var($JCTree$JCExpression, t, term(JavacParser::EXPR));
					accept($Tokens$TokenKind::SEMI);
					return $List::of($cast($JCTree$JCStatement, $(toP($($nc($($nc(this->F)->at(pos)))->Yield(t))))));
				}
			} else if (isNonSealedClassStart(true)) {
				$init($CompilerProperties$Errors);
				$nc(this->log)->error($nc(this->token$)->pos, $CompilerProperties$Errors::SealedOrNonSealedLocalClassesNotAllowed);
				nextToken();
				nextToken();
				nextToken();
				$var($JCTree$JCModifiers, var$0, modifiersOpt());
				$init($Tokens$Comment$CommentStyle);
				return $List::of($(classOrRecordOrInterfaceOrEnumDeclaration(var$0, $($nc(this->token$)->comment($Tokens$Comment$CommentStyle::JAVADOC)))));
			} else if (isSealedClassStart(true)) {
				$init($Source$Feature);
				checkSourceLevel($Source$Feature::SEALED_CLASSES);
				$init($CompilerProperties$Errors);
				$nc(this->log)->error($nc(this->token$)->pos, $CompilerProperties$Errors::SealedOrNonSealedLocalClassesNotAllowed);
				nextToken();
				$var($JCTree$JCModifiers, var$1, modifiersOpt());
				$init($Tokens$Comment$CommentStyle);
				return $List::of($(classOrRecordOrInterfaceOrEnumDeclaration(var$1, $($nc(this->token$)->comment($Tokens$Comment$CommentStyle::JAVADOC)))));
			}
		}
	}
	if (isRecordStart() && this->allowRecords) {
		$init($Tokens$Comment$CommentStyle);
		$assign(dc, $nc(this->token$)->comment($Tokens$Comment$CommentStyle::JAVADOC));
		return $List::of($(recordDeclaration($($nc($($nc(this->F)->at(pos)))->Modifiers(0)), dc)));
	} else {
		$var($Tokens$Token, prevToken, this->token$);
		$var($JCTree$JCExpression, t, term(JavacParser::EXPR | JavacParser::TYPE));
		$init($JCTree$Tag);
		if ($nc(this->token$)->kind == $Tokens$TokenKind::COLON && $nc(t)->hasTag($JCTree$Tag::IDENT)) {
			nextToken();
			$var($JCTree$JCStatement, stat, parseStatementAsBlock());
			return $List::of($($nc($($nc(this->F)->at(pos)))->Labelled($($nc(prevToken)->name()), stat)));
		} else if (((int32_t)(this->lastmode & (uint32_t)JavacParser::TYPE)) != 0 && $nc(this->LAX_IDENTIFIER)->test($nc(this->token$)->kind)) {
			pos = $nc(this->token$)->pos;
			$var($JCTree$JCModifiers, mods, $nc($($nc(this->F)->at($Position::NOPOS)))->Modifiers(0));
			$nc(this->F)->at(pos);
			return localVariableDeclarations(mods, t);
		} else {
			$assign(t, checkExprStat(t));
			accept($Tokens$TokenKind::SEMI);
			$var($JCTree$JCExpressionStatement, expr, $cast($JCTree$JCExpressionStatement, toP($($nc($($nc(this->F)->at(pos)))->Exec(t)))));
			return $List::of(expr);
		}
	}
}

$List* JavacParser::localVariableDeclarations($JCTree$JCModifiers* mods, $JCTree$JCExpression* type) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, stats, variableDeclarators(mods, type, $$new($ListBuffer), true));
	$init($Tokens$TokenKind);
	accept($Tokens$TokenKind::SEMI);
	$var($JCTree, var$0, $cast($JCTree, $nc(stats)->last()));
	storeEnd(var$0, $nc($($nc(this->S)->prevToken()))->endPos);
	return $nc(stats)->toList();
}

$JCTree$JCStatement* JavacParser::parseSimpleStatement() {
	$useLocalCurrentObjectStackCache();
	int32_t pos = $nc(this->token$)->pos;
	$init($JavacParser$1);
	{
		int32_t elsePos = 0;
		int32_t finallyPos = 0;
		switch ($nc($JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->get(($nc(this->token$)->kind)->ordinal())) {
		case 11:
			{
				return block();
			}
		case 35:
			{
				{
					nextToken();
					$var($JCTree$JCExpression, cond, parExpression());
					$var($JCTree$JCStatement, thenpart, parseStatementAsBlock());
					$var($JCTree$JCStatement, elsepart, nullptr);
					$init($Tokens$TokenKind);
					if ($nc(this->token$)->kind == $Tokens$TokenKind::ELSE) {
						nextToken();
						$assign(elsepart, parseStatementAsBlock());
					}
					return $nc($($nc(this->F)->at(pos)))->If(cond, thenpart, elsepart);
				}
			}
		case 36:
			{
				{
					nextToken();
					$init($Tokens$TokenKind);
					accept($Tokens$TokenKind::LPAREN);
					$var($List, inits, $nc(this->token$)->kind == $Tokens$TokenKind::SEMI ? $List::nil() : forInit());
					bool var$0 = $nc(inits)->length() == 1;
					$init($JCTree$Tag);
					if (var$0 && $nc(($cast($JCTree$JCStatement, inits->head)))->hasTag($JCTree$Tag::VARDEF) && $nc(($cast($JCTree$JCVariableDecl, inits->head)))->init == nullptr && $nc(this->token$)->kind == $Tokens$TokenKind::COLON) {
						$var($JCTree$JCVariableDecl, var, $cast($JCTree$JCVariableDecl, inits->head));
						accept($Tokens$TokenKind::COLON);
						$var($JCTree$JCExpression, expr, parseExpression());
						accept($Tokens$TokenKind::RPAREN);
						$var($JCTree$JCStatement, body, parseStatementAsBlock());
						return $nc($($nc(this->F)->at(pos)))->ForeachLoop(var, expr, body);
					} else {
						accept($Tokens$TokenKind::SEMI);
						$var($JCTree$JCExpression, cond, $nc(this->token$)->kind == $Tokens$TokenKind::SEMI ? ($JCTree$JCExpression*)nullptr : parseExpression());
						accept($Tokens$TokenKind::SEMI);
						$var($List, steps, $nc(this->token$)->kind == $Tokens$TokenKind::RPAREN ? $List::nil() : forUpdate());
						accept($Tokens$TokenKind::RPAREN);
						$var($JCTree$JCStatement, body, parseStatementAsBlock());
						return $nc($($nc(this->F)->at(pos)))->ForLoop(inits, cond, steps, body);
					}
				}
			}
		case 37:
			{
				{
					nextToken();
					$var($JCTree$JCExpression, cond, parExpression());
					$var($JCTree$JCStatement, body, parseStatementAsBlock());
					return $nc($($nc(this->F)->at(pos)))->WhileLoop(cond, body);
				}
			}
		case 38:
			{
				{
					nextToken();
					$var($JCTree$JCStatement, body, parseStatementAsBlock());
					$init($Tokens$TokenKind);
					accept($Tokens$TokenKind::WHILE);
					$var($JCTree$JCExpression, cond, parExpression());
					accept($Tokens$TokenKind::SEMI);
					$var($JCTree$JCDoWhileLoop, t, $cast($JCTree$JCDoWhileLoop, toP($($nc($($nc(this->F)->at(pos)))->DoLoop(body, cond)))));
					return t;
				}
			}
		case 39:
			{
				{
					nextToken();
					$var($List, resources, $List::nil());
					$init($Tokens$TokenKind);
					if ($nc(this->token$)->kind == $Tokens$TokenKind::LPAREN) {
						nextToken();
						$assign(resources, this->resources());
						accept($Tokens$TokenKind::RPAREN);
					}
					$var($JCTree$JCBlock, body, block());
					$var($ListBuffer, catchers, $new($ListBuffer));
					$var($JCTree$JCBlock, finalizer, nullptr);
					if ($nc(this->token$)->kind == $Tokens$TokenKind::CATCH || $nc(this->token$)->kind == $Tokens$TokenKind::FINALLY) {
						while ($nc(this->token$)->kind == $Tokens$TokenKind::CATCH) {
							catchers->append($(catchClause()));
						}
						if ($nc(this->token$)->kind == $Tokens$TokenKind::FINALLY) {
							nextToken();
							$assign(finalizer, block());
						}
					} else if ($nc(resources)->isEmpty()) {
						$init($JCDiagnostic$DiagnosticFlag);
						$init($CompilerProperties$Errors);
						$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::SYNTAX, pos, $CompilerProperties$Errors::TryWithoutCatchFinallyOrResourceDecls);
					}
					return $nc($($nc(this->F)->at(pos)))->Try(resources, body, $(catchers->toList()), finalizer);
				}
			}
		case 40:
			{
				{
					nextToken();
					$var($JCTree$JCExpression, selector, parExpression());
					$init($Tokens$TokenKind);
					accept($Tokens$TokenKind::LBRACE);
					$var($List, cases, switchBlockStatementGroups());
					$var($JCTree$JCSwitch, t, $cast($JCTree$JCSwitch, to($($nc($($nc(this->F)->at(pos)))->Switch(selector, cases)))));
					$nc(t)->endpos = $nc(this->token$)->endPos;
					accept($Tokens$TokenKind::RBRACE);
					return t;
				}
			}
		case 19:
			{
				{
					nextToken();
					$var($JCTree$JCExpression, lock, parExpression());
					$var($JCTree$JCBlock, body, block());
					return $nc($($nc(this->F)->at(pos)))->Synchronized(lock, body);
				}
			}
		case 41:
			{
				{
					nextToken();
					$init($Tokens$TokenKind);
					$var($JCTree$JCExpression, result, $nc(this->token$)->kind == $Tokens$TokenKind::SEMI ? ($JCTree$JCExpression*)nullptr : parseExpression());
					accept($Tokens$TokenKind::SEMI);
					$var($JCTree$JCReturn, t, $cast($JCTree$JCReturn, toP($($nc($($nc(this->F)->at(pos)))->Return(result)))));
					return t;
				}
			}
		case 42:
			{
				{
					nextToken();
					$var($JCTree$JCExpression, exc, parseExpression());
					$init($Tokens$TokenKind);
					accept($Tokens$TokenKind::SEMI);
					$var($JCTree$JCThrow, t, $cast($JCTree$JCThrow, toP($($nc($($nc(this->F)->at(pos)))->Throw(exc)))));
					return t;
				}
			}
		case 43:
			{
				{
					nextToken();
					$var($Name, label, $nc(this->LAX_IDENTIFIER)->test($nc(this->token$)->kind) ? ident() : ($Name*)nullptr);
					$init($Tokens$TokenKind);
					accept($Tokens$TokenKind::SEMI);
					$var($JCTree$JCBreak, t, $cast($JCTree$JCBreak, toP($($nc($($nc(this->F)->at(pos)))->Break(label)))));
					return t;
				}
			}
		case 44:
			{
				{
					nextToken();
					$var($Name, label, $nc(this->LAX_IDENTIFIER)->test($nc(this->token$)->kind) ? ident() : ($Name*)nullptr);
					$init($Tokens$TokenKind);
					accept($Tokens$TokenKind::SEMI);
					$var($JCTree$JCContinue, t, $cast($JCTree$JCContinue, toP($($nc($($nc(this->F)->at(pos)))->Continue(label)))));
					return t;
				}
			}
		case 1:
			{
				nextToken();
				return $cast($JCTree$JCStatement, toP($($nc($($nc(this->F)->at(pos)))->Skip())));
			}
		case 45:
			{
				elsePos = $nc(this->token$)->pos;
				nextToken();
				$init($JavacParser$BasicErrorRecoveryAction);
				$init($CompilerProperties$Errors);
				return doRecover(elsePos, $JavacParser$BasicErrorRecoveryAction::BLOCK_STMT, $CompilerProperties$Errors::ElseWithoutIf);
			}
		case 46:
			{
				finallyPos = $nc(this->token$)->pos;
				nextToken();
				$init($JavacParser$BasicErrorRecoveryAction);
				$init($CompilerProperties$Errors);
				return doRecover(finallyPos, $JavacParser$BasicErrorRecoveryAction::BLOCK_STMT, $CompilerProperties$Errors::FinallyWithoutTry);
			}
		case 47:
			{
				$init($JavacParser$BasicErrorRecoveryAction);
				$init($CompilerProperties$Errors);
				return doRecover($nc(this->token$)->pos, $JavacParser$BasicErrorRecoveryAction::CATCH_CLAUSE, $CompilerProperties$Errors::CatchWithoutTry);
			}
		case 51:
			{
				{
					nextToken();
					$var($JCTree$JCExpression, assertion, parseExpression());
					$var($JCTree$JCExpression, message, nullptr);
					$init($Tokens$TokenKind);
					if ($nc(this->token$)->kind == $Tokens$TokenKind::COLON) {
						nextToken();
						$assign(message, parseExpression());
					}
					accept($Tokens$TokenKind::SEMI);
					$var($JCTree$JCAssert, t, $cast($JCTree$JCAssert, toP($($nc($($nc(this->F)->at(pos)))->Assert(assertion, message)))));
					return t;
				}
			}
		default:
			{
				$Assert::error();
				return nullptr;
			}
		}
	}
}

$JCTree$JCStatement* JavacParser::parseStatement() {
	return parseStatementAsBlock();
}

$JCTree$JCStatement* JavacParser::doRecover(int32_t startPos, $JavacParser$ErrorRecoveryAction* action, $JCDiagnostic$Error* errorKey) {
	$useLocalCurrentObjectStackCache();
	int32_t errPos = $nc(this->S)->errPos();
	$var($JCTree, stm, $nc(action)->doRecover(this));
	$nc(this->S)->errPos(errPos);
	return $cast($JCTree$JCStatement, toP($($nc(this->F)->Exec($(syntaxError(startPos, $($List::of(stm)), errorKey))))));
}

$JCTree$JCCatch* JavacParser::catchClause() {
	$useLocalCurrentObjectStackCache();
	int32_t pos = $nc(this->token$)->pos;
	$init($Tokens$TokenKind);
	accept($Tokens$TokenKind::CATCH);
	accept($Tokens$TokenKind::LPAREN);
	$var($JCTree$JCModifiers, mods, optFinal($Flags::PARAMETER));
	$var($List, catchTypes, this->catchTypes());
	$var($JCTree$JCExpression, paramType, $nc(catchTypes)->size() > 1 ? $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at($nc(($cast($JCTree$JCExpression, $nc(catchTypes)->head)))->getStartPosition())))->TypeUnion(catchTypes)))) : $cast($JCTree$JCExpression, $nc(catchTypes)->head));
	$var($JCTree$JCVariableDecl, formal, variableDeclaratorId(mods, paramType));
	accept($Tokens$TokenKind::RPAREN);
	$var($JCTree$JCBlock, body, block());
	return $nc($($nc(this->F)->at(pos)))->Catch(formal, body);
}

$List* JavacParser::catchTypes() {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, catchTypes, $new($ListBuffer));
	catchTypes->add($(parseType()));
	$init($Tokens$TokenKind);
	while ($nc(this->token$)->kind == $Tokens$TokenKind::BAR) {
		nextToken();
		catchTypes->add($(parseType()));
	}
	return catchTypes->toList();
}

$List* JavacParser::switchBlockStatementGroups() {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, cases, $new($ListBuffer));
	while (true) {
		int32_t pos = $nc(this->token$)->pos;
		$init($JavacParser$1);
		switch ($nc($JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->get(($nc(this->token$)->kind)->ordinal())) {
		case 33:
			{}
		case 34:
			{
				cases->appendList($(switchBlockStatementGroup()));
				break;
			}
		case 12:
			{}
		case 6:
			{
				return cases->toList();
			}
		default:
			{
				nextToken();
				$init($Tokens$TokenKind);
				syntaxError(pos, $($CompilerProperties$Errors::Expected3($Tokens$TokenKind::CASE, $Tokens$TokenKind::DEFAULT, $Tokens$TokenKind::RBRACE)));
			}
		}
	}
}

$List* JavacParser::switchBlockStatementGroup() {
	$useLocalCurrentObjectStackCache();
	int32_t pos = $nc(this->token$)->pos;
	$var($List, stats, nullptr);
	$var($JCTree$JCCase, c, nullptr);
	$var($ListBuffer, cases, $new($ListBuffer));
	$init($JavacParser$1);
	switch ($nc($JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->get(($nc(this->token$)->kind)->ordinal())) {
	case 33:
		{
			{
				nextToken();
				$var($ListBuffer, pats, $new($ListBuffer));
				while (true) {
					pats->append($(parseCaseLabel()));
					$init($Tokens$TokenKind);
					if ($nc(this->token$)->kind != $Tokens$TokenKind::COMMA) {
						break;
					}
					nextToken();
					$init($Source$Feature);
					checkSourceLevel($Source$Feature::SWITCH_MULTIPLE_CASE_LABELS);
				}
				$CaseTree$CaseKind* caseKind = nullptr;
				$var($JCTree, body, nullptr);
				$init($Tokens$TokenKind);
				if ($nc(this->token$)->kind == $Tokens$TokenKind::ARROW) {
					$init($Source$Feature);
					checkSourceLevel($Source$Feature::SWITCH_RULE);
					accept($Tokens$TokenKind::ARROW);
					$init($JCTree$JCCase);
					caseKind = $JCTree$JCCase::RULE;
					$var($JCTree$JCStatement, statement, parseStatementAsBlock());
					$init($JCTree$Tag);
					bool var$1 = !$nc(statement)->hasTag($JCTree$Tag::EXEC);
					bool var$0 = var$1 && !statement->hasTag($JCTree$Tag::BLOCK);
					if (var$0 && !statement->hasTag($JCTree$Tag::THROW)) {
						$init($CompilerProperties$Errors);
						$nc(this->log)->error($(statement->pos()), $CompilerProperties$Errors::SwitchCaseUnexpectedStatement);
					}
					$assign(stats, $List::of(statement));
					$assign(body, $cast($JCTree, $nc(stats)->head));
				} else {
					accept($Tokens$TokenKind::COLON, static_cast<$Function*>($$new(JavacParser$$Lambda$lambda$switchExpressionStatementGroup$2$4)));
					$init($JCTree$JCCase);
					caseKind = $JCTree$JCCase::STATEMENT;
					$assign(stats, blockStatements());
				}
				$assign(c, $nc($($nc(this->F)->at(pos)))->Case(caseKind, $(pats->toList()), stats, body));
				if ($nc(stats)->isEmpty()) {
					storeEnd(c, $nc($($nc(this->S)->prevToken()))->endPos);
				}
				return $nc($(cases->append(c)))->toList();
			}
		}
	case 34:
		{
			{
				nextToken();
				$CaseTree$CaseKind* caseKind = nullptr;
				$var($JCTree, body, nullptr);
				int32_t patternPos = $nc(this->token$)->pos;
				$init($Tokens$TokenKind);
				if ($nc(this->token$)->kind == $Tokens$TokenKind::ARROW) {
					$init($Source$Feature);
					checkSourceLevel($Source$Feature::SWITCH_RULE);
					accept($Tokens$TokenKind::ARROW);
					$init($JCTree$JCCase);
					caseKind = $JCTree$JCCase::RULE;
					$var($JCTree$JCStatement, statement, parseStatementAsBlock());
					$init($JCTree$Tag);
					bool var$3 = !$nc(statement)->hasTag($JCTree$Tag::EXEC);
					bool var$2 = var$3 && !statement->hasTag($JCTree$Tag::BLOCK);
					if (var$2 && !statement->hasTag($JCTree$Tag::THROW)) {
						$init($CompilerProperties$Errors);
						$nc(this->log)->error($(statement->pos()), $CompilerProperties$Errors::SwitchCaseUnexpectedStatement);
					}
					$assign(stats, $List::of(statement));
					$assign(body, $cast($JCTree, $nc(stats)->head));
				} else {
					accept($Tokens$TokenKind::COLON, static_cast<$Function*>($$new(JavacParser$$Lambda$lambda$switchExpressionStatementGroup$2$4)));
					$init($JCTree$JCCase);
					caseKind = $JCTree$JCCase::STATEMENT;
					$assign(stats, blockStatements());
				}
				$var($JCTree$JCCaseLabel, defaultPattern, $cast($JCTree$JCCaseLabel, toP($($nc($($nc(this->F)->at(patternPos)))->DefaultCaseLabel()))));
				$assign(c, $nc($($nc(this->F)->at(pos)))->Case(caseKind, $($List::of(defaultPattern)), stats, body));
				if ($nc(stats)->isEmpty()) {
					storeEnd(c, $nc($($nc(this->S)->prevToken()))->endPos);
				}
				return $nc($(cases->append(c)))->toList();
			}
		}
	}
	$throwNew($AssertionError, $of("should not reach here"_s));
}

$JCTree$JCCaseLabel* JavacParser::parseCaseLabel() {
	$useLocalCurrentObjectStackCache();
	int32_t patternPos = $nc(this->token$)->pos;
	$var($JCTree$JCCaseLabel, label, nullptr);
	$init($Tokens$TokenKind);
	if ($nc(this->token$)->kind == $Tokens$TokenKind::DEFAULT) {
		$init($Source$Feature);
		checkSourceLevel($nc(this->token$)->pos, $Source$Feature::PATTERN_SWITCH);
		nextToken();
		$assign(label, $cast($JCTree$JCCaseLabel, toP($($nc($($nc(this->F)->at(patternPos)))->DefaultCaseLabel()))));
	} else {
		int32_t lookahead = 0;
		while ($nc($($nc(this->S)->token(lookahead)))->kind == $Tokens$TokenKind::LPAREN) {
			++lookahead;
		}
		$var($JCTree$JCModifiers, mods, optFinal(0));
		bool var$0 = $nc(mods)->flags != 0 || $nc($nc(mods)->annotations)->nonEmpty();
		$init($JavacParser$PatternResult);
		bool pattern = var$0 || analyzePattern(lookahead) == $JavacParser$PatternResult::PATTERN;
		if (pattern) {
			$init($Source$Feature);
			checkSourceLevel($nc(this->token$)->pos, $Source$Feature::PATTERN_SWITCH);
			return parsePattern(patternPos, mods, nullptr, false);
		} else {
			return term(JavacParser::EXPR | JavacParser::NOLAMBDA);
		}
	}
	return label;
}

$JavacParser$PatternResult* JavacParser::analyzePattern(int32_t lookahead) {
	$useLocalCurrentObjectStackCache();
	int32_t depth = 0;
	while (true) {
		$Tokens$TokenKind* token = $nc($($nc(this->S)->token(lookahead)))->kind;
		$init($JavacParser$1);
		switch ($nc($JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->get($nc((token))->ordinal())) {
		case 22:
			{}
		case 23:
			{}
		case 25:
			{}
		case 26:
			{}
		case 27:
			{}
		case 28:
			{}
		case 29:
			{}
		case 24:
			{}
		case 30:
			{}
		case 51:
			{}
		case 9:
			{}
		case 32:
			{}
		case 31:
			{
				if (depth == 0 && peekToken(lookahead, this->LAX_IDENTIFIER)) {
					$init($JavacParser$PatternResult);
					return $JavacParser$PatternResult::PATTERN;
				}
				break;
			}
		case 75:
			{}
		case 77:
			{}
		case 86:
			{}
		case 49:
			{}
		case 88:
			{
				break;
			}
		case 21:
			{
				++depth;
				break;
			}
		case 89:
			{
				--depth;
			}
		case 90:
			{
				--depth;
			}
		case 91:
			{
				--depth;
				if (depth == 0) {
					$init($JavacParser$PatternResult);
					return peekToken(lookahead, this->LAX_IDENTIFIER) ? $JavacParser$PatternResult::PATTERN : $JavacParser$PatternResult::EXPRESSION;
				} else if (depth < 0) {
					$init($JavacParser$PatternResult);
					return $JavacParser$PatternResult::EXPRESSION;
				}
				break;
			}
		case 5:
			{
				lookahead = skipAnnotation(lookahead);
				break;
			}
		case 73:
			{
				$init($Tokens$TokenKind);
				if (peekToken(lookahead, static_cast<$Predicate*>($Tokens$TokenKind::RBRACKET), this->LAX_IDENTIFIER)) {
					$init($JavacParser$PatternResult);
					return $JavacParser$PatternResult::PATTERN;
				} else {
					if (peekToken(lookahead, static_cast<$Predicate*>($Tokens$TokenKind::RBRACKET))) {
						++lookahead;
						break;
					} else {
						$init($JavacParser$PatternResult);
						return $JavacParser$PatternResult::EXPRESSION;
					}
				}
			}
		default:
			{
				$init($JavacParser$PatternResult);
				return $JavacParser$PatternResult::EXPRESSION;
			}
		}
		++lookahead;
	}
}

$ListBuffer* JavacParser::moreStatementExpressions(int32_t pos, $JCTree$JCExpression* first, $ListBuffer* stats) {
	$useLocalCurrentObjectStackCache();
	$nc(stats)->append($(toP($($nc($($nc(this->F)->at(pos)))->Exec($(checkExprStat(first)))))));
	$init($Tokens$TokenKind);
	while ($nc(this->token$)->kind == $Tokens$TokenKind::COMMA) {
		nextToken();
		pos = $nc(this->token$)->pos;
		$var($JCTree$JCExpression, t, parseExpression());
		stats->append($(toP($($nc($($nc(this->F)->at(pos)))->Exec($(checkExprStat(t)))))));
	}
	return stats;
}

$List* JavacParser::forInit() {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, stats, $new($ListBuffer));
	int32_t pos = $nc(this->token$)->pos;
	$init($Tokens$TokenKind);
	if ($nc(this->token$)->kind == $Tokens$TokenKind::FINAL || $nc(this->token$)->kind == $Tokens$TokenKind::MONKEYS_AT) {
		$var($JCTree$JCModifiers, var$0, optFinal(0));
		return $nc($(variableDeclarators(var$0, $(parseType(true)), stats, true)))->toList();
	} else {
		$var($JCTree$JCExpression, t, term(JavacParser::EXPR | JavacParser::TYPE));
		if (((int32_t)(this->lastmode & (uint32_t)JavacParser::TYPE)) != 0 && $nc(this->LAX_IDENTIFIER)->test($nc(this->token$)->kind)) {
			return $nc($(variableDeclarators($(modifiersOpt()), t, stats, true)))->toList();
		} else {
			if (((int32_t)(this->lastmode & (uint32_t)JavacParser::TYPE)) != 0 && $nc(this->token$)->kind == $Tokens$TokenKind::COLON) {
				$init($JCDiagnostic$DiagnosticFlag);
				$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::SYNTAX, pos, $($CompilerProperties$Errors::BadInitializer("for-loop"_s)));
				return $List::of(static_cast<$JCTree$JCStatement*>($($nc($($nc(this->F)->at(pos)))->VarDef($(modifiersOpt()), $nc(this->names)->error, t, nullptr))));
			} else {
				return $nc($(moreStatementExpressions(pos, t, stats)))->toList();
			}
		}
	}
}

$List* JavacParser::forUpdate() {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc(this->token$)->pos;
	$var($JCTree$JCExpression, var$1, parseExpression());
	return $nc($(moreStatementExpressions(var$0, var$1, $$new($ListBuffer))))->toList();
}

$List* JavacParser::annotationsOpt($JCTree$Tag* kind) {
	$useLocalCurrentObjectStackCache();
	$init($Tokens$TokenKind);
	if ($nc(this->token$)->kind != $Tokens$TokenKind::MONKEYS_AT) {
		return $List::nil();
	}
	$var($ListBuffer, buf, $new($ListBuffer));
	int32_t prevmode = this->mode;
	while ($nc(this->token$)->kind == $Tokens$TokenKind::MONKEYS_AT) {
		int32_t pos = $nc(this->token$)->pos;
		nextToken();
		buf->append($(annotation(pos, kind)));
	}
	this->lastmode = this->mode;
	this->mode = prevmode;
	$var($List, annotations, buf->toList());
	return annotations;
}

$List* JavacParser::typeAnnotationsOpt() {
	$init($JCTree$Tag);
	$var($List, annotations, annotationsOpt($JCTree$Tag::TYPE_ANNOTATION));
	return annotations;
}

$JCTree$JCModifiers* JavacParser::modifiersOpt() {
	return modifiersOpt(nullptr);
}

$JCTree$JCModifiers* JavacParser::modifiersOpt($JCTree$JCModifiers* partial) {
	$useLocalCurrentObjectStackCache();
	int64_t flags = 0;
	$var($ListBuffer, annotations, $new($ListBuffer));
	int32_t pos = 0;
	if (partial == nullptr) {
		flags = 0;
		pos = $nc(this->token$)->pos;
	} else {
		flags = $nc(partial)->flags;
		annotations->appendList(partial->annotations);
		pos = partial->pos$;
	}
	if ($nc(this->token$)->deprecatedFlag()) {
		flags |= $Flags::DEPRECATED;
	}
	int32_t lastPos = 0;
	bool loop$break = false;
	while (true) {
		int64_t flag = 0;
		$init($JavacParser$1);
		switch ($nc($JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->get(($nc(this->token$)->kind)->ordinal())) {
		case 13:
			{
				flag = $Flags::PRIVATE;
				break;
			}
		case 14:
			{
				flag = $Flags::PROTECTED;
				break;
			}
		case 2:
			{
				flag = $Flags::PUBLIC;
				break;
			}
		case 15:
			{
				flag = $Flags::STATIC;
				break;
			}
		case 16:
			{
				flag = $Flags::TRANSIENT;
				break;
			}
		case 3:
			{
				flag = $Flags::FINAL;
				break;
			}
		case 4:
			{
				flag = $Flags::ABSTRACT;
				break;
			}
		case 17:
			{
				flag = $Flags::NATIVE;
				break;
			}
		case 18:
			{
				flag = $Flags::VOLATILE;
				break;
			}
		case 19:
			{
				flag = $Flags::SYNCHRONIZED;
				break;
			}
		case 20:
			{
				flag = $Flags::STRICTFP;
				break;
			}
		case 5:
			{
				flag = $Flags::ANNOTATION;
				break;
			}
		case 34:
			{
				$init($Source$Feature);
				checkSourceLevel($Source$Feature::DEFAULT_METHODS);
				flag = $Flags::DEFAULT;
				break;
			}
		case 94:
			{
				flag = 0;
				nextToken();
				break;
			}
		case 32:
			{
				{
					if (isNonSealedClassStart(false)) {
						flag = $Flags::NON_SEALED;
						nextToken();
						nextToken();
						break;
					}
					if (isSealedClassStart(false)) {
						$init($Source$Feature);
						checkSourceLevel($Source$Feature::SEALED_CLASSES);
						flag = $Flags::SEALED;
						break;
					}
					loop$break = true;
					break;
				}
			}
		default:
			{
				loop$break = true;
				break;
			}
		}

		if (loop$break) {
			break;
		}		if (((int64_t)(flags & (uint64_t)flag)) != 0) {
			$init($JCDiagnostic$DiagnosticFlag);
			$init($CompilerProperties$Errors);
			$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::SYNTAX, $nc(this->token$)->pos, $CompilerProperties$Errors::RepeatedModifier);
		}
		lastPos = $nc(this->token$)->pos;
		nextToken();
		if (flag == $Flags::ANNOTATION) {
			if ($nc(this->token$)->kind != $Tokens$TokenKind::INTERFACE) {
				$init($JCTree$Tag);
				$var($JCTree$JCAnnotation, ann, annotation(lastPos, $JCTree$Tag::ANNOTATION));
				if (flags == 0 && annotations->isEmpty()) {
					pos = $nc(ann)->pos$;
				}
				annotations->append(ann);
				flag = 0;
			}
		}
		flags |= flag;
	}
	$init($JavacParser$1);
	switch ($nc($JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->get(($nc(this->token$)->kind)->ordinal())) {
	case 9:
		{
			flags |= $Flags::ENUM;
			break;
		}
	case 8:
		{
			flags |= $Flags::INTERFACE;
			break;
		}
	default:
		{
			break;
		}
	}
	if (((int64_t)(flags & (uint64_t)($Flags::ModifierFlags | $Flags::ANNOTATION))) == 0 && annotations->isEmpty()) {
		pos = $Position::NOPOS;
	}
	$var($JCTree$JCModifiers, mods, $nc($($nc(this->F)->at(pos)))->Modifiers(flags, $(annotations->toList())));
	if (pos != $Position::NOPOS) {
		storeEnd(mods, $nc($($nc(this->S)->prevToken()))->endPos);
	}
	return mods;
}

$JCTree$JCAnnotation* JavacParser::annotation(int32_t pos, $JCTree$Tag* kind) {
	$useLocalCurrentObjectStackCache();
	$init($JCTree$Tag);
	if (kind == $JCTree$Tag::TYPE_ANNOTATION) {
		$init($Source$Feature);
		checkSourceLevel($Source$Feature::TYPE_ANNOTATIONS);
	}
	$var($JCTree, ident, qualident(false));
	$var($List, fieldValues, annotationFieldValuesOpt());
	$var($JCTree$JCAnnotation, ann, nullptr);
	if (kind == $JCTree$Tag::ANNOTATION) {
		$assign(ann, $nc($($nc(this->F)->at(pos)))->Annotation(ident, fieldValues));
	} else {
		if (kind == $JCTree$Tag::TYPE_ANNOTATION) {
			$assign(ann, $nc($($nc(this->F)->at(pos)))->TypeAnnotation(ident, fieldValues));
		} else {
			$throwNew($AssertionError, $of($$str({"Unhandled annotation kind: "_s, kind})));
		}
	}
	storeEnd(ann, $nc($($nc(this->S)->prevToken()))->endPos);
	return ann;
}

$List* JavacParser::annotationFieldValuesOpt() {
	$init($Tokens$TokenKind);
	return ($nc(this->token$)->kind == $Tokens$TokenKind::LPAREN) ? annotationFieldValues() : $List::nil();
}

$List* JavacParser::annotationFieldValues() {
	$useLocalCurrentObjectStackCache();
	$init($Tokens$TokenKind);
	accept($Tokens$TokenKind::LPAREN);
	$var($ListBuffer, buf, $new($ListBuffer));
	if ($nc(this->token$)->kind != $Tokens$TokenKind::RPAREN) {
		buf->append($(annotationFieldValue()));
		while ($nc(this->token$)->kind == $Tokens$TokenKind::COMMA) {
			nextToken();
			buf->append($(annotationFieldValue()));
		}
	}
	accept($Tokens$TokenKind::RPAREN);
	return buf->toList();
}

$JCTree$JCExpression* JavacParser::annotationFieldValue() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->LAX_IDENTIFIER)->test($nc(this->token$)->kind)) {
		selectExprMode();
		$var($JCTree$JCExpression, t1, term1());
		$init($JCTree$Tag);
		$init($Tokens$TokenKind);
		if ($nc(t1)->hasTag($JCTree$Tag::IDENT) && $nc(this->token$)->kind == $Tokens$TokenKind::EQ) {
			int32_t pos = $nc(this->token$)->pos;
			accept($Tokens$TokenKind::EQ);
			$var($JCTree$JCExpression, v, annotationValue());
			return $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at(pos)))->Assign(t1, v))));
		} else {
			return t1;
		}
	}
	return annotationValue();
}

$JCTree$JCExpression* JavacParser::annotationValue() {
	$useLocalCurrentObjectStackCache();
	int32_t pos = 0;
	$init($JavacParser$1);
	{
		$var($ListBuffer, buf, nullptr)
		switch ($nc($JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->get(($nc(this->token$)->kind)->ordinal())) {
		case 5:
			{
				pos = $nc(this->token$)->pos;
				nextToken();
				$init($JCTree$Tag);
				return annotation(pos, $JCTree$Tag::ANNOTATION);
			}
		case 11:
			{
				pos = $nc(this->token$)->pos;
				$init($Tokens$TokenKind);
				accept($Tokens$TokenKind::LBRACE);
				$assign(buf, $new($ListBuffer));
				$init($Tokens$TokenKind);
				if ($nc(this->token$)->kind == $Tokens$TokenKind::COMMA) {
					nextToken();
				} else {
					if ($nc(this->token$)->kind != $Tokens$TokenKind::RBRACE) {
						$nc(buf)->append($(annotationValue()));
						while ($nc(this->token$)->kind == $Tokens$TokenKind::COMMA) {
							nextToken();
							if ($nc(this->token$)->kind == $Tokens$TokenKind::RBRACE) {
								break;
							}
							buf->append($(annotationValue()));
						}
					}
				}
				$init($Tokens$TokenKind);
				accept($Tokens$TokenKind::RBRACE);
				$var($List, var$0, $List::nil());
				return $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at(pos)))->NewArray(nullptr, var$0, $($nc(buf)->toList())))));
			}
		default:
			{
				selectExprMode();
				return term1();
			}
		}
	}
}

$ListBuffer* JavacParser::variableDeclarators($JCTree$JCModifiers* mods, $JCTree$JCExpression* type, $ListBuffer* vdefs, bool localDecl) {
	return variableDeclaratorsRest($nc(this->token$)->pos, mods, type, $(ident()), false, nullptr, vdefs, localDecl);
}

$ListBuffer* JavacParser::variableDeclaratorsRest(int32_t pos, $JCTree$JCModifiers* mods, $JCTree$JCExpression* type, $Name* name, bool reqInit, $Tokens$Comment* dc, $ListBuffer* vdefs, bool localDecl) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCVariableDecl, head, variableDeclaratorRest(pos, mods, type, name, reqInit, dc, localDecl, false));
	$nc(vdefs)->append(head);
	$init($Tokens$TokenKind);
	while ($nc(this->token$)->kind == $Tokens$TokenKind::COMMA) {
		storeEnd($cast($JCTree, $(vdefs->last())), $nc(this->token$)->endPos);
		nextToken();
		vdefs->append($(variableDeclarator(mods, type, reqInit, dc, localDecl)));
	}
	return vdefs;
}

$JCTree$JCVariableDecl* JavacParser::variableDeclarator($JCTree$JCModifiers* mods, $JCTree$JCExpression* type, bool reqInit, $Tokens$Comment* dc, bool localDecl) {
	return variableDeclaratorRest($nc(this->token$)->pos, mods, type, $(ident()), reqInit, dc, localDecl, true);
}

$JCTree$JCVariableDecl* JavacParser::variableDeclaratorRest(int32_t pos, $JCTree$JCModifiers* mods, $JCTree$JCExpression* type$renamed, $Name* name, bool reqInit, $Tokens$Comment* dc, bool localDecl, bool compound) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCExpression, type, type$renamed);
	bool declaredUsingVar = false;
	$assign(type, bracketsOpt(type));
	$var($JCTree$JCExpression, init, nullptr);
	$init($Tokens$TokenKind);
	if ($nc(this->token$)->kind == $Tokens$TokenKind::EQ) {
		nextToken();
		$assign(init, variableInitializer());
	} else if (reqInit) {
		syntaxError($nc(this->token$)->pos, $($CompilerProperties$Errors::Expected($Tokens$TokenKind::EQ)));
	}
	$var($JCTree, elemType, $TreeInfo::innermostType(type, true));
	int32_t startPos = $Position::NOPOS;
	$init($JCTree$Tag);
	if ($nc(elemType)->hasTag($JCTree$Tag::IDENT)) {
		$var($Name, typeName, $nc(($cast($JCTree$JCIdent, elemType)))->name);
		if (restrictedTypeNameStartingAtSource(typeName, pos, !compound && localDecl) != nullptr) {
			if (typeName != $nc(this->names)->var) {
				reportSyntaxError(elemType->pos$, $($CompilerProperties$Errors::RestrictedTypeNotAllowedHere(typeName)));
			} else {
				if ($nc(type)->hasTag($JCTree$Tag::TYPEARRAY) && !compound) {
					reportSyntaxError(elemType->pos$, $($CompilerProperties$Errors::RestrictedTypeNotAllowedArray(typeName)));
				} else {
					declaredUsingVar = true;
					if (compound) {
						reportSyntaxError(elemType->pos$, $($CompilerProperties$Errors::RestrictedTypeNotAllowedCompound(typeName)));
					}
					startPos = $TreeInfo::getStartPos(mods);
					if (startPos == $Position::NOPOS) {
						startPos = $TreeInfo::getStartPos(type);
					}
					$assign(type, nullptr);
				}
			}
		}
	}
	$var($JCTree$JCVariableDecl, result, $cast($JCTree$JCVariableDecl, toP($($nc($($nc(this->F)->at(pos)))->VarDef(mods, name, type, init, declaredUsingVar)))));
	attach(result, dc);
	$nc(result)->startPos = startPos;
	return result;
}

$Name* JavacParser::restrictedTypeName($JCTree$JCExpression* e, bool shouldWarn) {
	$init($JavacParser$1);
	switch ($nc($JavacParser$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(e)->getTag())))->ordinal())) {
	case 5:
		{
			return restrictedTypeNameStartingAtSource($nc(($cast($JCTree$JCIdent, e)))->name, e->pos$, shouldWarn) != nullptr ? $nc(($cast($JCTree$JCIdent, e)))->name : ($Name*)nullptr;
		}
	case 6:
		{
			return restrictedTypeName($nc(($cast($JCTree$JCArrayTypeTree, e)))->elemtype, shouldWarn);
		}
	default:
		{
			return nullptr;
		}
	}
}

$Source* JavacParser::restrictedTypeNameStartingAtSource($Name* name, int32_t pos, bool shouldWarn) {
	$useLocalCurrentObjectStackCache();
	if (name == $nc(this->names)->var) {
		$init($Source$Feature);
		if ($Source$Feature::LOCAL_VARIABLE_TYPE_INFERENCE->allowedInSource(this->source)) {
			$init($Source);
			return $Source::JDK10;
		} else if (shouldWarn) {
			$init($Source);
			$nc(this->log)->warning(pos, $($CompilerProperties$Warnings::RestrictedTypeNotAllowed(name, $Source::JDK10)));
		}
	}
	if (name == $nc(this->names)->yield) {
		if (this->allowYieldStatement) {
			$init($Source);
			return $Source::JDK14;
		} else if (shouldWarn) {
			$init($Source);
			$nc(this->log)->warning(pos, $($CompilerProperties$Warnings::RestrictedTypeNotAllowed(name, $Source::JDK14)));
		}
	}
	if (name == $nc(this->names)->record) {
		if (this->allowRecords) {
			$init($Source);
			return $Source::JDK14;
		} else if (shouldWarn) {
			$init($Source);
			$nc(this->log)->warning(pos, $($CompilerProperties$Warnings::RestrictedTypeNotAllowedPreview(name, $Source::JDK14)));
		}
	}
	if (name == $nc(this->names)->sealed) {
		if (this->allowSealedTypes) {
			$init($Source);
			return $Source::JDK15;
		} else if (shouldWarn) {
			$init($Source);
			$nc(this->log)->warning(pos, $($CompilerProperties$Warnings::RestrictedTypeNotAllowedPreview(name, $Source::JDK15)));
		}
	}
	if (name == $nc(this->names)->permits) {
		if (this->allowSealedTypes) {
			$init($Source);
			return $Source::JDK15;
		} else if (shouldWarn) {
			$init($Source);
			$nc(this->log)->warning(pos, $($CompilerProperties$Warnings::RestrictedTypeNotAllowedPreview(name, $Source::JDK15)));
		}
	}
	return nullptr;
}

$JCTree$JCVariableDecl* JavacParser::variableDeclaratorId($JCTree$JCModifiers* mods, $JCTree$JCExpression* type) {
	return variableDeclaratorId(mods, type, false, false);
}

$JCTree$JCVariableDecl* JavacParser::variableDeclaratorId($JCTree$JCModifiers* mods, $JCTree$JCExpression* type$renamed, bool lambdaParameter, bool recordComponent) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCExpression, type, type$renamed);
	int32_t pos = $nc(this->token$)->pos;
	$var($Name, name, nullptr);
	$init($Tokens$TokenKind);
	if (lambdaParameter && $nc(this->token$)->kind == $Tokens$TokenKind::UNDERSCORE) {
		$init($CompilerProperties$Errors);
		$nc(this->log)->error(pos, $CompilerProperties$Errors::UnderscoreAsIdentifierInLambda);
		$assign(name, $nc(this->token$)->name());
		nextToken();
	} else {
		bool var$1 = this->allowThisIdent || !lambdaParameter || $nc(this->LAX_IDENTIFIER)->test($nc(this->token$)->kind) || $nc(mods)->flags != $Flags::PARAMETER;
		if (var$1 || $nc($nc(mods)->annotations)->nonEmpty()) {
			$var($JCTree$JCExpression, pn, qualident(false));
			$init($JCTree$Tag);
			if ($nc(pn)->hasTag($JCTree$Tag::IDENT) && $nc(($cast($JCTree$JCIdent, pn)))->name != $nc(this->names)->_this) {
				$assign(name, $nc(($cast($JCTree$JCIdent, pn)))->name);
			} else {
				if (this->allowThisIdent) {
					if (((int64_t)(mods->flags & (uint64_t)$Flags::VARARGS)) != 0) {
						$init($CompilerProperties$Errors);
						$nc(this->log)->error($nc(this->token$)->pos, $CompilerProperties$Errors::VarargsAndReceiver);
					}
					if ($nc(this->token$)->kind == $Tokens$TokenKind::LBRACKET) {
						$init($CompilerProperties$Errors);
						$nc(this->log)->error($nc(this->token$)->pos, $CompilerProperties$Errors::ArrayAndReceiver);
					}
					if (pn->hasTag($JCTree$Tag::SELECT) && $nc(($cast($JCTree$JCFieldAccess, pn)))->name != $nc(this->names)->_this) {
						$init($CompilerProperties$Errors);
						$nc(this->log)->error($nc(this->token$)->pos, $CompilerProperties$Errors::WrongReceiver);
					}
				}
				return $cast($JCTree$JCVariableDecl, toP($($nc($($nc(this->F)->at(pos)))->ReceiverVarDef(mods, pn, type))));
			}
		} else {
			$assign(name, $nc(this->names)->empty);
		}
	}
	if (((int64_t)($nc(mods)->flags & (uint64_t)$Flags::VARARGS)) != 0 && $nc(this->token$)->kind == $Tokens$TokenKind::LBRACKET) {
		$init($CompilerProperties$Errors);
		$nc(this->log)->error($nc(this->token$)->pos, $CompilerProperties$Errors::VarargsAndOldArraySyntax);
	}
	if (recordComponent && $nc(this->token$)->kind == $Tokens$TokenKind::LBRACKET) {
		$init($CompilerProperties$Errors);
		$nc(this->log)->error($nc(this->token$)->pos, $CompilerProperties$Errors::RecordComponentAndOldArraySyntax);
	}
	$assign(type, bracketsOpt(type));
	$init($JCTree$Tag);
	return $cast($JCTree$JCVariableDecl, toP($($nc($($nc(this->F)->at(pos)))->VarDef(mods, name, type, nullptr, type != nullptr && type->hasTag($JCTree$Tag::IDENT) && $nc(($cast($JCTree$JCIdent, type)))->name == $nc(this->names)->var))));
}

$List* JavacParser::resources() {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, defs, $new($ListBuffer));
	defs->append($(resource()));
	$init($Tokens$TokenKind);
	while ($nc(this->token$)->kind == $Tokens$TokenKind::SEMI) {
		storeEnd($cast($JCTree, $(defs->last())), $nc(this->token$)->endPos);
		int32_t semiColonPos = $nc(this->token$)->pos;
		nextToken();
		if ($nc(this->token$)->kind == $Tokens$TokenKind::RPAREN) {
			break;
		}
		defs->append($(resource()));
	}
	return defs->toList();
}

$JCTree* JavacParser::resource() {
	$useLocalCurrentObjectStackCache();
	int32_t startPos = $nc(this->token$)->pos;
	$init($Tokens$TokenKind);
	if ($nc(this->token$)->kind == $Tokens$TokenKind::FINAL || $nc(this->token$)->kind == $Tokens$TokenKind::MONKEYS_AT) {
		$var($JCTree$JCModifiers, mods, optFinal($Flags::FINAL));
		$var($JCTree$JCExpression, t, parseType(true));
		return variableDeclaratorRest($nc(this->token$)->pos, mods, t, $(ident()), true, nullptr, true, false);
	}
	$var($JCTree$JCExpression, t, term(JavacParser::EXPR | JavacParser::TYPE));
	if (((int32_t)(this->lastmode & (uint32_t)JavacParser::TYPE)) != 0 && $nc(this->LAX_IDENTIFIER)->test($nc(this->token$)->kind)) {
		$var($JCTree$JCModifiers, mods, $cast($JCTree$JCModifiers, toP($($nc($($nc(this->F)->at(startPos)))->Modifiers($Flags::FINAL)))));
		return variableDeclaratorRest($nc(this->token$)->pos, mods, t, $(ident()), true, nullptr, true, false);
	} else {
		$init($Source$Feature);
		checkSourceLevel($Source$Feature::EFFECTIVELY_FINAL_VARIABLES_IN_TRY_WITH_RESOURCES);
		$init($JCTree$Tag);
		bool var$0 = !$nc(t)->hasTag($JCTree$Tag::IDENT);
		if (var$0 && !t->hasTag($JCTree$Tag::SELECT)) {
			$init($CompilerProperties$Errors);
			$nc(this->log)->error($(t->pos()), $CompilerProperties$Errors::TryWithResourcesExprNeedsVar);
		}
		return t;
	}
}

$JCTree$JCCompilationUnit* JavacParser::parseCompilationUnit() {
	$useLocalCurrentObjectStackCache();
	$var($Tokens$Token, firstToken, this->token$);
	$var($JCTree$JCModifiers, mods, nullptr);
	bool consumedToplevelDoc = false;
	bool seenImport = false;
	bool seenPackage = false;
	$var($ListBuffer, defs, $new($ListBuffer));
	$init($Tokens$TokenKind);
	if ($nc(this->token$)->kind == $Tokens$TokenKind::MONKEYS_AT) {
		$assign(mods, modifiersOpt());
	}
	if ($nc(this->token$)->kind == $Tokens$TokenKind::PACKAGE) {
		int32_t packagePos = $nc(this->token$)->pos;
		$var($List, annotations, $List::nil());
		seenPackage = true;
		if (mods != nullptr) {
			checkNoMods((int64_t)(mods->flags & (uint64_t)(int64_t)~$Flags::DEPRECATED));
			$assign(annotations, mods->annotations);
			$assign(mods, nullptr);
		}
		nextToken();
		$var($JCTree$JCExpression, pid, qualident(false));
		accept($Tokens$TokenKind::SEMI);
		$var($JCTree$JCPackageDecl, pd, $cast($JCTree$JCPackageDecl, toP($($nc($($nc(this->F)->at(packagePos)))->PackageDecl(annotations, pid)))));
		$init($Tokens$Comment$CommentStyle);
		attach(pd, $($nc(firstToken)->comment($Tokens$Comment$CommentStyle::JAVADOC)));
		consumedToplevelDoc = true;
		defs->append(pd);
	}
	bool checkForImports = true;
	bool firstTypeDecl = true;
	while ($nc(this->token$)->kind != $Tokens$TokenKind::EOF) {
		if ($nc(this->token$)->pos <= $nc(this->endPosTable)->errorEndPos) {
			skip(checkForImports, false, false, false);
			if ($nc(this->token$)->kind == $Tokens$TokenKind::EOF) {
				break;
			}
		}
		if (checkForImports && mods == nullptr && $nc(this->token$)->kind == $Tokens$TokenKind::IMPORT) {
			seenImport = true;
			defs->append($(importDeclaration()));
		} else {
			$init($Tokens$Comment$CommentStyle);
			$var($Tokens$Comment, docComment, $nc(this->token$)->comment($Tokens$Comment$CommentStyle::JAVADOC));
			if (firstTypeDecl && !seenImport && !seenPackage) {
				$assign(docComment, $nc(firstToken)->comment($Tokens$Comment$CommentStyle::JAVADOC));
				consumedToplevelDoc = true;
			}
			if (mods != nullptr || $nc(this->token$)->kind != $Tokens$TokenKind::SEMI) {
				$assign(mods, modifiersOpt(mods));
			}
			if (firstTypeDecl && $nc(this->token$)->kind == $Tokens$TokenKind::IDENTIFIER) {
				$init($ModuleTree$ModuleKind);
				$ModuleTree$ModuleKind* kind = $ModuleTree$ModuleKind::STRONG;
				if ($nc(this->token$)->name() == $nc(this->names)->open) {
					kind = $ModuleTree$ModuleKind::OPEN;
					nextToken();
				}
				if ($nc(this->token$)->kind == $Tokens$TokenKind::IDENTIFIER && $nc(this->token$)->name() == $nc(this->names)->module) {
					if (mods != nullptr) {
						checkNoMods((int64_t)(mods->flags & (uint64_t)(int64_t)~$Flags::DEPRECATED));
					}
					defs->append($(moduleDecl(mods, kind, docComment)));
					consumedToplevelDoc = true;
					break;
				} else {
					if (kind != $ModuleTree$ModuleKind::STRONG) {
						$init($CompilerProperties$Errors);
						reportSyntaxError($nc(this->token$)->pos, $CompilerProperties$Errors::ExpectedModule);
					}
				}
			}
			$var($JCTree, def, typeDeclaration(mods, docComment));
			{
				$var($JCTree$JCExpressionStatement, statement, nullptr);
				bool var$0 = $instanceOf($JCTree$JCExpressionStatement, def);
				if (var$0) {
					$assign(statement, $cast($JCTree$JCExpressionStatement, def));
					var$0 = true;
				}
				if (var$0) {
					$assign(def, $nc(statement)->expr);
				}
			}
			defs->append(def);
			if ($instanceOf($JCTree$JCClassDecl, def)) {
				checkForImports = false;
			}
			$assign(mods, nullptr);
			firstTypeDecl = false;
		}
	}
	$var($JCTree$JCCompilationUnit, toplevel, $nc($($nc(this->F)->at($nc(firstToken)->pos)))->TopLevel($(defs->toList())));
	if (!consumedToplevelDoc) {
		$init($Tokens$Comment$CommentStyle);
		attach(toplevel, $($nc(firstToken)->comment($Tokens$Comment$CommentStyle::JAVADOC)));
	}
	if (defs->isEmpty()) {
		storeEnd(toplevel, $nc($($nc(this->S)->prevToken()))->endPos);
	}
	if (this->keepDocComments) {
		$set($nc(toplevel), docComments, this->docComments);
	}
	if (this->keepLineMap) {
		$set($nc(toplevel), lineMap, $nc(this->S)->getLineMap());
	}
	$nc(this->endPosTable)->setParser(nullptr);
	$set($nc(toplevel), endPositions, this->endPosTable);
	return toplevel;
}

$JCTree$JCModuleDecl* JavacParser::moduleDecl($JCTree$JCModifiers* mods, $ModuleTree$ModuleKind* kind, $Tokens$Comment* dc) {
	$useLocalCurrentObjectStackCache();
	int32_t pos = $nc(this->token$)->pos;
	$init($Source$Feature);
	checkSourceLevel($Source$Feature::MODULES);
	nextToken();
	$var($JCTree$JCExpression, name, qualident(false));
	$var($List, directives, nullptr);
	$init($Tokens$TokenKind);
	accept($Tokens$TokenKind::LBRACE);
	$assign(directives, moduleDirectiveList());
	accept($Tokens$TokenKind::RBRACE);
	accept($Tokens$TokenKind::EOF);
	$var($JCTree$JCModuleDecl, result, $cast($JCTree$JCModuleDecl, toP($($nc($($nc(this->F)->at(pos)))->ModuleDef(mods, kind, name, directives)))));
	attach(result, dc);
	return result;
}

$List* JavacParser::moduleDirectiveList() {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, defs, $new($ListBuffer));
	$init($Tokens$TokenKind);
	while ($nc(this->token$)->kind == $Tokens$TokenKind::IDENTIFIER) {
		int32_t pos = $nc(this->token$)->pos;
		if ($nc(this->token$)->name() == $nc(this->names)->requires) {
			nextToken();
			bool isTransitive = false;
			bool isStaticPhase = false;
			bool loop$break = false;
			while (true) {
				$init($JavacParser$1);
				switch ($nc($JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->get(($nc(this->token$)->kind)->ordinal())) {
				case 32:
					{
						if ($nc(this->token$)->name() == $nc(this->names)->transitive && !isTransitive) {
							$var($Tokens$Token, t1, $nc(this->S)->token(1));
							if ($nc(t1)->kind == $Tokens$TokenKind::SEMI || $nc(t1)->kind == $Tokens$TokenKind::DOT) {
								loop$break = true;
								break;
							}
							isTransitive = true;
							break;
						} else {
							loop$break = true;
							break;
						}
					}
				case 15:
					{
						if (isStaticPhase) {
							$init($JCDiagnostic$DiagnosticFlag);
							$init($CompilerProperties$Errors);
							$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::SYNTAX, $nc(this->token$)->pos, $CompilerProperties$Errors::RepeatedModifier);
						}
						isStaticPhase = true;
						break;
					}
				default:
					{
						loop$break = true;
						break;
					}
				}

				if (loop$break) {
					break;
				}				nextToken();
			}
			$var($JCTree$JCExpression, moduleName, qualident(false));
			accept($Tokens$TokenKind::SEMI);
			defs->append($cast($JCTree$JCDirective, $(toP($($nc($($nc(this->F)->at(pos)))->Requires(isTransitive, isStaticPhase, moduleName))))));
		} else {
			bool var$1 = $nc(this->token$)->name() == $nc(this->names)->exports;
			if (var$1 || $nc(this->token$)->name() == $nc(this->names)->opens) {
				bool exports = $nc(this->token$)->name() == $nc(this->names)->exports;
				nextToken();
				$var($JCTree$JCExpression, pkgName, qualident(false));
				$var($List, moduleNames, nullptr);
				if ($nc(this->token$)->kind == $Tokens$TokenKind::IDENTIFIER && $nc(this->token$)->name() == $nc(this->names)->to) {
					nextToken();
					$assign(moduleNames, qualidentList(false));
				}
				accept($Tokens$TokenKind::SEMI);
				$var($JCTree$JCDirective, d, nullptr);
				if (exports) {
					$assign(d, $nc($($nc(this->F)->at(pos)))->Exports(pkgName, moduleNames));
				} else {
					$assign(d, $nc($($nc(this->F)->at(pos)))->Opens(pkgName, moduleNames));
				}
				defs->append($cast($JCTree$JCDirective, $(toP(d))));
			} else if ($nc(this->token$)->name() == $nc(this->names)->provides) {
				nextToken();
				$var($JCTree$JCExpression, serviceName, qualident(false));
				if ($nc(this->token$)->kind == $Tokens$TokenKind::IDENTIFIER && $nc(this->token$)->name() == $nc(this->names)->with) {
					nextToken();
					$var($List, implNames, qualidentList(false));
					accept($Tokens$TokenKind::SEMI);
					defs->append($cast($JCTree$JCDirective, $(toP($($nc($($nc(this->F)->at(pos)))->Provides(serviceName, implNames))))));
				} else {
					$init($JCDiagnostic$DiagnosticFlag);
					$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::SYNTAX, $nc(this->token$)->pos, $($CompilerProperties$Errors::ExpectedStr($$str({"\'"_s, $nc(this->names)->with, "\'"_s}))));
					skip(false, false, false, false);
				}
			} else if ($nc(this->token$)->name() == $nc(this->names)->uses) {
				nextToken();
				$var($JCTree$JCExpression, service, qualident(false));
				accept($Tokens$TokenKind::SEMI);
				defs->append($cast($JCTree$JCDirective, $(toP($($nc($($nc(this->F)->at(pos)))->Uses(service))))));
			} else {
				setErrorEndPos(pos);
				$init($CompilerProperties$Errors);
				reportSyntaxError(pos, $CompilerProperties$Errors::InvalidModuleDirective);
				break;
			}
		}
	}
	return defs->toList();
}

$JCTree* JavacParser::importDeclaration() {
	$useLocalCurrentObjectStackCache();
	int32_t pos = $nc(this->token$)->pos;
	nextToken();
	bool importStatic = false;
	$init($Tokens$TokenKind);
	if ($nc(this->token$)->kind == $Tokens$TokenKind::STATIC) {
		importStatic = true;
		nextToken();
	}
	$var($JCTree$JCExpression, pid, $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at($nc(this->token$)->pos)))->Ident($(ident()))))));
	do {
		int32_t pos1 = $nc(this->token$)->pos;
		accept($Tokens$TokenKind::DOT);
		if ($nc(this->token$)->kind == $Tokens$TokenKind::STAR) {
			$assign(pid, $cast($JCTree$JCExpression, to($($nc($($nc(this->F)->at(pos1)))->Select(pid, $nc(this->names)->asterisk)))));
			nextToken();
			break;
		} else {
			$assign(pid, $cast($JCTree$JCExpression, toP($($nc($($nc(this->F)->at(pos1)))->Select(pid, $(ident()))))));
		}
	} while ($nc(this->token$)->kind == $Tokens$TokenKind::DOT);
	accept($Tokens$TokenKind::SEMI);
	return toP($($nc($($nc(this->F)->at(pos)))->Import(pid, importStatic)));
}

$JCTree* JavacParser::typeDeclaration($JCTree$JCModifiers* mods, $Tokens$Comment* docComment) {
	$useLocalCurrentObjectStackCache();
	int32_t pos = $nc(this->token$)->pos;
	$init($Tokens$TokenKind);
	if (mods == nullptr && $nc(this->token$)->kind == $Tokens$TokenKind::SEMI) {
		nextToken();
		return toP($($nc($($nc(this->F)->at(pos)))->Skip()));
	} else {
		return classOrRecordOrInterfaceOrEnumDeclaration($(modifiersOpt(mods)), docComment);
	}
}

$JCTree$JCStatement* JavacParser::classOrRecordOrInterfaceOrEnumDeclaration($JCTree$JCModifiers* mods, $Tokens$Comment* dc) {
	$useLocalCurrentObjectStackCache();
	$init($Tokens$TokenKind);
	if ($nc(this->token$)->kind == $Tokens$TokenKind::CLASS) {
		return classDeclaration(mods, dc);
	}
	if (isRecordStart()) {
		return recordDeclaration(mods, dc);
	} else {
		if ($nc(this->token$)->kind == $Tokens$TokenKind::INTERFACE) {
			return interfaceDeclaration(mods, dc);
		} else {
			if ($nc(this->token$)->kind == $Tokens$TokenKind::ENUM) {
				return enumDeclaration(mods, dc);
			} else {
				int32_t pos = $nc(this->token$)->pos;
				$var($List, errs, nullptr);
				if ($nc(this->token$)->kind == $Tokens$TokenKind::IDENTIFIER && $nc(this->token$)->name() == $nc(this->names)->record) {
					$init($Source$Feature);
					checkSourceLevel($Source$Feature::RECORDS);
					$init($CompilerProperties$Errors);
					$var($JCTree$JCErroneous, erroneousTree, syntaxError($nc(this->token$)->pos, $($List::of(mods)), $CompilerProperties$Errors::RecordHeaderExpected));
					return $cast($JCTree$JCStatement, toP($($nc(this->F)->Exec(erroneousTree))));
				} else {
					if ($nc(this->LAX_IDENTIFIER)->test($nc(this->token$)->kind)) {
						$assign(errs, $List::of(mods, $(toP($($nc($($nc(this->F)->at(pos)))->Ident($(ident())))))));
						setErrorEndPos($nc(this->token$)->pos);
					} else {
						$assign(errs, $List::of(mods));
					}
					$var($JCTree$JCErroneous, erroneousTree, nullptr);
					if (this->parseModuleInfo) {
						$init($CompilerProperties$Errors);
						$assign(erroneousTree, syntaxError(pos, errs, $CompilerProperties$Errors::ExpectedModuleOrOpen));
					} else if (this->allowRecords) {
						$assign(erroneousTree, syntaxError(pos, errs, $($CompilerProperties$Errors::Expected4($Tokens$TokenKind::CLASS, $Tokens$TokenKind::INTERFACE, $Tokens$TokenKind::ENUM, "record"_s))));
					} else {
						$assign(erroneousTree, syntaxError(pos, errs, $($CompilerProperties$Errors::Expected3($Tokens$TokenKind::CLASS, $Tokens$TokenKind::INTERFACE, $Tokens$TokenKind::ENUM))));
					}
					return $cast($JCTree$JCStatement, toP($($nc(this->F)->Exec(erroneousTree))));
				}
			}
		}
	}
}

$JCTree$JCClassDecl* JavacParser::classDeclaration($JCTree$JCModifiers* mods, $Tokens$Comment* dc) {
	$useLocalCurrentObjectStackCache();
	int32_t pos = $nc(this->token$)->pos;
	$init($Tokens$TokenKind);
	accept($Tokens$TokenKind::CLASS);
	$var($Name, name, typeName());
	$var($List, typarams, typeParametersOpt());
	$var($JCTree$JCExpression, extending, nullptr);
	if ($nc(this->token$)->kind == $Tokens$TokenKind::EXTENDS) {
		nextToken();
		$assign(extending, parseType());
	}
	$var($List, implementing, $List::nil());
	if ($nc(this->token$)->kind == $Tokens$TokenKind::IMPLEMENTS) {
		nextToken();
		$assign(implementing, typeList());
	}
	$var($List, permitting, permitsClause(mods, "class"_s));
	$var($List, defs, classInterfaceOrRecordBody(name, false, false));
	$var($JCTree$JCClassDecl, result, $cast($JCTree$JCClassDecl, toP($($nc($($nc(this->F)->at(pos)))->ClassDef(mods, name, typarams, extending, implementing, permitting, defs)))));
	attach(result, dc);
	return result;
}

$JCTree$JCClassDecl* JavacParser::recordDeclaration($JCTree$JCModifiers* mods, $Tokens$Comment* dc) {
	$useLocalCurrentObjectStackCache();
	int32_t pos = $nc(this->token$)->pos;
	nextToken();
	$nc(mods)->flags |= $Flags::RECORD;
	$var($Name, name, typeName());
	$var($List, typarams, typeParametersOpt());
	$var($List, headerFields, formalParameters(false, true));
	$var($List, implementing, $List::nil());
	$init($Tokens$TokenKind);
	if ($nc(this->token$)->kind == $Tokens$TokenKind::IMPLEMENTS) {
		nextToken();
		$assign(implementing, typeList());
	}
	$var($List, defs, classInterfaceOrRecordBody(name, false, true));
	$var($1List, fields, $new($ArrayList));
	{
		$var($Iterator, i$, $nc(headerFields)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree$JCVariableDecl, field, $cast($JCTree$JCVariableDecl, i$->next()));
			{
				fields->add(field);
			}
		}
	}
	{
		$var($Iterator, i$, $nc(defs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree, def, $cast($JCTree, i$->next()));
			{
				$init($JCTree$Tag);
				if ($nc(def)->hasTag($JCTree$Tag::METHODDEF)) {
					$var($JCTree$JCMethodDecl, methDef, $cast($JCTree$JCMethodDecl, def));
					if (methDef->name == $nc(this->names)->init && $nc(methDef->params)->isEmpty() && ((int64_t)($nc(methDef->mods)->flags & (uint64_t)$Flags::COMPACT_RECORD_CONSTRUCTOR)) != 0) {
						$var($ListBuffer, tmpParams, $new($ListBuffer));
						{
							$var($Iterator, i$, headerFields->iterator());
							for (; $nc(i$)->hasNext();) {
								$var($JCTree$JCVariableDecl, param, $cast($JCTree$JCVariableDecl, i$->next()));
								{
									tmpParams->add($($nc($($nc(this->F)->at(static_cast<$JCDiagnostic$DiagnosticPosition*>(param))))->VarDef($($nc(this->F)->Modifiers(($Flags::PARAMETER | $Flags::GENERATED_MEMBER) | ((int64_t)($nc($nc(param)->mods)->flags & (uint64_t)$Flags::VARARGS)), $nc(param->mods)->annotations)), $nc(param)->name, param->vartype, nullptr)));
								}
							}
						}
						$set(methDef, params, tmpParams->toList());
					}
				}
			}
		}
	}
	for (int32_t i = fields->size() - 1; i >= 0; --i) {
		$var($JCTree$JCVariableDecl, field, $cast($JCTree$JCVariableDecl, fields->get(i)));
		$assign(defs, defs->prepend(field));
	}
	$var($JCTree$JCClassDecl, result, $cast($JCTree$JCClassDecl, toP($($nc($($nc(this->F)->at(pos)))->ClassDef(mods, name, typarams, nullptr, implementing, defs)))));
	attach(result, dc);
	return result;
}

$Name* JavacParser::typeName() {
	$useLocalCurrentObjectStackCache();
	int32_t pos = $nc(this->token$)->pos;
	$var($Name, name, ident());
	$Source* source = restrictedTypeNameStartingAtSource(name, pos, true);
	if (source != nullptr) {
		reportSyntaxError(pos, $($CompilerProperties$Errors::RestrictedTypeNotAllowed(name, source)));
	}
	return name;
}

$JCTree$JCClassDecl* JavacParser::interfaceDeclaration($JCTree$JCModifiers* mods, $Tokens$Comment* dc) {
	$useLocalCurrentObjectStackCache();
	int32_t pos = $nc(this->token$)->pos;
	$init($Tokens$TokenKind);
	accept($Tokens$TokenKind::INTERFACE);
	$var($Name, name, typeName());
	$var($List, typarams, typeParametersOpt());
	$var($List, extending, $List::nil());
	if ($nc(this->token$)->kind == $Tokens$TokenKind::EXTENDS) {
		nextToken();
		$assign(extending, typeList());
	}
	$var($List, permitting, permitsClause(mods, "interface"_s));
	$var($List, defs, nullptr);
	$assign(defs, classInterfaceOrRecordBody(name, true, false));
	$var($JCTree$JCClassDecl, result, $cast($JCTree$JCClassDecl, toP($($nc($($nc(this->F)->at(pos)))->ClassDef(mods, name, typarams, nullptr, extending, permitting, defs)))));
	attach(result, dc);
	return result;
}

$List* JavacParser::permitsClause($JCTree$JCModifiers* mods, $String* classOrInterface) {
	$useLocalCurrentObjectStackCache();
	$init($Tokens$TokenKind);
	if (this->allowSealedTypes && $nc(this->token$)->kind == $Tokens$TokenKind::IDENTIFIER && $nc(this->token$)->name() == $nc(this->names)->permits) {
		$init($Source$Feature);
		checkSourceLevel($Source$Feature::SEALED_CLASSES);
		if (((int64_t)($nc(mods)->flags & (uint64_t)$Flags::SEALED)) == 0) {
			$nc(this->log)->error($nc(this->token$)->pos, $($CompilerProperties$Errors::InvalidPermitsClause($($CompilerProperties$Fragments::ClassIsNotSealed(classOrInterface)))));
		}
		nextToken();
		return qualidentList(false);
	}
	return $List::nil();
}

$JCTree$JCClassDecl* JavacParser::enumDeclaration($JCTree$JCModifiers* mods, $Tokens$Comment* dc) {
	$useLocalCurrentObjectStackCache();
	int32_t pos = $nc(this->token$)->pos;
	$init($Tokens$TokenKind);
	accept($Tokens$TokenKind::ENUM);
	$var($Name, name, typeName());
	$var($List, implementing, $List::nil());
	if ($nc(this->token$)->kind == $Tokens$TokenKind::IMPLEMENTS) {
		nextToken();
		$assign(implementing, typeList());
	}
	$var($List, defs, enumBody(name));
	$nc(mods)->flags |= $Flags::ENUM;
	$var($JCTree$JCClassDecl, result, $cast($JCTree$JCClassDecl, toP($($nc($($nc(this->F)->at(pos)))->ClassDef(mods, name, $($List::nil()), nullptr, implementing, defs)))));
	attach(result, dc);
	return result;
}

$List* JavacParser::enumBody($Name* enumName) {
	$useLocalCurrentObjectStackCache();
	$init($Tokens$TokenKind);
	accept($Tokens$TokenKind::LBRACE);
	$var($ListBuffer, defs, $new($ListBuffer));
	bool wasSemi = false;
	bool hasStructuralErrors = false;
	bool wasError = false;
	if ($nc(this->token$)->kind == $Tokens$TokenKind::COMMA) {
		nextToken();
		if ($nc(this->token$)->kind == $Tokens$TokenKind::SEMI) {
			wasSemi = true;
			nextToken();
		} else {
			if ($nc(this->token$)->kind != $Tokens$TokenKind::RBRACE) {
				int32_t var$0 = $nc($($nc(this->S)->prevToken()))->endPos;
				reportSyntaxError(var$0, $($CompilerProperties$Errors::Expected2($Tokens$TokenKind::RBRACE, $Tokens$TokenKind::SEMI)));
				wasError = true;
			}
		}
	}
	while ($nc(this->token$)->kind != $Tokens$TokenKind::RBRACE && $nc(this->token$)->kind != $Tokens$TokenKind::EOF) {
		if ($nc(this->token$)->kind == $Tokens$TokenKind::SEMI) {
			accept($Tokens$TokenKind::SEMI);
			wasSemi = true;
			if ($nc(this->token$)->kind == $Tokens$TokenKind::RBRACE || $nc(this->token$)->kind == $Tokens$TokenKind::EOF) {
				break;
			}
		}
		$JavacParser$EnumeratorEstimate* memberType = estimateEnumeratorOrMember(enumName);
		$init($JavacParser$EnumeratorEstimate);
		if (memberType == $JavacParser$EnumeratorEstimate::UNKNOWN) {
			memberType = wasSemi ? $JavacParser$EnumeratorEstimate::MEMBER : $JavacParser$EnumeratorEstimate::ENUMERATOR;
		}
		if (memberType == $JavacParser$EnumeratorEstimate::ENUMERATOR) {
			wasError = false;
			if (wasSemi && !hasStructuralErrors) {
				$init($CompilerProperties$Errors);
				reportSyntaxError($nc(this->token$)->pos, $CompilerProperties$Errors::EnumConstantNotExpected);
				hasStructuralErrors = true;
			}
			defs->append($(enumeratorDeclaration(enumName)));
			if ($nc(this->token$)->pos <= $nc(this->endPosTable)->errorEndPos) {
				skip(false, true, true, false);
			} else {
				if ($nc(this->token$)->kind != $Tokens$TokenKind::RBRACE && $nc(this->token$)->kind != $Tokens$TokenKind::SEMI && $nc(this->token$)->kind != $Tokens$TokenKind::EOF) {
					if ($nc(this->token$)->kind == $Tokens$TokenKind::COMMA) {
						nextToken();
					} else {
						setErrorEndPos($nc(this->token$)->pos);
						int32_t var$1 = $nc($($nc(this->S)->prevToken()))->endPos;
						reportSyntaxError(var$1, $($CompilerProperties$Errors::Expected3($Tokens$TokenKind::COMMA, $Tokens$TokenKind::RBRACE, $Tokens$TokenKind::SEMI)));
						wasError = true;
					}
				}
			}
		} else {
			if (!wasSemi && !hasStructuralErrors && !wasError) {
				$init($CompilerProperties$Errors);
				reportSyntaxError($nc(this->token$)->pos, $CompilerProperties$Errors::EnumConstantExpected);
				hasStructuralErrors = true;
			}
			wasError = false;
			defs->appendList($(classOrInterfaceOrRecordBodyDeclaration(enumName, false, false)));
			if ($nc(this->token$)->pos <= $nc(this->endPosTable)->errorEndPos) {
				skip(false, true, true, false);
			}
		}
	}
	accept($Tokens$TokenKind::RBRACE);
	return defs->toList();
}

$JavacParser$EnumeratorEstimate* JavacParser::estimateEnumeratorOrMember($Name* enumName) {
	$init($Tokens$TokenKind);
	bool var$0 = $nc(this->token$)->kind == $Tokens$TokenKind::IDENTIFIER && $nc(this->token$)->name() != enumName;
	if (var$0 && (!this->allowRecords || !isRecordStart())) {
		$var($Tokens$Token, next, $nc(this->S)->token(1));
		$init($JavacParser$1);
		switch ($nc($JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->get(($nc(next)->kind)->ordinal())) {
		case 74:
			{}
		case 11:
			{}
		case 88:
			{}
		case 1:
			{
				$init($JavacParser$EnumeratorEstimate);
				return $JavacParser$EnumeratorEstimate::ENUMERATOR;
			}
		}
	}
	$init($JavacParser$1);
	switch ($nc($JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->get(($nc(this->token$)->kind)->ordinal())) {
	case 32:
		{}
	case 5:
		{}
	case 21:
		{
			if ($nc(this->token$)->kind == $Tokens$TokenKind::IDENTIFIER) {
				if (this->allowRecords && isRecordStart()) {
					$init($JavacParser$EnumeratorEstimate);
					return $JavacParser$EnumeratorEstimate::MEMBER;
				}
			}
			$init($JavacParser$EnumeratorEstimate);
			return $JavacParser$EnumeratorEstimate::UNKNOWN;
		}
	default:
		{
			$init($JavacParser$EnumeratorEstimate);
			return $JavacParser$EnumeratorEstimate::MEMBER;
		}
	}
}

$JCTree* JavacParser::enumeratorDeclaration($Name* enumName) {
	$useLocalCurrentObjectStackCache();
	$init($Tokens$Comment$CommentStyle);
	$var($Tokens$Comment, dc, $nc(this->token$)->comment($Tokens$Comment$CommentStyle::JAVADOC));
	int32_t flags = (($Flags::PUBLIC | $Flags::STATIC) | $Flags::FINAL) | $Flags::ENUM;
	if ($nc(this->token$)->deprecatedFlag()) {
		flags |= $Flags::DEPRECATED;
	}
	int32_t pos = $nc(this->token$)->pos;
	$init($JCTree$Tag);
	$var($List, annotations, annotationsOpt($JCTree$Tag::ANNOTATION));
	$var($JCTree$JCModifiers, mods, $nc($($nc(this->F)->at($nc(annotations)->isEmpty() ? $Position::NOPOS : pos)))->Modifiers(flags, annotations));
	$var($List, typeArgs, typeArgumentsOpt());
	int32_t identPos = $nc(this->token$)->pos;
	$var($Name, name, this->ident());
	int32_t createPos = $nc(this->token$)->pos;
	$init($Tokens$TokenKind);
	$var($List, args, ($nc(this->token$)->kind == $Tokens$TokenKind::LPAREN) ? arguments() : $List::nil());
	$var($JCTree$JCClassDecl, body, nullptr);
	if ($nc(this->token$)->kind == $Tokens$TokenKind::LBRACE) {
		$var($JCTree$JCModifiers, mods1, $nc($($nc(this->F)->at($Position::NOPOS)))->Modifiers($Flags::ENUM));
		$var($List, defs, classInterfaceOrRecordBody($nc(this->names)->empty, false, false));
		$assign(body, $cast($JCTree$JCClassDecl, toP($($nc($($nc(this->F)->at(identPos)))->AnonymousClassDef(mods1, defs)))));
	}
	if ($nc(args)->isEmpty() && body == nullptr) {
		createPos = identPos;
	}
	$var($JCTree$JCIdent, ident, $nc($($nc(this->F)->at(identPos)))->Ident(enumName));
	$var($JCTree$JCNewClass, create, $nc($($nc(this->F)->at(createPos)))->NewClass(nullptr, typeArgs, ident, args, body));
	if (createPos != identPos) {
		storeEnd(create, $nc($($nc(this->S)->prevToken()))->endPos);
	}
	$assign(ident, $nc($($nc(this->F)->at(identPos)))->Ident(enumName));
	$var($JCTree, result, toP($($nc($($nc(this->F)->at(pos)))->VarDef(mods, name, ident, create))));
	attach(result, dc);
	return result;
}

$List* JavacParser::typeList() {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, ts, $new($ListBuffer));
	ts->append($(parseType()));
	$init($Tokens$TokenKind);
	while ($nc(this->token$)->kind == $Tokens$TokenKind::COMMA) {
		nextToken();
		ts->append($(parseType()));
	}
	return ts->toList();
}

$List* JavacParser::classInterfaceOrRecordBody($Name* className, bool isInterface, bool isRecord) {
	$useLocalCurrentObjectStackCache();
	$init($Tokens$TokenKind);
	accept($Tokens$TokenKind::LBRACE);
	if ($nc(this->token$)->pos <= $nc(this->endPosTable)->errorEndPos) {
		skip(false, true, false, false);
		if ($nc(this->token$)->kind == $Tokens$TokenKind::LBRACE) {
			nextToken();
		} else {
			return $List::nil();
		}
	}
	$var($ListBuffer, defs, $new($ListBuffer));
	while ($nc(this->token$)->kind != $Tokens$TokenKind::RBRACE && $nc(this->token$)->kind != $Tokens$TokenKind::EOF) {
		defs->appendList($(classOrInterfaceOrRecordBodyDeclaration(className, isInterface, isRecord)));
		if ($nc(this->token$)->pos <= $nc(this->endPosTable)->errorEndPos) {
			skip(false, true, true, false);
		}
	}
	accept($Tokens$TokenKind::RBRACE);
	return defs->toList();
}

$List* JavacParser::classOrInterfaceOrRecordBodyDeclaration($Name* className, bool isInterface, bool isRecord) {
	$useLocalCurrentObjectStackCache();
	$init($Tokens$TokenKind);
	if ($nc(this->token$)->kind == $Tokens$TokenKind::SEMI) {
		nextToken();
		return $List::nil();
	} else {
		$init($Tokens$Comment$CommentStyle);
		$var($Tokens$Comment, dc, $nc(this->token$)->comment($Tokens$Comment$CommentStyle::JAVADOC));
		int32_t pos = $nc(this->token$)->pos;
		$var($JCTree$JCModifiers, mods, modifiersOpt());
		if ($nc(this->token$)->kind == $Tokens$TokenKind::CLASS || this->allowRecords && isRecordStart() || $nc(this->token$)->kind == $Tokens$TokenKind::INTERFACE || $nc(this->token$)->kind == $Tokens$TokenKind::ENUM) {
			return $List::of($(classOrRecordOrInterfaceOrEnumDeclaration(mods, dc)));
		} else {
			if ($nc(this->token$)->kind == $Tokens$TokenKind::LBRACE && ((int64_t)(((int64_t)($nc(mods)->flags & (uint64_t)(int64_t)$Flags::StandardFlags)) & (uint64_t)(int64_t)~$Flags::STATIC)) == 0 && $nc(mods->annotations)->isEmpty()) {
				if (isInterface) {
					$init($JCDiagnostic$DiagnosticFlag);
					$init($CompilerProperties$Errors);
					$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::SYNTAX, $nc(this->token$)->pos, $CompilerProperties$Errors::InitializerNotAllowed);
				} else if (isRecord && ((int64_t)(mods->flags & (uint64_t)(int64_t)$Flags::STATIC)) == 0) {
					$init($JCDiagnostic$DiagnosticFlag);
					$init($CompilerProperties$Errors);
					$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::SYNTAX, $nc(this->token$)->pos, $CompilerProperties$Errors::InstanceInitializerNotAllowedInRecords);
				}
				return $List::of($(block(pos, mods->flags)));
			} else {
				pos = $nc(this->token$)->pos;
				$var($List, typarams, typeParametersOpt());
				if ($nc(typarams)->nonEmpty() && mods->pos$ == $Position::NOPOS) {
					mods->pos$ = pos;
					storeEnd(mods, pos);
				}
				$init($JCTree$Tag);
				$var($List, annosAfterParams, annotationsOpt($JCTree$Tag::ANNOTATION));
				if ($nc(annosAfterParams)->nonEmpty()) {
					$init($Source$Feature);
					checkSourceLevel($nc(($cast($JCTree$JCAnnotation, annosAfterParams->head)))->pos$, $Source$Feature::ANNOTATIONS_AFTER_TYPE_PARAMS);
					$set(mods, annotations, $nc(mods->annotations)->appendList(annosAfterParams));
					if (mods->pos$ == $Position::NOPOS) {
						mods->pos$ = $nc(($cast($JCTree$JCAnnotation, $nc(mods->annotations)->head)))->pos$;
					}
				}
				$var($Tokens$Token, tk, this->token$);
				pos = $nc(this->token$)->pos;
				$var($JCTree$JCExpression, type, nullptr);
				bool isVoid = $nc(this->token$)->kind == $Tokens$TokenKind::VOID;
				if (isVoid) {
					$init($TypeTag);
					$assign(type, $cast($JCTree$JCExpression, to($($nc($($nc(this->F)->at(pos)))->TypeIdent($TypeTag::VOID)))));
					nextToken();
				} else {
					$assign(type, unannotatedType(false));
				}
				if (($nc(this->token$)->kind == $Tokens$TokenKind::LPAREN && !isInterface || isRecord && $nc(this->token$)->kind == $Tokens$TokenKind::LBRACE) && $nc(type)->hasTag($JCTree$Tag::IDENT)) {
					if (isInterface || $nc(tk)->name() != className) {
						$init($JCDiagnostic$DiagnosticFlag);
						$init($CompilerProperties$Errors);
						$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::SYNTAX, pos, $CompilerProperties$Errors::InvalidMethDeclRetTypeReq);
					} else if ($nc(annosAfterParams)->nonEmpty()) {
						illegal($nc(($cast($JCTree$JCAnnotation, annosAfterParams->head)))->pos$);
					}
					if (isRecord && $nc(this->token$)->kind == $Tokens$TokenKind::LBRACE) {
						mods->flags |= $Flags::COMPACT_RECORD_CONSTRUCTOR;
					}
					return $List::of($(methodDeclaratorRest(pos, mods, nullptr, $nc(this->names)->init, typarams, isInterface, true, isRecord, dc)));
				} else {
					if (isRecord && type->hasTag($JCTree$Tag::IDENT) && $nc(this->token$)->kind == $Tokens$TokenKind::THROWS) {
						$init($JCDiagnostic$DiagnosticFlag);
						$init($CompilerProperties$Fragments);
						$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::SYNTAX, $nc(this->token$)->pos, $($CompilerProperties$Errors::InvalidCanonicalConstructorInRecord($CompilerProperties$Fragments::Compact, className, $($CompilerProperties$Fragments::ThrowsClauseNotAllowedForCanonicalConstructor($CompilerProperties$Fragments::Compact)))));
						skip(false, true, false, false);
						return $List::of($(methodDeclaratorRest(pos, mods, nullptr, $nc(this->names)->init, typarams, isInterface, true, isRecord, dc)));
					} else {
						pos = $nc(this->token$)->pos;
						$var($Name, name, ident());
						if ($nc(this->token$)->kind == $Tokens$TokenKind::LPAREN) {
							return $List::of($(methodDeclaratorRest(pos, mods, type, name, typarams, isInterface, isVoid, false, dc)));
						} else if (!isVoid && $nc(typarams)->isEmpty()) {
							if (!isRecord || (isRecord && ((int64_t)(mods->flags & (uint64_t)(int64_t)$Flags::STATIC)) != 0)) {
								$var($List, defs, $nc($(variableDeclaratorsRest(pos, mods, type, name, isInterface, dc, $$new($ListBuffer), false)))->toList());
								accept($Tokens$TokenKind::SEMI);
								$var($JCTree, var$0, $cast($JCTree, $nc(defs)->last()));
								storeEnd(var$0, $nc($($nc(this->S)->prevToken()))->endPos);
								return defs;
							} else {
								int32_t errPos = pos;
								$nc($(variableDeclaratorsRest(pos, mods, type, name, isInterface, dc, $$new($ListBuffer), false)))->toList();
								accept($Tokens$TokenKind::SEMI);
								$init($CompilerProperties$Errors);
								return $List::of($(syntaxError(errPos, nullptr, $CompilerProperties$Errors::RecordCannotDeclareInstanceFields)));
							}
						} else {
							pos = $nc(this->token$)->pos;
							$var($List, err, nullptr);
							if (isVoid || typarams->nonEmpty()) {
								$var($JCTree$JCModifiers, var$1, mods);
								$var($Name, var$2, name);
								$var($JCTree$JCExpression, var$3, type);
								$var($List, var$4, typarams);
								$var($List, var$5, $List::nil());
								$var($JCTree$JCMethodDecl, m, $cast($JCTree$JCMethodDecl, toP($($nc($($nc(this->F)->at(pos)))->MethodDef(var$1, var$2, var$3, var$4, var$5, $($List::nil()), nullptr, nullptr)))));
								attach(m, dc);
								$assign(err, $List::of(m));
							} else {
								$assign(err, $List::nil());
							}
							return $List::of($(syntaxError($nc(this->token$)->pos, err, $($CompilerProperties$Errors::Expected($Tokens$TokenKind::LPAREN)))));
						}
					}
				}
			}
		}
	}
}

bool JavacParser::isRecordStart() {
	$init($Tokens$TokenKind);
	bool var$0 = $nc(this->token$)->kind == $Tokens$TokenKind::IDENTIFIER && $nc(this->token$)->name() == $nc(this->names)->record;
	if (var$0) {
		bool var$2 = peekToken(static_cast<$Predicate*>($Tokens$TokenKind::IDENTIFIER), static_cast<$Predicate*>($Tokens$TokenKind::LPAREN));
		bool var$1 = var$2 || peekToken(static_cast<$Predicate*>($Tokens$TokenKind::IDENTIFIER), static_cast<$Predicate*>($Tokens$TokenKind::EOF));
		var$0 = (var$1 || peekToken(static_cast<$Predicate*>($Tokens$TokenKind::IDENTIFIER), static_cast<$Predicate*>($Tokens$TokenKind::LT)));
	}
	if (var$0) {
		$init($Source$Feature);
		checkSourceLevel($Source$Feature::RECORDS);
		return true;
	} else {
		return false;
	}
}

bool JavacParser::isNonSealedClassStart(bool local) {
	if (isNonSealedIdentifier(this->token$, 0)) {
		$var($Tokens$Token, next, $nc(this->S)->token(3));
		return allowedAfterSealedOrNonSealed(next, local, true);
	}
	return false;
}

bool JavacParser::isNonSealedIdentifier($Tokens$Token* someToken, int32_t lookAheadOffset) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(someToken)->name() == $nc(this->names)->non;
	$init($Tokens$TokenKind);
	if (var$0 && peekToken(lookAheadOffset, static_cast<$Predicate*>($Tokens$TokenKind::SUB), static_cast<$Predicate*>($Tokens$TokenKind::IDENTIFIER))) {
		$var($Tokens$Token, tokenSub, $nc(this->S)->token(lookAheadOffset + 1));
		$var($Tokens$Token, tokenSealed, $nc(this->S)->token(lookAheadOffset + 2));
		if (someToken->endPos == $nc(tokenSub)->pos && tokenSub->endPos == $nc(tokenSealed)->pos && tokenSealed->name() == $nc(this->names)->sealed) {
			$init($Source$Feature);
			checkSourceLevel($Source$Feature::SEALED_CLASSES);
			return true;
		}
	}
	return false;
}

bool JavacParser::isSealedClassStart(bool local) {
	if ($nc(this->token$)->name() == $nc(this->names)->sealed) {
		$var($Tokens$Token, next, $nc(this->S)->token(1));
		if (allowedAfterSealedOrNonSealed(next, local, false)) {
			$init($Source$Feature);
			checkSourceLevel($Source$Feature::SEALED_CLASSES);
			return true;
		}
	}
	return false;
}

bool JavacParser::allowedAfterSealedOrNonSealed($Tokens$Token* next, bool local, bool currentIsNonSealed) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = false;
	if (local) {
		$init($JavacParser$1);

		bool var$1 = false;
		switch ($nc($JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->get(($nc(next)->kind)->ordinal())) {
		case 5:
			{
				{
					$var($Tokens$Token, afterNext, $nc(this->S)->token(2));
					$init($Tokens$TokenKind);
					var$1 = $nc(afterNext)->kind != $Tokens$TokenKind::INTERFACE || currentIsNonSealed;
					break;
				}
			}
		case 4:
			{}
		case 3:
			{}
		case 20:
			{}
		case 7:
			{}
		case 8:
			{}
		case 9:
			{
				var$1 = true;
				break;
			}
		default:
			{
				var$1 = false;
				break;
			}
		}
		var$0 = var$1;
	} else {

		bool var$2 = false;
		switch ($nc($JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->get((next->kind)->ordinal())) {
		case 5:
			{
				{
					$var($Tokens$Token, afterNext, $nc(this->S)->token(2));
					var$2 = $nc(afterNext)->kind != $Tokens$TokenKind::INTERFACE || currentIsNonSealed;
					break;
				}
			}
		case 2:
			{}
		case 14:
			{}
		case 13:
			{}
		case 4:
			{}
		case 15:
			{}
		case 3:
			{}
		case 20:
			{}
		case 7:
			{}
		case 8:
			{}
		case 9:
			{
				var$2 = true;
				break;
			}
		case 32:
			{
				bool var$3 = isNonSealedIdentifier(next, currentIsNonSealed ? 3 : 1);
				var$2 = var$3 || next->name() == $nc(this->names)->sealed;
				break;
			}
		default:
			{
				var$2 = false;
				break;
			}
		}
		var$0 = var$2;
	}
	return var$0;
}

$JCTree* JavacParser::methodDeclaratorRest(int32_t pos, $JCTree$JCModifiers* mods, $JCTree$JCExpression* type$renamed, $Name* name, $List* typarams, bool isInterface, bool isVoid, bool isRecord, $Tokens$Comment* dc) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCExpression, type, type$renamed);
	if (isInterface) {
		if (((int64_t)($nc(mods)->flags & (uint64_t)(int64_t)$Flags::STATIC)) != 0) {
			$init($Source$Feature);
			checkSourceLevel($Source$Feature::STATIC_INTERFACE_METHODS);
		}
		if (((int64_t)($nc(mods)->flags & (uint64_t)(int64_t)$Flags::PRIVATE)) != 0) {
			$init($Source$Feature);
			checkSourceLevel($Source$Feature::PRIVATE_INTERFACE_METHODS);
		}
	}
	$var($JCTree$JCVariableDecl, prevReceiverParam, this->receiverParam);
	{
		$var($Throwable, var$0, nullptr);
		$var($JCTree, var$2, nullptr);
		bool return$1 = false;
		try {
			$set(this, receiverParam, nullptr);
			$var($List, params, $List::nil());
			$var($List, thrown, $List::nil());
			$init($Tokens$TokenKind);
			if (!isRecord || name != $nc(this->names)->init || $nc(this->token$)->kind == $Tokens$TokenKind::LPAREN) {
				$assign(params, formalParameters());
				if (!isVoid) {
					$assign(type, bracketsOpt(type));
				}
				if ($nc(this->token$)->kind == $Tokens$TokenKind::THROWS) {
					nextToken();
					$assign(thrown, qualidentList(true));
				}
			}
			$var($JCTree$JCBlock, body, nullptr);
			$var($JCTree$JCExpression, defaultValue, nullptr);
			if ($nc(this->token$)->kind == $Tokens$TokenKind::LBRACE) {
				$assign(body, block());
				$assign(defaultValue, nullptr);
			} else {
				if ($nc(this->token$)->kind == $Tokens$TokenKind::DEFAULT) {
					accept($Tokens$TokenKind::DEFAULT);
					$assign(defaultValue, annotationValue());
				} else {
					$assign(defaultValue, nullptr);
				}
				accept($Tokens$TokenKind::SEMI);
				if ($nc(this->token$)->pos <= $nc(this->endPosTable)->errorEndPos) {
					skip(false, true, false, false);
					if ($nc(this->token$)->kind == $Tokens$TokenKind::LBRACE) {
						$assign(body, block());
					}
				}
			}
			$var($JCTree$JCMethodDecl, result, $cast($JCTree$JCMethodDecl, toP($($nc($($nc(this->F)->at(pos)))->MethodDef(mods, name, type, typarams, this->receiverParam, params, thrown, body, defaultValue)))));
			attach(result, dc);
			$assign(var$2, result);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$set(this, receiverParam, prevReceiverParam);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$List* JavacParser::qualidentList(bool allowAnnos) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, ts, $new($ListBuffer));
	$var($List, typeAnnos, allowAnnos ? typeAnnotationsOpt() : $List::nil());
	$var($JCTree$JCExpression, qi, qualident(allowAnnos));
	if (!$nc(typeAnnos)->isEmpty()) {
		$var($JCTree$JCExpression, at, insertAnnotationsToMostInner(qi, typeAnnos, false));
		ts->append(at);
	} else {
		ts->append(qi);
	}
	$init($Tokens$TokenKind);
	while ($nc(this->token$)->kind == $Tokens$TokenKind::COMMA) {
		nextToken();
		$assign(typeAnnos, allowAnnos ? typeAnnotationsOpt() : $List::nil());
		$assign(qi, qualident(allowAnnos));
		if (!$nc(typeAnnos)->isEmpty()) {
			$var($JCTree$JCExpression, at, insertAnnotationsToMostInner(qi, typeAnnos, false));
			ts->append(at);
		} else {
			ts->append(qi);
		}
	}
	return ts->toList();
}

$List* JavacParser::typeParametersOpt() {
	$useLocalCurrentObjectStackCache();
	$init($Tokens$TokenKind);
	if ($nc(this->token$)->kind == $Tokens$TokenKind::LT) {
		$var($ListBuffer, typarams, $new($ListBuffer));
		nextToken();
		typarams->append($(typeParameter()));
		while ($nc(this->token$)->kind == $Tokens$TokenKind::COMMA) {
			nextToken();
			typarams->append($(typeParameter()));
		}
		accept($Tokens$TokenKind::GT);
		return typarams->toList();
	} else {
		return $List::nil();
	}
}

$JCTree$JCTypeParameter* JavacParser::typeParameter() {
	$useLocalCurrentObjectStackCache();
	int32_t pos = $nc(this->token$)->pos;
	$var($List, annos, typeAnnotationsOpt());
	$var($Name, name, typeName());
	$var($ListBuffer, bounds, $new($ListBuffer));
	$init($Tokens$TokenKind);
	if ($nc(this->token$)->kind == $Tokens$TokenKind::EXTENDS) {
		nextToken();
		bounds->append($(parseType()));
		while ($nc(this->token$)->kind == $Tokens$TokenKind::AMP) {
			nextToken();
			bounds->append($(parseType()));
		}
	}
	return $cast($JCTree$JCTypeParameter, toP($($nc($($nc(this->F)->at(pos)))->TypeParameter(name, $(bounds->toList()), annos))));
}

$List* JavacParser::formalParameters() {
	return formalParameters(false, false);
}

$List* JavacParser::formalParameters(bool lambdaParameters, bool recordComponents) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, params, $new($ListBuffer));
	$var($JCTree$JCVariableDecl, lastParam, nullptr);
	$init($Tokens$TokenKind);
	accept($Tokens$TokenKind::LPAREN);
	if ($nc(this->token$)->kind != $Tokens$TokenKind::RPAREN) {
		this->allowThisIdent = !lambdaParameters && !recordComponents;
		$assign(lastParam, formalParameter(lambdaParameters, recordComponents));
		if ($nc(lastParam)->nameexpr != nullptr) {
			$set(this, receiverParam, lastParam);
		} else {
			params->append(lastParam);
		}
		this->allowThisIdent = false;
		while ($nc(this->token$)->kind == $Tokens$TokenKind::COMMA) {
			if (((int64_t)($nc($nc(lastParam)->mods)->flags & (uint64_t)$Flags::VARARGS)) != 0) {
				$init($JCDiagnostic$DiagnosticFlag);
				$init($CompilerProperties$Errors);
				$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::SYNTAX, static_cast<$JCDiagnostic$DiagnosticPosition*>(lastParam), $CompilerProperties$Errors::VarargsMustBeLast);
			}
			nextToken();
			params->append($assign(lastParam, formalParameter(lambdaParameters, recordComponents)));
		}
	}
	if ($nc(this->token$)->kind == $Tokens$TokenKind::RPAREN) {
		nextToken();
	} else {
		setErrorEndPos($nc(this->token$)->pos);
		int32_t var$0 = $nc($($nc(this->S)->prevToken()))->endPos;
		reportSyntaxError(var$0, $($CompilerProperties$Errors::Expected3($Tokens$TokenKind::COMMA, $Tokens$TokenKind::RPAREN, $Tokens$TokenKind::LBRACKET)));
	}
	return params->toList();
}

$List* JavacParser::implicitParameters(bool hasParens) {
	$useLocalCurrentObjectStackCache();
	if (hasParens) {
		$init($Tokens$TokenKind);
		accept($Tokens$TokenKind::LPAREN);
	}
	$var($ListBuffer, params, $new($ListBuffer));
	$init($Tokens$TokenKind);
	if ($nc(this->token$)->kind != $Tokens$TokenKind::RPAREN && $nc(this->token$)->kind != $Tokens$TokenKind::ARROW) {
		params->append($(implicitParameter()));
		while ($nc(this->token$)->kind == $Tokens$TokenKind::COMMA) {
			nextToken();
			params->append($(implicitParameter()));
		}
	}
	if (hasParens) {
		accept($Tokens$TokenKind::RPAREN);
	}
	return params->toList();
}

$JCTree$JCModifiers* JavacParser::optFinal(int64_t flags) {
	$var($JCTree$JCModifiers, mods, modifiersOpt());
	checkNoMods((int64_t)($nc(mods)->flags & (uint64_t)(int64_t)~($Flags::FINAL | $Flags::DEPRECATED)));
	$nc(mods)->flags |= flags;
	return mods;
}

$JCTree$JCExpression* JavacParser::insertAnnotationsToMostInner($JCTree$JCExpression* type, $List* annos, bool createNewLevel) {
	$useLocalCurrentObjectStackCache();
	int32_t origEndPos = getEndPos(type);
	$var($JCTree$JCExpression, mostInnerType, type);
	$var($JCTree$JCArrayTypeTree, mostInnerArrayType, nullptr);
	$init($JCTree$Tag);
	while ($nc($($TreeInfo::typeIn(mostInnerType)))->hasTag($JCTree$Tag::TYPEARRAY)) {
		$assign(mostInnerArrayType, $cast($JCTree$JCArrayTypeTree, $TreeInfo::typeIn(mostInnerType)));
		$assign(mostInnerType, $nc(mostInnerArrayType)->elemtype);
	}
	if (createNewLevel) {
		$assign(mostInnerType, $cast($JCTree$JCExpression, to($($nc($($nc(this->F)->at($nc(this->token$)->pos)))->TypeArray(mostInnerType)))));
		origEndPos = getEndPos(mostInnerType);
	}
	$var($JCTree$JCExpression, mostInnerTypeToReturn, mostInnerType);
	if ($nc(annos)->nonEmpty()) {
		$var($JCTree$JCExpression, lastToModify, mostInnerType);
		while (true) {
			bool var$0 = $nc($($TreeInfo::typeIn(mostInnerType)))->hasTag($JCTree$Tag::SELECT);
			if (!(var$0 || $nc($($TreeInfo::typeIn(mostInnerType)))->hasTag($JCTree$Tag::TYPEAPPLY))) {
				break;
			}
			{
				while ($nc($($TreeInfo::typeIn(mostInnerType)))->hasTag($JCTree$Tag::SELECT)) {
					$assign(lastToModify, mostInnerType);
					$assign(mostInnerType, $cast($JCTree$JCExpression, $nc(($cast($JCTree$JCFieldAccess, $($TreeInfo::typeIn(mostInnerType)))))->getExpression()));
				}
				while ($nc($($TreeInfo::typeIn(mostInnerType)))->hasTag($JCTree$Tag::TYPEAPPLY)) {
					$assign(lastToModify, mostInnerType);
					$assign(mostInnerType, $nc(($cast($JCTree$JCTypeApply, $($TreeInfo::typeIn(mostInnerType)))))->clazz);
				}
			}
		}
		$assign(mostInnerType, $nc($($nc(this->F)->at($nc(($cast($JCTree$JCAnnotation, annos->head)))->pos$)))->AnnotatedType(annos, mostInnerType));
		if ($nc($($TreeInfo::typeIn(lastToModify)))->hasTag($JCTree$Tag::TYPEAPPLY)) {
			$set($nc($cast($JCTree$JCTypeApply, $($TreeInfo::typeIn(lastToModify)))), clazz, mostInnerType);
		} else {
			if ($nc($($TreeInfo::typeIn(lastToModify)))->hasTag($JCTree$Tag::SELECT)) {
				$set($nc($cast($JCTree$JCFieldAccess, $($TreeInfo::typeIn(lastToModify)))), selected, mostInnerType);
			} else {
				$assign(mostInnerTypeToReturn, mostInnerType);
			}
		}
	}
	if (mostInnerArrayType == nullptr) {
		return mostInnerTypeToReturn;
	} else {
		$set($nc(mostInnerArrayType), elemtype, mostInnerTypeToReturn);
		storeEnd(type, origEndPos);
		return type;
	}
}

$JCTree$JCVariableDecl* JavacParser::formalParameter(bool lambdaParameter, bool recordComponent) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCModifiers, mods, !recordComponent ? optFinal($Flags::PARAMETER) : modifiersOpt());
	if (recordComponent && $nc(mods)->flags != 0) {
		$init($CompilerProperties$Errors);
		$nc(this->log)->error(mods->pos$, $CompilerProperties$Errors::RecordCantDeclareFieldModifiers);
	}
	if (recordComponent) {
		$nc(mods)->flags |= (($Flags::RECORD | $Flags::FINAL) | $Flags::PRIVATE) | $Flags::GENERATED_MEMBER;
	}
	this->permitTypeAnnotationsPushBack = true;
	$var($JCTree$JCExpression, type, parseType(lambdaParameter));
	this->permitTypeAnnotationsPushBack = false;
	$init($Tokens$TokenKind);
	if ($nc(this->token$)->kind == $Tokens$TokenKind::ELLIPSIS) {
		$var($List, varargsAnnos, this->typeAnnotationsPushedBack);
		$set(this, typeAnnotationsPushedBack, $List::nil());
		$nc(mods)->flags |= $Flags::VARARGS;
		$assign(type, insertAnnotationsToMostInner(type, varargsAnnos, true));
		nextToken();
	} else {
		if ($nc(this->typeAnnotationsPushedBack)->nonEmpty()) {
			$init($CompilerProperties$Errors);
			reportSyntaxError($nc(($cast($JCTree$JCAnnotation, $nc(this->typeAnnotationsPushedBack)->head)))->pos$, $CompilerProperties$Errors::IllegalStartOfType);
		}
		$set(this, typeAnnotationsPushedBack, $List::nil());
	}
	return variableDeclaratorId(mods, type, lambdaParameter, recordComponent);
}

$JCTree$JCVariableDecl* JavacParser::implicitParameter() {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCModifiers, mods, $nc($($nc(this->F)->at($nc(this->token$)->pos)))->Modifiers($Flags::PARAMETER));
	return variableDeclaratorId(mods, nullptr, true, false);
}

$JCTree$JCExpression* JavacParser::checkExprStat($JCTree$JCExpression* t) {
	$useLocalCurrentObjectStackCache();
	if (!$TreeInfo::isExpressionStatement(t)) {
		$var($JCTree$JCExpression, ret, $nc($($nc(this->F)->at($nc(t)->pos$)))->Erroneous($($List::of(t))));
		$init($JCDiagnostic$DiagnosticFlag);
		$init($CompilerProperties$Errors);
		$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::SYNTAX, static_cast<$JCDiagnostic$DiagnosticPosition*>(ret), $CompilerProperties$Errors::NotStmt);
		return ret;
	} else {
		return t;
	}
}

int32_t JavacParser::prec($Tokens$TokenKind* token) {
	$init(JavacParser);
	$JCTree$Tag* oc = optag(token);
	$init($JCTree$Tag);
	return (oc != $JCTree$Tag::NO_TAG) ? $TreeInfo::opPrec(oc) : -1;
}

int32_t JavacParser::earlier(int32_t pos1, int32_t pos2) {
	$init(JavacParser);
	if (pos1 == $Position::NOPOS) {
		return pos2;
	}
	if (pos2 == $Position::NOPOS) {
		return pos1;
	}
	return (pos1 < pos2 ? pos1 : pos2);
}

$JCTree$Tag* JavacParser::optag($Tokens$TokenKind* token) {
	$init(JavacParser);
	$init($JavacParser$1);
	switch ($nc($JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->get($nc((token))->ordinal())) {
	case 95:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::OR;
		}
	case 96:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::AND;
		}
	case 97:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::BITOR;
		}
	case 68:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::BITOR_ASG;
		}
	case 98:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::BITXOR;
		}
	case 69:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::BITXOR_ASG;
		}
	case 92:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::BITAND;
		}
	case 67:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::BITAND_ASG;
		}
	case 99:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::EQ;
		}
	case 100:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::NE;
		}
	case 21:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::LT;
		}
	case 91:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::GT;
		}
	case 101:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::LE;
		}
	case 93:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::GE;
		}
	case 102:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::SL;
		}
	case 70:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::SL_ASG;
		}
	case 90:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::SR;
		}
	case 71:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::SR_ASG;
		}
	case 89:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::USR;
		}
	case 72:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::USR_ASG;
		}
	case 82:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::PLUS;
		}
	case 62:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::PLUS_ASG;
		}
	case 83:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::MINUS;
		}
	case 63:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::MINUS_ASG;
		}
	case 103:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::MUL;
		}
	case 64:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::MUL_ASG;
		}
	case 104:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::DIV;
		}
	case 65:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::DIV_ASG;
		}
	case 105:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::MOD;
		}
	case 66:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::MOD_ASG;
		}
	case 106:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::TYPETEST;
		}
	default:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::NO_TAG;
		}
	}
}

$JCTree$Tag* JavacParser::unoptag($Tokens$TokenKind* token) {
	$init(JavacParser);
	$init($JavacParser$1);
	switch ($nc($JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->get($nc((token))->ordinal())) {
	case 82:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::POS;
		}
	case 83:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::NEG;
		}
	case 80:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::NOT;
		}
	case 81:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::COMPL;
		}
	case 78:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::PREINC;
		}
	case 79:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::PREDEC;
		}
	default:
		{
			$init($JCTree$Tag);
			return $JCTree$Tag::NO_TAG;
		}
	}
}

$TypeTag* JavacParser::typetag($Tokens$TokenKind* token) {
	$init(JavacParser);
	$init($JavacParser$1);
	switch ($nc($JavacParser$1::$SwitchMap$com$sun$tools$javac$parser$Tokens$TokenKind)->get($nc((token))->ordinal())) {
	case 22:
		{
			$init($TypeTag);
			return $TypeTag::BYTE;
		}
	case 24:
		{
			$init($TypeTag);
			return $TypeTag::CHAR;
		}
	case 23:
		{
			$init($TypeTag);
			return $TypeTag::SHORT;
		}
	case 25:
		{
			$init($TypeTag);
			return $TypeTag::INT;
		}
	case 26:
		{
			$init($TypeTag);
			return $TypeTag::LONG;
		}
	case 27:
		{
			$init($TypeTag);
			return $TypeTag::FLOAT;
		}
	case 28:
		{
			$init($TypeTag);
			return $TypeTag::DOUBLE;
		}
	case 29:
		{
			$init($TypeTag);
			return $TypeTag::BOOLEAN;
		}
	default:
		{
			$init($TypeTag);
			return $TypeTag::NONE;
		}
	}
}

void JavacParser::checkSourceLevel($Source$Feature* feature) {
	checkSourceLevel($nc(this->token$)->pos, feature);
}

void JavacParser::checkSourceLevel(int32_t pos, $Source$Feature* feature) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(this->preview)->isPreview(feature);
	if (var$0 && !$nc(this->preview)->isEnabled()) {
		$init($JCDiagnostic$DiagnosticFlag);
		$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::SOURCE_LEVEL, pos, $($nc(this->preview)->disabledError(feature)));
	} else if (!$nc(feature)->allowedInSource(this->source)) {
		$init($JCDiagnostic$DiagnosticFlag);
		$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::SOURCE_LEVEL, pos, $(feature->error($nc(this->source)->name$)));
	} else if ($nc(this->preview)->isPreview(feature)) {
		$nc(this->preview)->warnPreview(pos, feature);
	}
}

bool JavacParser::lambda$new$3($Tokens$TokenKind* t) {
	$init(JavacParser);
	$init($Tokens$TokenKind);
	return t == $Tokens$TokenKind::IDENTIFIER || t == $Tokens$TokenKind::UNDERSCORE || t == $Tokens$TokenKind::ASSERT || t == $Tokens$TokenKind::ENUM;
}

$JCDiagnostic$Error* JavacParser::lambda$switchExpressionStatementGroup$2($Tokens$TokenKind* tk) {
	$init(JavacParser);
	$init($Tokens$TokenKind);
	return $CompilerProperties$Errors::Expected2($Tokens$TokenKind::COLON, $Tokens$TokenKind::ARROW);
}

$String* JavacParser::lambda$merge$1($JCTree$JCLiteral* lit) {
	$init(JavacParser);
	return $cast($String, $nc(lit)->getValue());
}

$JCTree$JCAnnotation* JavacParser::lambda$term2Rest$0($JCTree$JCAnnotation* decl) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCAnnotation, typeAnno, $nc($($nc(this->F)->at($nc(decl)->pos$)))->TypeAnnotation($nc(decl)->annotationType, decl->args));
	$nc(this->endPosTable)->replaceTree(decl, typeAnno);
	return typeAnno;
}

void clinit$JavacParser($Class* class$) {
	$useLocalCurrentObjectStackCache();
	JavacParser::$assertionsDisabled = !JavacParser::class$->desiredAssertionStatus();
	$init($CompilerProperties$Fragments);
	$assignStatic(JavacParser::decisionTable, $new($JCDiagnostic$FragmentArray2, {
		$$new($JCDiagnostic$FragmentArray, {
			($JCDiagnostic$Fragment*)nullptr,
			$CompilerProperties$Fragments::VarAndExplicitNotAllowed,
			$CompilerProperties$Fragments::VarAndImplicitNotAllowed
		}),
		$$new($JCDiagnostic$FragmentArray, {
			$CompilerProperties$Fragments::VarAndExplicitNotAllowed,
			($JCDiagnostic$Fragment*)nullptr,
			$CompilerProperties$Fragments::ImplicitAndExplicitNotAllowed
		}),
		$$new($JCDiagnostic$FragmentArray, {
			$CompilerProperties$Fragments::VarAndImplicitNotAllowed,
			$CompilerProperties$Fragments::ImplicitAndExplicitNotAllowed,
			($JCDiagnostic$Fragment*)nullptr
		})
	}));
}

JavacParser::JavacParser() {
}

$Class* JavacParser::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JavacParser$$Lambda$lambda$new$3::classInfo$.name)) {
			return JavacParser$$Lambda$lambda$new$3::load$(name, initialize);
		}
		if (name->equals(JavacParser$$Lambda$Expected$1::classInfo$.name)) {
			return JavacParser$$Lambda$Expected$1::load$(name, initialize);
		}
		if (name->equals(JavacParser$$Lambda$lambda$term2Rest$0$2::classInfo$.name)) {
			return JavacParser$$Lambda$lambda$term2Rest$0$2::load$(name, initialize);
		}
		if (name->equals(JavacParser$$Lambda$lambda$merge$1$3::classInfo$.name)) {
			return JavacParser$$Lambda$lambda$merge$1$3::load$(name, initialize);
		}
		if (name->equals(JavacParser$$Lambda$lambda$switchExpressionStatementGroup$2$4::classInfo$.name)) {
			return JavacParser$$Lambda$lambda$switchExpressionStatementGroup$2$4::load$(name, initialize);
		}
	}
	$loadClass(JavacParser, name, initialize, &_JavacParser_ClassInfo_, clinit$JavacParser, allocate$JavacParser);
	return class$;
}

$Class* JavacParser::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com