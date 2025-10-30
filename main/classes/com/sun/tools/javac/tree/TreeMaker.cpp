#include <com/sun/tools/javac/tree/TreeMaker.h>

#include <com/sun/source/tree/CaseTree$CaseKind.h>
#include <com/sun/source/tree/MemberReferenceTree$ReferenceMode.h>
#include <com/sun/source/tree/ModuleTree$ModuleKind.h>
#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/Attribute$TypeCompound.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/BoundKind.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Scope$NamedImportScope.h>
#include <com/sun/tools/javac/code/Scope$StarImportScope.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$IntersectionClassType.h>
#include <com/sun/tools/javac/code/Type$JCPrimitiveType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$UnionClassType.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
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
#include <com/sun/tools/javac/tree/JCTree$LetExpr.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$TypeBoundKind.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeMaker$1.h>
#include <com/sun/tools/javac/tree/TreeMaker$2.h>
#include <com/sun/tools/javac/tree/TreeMaker$AnnotationBuilder.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Position.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Iterator.h>
#include <java/util/function/Supplier.h>
#include <javax/lang/model/type/TypeKind.h>
#include <jcpp.h>

#undef ANNOTATION
#undef BOOLEAN
#undef BYTE
#undef CHAR
#undef CLASS
#undef DOUBLE
#undef ERROR
#undef FIRSTPOS
#undef FLOAT
#undef INT
#undef LONG
#undef MTH
#undef NOPOS
#undef SHORT
#undef TYP
#undef TYPE_ANNOTATION
#undef UNBOUND
#undef VAR
#undef VOID

using $CaseTree$CaseKind = ::com::sun::source::tree::CaseTree$CaseKind;
using $MemberReferenceTree$ReferenceMode = ::com::sun::source::tree::MemberReferenceTree$ReferenceMode;
using $ModuleTree$ModuleKind = ::com::sun::source::tree::ModuleTree$ModuleKind;
using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Attribute$TypeCompound = ::com::sun::tools::javac::code::Attribute$TypeCompound;
using $BoundKind = ::com::sun::tools::javac::code::BoundKind;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$NamedImportScope = ::com::sun::tools::javac::code::Scope$NamedImportScope;
using $Scope$StarImportScope = ::com::sun::tools::javac::code::Scope$StarImportScope;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$OperatorSymbol = ::com::sun::tools::javac::code::Symbol$OperatorSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$IntersectionClassType = ::com::sun::tools::javac::code::Type$IntersectionClassType;
using $Type$JCPrimitiveType = ::com::sun::tools::javac::code::Type$JCPrimitiveType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$UnionClassType = ::com::sun::tools::javac::code::Type$UnionClassType;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$Factory = ::com::sun::tools::javac::tree::JCTree$Factory;
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
using $JCTree$LetExpr = ::com::sun::tools::javac::tree::JCTree$LetExpr;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$TypeBoundKind = ::com::sun::tools::javac::tree::JCTree$TypeBoundKind;
using $TreeMaker$1 = ::com::sun::tools::javac::tree::TreeMaker$1;
using $TreeMaker$2 = ::com::sun::tools::javac::tree::TreeMaker$2;
using $TreeMaker$AnnotationBuilder = ::com::sun::tools::javac::tree::TreeMaker$AnnotationBuilder;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Position = ::com::sun::tools::javac::util::Position;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Iterable = ::java::lang::Iterable;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Iterator = ::java::util::Iterator;
using $Supplier = ::java::util::function::Supplier;
using $TypeKind = ::javax::lang::model::type::TypeKind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class TreeMaker$$Lambda$lambda$TopLevel$0 : public $Supplier {
	$class(TreeMaker$$Lambda$lambda$TopLevel$0, $NO_CLASS_INIT, $Supplier)
public:
	void init$($JCTree* node) {
		$set(this, node, node);
	}
	virtual $Object* get() override {
		 return $of(TreeMaker::lambda$TopLevel$0(node));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TreeMaker$$Lambda$lambda$TopLevel$0>());
	}
	$JCTree* node = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TreeMaker$$Lambda$lambda$TopLevel$0::fieldInfos[2] = {
	{"node", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC, $field(TreeMaker$$Lambda$lambda$TopLevel$0, node)},
	{}
};
$MethodInfo TreeMaker$$Lambda$lambda$TopLevel$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC, $method(static_cast<void(TreeMaker$$Lambda$lambda$TopLevel$0::*)($JCTree*)>(&TreeMaker$$Lambda$lambda$TopLevel$0::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo TreeMaker$$Lambda$lambda$TopLevel$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.tree.TreeMaker$$Lambda$lambda$TopLevel$0",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* TreeMaker$$Lambda$lambda$TopLevel$0::load$($String* name, bool initialize) {
	$loadClass(TreeMaker$$Lambda$lambda$TopLevel$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TreeMaker$$Lambda$lambda$TopLevel$0::class$ = nullptr;

$FieldInfo _TreeMaker_FieldInfo_[] = {
	{"treeMakerKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/tree/TreeMaker;>;", $PROTECTED | $STATIC | $FINAL, $staticField(TreeMaker, treeMakerKey)},
	{"pos", "I", nullptr, $PUBLIC, $field(TreeMaker, pos)},
	{"toplevel", "Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;", nullptr, $PUBLIC, $field(TreeMaker, toplevel)},
	{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, 0, $field(TreeMaker, names)},
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, 0, $field(TreeMaker, types)},
	{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, 0, $field(TreeMaker, syms)},
	{"annotationBuilder", "Lcom/sun/tools/javac/tree/TreeMaker$AnnotationBuilder;", nullptr, 0, $field(TreeMaker, annotationBuilder)},
	{}
};

$MethodInfo _TreeMaker_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(TreeMaker::*)($Context*)>(&TreeMaker::init$))},
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;Lcom/sun/tools/javac/util/Names;Lcom/sun/tools/javac/code/Types;Lcom/sun/tools/javac/code/Symtab;)V", nullptr, $PROTECTED, $method(static_cast<void(TreeMaker::*)($JCTree$JCCompilationUnit*,$Names*,$Types*,$Symtab*)>(&TreeMaker::init$))},
	{"AnnotatedType", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCAnnotatedType;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCAnnotatedType;", $PUBLIC},
	{"Annotation", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;", $PUBLIC},
	{"Annotation", "(Lcom/sun/tools/javac/code/Attribute;)Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;", nullptr, $PUBLIC},
	{"Annotations", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$Compound;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;", $PUBLIC},
	{"AnonymousClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;)Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;", $PUBLIC},
	{"App", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;", $PUBLIC},
	{"App", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;", nullptr, $PUBLIC},
	{"Apply", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;", $PUBLIC},
	{"Assert", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCAssert;", nullptr, $PUBLIC},
	{"Assign", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCAssign;", nullptr, $PUBLIC},
	{"Assignment", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCStatement;", nullptr, $PUBLIC},
	{"Assignop", "(Lcom/sun/tools/javac/tree/JCTree$Tag;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree$JCAssignOp;", nullptr, $PUBLIC},
	{"Binary", "(Lcom/sun/tools/javac/tree/JCTree$Tag;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCBinary;", nullptr, $PUBLIC},
	{"BindingPattern", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)Lcom/sun/tools/javac/tree/JCTree$JCBindingPattern;", nullptr, $PUBLIC},
	{"Block", "(JLcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCBlock;", "(JLcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCStatement;>;)Lcom/sun/tools/javac/tree/JCTree$JCBlock;", $PUBLIC},
	{"Break", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/tree/JCTree$JCBreak;", nullptr, $PUBLIC},
	{"Call", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCStatement;", nullptr, $PUBLIC},
	{"Case", "(Lcom/sun/source/tree/CaseTree$CaseKind;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree$JCCase;", "(Lcom/sun/source/tree/CaseTree$CaseKind;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCaseLabel;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCStatement;>;Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree$JCCase;", $PUBLIC},
	{"Catch", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;Lcom/sun/tools/javac/tree/JCTree$JCBlock;)Lcom/sun/tools/javac/tree/JCTree$JCCatch;", nullptr, $PUBLIC},
	{"ClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;>;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;)Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;", $PUBLIC},
	{"ClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;>;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;)Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;", $PUBLIC},
	{"ClassLiteral", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"ClassLiteral", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"Conditional", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCConditional;", nullptr, $PUBLIC},
	{"Continue", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/tree/JCTree$JCContinue;", nullptr, $PUBLIC},
	{"Create", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", $PUBLIC},
	{"DefaultCaseLabel", "()Lcom/sun/tools/javac/tree/JCTree$JCDefaultCaseLabel;", nullptr, $PUBLIC},
	{"DoLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCStatement;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCDoWhileLoop;", nullptr, $PUBLIC},
	{"Erroneous", "()Lcom/sun/tools/javac/tree/JCTree$JCErroneous;", nullptr, $PUBLIC},
	{"Erroneous", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCErroneous;", "(Lcom/sun/tools/javac/util/List<+Lcom/sun/tools/javac/tree/JCTree;>;)Lcom/sun/tools/javac/tree/JCTree$JCErroneous;", $PUBLIC},
	{"Exec", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpressionStatement;", nullptr, $PUBLIC},
	{"Exports", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCExports;", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)Lcom/sun/tools/javac/tree/JCTree$JCExports;", $PUBLIC},
	{"ForLoop", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCStatement;)Lcom/sun/tools/javac/tree/JCTree$JCForLoop;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCStatement;>;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpressionStatement;>;Lcom/sun/tools/javac/tree/JCTree$JCStatement;)Lcom/sun/tools/javac/tree/JCTree$JCForLoop;", $PUBLIC},
	{"ForeachLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCStatement;)Lcom/sun/tools/javac/tree/JCTree$JCEnhancedForLoop;", nullptr, $PUBLIC},
	{"GuardPattern", "(Lcom/sun/tools/javac/tree/JCTree$JCPattern;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCGuardPattern;", nullptr, $PUBLIC},
	{"Ident", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/tree/JCTree$JCIdent;", nullptr, $PUBLIC},
	{"Ident", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/tree/JCTree$JCIdent;", nullptr, $PUBLIC},
	{"Ident", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"Idents", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC},
	{"If", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCStatement;Lcom/sun/tools/javac/tree/JCTree$JCStatement;)Lcom/sun/tools/javac/tree/JCTree$JCIf;", nullptr, $PUBLIC},
	{"Import", "(Lcom/sun/tools/javac/tree/JCTree;Z)Lcom/sun/tools/javac/tree/JCTree$JCImport;", nullptr, $PUBLIC},
	{"Indexed", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCArrayAccess;", nullptr, $PUBLIC},
	{"Indexed", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCArrayAccess;", nullptr, $PUBLIC},
	{"Labelled", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/tree/JCTree$JCStatement;)Lcom/sun/tools/javac/tree/JCTree$JCLabeledStatement;", nullptr, $PUBLIC},
	{"Lambda", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree$JCLambda;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;>;Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree$JCLambda;", $PUBLIC},
	{"LetExpr", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$LetExpr;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCStatement;>;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$LetExpr;", $PUBLIC},
	{"LetExpr", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$LetExpr;", nullptr, $PUBLIC},
	{"Literal", "(Lcom/sun/tools/javac/code/TypeTag;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree$JCLiteral;", nullptr, $PUBLIC},
	{"Literal", "(Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree$JCLiteral;", nullptr, $PUBLIC},
	{"MethodDef", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCBlock;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/tree/JCTree$JCBlock;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;", $PUBLIC},
	{"MethodDef", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCBlock;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;>;Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/tree/JCTree$JCBlock;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;", $PUBLIC},
	{"MethodDef", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/tree/JCTree$JCBlock;)Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;", nullptr, $PUBLIC},
	{"MethodDef", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/tree/JCTree$JCBlock;)Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;", nullptr, $PUBLIC},
	{"Modifiers", "(JLcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCModifiers;", "(JLcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;)Lcom/sun/tools/javac/tree/JCTree$JCModifiers;", $PUBLIC},
	{"Modifiers", "(J)Lcom/sun/tools/javac/tree/JCTree$JCModifiers;", nullptr, $PUBLIC},
	{"ModuleDef", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/source/tree/ModuleTree$ModuleKind;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCModuleDecl;", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/source/tree/ModuleTree$ModuleKind;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCDirective;>;)Lcom/sun/tools/javac/tree/JCTree$JCModuleDecl;", $PUBLIC},
	{"NewArray", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCNewArray;", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)Lcom/sun/tools/javac/tree/JCTree$JCNewArray;", $PUBLIC},
	{"NewClass", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)Lcom/sun/tools/javac/tree/JCTree$JCNewClass;", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)Lcom/sun/tools/javac/tree/JCTree$JCNewClass;", $PUBLIC},
	{"Opens", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCOpens;", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)Lcom/sun/tools/javac/tree/JCTree$JCOpens;", $PUBLIC},
	{"PackageDecl", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCPackageDecl;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCPackageDecl;", $PUBLIC},
	{"Param", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;", nullptr, $PUBLIC},
	{"Params", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;>;", $PUBLIC},
	{"Parens", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCParens;", nullptr, $PUBLIC},
	{"ParenthesizedPattern", "(Lcom/sun/tools/javac/tree/JCTree$JCPattern;)Lcom/sun/tools/javac/tree/JCTree$JCParenthesizedPattern;", nullptr, $PUBLIC},
	{"Provides", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCProvides;", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)Lcom/sun/tools/javac/tree/JCTree$JCProvides;", $PUBLIC},
	{"QualIdent", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"QualThis", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"ReceiverVarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;", nullptr, $PUBLIC},
	{"Reference", "(Lcom/sun/source/tree/MemberReferenceTree$ReferenceMode;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;", "(Lcom/sun/source/tree/MemberReferenceTree$ReferenceMode;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;", $PUBLIC},
	{"Requires", "(ZZLcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCRequires;", nullptr, $PUBLIC},
	{"Return", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCReturn;", nullptr, $PUBLIC},
	{"Select", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;", nullptr, $PUBLIC},
	{"Select", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"Skip", "()Lcom/sun/tools/javac/tree/JCTree$JCSkip;", nullptr, $PUBLIC},
	{"SpeculativeNewClass", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;Z)Lcom/sun/tools/javac/tree/JCTree$JCNewClass;", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;Z)Lcom/sun/tools/javac/tree/JCTree$JCNewClass;", $PUBLIC},
	{"Super", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/tree/JCTree$JCIdent;", nullptr, $PUBLIC},
	{"Switch", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCSwitch;", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCase;>;)Lcom/sun/tools/javac/tree/JCTree$JCSwitch;", $PUBLIC},
	{"SwitchExpression", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCase;>;)Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;", $PUBLIC},
	{"Synchronized", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCBlock;)Lcom/sun/tools/javac/tree/JCTree$JCSynchronized;", nullptr, $PUBLIC},
	{"This", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"Throw", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCThrow;", nullptr, $PUBLIC},
	{"TopLevel", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;)Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;", $PUBLIC},
	{"Try", "(Lcom/sun/tools/javac/tree/JCTree$JCBlock;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCBlock;)Lcom/sun/tools/javac/tree/JCTree$JCTry;", "(Lcom/sun/tools/javac/tree/JCTree$JCBlock;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCatch;>;Lcom/sun/tools/javac/tree/JCTree$JCBlock;)Lcom/sun/tools/javac/tree/JCTree$JCTry;", $PUBLIC},
	{"Try", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCBlock;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCBlock;)Lcom/sun/tools/javac/tree/JCTree$JCTry;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;Lcom/sun/tools/javac/tree/JCTree$JCBlock;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCatch;>;Lcom/sun/tools/javac/tree/JCTree$JCBlock;)Lcom/sun/tools/javac/tree/JCTree$JCTry;", $PUBLIC},
	{"Type", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC},
	{"TypeAnnotation", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;", $PUBLIC},
	{"TypeAnnotation", "(Lcom/sun/tools/javac/code/Attribute;)Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;", nullptr, $PUBLIC},
	{"TypeApply", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCTypeApply;", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)Lcom/sun/tools/javac/tree/JCTree$JCTypeApply;", $PUBLIC},
	{"TypeArray", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCArrayTypeTree;", nullptr, $PUBLIC},
	{"TypeBoundKind", "(Lcom/sun/tools/javac/code/BoundKind;)Lcom/sun/tools/javac/tree/JCTree$TypeBoundKind;", nullptr, $PUBLIC},
	{"TypeCast", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCTypeCast;", nullptr, $PUBLIC},
	{"TypeCast", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCTypeCast;", nullptr, $PUBLIC},
	{"TypeIdent", "(Lcom/sun/tools/javac/code/TypeTag;)Lcom/sun/tools/javac/tree/JCTree$JCPrimitiveTypeTree;", nullptr, $PUBLIC},
	{"TypeIntersection", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCTypeIntersection;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)Lcom/sun/tools/javac/tree/JCTree$JCTypeIntersection;", $PUBLIC},
	{"TypeParam", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type$TypeVar;)Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;", nullptr, $PUBLIC},
	{"TypeParameter", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;", $PUBLIC},
	{"TypeParameter", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;)Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;", $PUBLIC},
	{"TypeParams", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;>;", $PUBLIC},
	{"TypeTest", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree$JCInstanceOf;", nullptr, $PUBLIC},
	{"TypeUnion", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/tree/JCTree$JCTypeUnion;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;)Lcom/sun/tools/javac/tree/JCTree$JCTypeUnion;", $PUBLIC},
	{"Types", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC},
	{"Unary", "(Lcom/sun/tools/javac/tree/JCTree$Tag;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCUnary;", nullptr, $PUBLIC},
	{"Uses", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCUses;", nullptr, $PUBLIC},
	{"VarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;", nullptr, $PUBLIC},
	{"VarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Z)Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;", nullptr, $PUBLIC},
	{"VarDef", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;", nullptr, $PUBLIC},
	{"WhileLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCStatement;)Lcom/sun/tools/javac/tree/JCTree$JCWhileLoop;", nullptr, $PUBLIC},
	{"Wildcard", "(Lcom/sun/tools/javac/tree/JCTree$TypeBoundKind;Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree$JCWildcard;", nullptr, $PUBLIC},
	{"Yield", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCYield;", nullptr, $PUBLIC},
	{"at", "(I)Lcom/sun/tools/javac/tree/TreeMaker;", nullptr, $PUBLIC},
	{"at", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)Lcom/sun/tools/javac/tree/TreeMaker;", nullptr, $PUBLIC},
	{"forToplevel", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)Lcom/sun/tools/javac/tree/TreeMaker;", nullptr, $PUBLIC},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/tree/TreeMaker;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TreeMaker*(*)($Context*)>(&TreeMaker::instance))},
	{"isUnqualifiable", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, 0},
	{"lambda$TopLevel$0", "(Lcom/sun/tools/javac/tree/JCTree;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($JCTree*)>(&TreeMaker::lambda$TopLevel$0))},
	{"paramName", "(I)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{"typaramName", "(I)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TreeMaker_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$Factory", "com.sun.tools.javac.tree.JCTree", "Factory", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.tree.TreeMaker$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.tree.TreeMaker$AnnotationBuilder", "com.sun.tools.javac.tree.TreeMaker", "AnnotationBuilder", 0},
	{"com.sun.tools.javac.tree.TreeMaker$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TreeMaker_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.TreeMaker",
	"java.lang.Object",
	"com.sun.tools.javac.tree.JCTree$Factory",
	_TreeMaker_FieldInfo_,
	_TreeMaker_MethodInfo_,
	nullptr,
	nullptr,
	_TreeMaker_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.TreeMaker$2,com.sun.tools.javac.tree.TreeMaker$AnnotationBuilder,com.sun.tools.javac.tree.TreeMaker$1"
};

$Object* allocate$TreeMaker($Class* clazz) {
	return $of($alloc(TreeMaker));
}

$Context$Key* TreeMaker::treeMakerKey = nullptr;

TreeMaker* TreeMaker::instance($Context* context) {
	$init(TreeMaker);
	$var(TreeMaker, instance, $cast(TreeMaker, $nc(context)->get(TreeMaker::treeMakerKey)));
	if (instance == nullptr) {
		$assign(instance, $new(TreeMaker, context));
	}
	return instance;
}

void TreeMaker::init$($Context* context) {
	this->pos = $Position::NOPOS;
	$set(this, annotationBuilder, $new($TreeMaker$AnnotationBuilder, this));
	$nc(context)->put(TreeMaker::treeMakerKey, $of(this));
	this->pos = $Position::NOPOS;
	$set(this, toplevel, nullptr);
	$set(this, names, $Names::instance(context));
	$set(this, syms, $Symtab::instance(context));
	$set(this, types, $Types::instance(context));
}

void TreeMaker::init$($JCTree$JCCompilationUnit* toplevel, $Names* names, $Types* types, $Symtab* syms) {
	this->pos = $Position::NOPOS;
	$set(this, annotationBuilder, $new($TreeMaker$AnnotationBuilder, this));
	this->pos = $Position::FIRSTPOS;
	$set(this, toplevel, toplevel);
	$set(this, names, names);
	$set(this, types, types);
	$set(this, syms, syms);
}

TreeMaker* TreeMaker::forToplevel($JCTree$JCCompilationUnit* toplevel) {
	return $new(TreeMaker, toplevel, this->names, this->types, this->syms);
}

TreeMaker* TreeMaker::at(int32_t pos) {
	this->pos = pos;
	return this;
}

TreeMaker* TreeMaker::at($JCDiagnostic$DiagnosticPosition* pos) {
	this->pos = (pos == nullptr ? $Position::NOPOS : $nc(pos)->getStartPosition());
	return this;
}

$JCTree$JCCompilationUnit* TreeMaker::TopLevel($List* defs) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(defs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree, node, $cast($JCTree, i$->next()));
			$var($JCTree$JCExpressionStatement, expressionStatement, nullptr);
			bool var$0 = $instanceOf($JCTree$JCClassDecl, node) || $instanceOf($JCTree$JCPackageDecl, node) || $instanceOf($JCTree$JCImport, node) || $instanceOf($JCTree$JCModuleDecl, node) || $instanceOf($JCTree$JCSkip, node) || $instanceOf($JCTree$JCErroneous, node);
			if (!var$0) {
				bool var$2 = $instanceOf($JCTree$JCExpressionStatement, node);
				if (var$2) {
					$assign(expressionStatement, $cast($JCTree$JCExpressionStatement, node));
					var$2 = true;
				}
				bool var$1 = var$2;
				var$0 = (var$1 && $instanceOf($JCTree$JCErroneous, $nc(expressionStatement)->expr));
			}
			$Assert::check(var$0, static_cast<$Supplier*>($$new(TreeMaker$$Lambda$lambda$TopLevel$0, node)));
		}
	}
	$var($JCTree$JCCompilationUnit, tree, $new($JCTree$JCCompilationUnit, defs));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCPackageDecl* TreeMaker::PackageDecl($List* annotations, $JCTree$JCExpression* pid) {
	$Assert::checkNonNull(annotations);
	$Assert::checkNonNull(pid);
	$var($JCTree$JCPackageDecl, tree, $new($JCTree$JCPackageDecl, annotations, pid));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCImport* TreeMaker::Import($JCTree* qualid, bool importStatic) {
	$var($JCTree$JCImport, tree, $new($JCTree$JCImport, qualid, importStatic));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCClassDecl* TreeMaker::ClassDef($JCTree$JCModifiers* mods, $Name* name, $List* typarams, $JCTree$JCExpression* extending, $List* implementing, $List* defs) {
	return ClassDef(mods, name, typarams, extending, implementing, $($List::nil()), defs);
}

$JCTree$JCClassDecl* TreeMaker::ClassDef($JCTree$JCModifiers* mods, $Name* name, $List* typarams, $JCTree$JCExpression* extending, $List* implementing, $List* permitting, $List* defs) {
	$var($JCTree$JCClassDecl, tree, $new($JCTree$JCClassDecl, mods, name, typarams, extending, implementing, permitting, defs, nullptr));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCMethodDecl* TreeMaker::MethodDef($JCTree$JCModifiers* mods, $Name* name, $JCTree$JCExpression* restype, $List* typarams, $List* params, $List* thrown, $JCTree$JCBlock* body, $JCTree$JCExpression* defaultValue) {
	return MethodDef(mods, name, restype, typarams, nullptr, params, thrown, body, defaultValue);
}

$JCTree$JCMethodDecl* TreeMaker::MethodDef($JCTree$JCModifiers* mods, $Name* name, $JCTree$JCExpression* restype, $List* typarams, $JCTree$JCVariableDecl* recvparam, $List* params, $List* thrown, $JCTree$JCBlock* body, $JCTree$JCExpression* defaultValue) {
	$var($JCTree$JCMethodDecl, tree, $new($JCTree$JCMethodDecl, mods, name, restype, typarams, recvparam, params, thrown, body, defaultValue, nullptr));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCVariableDecl* TreeMaker::VarDef($JCTree$JCModifiers* mods, $Name* name, $JCTree$JCExpression* vartype, $JCTree$JCExpression* init) {
	$var($JCTree$JCVariableDecl, tree, $new($JCTree$JCVariableDecl, mods, name, vartype, init, nullptr));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCVariableDecl* TreeMaker::VarDef($JCTree$JCModifiers* mods, $Name* name, $JCTree$JCExpression* vartype, $JCTree$JCExpression* init, bool declaredUsingVar) {
	$var($JCTree$JCVariableDecl, tree, $new($JCTree$JCVariableDecl, mods, name, vartype, init, nullptr, declaredUsingVar));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCVariableDecl* TreeMaker::ReceiverVarDef($JCTree$JCModifiers* mods, $JCTree$JCExpression* name, $JCTree$JCExpression* vartype) {
	$var($JCTree$JCVariableDecl, tree, $new($JCTree$JCVariableDecl, mods, name, vartype));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCSkip* TreeMaker::Skip() {
	$var($JCTree$JCSkip, tree, $new($JCTree$JCSkip));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCBlock* TreeMaker::Block(int64_t flags, $List* stats) {
	$var($JCTree$JCBlock, tree, $new($JCTree$JCBlock, flags, stats));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCDoWhileLoop* TreeMaker::DoLoop($JCTree$JCStatement* body, $JCTree$JCExpression* cond) {
	$var($JCTree$JCDoWhileLoop, tree, $new($JCTree$JCDoWhileLoop, body, cond));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCWhileLoop* TreeMaker::WhileLoop($JCTree$JCExpression* cond, $JCTree$JCStatement* body) {
	$var($JCTree$JCWhileLoop, tree, $new($JCTree$JCWhileLoop, cond, body));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCForLoop* TreeMaker::ForLoop($List* init, $JCTree$JCExpression* cond, $List* step, $JCTree$JCStatement* body) {
	$var($JCTree$JCForLoop, tree, $new($JCTree$JCForLoop, init, cond, step, body));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCEnhancedForLoop* TreeMaker::ForeachLoop($JCTree$JCVariableDecl* var, $JCTree$JCExpression* expr, $JCTree$JCStatement* body) {
	$var($JCTree$JCEnhancedForLoop, tree, $new($JCTree$JCEnhancedForLoop, var, expr, body));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCLabeledStatement* TreeMaker::Labelled($Name* label, $JCTree$JCStatement* body) {
	$var($JCTree$JCLabeledStatement, tree, $new($JCTree$JCLabeledStatement, label, body));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCSwitch* TreeMaker::Switch($JCTree$JCExpression* selector, $List* cases) {
	$var($JCTree$JCSwitch, tree, $new($JCTree$JCSwitch, selector, cases));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCCase* TreeMaker::Case($CaseTree$CaseKind* caseKind, $List* labels, $List* stats, $JCTree* body) {
	$var($JCTree$JCCase, tree, $new($JCTree$JCCase, caseKind, labels, stats, body));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCSwitchExpression* TreeMaker::SwitchExpression($JCTree$JCExpression* selector, $List* cases) {
	$var($JCTree$JCSwitchExpression, tree, $new($JCTree$JCSwitchExpression, selector, cases));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCSynchronized* TreeMaker::Synchronized($JCTree$JCExpression* lock, $JCTree$JCBlock* body) {
	$var($JCTree$JCSynchronized, tree, $new($JCTree$JCSynchronized, lock, body));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCTry* TreeMaker::Try($JCTree$JCBlock* body, $List* catchers, $JCTree$JCBlock* finalizer) {
	return Try($($List::nil()), body, catchers, finalizer);
}

$JCTree$JCTry* TreeMaker::Try($List* resources, $JCTree$JCBlock* body, $List* catchers, $JCTree$JCBlock* finalizer) {
	$var($JCTree$JCTry, tree, $new($JCTree$JCTry, resources, body, catchers, finalizer));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCCatch* TreeMaker::Catch($JCTree$JCVariableDecl* param, $JCTree$JCBlock* body) {
	$var($JCTree$JCCatch, tree, $new($JCTree$JCCatch, param, body));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCConditional* TreeMaker::Conditional($JCTree$JCExpression* cond, $JCTree$JCExpression* thenpart, $JCTree$JCExpression* elsepart) {
	$var($JCTree$JCConditional, tree, $new($JCTree$JCConditional, cond, thenpart, elsepart));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCIf* TreeMaker::If($JCTree$JCExpression* cond, $JCTree$JCStatement* thenpart, $JCTree$JCStatement* elsepart) {
	$var($JCTree$JCIf, tree, $new($JCTree$JCIf, cond, thenpart, elsepart));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCExpressionStatement* TreeMaker::Exec($JCTree$JCExpression* expr) {
	$var($JCTree$JCExpressionStatement, tree, $new($JCTree$JCExpressionStatement, expr));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCBreak* TreeMaker::Break($Name* label) {
	$var($JCTree$JCBreak, tree, $new($JCTree$JCBreak, label, nullptr));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCYield* TreeMaker::Yield($JCTree$JCExpression* value) {
	$var($JCTree$JCYield, tree, $new($JCTree$JCYield, value, nullptr));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCContinue* TreeMaker::Continue($Name* label) {
	$var($JCTree$JCContinue, tree, $new($JCTree$JCContinue, label, nullptr));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCReturn* TreeMaker::Return($JCTree$JCExpression* expr) {
	$var($JCTree$JCReturn, tree, $new($JCTree$JCReturn, expr));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCThrow* TreeMaker::Throw($JCTree$JCExpression* expr) {
	$var($JCTree$JCThrow, tree, $new($JCTree$JCThrow, expr));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCAssert* TreeMaker::Assert($JCTree$JCExpression* cond, $JCTree$JCExpression* detail) {
	$var($JCTree$JCAssert, tree, $new($JCTree$JCAssert, cond, detail));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCMethodInvocation* TreeMaker::Apply($List* typeargs, $JCTree$JCExpression* fn, $List* args) {
	$var($JCTree$JCMethodInvocation, tree, $new($JCTree$JCMethodInvocation, typeargs, fn, args));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCNewClass* TreeMaker::NewClass($JCTree$JCExpression* encl, $List* typeargs, $JCTree$JCExpression* clazz, $List* args, $JCTree$JCClassDecl* def) {
	return SpeculativeNewClass(encl, typeargs, clazz, args, def, false);
}

$JCTree$JCNewClass* TreeMaker::SpeculativeNewClass($JCTree$JCExpression* encl, $List* typeargs, $JCTree$JCExpression* clazz, $List* args, $JCTree$JCClassDecl* def, bool classDefRemoved) {
	$var($JCTree$JCNewClass, tree, classDefRemoved ? static_cast<$JCTree$JCNewClass*>($new($TreeMaker$1, this, encl, typeargs, clazz, args, def)) : $new($JCTree$JCNewClass, encl, typeargs, clazz, args, def));
	$nc(tree)->pos$ = this->pos;
	return tree;
}

$JCTree$JCNewArray* TreeMaker::NewArray($JCTree$JCExpression* elemtype, $List* dims, $List* elems) {
	$var($JCTree$JCNewArray, tree, $new($JCTree$JCNewArray, elemtype, dims, elems));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCLambda* TreeMaker::Lambda($List* params, $JCTree* body) {
	$var($JCTree$JCLambda, tree, $new($JCTree$JCLambda, params, body));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCParens* TreeMaker::Parens($JCTree$JCExpression* expr) {
	$var($JCTree$JCParens, tree, $new($JCTree$JCParens, expr));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCAssign* TreeMaker::Assign($JCTree$JCExpression* lhs, $JCTree$JCExpression* rhs) {
	$var($JCTree$JCAssign, tree, $new($JCTree$JCAssign, lhs, rhs));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCAssignOp* TreeMaker::Assignop($JCTree$Tag* opcode, $JCTree* lhs, $JCTree* rhs) {
	$var($JCTree$JCAssignOp, tree, $new($JCTree$JCAssignOp, opcode, lhs, rhs, nullptr));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCUnary* TreeMaker::Unary($JCTree$Tag* opcode, $JCTree$JCExpression* arg) {
	$var($JCTree$JCUnary, tree, $new($JCTree$JCUnary, opcode, arg));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCBinary* TreeMaker::Binary($JCTree$Tag* opcode, $JCTree$JCExpression* lhs, $JCTree$JCExpression* rhs) {
	$var($JCTree$JCBinary, tree, $new($JCTree$JCBinary, opcode, lhs, rhs, nullptr));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCTypeCast* TreeMaker::TypeCast($JCTree* clazz, $JCTree$JCExpression* expr) {
	$var($JCTree$JCTypeCast, tree, $new($JCTree$JCTypeCast, clazz, expr));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCInstanceOf* TreeMaker::TypeTest($JCTree$JCExpression* expr, $JCTree* clazz) {
	$var($JCTree$JCInstanceOf, tree, $new($JCTree$JCInstanceOf, expr, clazz));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCBindingPattern* TreeMaker::BindingPattern($JCTree$JCVariableDecl* var) {
	$var($JCTree$JCBindingPattern, tree, $new($JCTree$JCBindingPattern, var));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCDefaultCaseLabel* TreeMaker::DefaultCaseLabel() {
	$var($JCTree$JCDefaultCaseLabel, tree, $new($JCTree$JCDefaultCaseLabel));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCParenthesizedPattern* TreeMaker::ParenthesizedPattern($JCTree$JCPattern* pattern) {
	$var($JCTree$JCParenthesizedPattern, tree, $new($JCTree$JCParenthesizedPattern, pattern));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCGuardPattern* TreeMaker::GuardPattern($JCTree$JCPattern* guardedPattern, $JCTree$JCExpression* expr) {
	$var($JCTree$JCGuardPattern, tree, $new($JCTree$JCGuardPattern, guardedPattern, expr));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCArrayAccess* TreeMaker::Indexed($JCTree$JCExpression* indexed, $JCTree$JCExpression* index) {
	$var($JCTree$JCArrayAccess, tree, $new($JCTree$JCArrayAccess, indexed, index));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCFieldAccess* TreeMaker::Select($JCTree$JCExpression* selected, $Name* selector) {
	$var($JCTree$JCFieldAccess, tree, $new($JCTree$JCFieldAccess, selected, selector, nullptr));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCMemberReference* TreeMaker::Reference($MemberReferenceTree$ReferenceMode* mode, $Name* name, $JCTree$JCExpression* expr, $List* typeargs) {
	$var($JCTree$JCMemberReference, tree, $new($JCTree$JCMemberReference, mode, name, expr, typeargs));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCIdent* TreeMaker::Ident($Name* name) {
	$var($JCTree$JCIdent, tree, $new($JCTree$JCIdent, name, nullptr));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCLiteral* TreeMaker::Literal($TypeTag* tag, Object$* value) {
	$var($JCTree$JCLiteral, tree, $new($JCTree$JCLiteral, tag, value));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCPrimitiveTypeTree* TreeMaker::TypeIdent($TypeTag* typetag) {
	$var($JCTree$JCPrimitiveTypeTree, tree, $new($JCTree$JCPrimitiveTypeTree, typetag));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCArrayTypeTree* TreeMaker::TypeArray($JCTree$JCExpression* elemtype) {
	$var($JCTree$JCArrayTypeTree, tree, $new($JCTree$JCArrayTypeTree, elemtype));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCTypeApply* TreeMaker::TypeApply($JCTree$JCExpression* clazz, $List* arguments) {
	$var($JCTree$JCTypeApply, tree, $new($JCTree$JCTypeApply, clazz, arguments));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCTypeUnion* TreeMaker::TypeUnion($List* components) {
	$var($JCTree$JCTypeUnion, tree, $new($JCTree$JCTypeUnion, components));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCTypeIntersection* TreeMaker::TypeIntersection($List* components) {
	$var($JCTree$JCTypeIntersection, tree, $new($JCTree$JCTypeIntersection, components));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCTypeParameter* TreeMaker::TypeParameter($Name* name, $List* bounds) {
	return TypeParameter(name, bounds, $($List::nil()));
}

$JCTree$JCTypeParameter* TreeMaker::TypeParameter($Name* name, $List* bounds, $List* annos) {
	$var($JCTree$JCTypeParameter, tree, $new($JCTree$JCTypeParameter, name, bounds, annos));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCWildcard* TreeMaker::Wildcard($JCTree$TypeBoundKind* kind, $JCTree* type) {
	$var($JCTree$JCWildcard, tree, $new($JCTree$JCWildcard, kind, type));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$TypeBoundKind* TreeMaker::TypeBoundKind($BoundKind* kind) {
	$var($JCTree$TypeBoundKind, tree, $new($JCTree$TypeBoundKind, kind));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCAnnotation* TreeMaker::Annotation($JCTree* annotationType, $List* args) {
	$init($JCTree$Tag);
	$var($JCTree$JCAnnotation, tree, $new($JCTree$JCAnnotation, $JCTree$Tag::ANNOTATION, annotationType, args));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCAnnotation* TreeMaker::TypeAnnotation($JCTree* annotationType, $List* args) {
	$init($JCTree$Tag);
	$var($JCTree$JCAnnotation, tree, $new($JCTree$JCAnnotation, $JCTree$Tag::TYPE_ANNOTATION, annotationType, args));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCModifiers* TreeMaker::Modifiers(int64_t flags, $List* annotations) {
	$var($JCTree$JCModifiers, tree, $new($JCTree$JCModifiers, flags, annotations));
	bool noFlags = ((int64_t)(flags & (uint64_t)($Flags::ModifierFlags | $Flags::ANNOTATION))) == 0;
	tree->pos$ = (noFlags && $nc(annotations)->isEmpty()) ? $Position::NOPOS : this->pos;
	return tree;
}

$JCTree$JCModifiers* TreeMaker::Modifiers(int64_t flags) {
	return Modifiers(flags, $($List::nil()));
}

$JCTree$JCModuleDecl* TreeMaker::ModuleDef($JCTree$JCModifiers* mods, $ModuleTree$ModuleKind* kind, $JCTree$JCExpression* qualid, $List* directives) {
	$var($JCTree$JCModuleDecl, tree, $new($JCTree$JCModuleDecl, mods, kind, qualid, directives));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCExports* TreeMaker::Exports($JCTree$JCExpression* qualId, $List* moduleNames) {
	$var($JCTree$JCExports, tree, $new($JCTree$JCExports, qualId, moduleNames));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCOpens* TreeMaker::Opens($JCTree$JCExpression* qualId, $List* moduleNames) {
	$var($JCTree$JCOpens, tree, $new($JCTree$JCOpens, qualId, moduleNames));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCProvides* TreeMaker::Provides($JCTree$JCExpression* serviceName, $List* implNames) {
	$var($JCTree$JCProvides, tree, $new($JCTree$JCProvides, serviceName, implNames));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCRequires* TreeMaker::Requires(bool isTransitive, bool isStaticPhase, $JCTree$JCExpression* qualId) {
	$var($JCTree$JCRequires, tree, $new($JCTree$JCRequires, isTransitive, isStaticPhase, qualId));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCUses* TreeMaker::Uses($JCTree$JCExpression* qualId) {
	$var($JCTree$JCUses, tree, $new($JCTree$JCUses, qualId));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCAnnotatedType* TreeMaker::AnnotatedType($List* annotations, $JCTree$JCExpression* underlyingType) {
	$var($JCTree$JCAnnotatedType, tree, $new($JCTree$JCAnnotatedType, annotations, underlyingType));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCErroneous* TreeMaker::Erroneous() {
	return Erroneous($($List::nil()));
}

$JCTree$JCErroneous* TreeMaker::Erroneous($List* errs) {
	$var($JCTree$JCErroneous, tree, $new($JCTree$JCErroneous, errs));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$LetExpr* TreeMaker::LetExpr($List* defs, $JCTree$JCExpression* expr) {
	$var($JCTree$LetExpr, tree, $new($JCTree$LetExpr, defs, expr));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCClassDecl* TreeMaker::AnonymousClassDef($JCTree$JCModifiers* mods, $List* defs) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCModifiers, var$0, mods);
	$var($Name, var$1, $nc(this->names)->empty);
	$var($List, var$2, $List::nil());
	return ClassDef(var$0, var$1, var$2, nullptr, $($List::nil()), defs);
}

$JCTree$LetExpr* TreeMaker::LetExpr($JCTree$JCVariableDecl* def, $JCTree$JCExpression* expr) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$LetExpr, tree, $new($JCTree$LetExpr, $($List::of(def)), expr));
	tree->pos$ = this->pos;
	return tree;
}

$JCTree$JCIdent* TreeMaker::Ident($Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	return $cast($JCTree$JCIdent, $nc($($$new($JCTree$JCIdent, ($nc(sym)->name != $nc(this->names)->empty) ? $nc(sym)->name : $(sym->flatName()), sym)->setPos(this->pos)))->setType($nc(sym)->type));
}

$JCTree$JCExpression* TreeMaker::Select($JCTree$JCExpression* base, $Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	return $nc($($$new($JCTree$JCFieldAccess, base, $nc(sym)->name, sym)->setPos(this->pos)))->setType($nc(sym)->type);
}

$JCTree$JCExpression* TreeMaker::QualIdent($Symbol* sym) {
	return isUnqualifiable(sym) ? static_cast<$JCTree$JCExpression*>(Ident(sym)) : Select($(QualIdent($nc(sym)->owner)), sym);
}

$JCTree$JCExpression* TreeMaker::Ident($JCTree$JCVariableDecl* param) {
	return Ident(static_cast<$Symbol*>($nc(param)->sym));
}

$List* TreeMaker::Idents($List* params) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, ids, $new($ListBuffer));
	{
		$var($List, l, params);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			ids->append($(Ident($cast($JCTree$JCVariableDecl, l->head))));
		}
	}
	return ids->toList();
}

$JCTree$JCExpression* TreeMaker::This($Type* t) {
	return Ident(static_cast<$Symbol*>($$new($Symbol$VarSymbol, 16, $nc(this->names)->_this, t, $nc(t)->tsym)));
}

$JCTree$JCExpression* TreeMaker::QualThis($Type* t) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCExpression, var$0, Type(t));
	return Select(var$0, static_cast<$Symbol*>($$new($Symbol$VarSymbol, 16, $nc(this->names)->_this, t, $nc(t)->tsym)));
}

$JCTree$JCExpression* TreeMaker::ClassLiteral($Symbol$ClassSymbol* clazz) {
	return ClassLiteral($nc(clazz)->type);
}

$JCTree$JCExpression* TreeMaker::ClassLiteral($Type* t) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$VarSymbol, lit, $new($Symbol$VarSymbol, (8 | 1) | 16, $nc(this->names)->_class, t, $nc(t)->tsym));
	return Select($(Type(t)), static_cast<$Symbol*>(lit));
}

$JCTree$JCIdent* TreeMaker::Super($Type* t, $Symbol$TypeSymbol* owner) {
	return Ident(static_cast<$Symbol*>($$new($Symbol$VarSymbol, 16, $nc(this->names)->_super, t, owner)));
}

$JCTree$JCMethodInvocation* TreeMaker::App($JCTree$JCExpression* meth, $List* args) {
	$useLocalCurrentObjectStackCache();
	return $nc($(Apply(nullptr, meth, args)))->setType($($nc($nc(meth)->type)->getReturnType()));
}

$JCTree$JCMethodInvocation* TreeMaker::App($JCTree$JCExpression* meth) {
	$useLocalCurrentObjectStackCache();
	return $nc($(Apply(nullptr, meth, $($List::nil()))))->setType($($nc($nc(meth)->type)->getReturnType()));
}

$JCTree$JCExpression* TreeMaker::Create($Symbol* ctor, $List* args) {
	$useLocalCurrentObjectStackCache();
	$var($Type, t, $nc($nc(ctor)->owner)->erasure(this->types));
	$var($JCTree$JCNewClass, newclass, NewClass(nullptr, nullptr, $(Type(t)), args, nullptr));
	$set($nc(newclass), constructor, ctor);
	newclass->setType(t);
	return newclass;
}

$JCTree$JCExpression* TreeMaker::Type($Type* t) {
	$useLocalCurrentObjectStackCache();
	if (t == nullptr) {
		return nullptr;
	}
	$var($JCTree$JCExpression, tp, nullptr);
	$init($TreeMaker$2);
	switch ($nc($TreeMaker$2::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc(($($nc(t)->getTag())))->ordinal())) {
	case 1:
		{}
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
			$assign(tp, TypeIdent($(t->getTag())));
			break;
		}
	case 10:
		{
			$assign(tp, Ident(static_cast<$Symbol*>(t->tsym)));
			break;
		}
	case 11:
		{
			{
				$var($Type$WildcardType, a, $cast($Type$WildcardType, t));
				$var($JCTree$TypeBoundKind, var$0, TypeBoundKind(a->kind));
				$init($BoundKind);
				$assign(tp, Wildcard(var$0, a->kind == $BoundKind::UNBOUND ? ($JCTree*)nullptr : $(static_cast<$JCTree*>(Type(a->type)))));
				break;
			}
		}
	case 12:
		{
			switch ($nc($TreeMaker$2::$SwitchMap$javax$lang$model$type$TypeKind)->get($nc(($(t->getKind())))->ordinal())) {
			case 1:
				{
					{
						$var($Type$UnionClassType, tu, $cast($Type$UnionClassType, t));
						$var($ListBuffer, la, $new($ListBuffer));
						{
							$var($Iterator, i$, $nc($(tu->getAlternativeTypes()))->iterator());
							for (; $nc(i$)->hasNext();) {
								$var($Type, ta, $cast($Type, i$->next()));
								{
									la->add($(Type(ta)));
								}
							}
						}
						$assign(tp, TypeUnion($(la->toList())));
						break;
					}
				}
			case 2:
				{
					{
						$var($Type$IntersectionClassType, it, $cast($Type$IntersectionClassType, t));
						$var($ListBuffer, la, $new($ListBuffer));
						{
							$var($Iterator, i$, $nc($(it->getExplicitComponents()))->iterator());
							for (; $nc(i$)->hasNext();) {
								$var($Type, ta, $cast($Type, i$->next()));
								{
									la->add($(Type(ta)));
								}
							}
						}
						$assign(tp, TypeIntersection($(la->toList())));
						break;
					}
				}
			default:
				{
					{
						$var($Type, outer, t->getEnclosingType());
						$init($TypeTag);
						$init($Kinds$Kind);
						$var($JCTree$JCExpression, clazz, $nc(outer)->hasTag($TypeTag::CLASS) && $nc($nc(t->tsym)->owner)->kind == $Kinds$Kind::TYP ? Select($(Type(outer)), static_cast<$Symbol*>(t->tsym)) : QualIdent(t->tsym));
						$assign(tp, $nc($(t->getTypeArguments()))->isEmpty() ? clazz : static_cast<$JCTree$JCExpression*>(TypeApply(clazz, $(Types($(t->getTypeArguments()))))));
						break;
					}
				}
			}
			break;
		}
	case 13:
		{
			$assign(tp, TypeArray($(Type($($nc(this->types)->elemtype(t))))));
			break;
		}
	case 14:
		{
			$init($TypeTag);
			$assign(tp, TypeIdent($TypeTag::ERROR));
			break;
		}
	default:
		{
			$throwNew($AssertionError, $of($$str({"unexpected type: "_s, t})));
		}
	}
	return $nc(tp)->setType(t);
}

$List* TreeMaker::Types($List* ts) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, lb, $new($ListBuffer));
	{
		$var($List, l, ts);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			lb->append($(Type($cast($Type, l->head))));
		}
	}
	return lb->toList();
}

$JCTree$JCVariableDecl* TreeMaker::VarDef($Symbol$VarSymbol* v, $JCTree$JCExpression* init) {
	$useLocalCurrentObjectStackCache();
	int64_t var$1 = $nc(v)->flags();
	$var($JCTree$JCModifiers, var$0, Modifiers(var$1, $(Annotations($(v->getRawAttributes())))));
	$var($Name, var$2, $nc(v)->name);
	return $cast($JCTree$JCVariableDecl, $nc($($$new($JCTree$JCVariableDecl, var$0, var$2, $(Type(v->type)), init, v)->setPos(this->pos)))->setType($nc(v)->type));
}

$List* TreeMaker::Annotations($List* attributes) {
	$useLocalCurrentObjectStackCache();
	if (attributes == nullptr) {
		return $List::nil();
	}
	$var($ListBuffer, result, $new($ListBuffer));
	{
		$var($List, i, attributes);
		for (; $nc(i)->nonEmpty(); $assign(i, $nc(i)->tail)) {
			$var($Attribute, a, $cast($Attribute, i->head));
			result->append($(Annotation(a)));
		}
	}
	return result->toList();
}

$JCTree$JCLiteral* TreeMaker::Literal(Object$* value) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCLiteral, result, nullptr);
	$var($Boolean, boolVal, nullptr);
	{
		$var($Character, charVal, nullptr);
		if ($instanceOf($String, value)) {
			$init($TypeTag);
			$assign(result, $nc($(Literal($TypeTag::CLASS, value)))->setType($($nc($nc(this->syms)->stringType)->constType(value))));
		} else if ($instanceOf($Integer, value)) {
			$init($TypeTag);
			$assign(result, $nc($(Literal($TypeTag::INT, value)))->setType($($nc($nc(this->syms)->intType)->constType(value))));
		} else if ($instanceOf($Long, value)) {
			$init($TypeTag);
			$assign(result, $nc($(Literal($TypeTag::LONG, value)))->setType($($nc($nc(this->syms)->longType)->constType(value))));
		} else if ($instanceOf($Byte, value)) {
			$init($TypeTag);
			$assign(result, $nc($(Literal($TypeTag::BYTE, value)))->setType($($nc($nc(this->syms)->byteType)->constType(value))));
		} else {
			bool var$1 = $instanceOf($Character, value);
			if (var$1) {
				$assign(charVal, $cast($Character, value));
				var$1 = true;
			}
			if (var$1) {
				int32_t v = $nc($($nc(charVal)->toString()))->charAt(0);
				$init($TypeTag);
				$assign(result, $nc($(Literal($TypeTag::CHAR, $($Integer::valueOf(v)))))->setType($($nc($nc(this->syms)->charType)->constType($($Integer::valueOf(v))))));
			} else if ($instanceOf($Double, value)) {
				$init($TypeTag);
				$assign(result, $nc($(Literal($TypeTag::DOUBLE, value)))->setType($($nc($nc(this->syms)->doubleType)->constType(value))));
			} else if ($instanceOf($Float, value)) {
				$init($TypeTag);
				$assign(result, $nc($(Literal($TypeTag::FLOAT, value)))->setType($($nc($nc(this->syms)->floatType)->constType(value))));
			} else if ($instanceOf($Short, value)) {
				$init($TypeTag);
				$assign(result, $nc($(Literal($TypeTag::SHORT, value)))->setType($($nc($nc(this->syms)->shortType)->constType(value))));
			} else {
				bool var$3 = $instanceOf($Boolean, value);
				if (var$3) {
					$assign(boolVal, $cast($Boolean, value));
					var$3 = true;
				}
				if (var$3) {
					int32_t v = $nc(boolVal)->booleanValue() ? 1 : 0;
					$init($TypeTag);
					$assign(result, $nc($(Literal($TypeTag::BOOLEAN, $($Integer::valueOf(v)))))->setType($($nc($nc(this->syms)->booleanType)->constType($($Integer::valueOf(v))))));
				} else {
					$throwNew($AssertionError, value);
				}
			}
		}
	}
	return result;
}

$JCTree$JCAnnotation* TreeMaker::Annotation($Attribute* a) {
	return $nc(this->annotationBuilder)->translate($cast($Attribute$Compound, a));
}

$JCTree$JCAnnotation* TreeMaker::TypeAnnotation($Attribute* a) {
	return $nc(this->annotationBuilder)->translate($cast($Attribute$TypeCompound, a));
}

$JCTree$JCMethodDecl* TreeMaker::MethodDef($Symbol$MethodSymbol* m, $JCTree$JCBlock* body) {
	return MethodDef(m, $nc(m)->type, body);
}

$JCTree$JCMethodDecl* TreeMaker::MethodDef($Symbol$MethodSymbol* m, $Type* mtype, $JCTree$JCBlock* body) {
	$useLocalCurrentObjectStackCache();
	int64_t var$1 = $nc(m)->flags();
	$var($JCTree$JCModifiers, var$0, Modifiers(var$1, $(Annotations($(m->getRawAttributes())))));
	$var($Name, var$2, $nc(m)->name);
	$var($JCTree$JCExpression, var$3, m->name != $nc(this->names)->init ? Type($($nc(mtype)->getReturnType())) : ($JCTree$JCExpression*)nullptr);
	$var($List, var$4, TypeParams($($nc(mtype)->getTypeArguments())));
	$var($List, var$5, Params($($nc(mtype)->getParameterTypes()), m));
	return $cast($JCTree$JCMethodDecl, $nc($($$new($JCTree$JCMethodDecl, var$0, var$2, var$3, var$4, nullptr, var$5, $(Types($($nc(mtype)->getThrownTypes()))), body, nullptr, m)->setPos(this->pos)))->setType(mtype));
}

$JCTree$JCTypeParameter* TreeMaker::TypeParam($Name* name, $Type$TypeVar* tvar) {
	$useLocalCurrentObjectStackCache();
	return $cast($JCTree$JCTypeParameter, $nc($($nc($(TypeParameter(name, $(Types($($nc(this->types)->getBounds(tvar)))))))->setPos(this->pos)))->setType(tvar));
}

$List* TreeMaker::TypeParams($List* typarams) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, tparams, $new($ListBuffer));
	{
		$var($List, l, typarams);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			tparams->append($(TypeParam($nc($nc(($cast($Type, l->head)))->tsym)->name, $cast($Type$TypeVar, l->head))));
		}
	}
	return tparams->toList();
}

$JCTree$JCVariableDecl* TreeMaker::Param($Name* name, $Type* argtype, $Symbol* owner) {
	return VarDef($$new($Symbol$VarSymbol, 0x0000000200000000, name, argtype, owner), nullptr);
}

$List* TreeMaker::Params($List* argtypes, $Symbol* owner) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, params, $new($ListBuffer));
	$init($Kinds$Kind);
	$var($Symbol$MethodSymbol, mth, ($nc(owner)->kind == $Kinds$Kind::MTH) ? ($cast($Symbol$MethodSymbol, owner)) : ($Symbol$MethodSymbol*)nullptr);
	bool var$0 = mth != nullptr && mth->params$ != nullptr;
	if (var$0) {
		int32_t var$1 = $nc(argtypes)->length();
		var$0 = var$1 == $nc(mth->params$)->length();
	}
	if (var$0) {
		{
			$var($Iterator, i$, $nc($nc(($cast($Symbol$MethodSymbol, owner)))->params$)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Symbol$VarSymbol, param, $cast($Symbol$VarSymbol, i$->next()));
				params->append($(VarDef(param, nullptr)));
			}
		}
	} else {
		int32_t i = 0;
		{
			$var($List, l, argtypes);
			for (; l->nonEmpty(); $assign(l, l->tail)) {
				params->append($(Param($(paramName(i++)), $cast($Type, $nc(l)->head), owner)));
			}
		}
	}
	return params->toList();
}

$JCTree$JCStatement* TreeMaker::Call($JCTree$JCExpression* apply) {
	$init($TypeTag);
	return $nc($nc(apply)->type)->hasTag($TypeTag::VOID) ? static_cast<$JCTree$JCStatement*>(Exec(apply)) : static_cast<$JCTree$JCStatement*>(Return(apply));
}

$JCTree$JCStatement* TreeMaker::Assignment($Symbol* v, $JCTree$JCExpression* rhs) {
	$useLocalCurrentObjectStackCache();
	return Exec($($nc($(Assign($(Ident(v)), rhs)))->setType($nc(v)->type)));
}

$JCTree$JCArrayAccess* TreeMaker::Indexed($Symbol* v, $JCTree$JCExpression* index) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCArrayAccess, tree, $new($JCTree$JCArrayAccess, $(QualIdent(v)), index));
	$set(tree, type, $nc(($cast($Type$ArrayType, $nc(v)->type)))->elemtype);
	return tree;
}

$JCTree$JCTypeCast* TreeMaker::TypeCast($Type* type, $JCTree$JCExpression* expr) {
	$useLocalCurrentObjectStackCache();
	return $cast($JCTree$JCTypeCast, $nc($(TypeCast($(static_cast<$JCTree*>(Type(type))), expr)))->setType(type));
}

bool TreeMaker::isUnqualifiable($Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$Kind);
	if ($nc(sym)->name == $nc(this->names)->empty || $nc(sym)->owner == nullptr || $equals($nc(sym)->owner, $nc(this->syms)->rootPackage) || $nc($nc(sym)->owner)->kind == $Kinds$Kind::MTH || $nc($nc(sym)->owner)->kind == $Kinds$Kind::VAR) {
		return true;
	} else {
		if (sym->kind == $Kinds$Kind::TYP && this->toplevel != nullptr) {
			$var($Iterator, it, $nc($($nc($nc(this->toplevel)->namedImportScope)->getSymbolsByName(sym->name)))->iterator());
			if ($nc(it)->hasNext()) {
				$var($Symbol, s, $cast($Symbol, it->next()));
				return s == sym && !it->hasNext();
			}
			$assign(it, $nc($($nc($($nc($nc(this->toplevel)->packge)->members()))->getSymbolsByName(sym->name)))->iterator());
			if ($nc(it)->hasNext()) {
				$var($Symbol, s, $cast($Symbol, it->next()));
				return s == sym && !it->hasNext();
			}
			$assign(it, $nc($($nc($nc(this->toplevel)->starImportScope)->getSymbolsByName(sym->name)))->iterator());
			if ($nc(it)->hasNext()) {
				$var($Symbol, s, $cast($Symbol, it->next()));
				return s == sym && !it->hasNext();
			}
		}
	}
	return false;
}

$Name* TreeMaker::paramName(int32_t i) {
	$useLocalCurrentObjectStackCache();
	return $nc(this->names)->fromString($$str({"x"_s, $$str(i)}));
}

$Name* TreeMaker::typaramName(int32_t i) {
	$useLocalCurrentObjectStackCache();
	return $nc(this->names)->fromString($$str({"A"_s, $$str(i)}));
}

$String* TreeMaker::lambda$TopLevel$0($JCTree* node) {
	$init(TreeMaker);
	return $nc($of(node))->getClass()->getSimpleName();
}

void clinit$TreeMaker($Class* class$) {
	$assignStatic(TreeMaker::treeMakerKey, $new($Context$Key));
}

TreeMaker::TreeMaker() {
}

$Class* TreeMaker::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TreeMaker$$Lambda$lambda$TopLevel$0::classInfo$.name)) {
			return TreeMaker$$Lambda$lambda$TopLevel$0::load$(name, initialize);
		}
	}
	$loadClass(TreeMaker, name, initialize, &_TreeMaker_ClassInfo_, clinit$TreeMaker, allocate$TreeMaker);
	return class$;
}

$Class* TreeMaker::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com