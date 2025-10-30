#include <com/sun/tools/javac/jvm/Gen.h>

#include <com/sun/tools/javac/code/Attribute$TypeCompound.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>
#include <com/sun/tools/javac/code/Symbol$DynamicVarSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/TargetType.h>
#include <com/sun/tools/javac/code/Type$DelegatedType.h>
#include <com/sun/tools/javac/code/Type$JCPrimitiveType.h>
#include <com/sun/tools/javac/code/Type$JCVoidType.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeAnnotationPosition.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Annotate.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Lower.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/jvm/CRTable.h>
#include <com/sun/tools/javac/jvm/ClassFile.h>
#include <com/sun/tools/javac/jvm/Code$Chain.h>
#include <com/sun/tools/javac/jvm/Code$StackMapFormat.h>
#include <com/sun/tools/javac/jvm/Code$StackMapFrame.h>
#include <com/sun/tools/javac/jvm/Code$State.h>
#include <com/sun/tools/javac/jvm/Code.h>
#include <com/sun/tools/javac/jvm/Gen$1.h>
#include <com/sun/tools/javac/jvm/Gen$2.h>
#include <com/sun/tools/javac/jvm/Gen$3.h>
#include <com/sun/tools/javac/jvm/Gen$4.h>
#include <com/sun/tools/javac/jvm/Gen$ClassReferenceVisitor.h>
#include <com/sun/tools/javac/jvm/Gen$CodeSizeOverflow.h>
#include <com/sun/tools/javac/jvm/Gen$GenContext.h>
#include <com/sun/tools/javac/jvm/Gen$GenFinalizer.h>
#include <com/sun/tools/javac/jvm/Items$CondItem.h>
#include <com/sun/tools/javac/jvm/Items$Item.h>
#include <com/sun/tools/javac/jvm/Items$LocalItem.h>
#include <com/sun/tools/javac/jvm/Items.h>
#include <com/sun/tools/javac/jvm/PoolConstant$LoadableConstant.h>
#include <com/sun/tools/javac/jvm/PoolConstant.h>
#include <com/sun/tools/javac/jvm/PoolWriter.h>
#include <com/sun/tools/javac/jvm/StringConcat.h>
#include <com/sun/tools/javac/jvm/Target.h>
#include <com/sun/tools/javac/jvm/UninitializedType.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/model/FilteredMemberList.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/tree/EndPosTable.h>
#include <com/sun/tools/javac/tree/JCTree$JCAnnotatedType.h>
#include <com/sun/tools/javac/tree/JCTree$JCArrayAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssign.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssignOp.h>
#include <com/sun/tools/javac/tree/JCTree$JCBinary.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCBreak.h>
#include <com/sun/tools/javac/tree/JCTree$JCCase.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCCatch.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree$JCConditional.h>
#include <com/sun/tools/javac/tree/JCTree$JCContinue.h>
#include <com/sun/tools/javac/tree/JCTree$JCDoWhileLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCEnhancedForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpressionStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCIf.h>
#include <com/sun/tools/javac/tree/JCTree$JCInstanceOf.h>
#include <com/sun/tools/javac/tree/JCTree$JCLabeledStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCLiteral.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodInvocation.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewArray.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCOperatorExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCParens.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCReturn.h>
#include <com/sun/tools/javac/tree/JCTree$JCSkip.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCSwitch.h>
#include <com/sun/tools/javac/tree/JCTree$JCSwitchExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCSynchronized.h>
#include <com/sun/tools/javac/tree/JCTree$JCThrow.h>
#include <com/sun/tools/javac/tree/JCTree$JCTry.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeCast.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeUnion.h>
#include <com/sun/tools/javac/tree/JCTree$JCUnary.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCWhileLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCWildcard.h>
#include <com/sun/tools/javac/tree/JCTree$JCYield.h>
#include <com/sun/tools/javac/tree/JCTree$LetExpr.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo$PosKind.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Bits.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Options.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <com/sun/tools/javac/util/Position$LineMap.h>
#include <com/sun/tools/javac/util/Position.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Number.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/function/ToIntBiFunction.h>
#include <javax/lang/model/element/ElementKind.h>
#include <jcpp.h>

#undef AND
#undef ARRAY
#undef BLOCK
#undef BOT
#undef CLASS
#undef CONDEXPR
#undef CONSTRUCTOR
#undef END_POS
#undef FIELD
#undef FIRST_STAT_POS
#undef G
#undef G_CUSTOM
#undef INT
#undef LETEXPR
#undef MAX_DIMENSIONS
#undef MAX_ENTRIES
#undef MAX_PARAMETERS
#undef MAX_STRING_LENGTH
#undef MAX_VALUE
#undef METHODDEF
#undef MINUS_ASG
#undef MIN_VALUE
#undef MTH
#undef NOPOS
#undef NOT
#undef OR
#undef PLUS_ASG
#undef POSTINC
#undef PREDEC
#undef PREINC
#undef PUBLIC
#undef STATIC_INIT
#undef SWITCH_EXPRESSION
#undef SYNTHETIC
#undef TRY
#undef TYP
#undef UNKNOWN
#undef VAR
#undef VARDEF
#undef VOID
#undef XJCOV

using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Attribute$TypeCompound = ::com::sun::tools::javac::code::Attribute$TypeCompound;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
using $Symbol$DynamicVarSymbol = ::com::sun::tools::javac::code::Symbol$DynamicVarSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$OperatorSymbol = ::com::sun::tools::javac::code::Symbol$OperatorSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $TargetType = ::com::sun::tools::javac::code::TargetType;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$DelegatedType = ::com::sun::tools::javac::code::Type$DelegatedType;
using $Type$JCPrimitiveType = ::com::sun::tools::javac::code::Type$JCPrimitiveType;
using $Type$JCVoidType = ::com::sun::tools::javac::code::Type$JCVoidType;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $TypeAnnotationPosition = ::com::sun::tools::javac::code::TypeAnnotationPosition;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Annotate = ::com::sun::tools::javac::comp::Annotate;
using $Check = ::com::sun::tools::javac::comp::Check;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Lower = ::com::sun::tools::javac::comp::Lower;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $CRTable = ::com::sun::tools::javac::jvm::CRTable;
using $ClassFile = ::com::sun::tools::javac::jvm::ClassFile;
using $Code = ::com::sun::tools::javac::jvm::Code;
using $Code$Chain = ::com::sun::tools::javac::jvm::Code$Chain;
using $Code$StackMapFormat = ::com::sun::tools::javac::jvm::Code$StackMapFormat;
using $Code$StackMapFrame = ::com::sun::tools::javac::jvm::Code$StackMapFrame;
using $Code$State = ::com::sun::tools::javac::jvm::Code$State;
using $Gen$1 = ::com::sun::tools::javac::jvm::Gen$1;
using $Gen$2 = ::com::sun::tools::javac::jvm::Gen$2;
using $Gen$3 = ::com::sun::tools::javac::jvm::Gen$3;
using $Gen$4 = ::com::sun::tools::javac::jvm::Gen$4;
using $Gen$ClassReferenceVisitor = ::com::sun::tools::javac::jvm::Gen$ClassReferenceVisitor;
using $Gen$CodeSizeOverflow = ::com::sun::tools::javac::jvm::Gen$CodeSizeOverflow;
using $Gen$GenContext = ::com::sun::tools::javac::jvm::Gen$GenContext;
using $Gen$GenFinalizer = ::com::sun::tools::javac::jvm::Gen$GenFinalizer;
using $Items = ::com::sun::tools::javac::jvm::Items;
using $Items$CondItem = ::com::sun::tools::javac::jvm::Items$CondItem;
using $Items$Item = ::com::sun::tools::javac::jvm::Items$Item;
using $Items$LocalItem = ::com::sun::tools::javac::jvm::Items$LocalItem;
using $PoolConstant = ::com::sun::tools::javac::jvm::PoolConstant;
using $PoolConstant$LoadableConstant = ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant;
using $PoolWriter = ::com::sun::tools::javac::jvm::PoolWriter;
using $StringConcat = ::com::sun::tools::javac::jvm::StringConcat;
using $Target = ::com::sun::tools::javac::jvm::Target;
using $UninitializedType = ::com::sun::tools::javac::jvm::UninitializedType;
using $Option = ::com::sun::tools::javac::main::Option;
using $FilteredMemberList = ::com::sun::tools::javac::model::FilteredMemberList;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $EndPosTable = ::com::sun::tools::javac::tree::EndPosTable;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCAnnotatedType = ::com::sun::tools::javac::tree::JCTree$JCAnnotatedType;
using $JCTree$JCArrayAccess = ::com::sun::tools::javac::tree::JCTree$JCArrayAccess;
using $JCTree$JCAssign = ::com::sun::tools::javac::tree::JCTree$JCAssign;
using $JCTree$JCAssignOp = ::com::sun::tools::javac::tree::JCTree$JCAssignOp;
using $JCTree$JCBinary = ::com::sun::tools::javac::tree::JCTree$JCBinary;
using $JCTree$JCBlock = ::com::sun::tools::javac::tree::JCTree$JCBlock;
using $JCTree$JCBreak = ::com::sun::tools::javac::tree::JCTree$JCBreak;
using $JCTree$JCCase = ::com::sun::tools::javac::tree::JCTree$JCCase;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCCatch = ::com::sun::tools::javac::tree::JCTree$JCCatch;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $JCTree$JCConditional = ::com::sun::tools::javac::tree::JCTree$JCConditional;
using $JCTree$JCContinue = ::com::sun::tools::javac::tree::JCTree$JCContinue;
using $JCTree$JCDoWhileLoop = ::com::sun::tools::javac::tree::JCTree$JCDoWhileLoop;
using $JCTree$JCEnhancedForLoop = ::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCExpressionStatement = ::com::sun::tools::javac::tree::JCTree$JCExpressionStatement;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCForLoop = ::com::sun::tools::javac::tree::JCTree$JCForLoop;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCIf = ::com::sun::tools::javac::tree::JCTree$JCIf;
using $JCTree$JCInstanceOf = ::com::sun::tools::javac::tree::JCTree$JCInstanceOf;
using $JCTree$JCLabeledStatement = ::com::sun::tools::javac::tree::JCTree$JCLabeledStatement;
using $JCTree$JCLiteral = ::com::sun::tools::javac::tree::JCTree$JCLiteral;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCMethodInvocation = ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCNewArray = ::com::sun::tools::javac::tree::JCTree$JCNewArray;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCOperatorExpression = ::com::sun::tools::javac::tree::JCTree$JCOperatorExpression;
using $JCTree$JCParens = ::com::sun::tools::javac::tree::JCTree$JCParens;
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
using $JCTree$JCReturn = ::com::sun::tools::javac::tree::JCTree$JCReturn;
using $JCTree$JCSkip = ::com::sun::tools::javac::tree::JCTree$JCSkip;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$JCSwitch = ::com::sun::tools::javac::tree::JCTree$JCSwitch;
using $JCTree$JCSwitchExpression = ::com::sun::tools::javac::tree::JCTree$JCSwitchExpression;
using $JCTree$JCSynchronized = ::com::sun::tools::javac::tree::JCTree$JCSynchronized;
using $JCTree$JCThrow = ::com::sun::tools::javac::tree::JCTree$JCThrow;
using $JCTree$JCTry = ::com::sun::tools::javac::tree::JCTree$JCTry;
using $JCTree$JCTypeCast = ::com::sun::tools::javac::tree::JCTree$JCTypeCast;
using $JCTree$JCTypeUnion = ::com::sun::tools::javac::tree::JCTree$JCTypeUnion;
using $JCTree$JCUnary = ::com::sun::tools::javac::tree::JCTree$JCUnary;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$JCWhileLoop = ::com::sun::tools::javac::tree::JCTree$JCWhileLoop;
using $JCTree$JCWildcard = ::com::sun::tools::javac::tree::JCTree$JCWildcard;
using $JCTree$JCYield = ::com::sun::tools::javac::tree::JCTree$JCYield;
using $JCTree$LetExpr = ::com::sun::tools::javac::tree::JCTree$LetExpr;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeInfo$PosKind = ::com::sun::tools::javac::tree::TreeInfo$PosKind;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Bits = ::com::sun::tools::javac::util::Bits;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Options = ::com::sun::tools::javac::util::Options;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $Position = ::com::sun::tools::javac::util::Position;
using $Position$LineMap = ::com::sun::tools::javac::util::Position$LineMap;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractMap = ::java::util::AbstractMap;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $ToIntBiFunction = ::java::util::function::ToIntBiFunction;
using $ElementKind = ::javax::lang::model::element::ElementKind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class Gen$$Lambda$putClass : public $ToIntBiFunction {
	$class(Gen$$Lambda$putClass, $NO_CLASS_INIT, $ToIntBiFunction)
public:
	void init$() {
	}
	virtual int32_t applyAsInt(Object$* inst$, Object$* t) override {
		 return $sure($PoolWriter, inst$)->putClass($cast($Type, t));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Gen$$Lambda$putClass>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Gen$$Lambda$putClass::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Gen$$Lambda$putClass::*)()>(&Gen$$Lambda$putClass::init$))},
	{"applyAsInt", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{}
};
$ClassInfo Gen$$Lambda$putClass::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.jvm.Gen$$Lambda$putClass",
	"java.lang.Object",
	"java.util.function.ToIntBiFunction",
	nullptr,
	methodInfos
};
$Class* Gen$$Lambda$putClass::load$($String* name, bool initialize) {
	$loadClass(Gen$$Lambda$putClass, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Gen$$Lambda$putClass::class$ = nullptr;

$FieldInfo _Gen_FieldInfo_[] = {
	{"genKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/jvm/Gen;>;", $PROTECTED | $STATIC | $FINAL, $staticField(Gen, genKey)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $PRIVATE | $FINAL, $field(Gen, log)},
	{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $PRIVATE | $FINAL, $field(Gen, syms)},
	{"chk", "Lcom/sun/tools/javac/comp/Check;", nullptr, $PRIVATE | $FINAL, $field(Gen, chk)},
	{"rs", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $PRIVATE | $FINAL, $field(Gen, rs)},
	{"make", "Lcom/sun/tools/javac/tree/TreeMaker;", nullptr, $PRIVATE | $FINAL, $field(Gen, make)},
	{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, $PRIVATE | $FINAL, $field(Gen, names)},
	{"target", "Lcom/sun/tools/javac/jvm/Target;", nullptr, $PRIVATE | $FINAL, $field(Gen, target)},
	{"accessDollar", "Lcom/sun/tools/javac/util/Name;", nullptr, $PRIVATE | $FINAL, $field(Gen, accessDollar)},
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, $PRIVATE | $FINAL, $field(Gen, types)},
	{"lower", "Lcom/sun/tools/javac/comp/Lower;", nullptr, $PRIVATE | $FINAL, $field(Gen, lower)},
	{"annotate", "Lcom/sun/tools/javac/comp/Annotate;", nullptr, $PRIVATE | $FINAL, $field(Gen, annotate)},
	{"concat", "Lcom/sun/tools/javac/jvm/StringConcat;", nullptr, $PRIVATE | $FINAL, $field(Gen, concat)},
	{"stackMap", "Lcom/sun/tools/javac/jvm/Code$StackMapFormat;", nullptr, $PRIVATE | $FINAL, $field(Gen, stackMap)},
	{"methodType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $FINAL, $field(Gen, methodType)},
	{"poolWriter", "Lcom/sun/tools/javac/jvm/PoolWriter;", nullptr, $FINAL, $field(Gen, poolWriter)},
	{"lineDebugInfo", "Z", nullptr, $PRIVATE | $FINAL, $field(Gen, lineDebugInfo)},
	{"varDebugInfo", "Z", nullptr, $PRIVATE | $FINAL, $field(Gen, varDebugInfo)},
	{"genCrt", "Z", nullptr, $PRIVATE | $FINAL, $field(Gen, genCrt)},
	{"debugCode", "Z", nullptr, $PRIVATE | $FINAL, $field(Gen, debugCode)},
	{"disableVirtualizedPrivateInvoke", "Z", nullptr, $PRIVATE, $field(Gen, disableVirtualizedPrivateInvoke)},
	{"code", "Lcom/sun/tools/javac/jvm/Code;", nullptr, $PRIVATE, $field(Gen, code)},
	{"items", "Lcom/sun/tools/javac/jvm/Items;", nullptr, $PRIVATE, $field(Gen, items)},
	{"attrEnv", "Lcom/sun/tools/javac/comp/Env;", "Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PRIVATE, $field(Gen, attrEnv)},
	{"toplevel", "Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;", nullptr, $PRIVATE, $field(Gen, toplevel)},
	{"nerrs", "I", nullptr, $PRIVATE, $field(Gen, nerrs)},
	{"endPosTable", "Lcom/sun/tools/javac/tree/EndPosTable;", nullptr, 0, $field(Gen, endPosTable)},
	{"inCondSwitchExpression", "Z", nullptr, 0, $field(Gen, inCondSwitchExpression)},
	{"switchExpressionTrueChain", "Lcom/sun/tools/javac/jvm/Code$Chain;", nullptr, 0, $field(Gen, switchExpressionTrueChain)},
	{"switchExpressionFalseChain", "Lcom/sun/tools/javac/jvm/Code$Chain;", nullptr, 0, $field(Gen, switchExpressionFalseChain)},
	{"stackBeforeSwitchExpression", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/jvm/Items$LocalItem;>;", 0, $field(Gen, stackBeforeSwitchExpression)},
	{"switchResult", "Lcom/sun/tools/javac/jvm/Items$LocalItem;", nullptr, 0, $field(Gen, switchResult)},
	{"qualifiedSymbolCache", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;>;", 0, $field(Gen, qualifiedSymbolCache)},
	{"env", "Lcom/sun/tools/javac/comp/Env;", "Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/jvm/Gen$GenContext;>;", 0, $field(Gen, env)},
	{"pt", "Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(Gen, pt)},
	{"result", "Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, 0, $field(Gen, result)},
	{"classReferenceVisitor", "Lcom/sun/tools/javac/jvm/Gen$ClassReferenceVisitor;", nullptr, $PRIVATE, $field(Gen, classReferenceVisitor)},
	{}
};

$MethodInfo _Gen_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(Gen::*)($Context*)>(&Gen::init$))},
	{"binaryQualifier", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Symbol;", nullptr, 0},
	{"callMethod", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Z)V", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Z)V", 0},
	{"catchTypesWithAnnotations", "(Lcom/sun/tools/javac/tree/JCTree$JCCatch;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/tree/JCTree$JCCatch;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;>;", 0},
	{"catchTypesWithAnnotationsFromMulticatch", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeUnion;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeUnion;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;>;", 0},
	{"checkDimension", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $method(static_cast<$Type*(Gen::*)($JCDiagnostic$DiagnosticPosition*,$Type*)>(&Gen::checkDimension))},
	{"checkDimensionInternal", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PRIVATE, $method(static_cast<void(Gen::*)($JCDiagnostic$DiagnosticPosition*,$Type*)>(&Gen::checkDimensionInternal))},
	{"checkStringConstant", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(Gen::*)($JCDiagnostic$DiagnosticPosition*,Object$*)>(&Gen::checkStringConstant))},
	{"completeBinop", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;)Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, 0},
	{"doHandleSwitchExpression", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;)V", nullptr, $PRIVATE, $method(static_cast<void(Gen::*)($JCTree$JCSwitchExpression*)>(&Gen::doHandleSwitchExpression))},
	{"emitMinusOne", "(I)V", nullptr, 0},
	{"endFinalizerGap", "(Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/jvm/Gen$GenContext;>;)V", 0},
	{"endFinalizerGaps", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/jvm/Gen$GenContext;>;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/jvm/Gen$GenContext;>;)V", 0},
	{"genArgs", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)V", $PUBLIC},
	{"genCatch", "(Lcom/sun/tools/javac/tree/JCTree$JCCatch;Lcom/sun/tools/javac/comp/Env;IILcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCCatch;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/jvm/Gen$GenContext;>;IILcom/sun/tools/javac/util/List<Ljava/lang/Integer;>;)V", 0},
	{"genClass", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)Z", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)Z", $PUBLIC},
	{"genCond", "(Lcom/sun/tools/javac/tree/JCTree;I)Lcom/sun/tools/javac/jvm/Items$CondItem;", nullptr, $PUBLIC},
	{"genCond", "(Lcom/sun/tools/javac/tree/JCTree;Z)Lcom/sun/tools/javac/jvm/Items$CondItem;", nullptr, $PUBLIC},
	{"genDef", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/jvm/Gen$GenContext;>;)V", $PUBLIC},
	{"genExpr", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, $PUBLIC},
	{"genFinalizer", "(Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/jvm/Gen$GenContext;>;)V", 0},
	{"genLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCStatement;Lcom/sun/tools/javac/tree/JCTree$JCStatement;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;Z)V", "(Lcom/sun/tools/javac/tree/JCTree$JCStatement;Lcom/sun/tools/javac/tree/JCTree$JCStatement;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpressionStatement;>;Z)V", $PRIVATE, $method(static_cast<void(Gen::*)($JCTree$JCStatement*,$JCTree$JCStatement*,$JCTree$JCExpression*,$List*,bool)>(&Gen::genLoop))},
	{"genMethod", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;Lcom/sun/tools/javac/comp/Env;Z)V", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/jvm/Gen$GenContext;>;Z)V", 0},
	{"genNullCheck", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PRIVATE, $method(static_cast<void(Gen::*)($JCTree*)>(&Gen::genNullCheck))},
	{"genStat", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;I)V", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/jvm/Gen$GenContext;>;I)V", $PUBLIC},
	{"genStat", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/jvm/Gen$GenContext;>;)V", $PUBLIC},
	{"genStats", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/Env;I)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCStatement;>;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/jvm/Gen$GenContext;>;I)V", $PUBLIC},
	{"genStats", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/util/List<+Lcom/sun/tools/javac/tree/JCTree;>;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/jvm/Gen$GenContext;>;)V", $PUBLIC},
	{"genTry", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCatch;>;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/jvm/Gen$GenContext;>;)V", 0},
	{"generateReferencesToPrunedTree", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PRIVATE, $method(static_cast<void(Gen::*)($Symbol$ClassSymbol*)>(&Gen::generateReferencesToPrunedTree))},
	{"getAndRemoveNonFieldTAs", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;", $PRIVATE, $method(static_cast<$List*(Gen::*)($Symbol$VarSymbol*)>(&Gen::getAndRemoveNonFieldTAs))},
	{"getAttrEnv", "()Lcom/sun/tools/javac/comp/Env;", "()Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PUBLIC},
	{"getCode", "()Lcom/sun/tools/javac/jvm/Code;", nullptr, $PUBLIC},
	{"getItems", "()Lcom/sun/tools/javac/jvm/Items;", nullptr, $PUBLIC},
	{"handleSwitch", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;Z)V", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCase;>;Z)V", $PRIVATE, $method(static_cast<void(Gen::*)($JCTree*,$JCTree$JCExpression*,$List*,bool)>(&Gen::handleSwitch))},
	{"hasFinally", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;)Z", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/jvm/Gen$GenContext;>;)Z", 0},
	{"hasTry", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Gen::*)($JCTree$JCSwitchExpression*)>(&Gen::hasTry))},
	{"initCode", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;Lcom/sun/tools/javac/comp/Env;Z)I", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/jvm/Gen$GenContext;>;Z)I", $PRIVATE, $method(static_cast<int32_t(Gen::*)($JCTree$JCMethodDecl*,$Env*,bool)>(&Gen::initCode))},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/jvm/Gen;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Gen*(*)($Context*)>(&Gen::instance))},
	{"isAccessSuper", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Gen::*)($JCTree$JCMethodDecl*)>(&Gen::isAccessSuper))},
	{"isConstantDynamic", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PUBLIC},
	{"isInvokeDynamic", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PUBLIC},
	{"isOddAccessName", "(Lcom/sun/tools/javac/util/Name;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Gen::*)($Name*)>(&Gen::isOddAccessName))},
	{"loadIntConst", "(I)V", nullptr, 0},
	{"makeNewArray", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;I)Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, 0},
	{"makeRef", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;)I", nullptr, 0},
	{"makeTemp", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/jvm/Items$LocalItem;", nullptr, 0},
	{"nonVirtualForPrivateAccess", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Gen::*)($Symbol*)>(&Gen::nonVirtualForPrivateAccess))},
	{"normalizeDefs", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;", 0},
	{"normalizeMethod", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCStatement;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;)V", 0},
	{"one", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&Gen::one))},
	{"qsort2", "([I[III)V", nullptr, $STATIC, $method(static_cast<void(*)($ints*,$ints*,int32_t,int32_t)>(&Gen::qsort2))},
	{"registerCatch", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;IIII)V", nullptr, 0},
	{"reloadStackBeforeSwitchExpr", "()V", nullptr, $PRIVATE, $method(static_cast<void(Gen::*)()>(&Gen::reloadStackBeforeSwitchExpr))},
	{"setTypeAnnotationPositions", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(Gen::*)(int32_t)>(&Gen::setTypeAnnotationPositions))},
	{"unwind", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/jvm/Gen$GenContext;>;)Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/jvm/Gen$GenContext;>;", 0},
	{"unwindBreak", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/jvm/Gen$GenContext;>;", $PRIVATE, $method(static_cast<$Env*(Gen::*)($JCTree*)>(&Gen::unwindBreak))},
	{"visitApply", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;)V", nullptr, $PUBLIC},
	{"visitAssign", "(Lcom/sun/tools/javac/tree/JCTree$JCAssign;)V", nullptr, $PUBLIC},
	{"visitAssignop", "(Lcom/sun/tools/javac/tree/JCTree$JCAssignOp;)V", nullptr, $PUBLIC},
	{"visitBinary", "(Lcom/sun/tools/javac/tree/JCTree$JCBinary;)V", nullptr, $PUBLIC},
	{"visitBlock", "(Lcom/sun/tools/javac/tree/JCTree$JCBlock;)V", nullptr, $PUBLIC},
	{"visitBreak", "(Lcom/sun/tools/javac/tree/JCTree$JCBreak;)V", nullptr, $PUBLIC},
	{"visitConditional", "(Lcom/sun/tools/javac/tree/JCTree$JCConditional;)V", nullptr, $PUBLIC},
	{"visitContinue", "(Lcom/sun/tools/javac/tree/JCTree$JCContinue;)V", nullptr, $PUBLIC},
	{"visitDoLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCDoWhileLoop;)V", nullptr, $PUBLIC},
	{"visitExec", "(Lcom/sun/tools/javac/tree/JCTree$JCExpressionStatement;)V", nullptr, $PUBLIC},
	{"visitForLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCForLoop;)V", nullptr, $PUBLIC},
	{"visitForeachLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCEnhancedForLoop;)V", nullptr, $PUBLIC},
	{"visitIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCIdent;)V", nullptr, $PUBLIC},
	{"visitIf", "(Lcom/sun/tools/javac/tree/JCTree$JCIf;)V", nullptr, $PUBLIC},
	{"visitIndexed", "(Lcom/sun/tools/javac/tree/JCTree$JCArrayAccess;)V", nullptr, $PUBLIC},
	{"visitLabelled", "(Lcom/sun/tools/javac/tree/JCTree$JCLabeledStatement;)V", nullptr, $PUBLIC},
	{"visitLetExpr", "(Lcom/sun/tools/javac/tree/JCTree$LetExpr;)V", nullptr, $PUBLIC},
	{"visitLiteral", "(Lcom/sun/tools/javac/tree/JCTree$JCLiteral;)V", nullptr, $PUBLIC},
	{"visitMethodDef", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", nullptr, $PUBLIC},
	{"visitNewArray", "(Lcom/sun/tools/javac/tree/JCTree$JCNewArray;)V", nullptr, $PUBLIC},
	{"visitNewClass", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)V", nullptr, $PUBLIC},
	{"visitParens", "(Lcom/sun/tools/javac/tree/JCTree$JCParens;)V", nullptr, $PUBLIC},
	{"visitReturn", "(Lcom/sun/tools/javac/tree/JCTree$JCReturn;)V", nullptr, $PUBLIC},
	{"visitSelect", "(Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;)V", nullptr, $PUBLIC},
	{"visitSkip", "(Lcom/sun/tools/javac/tree/JCTree$JCSkip;)V", nullptr, $PUBLIC},
	{"visitSwitch", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitch;)V", nullptr, $PUBLIC},
	{"visitSwitchExpression", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;)V", nullptr, $PUBLIC},
	{"visitSynchronized", "(Lcom/sun/tools/javac/tree/JCTree$JCSynchronized;)V", nullptr, $PUBLIC},
	{"visitThrow", "(Lcom/sun/tools/javac/tree/JCTree$JCThrow;)V", nullptr, $PUBLIC},
	{"visitTry", "(Lcom/sun/tools/javac/tree/JCTree$JCTry;)V", nullptr, $PUBLIC},
	{"visitTypeCast", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeCast;)V", nullptr, $PUBLIC},
	{"visitTypeTest", "(Lcom/sun/tools/javac/tree/JCTree$JCInstanceOf;)V", nullptr, $PUBLIC},
	{"visitUnary", "(Lcom/sun/tools/javac/tree/JCTree$JCUnary;)V", nullptr, $PUBLIC},
	{"visitVarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PUBLIC},
	{"visitWhileLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCWhileLoop;)V", nullptr, $PUBLIC},
	{"visitWildcard", "(Lcom/sun/tools/javac/tree/JCTree$JCWildcard;)V", nullptr, $PUBLIC},
	{"visitYield", "(Lcom/sun/tools/javac/tree/JCTree$JCYield;)V", nullptr, $PUBLIC},
	{"zero", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&Gen::zero))},
	{}
};

$InnerClassInfo _Gen_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$Visitor", "com.sun.tools.javac.tree.JCTree", "Visitor", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.jvm.Gen$4", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.jvm.Gen$GenContext", "com.sun.tools.javac.jvm.Gen", "GenContext", $STATIC},
	{"com.sun.tools.javac.jvm.Gen$GenFinalizer", "com.sun.tools.javac.jvm.Gen", "GenFinalizer", $ABSTRACT},
	{"com.sun.tools.javac.jvm.Gen$CodeSizeOverflow", "com.sun.tools.javac.jvm.Gen", "CodeSizeOverflow", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.jvm.Gen$ClassReferenceVisitor", "com.sun.tools.javac.jvm.Gen", "ClassReferenceVisitor", 0},
	{"com.sun.tools.javac.jvm.Gen$3", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.Gen$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.Gen$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Gen_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.jvm.Gen",
	"com.sun.tools.javac.tree.JCTree$Visitor",
	nullptr,
	_Gen_FieldInfo_,
	_Gen_MethodInfo_,
	nullptr,
	nullptr,
	_Gen_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.Gen$4,com.sun.tools.javac.jvm.Gen$GenContext,com.sun.tools.javac.jvm.Gen$GenFinalizer,com.sun.tools.javac.jvm.Gen$CodeSizeOverflow,com.sun.tools.javac.jvm.Gen$ClassReferenceVisitor,com.sun.tools.javac.jvm.Gen$3,com.sun.tools.javac.jvm.Gen$2,com.sun.tools.javac.jvm.Gen$1"
};

$Object* allocate$Gen($Class* clazz) {
	return $of($alloc(Gen));
}

$Context$Key* Gen::genKey = nullptr;

Gen* Gen::instance($Context* context) {
	$init(Gen);
	$var(Gen, instance, $cast(Gen, $nc(context)->get(Gen::genKey)));
	if (instance == nullptr) {
		$assign(instance, $new(Gen, context));
	}
	return instance;
}

void Gen::init$($Context* context) {
	$useLocalCurrentObjectStackCache();
	$JCTree$Visitor::init$();
	this->nerrs = 0;
	$set(this, classReferenceVisitor, $new($Gen$ClassReferenceVisitor, this));
	$nc(context)->put(Gen::genKey, $of(this));
	$set(this, names, $Names::instance(context));
	$set(this, log, $Log::instance(context));
	$set(this, syms, $Symtab::instance(context));
	$set(this, chk, $Check::instance(context));
	$set(this, rs, $Resolve::instance(context));
	$set(this, make, $TreeMaker::instance(context));
	$set(this, target, $Target::instance(context));
	$set(this, types, $Types::instance(context));
	$set(this, concat, $StringConcat::instance(context));
	$set(this, methodType, $new($Type$MethodType, nullptr, nullptr, nullptr, $nc(this->syms)->methodClass));
	$set(this, accessDollar, $nc(this->names)->fromString($$str({"access"_s, $$str(this->target->syntheticNameChar())})));
	$set(this, lower, $Lower::instance(context));
	$var($Options, options, $Options::instance(context));
	$init($Option);
	bool var$0 = $nc(options)->isUnset($Option::G_CUSTOM);
	this->lineDebugInfo = var$0 || $nc(options)->isSet($Option::G_CUSTOM, "lines"_s);
	this->varDebugInfo = options->isUnset($Option::G_CUSTOM) ? options->isSet($Option::G) : options->isSet($Option::G_CUSTOM, "vars"_s);
	this->genCrt = options->isSet($Option::XJCOV);
	this->debugCode = options->isSet("debug.code"_s);
	this->disableVirtualizedPrivateInvoke = options->isSet("disableVirtualizedPrivateInvoke"_s);
	$set(this, poolWriter, $new($PoolWriter, this->types, this->names));
	$init($Code$StackMapFormat);
	$set(this, stackMap, $Code$StackMapFormat::JSR202);
	$set(this, annotate, $Annotate::instance(context));
	$set(this, qualifiedSymbolCache, $new($HashMap));
}

void Gen::loadIntConst(int32_t n) {
	$useLocalCurrentObjectStackCache();
	$nc($($nc(this->items)->makeImmediateItem($nc(this->syms)->intType, $($Integer::valueOf(n)))))->load();
}

int32_t Gen::zero(int32_t tc) {
	$init(Gen);
	switch (tc) {
	case 0:
		{}
	case 5:
		{}
	case 7:
		{}
	case 6:
		{
			return 3;
		}
	case 1:
		{
			return 9;
		}
	case 2:
		{
			return 11;
		}
	case 3:
		{
			return 14;
		}
	default:
		{
			$throwNew($AssertionError, $of("zero"_s));
		}
	}
}

int32_t Gen::one(int32_t tc) {
	$init(Gen);
	return zero(tc) + 1;
}

void Gen::emitMinusOne(int32_t tc) {
	$useLocalCurrentObjectStackCache();
	if (tc == 1) {
		$nc($($nc(this->items)->makeImmediateItem($nc(this->syms)->longType, $($Long::valueOf((int64_t)-1)))))->load();
	} else {
		$nc(this->code)->emitop0(2);
	}
}

$Symbol* Gen::binaryQualifier($Symbol* sym, $Type* site) {
	$init($TypeTag);
	if ($nc(site)->hasTag($TypeTag::ARRAY)) {
		if ($equals(sym, $nc(this->syms)->lengthVar) || !$equals($nc(sym)->owner, $nc(this->syms)->arrayClass)) {
			return sym;
		}
		$var($Symbol, qualifier, nullptr);
		if (($assign(qualifier, $cast($Symbol, $nc(this->qualifiedSymbolCache)->get(site)))) == nullptr) {
			$assign(qualifier, $new($Symbol$ClassSymbol, $Flags::PUBLIC, $nc(site->tsym)->name, site, $nc(this->syms)->noSymbol));
			$nc(this->qualifiedSymbolCache)->put(site, qualifier);
		}
		return $nc(sym)->clone(qualifier);
	}
	if ($equals($nc(sym)->owner, $nc(site)->tsym) || ((int64_t)($nc(sym)->flags() & (uint64_t)(int64_t)(8 | 4096))) == (8 | 4096)) {
		return sym;
	}
	if ($equals($nc(sym)->owner, $nc($nc(this->syms)->objectType)->tsym)) {
		return sym;
	}
	return $nc(sym)->clone($nc(site)->tsym);
}

int32_t Gen::makeRef($JCDiagnostic$DiagnosticPosition* pos, $Type* type) {
	return $nc(this->poolWriter)->putClass($(checkDimension(pos, type)));
}

$Type* Gen::checkDimension($JCDiagnostic$DiagnosticPosition* pos, $Type* t) {
	checkDimensionInternal(pos, t);
	return t;
}

void Gen::checkDimensionInternal($JCDiagnostic$DiagnosticPosition* pos, $Type* t) {
	$useLocalCurrentObjectStackCache();
	$init($Gen$4);
	switch ($nc($Gen$4::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc(($($nc(t)->getTag())))->ordinal())) {
	case 1:
		{
			checkDimension(pos, $(t->getReturnType()));
			{
				$var($List, args, t->getParameterTypes());
				for (; $nc(args)->nonEmpty(); $assign(args, $nc(args)->tail)) {
					checkDimension(pos, $cast($Type, args->head));
				}
			}
			break;
		}
	case 2:
		{
			if ($nc(this->types)->dimensions(t) > $ClassFile::MAX_DIMENSIONS) {
				$init($CompilerProperties$Errors);
				$nc(this->log)->error(pos, $CompilerProperties$Errors::LimitDimensions);
				++this->nerrs;
			}
			break;
		}
	default:
		{
			break;
		}
	}
}

$Items$LocalItem* Gen::makeTemp($Type* type) {
	$var($Symbol$VarSymbol, v, $new($Symbol$VarSymbol, $Flags::SYNTHETIC, $nc(this->names)->empty, type, $nc($nc(this->env)->enclMethod)->sym));
	$nc(this->code)->newLocal(v);
	return $nc(this->items)->makeLocalItem(v);
}

void Gen::callMethod($JCDiagnostic$DiagnosticPosition* pos, $Type* site, $Name* name, $List* argtypes, bool isStatic) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, msym, $nc(this->rs)->resolveInternalMethod(pos, this->attrEnv, site, name, argtypes, nullptr));
	if (isStatic) {
		$nc($($nc(this->items)->makeStaticItem(msym)))->invoke();
	} else {
		$nc($($nc(this->items)->makeMemberItem(msym, name == $nc(this->names)->init)))->invoke();
	}
}

bool Gen::isAccessSuper($JCTree$JCMethodDecl* enclMethod) {
	return ((int64_t)($nc($nc(enclMethod)->mods)->flags & (uint64_t)(int64_t)4096)) != 0 && isOddAccessName(enclMethod->name);
}

bool Gen::isOddAccessName($Name* name) {
	bool var$0 = $nc(name)->startsWith(this->accessDollar);
	return var$0 && ((int32_t)(name->getByteAt(name->getByteLength() - 1) & (uint32_t)1)) == 1;
}

void Gen::genFinalizer($Env* env) {
	if ($nc(this->code)->isAlive() && $nc(($cast($Gen$GenContext, $nc(env)->info)))->finalize$ != nullptr) {
		$nc($nc(($cast($Gen$GenContext, env->info)))->finalize$)->gen();
	}
}

$Env* Gen::unwind($JCTree* target, $Env* env) {
	$var($Env, env1, env);
	while (true) {
		genFinalizer(env1);
		if ($nc(env1)->tree == target) {
			break;
		}
		$assign(env1, $nc(env1)->next);
	}
	return env1;
}

void Gen::endFinalizerGap($Env* env) {
	if ($nc(($cast($Gen$GenContext, $nc(env)->info)))->gaps != nullptr && $nc($nc(($cast($Gen$GenContext, env->info)))->gaps)->length() % 2 == 1) {
		$nc($nc(($cast($Gen$GenContext, env->info)))->gaps)->append($($Integer::valueOf($nc(this->code)->curCP())));
	}
}

void Gen::endFinalizerGaps($Env* from$renamed, $Env* to) {
	$useLocalCurrentObjectStackCache();
	$var($Env, from, from$renamed);
	$var($Env, last, nullptr);
	while (last != to) {
		endFinalizerGap(from);
		$assign(last, from);
		$assign(from, $nc(from)->next);
	}
}

bool Gen::hasFinally($JCTree* target, $Env* env$renamed) {
	$var($Env, env, env$renamed);
	while ($nc(env)->tree != target) {
		$init($JCTree$Tag);
		bool var$0 = $nc(env->tree)->hasTag($JCTree$Tag::TRY);
		if (var$0 && $nc($nc(($cast($Gen$GenContext, env->info)))->finalize$)->hasFinalizer()) {
			return true;
		}
		$assign(env, env->next);
	}
	return false;
}

$List* Gen::normalizeDefs($List* defs, $Symbol$ClassSymbol* c) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, initCode, $new($ListBuffer));
	$var($ListBuffer, initTAs, $new($ListBuffer));
	$var($ListBuffer, clinitCode, $new($ListBuffer));
	$var($ListBuffer, clinitTAs, $new($ListBuffer));
	$var($ListBuffer, methodDefs, $new($ListBuffer));
	{
		$var($List, l, defs);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$var($JCTree, def, $cast($JCTree, l->head));
			$init($Gen$4);
			{
				$var($JCTree$JCBlock, block, nullptr)
				$var($JCTree$JCVariableDecl, vdef, nullptr)
				$var($Symbol$VarSymbol, sym, nullptr)
				switch ($nc($Gen$4::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(def)->getTag())))->ordinal())) {
				case 1:
					{
						$assign(block, $cast($JCTree$JCBlock, def));
						if (((int64_t)($nc(block)->flags & (uint64_t)(int64_t)8)) != 0) {
							clinitCode->append(block);
						} else if (((int64_t)(block->flags & (uint64_t)(int64_t)4096)) == 0) {
							initCode->append(block);
						}
						break;
					}
				case 2:
					{
						methodDefs->append(def);
						break;
					}
				case 3:
					{
						$assign(vdef, $cast($JCTree$JCVariableDecl, def));
						$assign(sym, $nc(vdef)->sym);
						checkDimension($(vdef->pos()), $nc(sym)->type);
						if (vdef->init != nullptr) {
							if (((int64_t)($nc(sym)->flags() & (uint64_t)(int64_t)8)) == 0) {
								$var($JCTree$JCStatement, init, $nc($($nc(this->make)->at($(vdef->pos()))))->Assignment(sym, vdef->init));
								initCode->append(init);
								$nc(this->endPosTable)->replaceTree(vdef, init);
								initTAs->addAll($(static_cast<$Collection*>(static_cast<$AbstractCollection*>(getAndRemoveNonFieldTAs(sym)))));
							} else if (sym->getConstValue() == nullptr) {
								$var($JCTree$JCStatement, init, $nc($($nc(this->make)->at(vdef->pos$)))->Assignment(sym, vdef->init));
								clinitCode->append(init);
								$nc(this->endPosTable)->replaceTree(vdef, init);
								clinitTAs->addAll($(static_cast<$Collection*>(static_cast<$AbstractCollection*>(getAndRemoveNonFieldTAs(sym)))));
							} else {
								$var($JCDiagnostic$DiagnosticPosition, var$0, $nc(vdef->init)->pos());
								checkStringConstant(var$0, $(sym->getConstValue()));
								$nc(vdef->init)->accept(this->classReferenceVisitor);
							}
						}
						break;
					}
				default:
					{
						$Assert::error();
					}
				}
			}
		}
	}
	if (initCode->length() != 0) {
		$var($List, inits, initCode->toList());
		initTAs->addAll($(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(c)->getInitTypeAttributes()))));
		$var($List, initTAlist, initTAs->toList());
		{
			$var($Iterator, i$, methodDefs->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JCTree, t, $cast($JCTree, i$->next()));
				{
					normalizeMethod($cast($JCTree$JCMethodDecl, t), inits, initTAlist);
				}
			}
		}
	}
	if (clinitCode->length() != 0) {
		int64_t var$1 = 8 | ((int64_t)($nc(c)->flags() & (uint64_t)(int64_t)2048));
		$var($Name, var$2, $nc(this->names)->clinit);
		$var($List, var$3, $List::nil());
		$var($Type, var$4, static_cast<$Type*>($nc(this->syms)->voidType));
		$var($Symbol$MethodSymbol, clinit, $new($Symbol$MethodSymbol, var$1, var$2, $$new($Type$MethodType, var$3, var$4, $($List::nil()), $nc(this->syms)->methodClass), c));
		$nc($($nc(c)->members()))->enter(clinit);
		$var($List, clinitStats, clinitCode->toList());
		$var($JCTree$JCBlock, block, $nc($($nc(this->make)->at($($nc(($cast($JCTree$JCStatement, $nc(clinitStats)->head)))->pos()))))->Block(0, clinitStats));
		$nc(block)->endpos = $TreeInfo::endPos($cast($JCTree, $($nc(clinitStats)->last())));
		methodDefs->append($($nc(this->make)->MethodDef(clinit, block)));
		if (!clinitTAs->isEmpty()) {
			clinit->appendUniqueTypeAttributes($(clinitTAs->toList()));
		}
		if (!$nc($(c->getClassInitTypeAttributes()))->isEmpty()) {
			clinit->appendUniqueTypeAttributes($(c->getClassInitTypeAttributes()));
		}
	}
	return methodDefs->toList();
}

$List* Gen::getAndRemoveNonFieldTAs($Symbol$VarSymbol* sym) {
	$useLocalCurrentObjectStackCache();
	$var($List, tas, $nc(sym)->getRawTypeAttributes());
	$var($ListBuffer, fieldTAs, $new($ListBuffer));
	$var($ListBuffer, nonfieldTAs, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(tas)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Attribute$TypeCompound, ta, $cast($Attribute$TypeCompound, i$->next()));
			{
				$init($TargetType);
				$Assert::check($nc($($nc(ta)->getPosition()))->type != $TargetType::UNKNOWN);
				if ($nc($($nc(ta)->getPosition()))->type == $TargetType::FIELD) {
					fieldTAs->add(ta);
				} else {
					nonfieldTAs->add(ta);
				}
			}
		}
	}
	sym->setTypeAttributes($(fieldTAs->toList()));
	return nonfieldTAs->toList();
}

void Gen::checkStringConstant($JCDiagnostic$DiagnosticPosition* pos, Object$* constValue) {
	$var($String, str, nullptr);
	bool var$1 = this->nerrs != 0 || constValue == nullptr;
	if (!var$1) {
		bool var$2 = $instanceOf($String, constValue);
		if (var$2) {
			$assign(str, $cast($String, constValue));
			var$2 = true;
		}
		var$1 = !(var$2);
	}
	bool var$0 = var$1;
	if (var$0 || $nc(str)->length() < $PoolWriter::MAX_STRING_LENGTH) {
		return;
	}
	$init($CompilerProperties$Errors);
	$nc(this->log)->error(pos, $CompilerProperties$Errors::LimitString);
	++this->nerrs;
}

void Gen::normalizeMethod($JCTree$JCMethodDecl* md, $List* initCode, $List* initTAs) {
	$useLocalCurrentObjectStackCache();
	if ($nc(md)->name == $nc(this->names)->init && $TreeInfo::isInitialConstructor(md)) {
		$var($List, stats, $nc(md->body)->stats);
		$var($ListBuffer, newstats, $new($ListBuffer));
		if ($nc(stats)->nonEmpty()) {
			while ($TreeInfo::isSyntheticInit($cast($JCTree, $nc(stats)->head))) {
				newstats->append($cast($JCTree$JCStatement, $nc(stats)->head));
				$assign(stats, $nc(stats)->tail);
			}
			newstats->append($cast($JCTree$JCStatement, $nc(stats)->head));
			$assign(stats, $nc(stats)->tail);
			while (true) {
				bool var$0 = stats->nonEmpty();
				if (!(var$0 && $TreeInfo::isSyntheticInit($cast($JCTree, $nc(stats)->head)))) {
					break;
				}
				{
					newstats->append($cast($JCTree$JCStatement, $nc(stats)->head));
					$assign(stats, $nc(stats)->tail);
				}
			}
			newstats->appendList(initCode);
			while (stats->nonEmpty()) {
				newstats->append($cast($JCTree$JCStatement, stats->head));
				$assign(stats, stats->tail);
			}
		}
		$set($nc(md->body), stats, newstats->toList());
		if ($nc(md->body)->endpos == $Position::NOPOS) {
			$nc(md->body)->endpos = $TreeInfo::endPos($cast($JCTree, $($nc($nc(md->body)->stats)->last())));
		}
		$nc(md->sym)->appendUniqueTypeAttributes(initTAs);
	}
}

void Gen::genDef($JCTree* tree, $Env* env) {
	$useLocalCurrentObjectStackCache();
	$var($Env, prevEnv, this->env);
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$set(this, env, env);
				$nc(tree)->accept(this);
			} catch ($Symbol$CompletionFailure& ex) {
				$nc(this->chk)->completionError($($nc(tree)->pos()), ex);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, env, prevEnv);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Gen::genStat($JCTree* tree, $Env* env, int32_t crtFlags) {
	if (!this->genCrt) {
		genStat(tree, env);
		return;
	}
	int32_t startpc = $nc(this->code)->curCP();
	genStat(tree, env);
	$init($JCTree$Tag);
	if ($nc(tree)->hasTag($JCTree$Tag::BLOCK)) {
		crtFlags |= 2;
	}
	$nc($nc(this->code)->crt)->put(tree, crtFlags, startpc, $nc(this->code)->curCP());
}

void Gen::genStat($JCTree* tree, $Env* env) {
	if ($nc(this->code)->isAlive()) {
		$nc(this->code)->statBegin($nc(tree)->pos$);
		genDef(tree, env);
	} else {
		$init($JCTree$Tag);
		if ($nc(($cast($Gen$GenContext, $nc(env)->info)))->isSwitch && $nc(tree)->hasTag($JCTree$Tag::VARDEF)) {
			$nc(this->code)->newLocal($nc(($cast($JCTree$JCVariableDecl, tree)))->sym);
		}
	}
}

void Gen::genStats($List* trees, $Env* env, int32_t crtFlags) {
	if (!this->genCrt) {
		genStats(trees, env);
		return;
	}
	if ($nc(trees)->length() == 1) {
		genStat($cast($JCTree, trees->head), env, crtFlags | 1);
	} else {
		int32_t startpc = $nc(this->code)->curCP();
		genStats(trees, env);
		$nc($nc(this->code)->crt)->put(trees, crtFlags, startpc, $nc(this->code)->curCP());
	}
}

void Gen::genStats($List* trees, $Env* env) {
	{
		$var($List, l, trees);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			genStat($cast($JCTree, l->head), env, 1);
		}
	}
}

$Items$CondItem* Gen::genCond($JCTree* tree, int32_t crtFlags) {
	if (!this->genCrt) {
		return genCond(tree, false);
	}
	int32_t startpc = $nc(this->code)->curCP();
	$var($Items$CondItem, item, genCond(tree, ((int32_t)(crtFlags & (uint32_t)8)) != 0));
	$nc($nc(this->code)->crt)->put(tree, crtFlags, startpc, $nc(this->code)->curCP());
	return item;
}

$Items$CondItem* Gen::genCond($JCTree* _tree, bool markBranches) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree, inner_tree, $TreeInfo::skipParens(_tree));
	$init($JCTree$Tag);
	if ($nc(inner_tree)->hasTag($JCTree$Tag::CONDEXPR)) {
		$var($JCTree$JCConditional, tree, $cast($JCTree$JCConditional, inner_tree));
		$var($Items$CondItem, cond, genCond(static_cast<$JCTree*>(tree->cond), 8));
		if ($nc(cond)->isTrue()) {
			$nc(this->code)->resolve(cond->trueJumps);
			$var($Items$CondItem, result, genCond(static_cast<$JCTree*>(tree->truepart), 16));
			if (markBranches) {
				$set($nc(result), tree, tree->truepart);
			}
			return result;
		}
		if ($nc(cond)->isFalse()) {
			$nc(this->code)->resolve(cond->falseJumps);
			$var($Items$CondItem, result, genCond(static_cast<$JCTree*>(tree->falsepart), 16));
			if (markBranches) {
				$set($nc(result), tree, tree->falsepart);
			}
			return result;
		}
		$var($Code$Chain, secondJumps, $nc(cond)->jumpFalse());
		$nc(this->code)->resolve(cond->trueJumps);
		$var($Items$CondItem, first, genCond(static_cast<$JCTree*>(tree->truepart), 16));
		if (markBranches) {
			$set($nc(first), tree, tree->truepart);
		}
		$var($Code$Chain, falseJumps, $nc(first)->jumpFalse());
		$nc(this->code)->resolve(first->trueJumps);
		$var($Code$Chain, trueJumps, $nc(this->code)->branch(167));
		$nc(this->code)->resolve(secondJumps);
		$var($Items$CondItem, second, genCond(static_cast<$JCTree*>(tree->falsepart), 16));
		int32_t var$0 = $nc(second)->opcode;
		$var($Code$Chain, var$1, $Code::mergeChains(trueJumps, second->trueJumps));
		$var($Items$CondItem, result, $nc(this->items)->makeCondItem(var$0, var$1, $($Code::mergeChains(falseJumps, second->falseJumps))));
		if (markBranches) {
			$set($nc(result), tree, tree->falsepart);
		}
		return result;
	} else {
		if (inner_tree->hasTag($JCTree$Tag::SWITCH_EXPRESSION)) {
			$nc(this->code)->resolvePending();
			bool prevInCondSwitchExpression = this->inCondSwitchExpression;
			$var($Code$Chain, prevSwitchExpressionTrueChain, this->switchExpressionTrueChain);
			$var($Code$Chain, prevSwitchExpressionFalseChain, this->switchExpressionFalseChain);
			{
				$var($Throwable, var$2, nullptr);
				$var($Items$CondItem, var$4, nullptr);
				bool return$3 = false;
				try {
					this->inCondSwitchExpression = true;
					$set(this, switchExpressionTrueChain, nullptr);
					$set(this, switchExpressionFalseChain, nullptr);
					try {
						doHandleSwitchExpression($cast($JCTree$JCSwitchExpression, inner_tree));
					} catch ($Symbol$CompletionFailure& ex) {
						$nc(this->chk)->completionError($($nc(_tree)->pos()), ex);
						$nc($nc(this->code)->state)->stacksize = 1;
					}
					$var($Items$CondItem, result, $nc(this->items)->makeCondItem(167, this->switchExpressionTrueChain, this->switchExpressionFalseChain));
					if (markBranches) {
						$set($nc(result), tree, _tree);
					}
					$assign(var$4, result);
					return$3 = true;
					goto $finally;
				} catch ($Throwable& var$5) {
					$assign(var$2, var$5);
				} $finally: {
					this->inCondSwitchExpression = prevInCondSwitchExpression;
					$set(this, switchExpressionTrueChain, prevSwitchExpressionTrueChain);
					$set(this, switchExpressionFalseChain, prevSwitchExpressionFalseChain);
				}
				if (var$2 != nullptr) {
					$throw(var$2);
				}
				if (return$3) {
					return var$4;
				}
			}
		} else {
			if (inner_tree->hasTag($JCTree$Tag::LETEXPR) && $nc(($cast($JCTree$LetExpr, inner_tree)))->needsCond) {
				$nc(this->code)->resolvePending();
				$var($JCTree$LetExpr, tree, $cast($JCTree$LetExpr, inner_tree));
				int32_t limit = $nc(this->code)->nextreg;
				int32_t prevLetExprStart = $nc(this->code)->setLetExprStackPos($nc($nc(this->code)->state)->stacksize);
				{
					$var($Throwable, var$6, nullptr);
					try {
						genStats(tree->defs, this->env);
					} catch ($Throwable& var$7) {
						$assign(var$6, var$7);
					} /*finally*/ {
						$nc(this->code)->setLetExprStackPos(prevLetExprStart);
					}
					if (var$6 != nullptr) {
						$throw(var$6);
					}
				}
				$var($Items$CondItem, result, genCond(static_cast<$JCTree*>(tree->expr), markBranches));
				$nc(this->code)->endScopes(limit);
				return result;
			} else {
				$var($Items$CondItem, result, $nc($(genExpr(_tree, $nc(this->syms)->booleanType)))->mkCond());
				if (markBranches) {
					$set($nc(result), tree, _tree);
				}
				return result;
			}
		}
	}
}

$Code* Gen::getCode() {
	return this->code;
}

$Items* Gen::getItems() {
	return this->items;
}

$Env* Gen::getAttrEnv() {
	return this->attrEnv;
}

$Items$Item* Gen::genExpr($JCTree* tree, $Type* pt) {
	$useLocalCurrentObjectStackCache();
	$var($Type, prevPt, this->pt);
	{
		$var($Throwable, var$0, nullptr);
		$var($Items$Item, var$2, nullptr);
		bool return$1 = false;
		try {
			try {
				if ($nc($nc(tree)->type)->constValue() != nullptr) {
					tree->accept(this->classReferenceVisitor);
					$var($JCDiagnostic$DiagnosticPosition, var$3, tree->pos());
					checkStringConstant(var$3, $($nc(tree->type)->constValue()));
					$var($Symbol, sym, $TreeInfo::symbol(tree));
					if (sym != nullptr && isConstantDynamic(sym)) {
						$set(this, result, $nc(this->items)->makeDynamicItem(sym));
					} else {
						$set(this, result, $nc(this->items)->makeImmediateItem(tree->type, $($nc(tree->type)->constValue())));
					}
				} else {
					$set(this, pt, pt);
					tree->accept(this);
				}
				$assign(var$2, $nc(this->result)->coerce(pt));
				return$1 = true;
				goto $finally;
			} catch ($Symbol$CompletionFailure& ex) {
				$nc(this->chk)->completionError($($nc(tree)->pos()), ex);
				$nc($nc(this->code)->state)->stacksize = 1;
				$assign(var$2, $nc(this->items)->makeStackItem(pt));
				return$1 = true;
				goto $finally;
			}
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} $finally: {
			$set(this, pt, prevPt);
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

bool Gen::isConstantDynamic($Symbol* sym) {
	$var($Symbol$DynamicVarSymbol, dynamicVarSymbol, nullptr);
	$init($Kinds$Kind);
	bool var$1 = $nc(sym)->kind == $Kinds$Kind::VAR;
	if (var$1) {
		bool var$2 = $instanceOf($Symbol$DynamicVarSymbol, sym);
		if (var$2) {
			$assign(dynamicVarSymbol, $cast($Symbol$DynamicVarSymbol, sym));
			var$2 = true;
		}
		var$1 = var$2;
	}
	bool var$0 = var$1;
	return var$0 && $nc(dynamicVarSymbol)->isDynamic();
}

void Gen::genArgs($List* trees, $List* pts$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($List, pts, pts$renamed);
	{
		$var($List, l, trees);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$nc($(genExpr($cast($JCTree, l->head), $cast($Type, $nc(pts)->head))))->load();
			$assign(pts, $nc(pts)->tail);
		}
	}
	$Assert::check($nc(pts)->isEmpty());
}

void Gen::visitMethodDef($JCTree$JCMethodDecl* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Env, localEnv, $nc(this->env)->dup(tree));
	$set($nc(localEnv), enclMethod, tree);
	$set(this, pt, $nc($($nc($nc(tree)->sym)->erasure(this->types)))->getReturnType());
	$var($JCDiagnostic$DiagnosticPosition, var$0, tree->pos());
	checkDimension(var$0, $($nc(tree->sym)->erasure(this->types)));
	genMethod(tree, localEnv, false);
}

void Gen::genMethod($JCTree$JCMethodDecl* tree, $Env* env, bool fatcode) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$MethodSymbol, meth, $nc(tree)->sym);
	int32_t extras = 0;
	if ($nc(meth)->isConstructor()) {
		++extras;
		bool var$0 = $nc($(meth->enclClass()))->isInner();
		if (var$0 && !$nc($(meth->enclClass()))->isStatic()) {
			++extras;
		}
	} else if (((int64_t)($nc(tree->mods)->flags & (uint64_t)(int64_t)8)) == 0) {
		++extras;
	}
	if ($Code::width($($nc($($nc(this->types)->erasure($nc($nc($nc(env)->enclMethod)->sym)->type)))->getParameterTypes())) + extras > $ClassFile::MAX_PARAMETERS) {
		$init($CompilerProperties$Errors);
		$nc(this->log)->error($(tree->pos()), $CompilerProperties$Errors::LimitParameters);
		++this->nerrs;
	} else if (tree->body != nullptr) {
		int32_t startpcCrt = initCode(tree, env, fatcode);
		try {
			genStat(tree->body, env);
		} catch ($Gen$CodeSizeOverflow& e) {
			startpcCrt = initCode(tree, env, fatcode);
			genStat(tree->body, env);
		}
		if ($nc($nc(this->code)->state)->stacksize != 0) {
			$var($JCDiagnostic$DiagnosticPosition, var$1, $nc(tree->body)->pos());
			$nc(this->log)->error(var$1, $($CompilerProperties$Errors::StackSimError(tree->sym)));
			$throwNew($AssertionError);
		}
		if ($nc(this->code)->isAlive()) {
			$nc(this->code)->statBegin($TreeInfo::endPos(tree->body));
			$init($TypeTag);
			if ($nc(env)->enclMethod == nullptr || $nc($($nc($nc($nc($nc(env)->enclMethod)->sym)->type)->getReturnType()))->hasTag($TypeTag::VOID)) {
				$nc(this->code)->emitop0(177);
			} else {
				int32_t startpc = $nc(this->code)->entryPoint();
				$var($Items$CondItem, c, $nc(this->items)->makeCondItem(167));
				$nc(this->code)->resolve($($nc(c)->jumpTrue()), startpc);
			}
		}
		if (this->genCrt) {
			$nc($nc(this->code)->crt)->put(tree->body, 2, startpcCrt, $nc(this->code)->curCP());
		}
		$nc(this->code)->endScopes(0);
		if ($nc(this->code)->checkLimits($(tree->pos()), this->log)) {
			++this->nerrs;
			return;
		}
		if (!fatcode && $nc(this->code)->fatcode) {
			genMethod(tree, env, true);
		}
		$init($Code$StackMapFormat);
		if (this->stackMap == $Code$StackMapFormat::JSR202) {
			$set($nc(this->code), lastFrame, nullptr);
			$set($nc(this->code), frameBeforeLast, nullptr);
		}
		$nc(this->code)->compressCatchTable();
		$nc(this->code)->fillExceptionParameterPositions();
	}
}

int32_t Gen::initCode($JCTree$JCMethodDecl* tree, $Env* env, bool fatcode) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$MethodSymbol, meth, $nc(tree)->sym);
	$set($nc(meth), code, ($set(this, code, $new($Code, meth, fatcode, this->lineDebugInfo ? $nc(this->toplevel)->lineMap : ($Position$LineMap*)nullptr, this->varDebugInfo, this->stackMap, this->debugCode, this->genCrt ? $$new($CRTable, tree, $nc($nc(env)->toplevel)->endPositions) : ($CRTable*)nullptr, this->syms, this->types, this->poolWriter))));
	$set(this, items, $new($Items, this->poolWriter, this->code, this->syms, this->types));
	if ($nc(this->code)->debugCode) {
		$nc($System::err)->println($$str({meth, " for body "_s, tree}));
	}
	if (((int64_t)($nc(tree->mods)->flags & (uint64_t)(int64_t)8)) == 0) {
		$var($Type, selfType, $nc(meth->owner)->type);
		if (meth->isConstructor() && selfType != $nc(this->syms)->objectType) {
			$assign(selfType, $UninitializedType::uninitializedThis(selfType));
		}
		$nc(this->code)->setDefined($nc(this->code)->newLocal($$new($Symbol$VarSymbol, 16, $nc(this->names)->_this, selfType, meth->owner)));
	}
	{
		$var($List, l, tree->params);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			checkDimension($($nc(($cast($JCTree$JCVariableDecl, l->head)))->pos()), $nc($nc(($cast($JCTree$JCVariableDecl, l->head)))->sym)->type);
			$nc(this->code)->setDefined($nc(this->code)->newLocal($nc(($cast($JCTree$JCVariableDecl, l->head)))->sym));
		}
	}
	int32_t startpcCrt = this->genCrt ? $nc(this->code)->curCP() : 0;
	$nc(this->code)->entryPoint();
	$nc(this->code)->pendingStackMap = false;
	return startpcCrt;
}

void Gen::visitVarDef($JCTree$JCVariableDecl* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$VarSymbol, v, $nc(tree)->sym);
	if (tree->init != nullptr) {
		$var($JCDiagnostic$DiagnosticPosition, var$0, $nc(tree->init)->pos());
		checkStringConstant(var$0, $($nc(v)->getConstValue()));
		if ($nc(v)->getConstValue() == nullptr || this->varDebugInfo) {
			$Assert::check($nc(this->code)->isStatementStart());
			$nc(this->code)->newLocal(v);
			$nc($(genExpr(tree->init, $($nc(v)->erasure(this->types)))))->load();
			$nc($($nc(this->items)->makeLocalItem(v)))->store();
			$Assert::check($nc(this->code)->isStatementStart());
		}
	} else {
		$nc(this->code)->newLocal(v);
	}
	checkDimension($(tree->pos()), $nc(v)->type);
}

void Gen::visitSkip($JCTree$JCSkip* tree) {
}

void Gen::visitBlock($JCTree$JCBlock* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t limit = $nc(this->code)->nextreg;
	$var($Env, localEnv, $nc(this->env)->dup(tree, $$new($Gen$GenContext)));
	genStats($nc(tree)->stats, localEnv);
	$init($JCTree$Tag);
	if (!$nc($nc(this->env)->tree)->hasTag($JCTree$Tag::METHODDEF)) {
		$nc(this->code)->statBegin($nc(tree)->endpos);
		$nc(this->code)->endScopes(limit);
		$nc(this->code)->pendingStatPos = $Position::NOPOS;
	}
}

void Gen::visitDoLoop($JCTree$JCDoWhileLoop* tree) {
	genLoop(tree, $nc(tree)->body, tree->cond, $($List::nil()), false);
}

void Gen::visitWhileLoop($JCTree$JCWhileLoop* tree) {
	genLoop(tree, $nc(tree)->body, tree->cond, $($List::nil()), true);
}

void Gen::visitForLoop($JCTree$JCForLoop* tree) {
	int32_t limit = $nc(this->code)->nextreg;
	genStats($nc(tree)->init, this->env);
	genLoop(tree, $nc(tree)->body, tree->cond, tree->step, true);
	$nc(this->code)->endScopes(limit);
}

void Gen::genLoop($JCTree$JCStatement* loop, $JCTree$JCStatement* body, $JCTree$JCExpression* cond, $List* step, bool testFirst) {
	$useLocalCurrentObjectStackCache();
	$var($Env, loopEnv, $nc(this->env)->dup(loop, $$new($Gen$GenContext)));
	int32_t startpc = $nc(this->code)->entryPoint();
	if (testFirst) {
		$var($Items$CondItem, c, nullptr);
		if (cond != nullptr) {
			$nc(this->code)->statBegin(cond->pos$);
			$Assert::check($nc(this->code)->isStatementStart());
			$assign(c, genCond($(static_cast<$JCTree*>($TreeInfo::skipParens(cond))), 8));
		} else {
			$assign(c, $nc(this->items)->makeCondItem(167));
		}
		$var($Code$Chain, loopDone, $nc(c)->jumpFalse());
		$nc(this->code)->resolve(c->trueJumps);
		$Assert::check($nc(this->code)->isStatementStart());
		genStat(body, loopEnv, 1 | 16);
		$nc(this->code)->resolve($nc(($cast($Gen$GenContext, $nc(loopEnv)->info)))->cont);
		genStats(step, loopEnv);
		$nc(this->code)->resolve($($nc(this->code)->branch(167)), startpc);
		$nc(this->code)->resolve(loopDone);
	} else {
		genStat(body, loopEnv, 1 | 16);
		$nc(this->code)->resolve($nc(($cast($Gen$GenContext, $nc(loopEnv)->info)))->cont);
		genStats(step, loopEnv);
		if ($nc(this->code)->isAlive()) {
			$var($Items$CondItem, c, nullptr);
			if (cond != nullptr) {
				$nc(this->code)->statBegin(cond->pos$);
				$Assert::check($nc(this->code)->isStatementStart());
				$assign(c, genCond($(static_cast<$JCTree*>($TreeInfo::skipParens(cond))), 8));
			} else {
				$assign(c, $nc(this->items)->makeCondItem(167));
			}
			$nc(this->code)->resolve($($nc(c)->jumpTrue()), startpc);
			$Assert::check($nc(this->code)->isStatementStart());
			$nc(this->code)->resolve($nc(c)->falseJumps);
		}
	}
	$var($Code$Chain, exit, $nc(($cast($Gen$GenContext, $nc(loopEnv)->info)))->exit);
	if (exit != nullptr) {
		$nc(this->code)->resolve(exit);
		$nc($nc(exit->state)->defined)->excludeFrom($nc(this->code)->nextreg);
	}
}

void Gen::visitForeachLoop($JCTree$JCEnhancedForLoop* tree) {
	$throwNew($AssertionError);
}

void Gen::visitLabelled($JCTree$JCLabeledStatement* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Env, localEnv, $nc(this->env)->dup(tree, $$new($Gen$GenContext)));
	genStat($nc(tree)->body, localEnv, 1);
	$var($Code$Chain, exit, $nc(($cast($Gen$GenContext, $nc(localEnv)->info)))->exit);
	if (exit != nullptr) {
		$nc(this->code)->resolve(exit);
		$nc($nc(exit->state)->defined)->excludeFrom($nc(this->code)->nextreg);
	}
}

void Gen::visitSwitch($JCTree$JCSwitch* tree) {
	handleSwitch(tree, $nc(tree)->selector, tree->cases, tree->patternSwitch);
}

void Gen::visitSwitchExpression($JCTree$JCSwitchExpression* tree) {
	$nc(this->code)->resolvePending();
	bool prevInCondSwitchExpression = this->inCondSwitchExpression;
	{
		$var($Throwable, var$0, nullptr);
		try {
			this->inCondSwitchExpression = false;
			doHandleSwitchExpression(tree);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			this->inCondSwitchExpression = prevInCondSwitchExpression;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$set(this, result, $nc(this->items)->makeStackItem(this->pt));
}

void Gen::doHandleSwitchExpression($JCTree$JCSwitchExpression* tree) {
	$useLocalCurrentObjectStackCache();
	$var($List, prevStackBeforeSwitchExpression, this->stackBeforeSwitchExpression);
	$var($Items$LocalItem, prevSwitchResult, this->switchResult);
	int32_t limit = $nc(this->code)->nextreg;
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this, stackBeforeSwitchExpression, $List::nil());
			$set(this, switchResult, nullptr);
			if (hasTry(tree)) {
				while ($nc($nc(this->code)->state)->stacksize > 0) {
					$var($Type, type, $nc($nc(this->code)->state)->peek());
					$var($String, var$4, $$str({$$str(this->target->syntheticNameChar()), "stack"_s}));
					$var($String, var$3, $$concat(var$4, $$str(this->target->syntheticNameChar())));
					$var($String, var$2, $$concat(var$3, $$str($nc(tree)->pos$)));
					$var($String, var$1, $$concat(var$2, $$str(this->target->syntheticNameChar())));
					$var($Name, varName, $nc(this->names)->fromString($$concat(var$1, $$str($nc($nc(this->code)->state)->stacksize))));
					$var($Symbol$VarSymbol, var, $new($Symbol$VarSymbol, $Flags::SYNTHETIC, varName, type, $nc($nc(this->env)->enclMethod)->sym));
					$var($Items$LocalItem, item, $new($Items$LocalItem, static_cast<$Items*>($nc(this->items)), type, $nc(this->code)->newLocal(var)));
					$set(this, stackBeforeSwitchExpression, $nc(this->stackBeforeSwitchExpression)->prepend(item));
					item->store();
				}
				$set(this, switchResult, makeTemp($nc(tree)->type));
			}
			int32_t prevLetExprStart = $nc(this->code)->setLetExprStackPos($nc($nc(this->code)->state)->stacksize);
			{
				$var($Throwable, var$5, nullptr);
				try {
					handleSwitch(tree, $nc(tree)->selector, tree->cases, tree->patternSwitch);
				} catch ($Throwable& var$6) {
					$assign(var$5, var$6);
				} /*finally*/ {
					$nc(this->code)->setLetExprStackPos(prevLetExprStart);
				}
				if (var$5 != nullptr) {
					$throw(var$5);
				}
			}
		} catch ($Throwable& var$7) {
			$assign(var$0, var$7);
		} /*finally*/ {
			$set(this, stackBeforeSwitchExpression, prevStackBeforeSwitchExpression);
			$set(this, switchResult, prevSwitchResult);
			$nc(this->code)->endScopes(limit);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool Gen::hasTry($JCTree$JCSwitchExpression* tree) {
	$useLocalCurrentObjectStackCache();
	$var($booleans, hasTry, $new($booleans, 1));
	$$new($Gen$1, this, hasTry)->scan(static_cast<$JCTree*>(tree));
	return hasTry->get(0);
}

void Gen::handleSwitch($JCTree* swtch, $JCTree$JCExpression* selector, $List* cases, bool patternSwitch) {
	$useLocalCurrentObjectStackCache();
	int32_t limit = $nc(this->code)->nextreg;
	$init($TypeTag);
	$Assert::check(!$nc($nc(selector)->type)->hasTag($TypeTag::CLASS));
	int32_t switchStart = patternSwitch ? $nc(this->code)->entryPoint() : -1;
	int32_t startpcCrt = this->genCrt ? $nc(this->code)->curCP() : 0;
	$Assert::check($nc(this->code)->isStatementStart());
	$var($Items$Item, sel, genExpr(selector, $nc(this->syms)->intType));
	if ($nc(cases)->isEmpty()) {
		$nc($($nc(sel)->load()))->drop();
		if (this->genCrt) {
			$var($Object, var$0, $of($TreeInfo::skipParens(selector)));
			int32_t var$1 = startpcCrt;
			$nc($nc(this->code)->crt)->put(var$0, 8, var$1, $nc(this->code)->curCP());
		}
	} else {
		$nc(sel)->load();
		if (this->genCrt) {
			$var($Object, var$2, $of($TreeInfo::skipParens(selector)));
			int32_t var$3 = startpcCrt;
			$nc($nc(this->code)->crt)->put(var$2, 8, var$3, $nc(this->code)->curCP());
		}
		$var($Env, switchEnv, $nc(this->env)->dup(swtch, $$new($Gen$GenContext)));
		$nc(($cast($Gen$GenContext, $nc(switchEnv)->info)))->isSwitch = true;
		int32_t lo = $Integer::MAX_VALUE;
		int32_t hi = $Integer::MIN_VALUE;
		int32_t nlabels = 0;
		$var($ints, labels, $new($ints, cases->length()));
		int32_t defaultIndex = -1;
		$var($List, l, cases);
		for (int32_t i = 0; i < labels->length; ++i) {
			if ($nc(($cast($JCTree$JCCaseLabel, $nc($nc(($cast($JCTree$JCCase, $nc(l)->head)))->labels)->head)))->isExpression()) {
				$Assert::check($nc($nc(($cast($JCTree$JCCase, l->head)))->labels)->size() == 1);
				int32_t val = $nc(($cast($Number, $($nc($nc(($cast($JCTree$JCExpression, $nc($nc(($cast($JCTree$JCCase, l->head)))->labels)->head)))->type)->constValue()))))->intValue();
				labels->set(i, val);
				if (val < lo) {
					lo = val;
				}
				if (hi < val) {
					hi = val;
				}
				++nlabels;
			} else {
				$Assert::check(defaultIndex == -1);
				defaultIndex = i;
			}
			$assign(l, $nc(l)->tail);
		}
		int64_t table_space_cost = 4 + ((int64_t)hi - lo + 1);
		int64_t table_time_cost = 3;
		int64_t lookup_space_cost = 3 + 2 * (int64_t)nlabels;
		int64_t lookup_time_cost = nlabels;
		int32_t opcode = nlabels > 0 && table_space_cost + 3 * table_time_cost <= lookup_space_cost + 3 * lookup_time_cost ? 170 : 171;
		int32_t startpc = $nc(this->code)->curCP();
		$nc(this->code)->emitop0(opcode);
		$nc(this->code)->align(4);
		int32_t tableBase = $nc(this->code)->curCP();
		$var($ints, offsets, nullptr);
		$nc(this->code)->emit4(-1);
		if (opcode == 170) {
			$nc(this->code)->emit4(lo);
			$nc(this->code)->emit4(hi);
			for (int64_t i = lo; i <= hi; ++i) {
				$nc(this->code)->emit4(-1);
			}
		} else {
			$nc(this->code)->emit4(nlabels);
			for (int32_t i = 0; i < nlabels; ++i) {
				$nc(this->code)->emit4(-1);
				$nc(this->code)->emit4(-1);
			}
			$assign(offsets, $new($ints, labels->length));
		}
		$var($Code$State, stateSwitch, $nc($nc(this->code)->state)->dup());
		$nc(this->code)->markDead();
		$assign(l, cases);
		for (int32_t i = 0; i < labels->length; ++i) {
			$var($JCTree$JCCase, c, $cast($JCTree$JCCase, $nc(l)->head));
			$assign(l, l->tail);
			int32_t pc = $nc(this->code)->entryPoint(stateSwitch);
			if (i != defaultIndex) {
				if (opcode == 170) {
					$nc(this->code)->put4(tableBase + 4 * (labels->get(i) - lo + 3), pc - startpc);
				} else {
					$nc(offsets)->set(i, pc - startpc);
				}
			} else {
				$nc(this->code)->put4(tableBase, pc - startpc);
			}
			genStats($nc(c)->stats, switchEnv, 16);
		}
		if ($nc(($cast($Gen$GenContext, switchEnv->info)))->cont != nullptr) {
			$Assert::check(patternSwitch);
			$nc(this->code)->resolve($nc(($cast($Gen$GenContext, switchEnv->info)))->cont, switchStart);
		}
		$var($Code$Chain, exit, $nc(($cast($Gen$GenContext, switchEnv->info)))->exit);
		if (exit != nullptr) {
			$nc(this->code)->resolve(exit);
			$nc($nc(exit->state)->defined)->excludeFrom(limit);
		}
		if ($nc(this->code)->get4(tableBase) == -1) {
			$nc(this->code)->put4(tableBase, $nc(this->code)->entryPoint(stateSwitch) - startpc);
		}
		if (opcode == 170) {
			int32_t defaultOffset = $nc(this->code)->get4(tableBase);
			for (int64_t i = lo; i <= hi; ++i) {
				int32_t t = (int32_t)(tableBase + 4 * (i - lo + 3));
				if ($nc(this->code)->get4(t) == -1) {
					$nc(this->code)->put4(t, defaultOffset);
				}
			}
		} else {
			if (defaultIndex >= 0) {
				for (int32_t i = defaultIndex; i < labels->length - 1; ++i) {
					labels->set(i, labels->get(i + 1));
					$nc(offsets)->set(i, offsets->get(i + 1));
				}
			}
			if (nlabels > 0) {
				qsort2(labels, offsets, 0, nlabels - 1);
			}
			for (int32_t i = 0; i < nlabels; ++i) {
				int32_t caseidx = tableBase + 8 * (i + 1);
				$nc(this->code)->put4(caseidx, labels->get(i));
				$nc(this->code)->put4(caseidx + 4, $nc(offsets)->get(i));
			}
		}
	}
	$nc(this->code)->endScopes(limit);
}

void Gen::qsort2($ints* keys, $ints* values, int32_t lo, int32_t hi) {
	$init(Gen);
	int32_t i = lo;
	int32_t j = hi;
	int32_t pivot = $nc(keys)->get((i + j) / 2);
	do {
		while (keys->get(i) < pivot) {
			++i;
		}
		while (pivot < keys->get(j)) {
			--j;
		}
		if (i <= j) {
			int32_t temp1 = keys->get(i);
			keys->set(i, keys->get(j));
			keys->set(j, temp1);
			int32_t temp2 = $nc(values)->get(i);
			values->set(i, values->get(j));
			values->set(j, temp2);
			++i;
			--j;
		}
	} while (i <= j);
	if (lo < j) {
		qsort2(keys, values, lo, j);
	}
	if (i < hi) {
		qsort2(keys, values, i, hi);
	}
}

void Gen::visitSynchronized($JCTree$JCSynchronized* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t limit = $nc(this->code)->nextreg;
	$var($Items$LocalItem, lockVar, makeTemp($nc(this->syms)->objectType));
	$Assert::check($nc(this->code)->isStatementStart());
	$nc($($nc($(genExpr($nc(tree)->lock, $nc(tree->lock)->type)))->load()))->duplicate();
	$nc(lockVar)->store();
	$nc(this->code)->emitop0(194);
	$nc($nc(this->code)->state)->lock(lockVar->reg);
	$var($Env, syncEnv, $nc(this->env)->dup(tree, $$new($Gen$GenContext)));
	$set($nc($cast($Gen$GenContext, $nc(syncEnv)->info)), finalize$, $new($Gen$2, this, syncEnv, lockVar));
	$set($nc($cast($Gen$GenContext, syncEnv->info)), gaps, $new($ListBuffer));
	genTry($nc(tree)->body, $($List::nil()), syncEnv);
	$nc(this->code)->endScopes(limit);
}

void Gen::visitTry($JCTree$JCTry* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Env, tryEnv, $nc(this->env)->dup(tree, $$new($Gen$GenContext)));
	$var($Env, oldEnv, this->env);
	$set($nc($cast($Gen$GenContext, $nc(tryEnv)->info)), finalize$, $new($Gen$3, this, tryEnv, tree, oldEnv));
	$set($nc($cast($Gen$GenContext, tryEnv->info)), gaps, $new($ListBuffer));
	genTry($nc(tree)->body, tree->catchers, tryEnv);
}

void Gen::genTry($JCTree* body, $List* catchers, $Env* env) {
	$useLocalCurrentObjectStackCache();
	int32_t limit = $nc(this->code)->nextreg;
	int32_t startpc = $nc(this->code)->curCP();
	$var($Code$State, stateTry, $nc($nc(this->code)->state)->dup());
	genStat(body, env, 2);
	int32_t endpc = $nc(this->code)->curCP();
	$var($List, gaps, $nc($nc(($cast($Gen$GenContext, $nc(env)->info)))->gaps)->toList());
	$nc(this->code)->statBegin($TreeInfo::endPos(body));
	genFinalizer(env);
	$nc(this->code)->statBegin($TreeInfo::endPos(env->tree));
	$var($Code$Chain, exitChain, $nc(this->code)->branch(167));
	endFinalizerGap(env);
	$nc($nc(($cast($Gen$GenContext, env->info)))->finalize$)->afterBody();
	bool hasFinalizer = $nc(($cast($Gen$GenContext, env->info)))->finalize$ != nullptr && $nc($nc(($cast($Gen$GenContext, env->info)))->finalize$)->hasFinalizer();
	if (startpc != endpc) {
		{
			$var($List, l, catchers);
			for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
				$nc(this->code)->entryPoint(stateTry, $nc($nc($nc(($cast($JCTree$JCCatch, l->head)))->param)->sym)->type);
				genCatch($cast($JCTree$JCCatch, l->head), env, startpc, endpc, gaps);
				genFinalizer(env);
				if (hasFinalizer || $nc(l->tail)->nonEmpty()) {
					$nc(this->code)->statBegin($TreeInfo::endPos(env->tree));
					$assign(exitChain, $Code::mergeChains(exitChain, $($nc(this->code)->branch(167))));
				}
				endFinalizerGap(env);
			}
		}
	}
	if (hasFinalizer) {
		$nc(this->code)->newRegSegment();
		int32_t catchallpc = $nc(this->code)->entryPoint(stateTry, $nc(this->syms)->throwableType);
		int32_t startseg = startpc;
		while ($nc($nc(($cast($Gen$GenContext, env->info)))->gaps)->nonEmpty()) {
			int32_t endseg = $nc(($cast($Integer, $($nc($nc(($cast($Gen$GenContext, env->info)))->gaps)->next()))))->intValue();
			registerCatch($($nc(body)->pos()), startseg, endseg, catchallpc, 0);
			startseg = $nc(($cast($Integer, $($nc($nc(($cast($Gen$GenContext, env->info)))->gaps)->next()))))->intValue();
		}
		$init($TreeInfo$PosKind);
		$nc(this->code)->statBegin($TreeInfo::finalizerPos(env->tree, $TreeInfo$PosKind::FIRST_STAT_POS));
		$nc(this->code)->markStatBegin();
		$var($Items$Item, excVar, makeTemp($nc(this->syms)->throwableType));
		$nc(excVar)->store();
		genFinalizer(env);
		$nc(this->code)->resolvePending();
		$nc(this->code)->statBegin($TreeInfo::finalizerPos(env->tree, $TreeInfo$PosKind::END_POS));
		$nc(this->code)->markStatBegin();
		excVar->load();
		$var($JCDiagnostic$DiagnosticPosition, var$0, $nc(body)->pos());
		int32_t var$1 = startseg;
		registerCatch(var$0, var$1, $nc(($cast($Integer, $($nc($nc(($cast($Gen$GenContext, env->info)))->gaps)->next()))))->intValue(), catchallpc, 0);
		$nc(this->code)->emitop0(191);
		$nc(this->code)->markDead();
		if ($nc(($cast($Gen$GenContext, env->info)))->cont != nullptr) {
			$nc(this->code)->resolve($nc(($cast($Gen$GenContext, env->info)))->cont);
			$nc(this->code)->statBegin($TreeInfo::finalizerPos(env->tree, $TreeInfo$PosKind::FIRST_STAT_POS));
			$nc(this->code)->markStatBegin();
			$var($Items$LocalItem, retVar, makeTemp($nc(this->syms)->throwableType));
			$nc(retVar)->store();
			$nc($nc(($cast($Gen$GenContext, env->info)))->finalize$)->genLast();
			$nc(this->code)->emitop1w(169, retVar->reg);
			$nc(this->code)->markDead();
		}
	}
	$nc(this->code)->resolve(exitChain);
	$nc(this->code)->endScopes(limit);
}

void Gen::genCatch($JCTree$JCCatch* tree, $Env* env, int32_t startpc, int32_t endpc, $List* gaps$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($List, gaps, gaps$renamed);
	if (startpc != endpc) {
		$var($List, catchTypeExprs, catchTypesWithAnnotations(tree));
		while ($nc(gaps)->nonEmpty()) {
			{
				$var($Iterator, i$, $nc(catchTypeExprs)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Pair, subCatch1, $cast($Pair, i$->next()));
					{
						$var($JCTree$JCExpression, subCatch, $cast($JCTree$JCExpression, $nc(subCatch1)->snd));
						int32_t catchType = makeRef($($nc(tree)->pos()), $nc(subCatch)->type);
						int32_t end = $nc(($cast($Integer, gaps->head)))->intValue();
						$var($JCDiagnostic$DiagnosticPosition, var$0, $nc(tree)->pos());
						int32_t var$1 = startpc;
						int32_t var$2 = end;
						registerCatch(var$0, var$1, var$2, $nc(this->code)->curCP(), catchType);
						{
							$var($Iterator, i$, $nc(($cast($List, subCatch1->fst)))->iterator());
							for (; $nc(i$)->hasNext();) {
								$var($Attribute$TypeCompound, tc, $cast($Attribute$TypeCompound, i$->next()));
								{
									$nc($nc(tc)->position)->setCatchInfo(catchType, startpc);
								}
							}
						}
					}
				}
			}
			$assign(gaps, gaps->tail);
			startpc = $nc(($cast($Integer, $nc(gaps)->head)))->intValue();
			$assign(gaps, gaps->tail);
		}
		if (startpc < endpc) {
			{
				$var($Iterator, i$, $nc(catchTypeExprs)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Pair, subCatch1, $cast($Pair, i$->next()));
					{
						$var($JCTree$JCExpression, subCatch, $cast($JCTree$JCExpression, $nc(subCatch1)->snd));
						int32_t catchType = makeRef($($nc(tree)->pos()), $nc(subCatch)->type);
						$var($JCDiagnostic$DiagnosticPosition, var$3, $nc(tree)->pos());
						int32_t var$4 = startpc;
						int32_t var$5 = endpc;
						registerCatch(var$3, var$4, var$5, $nc(this->code)->curCP(), catchType);
						{
							$var($Iterator, i$, $nc(($cast($List, subCatch1->fst)))->iterator());
							for (; $nc(i$)->hasNext();) {
								$var($Attribute$TypeCompound, tc, $cast($Attribute$TypeCompound, i$->next()));
								{
									$nc($nc(tc)->position)->setCatchInfo(catchType, startpc);
								}
							}
						}
					}
				}
			}
		}
		$var($Symbol$VarSymbol, exparam, $nc($nc(tree)->param)->sym);
		$nc(this->code)->statBegin(tree->pos$);
		$nc(this->code)->markStatBegin();
		int32_t limit = $nc(this->code)->nextreg;
		$nc(this->code)->newLocal(exparam);
		$nc($($nc(this->items)->makeLocalItem(exparam)))->store();
		$nc(this->code)->statBegin($TreeInfo::firstStatPos(tree->body));
		genStat(tree->body, env, 2);
		$nc(this->code)->endScopes(limit);
		$nc(this->code)->statBegin($TreeInfo::endPos(tree->body));
	}
}

$List* Gen::catchTypesWithAnnotations($JCTree$JCCatch* tree) {
	$useLocalCurrentObjectStackCache();
	return $TreeInfo::isMultiCatch(tree) ? catchTypesWithAnnotationsFromMulticatch($cast($JCTree$JCTypeUnion, $nc($nc(tree)->param)->vartype), $($nc($nc(tree->param)->sym)->getRawTypeAttributes())) : $List::of($$new($Pair, $($nc($nc($nc(tree)->param)->sym)->getRawTypeAttributes()), $nc(tree->param)->vartype));
}

$List* Gen::catchTypesWithAnnotationsFromMulticatch($JCTree$JCTypeUnion* tree, $List* first) {
	$useLocalCurrentObjectStackCache();
	$var($List, alts, $nc(tree)->alternatives);
	$var($List, res, $List::of($$new($Pair, first, $cast($JCTree$JCExpression, $nc(alts)->head))));
	$assign(alts, $nc(alts)->tail);
	while (alts != nullptr && alts->head != nullptr) {
		$var($JCTree$JCExpression, alt, $cast($JCTree$JCExpression, alts->head));
		{
			$var($JCTree$JCAnnotatedType, annotatedType, nullptr);
			bool var$0 = $instanceOf($JCTree$JCAnnotatedType, alt);
			if (var$0) {
				$assign(annotatedType, $cast($JCTree$JCAnnotatedType, alt));
				var$0 = true;
			}
			if (var$0) {
				$assign(res, $nc(res)->prepend($$new($Pair, $($nc(this->annotate)->fromAnnotations($nc(annotatedType)->annotations)), alt)));
			} else {
				$assign(res, $nc(res)->prepend($$new($Pair, $($List::nil()), alt)));
			}
		}
		$assign(alts, alts->tail);
	}
	return $nc(res)->reverse();
}

void Gen::registerCatch($JCDiagnostic$DiagnosticPosition* pos, int32_t startpc, int32_t endpc, int32_t handler_pc, int32_t catch_type) {
	char16_t startpc1 = (char16_t)startpc;
	char16_t endpc1 = (char16_t)endpc;
	char16_t handler_pc1 = (char16_t)handler_pc;
	if (startpc1 == startpc && endpc1 == endpc && handler_pc1 == handler_pc) {
		$nc(this->code)->addCatch(startpc1, endpc1, handler_pc1, (char16_t)catch_type);
	} else {
		$init($CompilerProperties$Errors);
		$nc(this->log)->error(pos, $CompilerProperties$Errors::LimitCodeTooLargeForTryStmt);
		++this->nerrs;
	}
}

void Gen::visitIf($JCTree$JCIf* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t limit = $nc(this->code)->nextreg;
	$var($Code$Chain, thenExit, nullptr);
	$Assert::check($nc(this->code)->isStatementStart());
	$var($Items$CondItem, c, genCond($(static_cast<$JCTree*>($TreeInfo::skipParens($nc(tree)->cond))), 8));
	$var($Code$Chain, elseChain, $nc(c)->jumpFalse());
	$Assert::check($nc(this->code)->isStatementStart());
	if (!c->isFalse()) {
		$nc(this->code)->resolve(c->trueJumps);
		genStat($nc(tree)->thenpart, this->env, 1 | 16);
		$assign(thenExit, $nc(this->code)->branch(167));
	}
	if (elseChain != nullptr) {
		$nc(this->code)->resolve(elseChain);
		if ($nc(tree)->elsepart != nullptr) {
			genStat(tree->elsepart, this->env, 1 | 16);
		}
	}
	$nc(this->code)->resolve(thenExit);
	$nc(this->code)->endScopes(limit);
	$Assert::check($nc(this->code)->isStatementStart());
}

void Gen::visitExec($JCTree$JCExpressionStatement* tree) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCExpression, e, $nc(tree)->expr);
	$init($Gen$4);
	switch ($nc($Gen$4::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(e)->getTag())))->ordinal())) {
	case 4:
		{
			$init($JCTree$Tag);
			$nc(($cast($JCTree$JCUnary, e)))->setTag($JCTree$Tag::PREINC);
			break;
		}
	case 5:
		{
			$init($JCTree$Tag);
			$nc(($cast($JCTree$JCUnary, e)))->setTag($JCTree$Tag::PREDEC);
			break;
		}
	}
	$Assert::check($nc(this->code)->isStatementStart());
	$nc($(genExpr(tree->expr, $nc(tree->expr)->type)))->drop();
	$Assert::check($nc(this->code)->isStatementStart());
}

void Gen::visitBreak($JCTree$JCBreak* tree) {
	$useLocalCurrentObjectStackCache();
	$Assert::check($nc(this->code)->isStatementStart());
	$var($Env, targetEnv, unwindBreak($nc(tree)->target));
	$nc(($cast($Gen$GenContext, $nc(targetEnv)->info)))->addExit($($nc(this->code)->branch(167)));
	endFinalizerGaps(this->env, targetEnv);
}

void Gen::visitYield($JCTree$JCYield* tree) {
	$useLocalCurrentObjectStackCache();
	$Assert::check($nc(this->code)->isStatementStart());
	$var($Env, targetEnv, nullptr);
	if (this->inCondSwitchExpression) {
		$var($Items$CondItem, value, genCond(static_cast<$JCTree*>($nc(tree)->value), 16));
		$var($Code$Chain, falseJumps, $nc(value)->jumpFalse());
		$nc(this->code)->resolve(value->trueJumps);
		$var($Env, localEnv, unwindBreak($nc(tree)->target));
		reloadStackBeforeSwitchExpr();
		$var($Code$Chain, trueJumps, $nc(this->code)->branch(167));
		endFinalizerGaps(this->env, localEnv);
		$nc(this->code)->resolve(falseJumps);
		$assign(targetEnv, unwindBreak($nc(tree)->target));
		reloadStackBeforeSwitchExpr();
		$assign(falseJumps, $nc(this->code)->branch(167));
		if (this->switchExpressionTrueChain == nullptr) {
			$set(this, switchExpressionTrueChain, trueJumps);
		} else {
			$set(this, switchExpressionTrueChain, $Code::mergeChains(this->switchExpressionTrueChain, trueJumps));
		}
		if (this->switchExpressionFalseChain == nullptr) {
			$set(this, switchExpressionFalseChain, falseJumps);
		} else {
			$set(this, switchExpressionFalseChain, $Code::mergeChains(this->switchExpressionFalseChain, falseJumps));
		}
	} else {
		$nc($(genExpr($nc(tree)->value, this->pt)))->load();
		if (this->switchResult != nullptr) {
			$nc(this->switchResult)->store();
		}
		$assign(targetEnv, unwindBreak($nc(tree)->target));
		if ($nc(this->code)->isAlive()) {
			reloadStackBeforeSwitchExpr();
			if (this->switchResult != nullptr) {
				$nc(this->switchResult)->load();
			}
			$nc($nc(this->code)->state)->forceStackTop($nc($nc(tree)->target)->type);
			$nc(($cast($Gen$GenContext, $nc(targetEnv)->info)))->addExit($($nc(this->code)->branch(167)));
			$nc(this->code)->markDead();
		}
	}
	endFinalizerGaps(this->env, targetEnv);
}

$Env* Gen::unwindBreak($JCTree* target) {
	int32_t tmpPos = $nc(this->code)->pendingStatPos;
	$var($Env, targetEnv, unwind(target, this->env));
	$nc(this->code)->pendingStatPos = tmpPos;
	return targetEnv;
}

void Gen::reloadStackBeforeSwitchExpr() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->stackBeforeSwitchExpression)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Items$LocalItem, li, $cast($Items$LocalItem, i$->next()));
			$nc(li)->load();
		}
	}
}

void Gen::visitContinue($JCTree$JCContinue* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t tmpPos = $nc(this->code)->pendingStatPos;
	$var($Env, targetEnv, unwind($nc(tree)->target, this->env));
	$nc(this->code)->pendingStatPos = tmpPos;
	$Assert::check($nc(this->code)->isStatementStart());
	$nc(($cast($Gen$GenContext, $nc(targetEnv)->info)))->addCont($($nc(this->code)->branch(167)));
	endFinalizerGaps(this->env, targetEnv);
}

void Gen::visitReturn($JCTree$JCReturn* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t limit = $nc(this->code)->nextreg;
	$var($Env, targetEnv, nullptr);
	int32_t tmpPos = $nc(this->code)->pendingStatPos;
	if ($nc(tree)->expr != nullptr) {
		$Assert::check($nc(this->code)->isStatementStart());
		$var($Items$Item, r, $nc($(genExpr(tree->expr, this->pt)))->load());
		if (hasFinally($nc(this->env)->enclMethod, this->env)) {
			$assign(r, makeTemp(this->pt));
			$nc(r)->store();
		}
		$assign(targetEnv, unwind($nc(this->env)->enclMethod, this->env));
		$nc(this->code)->pendingStatPos = tmpPos;
		$nc(r)->load();
		$nc(this->code)->emitop0(172 + $Code::truncate($Code::typecode(this->pt)));
	} else {
		$assign(targetEnv, unwind($nc(this->env)->enclMethod, this->env));
		$nc(this->code)->pendingStatPos = tmpPos;
		$nc(this->code)->emitop0(177);
	}
	endFinalizerGaps(this->env, targetEnv);
	$nc(this->code)->endScopes(limit);
}

void Gen::visitThrow($JCTree$JCThrow* tree) {
	$Assert::check($nc(this->code)->isStatementStart());
	$nc($(genExpr($nc(tree)->expr, $nc(tree->expr)->type)))->load();
	$nc(this->code)->emitop0(191);
	$Assert::check($nc(this->code)->isStatementStart());
}

void Gen::visitApply($JCTree$JCMethodInvocation* tree) {
	$useLocalCurrentObjectStackCache();
	setTypeAnnotationPositions($nc(tree)->pos$);
	$var($Items$Item, m, genExpr($nc(tree)->meth, this->methodType));
	$var($Symbol$MethodSymbol, msym, $cast($Symbol$MethodSymbol, $TreeInfo::symbol($nc(tree)->meth)));
	genArgs($nc(tree)->args, $($nc($($nc(msym)->externalType(this->types)))->getParameterTypes()));
	if (!$nc(msym)->isDynamic()) {
		$nc(this->code)->statBegin($nc(tree)->pos$);
	}
	$set(this, result, $nc(m)->invoke());
}

void Gen::visitConditional($JCTree$JCConditional* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Code$Chain, thenExit, nullptr);
	$nc(this->code)->statBegin($nc($nc(tree)->cond)->pos$);
	$var($Items$CondItem, c, genCond(static_cast<$JCTree*>($nc(tree)->cond), 8));
	$var($Code$Chain, elseChain, $nc(c)->jumpFalse());
	if (!c->isFalse()) {
		$nc(this->code)->resolve(c->trueJumps);
		int32_t startpc = this->genCrt ? $nc(this->code)->curCP() : 0;
		$nc(this->code)->statBegin($nc($nc(tree)->truepart)->pos$);
		$nc($(genExpr($nc(tree)->truepart, this->pt)))->load();
		$nc($nc(this->code)->state)->forceStackTop($nc(tree)->type);
		if (this->genCrt) {
			$nc($nc(this->code)->crt)->put($nc(tree)->truepart, 16, startpc, $nc(this->code)->curCP());
		}
		$assign(thenExit, $nc(this->code)->branch(167));
	}
	if (elseChain != nullptr) {
		$nc(this->code)->resolve(elseChain);
		int32_t startpc = this->genCrt ? $nc(this->code)->curCP() : 0;
		$nc(this->code)->statBegin($nc($nc(tree)->falsepart)->pos$);
		$nc($(genExpr($nc(tree)->falsepart, this->pt)))->load();
		$nc($nc(this->code)->state)->forceStackTop($nc(tree)->type);
		if (this->genCrt) {
			$nc($nc(this->code)->crt)->put($nc(tree)->falsepart, 16, startpc, $nc(this->code)->curCP());
		}
	}
	$nc(this->code)->resolve(thenExit);
	$set(this, result, $nc(this->items)->makeStackItem(this->pt));
}

void Gen::setTypeAnnotationPositions(int32_t treePos) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$MethodSymbol, meth, $nc(this->code)->meth);
	$init($ElementKind);
	bool var$0 = $nc($nc(this->code)->meth)->getKind() == $ElementKind::CONSTRUCTOR;
	bool initOrClinit = var$0 || $nc($nc(this->code)->meth)->getKind() == $ElementKind::STATIC_INIT;
	{
		$var($Iterator, i$, $nc($($nc(meth)->getRawTypeAttributes()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Attribute$TypeCompound, ta, $cast($Attribute$TypeCompound, i$->next()));
			{
				if ($nc(ta)->hasUnknownPosition()) {
					ta->tryFixPosition();
				}
				if ($nc($nc(ta)->position)->matchesPos(treePos)) {
					$nc(ta->position)->updatePosOffset($nc(this->code)->cp);
				}
			}
		}
	}
	if (!initOrClinit) {
		return;
	}
	{
		$var($Iterator, i$, $nc($($nc(meth->owner)->getRawTypeAttributes()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Attribute$TypeCompound, ta, $cast($Attribute$TypeCompound, i$->next()));
			{
				if ($nc(ta)->hasUnknownPosition()) {
					ta->tryFixPosition();
				}
				if ($nc($nc(ta)->position)->matchesPos(treePos)) {
					$nc(ta->position)->updatePosOffset($nc(this->code)->cp);
				}
			}
		}
	}
	$var($Symbol$ClassSymbol, clazz, meth->enclClass());
	{
		$var($Iterator, i$, $$new($FilteredMemberList, $($nc(clazz)->members()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, s, $cast($Symbol, i$->next()));
			{
				if (!$nc($($nc(s)->getKind()))->isField()) {
					continue;
				}
				{
					$var($Iterator, i$, $nc($($nc(s)->getRawTypeAttributes()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Attribute$TypeCompound, ta, $cast($Attribute$TypeCompound, i$->next()));
						{
							if ($nc(ta)->hasUnknownPosition()) {
								ta->tryFixPosition();
							}
							if ($nc($nc(ta)->position)->matchesPos(treePos)) {
								$nc(ta->position)->updatePosOffset($nc(this->code)->cp);
							}
						}
					}
				}
			}
		}
	}
}

void Gen::visitNewClass($JCTree$JCNewClass* tree) {
	$useLocalCurrentObjectStackCache();
	$Assert::check($nc(tree)->encl == nullptr && tree->def == nullptr);
	setTypeAnnotationPositions($nc(tree)->pos$);
	$var($PoolConstant, var$0, static_cast<$PoolConstant*>(checkDimension($($nc(tree)->pos()), tree->type)));
	$nc(this->code)->emitop2(187, var$0, static_cast<$ToIntBiFunction*>($$new(Gen$$Lambda$putClass)));
	$nc(this->code)->emitop0(89);
	genArgs($nc(tree)->args, $($nc($($nc(tree->constructor)->externalType(this->types)))->getParameterTypes()));
	$nc($($nc(this->items)->makeMemberItem($nc(tree)->constructor, true)))->invoke();
	$set(this, result, $nc(this->items)->makeStackItem($nc(tree)->type));
}

void Gen::visitNewArray($JCTree$JCNewArray* tree) {
	$useLocalCurrentObjectStackCache();
	setTypeAnnotationPositions($nc(tree)->pos$);
	if ($nc(tree)->elems != nullptr) {
		$var($Type, elemtype, $nc(this->types)->elemtype(tree->type));
		loadIntConst($nc(tree->elems)->length());
		$var($Items$Item, arr, makeNewArray($(tree->pos()), tree->type, 1));
		int32_t i = 0;
		{
			$var($List, l, tree->elems);
			for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
				$nc(arr)->duplicate();
				loadIntConst(i);
				++i;
				$nc($(genExpr($cast($JCTree, l->head), elemtype)))->load();
				$nc($($nc(this->items)->makeIndexedItem(elemtype)))->store();
			}
		}
		$set(this, result, arr);
	} else {
		{
			$var($List, l, tree->dims);
			for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
				$nc($(genExpr($cast($JCTree, l->head), $nc(this->syms)->intType)))->load();
			}
		}
		$var($JCDiagnostic$DiagnosticPosition, var$0, tree->pos());
		$var($Type, var$1, tree->type);
		$set(this, result, makeNewArray(var$0, var$1, $nc(tree->dims)->length()));
	}
}

$Items$Item* Gen::makeNewArray($JCDiagnostic$DiagnosticPosition* pos, $Type* type, int32_t ndims) {
	$var($Type, elemtype, $nc(this->types)->elemtype(type));
	if ($nc(this->types)->dimensions(type) > $ClassFile::MAX_DIMENSIONS) {
		$init($CompilerProperties$Errors);
		$nc(this->log)->error(pos, $CompilerProperties$Errors::LimitDimensions);
		++this->nerrs;
	}
	int32_t elemcode = $Code::arraycode(elemtype);
	if (elemcode == 0 || (elemcode == 1 && ndims == 1)) {
		$nc(this->code)->emitAnewarray(makeRef(pos, elemtype), type);
	} else if (elemcode == 1) {
		$nc(this->code)->emitMultianewarray(ndims, makeRef(pos, type), type);
	} else {
		$nc(this->code)->emitNewarray(elemcode, type);
	}
	return $nc(this->items)->makeStackItem(type);
}

void Gen::visitParens($JCTree$JCParens* tree) {
	$set(this, result, genExpr($nc(tree)->expr, $nc(tree->expr)->type));
}

void Gen::visitAssign($JCTree$JCAssign* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Items$Item, l, genExpr($nc(tree)->lhs, $nc(tree->lhs)->type));
	$nc($(genExpr($nc(tree)->rhs, $nc(tree->lhs)->type)))->load();
	$init($TypeTag);
	if ($nc($nc($nc(tree)->rhs)->type)->hasTag($TypeTag::BOT)) {
		$nc($nc(this->code)->state)->forceStackTop($nc(tree->lhs)->type);
	}
	$set(this, result, $nc(this->items)->makeAssignItem(l));
}

void Gen::visitAssignop($JCTree$JCAssignOp* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$OperatorSymbol, operator$, $nc(tree)->operator$);
	$var($Items$Item, l, nullptr);
	if ($nc(operator$)->opcode == 256) {
		$assign(l, $nc(this->concat)->makeConcat(tree));
	} else {
		$assign(l, genExpr(tree->lhs, $nc(tree->lhs)->type));
		{
			$var($Items$LocalItem, localItem, nullptr);
			$init($JCTree$Tag);
			bool var$4 = tree->hasTag($JCTree$Tag::PLUS_ASG);
			bool var$3 = (var$4 || tree->hasTag($JCTree$Tag::MINUS_ASG));
			if (var$3) {
				bool var$5 = $instanceOf($Items$LocalItem, l);
				if (var$5) {
					$assign(localItem, $cast($Items$LocalItem, l));
					var$5 = true;
				}
				var$3 = var$5;
			}
			bool var$2 = var$3;
			$init($TypeTag);
			bool var$1 = var$2 && $nc($($nc($nc(tree->lhs)->type)->getTag()))->isSubRangeOf($TypeTag::INT);
			bool var$0 = var$1 && $nc($($nc($nc(tree->rhs)->type)->getTag()))->isSubRangeOf($TypeTag::INT);
			if (var$0 && $nc($nc(tree->rhs)->type)->constValue() != nullptr) {
				int32_t ival = $nc(($cast($Number, $($nc($nc(tree->rhs)->type)->constValue()))))->intValue();
				if (tree->hasTag($JCTree$Tag::MINUS_ASG)) {
					ival = -ival;
				}
				$nc(localItem)->incr(ival);
				$set(this, result, l);
				return;
			}
		}
		$nc(l)->duplicate();
		$nc($(l->coerce($cast($Type, $nc($($nc(operator$->type)->getParameterTypes()))->head))))->load();
		$nc($(completeBinop(tree->lhs, tree->rhs, operator$)))->coerce($nc(tree->lhs)->type);
	}
	$set(this, result, $nc(this->items)->makeAssignItem(l));
}

void Gen::visitUnary($JCTree$JCUnary* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$OperatorSymbol, operator$, $nc(tree)->operator$);
	$init($JCTree$Tag);
	if (tree->hasTag($JCTree$Tag::NOT)) {
		$var($Items$CondItem, od, genCond(static_cast<$JCTree*>(tree->arg), false));
		$set(this, result, $nc(od)->negate());
	} else {
		$var($Items$Item, od, genExpr(tree->arg, $cast($Type, $nc($($nc($nc(operator$)->type)->getParameterTypes()))->head)));
		$init($Gen$4);
		switch ($nc($Gen$4::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($(tree->getTag())))->ordinal())) {
		case 6:
			{
				$set(this, result, $nc(od)->load());
				break;
			}
		case 7:
			{
				$set(this, result, $nc(od)->load());
				$nc(this->code)->emitop0($nc(operator$)->opcode);
				break;
			}
		case 8:
			{
				$set(this, result, $nc(od)->load());
				emitMinusOne($nc(od)->typecode);
				$nc(this->code)->emitop0($nc(operator$)->opcode);
				break;
			}
		case 9:
			{}
		case 10:
			{
				$nc(od)->duplicate();
				{
					$var($Items$LocalItem, localItem, nullptr);
					bool var$0 = $instanceOf($Items$LocalItem, od);
					if (var$0) {
						$assign(localItem, $cast($Items$LocalItem, od));
						var$0 = true;
					}
					if (var$0 && ($nc(operator$)->opcode == 96 || $nc(operator$)->opcode == 100)) {
						$nc(localItem)->incr(tree->hasTag($JCTree$Tag::PREINC) ? 1 : -1);
						$set(this, result, od);
					} else {
						$nc(od)->load();
						$nc(this->code)->emitop0(one(od->typecode));
						$nc(this->code)->emitop0(operator$->opcode);
						if (od->typecode != 0 && $Code::truncate(od->typecode) == 0) {
							$nc(this->code)->emitop0(145 + od->typecode - 5);
						}
						$set(this, result, $nc(this->items)->makeAssignItem(od));
					}
				}
				break;
			}
		case 4:
			{}
		case 5:
			{
				$nc(od)->duplicate();
				{
					$var($Items$LocalItem, localItem, nullptr);
					bool var$1 = $instanceOf($Items$LocalItem, od);
					if (var$1) {
						$assign(localItem, $cast($Items$LocalItem, od));
						var$1 = true;
					}
					if (var$1 && ($nc(operator$)->opcode == 96 || $nc(operator$)->opcode == 100)) {
						$var($Items$Item, res, $nc(od)->load());
						$nc(localItem)->incr(tree->hasTag($JCTree$Tag::POSTINC) ? 1 : -1);
						$set(this, result, res);
					} else {
						$var($Items$Item, res, $nc(od)->load());
						od->stash(od->typecode);
						$nc(this->code)->emitop0(one(od->typecode));
						$nc(this->code)->emitop0(operator$->opcode);
						if (od->typecode != 0 && $Code::truncate(od->typecode) == 0) {
							$nc(this->code)->emitop0(145 + od->typecode - 5);
						}
						od->store();
						$set(this, result, res);
					}
				}
				break;
			}
		case 11:
			{
				$set(this, result, $nc(od)->load());
				$nc(this->code)->emitop0(89);
				genNullCheck(tree);
				break;
			}
		default:
			{
				$Assert::error();
			}
		}
	}
}

void Gen::genNullCheck($JCTree* tree) {
	$useLocalCurrentObjectStackCache();
	$nc(this->code)->statBegin($nc(tree)->pos$);
	$var($JCDiagnostic$DiagnosticPosition, var$0, $nc(tree)->pos());
	$var($Type, var$1, $nc(this->syms)->objectsType);
	$var($Name, var$2, $nc(this->names)->requireNonNull);
	callMethod(var$0, var$1, var$2, $($List::of($nc(this->syms)->objectType)), true);
	$nc(this->code)->emitop0(87);
}

void Gen::visitBinary($JCTree$JCBinary* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$OperatorSymbol, operator$, $nc(tree)->operator$);
	if ($nc(operator$)->opcode == 256) {
		$set(this, result, $nc(this->concat)->makeConcat(tree));
	} else {
		$init($JCTree$Tag);
		if (tree->hasTag($JCTree$Tag::AND)) {
			$var($Items$CondItem, lcond, genCond(static_cast<$JCTree*>(tree->lhs), 8));
			if (!$nc(lcond)->isFalse()) {
				$var($Code$Chain, falseJumps, lcond->jumpFalse());
				$nc(this->code)->resolve(lcond->trueJumps);
				$var($Items$CondItem, rcond, genCond(static_cast<$JCTree*>(tree->rhs), 16));
				$set(this, result, $nc(this->items)->makeCondItem($nc(rcond)->opcode, rcond->trueJumps, $($Code::mergeChains(falseJumps, rcond->falseJumps))));
			} else {
				$set(this, result, lcond);
			}
		} else {
			if (tree->hasTag($JCTree$Tag::OR)) {
				$var($Items$CondItem, lcond, genCond(static_cast<$JCTree*>(tree->lhs), 8));
				if (!$nc(lcond)->isTrue()) {
					$var($Code$Chain, trueJumps, lcond->jumpTrue());
					$nc(this->code)->resolve(lcond->falseJumps);
					$var($Items$CondItem, rcond, genCond(static_cast<$JCTree*>(tree->rhs), 16));
					$set(this, result, $nc(this->items)->makeCondItem($nc(rcond)->opcode, $($Code::mergeChains(trueJumps, rcond->trueJumps)), rcond->falseJumps));
				} else {
					$set(this, result, lcond);
				}
			} else {
				$var($Items$Item, od, genExpr(tree->lhs, $cast($Type, $nc($($nc(operator$->type)->getParameterTypes()))->head)));
				$nc(od)->load();
				$set(this, result, completeBinop(tree->lhs, tree->rhs, operator$));
			}
		}
	}
}

$Items$Item* Gen::completeBinop($JCTree* lhs, $JCTree* rhs, $Symbol$OperatorSymbol* operator$) {
	$useLocalCurrentObjectStackCache();
	$var($Type$MethodType, optype, $cast($Type$MethodType, $nc(operator$)->type));
	int32_t opcode = operator$->opcode;
	{
		$var($Number, number, nullptr);
		bool var$1 = opcode >= 159 && opcode <= 164;
		if (var$1) {
			$var($Object, patt87500$temp, $nc($nc(rhs)->type)->constValue());
			bool var$2 = $instanceOf($Number, patt87500$temp);
			if (var$2) {
				$assign(number, $cast($Number, patt87500$temp));
				var$2 = true;
			}
			var$1 = var$2;
		}
		bool var$0 = var$1;
		if (var$0 && $nc(number)->intValue() == 0) {
			opcode = opcode + (153 - 159);
		} else if (opcode >= 165 && opcode <= 166 && $TreeInfo::isNull(rhs)) {
			opcode = opcode + (198 - 165);
		} else {
			$var($Type, rtype, $cast($Type, $nc($nc($($nc($(operator$->erasure(this->types)))->getParameterTypes()))->tail)->head));
			if (opcode >= 270 && opcode <= 275) {
				opcode = opcode + (120 - 270);
				$assign(rtype, $nc(this->syms)->intType);
			}
			$nc($(genExpr(rhs, rtype)))->load();
			if (opcode >= (1 << 9)) {
				$nc(this->code)->emitop0(opcode >> 9);
				opcode = (int32_t)(opcode & (uint32_t)255);
			}
		}
	}
	if (opcode >= 153 && opcode <= 166 || opcode == 198 || opcode == 199) {
		return $nc(this->items)->makeCondItem(opcode);
	} else {
		$nc(this->code)->emitop0(opcode);
		return $nc(this->items)->makeStackItem($nc(optype)->restype);
	}
}

void Gen::visitTypeCast($JCTree$JCTypeCast* tree) {
	$useLocalCurrentObjectStackCache();
	$set(this, result, $nc($(genExpr($nc(tree)->expr, $nc(tree->clazz)->type)))->load());
	setTypeAnnotationPositions($nc(tree)->pos$);
	bool var$1 = !$nc($nc($nc(tree)->clazz)->type)->isPrimitive();
	bool var$0 = var$1 && !$nc(this->types)->isSameType($nc(tree->expr)->type, $nc(tree->clazz)->type);
	if (var$0 && $nc(this->types)->asSuper($nc(tree->expr)->type, $nc($nc(tree->clazz)->type)->tsym) == nullptr) {
		$var($PoolConstant, var$2, static_cast<$PoolConstant*>(checkDimension($(tree->pos()), $nc(tree->clazz)->type)));
		$nc(this->code)->emitop2(192, var$2, static_cast<$ToIntBiFunction*>($$new(Gen$$Lambda$putClass)));
	}
}

void Gen::visitWildcard($JCTree$JCWildcard* tree) {
	$throwNew($AssertionError, $($of($of(this)->getClass()->getName())));
}

void Gen::visitTypeTest($JCTree$JCInstanceOf* tree) {
	$useLocalCurrentObjectStackCache();
	$nc($(genExpr($nc(tree)->expr, $nc(tree->expr)->type)))->load();
	setTypeAnnotationPositions($nc(tree)->pos$);
	$nc(this->code)->emitop2(193, makeRef($($nc(tree)->pos()), $nc(tree->pattern)->type));
	$set(this, result, $nc(this->items)->makeStackItem($nc(this->syms)->booleanType));
}

void Gen::visitIndexed($JCTree$JCArrayAccess* tree) {
	$useLocalCurrentObjectStackCache();
	$nc($(genExpr($nc(tree)->indexed, $nc(tree->indexed)->type)))->load();
	$nc($(genExpr($nc(tree)->index, $nc(this->syms)->intType)))->load();
	$set(this, result, $nc(this->items)->makeIndexedItem($nc(tree)->type));
}

void Gen::visitIdent($JCTree$JCIdent* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, sym, $nc(tree)->sym);
	if (tree->name == $nc(this->names)->_this || tree->name == $nc(this->names)->_super) {
		$var($Items$Item, res, tree->name == $nc(this->names)->_this ? $nc(this->items)->makeThisItem() : $nc(this->items)->makeSuperItem());
		$init($Kinds$Kind);
		if ($nc(sym)->kind == $Kinds$Kind::MTH) {
			$nc(res)->load();
			$assign(res, $nc(this->items)->makeMemberItem(sym, true));
		}
		$set(this, result, res);
	} else {
		bool var$1 = isInvokeDynamic(sym);
		if (var$1 || isConstantDynamic(sym)) {
			if (isConstantDynamic(sym)) {
				setTypeAnnotationPositions(tree->pos$);
			}
			$set(this, result, $nc(this->items)->makeDynamicItem(sym));
		} else {
			$init($Kinds$Kind);
			if ($nc(sym)->kind == $Kinds$Kind::VAR && ($nc(sym->owner)->kind == $Kinds$Kind::MTH || $nc($nc(sym)->owner)->kind == $Kinds$Kind::VAR)) {
				$set(this, result, $nc(this->items)->makeLocalItem($cast($Symbol$VarSymbol, sym)));
			} else if (((int64_t)(sym->flags() & (uint64_t)(int64_t)8)) != 0) {
				if (!isAccessSuper($nc(this->env)->enclMethod)) {
					$assign(sym, binaryQualifier(sym, $nc($nc(this->env)->enclClass)->type));
				}
				$set(this, result, $nc(this->items)->makeStaticItem(sym));
			} else {
				$nc($($nc(this->items)->makeThisItem()))->load();
				$assign(sym, binaryQualifier(sym, $nc($nc(this->env)->enclClass)->type));
				$set(this, result, $nc(this->items)->makeMemberItem(sym, nonVirtualForPrivateAccess(sym)));
			}
		}
	}
}

bool Gen::nonVirtualForPrivateAccess($Symbol* sym) {
	bool useVirtual = this->target->hasVirtualPrivateInvoke() && !this->disableVirtualizedPrivateInvoke;
	return !useVirtual && (((int64_t)($nc(sym)->flags() & (uint64_t)(int64_t)2)) != 0);
}

void Gen::visitSelect($JCTree$JCFieldAccess* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, sym, $nc(tree)->sym);
	if (tree->name == $nc(this->names)->_class) {
		$nc(this->code)->emitLdc($cast($PoolConstant$LoadableConstant, $(checkDimension($(tree->pos()), $nc(tree->selected)->type))));
		$set(this, result, $nc(this->items)->makeStackItem(this->pt));
		return;
	}
	$var($Symbol, ssym, $TreeInfo::symbol(tree->selected));
	$init($Kinds$Kind);
	bool selectSuper = ssym != nullptr && (ssym->kind == $Kinds$Kind::TYP || $nc(ssym)->name == $nc(this->names)->_super);
	bool accessSuper = isAccessSuper($nc(this->env)->enclMethod);
	$var($Items$Item, base, (selectSuper) ? $nc(this->items)->makeSuperItem() : genExpr(tree->selected, $nc(tree->selected)->type));
	if ($nc(sym)->kind == $Kinds$Kind::VAR && $nc(($cast($Symbol$VarSymbol, sym)))->getConstValue() != nullptr) {
		if (((int64_t)(sym->flags() & (uint64_t)(int64_t)8)) != 0) {
			if (!selectSuper && (ssym == nullptr || ssym->kind != $Kinds$Kind::TYP)) {
				$assign(base, $nc(base)->load());
			}
			$nc(base)->drop();
		} else {
			$nc(base)->load();
			genNullCheck(tree->selected);
		}
		$set(this, result, $nc(this->items)->makeImmediateItem(sym->type, $($nc(($cast($Symbol$VarSymbol, sym)))->getConstValue())));
	} else {
		if (isInvokeDynamic(sym)) {
			$set(this, result, $nc(this->items)->makeDynamicItem(sym));
			return;
		} else {
			$assign(sym, binaryQualifier(sym, $nc(tree->selected)->type));
		}
		if (((int64_t)(sym->flags() & (uint64_t)(int64_t)8)) != 0) {
			if (!selectSuper && (ssym == nullptr || ssym->kind != $Kinds$Kind::TYP)) {
				$assign(base, $nc(base)->load());
			}
			$nc(base)->drop();
			$set(this, result, $nc(this->items)->makeStaticItem(sym));
		} else {
			$nc(base)->load();
			if ($equals(sym, $nc(this->syms)->lengthVar)) {
				$nc(this->code)->emitop0(190);
				$set(this, result, $nc(this->items)->makeStackItem($nc(this->syms)->intType));
			} else {
				$set(this, result, $nc(this->items)->makeMemberItem(sym, nonVirtualForPrivateAccess(sym) || selectSuper || accessSuper));
			}
		}
	}
}

bool Gen::isInvokeDynamic($Symbol* sym) {
	$init($Kinds$Kind);
	return $nc(sym)->kind == $Kinds$Kind::MTH && $nc(($cast($Symbol$MethodSymbol, sym)))->isDynamic();
}

void Gen::visitLiteral($JCTree$JCLiteral* tree) {
	$init($TypeTag);
	if ($nc($nc(tree)->type)->hasTag($TypeTag::BOT)) {
		$nc(this->code)->emitop0(1);
		$set(this, result, $nc(this->items)->makeStackItem(tree->type));
	} else {
		$set(this, result, $nc(this->items)->makeImmediateItem(tree->type, tree->value));
	}
}

void Gen::visitLetExpr($JCTree$LetExpr* tree) {
	$useLocalCurrentObjectStackCache();
	$nc(this->code)->resolvePending();
	int32_t limit = $nc(this->code)->nextreg;
	int32_t prevLetExprStart = $nc(this->code)->setLetExprStackPos($nc($nc(this->code)->state)->stacksize);
	{
		$var($Throwable, var$0, nullptr);
		try {
			genStats($nc(tree)->defs, this->env);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->code)->setLetExprStackPos(prevLetExprStart);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$set(this, result, $nc($(genExpr($nc(tree)->expr, $nc(tree->expr)->type)))->load());
	$nc(this->code)->endScopes(limit);
}

void Gen::generateReferencesToPrunedTree($Symbol$ClassSymbol* classSymbol) {
	$useLocalCurrentObjectStackCache();
	$var($List, prunedInfo, $cast($List, $nc($nc(this->lower)->prunedTree)->get(classSymbol)));
	if (prunedInfo != nullptr) {
		{
			$var($Iterator, i$, prunedInfo->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JCTree, prunedTree, $cast($JCTree, i$->next()));
				{
					$nc(prunedTree)->accept(this->classReferenceVisitor);
				}
			}
		}
	}
}

bool Gen::genClass($Env* env, $JCTree$JCClassDecl* cdef) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			$set(this, attrEnv, env);
			$var($Symbol$ClassSymbol, c, $nc(cdef)->sym);
			$set(this, toplevel, $nc(env)->toplevel);
			$set(this, endPosTable, $nc(this->toplevel)->endPositions);
			$set(cdef, defs, normalizeDefs(cdef->defs, c));
			generateReferencesToPrunedTree(c);
			$var($Env, localEnv, $new($Env, cdef, $$new($Gen$GenContext)));
			$set(localEnv, toplevel, env->toplevel);
			$set(localEnv, enclClass, cdef);
			{
				$var($List, l, cdef->defs);
				for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
					genDef($cast($JCTree, l->head), localEnv);
				}
			}
			if ($nc(this->poolWriter)->size() > $PoolWriter::MAX_ENTRIES) {
				$init($CompilerProperties$Errors);
				$nc(this->log)->error($(cdef->pos()), $CompilerProperties$Errors::LimitPool);
				++this->nerrs;
			}
			if (this->nerrs != 0) {
				{
					$var($List, l, cdef->defs);
					for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
						$init($JCTree$Tag);
						if ($nc(($cast($JCTree, l->head)))->hasTag($JCTree$Tag::METHODDEF)) {
							$set($nc($nc(($cast($JCTree$JCMethodDecl, l->head)))->sym), code, nullptr);
						}
					}
				}
			}
			$set(cdef, defs, $List::nil());
			var$2 = this->nerrs == 0;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$set(this, attrEnv, nullptr);
			$set(this, env, nullptr);
			$set(this, toplevel, nullptr);
			$set(this, endPosTable, nullptr);
			this->nerrs = 0;
			$nc(this->qualifiedSymbolCache)->clear();
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

void clinit$Gen($Class* class$) {
	$assignStatic(Gen::genKey, $new($Context$Key));
}

Gen::Gen() {
}

$Class* Gen::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Gen$$Lambda$putClass::classInfo$.name)) {
			return Gen$$Lambda$putClass::load$(name, initialize);
		}
	}
	$loadClass(Gen, name, initialize, &_Gen_ClassInfo_, clinit$Gen, allocate$Gen);
	return class$;
}

$Class* Gen::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com