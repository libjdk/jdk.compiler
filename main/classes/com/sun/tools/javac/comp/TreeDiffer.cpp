#include <com/sun/tools/javac/comp/TreeDiffer.h>

#include <com/sun/source/tree/MemberReferenceTree$ReferenceMode.h>
#include <com/sun/tools/javac/code/BoundKind.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
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
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCIf.h>
#include <com/sun/tools/javac/tree/JCTree$JCImport.h>
#include <com/sun/tools/javac/tree/JCTree$JCInstanceOf.h>
#include <com/sun/tools/javac/tree/JCTree$JCLabeledStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda$ParameterKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCLiteral.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference$ReferenceKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodInvocation.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCModuleDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewArray.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCOpens.h>
#include <com/sun/tools/javac/tree/JCTree$JCPackageDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression$PolyKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCPrimitiveTypeTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCProvides.h>
#include <com/sun/tools/javac/tree/JCTree$JCRequires.h>
#include <com/sun/tools/javac/tree/JCTree$JCReturn.h>
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
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/lang/Iterable.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $MemberReferenceTree$ReferenceMode = ::com::sun::source::tree::MemberReferenceTree$ReferenceMode;
using $BoundKind = ::com::sun::tools::javac::code::BoundKind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$OperatorSymbol = ::com::sun::tools::javac::code::Symbol$OperatorSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
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
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCIf = ::com::sun::tools::javac::tree::JCTree$JCIf;
using $JCTree$JCImport = ::com::sun::tools::javac::tree::JCTree$JCImport;
using $JCTree$JCInstanceOf = ::com::sun::tools::javac::tree::JCTree$JCInstanceOf;
using $JCTree$JCLabeledStatement = ::com::sun::tools::javac::tree::JCTree$JCLabeledStatement;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCLambda$ParameterKind = ::com::sun::tools::javac::tree::JCTree$JCLambda$ParameterKind;
using $JCTree$JCLiteral = ::com::sun::tools::javac::tree::JCTree$JCLiteral;
using $JCTree$JCMemberReference = ::com::sun::tools::javac::tree::JCTree$JCMemberReference;
using $JCTree$JCMemberReference$ReferenceKind = ::com::sun::tools::javac::tree::JCTree$JCMemberReference$ReferenceKind;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCMethodInvocation = ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCModuleDecl = ::com::sun::tools::javac::tree::JCTree$JCModuleDecl;
using $JCTree$JCNewArray = ::com::sun::tools::javac::tree::JCTree$JCNewArray;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCOpens = ::com::sun::tools::javac::tree::JCTree$JCOpens;
using $JCTree$JCOperatorExpression = ::com::sun::tools::javac::tree::JCTree$JCOperatorExpression;
using $JCTree$JCPackageDecl = ::com::sun::tools::javac::tree::JCTree$JCPackageDecl;
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
using $JCTree$JCPolyExpression$PolyKind = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression$PolyKind;
using $JCTree$JCPrimitiveTypeTree = ::com::sun::tools::javac::tree::JCTree$JCPrimitiveTypeTree;
using $JCTree$JCProvides = ::com::sun::tools::javac::tree::JCTree$JCProvides;
using $JCTree$JCRequires = ::com::sun::tools::javac::tree::JCTree$JCRequires;
using $JCTree$JCReturn = ::com::sun::tools::javac::tree::JCTree$JCReturn;
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
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractMap = ::java::util::AbstractMap;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _TreeDiffer_FieldInfo_[] = {
	{"parameter", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PRIVATE, $field(TreeDiffer, parameter)},
	{"result", "Z", nullptr, $PRIVATE, $field(TreeDiffer, result)},
	{"equiv", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;>;", $PRIVATE, $field(TreeDiffer, equiv$)},
	{}
};

$MethodInfo _TreeDiffer_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Collection;Ljava/util/Collection;)V", "(Ljava/util/Collection<+Lcom/sun/tools/javac/code/Symbol;>;Ljava/util/Collection<+Lcom/sun/tools/javac/code/Symbol;>;)V", $PUBLIC, $method(static_cast<void(TreeDiffer::*)($Collection*,$Collection*)>(&TreeDiffer::init$))},
	{"equiv", "(Ljava/util/Collection;Ljava/util/Collection;)Ljava/util/Map;", "(Ljava/util/Collection<+Lcom/sun/tools/javac/code/Symbol;>;Ljava/util/Collection<+Lcom/sun/tools/javac/code/Symbol;>;)Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;>;", $PRIVATE | $STATIC, $method(static_cast<$Map*(*)($Collection*,$Collection*)>(&TreeDiffer::equiv))},
	{"scan", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PUBLIC},
	{"scan", "(Ljava/lang/Iterable;Ljava/lang/Iterable;)Z", "(Ljava/lang/Iterable<+Lcom/sun/tools/javac/tree/JCTree;>;Ljava/lang/Iterable<+Lcom/sun/tools/javac/tree/JCTree;>;)Z", $PRIVATE, $method(static_cast<bool(TreeDiffer::*)($Iterable*,$Iterable*)>(&TreeDiffer::scan))},
	{"scanDimAnnotations", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Z", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;>;)Z", $PRIVATE, $method(static_cast<bool(TreeDiffer::*)($List*,$List*)>(&TreeDiffer::scanDimAnnotations))},
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
	{"visitProvides", "(Lcom/sun/tools/javac/tree/JCTree$JCProvides;)V", nullptr, $PUBLIC},
	{"visitReference", "(Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;)V", nullptr, $PUBLIC},
	{"visitRequires", "(Lcom/sun/tools/javac/tree/JCTree$JCRequires;)V", nullptr, $PUBLIC},
	{"visitReturn", "(Lcom/sun/tools/javac/tree/JCTree$JCReturn;)V", nullptr, $PUBLIC},
	{"visitSelect", "(Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;)V", nullptr, $PUBLIC},
	{"visitSwitch", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitch;)V", nullptr, $PUBLIC},
	{"visitSwitchExpression", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;)V", nullptr, $PUBLIC},
	{"visitSynchronized", "(Lcom/sun/tools/javac/tree/JCTree$JCSynchronized;)V", nullptr, $PUBLIC},
	{"visitThrow", "(Lcom/sun/tools/javac/tree/JCTree$JCThrow;)V", nullptr, $PUBLIC},
	{"visitTopLevel", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)V", nullptr, $PUBLIC},
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

$ClassInfo _TreeDiffer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.TreeDiffer",
	"com.sun.tools.javac.tree.TreeScanner",
	nullptr,
	_TreeDiffer_FieldInfo_,
	_TreeDiffer_MethodInfo_
};

$Object* allocate$TreeDiffer($Class* clazz) {
	return $of($alloc(TreeDiffer));
}

void TreeDiffer::init$($Collection* symbols, $Collection* otherSymbols) {
	$TreeScanner::init$();
	$set(this, equiv$, $new($HashMap));
	$set(this, equiv$, equiv(symbols, otherSymbols));
}

$Map* TreeDiffer::equiv($Collection* symbols, $Collection* otherSymbols) {
	$init(TreeDiffer);
	$useLocalCurrentObjectStackCache();
	$var($Map, result, $new($HashMap));
	$var($Iterator, it, $nc(otherSymbols)->iterator());
	{
		$var($Iterator, i$, $nc(symbols)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, symbol, $cast($Symbol, i$->next()));
			{
				if (!$nc(it)->hasNext()) {
					break;
				}
				result->put(symbol, $cast($Symbol, $($nc(it)->next())));
			}
		}
	}
	return result;
}

bool TreeDiffer::scan($JCTree* tree$renamed, $JCTree* parameter$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree, parameter, parameter$renamed);
	$var($JCTree, tree, tree$renamed);
	if (tree == nullptr || parameter == nullptr) {
		return tree == nullptr && parameter == nullptr;
	}
	$assign(tree, $TreeInfo::skipParens(tree));
	$assign(parameter, $TreeInfo::skipParens(parameter));
	bool var$0 = $nc(tree)->type != nullptr && $nc(tree->type)->constValue() != nullptr && $nc(parameter)->type != nullptr;
	if (var$0 && $nc(parameter->type)->constValue() != nullptr) {
		$var($Object, var$1, $nc(tree->type)->constValue());
		return $Objects::equals(var$1, $($nc(parameter->type)->constValue()));
	}
	if ($nc(tree)->getTag() != $nc(parameter)->getTag()) {
		return false;
	}
	$var($JCTree, prevParameter, this->parameter);
	bool prevResult = this->result;
	{
		$var($Throwable, var$2, nullptr);
		bool var$4 = false;
		bool return$3 = false;
		try {
			$set(this, parameter, parameter);
			$nc(tree)->accept(this);
			var$4 = this->result;
			return$3 = true;
			goto $finally;
		} catch ($Throwable& var$5) {
			$assign(var$2, var$5);
		} $finally: {
			$set(this, parameter, prevParameter);
			this->result = prevResult;
		}
		if (var$2 != nullptr) {
			$throw(var$2);
		}
		if (return$3) {
			return var$4;
		}
	}
	$shouldNotReachHere();
}

bool TreeDiffer::scan($Iterable* xs, $Iterable* ys) {
	$useLocalCurrentObjectStackCache();
	if (xs == nullptr || ys == nullptr) {
		return xs == nullptr && ys == nullptr;
	}
	$var($Iterator, x, $nc(xs)->iterator());
	$var($Iterator, y, $nc(ys)->iterator());
	while (true) {
		bool var$0 = $nc(x)->hasNext();
		if (!(var$0 && $nc(y)->hasNext())) {
			break;
		}
		{
			$var($JCTree, var$1, $cast($JCTree, x->next()));
			if (!scan(var$1, $cast($JCTree, $(y->next())))) {
				return false;
			}
		}
	}
	bool var$2 = !$nc(x)->hasNext();
	return var$2 && !$nc(y)->hasNext();
}

bool TreeDiffer::scanDimAnnotations($List* xs, $List* ys) {
	$useLocalCurrentObjectStackCache();
	if (xs == nullptr || ys == nullptr) {
		return xs == nullptr && ys == nullptr;
	}
	$var($Iterator, x, $nc(xs)->iterator());
	$var($Iterator, y, $nc(ys)->iterator());
	while (true) {
		bool var$0 = $nc(x)->hasNext();
		if (!(var$0 && $nc(y)->hasNext())) {
			break;
		}
		{
			$var($Iterable, var$1, $cast($Iterable, x->next()));
			if (!scan(var$1, $cast($Iterable, $(y->next())))) {
				return false;
			}
		}
	}
	bool var$2 = !$nc(x)->hasNext();
	return var$2 && !$nc(y)->hasNext();
}

void TreeDiffer::visitIdent($JCTree$JCIdent* tree) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCIdent, that, $cast($JCTree$JCIdent, this->parameter));
	$var($Symbol, symbol, $nc(tree)->sym);
	$var($Symbol, otherSymbol, $nc(that)->sym);
	if (symbol != nullptr && otherSymbol != nullptr) {
		if ($Objects::equals($($nc(this->equiv$)->get(symbol)), otherSymbol)) {
			this->result = true;
			return;
		}
	}
	this->result = tree->sym == that->sym;
}

void TreeDiffer::visitSelect($JCTree$JCFieldAccess* tree) {
	$var($JCTree$JCFieldAccess, that, $cast($JCTree$JCFieldAccess, this->parameter));
	this->result = scan(static_cast<$JCTree*>($nc(tree)->selected), static_cast<$JCTree*>($nc(that)->selected)) && $nc(tree)->sym == $nc(that)->sym;
}

void TreeDiffer::visitAnnotatedType($JCTree$JCAnnotatedType* tree) {
	$var($JCTree$JCAnnotatedType, that, $cast($JCTree$JCAnnotatedType, this->parameter));
	bool var$0 = scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(tree)->annotations))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(that)->annotations))));
	this->result = var$0 && scan(static_cast<$JCTree*>($nc(tree)->underlyingType), static_cast<$JCTree*>($nc(that)->underlyingType));
}

void TreeDiffer::visitAnnotation($JCTree$JCAnnotation* tree) {
	$var($JCTree$JCAnnotation, that, $cast($JCTree$JCAnnotation, this->parameter));
	bool var$0 = scan($nc(tree)->annotationType, $nc(that)->annotationType);
	this->result = var$0 && scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(tree)->args))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(that)->args))));
}

void TreeDiffer::visitApply($JCTree$JCMethodInvocation* tree) {
	$var($JCTree$JCMethodInvocation, that, $cast($JCTree$JCMethodInvocation, this->parameter));
	bool var$1 = scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(tree)->typeargs))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(that)->typeargs))));
	bool var$0 = var$1 && scan(static_cast<$JCTree*>($nc(tree)->meth), static_cast<$JCTree*>($nc(that)->meth));
	this->result = var$0 && scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(tree)->args))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(that)->args)))) && $nc(tree)->polyKind == $nc(that)->polyKind;
}

void TreeDiffer::visitAssert($JCTree$JCAssert* tree) {
	$var($JCTree$JCAssert, that, $cast($JCTree$JCAssert, this->parameter));
	bool var$0 = scan(static_cast<$JCTree*>($nc(tree)->cond), static_cast<$JCTree*>($nc(that)->cond));
	this->result = var$0 && scan(static_cast<$JCTree*>($nc(tree)->detail), static_cast<$JCTree*>($nc(that)->detail));
}

void TreeDiffer::visitAssign($JCTree$JCAssign* tree) {
	$var($JCTree$JCAssign, that, $cast($JCTree$JCAssign, this->parameter));
	bool var$0 = scan(static_cast<$JCTree*>($nc(tree)->lhs), static_cast<$JCTree*>($nc(that)->lhs));
	this->result = var$0 && scan(static_cast<$JCTree*>($nc(tree)->rhs), static_cast<$JCTree*>($nc(that)->rhs));
}

void TreeDiffer::visitAssignop($JCTree$JCAssignOp* tree) {
	$var($JCTree$JCAssignOp, that, $cast($JCTree$JCAssignOp, this->parameter));
	bool var$0 = scan(static_cast<$JCTree*>($nc(tree)->lhs), static_cast<$JCTree*>($nc(that)->lhs));
	this->result = var$0 && scan(static_cast<$JCTree*>($nc(tree)->rhs), static_cast<$JCTree*>($nc(that)->rhs)) && $nc(tree)->operator$ == $nc(that)->operator$;
}

void TreeDiffer::visitBinary($JCTree$JCBinary* tree) {
	$var($JCTree$JCBinary, that, $cast($JCTree$JCBinary, this->parameter));
	bool var$0 = scan(static_cast<$JCTree*>($nc(tree)->lhs), static_cast<$JCTree*>($nc(that)->lhs));
	this->result = var$0 && scan(static_cast<$JCTree*>($nc(tree)->rhs), static_cast<$JCTree*>($nc(that)->rhs)) && $nc(tree)->operator$ == $nc(that)->operator$;
}

void TreeDiffer::visitBindingPattern($JCTree$JCBindingPattern* tree) {
	$var($JCTree$JCBindingPattern, that, $cast($JCTree$JCBindingPattern, this->parameter));
	this->result = scan(static_cast<$JCTree*>($nc(tree)->var), static_cast<$JCTree*>($nc(that)->var));
	if (!this->result) {
		return;
	}
}

void TreeDiffer::visitBlock($JCTree$JCBlock* tree) {
	$var($JCTree$JCBlock, that, $cast($JCTree$JCBlock, this->parameter));
	this->result = $nc(tree)->flags == $nc(that)->flags && scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(tree->stats))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(that->stats))));
}

void TreeDiffer::visitBreak($JCTree$JCBreak* tree) {
	$var($JCTree$JCBreak, that, $cast($JCTree$JCBreak, this->parameter));
	this->result = $nc(tree)->label == $nc(that)->label;
}

void TreeDiffer::visitYield($JCTree$JCYield* tree) {
	$var($JCTree$JCYield, that, $cast($JCTree$JCYield, this->parameter));
	this->result = scan(static_cast<$JCTree*>($nc(tree)->value), static_cast<$JCTree*>($nc(that)->value));
}

void TreeDiffer::visitCase($JCTree$JCCase* tree) {
	$var($JCTree$JCCase, that, $cast($JCTree$JCCase, this->parameter));
	bool var$0 = scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(tree)->labels))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(that)->labels))));
	this->result = var$0 && scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(tree)->stats))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(that)->stats))));
}

void TreeDiffer::visitDefaultCaseLabel($JCTree$JCDefaultCaseLabel* tree) {
	this->result = true;
}

void TreeDiffer::visitCatch($JCTree$JCCatch* tree) {
	$var($JCTree$JCCatch, that, $cast($JCTree$JCCatch, this->parameter));
	bool var$0 = scan(static_cast<$JCTree*>($nc(tree)->param), static_cast<$JCTree*>($nc(that)->param));
	this->result = var$0 && scan(static_cast<$JCTree*>($nc(tree)->body), static_cast<$JCTree*>($nc(that)->body));
}

void TreeDiffer::visitClassDef($JCTree$JCClassDecl* tree) {
	$var($JCTree$JCClassDecl, that, $cast($JCTree$JCClassDecl, this->parameter));
	bool var$3 = scan(static_cast<$JCTree*>($nc(tree)->mods), static_cast<$JCTree*>($nc(that)->mods)) && $nc(tree)->name == $nc(that)->name;
	bool var$2 = var$3 && scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(tree->typarams))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(that->typarams))));
	bool var$1 = var$2 && scan(static_cast<$JCTree*>(tree->extending), static_cast<$JCTree*>(that->extending));
	bool var$0 = var$1 && scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(tree->implementing))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(that->implementing))));
	this->result = var$0 && scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(tree->defs))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(that->defs))));
}

void TreeDiffer::visitConditional($JCTree$JCConditional* tree) {
	$var($JCTree$JCConditional, that, $cast($JCTree$JCConditional, this->parameter));
	bool var$1 = scan(static_cast<$JCTree*>($nc(tree)->cond), static_cast<$JCTree*>($nc(that)->cond));
	bool var$0 = var$1 && scan(static_cast<$JCTree*>($nc(tree)->truepart), static_cast<$JCTree*>($nc(that)->truepart));
	this->result = var$0 && scan(static_cast<$JCTree*>($nc(tree)->falsepart), static_cast<$JCTree*>($nc(that)->falsepart));
}

void TreeDiffer::visitContinue($JCTree$JCContinue* tree) {
	$var($JCTree$JCContinue, that, $cast($JCTree$JCContinue, this->parameter));
	this->result = $nc(tree)->label == $nc(that)->label;
}

void TreeDiffer::visitDoLoop($JCTree$JCDoWhileLoop* tree) {
	$var($JCTree$JCDoWhileLoop, that, $cast($JCTree$JCDoWhileLoop, this->parameter));
	bool var$0 = scan(static_cast<$JCTree*>($nc(tree)->body), static_cast<$JCTree*>($nc(that)->body));
	this->result = var$0 && scan(static_cast<$JCTree*>($nc(tree)->cond), static_cast<$JCTree*>($nc(that)->cond));
}

void TreeDiffer::visitErroneous($JCTree$JCErroneous* tree) {
	$var($JCTree$JCErroneous, that, $cast($JCTree$JCErroneous, this->parameter));
	this->result = scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(tree)->errs))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(that)->errs))));
}

void TreeDiffer::visitExec($JCTree$JCExpressionStatement* tree) {
	$var($JCTree$JCExpressionStatement, that, $cast($JCTree$JCExpressionStatement, this->parameter));
	this->result = scan(static_cast<$JCTree*>($nc(tree)->expr), static_cast<$JCTree*>($nc(that)->expr));
}

void TreeDiffer::visitExports($JCTree$JCExports* tree) {
	$var($JCTree$JCExports, that, $cast($JCTree$JCExports, this->parameter));
	bool var$0 = scan(static_cast<$JCTree*>($nc(tree)->qualid), static_cast<$JCTree*>($nc(that)->qualid));
	this->result = var$0 && scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(tree)->moduleNames))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(that)->moduleNames))));
}

void TreeDiffer::visitForLoop($JCTree$JCForLoop* tree) {
	$var($JCTree$JCForLoop, that, $cast($JCTree$JCForLoop, this->parameter));
	bool var$2 = scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(tree)->init))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(that)->init))));
	bool var$1 = var$2 && scan(static_cast<$JCTree*>($nc(tree)->cond), static_cast<$JCTree*>($nc(that)->cond));
	bool var$0 = var$1 && scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(tree)->step))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(that)->step))));
	this->result = var$0 && scan(static_cast<$JCTree*>($nc(tree)->body), static_cast<$JCTree*>($nc(that)->body));
}

void TreeDiffer::visitForeachLoop($JCTree$JCEnhancedForLoop* tree) {
	$var($JCTree$JCEnhancedForLoop, that, $cast($JCTree$JCEnhancedForLoop, this->parameter));
	bool var$1 = scan(static_cast<$JCTree*>($nc(tree)->var), static_cast<$JCTree*>($nc(that)->var));
	bool var$0 = var$1 && scan(static_cast<$JCTree*>($nc(tree)->expr), static_cast<$JCTree*>($nc(that)->expr));
	this->result = var$0 && scan(static_cast<$JCTree*>($nc(tree)->body), static_cast<$JCTree*>($nc(that)->body));
}

void TreeDiffer::visitIf($JCTree$JCIf* tree) {
	$var($JCTree$JCIf, that, $cast($JCTree$JCIf, this->parameter));
	bool var$1 = scan(static_cast<$JCTree*>($nc(tree)->cond), static_cast<$JCTree*>($nc(that)->cond));
	bool var$0 = var$1 && scan(static_cast<$JCTree*>($nc(tree)->thenpart), static_cast<$JCTree*>($nc(that)->thenpart));
	this->result = var$0 && scan(static_cast<$JCTree*>($nc(tree)->elsepart), static_cast<$JCTree*>($nc(that)->elsepart));
}

void TreeDiffer::visitImport($JCTree$JCImport* tree) {
	$var($JCTree$JCImport, that, $cast($JCTree$JCImport, this->parameter));
	this->result = $nc(tree)->staticImport == $nc(that)->staticImport && scan(tree->qualid, that->qualid);
}

void TreeDiffer::visitIndexed($JCTree$JCArrayAccess* tree) {
	$var($JCTree$JCArrayAccess, that, $cast($JCTree$JCArrayAccess, this->parameter));
	bool var$0 = scan(static_cast<$JCTree*>($nc(tree)->indexed), static_cast<$JCTree*>($nc(that)->indexed));
	this->result = var$0 && scan(static_cast<$JCTree*>($nc(tree)->index), static_cast<$JCTree*>($nc(that)->index));
}

void TreeDiffer::visitLabelled($JCTree$JCLabeledStatement* tree) {
	$var($JCTree$JCLabeledStatement, that, $cast($JCTree$JCLabeledStatement, this->parameter));
	this->result = $nc(tree)->label == $nc(that)->label && scan(static_cast<$JCTree*>(tree->body), static_cast<$JCTree*>(that->body));
}

void TreeDiffer::visitLambda($JCTree$JCLambda* tree) {
	$var($JCTree$JCLambda, that, $cast($JCTree$JCLambda, this->parameter));
	bool var$0 = scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(tree)->params))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(that)->params))));
	this->result = var$0 && scan($nc(tree)->body, $nc(that)->body) && $nc(tree)->paramKind == $nc(that)->paramKind;
}

void TreeDiffer::visitLetExpr($JCTree$LetExpr* tree) {
	$var($JCTree$LetExpr, that, $cast($JCTree$LetExpr, this->parameter));
	bool var$0 = scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(tree)->defs))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(that)->defs))));
	this->result = var$0 && scan(static_cast<$JCTree*>($nc(tree)->expr), static_cast<$JCTree*>($nc(that)->expr));
}

void TreeDiffer::visitLiteral($JCTree$JCLiteral* tree) {
	$var($JCTree$JCLiteral, that, $cast($JCTree$JCLiteral, this->parameter));
	this->result = $nc(tree)->typetag == $nc(that)->typetag && $Objects::equals(tree->value, that->value);
}

void TreeDiffer::visitMethodDef($JCTree$JCMethodDecl* tree) {
	$var($JCTree$JCMethodDecl, that, $cast($JCTree$JCMethodDecl, this->parameter));
	bool var$6 = scan(static_cast<$JCTree*>($nc(tree)->mods), static_cast<$JCTree*>($nc(that)->mods)) && $nc(tree)->name == $nc(that)->name;
	bool var$5 = var$6 && scan(static_cast<$JCTree*>(tree->restype), static_cast<$JCTree*>(that->restype));
	bool var$4 = var$5 && scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(tree->typarams))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(that->typarams))));
	bool var$3 = var$4 && scan(static_cast<$JCTree*>(tree->recvparam), static_cast<$JCTree*>(that->recvparam));
	bool var$2 = var$3 && scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(tree->params))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(that->params))));
	bool var$1 = var$2 && scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(tree->thrown))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(that->thrown))));
	bool var$0 = var$1 && scan(static_cast<$JCTree*>(tree->body), static_cast<$JCTree*>(that->body));
	this->result = var$0 && scan(static_cast<$JCTree*>(tree->defaultValue), static_cast<$JCTree*>(that->defaultValue));
}

void TreeDiffer::visitModifiers($JCTree$JCModifiers* tree) {
	$var($JCTree$JCModifiers, that, $cast($JCTree$JCModifiers, this->parameter));
	this->result = $nc(tree)->flags == $nc(that)->flags && scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(tree->annotations))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(that->annotations))));
}

void TreeDiffer::visitModuleDef($JCTree$JCModuleDecl* tree) {
	$var($JCTree$JCModuleDecl, that, $cast($JCTree$JCModuleDecl, this->parameter));
	bool var$1 = scan(static_cast<$JCTree*>($nc(tree)->mods), static_cast<$JCTree*>($nc(that)->mods));
	bool var$0 = var$1 && scan(static_cast<$JCTree*>($nc(tree)->qualId), static_cast<$JCTree*>($nc(that)->qualId));
	this->result = var$0 && scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(tree)->directives))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(that)->directives))));
}

void TreeDiffer::visitNewArray($JCTree$JCNewArray* tree) {
	$var($JCTree$JCNewArray, that, $cast($JCTree$JCNewArray, this->parameter));
	bool var$3 = scan(static_cast<$JCTree*>($nc(tree)->elemtype), static_cast<$JCTree*>($nc(that)->elemtype));
	bool var$2 = var$3 && scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(tree)->dims))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(that)->dims))));
	bool var$1 = var$2 && scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(tree)->annotations))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(that)->annotations))));
	bool var$0 = var$1 && scanDimAnnotations($nc(tree)->dimAnnotations, $nc(that)->dimAnnotations);
	this->result = var$0 && scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(tree)->elems))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(that)->elems))));
}

void TreeDiffer::visitNewClass($JCTree$JCNewClass* tree) {
	$var($JCTree$JCNewClass, that, $cast($JCTree$JCNewClass, this->parameter));
	bool var$3 = scan(static_cast<$JCTree*>($nc(tree)->encl), static_cast<$JCTree*>($nc(that)->encl));
	bool var$2 = var$3 && scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(tree)->typeargs))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(that)->typeargs))));
	bool var$1 = var$2 && scan(static_cast<$JCTree*>($nc(tree)->clazz), static_cast<$JCTree*>($nc(that)->clazz));
	bool var$0 = var$1 && scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(tree)->args))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(that)->args))));
	this->result = var$0 && scan(static_cast<$JCTree*>($nc(tree)->def), static_cast<$JCTree*>($nc(that)->def)) && $nc(tree)->constructor == $nc(that)->constructor;
}

void TreeDiffer::visitOpens($JCTree$JCOpens* tree) {
	$var($JCTree$JCOpens, that, $cast($JCTree$JCOpens, this->parameter));
	bool var$0 = scan(static_cast<$JCTree*>($nc(tree)->qualid), static_cast<$JCTree*>($nc(that)->qualid));
	this->result = var$0 && scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(tree)->moduleNames))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(that)->moduleNames))));
}

void TreeDiffer::visitPackageDef($JCTree$JCPackageDecl* tree) {
	$var($JCTree$JCPackageDecl, that, $cast($JCTree$JCPackageDecl, this->parameter));
	bool var$0 = scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(tree)->annotations))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(that)->annotations))));
	this->result = var$0 && scan(static_cast<$JCTree*>($nc(tree)->pid), static_cast<$JCTree*>($nc(that)->pid)) && $nc(tree)->packge == $nc(that)->packge;
}

void TreeDiffer::visitProvides($JCTree$JCProvides* tree) {
	$var($JCTree$JCProvides, that, $cast($JCTree$JCProvides, this->parameter));
	bool var$0 = scan(static_cast<$JCTree*>($nc(tree)->serviceName), static_cast<$JCTree*>($nc(that)->serviceName));
	this->result = var$0 && scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(tree)->implNames))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(that)->implNames))));
}

void TreeDiffer::visitReference($JCTree$JCMemberReference* tree) {
	$var($JCTree$JCMemberReference, that, $cast($JCTree$JCMemberReference, this->parameter));
	bool var$0 = $nc(tree)->mode == $nc(that)->mode && tree->kind == that->kind && tree->name == that->name && scan(static_cast<$JCTree*>(tree->expr), static_cast<$JCTree*>(that->expr));
	this->result = var$0 && scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(tree->typeargs))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(that->typeargs))));
}

void TreeDiffer::visitRequires($JCTree$JCRequires* tree) {
	$var($JCTree$JCRequires, that, $cast($JCTree$JCRequires, this->parameter));
	this->result = $nc(tree)->isTransitive$ == $nc(that)->isTransitive$ && tree->isStaticPhase == that->isStaticPhase && scan(static_cast<$JCTree*>(tree->moduleName), static_cast<$JCTree*>(that->moduleName));
}

void TreeDiffer::visitReturn($JCTree$JCReturn* tree) {
	$var($JCTree$JCReturn, that, $cast($JCTree$JCReturn, this->parameter));
	this->result = scan(static_cast<$JCTree*>($nc(tree)->expr), static_cast<$JCTree*>($nc(that)->expr));
}

void TreeDiffer::visitSwitch($JCTree$JCSwitch* tree) {
	$var($JCTree$JCSwitch, that, $cast($JCTree$JCSwitch, this->parameter));
	bool var$0 = scan(static_cast<$JCTree*>($nc(tree)->selector), static_cast<$JCTree*>($nc(that)->selector));
	this->result = var$0 && scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(tree)->cases))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(that)->cases))));
}

void TreeDiffer::visitSwitchExpression($JCTree$JCSwitchExpression* tree) {
	$var($JCTree$JCSwitchExpression, that, $cast($JCTree$JCSwitchExpression, this->parameter));
	bool var$0 = scan(static_cast<$JCTree*>($nc(tree)->selector), static_cast<$JCTree*>($nc(that)->selector));
	this->result = var$0 && scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(tree)->cases))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(that)->cases))));
}

void TreeDiffer::visitSynchronized($JCTree$JCSynchronized* tree) {
	$var($JCTree$JCSynchronized, that, $cast($JCTree$JCSynchronized, this->parameter));
	bool var$0 = scan(static_cast<$JCTree*>($nc(tree)->lock), static_cast<$JCTree*>($nc(that)->lock));
	this->result = var$0 && scan(static_cast<$JCTree*>($nc(tree)->body), static_cast<$JCTree*>($nc(that)->body));
}

void TreeDiffer::visitThrow($JCTree$JCThrow* tree) {
	$var($JCTree$JCThrow, that, $cast($JCTree$JCThrow, this->parameter));
	this->result = scan(static_cast<$JCTree*>($nc(tree)->expr), static_cast<$JCTree*>($nc(that)->expr));
}

void TreeDiffer::visitTopLevel($JCTree$JCCompilationUnit* tree) {
	$var($JCTree$JCCompilationUnit, that, $cast($JCTree$JCCompilationUnit, this->parameter));
	this->result = scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(tree)->defs))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(that)->defs)))) && $nc(tree)->modle == $nc(that)->modle && tree->packge == that->packge;
}

void TreeDiffer::visitTry($JCTree$JCTry* tree) {
	$var($JCTree$JCTry, that, $cast($JCTree$JCTry, this->parameter));
	bool var$2 = scan(static_cast<$JCTree*>($nc(tree)->body), static_cast<$JCTree*>($nc(that)->body));
	bool var$1 = var$2 && scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(tree)->catchers))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(that)->catchers))));
	bool var$0 = var$1 && scan(static_cast<$JCTree*>($nc(tree)->finalizer), static_cast<$JCTree*>($nc(that)->finalizer));
	this->result = var$0 && scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(tree)->resources))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(that)->resources))));
}

void TreeDiffer::visitTypeApply($JCTree$JCTypeApply* tree) {
	$var($JCTree$JCTypeApply, that, $cast($JCTree$JCTypeApply, this->parameter));
	bool var$0 = scan(static_cast<$JCTree*>($nc(tree)->clazz), static_cast<$JCTree*>($nc(that)->clazz));
	this->result = var$0 && scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(tree)->arguments))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(that)->arguments))));
}

void TreeDiffer::visitTypeArray($JCTree$JCArrayTypeTree* tree) {
	$var($JCTree$JCArrayTypeTree, that, $cast($JCTree$JCArrayTypeTree, this->parameter));
	this->result = scan(static_cast<$JCTree*>($nc(tree)->elemtype), static_cast<$JCTree*>($nc(that)->elemtype));
}

void TreeDiffer::visitTypeBoundKind($JCTree$TypeBoundKind* tree) {
	$var($JCTree$TypeBoundKind, that, $cast($JCTree$TypeBoundKind, this->parameter));
	this->result = $nc(tree)->kind == $nc(that)->kind;
}

void TreeDiffer::visitTypeCast($JCTree$JCTypeCast* tree) {
	$var($JCTree$JCTypeCast, that, $cast($JCTree$JCTypeCast, this->parameter));
	bool var$0 = scan($nc(tree)->clazz, $nc(that)->clazz);
	this->result = var$0 && scan(static_cast<$JCTree*>($nc(tree)->expr), static_cast<$JCTree*>($nc(that)->expr));
}

void TreeDiffer::visitTypeIdent($JCTree$JCPrimitiveTypeTree* tree) {
	$var($JCTree$JCPrimitiveTypeTree, that, $cast($JCTree$JCPrimitiveTypeTree, this->parameter));
	this->result = $nc(tree)->typetag == $nc(that)->typetag;
}

void TreeDiffer::visitTypeIntersection($JCTree$JCTypeIntersection* tree) {
	$var($JCTree$JCTypeIntersection, that, $cast($JCTree$JCTypeIntersection, this->parameter));
	this->result = scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(tree)->bounds))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(that)->bounds))));
}

void TreeDiffer::visitTypeParameter($JCTree$JCTypeParameter* tree) {
	$var($JCTree$JCTypeParameter, that, $cast($JCTree$JCTypeParameter, this->parameter));
	bool var$0 = $nc(tree)->name == $nc(that)->name && scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(tree->bounds))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(that->bounds))));
	this->result = var$0 && scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(tree->annotations))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(that->annotations))));
}

void TreeDiffer::visitTypeTest($JCTree$JCInstanceOf* tree) {
	$var($JCTree$JCInstanceOf, that, $cast($JCTree$JCInstanceOf, this->parameter));
	bool var$0 = scan(static_cast<$JCTree*>($nc(tree)->expr), static_cast<$JCTree*>($nc(that)->expr));
	this->result = var$0 && scan($nc(tree)->pattern, $nc(that)->pattern);
}

void TreeDiffer::visitTypeUnion($JCTree$JCTypeUnion* tree) {
	$var($JCTree$JCTypeUnion, that, $cast($JCTree$JCTypeUnion, this->parameter));
	this->result = scan(static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(tree)->alternatives))), static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(that)->alternatives))));
}

void TreeDiffer::visitUnary($JCTree$JCUnary* tree) {
	$var($JCTree$JCUnary, that, $cast($JCTree$JCUnary, this->parameter));
	this->result = scan(static_cast<$JCTree*>($nc(tree)->arg), static_cast<$JCTree*>($nc(that)->arg)) && $nc(tree)->operator$ == $nc(that)->operator$;
}

void TreeDiffer::visitUses($JCTree$JCUses* tree) {
	$var($JCTree$JCUses, that, $cast($JCTree$JCUses, this->parameter));
	this->result = scan(static_cast<$JCTree*>($nc(tree)->qualid), static_cast<$JCTree*>($nc(that)->qualid));
}

void TreeDiffer::visitVarDef($JCTree$JCVariableDecl* tree) {
	$var($JCTree$JCVariableDecl, that, $cast($JCTree$JCVariableDecl, this->parameter));
	bool var$2 = scan(static_cast<$JCTree*>($nc(tree)->mods), static_cast<$JCTree*>($nc(that)->mods)) && $nc(tree)->name == $nc(that)->name;
	bool var$1 = var$2 && scan(static_cast<$JCTree*>(tree->nameexpr), static_cast<$JCTree*>(that->nameexpr));
	bool var$0 = var$1 && scan(static_cast<$JCTree*>(tree->vartype), static_cast<$JCTree*>(that->vartype));
	this->result = var$0 && scan(static_cast<$JCTree*>(tree->init), static_cast<$JCTree*>(that->init));
	if (!this->result) {
		return;
	}
	$nc(this->equiv$)->put(tree->sym, that->sym);
}

void TreeDiffer::visitWhileLoop($JCTree$JCWhileLoop* tree) {
	$var($JCTree$JCWhileLoop, that, $cast($JCTree$JCWhileLoop, this->parameter));
	bool var$0 = scan(static_cast<$JCTree*>($nc(tree)->cond), static_cast<$JCTree*>($nc(that)->cond));
	this->result = var$0 && scan(static_cast<$JCTree*>($nc(tree)->body), static_cast<$JCTree*>($nc(that)->body));
}

void TreeDiffer::visitWildcard($JCTree$JCWildcard* tree) {
	$var($JCTree$JCWildcard, that, $cast($JCTree$JCWildcard, this->parameter));
	bool var$0 = scan(static_cast<$JCTree*>($nc(tree)->kind), static_cast<$JCTree*>($nc(that)->kind));
	this->result = var$0 && scan($nc(tree)->inner, $nc(that)->inner);
}

TreeDiffer::TreeDiffer() {
}

$Class* TreeDiffer::load$($String* name, bool initialize) {
	$loadClass(TreeDiffer, name, initialize, &_TreeDiffer_ClassInfo_, allocate$TreeDiffer);
	return class$;
}

$Class* TreeDiffer::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com