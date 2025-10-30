#include <com/sun/tools/javac/tree/Pretty.h>

#include <com/sun/source/tree/CaseTree$CaseKind.h>
#include <com/sun/source/tree/MemberReferenceTree$ReferenceMode.h>
#include <com/sun/source/tree/ModuleTree$ModuleKind.h>
#include <com/sun/tools/javac/code/BoundKind.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/tree/DocCommentTable.h>
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
#include <com/sun/tools/javac/tree/JCTree$JCLambda$ParameterKind.h>
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
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/Pretty$1.h>
#include <com/sun/tools/javac/tree/Pretty$1UsedVisitor.h>
#include <com/sun/tools/javac/tree/Pretty$UncheckedIOException.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/util/Convert.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name$Table.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/io/IOException.h>
#include <java/io/StringWriter.h>
#include <java/io/Writer.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Error.h>
#include <java/lang/Number.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef ANNOTATED_TYPE
#undef DEFAULTCASELABEL
#undef ENUM
#undef EXPLICIT
#undef IMPORT
#undef INVOKE
#undef NEWCLASS
#undef OPEN
#undef PACKAGEDEF
#undef PARENS
#undef PREFERRED_LENGTH
#undef SELECT
#undef STATEMENT
#undef TYPEARRAY
#undef UNBOUND
#undef VARDEF

using $CaseTree$CaseKind = ::com::sun::source::tree::CaseTree$CaseKind;
using $MemberReferenceTree$ReferenceMode = ::com::sun::source::tree::MemberReferenceTree$ReferenceMode;
using $ModuleTree$ModuleKind = ::com::sun::source::tree::ModuleTree$ModuleKind;
using $BoundKind = ::com::sun::tools::javac::code::BoundKind;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $DocCommentTable = ::com::sun::tools::javac::tree::DocCommentTable;
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
using $JCTree$JCLambda$ParameterKind = ::com::sun::tools::javac::tree::JCTree$JCLambda$ParameterKind;
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
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $Pretty$1 = ::com::sun::tools::javac::tree::Pretty$1;
using $Pretty$1UsedVisitor = ::com::sun::tools::javac::tree::Pretty$1UsedVisitor;
using $Pretty$UncheckedIOException = ::com::sun::tools::javac::tree::Pretty$UncheckedIOException;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $Convert = ::com::sun::tools::javac::util::Convert;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $Name$Table = ::com::sun::tools::javac::util::Name$Table;
using $Names = ::com::sun::tools::javac::util::Names;
using $IOException = ::java::io::IOException;
using $StringWriter = ::java::io::StringWriter;
using $Writer = ::java::io::Writer;
using $AssertionError = ::java::lang::AssertionError;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Number = ::java::lang::Number;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _Pretty_FieldInfo_[] = {
	{"sourceOutput", "Z", nullptr, $PRIVATE | $FINAL, $field(Pretty, sourceOutput)},
	{"out", "Ljava/io/Writer;", nullptr, 0, $field(Pretty, out)},
	{"width", "I", nullptr, $PUBLIC, $field(Pretty, width)},
	{"lmargin", "I", nullptr, 0, $field(Pretty, lmargin)},
	{"enclClassName", "Lcom/sun/tools/javac/util/Name;", nullptr, 0, $field(Pretty, enclClassName)},
	{"docComments", "Lcom/sun/tools/javac/tree/DocCommentTable;", nullptr, 0, $field(Pretty, docComments)},
	{"trimSequence", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Pretty, trimSequence)},
	{"PREFERRED_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Pretty, PREFERRED_LENGTH)},
	{"lineSep", "Ljava/lang/String;", nullptr, 0, $field(Pretty, lineSep)},
	{"prec", "I", nullptr, 0, $field(Pretty, prec)},
	{}
};

$MethodInfo _Pretty_MethodInfo_[] = {
	{"<init>", "(Ljava/io/Writer;Z)V", nullptr, $PUBLIC, $method(static_cast<void(Pretty::*)($Writer*,bool)>(&Pretty::init$))},
	{"align", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{"close", "(II)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"indent", "()V", nullptr, 0},
	{"isEnumerator", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, 0},
	{"isUsed", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, 0},
	{"lineEndPos", "(Ljava/lang/String;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($String*,int32_t)>(&Pretty::lineEndPos))},
	{"open", "(II)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"operatorName", "(Lcom/sun/tools/javac/tree/JCTree$Tag;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"print", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"printAnnotations", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;)V", $PUBLIC, nullptr, "java.io.IOException"},
	{"printBaseElementType", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PRIVATE, $method(static_cast<void(Pretty::*)($JCTree*)>(&Pretty::printBaseElementType)), "java.io.IOException"},
	{"printBlock", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<+Lcom/sun/tools/javac/tree/JCTree;>;)V", $PUBLIC, nullptr, "java.io.IOException"},
	{"printBrackets", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PRIVATE, $method(static_cast<void(Pretty::*)($JCTree*)>(&Pretty::printBrackets)), "java.io.IOException"},
	{"printDocComment", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"printEnumBody", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;)V", $PUBLIC, nullptr, "java.io.IOException"},
	{"printExpr", "(Lcom/sun/tools/javac/tree/JCTree;I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"printExpr", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"printExprs", "(Lcom/sun/tools/javac/util/List;Ljava/lang/String;)V", "<T:Lcom/sun/tools/javac/tree/JCTree;>(Lcom/sun/tools/javac/util/List<TT;>;Ljava/lang/String;)V", $PUBLIC, nullptr, "java.io.IOException"},
	{"printExprs", "(Lcom/sun/tools/javac/util/List;)V", "<T:Lcom/sun/tools/javac/tree/JCTree;>(Lcom/sun/tools/javac/util/List<TT;>;)V", $PUBLIC, nullptr, "java.io.IOException"},
	{"printFlags", "(J)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"printPattern", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"printStat", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"printStats", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<+Lcom/sun/tools/javac/tree/JCTree;>;)V", $PUBLIC, nullptr, "java.io.IOException"},
	{"printTypeAnnotations", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;)V", $PUBLIC, nullptr, "java.io.IOException"},
	{"printTypeParameters", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;>;)V", $PUBLIC, nullptr, "java.io.IOException"},
	{"printUnit", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"println", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toSimpleString", "(Lcom/sun/tools/javac/tree/JCTree;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($JCTree*)>(&Pretty::toSimpleString))},
	{"toSimpleString", "(Lcom/sun/tools/javac/tree/JCTree;I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($JCTree*,int32_t)>(&Pretty::toSimpleString))},
	{"undent", "()V", nullptr, 0},
	{"visitAnnotatedType", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotatedType;)V", nullptr, $PUBLIC},
	{"visitAnnotation", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;)V", nullptr, $PUBLIC},
	{"visitApply", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;)V", nullptr, $PUBLIC},
	{"visitAssert", "(Lcom/sun/tools/javac/tree/JCTree$JCAssert;)V", nullptr, $PUBLIC},
	{"visitAssign", "(Lcom/sun/tools/javac/tree/JCTree$JCAssign;)V", nullptr, $PUBLIC},
	{"visitAssignop", "(Lcom/sun/tools/javac/tree/JCTree$JCAssignOp;)V", nullptr, $PUBLIC},
	{"visitBinary", "(Lcom/sun/tools/javac/tree/JCTree$JCBinary;)V", nullptr, $PUBLIC},
	{"visitBindingPattern", "(Lcom/sun/tools/javac/tree/JCTree$JCBindingPattern;)V", nullptr, $PUBLIC},
	{"visitBlock", "(Lcom/sun/tools/javac/tree/JCTree$JCBlock;)V", nullptr, $PUBLIC},
	{"visitBreak", "(Lcom/sun/tools/javac/tree/JCTree$JCBreak;)V", nullptr, $PUBLIC},
	{"visitCase", "(Lcom/sun/tools/javac/tree/JCTree$JCCase;)V", nullptr, $PUBLIC},
	{"visitCatch", "(Lcom/sun/tools/javac/tree/JCTree$JCCatch;)V", nullptr, $PUBLIC},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"visitConditional", "(Lcom/sun/tools/javac/tree/JCTree$JCConditional;)V", nullptr, $PUBLIC},
	{"visitContinue", "(Lcom/sun/tools/javac/tree/JCTree$JCContinue;)V", nullptr, $PUBLIC},
	{"visitDefaultCaseLabel", "(Lcom/sun/tools/javac/tree/JCTree$JCDefaultCaseLabel;)V", nullptr, $PUBLIC},
	{"visitDoLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCDoWhileLoop;)V", nullptr, $PUBLIC},
	{"visitErroneous", "(Lcom/sun/tools/javac/tree/JCTree$JCErroneous;)V", nullptr, $PUBLIC},
	{"visitExec", "(Lcom/sun/tools/javac/tree/JCTree$JCExpressionStatement;)V", nullptr, $PUBLIC},
	{"visitExports", "(Lcom/sun/tools/javac/tree/JCTree$JCExports;)V", nullptr, $PUBLIC},
	{"visitForLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCForLoop;)V", nullptr, $PUBLIC},
	{"visitForeachLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCEnhancedForLoop;)V", nullptr, $PUBLIC},
	{"visitGuardPattern", "(Lcom/sun/tools/javac/tree/JCTree$JCGuardPattern;)V", nullptr, $PUBLIC},
	{"visitIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCIdent;)V", nullptr, $PUBLIC},
	{"visitIf", "(Lcom/sun/tools/javac/tree/JCTree$JCIf;)V", nullptr, $PUBLIC},
	{"visitImport", "(Lcom/sun/tools/javac/tree/JCTree$JCImport;)V", nullptr, $PUBLIC},
	{"visitIndexed", "(Lcom/sun/tools/javac/tree/JCTree$JCArrayAccess;)V", nullptr, $PUBLIC},
	{"visitLabelled", "(Lcom/sun/tools/javac/tree/JCTree$JCLabeledStatement;)V", nullptr, $PUBLIC},
	{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC},
	{"visitLetExpr", "(Lcom/sun/tools/javac/tree/JCTree$LetExpr;)V", nullptr, $PUBLIC},
	{"visitLiteral", "(Lcom/sun/tools/javac/tree/JCTree$JCLiteral;)V", nullptr, $PUBLIC},
	{"visitMethodDef", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", nullptr, $PUBLIC},
	{"visitModifiers", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;)V", nullptr, $PUBLIC},
	{"visitModuleDef", "(Lcom/sun/tools/javac/tree/JCTree$JCModuleDecl;)V", nullptr, $PUBLIC},
	{"visitNewArray", "(Lcom/sun/tools/javac/tree/JCTree$JCNewArray;)V", nullptr, $PUBLIC},
	{"visitNewClass", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)V", nullptr, $PUBLIC},
	{"visitOpens", "(Lcom/sun/tools/javac/tree/JCTree$JCOpens;)V", nullptr, $PUBLIC},
	{"visitPackageDef", "(Lcom/sun/tools/javac/tree/JCTree$JCPackageDecl;)V", nullptr, $PUBLIC},
	{"visitParens", "(Lcom/sun/tools/javac/tree/JCTree$JCParens;)V", nullptr, $PUBLIC},
	{"visitParenthesizedPattern", "(Lcom/sun/tools/javac/tree/JCTree$JCParenthesizedPattern;)V", nullptr, $PUBLIC},
	{"visitProvides", "(Lcom/sun/tools/javac/tree/JCTree$JCProvides;)V", nullptr, $PUBLIC},
	{"visitReference", "(Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;)V", nullptr, $PUBLIC},
	{"visitRequires", "(Lcom/sun/tools/javac/tree/JCTree$JCRequires;)V", nullptr, $PUBLIC},
	{"visitReturn", "(Lcom/sun/tools/javac/tree/JCTree$JCReturn;)V", nullptr, $PUBLIC},
	{"visitSelect", "(Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;)V", nullptr, $PUBLIC},
	{"visitSkip", "(Lcom/sun/tools/javac/tree/JCTree$JCSkip;)V", nullptr, $PUBLIC},
	{"visitSwitch", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitch;)V", nullptr, $PUBLIC},
	{"visitSwitchExpression", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;)V", nullptr, $PUBLIC},
	{"visitSynchronized", "(Lcom/sun/tools/javac/tree/JCTree$JCSynchronized;)V", nullptr, $PUBLIC},
	{"visitThrow", "(Lcom/sun/tools/javac/tree/JCTree$JCThrow;)V", nullptr, $PUBLIC},
	{"visitTopLevel", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)V", nullptr, $PUBLIC},
	{"visitTree", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC},
	{"visitTry", "(Lcom/sun/tools/javac/tree/JCTree$JCTry;)V", nullptr, $PUBLIC},
	{"visitTypeApply", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeApply;)V", nullptr, $PUBLIC},
	{"visitTypeArray", "(Lcom/sun/tools/javac/tree/JCTree$JCArrayTypeTree;)V", nullptr, $PUBLIC},
	{"visitTypeBoundKind", "(Lcom/sun/tools/javac/tree/JCTree$TypeBoundKind;)V", nullptr, $PUBLIC},
	{"visitTypeCast", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeCast;)V", nullptr, $PUBLIC},
	{"visitTypeIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCPrimitiveTypeTree;)V", nullptr, $PUBLIC},
	{"visitTypeIntersection", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeIntersection;)V", nullptr, $PUBLIC},
	{"visitTypeParameter", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;)V", nullptr, $PUBLIC},
	{"visitTypeTest", "(Lcom/sun/tools/javac/tree/JCTree$JCInstanceOf;)V", nullptr, $PUBLIC},
	{"visitTypeUnion", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeUnion;)V", nullptr, $PUBLIC},
	{"visitUnary", "(Lcom/sun/tools/javac/tree/JCTree$JCUnary;)V", nullptr, $PUBLIC},
	{"visitUses", "(Lcom/sun/tools/javac/tree/JCTree$JCUses;)V", nullptr, $PUBLIC},
	{"visitVarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PUBLIC},
	{"visitWhileLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCWhileLoop;)V", nullptr, $PUBLIC},
	{"visitWildcard", "(Lcom/sun/tools/javac/tree/JCTree$JCWildcard;)V", nullptr, $PUBLIC},
	{"visitYield", "(Lcom/sun/tools/javac/tree/JCTree$JCYield;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Pretty_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$Visitor", "com.sun.tools.javac.tree.JCTree", "Visitor", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.tree.Pretty$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.tree.Pretty$UncheckedIOException", "com.sun.tools.javac.tree.Pretty", "UncheckedIOException", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.tree.Pretty$1UsedVisitor", nullptr, "UsedVisitor", 0},
	{}
};

$ClassInfo _Pretty_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.Pretty",
	"com.sun.tools.javac.tree.JCTree$Visitor",
	nullptr,
	_Pretty_FieldInfo_,
	_Pretty_MethodInfo_,
	nullptr,
	nullptr,
	_Pretty_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.Pretty$1,com.sun.tools.javac.tree.Pretty$UncheckedIOException,com.sun.tools.javac.tree.Pretty$1UsedVisitor"
};

$Object* allocate$Pretty($Class* clazz) {
	return $of($alloc(Pretty));
}

$String* Pretty::trimSequence = nullptr;

void Pretty::init$($Writer* out, bool sourceOutput) {
	$JCTree$Visitor::init$();
	this->width = 4;
	this->lmargin = 0;
	$set(this, docComments, nullptr);
	$set(this, lineSep, $System::getProperty("line.separator"_s));
	$set(this, out, out);
	this->sourceOutput = sourceOutput;
}

void Pretty::align() {
	for (int32_t i = 0; i < this->lmargin; ++i) {
		$nc(this->out)->write(" "_s);
	}
}

void Pretty::indent() {
	this->lmargin = this->lmargin + this->width;
}

void Pretty::undent() {
	this->lmargin = this->lmargin - this->width;
}

void Pretty::open(int32_t contextPrec, int32_t ownPrec) {
	if (ownPrec < contextPrec) {
		$nc(this->out)->write("("_s);
	}
}

void Pretty::close(int32_t contextPrec, int32_t ownPrec) {
	if (ownPrec < contextPrec) {
		$nc(this->out)->write(")"_s);
	}
}

void Pretty::print(Object$* s) {
	$useLocalCurrentObjectStackCache();
	$nc(this->out)->write($($Convert::escapeUnicode($($nc($of(s))->toString()))));
}

void Pretty::println() {
	$nc(this->out)->write(this->lineSep);
}

$String* Pretty::toSimpleString($JCTree* tree) {
	$init(Pretty);
	return toSimpleString(tree, Pretty::PREFERRED_LENGTH);
}

$String* Pretty::toSimpleString($JCTree* tree, int32_t maxLength) {
	$init(Pretty);
	$useLocalCurrentObjectStackCache();
	$var($StringWriter, s, $new($StringWriter));
	try {
		$$new(Pretty, s, false)->printExpr(tree);
	} catch ($IOException& e) {
		$throwNew($AssertionError, $of(e));
	}
	$var($String, res, $($($nc($(s->toString()))->trim())->replaceAll("\\s+"_s, " "_s))->replaceAll("/\\*missing\\*/"_s, ""_s));
	if (res->length() < maxLength) {
		return res;
	} else {
		int32_t head = (maxLength - $nc(Pretty::trimSequence)->length()) * 2 / 3;
		int32_t tail = maxLength - $nc(Pretty::trimSequence)->length() - head;
		$var($String, var$0, $$str({$(res->substring(0, head)), Pretty::trimSequence}));
		return $concat(var$0, $(res->substring(res->length() - tail)));
	}
}

void Pretty::printExpr($JCTree* tree, int32_t prec) {
	$useLocalCurrentObjectStackCache();
	int32_t prevPrec = this->prec;
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				this->prec = prec;
				if (tree == nullptr) {
					print("/*missing*/"_s);
				} else {
					$nc(tree)->accept(this);
				}
			} catch ($Pretty$UncheckedIOException& ex) {
				$var($IOException, e, $new($IOException, $(ex->getMessage())));
				e->initCause(ex);
				$throw(e);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			this->prec = prevPrec;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Pretty::printExpr($JCTree* tree) {
	printExpr(tree, $TreeInfo::noPrec);
}

void Pretty::printStat($JCTree* tree) {
	printExpr(tree, $TreeInfo::notExpression);
}

void Pretty::printExprs($List* trees, $String* sep) {
	if ($nc(trees)->nonEmpty()) {
		printExpr($cast($JCTree, trees->head));
		{
			$var($List, l, trees->tail);
			for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
				print(sep);
				printExpr($cast($JCTree, l->head));
			}
		}
	}
}

void Pretty::printExprs($List* trees) {
	printExprs(trees, ", "_s);
}

void Pretty::printPattern($JCTree* tree) {
	printExpr(tree);
}

void Pretty::printStats($List* trees) {
	{
		$var($List, l, trees);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			align();
			printStat($cast($JCTree, l->head));
			println();
		}
	}
}

void Pretty::printFlags(int64_t flags) {
	if (((int64_t)(flags & (uint64_t)(int64_t)4096)) != 0) {
		print("/*synthetic*/ "_s);
	}
	print($($TreeInfo::flagNames(flags)));
	if (((int64_t)(flags & (uint64_t)(int64_t)0xC000080000000FFF)) != 0) {
		print(" "_s);
	}
	if (((int64_t)(flags & (uint64_t)(int64_t)8192)) != 0) {
		print("@"_s);
	}
}

void Pretty::printAnnotations($List* trees) {
	{
		$var($List, l, trees);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			printStat($cast($JCTree, l->head));
			println();
			align();
		}
	}
}

void Pretty::printTypeAnnotations($List* trees) {
	{
		$var($List, l, trees);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			printExpr($cast($JCTree, l->head));
			print(" "_s);
		}
	}
}

void Pretty::printDocComment($JCTree* tree) {
	$useLocalCurrentObjectStackCache();
	if (this->docComments != nullptr) {
		$var($String, dc, $nc(this->docComments)->getCommentText(tree));
		if (dc != nullptr) {
			print("/**"_s);
			println();
			int32_t pos = 0;
			int32_t endpos = lineEndPos(dc, pos);
			while (pos < dc->length()) {
				align();
				print(" *"_s);
				bool var$0 = pos < dc->length();
				if (var$0 && dc->charAt(pos) > u' ') {
					print(" "_s);
				}
				print($(dc->substring(pos, endpos)));
				println();
				pos = endpos + 1;
				endpos = lineEndPos(dc, pos);
			}
			align();
			print(" */"_s);
			println();
			align();
		}
	}
}

int32_t Pretty::lineEndPos($String* s, int32_t start) {
	$init(Pretty);
	int32_t pos = $nc(s)->indexOf((int32_t)u'\n', start);
	if (pos < 0) {
		pos = s->length();
	}
	return pos;
}

void Pretty::printTypeParameters($List* trees) {
	if ($nc(trees)->nonEmpty()) {
		print("<"_s);
		printExprs(trees);
		print(">"_s);
	}
}

void Pretty::printBlock($List* stats) {
	print("{"_s);
	println();
	indent();
	printStats(stats);
	undent();
	align();
	print("}"_s);
}

void Pretty::printEnumBody($List* stats) {
	$useLocalCurrentObjectStackCache();
	print("{"_s);
	println();
	indent();
	bool first = true;
	{
		$var($List, l, stats);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			if (isEnumerator($cast($JCTree, l->head))) {
				if (!first) {
					print(","_s);
					println();
				}
				align();
				printStat($cast($JCTree, l->head));
				first = false;
			}
		}
	}
	print(";"_s);
	println();
	{
		$var($List, l, stats);
		for (; l->nonEmpty(); $assign(l, l->tail)) {
			if (!isEnumerator($cast($JCTree, $nc(l)->head))) {
				align();
				printStat($cast($JCTree, $nc(l)->head));
				println();
			}
		}
	}
	undent();
	align();
	print("}"_s);
}

bool Pretty::isEnumerator($JCTree* t) {
	$init($JCTree$Tag);
	return $nc(t)->hasTag($JCTree$Tag::VARDEF) && ((int64_t)($nc($nc(($cast($JCTree$JCVariableDecl, t)))->mods)->flags & (uint64_t)(int64_t)16384)) != 0;
}

void Pretty::printUnit($JCTree$JCCompilationUnit* tree, $JCTree$JCClassDecl* cdef) {
	$useLocalCurrentObjectStackCache();
	$set(this, docComments, $nc(tree)->docComments);
	printDocComment(tree);
	bool firstImport = true;
	{
		$var($List, l, tree->defs);
		for (;; $assign(l, $nc(l)->tail)) {
			bool var$0 = l->nonEmpty();
			if (var$0) {
				$init($JCTree$Tag);
				bool var$1 = cdef == nullptr || $nc(($cast($JCTree, l->head)))->hasTag($JCTree$Tag::IMPORT);
				var$0 = (var$1 || $nc(($cast($JCTree, l->head)))->hasTag($JCTree$Tag::PACKAGEDEF));
			}
			if (!(var$0)) {
				break;
			}
			{
				$init($JCTree$Tag);
				if ($nc(($cast($JCTree, l->head)))->hasTag($JCTree$Tag::IMPORT)) {
					$var($JCTree$JCImport, imp, $cast($JCTree$JCImport, l->head));
					$var($Name, name, $TreeInfo::name($nc(imp)->qualid));
					if (name == $nc($nc($nc(name)->table)->names)->asterisk || cdef == nullptr || isUsed($($TreeInfo::symbol($nc(imp)->qualid)), cdef)) {
						if (firstImport) {
							firstImport = false;
							println();
						}
						printStat(imp);
					}
				} else {
					printStat($cast($JCTree, l->head));
				}
			}
		}
	}
	if (cdef != nullptr) {
		printStat(cdef);
		println();
	}
}

bool Pretty::isUsed($Symbol* t, $JCTree* cdef) {
	{
	}
	$var($Pretty$1UsedVisitor, v, $new($Pretty$1UsedVisitor, this, t));
	v->scan(cdef);
	return v->result;
}

void Pretty::visitTopLevel($JCTree$JCCompilationUnit* tree) {
	try {
		printUnit(tree, nullptr);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitPackageDef($JCTree$JCPackageDecl* tree) {
	try {
		printDocComment(tree);
		printAnnotations($nc(tree)->annotations);
		if ($nc(tree)->pid != nullptr) {
			print("package "_s);
			printExpr(tree->pid);
			print(";"_s);
			println();
		}
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitModuleDef($JCTree$JCModuleDecl* tree) {
	try {
		printDocComment(tree);
		printAnnotations($nc($nc(tree)->mods)->annotations);
		$init($ModuleTree$ModuleKind);
		if ($nc(tree)->getModuleType() == $ModuleTree$ModuleKind::OPEN) {
			print("open "_s);
		}
		print("module "_s);
		printExpr($nc(tree)->qualId);
		if ($nc(tree)->directives == nullptr) {
			print(";"_s);
		} else {
			print(" "_s);
			printBlock(tree->directives);
		}
		println();
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitExports($JCTree$JCExports* tree) {
	try {
		print("exports "_s);
		printExpr($nc(tree)->qualid);
		if ($nc(tree)->moduleNames != nullptr) {
			print(" to "_s);
			printExprs(tree->moduleNames);
		}
		print(";"_s);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitOpens($JCTree$JCOpens* tree) {
	try {
		print("opens "_s);
		printExpr($nc(tree)->qualid);
		if ($nc(tree)->moduleNames != nullptr) {
			print(" to "_s);
			printExprs(tree->moduleNames);
		}
		print(";"_s);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitProvides($JCTree$JCProvides* tree) {
	try {
		print("provides "_s);
		printExpr($nc(tree)->serviceName);
		print(" with "_s);
		printExprs($nc(tree)->implNames);
		print(";"_s);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitRequires($JCTree$JCRequires* tree) {
	try {
		print("requires "_s);
		if ($nc(tree)->isStaticPhase) {
			print("static "_s);
		}
		if ($nc(tree)->isTransitive$) {
			print("transitive "_s);
		}
		printExpr($nc(tree)->moduleName);
		print(";"_s);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitUses($JCTree$JCUses* tree) {
	try {
		print("uses "_s);
		printExpr($nc(tree)->qualid);
		print(";"_s);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitImport($JCTree$JCImport* tree) {
	try {
		print("import "_s);
		if ($nc(tree)->staticImport) {
			print("static "_s);
		}
		printExpr($nc(tree)->qualid);
		print(";"_s);
		println();
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitClassDef($JCTree$JCClassDecl* tree) {
	$useLocalCurrentObjectStackCache();
	try {
		println();
		align();
		printDocComment(tree);
		printAnnotations($nc($nc(tree)->mods)->annotations);
		printFlags((int64_t)($nc($nc(tree)->mods)->flags & (uint64_t)(int64_t)~512));
		$var($Name, enclClassNamePrev, this->enclClassName);
		$set(this, enclClassName, $nc(tree)->name);
		if (((int64_t)($nc(tree->mods)->flags & (uint64_t)(int64_t)512)) != 0) {
			print($$str({"interface "_s, tree->name}));
			printTypeParameters(tree->typarams);
			if ($nc(tree->implementing)->nonEmpty()) {
				print(" extends "_s);
				printExprs(tree->implementing);
			}
			if ($nc(tree->permitting)->nonEmpty()) {
				print(" permits "_s);
				printExprs(tree->permitting);
			}
		} else {
			if (((int64_t)($nc(tree->mods)->flags & (uint64_t)(int64_t)16384)) != 0) {
				print($$str({"enum "_s, tree->name}));
			} else {
				print($$str({"class "_s, tree->name}));
			}
			printTypeParameters(tree->typarams);
			if (tree->extending != nullptr) {
				print(" extends "_s);
				printExpr(tree->extending);
			}
			if ($nc(tree->implementing)->nonEmpty()) {
				print(" implements "_s);
				printExprs(tree->implementing);
			}
			if ($nc(tree->permitting)->nonEmpty()) {
				print(" permits "_s);
				printExprs(tree->permitting);
			}
		}
		print(" "_s);
		if (((int64_t)($nc(tree->mods)->flags & (uint64_t)(int64_t)16384)) != 0) {
			printEnumBody(tree->defs);
		} else {
			printBlock(tree->defs);
		}
		$set(this, enclClassName, enclClassNamePrev);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitMethodDef($JCTree$JCMethodDecl* tree) {
	try {
		if ($nc(tree)->name == $nc($nc($nc(tree->name)->table)->names)->init && this->enclClassName == nullptr && this->sourceOutput) {
			return;
		}
		println();
		align();
		printDocComment(tree);
		printExpr($nc(tree)->mods);
		printTypeParameters($nc(tree)->typarams);
		if ($nc(tree)->name == $nc($nc($nc(tree->name)->table)->names)->init) {
			print(this->enclClassName != nullptr ? $of(this->enclClassName) : $of(tree->name));
		} else {
			printExpr(tree->restype);
			print($$str({" "_s, tree->name}));
		}
		print("("_s);
		if ($nc(tree)->recvparam != nullptr) {
			printExpr(tree->recvparam);
			if ($nc(tree->params)->size() > 0) {
				print(", "_s);
			}
		}
		printExprs($nc(tree)->params);
		print(")"_s);
		if ($nc($nc(tree)->thrown)->nonEmpty()) {
			print(" throws "_s);
			printExprs(tree->thrown);
		}
		if ($nc(tree)->defaultValue != nullptr) {
			print(" default "_s);
			printExpr(tree->defaultValue);
		}
		if ($nc(tree)->body != nullptr) {
			print(" "_s);
			printStat(tree->body);
		} else {
			print(";"_s);
		}
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitVarDef($JCTree$JCVariableDecl* tree) {
	$useLocalCurrentObjectStackCache();
	try {
		if (this->docComments != nullptr && $nc(this->docComments)->hasComment(tree)) {
			println();
			align();
		}
		printDocComment(tree);
		if (((int64_t)($nc($nc(tree)->mods)->flags & (uint64_t)(int64_t)16384)) != 0) {
			print("/*public static final*/ "_s);
			print(tree->name);
			if (tree->init != nullptr) {
				$init($JCTree$Tag);
				if ($nc(tree->init)->hasTag($JCTree$Tag::NEWCLASS)) {
					$var($JCTree$JCNewClass, init, $cast($JCTree$JCNewClass, tree->init));
					if (this->sourceOutput) {
						print(" /*enum*/ "_s);
						if ($nc(init)->args != nullptr && $nc(init->args)->nonEmpty()) {
							print("("_s);
							print(init->args);
							print(")"_s);
						}
						if ($nc(init)->def != nullptr && $nc(init->def)->defs != nullptr) {
							print(" "_s);
							printBlock($nc(init->def)->defs);
						}
						return;
					} else {
						print(" /* = "_s);
						print("new "_s);
						if ($nc(init)->def != nullptr && $nc($nc($nc(init->def)->mods)->annotations)->nonEmpty()) {
							printTypeAnnotations($nc($nc(init->def)->mods)->annotations);
						}
						printExpr($nc(init)->clazz);
						print("("_s);
						printExprs($nc(init)->args);
						print(")"_s);
						print(" */"_s);
						print(" /*enum*/ "_s);
						if ($nc(init)->args != nullptr && $nc(init->args)->nonEmpty()) {
							print("("_s);
							printExprs(init->args);
							print(")"_s);
						}
						if ($nc(init)->def != nullptr && $nc(init->def)->defs != nullptr) {
							print(" "_s);
							printBlock($nc(init->def)->defs);
						}
						return;
					}
				}
				print(" /* = "_s);
				printExpr(tree->init);
				print(" */"_s);
			}
		} else {
			printExpr(tree->mods);
			if (((int64_t)($nc(tree->mods)->flags & (uint64_t)(int64_t)0x0000000400000000)) != 0) {
				$var($JCTree, vartype, tree->vartype);
				$var($List, tas, nullptr);
				{
					$var($JCTree$JCAnnotatedType, annotatedType, nullptr);
					bool var$0 = $instanceOf($JCTree$JCAnnotatedType, vartype);
					if (var$0) {
						$assign(annotatedType, $cast($JCTree$JCAnnotatedType, vartype));
						var$0 = true;
					}
					if (var$0) {
						$assign(tas, $nc(annotatedType)->annotations);
						$assign(vartype, annotatedType->underlyingType);
					}
				}
				printExpr($nc(($cast($JCTree$JCArrayTypeTree, vartype)))->elemtype);
				if (tas != nullptr) {
					print($($Character::valueOf(u' ')));
					printTypeAnnotations(tas);
				}
				print($$str({"... "_s, tree->name}));
			} else {
				printExpr(tree->vartype);
				print($$str({" "_s, tree->name}));
			}
			if (tree->init != nullptr) {
				print(" = "_s);
				printExpr(tree->init);
			}
			if (this->prec == $TreeInfo::notExpression) {
				print(";"_s);
			}
		}
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitSkip($JCTree$JCSkip* tree) {
	try {
		print(";"_s);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitBlock($JCTree$JCBlock* tree) {
	try {
		printFlags($nc(tree)->flags);
		printBlock($nc(tree)->stats);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitDoLoop($JCTree$JCDoWhileLoop* tree) {
	try {
		print("do "_s);
		printStat($nc(tree)->body);
		align();
		print(" while "_s);
		$init($JCTree$Tag);
		if ($nc($nc(tree)->cond)->hasTag($JCTree$Tag::PARENS)) {
			printExpr(tree->cond);
		} else {
			print("("_s);
			printExpr(tree->cond);
			print(")"_s);
		}
		print(";"_s);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitWhileLoop($JCTree$JCWhileLoop* tree) {
	try {
		print("while "_s);
		$init($JCTree$Tag);
		if ($nc($nc(tree)->cond)->hasTag($JCTree$Tag::PARENS)) {
			printExpr(tree->cond);
		} else {
			print("("_s);
			printExpr(tree->cond);
			print(")"_s);
		}
		print(" "_s);
		printStat($nc(tree)->body);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitForLoop($JCTree$JCForLoop* tree) {
	$useLocalCurrentObjectStackCache();
	try {
		print("for ("_s);
		if ($nc($nc(tree)->init)->nonEmpty()) {
			$init($JCTree$Tag);
			if ($nc(($cast($JCTree$JCStatement, $nc(tree->init)->head)))->hasTag($JCTree$Tag::VARDEF)) {
				printExpr($cast($JCTree, $nc(tree->init)->head));
				{
					$var($List, l, $nc(tree->init)->tail);
					for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
						$var($JCTree$JCVariableDecl, vdef, $cast($JCTree$JCVariableDecl, l->head));
						print($$str({", "_s, $nc(vdef)->name}));
						if ($nc(vdef)->init != nullptr) {
							print(" = "_s);
							printExpr(vdef->init);
						}
					}
				}
			} else {
				printExprs(tree->init);
			}
		}
		print("; "_s);
		if ($nc(tree)->cond != nullptr) {
			printExpr(tree->cond);
		}
		print("; "_s);
		printExprs($nc(tree)->step);
		print(") "_s);
		printStat($nc(tree)->body);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitForeachLoop($JCTree$JCEnhancedForLoop* tree) {
	try {
		print("for ("_s);
		printExpr($nc(tree)->var);
		print(" : "_s);
		printExpr($nc(tree)->expr);
		print(") "_s);
		printStat($nc(tree)->body);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitLabelled($JCTree$JCLabeledStatement* tree) {
	try {
		print($$str({$nc(tree)->label, ": "_s}));
		printStat($nc(tree)->body);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitSwitch($JCTree$JCSwitch* tree) {
	try {
		print("switch "_s);
		$init($JCTree$Tag);
		if ($nc($nc(tree)->selector)->hasTag($JCTree$Tag::PARENS)) {
			printExpr(tree->selector);
		} else {
			print("("_s);
			printExpr(tree->selector);
			print(")"_s);
		}
		print(" {"_s);
		println();
		printStats($nc(tree)->cases);
		align();
		print("}"_s);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitCase($JCTree$JCCase* tree) {
	try {
		bool var$0 = $nc($nc(tree)->labels)->size() == 1;
		$init($JCTree$Tag);
		if (var$0 && $nc(($cast($JCTree$JCCaseLabel, $($nc(tree->labels)->get(0)))))->hasTag($JCTree$Tag::DEFAULTCASELABEL)) {
			print("default"_s);
		} else {
			print("case "_s);
			printExprs(tree->labels);
		}
		$init($JCTree$JCCase);
		if ($nc(tree)->caseKind == $JCTree$JCCase::STATEMENT) {
			print(":"_s);
			println();
			indent();
			printStats(tree->stats);
			undent();
			align();
		} else {
			print(" -> "_s);
			if ($nc(tree->stats)->size() == 1) {
				printStat($cast($JCTree, $nc(tree->stats)->head));
			} else {
				printBlock(tree->stats);
			}
		}
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitDefaultCaseLabel($JCTree$JCDefaultCaseLabel* that) {
	try {
		print("default"_s);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitSwitchExpression($JCTree$JCSwitchExpression* tree) {
	try {
		print("switch "_s);
		$init($JCTree$Tag);
		if ($nc($nc(tree)->selector)->hasTag($JCTree$Tag::PARENS)) {
			printExpr(tree->selector);
		} else {
			print("("_s);
			printExpr(tree->selector);
			print(")"_s);
		}
		print(" {"_s);
		println();
		printStats($nc(tree)->cases);
		align();
		print("}"_s);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitBindingPattern($JCTree$JCBindingPattern* patt) {
	try {
		printExpr($nc(patt)->var);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitParenthesizedPattern($JCTree$JCParenthesizedPattern* patt) {
	try {
		print("("_s);
		printExpr($nc(patt)->pattern);
		print(")"_s);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitGuardPattern($JCTree$JCGuardPattern* patt) {
	try {
		printExpr($nc(patt)->patt);
		print(" && "_s);
		printExpr($nc(patt)->expr);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitSynchronized($JCTree$JCSynchronized* tree) {
	try {
		print("synchronized "_s);
		$init($JCTree$Tag);
		if ($nc($nc(tree)->lock)->hasTag($JCTree$Tag::PARENS)) {
			printExpr(tree->lock);
		} else {
			print("("_s);
			printExpr(tree->lock);
			print(")"_s);
		}
		print(" "_s);
		printStat($nc(tree)->body);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitTry($JCTree$JCTry* tree) {
	$useLocalCurrentObjectStackCache();
	try {
		print("try "_s);
		if ($nc($nc(tree)->resources)->nonEmpty()) {
			print("("_s);
			bool first = true;
			{
				$var($Iterator, i$, $nc(tree->resources)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($JCTree, var, $cast($JCTree, i$->next()));
					{
						if (!first) {
							println();
							indent();
						}
						printStat(var);
						first = false;
					}
				}
			}
			print(") "_s);
		}
		printStat($nc(tree)->body);
		{
			$var($List, l, $nc(tree)->catchers);
			for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
				printStat($cast($JCTree, l->head));
			}
		}
		if (tree->finalizer != nullptr) {
			print(" finally "_s);
			printStat(tree->finalizer);
		}
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitCatch($JCTree$JCCatch* tree) {
	try {
		print(" catch ("_s);
		printExpr($nc(tree)->param);
		print(") "_s);
		printStat($nc(tree)->body);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitConditional($JCTree$JCConditional* tree) {
	try {
		open(this->prec, $TreeInfo::condPrec);
		printExpr($nc(tree)->cond, $TreeInfo::condPrec + 1);
		print(" ? "_s);
		printExpr($nc(tree)->truepart);
		print(" : "_s);
		printExpr($nc(tree)->falsepart, $TreeInfo::condPrec);
		close(this->prec, $TreeInfo::condPrec);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitIf($JCTree$JCIf* tree) {
	try {
		print("if "_s);
		$init($JCTree$Tag);
		if ($nc($nc(tree)->cond)->hasTag($JCTree$Tag::PARENS)) {
			printExpr(tree->cond);
		} else {
			print("("_s);
			printExpr(tree->cond);
			print(")"_s);
		}
		print(" "_s);
		printStat($nc(tree)->thenpart);
		if ($nc(tree)->elsepart != nullptr) {
			print(" else "_s);
			printStat(tree->elsepart);
		}
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitExec($JCTree$JCExpressionStatement* tree) {
	try {
		printExpr($nc(tree)->expr);
		if (this->prec == $TreeInfo::notExpression) {
			print(";"_s);
		}
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitBreak($JCTree$JCBreak* tree) {
	try {
		print("break"_s);
		if ($nc(tree)->label != nullptr) {
			print($$str({" "_s, tree->label}));
		}
		print(";"_s);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitYield($JCTree$JCYield* tree) {
	try {
		print("yield"_s);
		print(" "_s);
		printExpr($nc(tree)->value);
		print(";"_s);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitContinue($JCTree$JCContinue* tree) {
	try {
		print("continue"_s);
		if ($nc(tree)->label != nullptr) {
			print($$str({" "_s, tree->label}));
		}
		print(";"_s);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitReturn($JCTree$JCReturn* tree) {
	try {
		print("return"_s);
		if ($nc(tree)->expr != nullptr) {
			print(" "_s);
			printExpr(tree->expr);
		}
		print(";"_s);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitThrow($JCTree$JCThrow* tree) {
	try {
		print("throw "_s);
		printExpr($nc(tree)->expr);
		print(";"_s);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitAssert($JCTree$JCAssert* tree) {
	try {
		print("assert "_s);
		printExpr($nc(tree)->cond);
		if ($nc(tree)->detail != nullptr) {
			print(" : "_s);
			printExpr(tree->detail);
		}
		print(";"_s);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitApply($JCTree$JCMethodInvocation* tree) {
	$useLocalCurrentObjectStackCache();
	try {
		if (!$nc($nc(tree)->typeargs)->isEmpty()) {
			$init($JCTree$Tag);
			if ($nc(tree->meth)->hasTag($JCTree$Tag::SELECT)) {
				$var($JCTree$JCFieldAccess, left, $cast($JCTree$JCFieldAccess, tree->meth));
				printExpr($nc(left)->selected);
				print(".<"_s);
				printExprs(tree->typeargs);
				print($$str({">"_s, $nc(left)->name}));
			} else {
				print("<"_s);
				printExprs(tree->typeargs);
				print(">"_s);
				printExpr(tree->meth);
			}
		} else {
			printExpr(tree->meth);
		}
		print("("_s);
		printExprs($nc(tree)->args);
		print(")"_s);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitNewClass($JCTree$JCNewClass* tree) {
	try {
		if ($nc(tree)->encl != nullptr) {
			printExpr(tree->encl);
			print("."_s);
		}
		print("new "_s);
		if (!$nc($nc(tree)->typeargs)->isEmpty()) {
			print("<"_s);
			printExprs(tree->typeargs);
			print(">"_s);
		}
		if ($nc(tree)->def != nullptr && $nc($nc($nc(tree->def)->mods)->annotations)->nonEmpty()) {
			printTypeAnnotations($nc($nc(tree->def)->mods)->annotations);
		}
		printExpr($nc(tree)->clazz);
		print("("_s);
		printExprs($nc(tree)->args);
		print(")"_s);
		if ($nc(tree)->def != nullptr) {
			$var($Name, enclClassNamePrev, this->enclClassName);
			$set(this, enclClassName, $nc(tree->def)->name != nullptr ? $nc(tree->def)->name : tree->type != nullptr && $nc($nc(tree->type)->tsym)->name != $nc($nc($nc($nc($nc(tree->type)->tsym)->name)->table)->names)->empty ? $nc($nc(tree->type)->tsym)->name : ($Name*)nullptr);
			if (((int64_t)($nc($nc(tree->def)->mods)->flags & (uint64_t)(int64_t)$Flags::ENUM)) != 0) {
				print("/*enum*/"_s);
			}
			printBlock($nc(tree->def)->defs);
			$set(this, enclClassName, enclClassNamePrev);
		}
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitNewArray($JCTree$JCNewArray* tree) {
	$useLocalCurrentObjectStackCache();
	try {
		if ($nc(tree)->elemtype != nullptr) {
			print("new "_s);
			$var($JCTree, elem, tree->elemtype);
			printBaseElementType(elem);
			if (!$nc(tree->annotations)->isEmpty()) {
				print($($Character::valueOf(u' ')));
				printTypeAnnotations(tree->annotations);
			}
			if (tree->elems != nullptr) {
				print("[]"_s);
			}
			int32_t i = 0;
			$var($List, da, tree->dimAnnotations);
			{
				$var($List, l, tree->dims);
				for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
					bool var$0 = $nc(da)->size() > i;
					if (var$0 && !$nc(($cast($List, $(da->get(i)))))->isEmpty()) {
						print($($Character::valueOf(u' ')));
						printTypeAnnotations($cast($List, $(da->get(i))));
					}
					print("["_s);
					++i;
					printExpr($cast($JCTree, l->head));
					print("]"_s);
				}
			}
			printBrackets(elem);
		}
		if ($nc(tree)->elems != nullptr) {
			print("{"_s);
			printExprs(tree->elems);
			print("}"_s);
		}
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitLambda($JCTree$JCLambda* tree) {
	$useLocalCurrentObjectStackCache();
	try {
		print("("_s);
		$init($JCTree$JCLambda$ParameterKind);
		if ($nc(tree)->paramKind == $JCTree$JCLambda$ParameterKind::EXPLICIT) {
			printExprs(tree->params);
		} else {
			$var($String, sep, ""_s);
			{
				$var($Iterator, i$, $nc(tree->params)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($JCTree$JCVariableDecl, param, $cast($JCTree$JCVariableDecl, i$->next()));
					{
						print(sep);
						print($nc(param)->name);
						$assign(sep, ","_s);
					}
				}
			}
		}
		print(")->"_s);
		printExpr($nc(tree)->body);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitParens($JCTree$JCParens* tree) {
	try {
		print("("_s);
		printExpr($nc(tree)->expr);
		print(")"_s);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitAssign($JCTree$JCAssign* tree) {
	try {
		open(this->prec, $TreeInfo::assignPrec);
		printExpr($nc(tree)->lhs, $TreeInfo::assignPrec + 1);
		print(" = "_s);
		printExpr($nc(tree)->rhs, $TreeInfo::assignPrec);
		close(this->prec, $TreeInfo::assignPrec);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

$String* Pretty::operatorName($JCTree$Tag* tag) {
	$init($Pretty$1);
	switch ($nc($Pretty$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc((tag))->ordinal())) {
	case 1:
		{
			return "+"_s;
		}
	case 2:
		{
			return "-"_s;
		}
	case 3:
		{
			return "!"_s;
		}
	case 4:
		{
			return "~"_s;
		}
	case 5:
		{
			return "++"_s;
		}
	case 6:
		{
			return "--"_s;
		}
	case 7:
		{
			return "++"_s;
		}
	case 8:
		{
			return "--"_s;
		}
	case 9:
		{
			return "<*nullchk*>"_s;
		}
	case 10:
		{
			return "||"_s;
		}
	case 11:
		{
			return "&&"_s;
		}
	case 12:
		{
			return "=="_s;
		}
	case 13:
		{
			return "!="_s;
		}
	case 14:
		{
			return "<"_s;
		}
	case 15:
		{
			return ">"_s;
		}
	case 16:
		{
			return "<="_s;
		}
	case 17:
		{
			return ">="_s;
		}
	case 18:
		{
			return "|"_s;
		}
	case 19:
		{
			return "^"_s;
		}
	case 20:
		{
			return "&"_s;
		}
	case 21:
		{
			return "<<"_s;
		}
	case 22:
		{
			return ">>"_s;
		}
	case 23:
		{
			return ">>>"_s;
		}
	case 24:
		{
			return "+"_s;
		}
	case 25:
		{
			return "-"_s;
		}
	case 26:
		{
			return "*"_s;
		}
	case 27:
		{
			return "/"_s;
		}
	case 28:
		{
			return "%"_s;
		}
	default:
		{
			$throwNew($Error);
		}
	}
}

void Pretty::visitAssignop($JCTree$JCAssignOp* tree) {
	$useLocalCurrentObjectStackCache();
	try {
		open(this->prec, $TreeInfo::assignopPrec);
		printExpr($nc(tree)->lhs, $TreeInfo::assignopPrec + 1);
		print($$str({" "_s, $(operatorName($($nc($($nc(tree)->getTag()))->noAssignOp()))), "= "_s}));
		printExpr($nc(tree)->rhs, $TreeInfo::assignopPrec);
		close(this->prec, $TreeInfo::assignopPrec);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitUnary($JCTree$JCUnary* tree) {
	$useLocalCurrentObjectStackCache();
	try {
		int32_t ownprec = $TreeInfo::opPrec($($nc(tree)->getTag()));
		$var($String, opname, operatorName($($nc(tree)->getTag())));
		open(this->prec, ownprec);
		if (!$nc($($nc(tree)->getTag()))->isPostUnaryOp()) {
			print(opname);
			printExpr(tree->arg, ownprec);
		} else {
			printExpr(tree->arg, ownprec);
			print(opname);
		}
		close(this->prec, ownprec);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitBinary($JCTree$JCBinary* tree) {
	$useLocalCurrentObjectStackCache();
	try {
		int32_t ownprec = $TreeInfo::opPrec($($nc(tree)->getTag()));
		$var($String, opname, operatorName($($nc(tree)->getTag())));
		open(this->prec, ownprec);
		printExpr($nc(tree)->lhs, ownprec);
		print($$str({" "_s, opname, " "_s}));
		printExpr($nc(tree)->rhs, ownprec + 1);
		close(this->prec, ownprec);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitTypeCast($JCTree$JCTypeCast* tree) {
	try {
		open(this->prec, $TreeInfo::prefixPrec);
		print("("_s);
		printExpr($nc(tree)->clazz);
		print(")"_s);
		printExpr($nc(tree)->expr, $TreeInfo::prefixPrec);
		close(this->prec, $TreeInfo::prefixPrec);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitTypeTest($JCTree$JCInstanceOf* tree) {
	try {
		open(this->prec, $TreeInfo::ordPrec);
		printExpr($nc(tree)->expr, $TreeInfo::ordPrec);
		print(" instanceof "_s);
		if ($instanceOf($JCTree$JCPattern, $nc(tree)->pattern)) {
			printPattern(tree->pattern);
		} else {
			printExpr($(tree->getType()), $TreeInfo::ordPrec + 1);
		}
		close(this->prec, $TreeInfo::ordPrec);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitIndexed($JCTree$JCArrayAccess* tree) {
	try {
		printExpr($nc(tree)->indexed, $TreeInfo::postfixPrec);
		print("["_s);
		printExpr($nc(tree)->index);
		print("]"_s);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitSelect($JCTree$JCFieldAccess* tree) {
	try {
		printExpr($nc(tree)->selected, $TreeInfo::postfixPrec);
		print($$str({"."_s, $nc(tree)->name}));
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitReference($JCTree$JCMemberReference* tree) {
	try {
		printExpr($nc(tree)->expr);
		print("::"_s);
		if ($nc(tree)->typeargs != nullptr) {
			print("<"_s);
			printExprs(tree->typeargs);
			print(">"_s);
		}
		$init($MemberReferenceTree$ReferenceMode);
		print($nc(tree)->getMode() == $MemberReferenceTree$ReferenceMode::INVOKE ? $of($nc(tree)->name) : $of("new"_s));
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitIdent($JCTree$JCIdent* tree) {
	try {
		print($nc(tree)->name);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitLiteral($JCTree$JCLiteral* tree) {
	$useLocalCurrentObjectStackCache();
	try {
		$init($Pretty$1);
		switch ($nc($Pretty$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc(($nc(tree)->typetag))->ordinal())) {
		case 1:
			{
				print($($nc($of(tree->value))->toString()));
				break;
			}
		case 2:
			{
				print($$str({tree->value, "L"_s}));
				break;
			}
		case 3:
			{
				print($$str({tree->value, "F"_s}));
				break;
			}
		case 4:
			{
				print($($nc($of(tree->value))->toString()));
				break;
			}
		case 5:
			{
				print($$str({"\'"_s, $($Convert::quote($($String::valueOf((char16_t)$nc(($cast($Number, tree->value)))->intValue())))), "\'"_s}));
				break;
			}
		case 6:
			{
				print($nc(($cast($Number, tree->value)))->intValue() == 1 ? $of("true"_s) : $of("false"_s));
				break;
			}
		case 7:
			{
				print("null"_s);
				break;
			}
		default:
			{
				print($$str({"\""_s, $($Convert::quote($($nc($of(tree->value))->toString()))), "\""_s}));
				break;
			}
		}
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitTypeIdent($JCTree$JCPrimitiveTypeTree* tree) {
	try {
		$init($Pretty$1);
		switch ($nc($Pretty$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc(($nc(tree)->typetag))->ordinal())) {
		case 8:
			{
				print("byte"_s);
				break;
			}
		case 5:
			{
				print("char"_s);
				break;
			}
		case 9:
			{
				print("short"_s);
				break;
			}
		case 1:
			{
				print("int"_s);
				break;
			}
		case 2:
			{
				print("long"_s);
				break;
			}
		case 3:
			{
				print("float"_s);
				break;
			}
		case 4:
			{
				print("double"_s);
				break;
			}
		case 6:
			{
				print("boolean"_s);
				break;
			}
		case 10:
			{
				print("void"_s);
				break;
			}
		default:
			{
				print("error"_s);
				break;
			}
		}
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitTypeArray($JCTree$JCArrayTypeTree* tree) {
	try {
		printBaseElementType(tree);
		printBrackets(tree);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::printBaseElementType($JCTree* tree) {
	printExpr($($TreeInfo::innermostType(tree, false)));
}

void Pretty::printBrackets($JCTree* tree) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree, elem, tree);
	while (true) {
		$init($JCTree$Tag);
		if ($nc(elem)->hasTag($JCTree$Tag::ANNOTATED_TYPE)) {
			$var($JCTree$JCAnnotatedType, atype, $cast($JCTree$JCAnnotatedType, elem));
			$assign(elem, atype->underlyingType);
			if ($nc(elem)->hasTag($JCTree$Tag::TYPEARRAY)) {
				print($($Character::valueOf(u' ')));
				printTypeAnnotations(atype->annotations);
			}
		}
		if ($nc(elem)->hasTag($JCTree$Tag::TYPEARRAY)) {
			print("[]"_s);
			$assign(elem, $nc(($cast($JCTree$JCArrayTypeTree, elem)))->elemtype);
		} else {
			break;
		}
	}
}

void Pretty::visitTypeApply($JCTree$JCTypeApply* tree) {
	try {
		printExpr($nc(tree)->clazz);
		print("<"_s);
		printExprs($nc(tree)->arguments);
		print(">"_s);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitTypeUnion($JCTree$JCTypeUnion* tree) {
	try {
		printExprs($nc(tree)->alternatives, " | "_s);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitTypeIntersection($JCTree$JCTypeIntersection* tree) {
	try {
		printExprs($nc(tree)->bounds, " & "_s);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitTypeParameter($JCTree$JCTypeParameter* tree) {
	try {
		if ($nc($nc(tree)->annotations)->nonEmpty()) {
			this->printTypeAnnotations(tree->annotations);
		}
		print($nc(tree)->name);
		if ($nc($nc(tree)->bounds)->nonEmpty()) {
			print(" extends "_s);
			printExprs(tree->bounds, " & "_s);
		}
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitWildcard($JCTree$JCWildcard* tree) {
	try {
		print($nc(tree)->kind);
		$init($BoundKind);
		if ($nc($nc(tree)->kind)->kind != $BoundKind::UNBOUND) {
			printExpr(tree->inner);
		}
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitTypeBoundKind($JCTree$TypeBoundKind* tree) {
	try {
		print($($String::valueOf($of($nc(tree)->kind))));
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitErroneous($JCTree$JCErroneous* tree) {
	try {
		print("(ERROR)"_s);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitLetExpr($JCTree$LetExpr* tree) {
	try {
		print($$str({"(let "_s, $nc(tree)->defs, " in "_s, tree->expr, ")"_s}));
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitModifiers($JCTree$JCModifiers* mods) {
	try {
		printAnnotations($nc(mods)->annotations);
		printFlags($nc(mods)->flags);
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitAnnotation($JCTree$JCAnnotation* tree) {
	try {
		print("@"_s);
		printExpr($nc(tree)->annotationType);
		if (!$nc($nc(tree)->args)->isEmpty()) {
			print("("_s);
			printExprs(tree->args);
			print(")"_s);
		}
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitAnnotatedType($JCTree$JCAnnotatedType* tree) {
	try {
		$init($JCTree$Tag);
		if ($nc($nc(tree)->underlyingType)->hasTag($JCTree$Tag::SELECT)) {
			$var($JCTree$JCFieldAccess, access, $cast($JCTree$JCFieldAccess, tree->underlyingType));
			printExpr($nc(access)->selected, $TreeInfo::postfixPrec);
			print("."_s);
			printTypeAnnotations(tree->annotations);
			print($nc(access)->name);
		} else {
			if ($nc(tree->underlyingType)->hasTag($JCTree$Tag::TYPEARRAY)) {
				printBaseElementType(tree);
				printBrackets(tree);
			} else {
				printTypeAnnotations(tree->annotations);
				printExpr(tree->underlyingType);
			}
		}
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

void Pretty::visitTree($JCTree* tree) {
	$useLocalCurrentObjectStackCache();
	try {
		print($$str({"(UNKNOWN: "_s, $($nc(tree)->getTag()), ")"_s}));
		println();
	} catch ($IOException& e) {
		$throwNew($Pretty$UncheckedIOException, e);
	}
}

Pretty::Pretty() {
}

void clinit$Pretty($Class* class$) {
	$assignStatic(Pretty::trimSequence, "[...]"_s);
}

$Class* Pretty::load$($String* name, bool initialize) {
	$loadClass(Pretty, name, initialize, &_Pretty_ClassInfo_, clinit$Pretty, allocate$Pretty);
	return class$;
}

$Class* Pretty::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com