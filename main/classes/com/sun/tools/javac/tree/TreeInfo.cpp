#include <com/sun/tools/javac/tree/TreeInfo.h>

#include <com/sun/source/tree/CompilationUnitTree.h>
#include <com/sun/source/tree/ModifiersTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/Tree.h>
#include <com/sun/source/util/TreePath.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/tree/DCTree$DCDocComment.h>
#include <com/sun/tools/javac/tree/DocCommentTable.h>
#include <com/sun/tools/javac/tree/EndPosTable.h>
#include <com/sun/tools/javac/tree/JCTree$JCAnnotatedType.h>
#include <com/sun/tools/javac/tree/JCTree$JCAnnotation.h>
#include <com/sun/tools/javac/tree/JCTree$JCArrayAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCArrayTypeTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssign.h>
#include <com/sun/tools/javac/tree/JCTree$JCBindingPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCCase.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCCatch.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree$JCConditional.h>
#include <com/sun/tools/javac/tree/JCTree$JCEnhancedForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCErroneous.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpressionStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCGuardPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCIf.h>
#include <com/sun/tools/javac/tree/JCTree$JCInstanceOf.h>
#include <com/sun/tools/javac/tree/JCTree$JCLabeledStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCLiteral.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodInvocation.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCModuleDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCOperatorExpression$OperandPos.h>
#include <com/sun/tools/javac/tree/JCTree$JCOperatorExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCPackageDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCParens.h>
#include <com/sun/tools/javac/tree/JCTree$JCParenthesizedPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression$PolyKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCSwitch.h>
#include <com/sun/tools/javac/tree/JCTree$JCSwitchExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCSynchronized.h>
#include <com/sun/tools/javac/tree/JCTree$JCTry.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeApply.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeCast.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCWhileLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCWildcard.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo$1.h>
#include <com/sun/tools/javac/tree/TreeInfo$1DiagScanner.h>
#include <com/sun/tools/javac/tree/TreeInfo$1PathFinder.h>
#include <com/sun/tools/javac/tree/TreeInfo$1Result.h>
#include <com/sun/tools/javac/tree/TreeInfo$2.h>
#include <com/sun/tools/javac/tree/TreeInfo$DeclScanner.h>
#include <com/sun/tools/javac/tree/TreeInfo$PatternPrimaryType.h>
#include <com/sun/tools/javac/tree/TreeInfo$PosKind.h>
#include <com/sun/tools/javac/tree/TreeInfo$TypeAnnotationFinder.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name$Table.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Position.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Optional.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Stream.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef AND
#undef AND_ASSIGNMENT
#undef ANNOTATION
#undef APPLY
#undef ASSIGN
#undef BITWISE_COMPLEMENT
#undef BLOCK
#undef BOOLEAN
#undef BOT
#undef CLASSDEF
#undef CONDITIONAL_AND
#undef CONDITIONAL_OR
#undef DIVIDE
#undef DIVIDE_ASSIGNMENT
#undef EQUAL_TO
#undef ERR
#undef EXEC
#undef EXPORTS
#undef GREATER_THAN
#undef GREATER_THAN_EQUAL
#undef IDENT
#undef LABELLED
#undef LEFT
#undef LEFT_SHIFT
#undef LEFT_SHIFT_ASSIGNMENT
#undef LESS_THAN
#undef LESS_THAN_EQUAL
#undef LITERAL
#undef LOGICAL_COMPLEMENT
#undef METHODDEF
#undef MINUS
#undef MINUS_ASSIGNMENT
#undef MODULEDEF
#undef MULTIPLY
#undef MULTIPLY_ASSIGNMENT
#undef NOPOS
#undef NOT_EQUAL_TO
#undef OPENS
#undef OR
#undef OR_ASSIGNMENT
#undef OTHER
#undef PARENS
#undef PCK
#undef PLUS
#undef PLUS_ASSIGNMENT
#undef POSTFIX_DECREMENT
#undef POSTFIX_INCREMENT
#undef PREFIX_DECREMENT
#undef PREFIX_INCREMENT
#undef RECORD
#undef REMAINDER
#undef REMAINDER_ASSIGNMENT
#undef RIGHT
#undef RIGHT_SHIFT
#undef RIGHT_SHIFT_ASSIGNMENT
#undef SELECT
#undef SOURCE
#undef SWITCH
#undef SWITCH_EXPRESSION
#undef SYNCHRONIZED
#undef TOPLEVEL
#undef TRY
#undef TYP
#undef TYPEARRAY
#undef TYPEUNION
#undef TYPE_ANNOTATION
#undef UNARY_MINUS
#undef UNARY_PLUS
#undef UNSIGNED_RIGHT_SHIFT
#undef UNSIGNED_RIGHT_SHIFT_ASSIGNMENT
#undef VARDEF
#undef XOR
#undef XOR_ASSIGNMENT

using $CompilationUnitTree = ::com::sun::source::tree::CompilationUnitTree;
using $Tree = ::com::sun::source::tree::Tree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreePath = ::com::sun::source::util::TreePath;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Env = ::com::sun::tools::javac::comp::Env;
using $DCTree$DCDocComment = ::com::sun::tools::javac::tree::DCTree$DCDocComment;
using $DocCommentTable = ::com::sun::tools::javac::tree::DocCommentTable;
using $EndPosTable = ::com::sun::tools::javac::tree::EndPosTable;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCAnnotatedType = ::com::sun::tools::javac::tree::JCTree$JCAnnotatedType;
using $JCTree$JCAnnotation = ::com::sun::tools::javac::tree::JCTree$JCAnnotation;
using $JCTree$JCArrayAccess = ::com::sun::tools::javac::tree::JCTree$JCArrayAccess;
using $JCTree$JCArrayTypeTree = ::com::sun::tools::javac::tree::JCTree$JCArrayTypeTree;
using $JCTree$JCAssign = ::com::sun::tools::javac::tree::JCTree$JCAssign;
using $JCTree$JCBindingPattern = ::com::sun::tools::javac::tree::JCTree$JCBindingPattern;
using $JCTree$JCBlock = ::com::sun::tools::javac::tree::JCTree$JCBlock;
using $JCTree$JCCase = ::com::sun::tools::javac::tree::JCTree$JCCase;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCCatch = ::com::sun::tools::javac::tree::JCTree$JCCatch;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $JCTree$JCConditional = ::com::sun::tools::javac::tree::JCTree$JCConditional;
using $JCTree$JCEnhancedForLoop = ::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop;
using $JCTree$JCErroneous = ::com::sun::tools::javac::tree::JCTree$JCErroneous;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCExpressionStatement = ::com::sun::tools::javac::tree::JCTree$JCExpressionStatement;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCForLoop = ::com::sun::tools::javac::tree::JCTree$JCForLoop;
using $JCTree$JCGuardPattern = ::com::sun::tools::javac::tree::JCTree$JCGuardPattern;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCIf = ::com::sun::tools::javac::tree::JCTree$JCIf;
using $JCTree$JCInstanceOf = ::com::sun::tools::javac::tree::JCTree$JCInstanceOf;
using $JCTree$JCLabeledStatement = ::com::sun::tools::javac::tree::JCTree$JCLabeledStatement;
using $JCTree$JCLiteral = ::com::sun::tools::javac::tree::JCTree$JCLiteral;
using $JCTree$JCMemberReference = ::com::sun::tools::javac::tree::JCTree$JCMemberReference;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCMethodInvocation = ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCModuleDecl = ::com::sun::tools::javac::tree::JCTree$JCModuleDecl;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCOperatorExpression = ::com::sun::tools::javac::tree::JCTree$JCOperatorExpression;
using $JCTree$JCOperatorExpression$OperandPos = ::com::sun::tools::javac::tree::JCTree$JCOperatorExpression$OperandPos;
using $JCTree$JCPackageDecl = ::com::sun::tools::javac::tree::JCTree$JCPackageDecl;
using $JCTree$JCParens = ::com::sun::tools::javac::tree::JCTree$JCParens;
using $JCTree$JCParenthesizedPattern = ::com::sun::tools::javac::tree::JCTree$JCParenthesizedPattern;
using $JCTree$JCPattern = ::com::sun::tools::javac::tree::JCTree$JCPattern;
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
using $JCTree$JCPolyExpression$PolyKind = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression$PolyKind;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$JCSwitch = ::com::sun::tools::javac::tree::JCTree$JCSwitch;
using $JCTree$JCSwitchExpression = ::com::sun::tools::javac::tree::JCTree$JCSwitchExpression;
using $JCTree$JCSynchronized = ::com::sun::tools::javac::tree::JCTree$JCSynchronized;
using $JCTree$JCTry = ::com::sun::tools::javac::tree::JCTree$JCTry;
using $JCTree$JCTypeApply = ::com::sun::tools::javac::tree::JCTree$JCTypeApply;
using $JCTree$JCTypeCast = ::com::sun::tools::javac::tree::JCTree$JCTypeCast;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$JCWhileLoop = ::com::sun::tools::javac::tree::JCTree$JCWhileLoop;
using $JCTree$JCWildcard = ::com::sun::tools::javac::tree::JCTree$JCWildcard;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $TreeInfo$1 = ::com::sun::tools::javac::tree::TreeInfo$1;
using $TreeInfo$1DiagScanner = ::com::sun::tools::javac::tree::TreeInfo$1DiagScanner;
using $TreeInfo$1PathFinder = ::com::sun::tools::javac::tree::TreeInfo$1PathFinder;
using $TreeInfo$1Result = ::com::sun::tools::javac::tree::TreeInfo$1Result;
using $TreeInfo$2 = ::com::sun::tools::javac::tree::TreeInfo$2;
using $TreeInfo$DeclScanner = ::com::sun::tools::javac::tree::TreeInfo$DeclScanner;
using $TreeInfo$PatternPrimaryType = ::com::sun::tools::javac::tree::TreeInfo$PatternPrimaryType;
using $TreeInfo$PosKind = ::com::sun::tools::javac::tree::TreeInfo$PosKind;
using $TreeInfo$TypeAnnotationFinder = ::com::sun::tools::javac::tree::TreeInfo$TypeAnnotationFinder;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $Name$Table = ::com::sun::tools::javac::util::Name$Table;
using $Names = ::com::sun::tools::javac::util::Names;
using $Position = ::com::sun::tools::javac::util::Position;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $Optional = ::java::util::Optional;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Collector = ::java::util::stream::Collector;
using $Stream = ::java::util::stream::Stream;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class TreeInfo$$Lambda$lambda$recordFields$0 : public $Predicate {
	$class(TreeInfo$$Lambda$lambda$recordFields$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* t) override {
		 return TreeInfo::lambda$recordFields$0($cast($JCTree, t));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TreeInfo$$Lambda$lambda$recordFields$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TreeInfo$$Lambda$lambda$recordFields$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TreeInfo$$Lambda$lambda$recordFields$0::*)()>(&TreeInfo$$Lambda$lambda$recordFields$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo TreeInfo$$Lambda$lambda$recordFields$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.tree.TreeInfo$$Lambda$lambda$recordFields$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* TreeInfo$$Lambda$lambda$recordFields$0::load$($String* name, bool initialize) {
	$loadClass(TreeInfo$$Lambda$lambda$recordFields$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TreeInfo$$Lambda$lambda$recordFields$0::class$ = nullptr;

class TreeInfo$$Lambda$lambda$recordFields$1$1 : public $Function {
	$class(TreeInfo$$Lambda$lambda$recordFields$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* t) override {
		 return $of(TreeInfo::lambda$recordFields$1($cast($JCTree, t)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TreeInfo$$Lambda$lambda$recordFields$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TreeInfo$$Lambda$lambda$recordFields$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TreeInfo$$Lambda$lambda$recordFields$1$1::*)()>(&TreeInfo$$Lambda$lambda$recordFields$1$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo TreeInfo$$Lambda$lambda$recordFields$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.tree.TreeInfo$$Lambda$lambda$recordFields$1$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* TreeInfo$$Lambda$lambda$recordFields$1$1::load$($String* name, bool initialize) {
	$loadClass(TreeInfo$$Lambda$lambda$recordFields$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TreeInfo$$Lambda$lambda$recordFields$1$1::class$ = nullptr;

class TreeInfo$$Lambda$lambda$recordFields$2$2 : public $Predicate {
	$class(TreeInfo$$Lambda$lambda$recordFields$2$2, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* vd) override {
		 return TreeInfo::lambda$recordFields$2($cast($JCTree$JCVariableDecl, vd));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TreeInfo$$Lambda$lambda$recordFields$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TreeInfo$$Lambda$lambda$recordFields$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TreeInfo$$Lambda$lambda$recordFields$2$2::*)()>(&TreeInfo$$Lambda$lambda$recordFields$2$2::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo TreeInfo$$Lambda$lambda$recordFields$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.tree.TreeInfo$$Lambda$lambda$recordFields$2$2",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* TreeInfo$$Lambda$lambda$recordFields$2$2::load$($String* name, bool initialize) {
	$loadClass(TreeInfo$$Lambda$lambda$recordFields$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TreeInfo$$Lambda$lambda$recordFields$2$2::class$ = nullptr;

class TreeInfo$$Lambda$lambda$recordFieldTypes$3$3 : public $Function {
	$class(TreeInfo$$Lambda$lambda$recordFieldTypes$3$3, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* vd) override {
		 return $of(TreeInfo::lambda$recordFieldTypes$3($cast($JCTree$JCVariableDecl, vd)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TreeInfo$$Lambda$lambda$recordFieldTypes$3$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TreeInfo$$Lambda$lambda$recordFieldTypes$3$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TreeInfo$$Lambda$lambda$recordFieldTypes$3$3::*)()>(&TreeInfo$$Lambda$lambda$recordFieldTypes$3$3::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo TreeInfo$$Lambda$lambda$recordFieldTypes$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.tree.TreeInfo$$Lambda$lambda$recordFieldTypes$3$3",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* TreeInfo$$Lambda$lambda$recordFieldTypes$3$3::load$($String* name, bool initialize) {
	$loadClass(TreeInfo$$Lambda$lambda$recordFieldTypes$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TreeInfo$$Lambda$lambda$recordFieldTypes$3$3::class$ = nullptr;

class TreeInfo$$Lambda$lambda$diagnosticPositionFor$4$4 : public $Function {
	$class(TreeInfo$$Lambda$lambda$diagnosticPositionFor$4$4, $NO_CLASS_INIT, $Function)
public:
	void init$($Symbol* sym) {
		$set(this, sym, sym);
	}
	virtual $Object* apply(Object$* t) override {
		 return $of(TreeInfo::lambda$diagnosticPositionFor$4(sym, $cast($JCTree, t)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TreeInfo$$Lambda$lambda$diagnosticPositionFor$4$4>());
	}
	$Symbol* sym = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TreeInfo$$Lambda$lambda$diagnosticPositionFor$4$4::fieldInfos[2] = {
	{"sym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $field(TreeInfo$$Lambda$lambda$diagnosticPositionFor$4$4, sym)},
	{}
};
$MethodInfo TreeInfo$$Lambda$lambda$diagnosticPositionFor$4$4::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(TreeInfo$$Lambda$lambda$diagnosticPositionFor$4$4::*)($Symbol*)>(&TreeInfo$$Lambda$lambda$diagnosticPositionFor$4$4::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo TreeInfo$$Lambda$lambda$diagnosticPositionFor$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.tree.TreeInfo$$Lambda$lambda$diagnosticPositionFor$4$4",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* TreeInfo$$Lambda$lambda$diagnosticPositionFor$4$4::load$($String* name, bool initialize) {
	$loadClass(TreeInfo$$Lambda$lambda$diagnosticPositionFor$4$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TreeInfo$$Lambda$lambda$diagnosticPositionFor$4$4::class$ = nullptr;

class TreeInfo$$Lambda$lambda$diagnosticPositionFor$5$5 : public $Predicate {
	$class(TreeInfo$$Lambda$lambda$diagnosticPositionFor$5$5, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* t) override {
		 return TreeInfo::lambda$diagnosticPositionFor$5($cast($JCDiagnostic$DiagnosticPosition, t));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TreeInfo$$Lambda$lambda$diagnosticPositionFor$5$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TreeInfo$$Lambda$lambda$diagnosticPositionFor$5$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TreeInfo$$Lambda$lambda$diagnosticPositionFor$5$5::*)()>(&TreeInfo$$Lambda$lambda$diagnosticPositionFor$5$5::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo TreeInfo$$Lambda$lambda$diagnosticPositionFor$5$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.tree.TreeInfo$$Lambda$lambda$diagnosticPositionFor$5$5",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* TreeInfo$$Lambda$lambda$diagnosticPositionFor$5$5::load$($String* name, bool initialize) {
	$loadClass(TreeInfo$$Lambda$lambda$diagnosticPositionFor$5$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TreeInfo$$Lambda$lambda$diagnosticPositionFor$5$5::class$ = nullptr;

class TreeInfo$$Lambda$lambda$isErrorEnumSwitch$6$6 : public $Function {
	$class(TreeInfo$$Lambda$lambda$isErrorEnumSwitch$6$6, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* c) override {
		 return $of(TreeInfo::lambda$isErrorEnumSwitch$6($cast($JCTree$JCCase, c)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TreeInfo$$Lambda$lambda$isErrorEnumSwitch$6$6>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TreeInfo$$Lambda$lambda$isErrorEnumSwitch$6$6::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TreeInfo$$Lambda$lambda$isErrorEnumSwitch$6$6::*)()>(&TreeInfo$$Lambda$lambda$isErrorEnumSwitch$6$6::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo TreeInfo$$Lambda$lambda$isErrorEnumSwitch$6$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.tree.TreeInfo$$Lambda$lambda$isErrorEnumSwitch$6$6",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* TreeInfo$$Lambda$lambda$isErrorEnumSwitch$6$6::load$($String* name, bool initialize) {
	$loadClass(TreeInfo$$Lambda$lambda$isErrorEnumSwitch$6$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TreeInfo$$Lambda$lambda$isErrorEnumSwitch$6$6::class$ = nullptr;

class TreeInfo$$Lambda$lambda$isErrorEnumSwitch$7$7 : public $Predicate {
	$class(TreeInfo$$Lambda$lambda$isErrorEnumSwitch$7$7, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* p) override {
		 return TreeInfo::lambda$isErrorEnumSwitch$7($cast($JCTree$JCCaseLabel, p));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TreeInfo$$Lambda$lambda$isErrorEnumSwitch$7$7>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TreeInfo$$Lambda$lambda$isErrorEnumSwitch$7$7::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TreeInfo$$Lambda$lambda$isErrorEnumSwitch$7$7::*)()>(&TreeInfo$$Lambda$lambda$isErrorEnumSwitch$7$7::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo TreeInfo$$Lambda$lambda$isErrorEnumSwitch$7$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.tree.TreeInfo$$Lambda$lambda$isErrorEnumSwitch$7$7",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* TreeInfo$$Lambda$lambda$isErrorEnumSwitch$7$7::load$($String* name, bool initialize) {
	$loadClass(TreeInfo$$Lambda$lambda$isErrorEnumSwitch$7$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TreeInfo$$Lambda$lambda$isErrorEnumSwitch$7$7::class$ = nullptr;

$FieldInfo _TreeInfo_FieldInfo_[] = {
	{"notExpression", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TreeInfo, notExpression)},
	{"noPrec", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TreeInfo, noPrec)},
	{"assignPrec", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TreeInfo, assignPrec)},
	{"assignopPrec", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TreeInfo, assignopPrec)},
	{"condPrec", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TreeInfo, condPrec)},
	{"orPrec", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TreeInfo, orPrec)},
	{"andPrec", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TreeInfo, andPrec)},
	{"bitorPrec", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TreeInfo, bitorPrec)},
	{"bitxorPrec", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TreeInfo, bitxorPrec)},
	{"bitandPrec", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TreeInfo, bitandPrec)},
	{"eqPrec", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TreeInfo, eqPrec)},
	{"ordPrec", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TreeInfo, ordPrec)},
	{"shiftPrec", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TreeInfo, shiftPrec)},
	{"addPrec", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TreeInfo, addPrec)},
	{"mulPrec", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TreeInfo, mulPrec)},
	{"prefixPrec", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TreeInfo, prefixPrec)},
	{"postfixPrec", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TreeInfo, postfixPrec)},
	{"precCount", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TreeInfo, precCount)},
	{}
};

$MethodInfo _TreeInfo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TreeInfo::*)()>(&TreeInfo::init$))},
	{"args", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCExpression;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($JCTree*)>(&TreeInfo::args))},
	{"calledMethodName", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Name*(*)($JCTree*)>(&TreeInfo::calledMethodName))},
	{"containsTypeAnnotation", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($JCTree*)>(&TreeInfo::containsTypeAnnotation))},
	{"declarationFor", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCTree*(*)($Symbol*,$JCTree*)>(&TreeInfo::declarationFor))},
	{"diagEndPos", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$DiagnosticPosition*(*)($JCTree*)>(&TreeInfo::diagEndPos))},
	{"diagnosticPositionFor", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$DiagnosticPosition*(*)($Symbol*,$JCTree*)>(&TreeInfo::diagnosticPositionFor))},
	{"diagnosticPositionFor", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/tree/JCTree;Z)Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$DiagnosticPosition*(*)($Symbol*,$JCTree*,bool)>(&TreeInfo::diagnosticPositionFor))},
	{"diagnosticPositionFor", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/List<+Lcom/sun/tools/javac/tree/JCTree;>;)Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$DiagnosticPosition*(*)($Symbol*,$List*)>(&TreeInfo::diagnosticPositionFor))},
	{"endPos", "(Lcom/sun/tools/javac/tree/JCTree;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($JCTree*)>(&TreeInfo::endPos))},
	{"finalizerPos", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/TreeInfo$PosKind;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($JCTree*,$TreeInfo$PosKind*)>(&TreeInfo::finalizerPos))},
	{"firstConstructorCall", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCTree$JCMethodInvocation*(*)($JCTree*)>(&TreeInfo::firstConstructorCall))},
	{"firstFlag", "(J)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&TreeInfo::firstFlag))},
	{"firstStatPos", "(Lcom/sun/tools/javac/tree/JCTree;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($JCTree*)>(&TreeInfo::firstStatPos))},
	{"flagNames", "(J)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(int64_t)>(&TreeInfo::flagNames))},
	{"flags", "(Lcom/sun/tools/javac/tree/JCTree;)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)($JCTree*)>(&TreeInfo::flags))},
	{"fullName", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Name*(*)($JCTree*)>(&TreeInfo::fullName))},
	{"getCommentText", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree;)Ljava/lang/String;", "(Lcom/sun/tools/javac/comp/Env<*>;Lcom/sun/tools/javac/tree/JCTree;)Ljava/lang/String;", $PUBLIC | $STATIC, $method(static_cast<$String*(*)($Env*,$JCTree*)>(&TreeInfo::getCommentText))},
	{"getCommentTree", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/DCTree$DCDocComment;", "(Lcom/sun/tools/javac/comp/Env<*>;Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/DCTree$DCDocComment;", $PUBLIC | $STATIC, $method(static_cast<$DCTree$DCDocComment*(*)($Env*,$JCTree*)>(&TreeInfo::getCommentTree))},
	{"getConstructorInvocationName", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/Names;)Lcom/sun/tools/javac/util/Name;", "(Lcom/sun/tools/javac/util/List<+Lcom/sun/tools/javac/tree/JCTree;>;Lcom/sun/tools/javac/util/Names;)Lcom/sun/tools/javac/util/Name;", $PUBLIC | $STATIC, $method(static_cast<$Name*(*)($List*,$Names*)>(&TreeInfo::getConstructorInvocationName))},
	{"getEndPos", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/EndPosTable;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($JCTree*,$EndPosTable*)>(&TreeInfo::getEndPos))},
	{"getModifiers", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree$JCModifiers;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCTree$JCModifiers*(*)($JCTree*)>(&TreeInfo::getModifiers))},
	{"getModule", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)Lcom/sun/tools/javac/tree/JCTree$JCModuleDecl;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCTree$JCModuleDecl*(*)($JCTree$JCCompilationUnit*)>(&TreeInfo::getModule))},
	{"getStartPos", "(Lcom/sun/tools/javac/tree/JCTree;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($JCTree*)>(&TreeInfo::getStartPos))},
	{"hasConstructors", "(Lcom/sun/tools/javac/util/List;)Z", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;)Z", $PUBLIC | $STATIC, $method(static_cast<bool(*)($List*)>(&TreeInfo::hasConstructors))},
	{"innermostType", "(Lcom/sun/tools/javac/tree/JCTree;Z)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCTree*(*)($JCTree*,bool)>(&TreeInfo::innermostType))},
	{"isCanonicalConstructor", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($JCTree*)>(&TreeInfo::isCanonicalConstructor))},
	{"isCompactConstructor", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($JCTree*)>(&TreeInfo::isCompactConstructor))},
	{"isConstructor", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($JCTree*)>(&TreeInfo::isConstructor))},
	{"isDeclaration", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($JCTree*)>(&TreeInfo::isDeclaration))},
	{"isDiamond", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($JCTree*)>(&TreeInfo::isDiamond))},
	{"isEnumInit", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($JCTree*)>(&TreeInfo::isEnumInit))},
	{"isErrorEnumSwitch", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;)Z", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCase;>;)Z", $PUBLIC | $STATIC, $method(static_cast<bool(*)($JCTree$JCExpression*,$List*)>(&TreeInfo::isErrorEnumSwitch))},
	{"isExpressionStatement", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($JCTree$JCExpression*)>(&TreeInfo::isExpressionStatement))},
	{"isIdentOrThisDotIdent", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($JCTree*)>(&TreeInfo::isIdentOrThisDotIdent))},
	{"isInAnnotation", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree;)Z", "(Lcom/sun/tools/javac/comp/Env<*>;Lcom/sun/tools/javac/tree/JCTree;)Z", $PUBLIC | $STATIC, $method(static_cast<bool(*)($Env*,$JCTree*)>(&TreeInfo::isInAnnotation))},
	{"isInitialConstructor", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($JCTree*)>(&TreeInfo::isInitialConstructor))},
	{"isModuleInfo", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($JCTree$JCCompilationUnit*)>(&TreeInfo::isModuleInfo))},
	{"isMultiCatch", "(Lcom/sun/tools/javac/tree/JCTree$JCCatch;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($JCTree$JCCatch*)>(&TreeInfo::isMultiCatch))},
	{"isNull", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($JCTree*)>(&TreeInfo::isNull))},
	{"isPackageInfo", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($JCTree$JCCompilationUnit*)>(&TreeInfo::isPackageInfo))},
	{"isReceiverParam", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($JCTree*)>(&TreeInfo::isReceiverParam))},
	{"isSelfCall", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($JCTree*)>(&TreeInfo::isSelfCall))},
	{"isStatement", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($JCTree*)>(&TreeInfo::isStatement))},
	{"isStaticSelector", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/Names;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($JCTree*,$Names*)>(&TreeInfo::isStaticSelector))},
	{"isStaticSym", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($JCTree*)>(&TreeInfo::isStaticSym))},
	{"isSuperCall", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($JCTree*)>(&TreeInfo::isSuperCall))},
	{"isSyntheticInit", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($JCTree*)>(&TreeInfo::isSyntheticInit))},
	{"isThisQualifier", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($JCTree*)>(&TreeInfo::isThisQualifier))},
	{"lambda$diagnosticPositionFor$4", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$JCDiagnostic$DiagnosticPosition*(*)($Symbol*,$JCTree*)>(&TreeInfo::lambda$diagnosticPositionFor$4))},
	{"lambda$diagnosticPositionFor$5", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($JCDiagnostic$DiagnosticPosition*)>(&TreeInfo::lambda$diagnosticPositionFor$5))},
	{"lambda$isErrorEnumSwitch$6", "(Lcom/sun/tools/javac/tree/JCTree$JCCase;)Ljava/util/stream/Stream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Stream*(*)($JCTree$JCCase*)>(&TreeInfo::lambda$isErrorEnumSwitch$6))},
	{"lambda$isErrorEnumSwitch$7", "(Lcom/sun/tools/javac/tree/JCTree$JCCaseLabel;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($JCTree$JCCaseLabel*)>(&TreeInfo::lambda$isErrorEnumSwitch$7))},
	{"lambda$recordFieldTypes$3", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Type*(*)($JCTree$JCVariableDecl*)>(&TreeInfo::lambda$recordFieldTypes$3))},
	{"lambda$recordFields$0", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($JCTree*)>(&TreeInfo::lambda$recordFields$0))},
	{"lambda$recordFields$1", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$JCTree$JCVariableDecl*(*)($JCTree*)>(&TreeInfo::lambda$recordFields$1))},
	{"lambda$recordFields$2", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($JCTree$JCVariableDecl*)>(&TreeInfo::lambda$recordFields$2))},
	{"name", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Name*(*)($JCTree*)>(&TreeInfo::name))},
	{"nonstaticSelect", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($JCTree*)>(&TreeInfo::nonstaticSelect))},
	{"opPrec", "(Lcom/sun/tools/javac/tree/JCTree$Tag;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($JCTree$Tag*)>(&TreeInfo::opPrec))},
	{"pathFor", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($JCTree*,$JCTree$JCCompilationUnit*)>(&TreeInfo::pathFor))},
	{"positionFor", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/tree/JCTree;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($Symbol*,$JCTree*)>(&TreeInfo::positionFor))},
	{"primaryPatternTree", "(Lcom/sun/tools/javac/tree/JCTree$JCPattern;)Lcom/sun/tools/javac/tree/JCTree$JCBindingPattern;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCTree$JCBindingPattern*(*)($JCTree$JCPattern*)>(&TreeInfo::primaryPatternTree))},
	{"primaryPatternType", "(Lcom/sun/tools/javac/tree/JCTree$JCPattern;)Lcom/sun/tools/javac/tree/TreeInfo$PatternPrimaryType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TreeInfo$PatternPrimaryType*(*)($JCTree$JCPattern*)>(&TreeInfo::primaryPatternType))},
	{"recordFieldTypes", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($JCTree$JCClassDecl*)>(&TreeInfo::recordFieldTypes))},
	{"recordFields", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($JCTree$JCClassDecl*)>(&TreeInfo::recordFields))},
	{"referencedStatement", "(Lcom/sun/tools/javac/tree/JCTree$JCLabeledStatement;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCTree*(*)($JCTree$JCLabeledStatement*)>(&TreeInfo::referencedStatement))},
	{"scopeFor", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PUBLIC | $STATIC, $method(static_cast<$Env*(*)($JCTree*,$JCTree$JCCompilationUnit*)>(&TreeInfo::scopeFor))},
	{"scopeFor", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;)Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PUBLIC | $STATIC, $method(static_cast<$Env*(*)($List*)>(&TreeInfo::scopeFor))},
	{"setPolyKind", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree$JCPolyExpression$PolyKind;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JCTree*,$JCTree$JCPolyExpression$PolyKind*)>(&TreeInfo::setPolyKind))},
	{"setSymbol", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JCTree*,$Symbol*)>(&TreeInfo::setSymbol))},
	{"setVarargsElement", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JCTree*,$Type*)>(&TreeInfo::setVarargsElement))},
	{"skipParens", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCTree$JCExpression*(*)($JCTree$JCExpression*)>(&TreeInfo::skipParens))},
	{"skipParens", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCTree*(*)($JCTree*)>(&TreeInfo::skipParens))},
	{"symbol", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Symbol*(*)($JCTree*)>(&TreeInfo::symbol))},
	{"symbolFor", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Symbol*(*)($JCTree*)>(&TreeInfo::symbolFor))},
	{"symbolForImpl", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Symbol*(*)($JCTree*)>(&TreeInfo::symbolForImpl))},
	{"tagToKind", "(Lcom/sun/tools/javac/tree/JCTree$Tag;)Lcom/sun/source/tree/Tree$Kind;", nullptr, $STATIC, $method(static_cast<$Tree$Kind*(*)($JCTree$Tag*)>(&TreeInfo::tagToKind))},
	{"typeIn", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCTree$JCExpression*(*)($JCTree$JCExpression*)>(&TreeInfo::typeIn))},
	{"types", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<+Lcom/sun/tools/javac/tree/JCTree;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($List*)>(&TreeInfo::types))},
	{}
};

$InnerClassInfo _TreeInfo_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.TreeInfo$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.tree.TreeInfo$PatternPrimaryType", "com.sun.tools.javac.tree.TreeInfo", "PatternPrimaryType", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.tools.javac.tree.TreeInfo$TypeAnnotationFinder", "com.sun.tools.javac.tree.TreeInfo", "TypeAnnotationFinder", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.tree.TreeInfo$DeclScanner", "com.sun.tools.javac.tree.TreeInfo", "DeclScanner", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.tree.TreeInfo$PosKind", "com.sun.tools.javac.tree.TreeInfo", "PosKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.tree.TreeInfo$1PathFinder", nullptr, "PathFinder", 0},
	{"com.sun.tools.javac.tree.TreeInfo$1Result", nullptr, "Result", 0},
	{"com.sun.tools.javac.tree.TreeInfo$1DiagScanner", nullptr, "DiagScanner", 0},
	{"com.sun.tools.javac.tree.TreeInfo$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TreeInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.TreeInfo",
	"java.lang.Object",
	nullptr,
	_TreeInfo_FieldInfo_,
	_TreeInfo_MethodInfo_,
	nullptr,
	nullptr,
	_TreeInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.TreeInfo$2,com.sun.tools.javac.tree.TreeInfo$PatternPrimaryType,com.sun.tools.javac.tree.TreeInfo$TypeAnnotationFinder,com.sun.tools.javac.tree.TreeInfo$DeclScanner,com.sun.tools.javac.tree.TreeInfo$PosKind,com.sun.tools.javac.tree.TreeInfo$1PathFinder,com.sun.tools.javac.tree.TreeInfo$1Result,com.sun.tools.javac.tree.TreeInfo$1DiagScanner,com.sun.tools.javac.tree.TreeInfo$1"
};

$Object* allocate$TreeInfo($Class* clazz) {
	return $of($alloc(TreeInfo));
}

void TreeInfo::init$() {
}

$List* TreeInfo::args($JCTree* t) {
	$init($TreeInfo$2);
	switch ($nc($TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(t)->getTag())))->ordinal())) {
	case 1:
		{
			return $nc(($cast($JCTree$JCMethodInvocation, t)))->args;
		}
	case 2:
		{
			return $nc(($cast($JCTree$JCNewClass, t)))->args;
		}
	default:
		{
			return nullptr;
		}
	}
}

bool TreeInfo::isConstructor($JCTree* tree) {
	$init($JCTree$Tag);
	if ($nc(tree)->hasTag($JCTree$Tag::METHODDEF)) {
		$var($Name, name, $nc(($cast($JCTree$JCMethodDecl, tree)))->name);
		return name == $nc($nc($nc(name)->table)->names)->init;
	} else {
		return false;
	}
}

bool TreeInfo::isCanonicalConstructor($JCTree* tree) {
	return isConstructor(tree) && ((int64_t)($nc($nc(($cast($JCTree$JCMethodDecl, tree)))->sym)->flags_field & (uint64_t)(int64_t)0x2000000000000000)) != 0;
}

bool TreeInfo::isCompactConstructor($JCTree* tree) {
	return isCanonicalConstructor(tree) && ((int64_t)($nc($nc(($cast($JCTree$JCMethodDecl, tree)))->sym)->flags_field & (uint64_t)(int64_t)0x0008000000000000)) != 0;
}

bool TreeInfo::isReceiverParam($JCTree* tree) {
	$init($JCTree$Tag);
	if ($nc(tree)->hasTag($JCTree$Tag::VARDEF)) {
		return $nc(($cast($JCTree$JCVariableDecl, tree)))->nameexpr != nullptr;
	} else {
		return false;
	}
}

bool TreeInfo::hasConstructors($List* trees) {
	{
		$var($List, l, trees);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			if (isConstructor($cast($JCTree, l->head))) {
				return true;
			}
		}
	}
	return false;
}

$Name* TreeInfo::getConstructorInvocationName($List* trees, $Names* names) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(trees)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree, tree, $cast($JCTree, i$->next()));
			{
				$init($JCTree$Tag);
				if ($nc(tree)->hasTag($JCTree$Tag::EXEC)) {
					$var($JCTree$JCExpressionStatement, stat, $cast($JCTree$JCExpressionStatement, tree));
					if ($nc(stat->expr)->hasTag($JCTree$Tag::APPLY)) {
						$var($JCTree$JCMethodInvocation, apply, $cast($JCTree$JCMethodInvocation, stat->expr));
						$var($Name, methName, TreeInfo::name($nc(apply)->meth));
						if (methName == $nc(names)->_this || methName == $nc(names)->_super) {
							return methName;
						}
					}
				}
			}
		}
	}
	return $nc(names)->empty;
}

bool TreeInfo::isMultiCatch($JCTree$JCCatch* catchClause) {
	$init($JCTree$Tag);
	return $nc($nc($nc(catchClause)->param)->vartype)->hasTag($JCTree$Tag::TYPEUNION);
}

bool TreeInfo::isSyntheticInit($JCTree* stat) {
	$useLocalCurrentObjectStackCache();
	$init($JCTree$Tag);
	if ($nc(stat)->hasTag($JCTree$Tag::EXEC)) {
		$var($JCTree$JCExpressionStatement, exec, $cast($JCTree$JCExpressionStatement, stat));
		if ($nc(exec->expr)->hasTag($JCTree$Tag::ASSIGN)) {
			$var($JCTree$JCAssign, assign, $cast($JCTree$JCAssign, exec->expr));
			if ($nc($nc(assign)->lhs)->hasTag($JCTree$Tag::SELECT)) {
				$var($JCTree$JCFieldAccess, select, $cast($JCTree$JCFieldAccess, assign->lhs));
				if ($nc(select)->sym != nullptr && ((int64_t)($nc(select->sym)->flags() & (uint64_t)(int64_t)4096)) != 0) {
					$var($Name, selected, name(select->selected));
					if (selected != nullptr && selected == $nc($nc(selected->table)->names)->_this) {
						return true;
					}
				}
			}
		}
	}
	return false;
}

$Name* TreeInfo::calledMethodName($JCTree* tree) {
	$useLocalCurrentObjectStackCache();
	$init($JCTree$Tag);
	if ($nc(tree)->hasTag($JCTree$Tag::EXEC)) {
		$var($JCTree$JCExpressionStatement, exec, $cast($JCTree$JCExpressionStatement, tree));
		if ($nc(exec->expr)->hasTag($JCTree$Tag::APPLY)) {
			$var($Name, mname, TreeInfo::name($nc(($cast($JCTree$JCMethodInvocation, exec->expr)))->meth));
			return mname;
		}
	}
	return nullptr;
}

bool TreeInfo::isSelfCall($JCTree* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Name, name, calledMethodName(tree));
	if (name != nullptr) {
		$var($Names, names, $nc(name->table)->names);
		return name == $nc(names)->_this || name == $nc(names)->_super;
	} else {
		return false;
	}
}

bool TreeInfo::isThisQualifier($JCTree* tree) {
	$useLocalCurrentObjectStackCache();
	$init($TreeInfo$2);
	switch ($nc($TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(tree)->getTag())))->ordinal())) {
	case 3:
		{
			return isThisQualifier($(skipParens(tree)));
		}
	case 4:
		{
			{
				$var($JCTree$JCIdent, id, $cast($JCTree$JCIdent, tree));
				return id->name == $nc($nc($nc(id->name)->table)->names)->_this;
			}
		}
	default:
		{
			return false;
		}
	}
}

bool TreeInfo::isIdentOrThisDotIdent($JCTree* tree) {
	$useLocalCurrentObjectStackCache();
	$init($TreeInfo$2);
	switch ($nc($TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(tree)->getTag())))->ordinal())) {
	case 3:
		{
			return isIdentOrThisDotIdent($(skipParens(tree)));
		}
	case 4:
		{
			return true;
		}
	case 5:
		{
			return isThisQualifier($nc(($cast($JCTree$JCFieldAccess, tree)))->selected);
		}
	default:
		{
			return false;
		}
	}
}

bool TreeInfo::isSuperCall($JCTree* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Name, name, calledMethodName(tree));
	if (name != nullptr) {
		$var($Names, names, $nc(name->table)->names);
		return name == $nc(names)->_super;
	} else {
		return false;
	}
}

$List* TreeInfo::recordFields($JCTree$JCClassDecl* tree) {
	$useLocalCurrentObjectStackCache();
	return $cast($List, $nc($($nc($($nc($($nc($($nc($nc(tree)->defs)->stream()))->filter(static_cast<$Predicate*>($$new(TreeInfo$$Lambda$lambda$recordFields$0)))))->map(static_cast<$Function*>($$new(TreeInfo$$Lambda$lambda$recordFields$1$1)))))->filter(static_cast<$Predicate*>($$new(TreeInfo$$Lambda$lambda$recordFields$2$2)))))->collect($($List::collector())));
}

$List* TreeInfo::recordFieldTypes($JCTree$JCClassDecl* tree) {
	$useLocalCurrentObjectStackCache();
	return $cast($List, $nc($($nc($($nc($(recordFields(tree)))->stream()))->map(static_cast<$Function*>($$new(TreeInfo$$Lambda$lambda$recordFieldTypes$3$3)))))->collect($($List::collector())));
}

bool TreeInfo::isInitialConstructor($JCTree* tree) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCMethodInvocation, app, firstConstructorCall(tree));
	if (app == nullptr) {
		return false;
	}
	$var($Name, meth, name($nc(app)->meth));
	return meth == nullptr || meth != $nc($nc($nc(meth)->table)->names)->_this;
}

$JCTree$JCMethodInvocation* TreeInfo::firstConstructorCall($JCTree* tree) {
	$useLocalCurrentObjectStackCache();
	$init($JCTree$Tag);
	if (!$nc(tree)->hasTag($JCTree$Tag::METHODDEF)) {
		return nullptr;
	}
	$var($JCTree$JCMethodDecl, md, $cast($JCTree$JCMethodDecl, tree));
	$var($Names, names, $nc($nc($nc(md)->name)->table)->names);
	if (md->name != $nc(names)->init) {
		return nullptr;
	}
	if (md->body == nullptr) {
		return nullptr;
	}
	$var($List, stats, $nc(md->body)->stats);
	while (true) {
		bool var$0 = $nc(stats)->nonEmpty();
		if (!(var$0 && isSyntheticInit($cast($JCTree, stats->head)))) {
			break;
		}
		{
			$assign(stats, stats->tail);
		}
	}
	if ($nc(stats)->isEmpty()) {
		return nullptr;
	}
	if (!$nc(($cast($JCTree$JCStatement, $nc(stats)->head)))->hasTag($JCTree$Tag::EXEC)) {
		return nullptr;
	}
	$var($JCTree$JCExpressionStatement, exec, $cast($JCTree$JCExpressionStatement, $nc(stats)->head));
	if (!$nc($nc(exec)->expr)->hasTag($JCTree$Tag::APPLY)) {
		return nullptr;
	}
	return $cast($JCTree$JCMethodInvocation, $nc(exec)->expr);
}

bool TreeInfo::isDiamond($JCTree* tree) {
	$useLocalCurrentObjectStackCache();
	$init($TreeInfo$2);
	switch ($nc($TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(tree)->getTag())))->ordinal())) {
	case 6:
		{
			return $nc($($cast($List, $nc(($cast($JCTree$JCTypeApply, tree)))->getTypeArguments())))->isEmpty();
		}
	case 2:
		{
			return isDiamond($nc(($cast($JCTree$JCNewClass, tree)))->clazz);
		}
	case 7:
		{
			return isDiamond($nc(($cast($JCTree$JCAnnotatedType, tree)))->underlyingType);
		}
	default:
		{
			return false;
		}
	}
}

bool TreeInfo::isEnumInit($JCTree* tree) {
	$init($TreeInfo$2);
	switch ($nc($TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(tree)->getTag())))->ordinal())) {
	case 8:
		{
			return ((int64_t)($nc($nc(($cast($JCTree$JCVariableDecl, tree)))->mods)->flags & (uint64_t)(int64_t)16384)) != 0;
		}
	default:
		{
			return false;
		}
	}
}

void TreeInfo::setPolyKind($JCTree* tree, $JCTree$JCPolyExpression$PolyKind* pkind) {
	$useLocalCurrentObjectStackCache();
	$init($TreeInfo$2);
	switch ($nc($TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(tree)->getTag())))->ordinal())) {
	case 1:
		{
			$set($nc($cast($JCTree$JCMethodInvocation, tree)), polyKind, pkind);
			break;
		}
	case 2:
		{
			$set($nc($cast($JCTree$JCNewClass, tree)), polyKind, pkind);
			break;
		}
	case 9:
		{
			$set($nc($cast($JCTree$JCMemberReference, tree)), refPolyKind, pkind);
			break;
		}
	default:
		{
			$throwNew($AssertionError, $of($$str({"Unexpected tree: "_s, tree})));
		}
	}
}

void TreeInfo::setVarargsElement($JCTree* tree, $Type* varargsElement) {
	$useLocalCurrentObjectStackCache();
	$init($TreeInfo$2);
	switch ($nc($TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(tree)->getTag())))->ordinal())) {
	case 1:
		{
			$set($nc($cast($JCTree$JCMethodInvocation, tree)), varargsElement, varargsElement);
			break;
		}
	case 2:
		{
			$set($nc($cast($JCTree$JCNewClass, tree)), varargsElement, varargsElement);
			break;
		}
	case 9:
		{
			$set($nc($cast($JCTree$JCMemberReference, tree)), varargsElement, varargsElement);
			break;
		}
	default:
		{
			$throwNew($AssertionError, $of($$str({"Unexpected tree: "_s, tree})));
		}
	}
}

bool TreeInfo::isExpressionStatement($JCTree$JCExpression* tree) {
	$init($TreeInfo$2);
	switch ($nc($TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(tree)->getTag())))->ordinal())) {
	case 10:
		{}
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
	case 1:
		{}
	case 2:
		{}
	case 26:
		{
			return true;
		}
	default:
		{
			return false;
		}
	}
}

bool TreeInfo::isStatement($JCTree* tree) {
	$init($JCTree$Tag);
	bool var$1 = ($instanceOf($JCTree$JCStatement, tree)) && !$nc(tree)->hasTag($JCTree$Tag::CLASSDEF);
	bool var$0 = var$1 && !tree->hasTag($JCTree$Tag::BLOCK);
	return var$0 && !tree->hasTag($JCTree$Tag::METHODDEF);
}

bool TreeInfo::isStaticSelector($JCTree* base, $Names* names) {
	$useLocalCurrentObjectStackCache();
	if (base == nullptr) {
		return false;
	}
	$init($TreeInfo$2);
	{
		$var($JCTree$JCIdent, id, nullptr)
		switch ($nc($TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(base)->getTag())))->ordinal())) {
		case 4:
			{
				$assign(id, $cast($JCTree$JCIdent, base));
				return $nc(id)->name != $nc(names)->_this && id->name != names->_super && isStaticSym(base);
			}
		case 5:
			{
				bool var$0 = isStaticSym(base);
				return var$0 && isStaticSelector($nc(($cast($JCTree$JCFieldAccess, base)))->selected, names);
			}
		case 6:
			{}
		case 27:
			{
				return true;
			}
		case 7:
			{
				return isStaticSelector($nc(($cast($JCTree$JCAnnotatedType, base)))->underlyingType, names);
			}
		default:
			{
				return false;
			}
		}
	}
}

bool TreeInfo::isStaticSym($JCTree* tree) {
	$var($Symbol, sym, symbol(tree));
	$init($Kinds$Kind);
	return ($nc(sym)->kind == $Kinds$Kind::TYP || $nc(sym)->kind == $Kinds$Kind::PCK);
}

bool TreeInfo::isNull($JCTree* tree) {
	$init($JCTree$Tag);
	if (!$nc(tree)->hasTag($JCTree$Tag::LITERAL)) {
		return false;
	}
	$var($JCTree$JCLiteral, lit, $cast($JCTree$JCLiteral, tree));
	$init($TypeTag);
	return ($nc(lit)->typetag == $TypeTag::BOT);
}

bool TreeInfo::isInAnnotation($Env* env, $JCTree* tree) {
	$useLocalCurrentObjectStackCache();
	$var($TreePath, tp, $TreePath::getPath(static_cast<$CompilationUnitTree*>($nc(env)->toplevel), static_cast<$Tree*>(tree)));
	if (tp != nullptr) {
		{
			$var($Iterator, i$, tp->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Tree, t, $cast($Tree, i$->next()));
				{
					$init($Tree$Kind);
					if ($nc(t)->getKind() == $Tree$Kind::ANNOTATION) {
						return true;
					}
				}
			}
		}
	}
	return false;
}

$String* TreeInfo::getCommentText($Env* env, $JCTree* tree) {
	$init($JCTree$Tag);
	$var($DocCommentTable, docComments, ($nc(tree)->hasTag($JCTree$Tag::TOPLEVEL)) ? $nc(($cast($JCTree$JCCompilationUnit, tree)))->docComments : $nc($nc(env)->toplevel)->docComments);
	return (docComments == nullptr) ? ($String*)nullptr : $nc(docComments)->getCommentText(tree);
}

$DCTree$DCDocComment* TreeInfo::getCommentTree($Env* env, $JCTree* tree) {
	$init($JCTree$Tag);
	$var($DocCommentTable, docComments, ($nc(tree)->hasTag($JCTree$Tag::TOPLEVEL)) ? $nc(($cast($JCTree$JCCompilationUnit, tree)))->docComments : $nc($nc(env)->toplevel)->docComments);
	return (docComments == nullptr) ? ($DCTree$DCDocComment*)nullptr : $nc(docComments)->getCommentTree(tree);
}

int32_t TreeInfo::firstStatPos($JCTree* tree) {
	$init($JCTree$Tag);
	bool var$0 = $nc(tree)->hasTag($JCTree$Tag::BLOCK);
	if (var$0 && $nc($nc(($cast($JCTree$JCBlock, tree)))->stats)->nonEmpty()) {
		return $nc(($cast($JCTree$JCStatement, $nc(($cast($JCTree$JCBlock, tree))->stats)->head)))->pos$;
	} else {
		return tree->pos$;
	}
}

int32_t TreeInfo::endPos($JCTree* tree) {
	$useLocalCurrentObjectStackCache();
	$init($JCTree$Tag);
	if ($nc(tree)->hasTag($JCTree$Tag::BLOCK) && $nc(($cast($JCTree$JCBlock, tree)))->endpos != $Position::NOPOS) {
		return ($cast($JCTree$JCBlock, tree))->endpos;
	} else {
		if (tree->hasTag($JCTree$Tag::SYNCHRONIZED)) {
			return endPos($nc(($cast($JCTree$JCSynchronized, tree)))->body);
		} else {
			if (tree->hasTag($JCTree$Tag::TRY)) {
				$var($JCTree$JCTry, t, $cast($JCTree$JCTry, tree));
				return endPos((t->finalizer != nullptr) ? static_cast<$JCTree*>(t->finalizer) : ($nc(t->catchers)->nonEmpty() ? static_cast<$JCTree*>($nc(($cast($JCTree$JCCatch, $($nc(t->catchers)->last()))))->body) : static_cast<$JCTree*>(t->body)));
			} else {
				if (tree->hasTag($JCTree$Tag::SWITCH) && $nc(($cast($JCTree$JCSwitch, tree)))->endpos != $Position::NOPOS) {
					return ($cast($JCTree$JCSwitch, tree))->endpos;
				} else {
					if (tree->hasTag($JCTree$Tag::SWITCH_EXPRESSION) && $nc(($cast($JCTree$JCSwitchExpression, tree)))->endpos != $Position::NOPOS) {
						return ($cast($JCTree$JCSwitchExpression, tree))->endpos;
					} else {
						return tree->pos$;
					}
				}
			}
		}
	}
}

int32_t TreeInfo::getStartPos($JCTree* tree) {
	$useLocalCurrentObjectStackCache();
	if (tree == nullptr) {
		return $Position::NOPOS;
	}
	$init($TreeInfo$2);
	switch ($nc($TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(tree)->getTag())))->ordinal())) {
	case 28:
		{
			{
				$var($JCTree$JCModuleDecl, md, $cast($JCTree$JCModuleDecl, tree));
				return $nc($nc(md->mods)->annotations)->isEmpty() ? md->pos$ : $nc(($cast($JCTree$JCAnnotation, $nc($nc(md->mods)->annotations)->head)))->pos$;
			}
		}
	case 29:
		{
			{
				$var($JCTree$JCPackageDecl, pd, $cast($JCTree$JCPackageDecl, tree));
				return $nc(pd->annotations)->isEmpty() ? pd->pos$ : $nc(($cast($JCTree$JCAnnotation, $nc(pd->annotations)->head)))->pos$;
			}
		}
	case 1:
		{
			return getStartPos($nc(($cast($JCTree$JCMethodInvocation, tree)))->meth);
		}
	case 14:
		{
			return getStartPos($nc(($cast($JCTree$JCAssign, tree)))->lhs);
		}
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
	case 30:
		{}
	case 31:
		{}
	case 32:
		{}
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
	case 12:
		{}
	case 13:
		{
			$init($JCTree$JCOperatorExpression$OperandPos);
			return getStartPos($($nc(($cast($JCTree$JCOperatorExpression, tree)))->getOperand($JCTree$JCOperatorExpression$OperandPos::LEFT)));
		}
	case 49:
		{
			{
				$var($JCTree$JCClassDecl, node, $cast($JCTree$JCClassDecl, tree));
				if ($nc(node->mods)->pos$ != $Position::NOPOS) {
					return $nc(node->mods)->pos$;
				}
				break;
			}
		}
	case 50:
		{
			return getStartPos($nc(($cast($JCTree$JCConditional, tree)))->cond);
		}
	case 51:
		{
			return getStartPos($nc(($cast($JCTree$JCExpressionStatement, tree)))->expr);
		}
	case 52:
		{
			return getStartPos($nc(($cast($JCTree$JCArrayAccess, tree)))->indexed);
		}
	case 53:
		{
			{
				$var($JCTree$JCMethodDecl, node, $cast($JCTree$JCMethodDecl, tree));
				if ($nc(node->mods)->pos$ != $Position::NOPOS) {
					return $nc(node->mods)->pos$;
				}
				if ($nc(node->typarams)->nonEmpty()) {
					return getStartPos($cast($JCTree, $nc(node->typarams)->head));
				}
				return node->restype == nullptr ? node->pos$ : getStartPos(node->restype);
			}
		}
	case 5:
		{
			return getStartPos($nc(($cast($JCTree$JCFieldAccess, tree)))->selected);
		}
	case 6:
		{
			return getStartPos($nc(($cast($JCTree$JCTypeApply, tree)))->clazz);
		}
	case 27:
		{
			return getStartPos($nc(($cast($JCTree$JCArrayTypeTree, tree)))->elemtype);
		}
	case 54:
		{
			return getStartPos($nc(($cast($JCTree$JCInstanceOf, tree)))->expr);
		}
	case 7:
		{
			{
				$var($JCTree$JCAnnotatedType, node, $cast($JCTree$JCAnnotatedType, tree));
				if ($nc(node->annotations)->nonEmpty()) {
					$init($JCTree$Tag);
					bool var$0 = $nc(node->underlyingType)->hasTag($JCTree$Tag::TYPEARRAY);
					if (var$0 || $nc(node->underlyingType)->hasTag($JCTree$Tag::SELECT)) {
						return getStartPos(node->underlyingType);
					} else {
						return getStartPos($cast($JCTree, $nc(node->annotations)->head));
					}
				} else {
					return getStartPos(node->underlyingType);
				}
			}
		}
	case 2:
		{
			{
				$var($JCTree$JCNewClass, node, $cast($JCTree$JCNewClass, tree));
				if (node->encl != nullptr) {
					return getStartPos(node->encl);
				}
				break;
			}
		}
	case 8:
		{
			{
				$var($JCTree$JCVariableDecl, node, $cast($JCTree$JCVariableDecl, tree));
				if (node->startPos != $Position::NOPOS) {
					return node->startPos;
				} else if ($nc(node->mods)->pos$ != $Position::NOPOS) {
					return $nc(node->mods)->pos$;
				} else if (node->vartype == nullptr || $nc(node->vartype)->pos$ == $Position::NOPOS) {
					return node->pos$;
				} else {
					return getStartPos(node->vartype);
				}
			}
		}
	case 55:
		{
			{
				$var($JCTree$JCBindingPattern, node, $cast($JCTree$JCBindingPattern, tree));
				return getStartPos(node->var);
			}
		}
	case 56:
		{
			{
				$var($JCTree$JCGuardPattern, node, $cast($JCTree$JCGuardPattern, tree));
				return getStartPos(node->patt);
			}
		}
	case 26:
		{
			{
				$var($JCTree$JCErroneous, node, $cast($JCTree$JCErroneous, tree));
				if (node->errs != nullptr && $nc(node->errs)->nonEmpty()) {
					return getStartPos($cast($JCTree, $nc(node->errs)->head));
				}
			}
		}
	}
	return tree->pos$;
}

int32_t TreeInfo::getEndPos($JCTree* tree, $EndPosTable* endPosTable) {
	$useLocalCurrentObjectStackCache();
	if (tree == nullptr) {
		return $Position::NOPOS;
	}
	if (endPosTable == nullptr) {
		return endPos(tree);
	}
	int32_t mapPos = $nc(endPosTable)->getEndPos(tree);
	if (mapPos != $Position::NOPOS) {
		return mapPos;
	}
	$init($TreeInfo$2);
	switch ($nc($TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(tree)->getTag())))->ordinal())) {
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
	case 30:
		{}
	case 31:
		{}
	case 32:
		{}
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
	case 57:
		{}
	case 58:
		{}
	case 59:
		{}
	case 60:
		{}
	case 10:
		{}
	case 11:
		{
			$init($JCTree$JCOperatorExpression$OperandPos);
			return getEndPos($($nc(($cast($JCTree$JCOperatorExpression, tree)))->getOperand($JCTree$JCOperatorExpression$OperandPos::RIGHT)), endPosTable);
		}
	case 61:
		{
			return getEndPos($cast($JCTree, $($nc($nc(($cast($JCTree$JCCase, tree)))->stats)->last())), endPosTable);
		}
	case 62:
		{
			return getEndPos($nc(($cast($JCTree$JCCatch, tree)))->body, endPosTable);
		}
	case 50:
		{
			return getEndPos($nc(($cast($JCTree$JCConditional, tree)))->falsepart, endPosTable);
		}
	case 63:
		{
			return getEndPos($nc(($cast($JCTree$JCForLoop, tree)))->body, endPosTable);
		}
	case 64:
		{
			return getEndPos($nc(($cast($JCTree$JCEnhancedForLoop, tree)))->body, endPosTable);
		}
	case 65:
		{
			{
				$var($JCTree$JCIf, node, $cast($JCTree$JCIf, tree));
				if (node->elsepart == nullptr) {
					return getEndPos(node->thenpart, endPosTable);
				} else {
					return getEndPos(node->elsepart, endPosTable);
				}
			}
		}
	case 66:
		{
			return getEndPos($nc(($cast($JCTree$JCLabeledStatement, tree)))->body, endPosTable);
		}
	case 67:
		{
			return getEndPos($cast($JCTree, $($nc($nc(($cast($JCTree$JCModifiers, tree)))->annotations)->last())), endPosTable);
		}
	case 68:
		{
			return getEndPos($nc(($cast($JCTree$JCSynchronized, tree)))->body, endPosTable);
		}
	case 69:
		{
			return getEndPos($cast($JCTree, $($nc($nc(($cast($JCTree$JCCompilationUnit, tree)))->defs)->last())), endPosTable);
		}
	case 70:
		{
			{
				$var($JCTree$JCTry, node, $cast($JCTree$JCTry, tree));
				if (node->finalizer != nullptr) {
					return getEndPos(node->finalizer, endPosTable);
				} else if (!$nc(node->catchers)->isEmpty()) {
					return getEndPos($cast($JCTree, $($nc(node->catchers)->last())), endPosTable);
				} else {
					return getEndPos(node->body, endPosTable);
				}
			}
		}
	case 71:
		{
			return getEndPos($nc(($cast($JCTree$JCWildcard, tree)))->inner, endPosTable);
		}
	case 72:
		{
			return getEndPos($nc(($cast($JCTree$JCTypeCast, tree)))->expr, endPosTable);
		}
	case 54:
		{
			return getEndPos($nc(($cast($JCTree$JCInstanceOf, tree)))->pattern, endPosTable);
		}
	case 73:
		{
			return getEndPos($nc(($cast($JCTree$JCWhileLoop, tree)))->body, endPosTable);
		}
	case 7:
		{
			return getEndPos($nc(($cast($JCTree$JCAnnotatedType, tree)))->underlyingType, endPosTable);
		}
	case 74:
		{
			{
				$var($JCTree$JCParenthesizedPattern, node, $cast($JCTree$JCParenthesizedPattern, tree));
				return getEndPos(node->pattern, endPosTable);
			}
		}
	case 56:
		{
			{
				$var($JCTree$JCGuardPattern, node, $cast($JCTree$JCGuardPattern, tree));
				return getEndPos(node->expr, endPosTable);
			}
		}
	case 26:
		{
			{
				$var($JCTree$JCErroneous, node, $cast($JCTree$JCErroneous, tree));
				if (node->errs != nullptr && $nc(node->errs)->nonEmpty()) {
					return getEndPos($cast($JCTree, $($nc(node->errs)->last())), endPosTable);
				}
			}
		}
	}
	return $Position::NOPOS;
}

$JCDiagnostic$DiagnosticPosition* TreeInfo::diagEndPos($JCTree* tree) {
	int32_t endPos = TreeInfo::endPos(tree);
	return $new($TreeInfo$1, tree, endPos);
}

int32_t TreeInfo::finalizerPos($JCTree* tree, $TreeInfo$PosKind* posKind) {
	$init($JCTree$Tag);
	if ($nc(tree)->hasTag($JCTree$Tag::TRY)) {
		$var($JCTree$JCTry, t, $cast($JCTree$JCTry, tree));
		$Assert::checkNonNull(t->finalizer);
		return $nc(posKind)->toPos(t->finalizer);
	} else {
		if (tree->hasTag($JCTree$Tag::SYNCHRONIZED)) {
			return endPos($nc(($cast($JCTree$JCSynchronized, tree)))->body);
		} else {
			$throwNew($AssertionError);
		}
	}
}

int32_t TreeInfo::positionFor($Symbol* sym, $JCTree* tree) {
	$var($JCTree, decl, declarationFor(sym, tree));
	return $nc(((decl != nullptr) ? decl : tree))->pos$;
}

$JCDiagnostic$DiagnosticPosition* TreeInfo::diagnosticPositionFor($Symbol* sym, $JCTree* tree) {
	return diagnosticPositionFor(sym, tree, false);
}

$JCDiagnostic$DiagnosticPosition* TreeInfo::diagnosticPositionFor($Symbol* sym, $JCTree* tree, bool returnNullIfNotFound) {
	$useLocalCurrentObjectStackCache();
	{
	}
	$var($TreeInfo$1DiagScanner, s, $new($TreeInfo$1DiagScanner, sym));
	$nc(tree)->accept(s);
	$var($JCTree, decl, s->result);
	if (decl == nullptr && returnNullIfNotFound) {
		return nullptr;
	}
	return $nc(((decl != nullptr) ? decl : tree))->pos();
}

$JCDiagnostic$DiagnosticPosition* TreeInfo::diagnosticPositionFor($Symbol* sym, $List* trees) {
	$useLocalCurrentObjectStackCache();
	return $cast($JCDiagnostic$DiagnosticPosition, $nc($($nc($($nc($($nc($($nc(trees)->stream()))->map(static_cast<$Function*>($$new(TreeInfo$$Lambda$lambda$diagnosticPositionFor$4$4, sym)))))->filter(static_cast<$Predicate*>($$new(TreeInfo$$Lambda$lambda$diagnosticPositionFor$5$5)))))->findFirst()))->get());
}

$JCTree* TreeInfo::declarationFor($Symbol* sym, $JCTree* tree) {
	$var($TreeInfo$DeclScanner, s, $new($TreeInfo$DeclScanner, sym));
	$nc(tree)->accept(s);
	return s->result;
}

$Env* TreeInfo::scopeFor($JCTree* node, $JCTree$JCCompilationUnit* unit) {
	return scopeFor($(pathFor(node, unit)));
}

$Env* TreeInfo::scopeFor($List* path) {
	$throwNew($UnsupportedOperationException, "not implemented yet"_s);
	$shouldNotReachHere();
}

$List* TreeInfo::pathFor($JCTree* node, $JCTree$JCCompilationUnit* unit) {
	{
	}
	{
	}
	try {
		$$new($TreeInfo$1PathFinder, node)->scan(static_cast<$JCTree*>(unit));
	} catch ($TreeInfo$1Result& result) {
		return result->path;
	}
	return $List::nil();
}

$JCTree* TreeInfo::referencedStatement($JCTree$JCLabeledStatement* tree) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree, t, tree);
	do {
	$assign(t, $nc(($cast($JCTree$JCLabeledStatement, t)))->body);
	$init($JCTree$Tag);
	} while ($nc(t)->hasTag($JCTree$Tag::LABELLED));
	$init($TreeInfo$2);
	switch ($nc($TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($(t->getTag())))->ordinal())) {
	case 75:
		{}
	case 73:
		{}
	case 63:
		{}
	case 64:
		{}
	case 76:
		{
			return t;
		}
	default:
		{
			return tree;
		}
	}
}

$JCTree$JCExpression* TreeInfo::skipParens($JCTree$JCExpression* tree$renamed) {
	$var($JCTree$JCExpression, tree, tree$renamed);
	$init($JCTree$Tag);
	while ($nc(tree)->hasTag($JCTree$Tag::PARENS)) {
		$assign(tree, $nc(($cast($JCTree$JCParens, tree)))->expr);
	}
	return tree;
}

$JCTree* TreeInfo::skipParens($JCTree* tree) {
	$init($JCTree$Tag);
	if ($nc(tree)->hasTag($JCTree$Tag::PARENS)) {
		return skipParens($cast($JCTree$JCParens, tree));
	} else {
		return tree;
	}
}

$List* TreeInfo::types($List* trees) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, ts, $new($ListBuffer));
	{
		$var($List, l, trees);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			ts->append($nc(($cast($JCTree, l->head)))->type);
		}
	}
	return ts->toList();
}

$Name* TreeInfo::name($JCTree* tree) {
	$init($TreeInfo$2);
	switch ($nc($TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(tree)->getTag())))->ordinal())) {
	case 4:
		{
			return $nc(($cast($JCTree$JCIdent, tree)))->name;
		}
	case 5:
		{
			return $nc(($cast($JCTree$JCFieldAccess, tree)))->name;
		}
	case 6:
		{
			return name($nc(($cast($JCTree$JCTypeApply, tree)))->clazz);
		}
	default:
		{
			return nullptr;
		}
	}
}

$Name* TreeInfo::fullName($JCTree* tree$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree, tree, tree$renamed);
	$assign(tree, skipParens(tree));
	$init($TreeInfo$2);
	{
		$var($Name, sname, nullptr)
		switch ($nc($TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(tree)->getTag())))->ordinal())) {
		case 4:
			{
				return $nc(($cast($JCTree$JCIdent, tree)))->name;
			}
		case 5:
			{
				$assign(sname, fullName($nc(($cast($JCTree$JCFieldAccess, tree)))->selected));
				return sname == nullptr ? ($Name*)nullptr : $nc(sname)->append(u'.', $(name(tree)));
			}
		default:
			{
				return nullptr;
			}
		}
	}
}

$Symbol* TreeInfo::symbolFor($JCTree* node) {
	$var($Symbol, sym, symbolForImpl(node));
	return sym != nullptr ? $nc(sym)->baseSymbol() : ($Symbol*)nullptr;
}

$Symbol* TreeInfo::symbolForImpl($JCTree* node$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree, node, node$renamed);
	$assign(node, skipParens(node));
	$init($TreeInfo$2);
	{
		$var($JCTree$JCCompilationUnit, cut, nullptr)
		$var($JCTree$JCModuleDecl, moduleDecl, nullptr)
		switch ($nc($TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(node)->getTag())))->ordinal())) {
		case 69:
			{
				$assign(cut, $cast($JCTree$JCCompilationUnit, node));
				$assign(moduleDecl, $nc(cut)->getModuleDecl());
				if (isModuleInfo(cut) && moduleDecl != nullptr) {
					return symbolFor(moduleDecl);
				}
				return cut->packge;
			}
		case 28:
			{
				return $nc(($cast($JCTree$JCModuleDecl, node)))->sym;
			}
		case 29:
			{
				return $nc(($cast($JCTree$JCPackageDecl, node)))->packge;
			}
		case 49:
			{
				return $nc(($cast($JCTree$JCClassDecl, node)))->sym;
			}
		case 53:
			{
				return $nc(($cast($JCTree$JCMethodDecl, node)))->sym;
			}
		case 8:
			{
				return $nc(($cast($JCTree$JCVariableDecl, node)))->sym;
			}
		case 4:
			{
				return $nc(($cast($JCTree$JCIdent, node)))->sym;
			}
		case 5:
			{
				return $nc(($cast($JCTree$JCFieldAccess, node)))->sym;
			}
		case 9:
			{
				return $nc(($cast($JCTree$JCMemberReference, node)))->sym;
			}
		case 2:
			{
				return $nc(($cast($JCTree$JCNewClass, node)))->constructor;
			}
		case 1:
			{
				return symbolFor($nc(($cast($JCTree$JCMethodInvocation, node)))->meth);
			}
		case 6:
			{
				return symbolFor($nc(($cast($JCTree$JCTypeApply, node)))->clazz);
			}
		case 77:
			{}
		case 78:
			{}
		case 79:
			{
				if (node->type != nullptr) {
					return $nc(node->type)->tsym;
				}
				return nullptr;
			}
		default:
			{
				return nullptr;
			}
		}
	}
}

bool TreeInfo::isDeclaration($JCTree* node$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree, node, node$renamed);
	$assign(node, skipParens(node));
	$init($TreeInfo$2);
	switch ($nc($TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(node)->getTag())))->ordinal())) {
	case 29:
		{}
	case 49:
		{}
	case 53:
		{}
	case 8:
		{
			return true;
		}
	default:
		{
			return false;
		}
	}
}

$Symbol* TreeInfo::symbol($JCTree* tree$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree, tree, tree$renamed);
	$assign(tree, skipParens(tree));
	$init($TreeInfo$2);
	switch ($nc($TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(tree)->getTag())))->ordinal())) {
	case 4:
		{
			return $nc(($cast($JCTree$JCIdent, tree)))->sym;
		}
	case 5:
		{
			return $nc(($cast($JCTree$JCFieldAccess, tree)))->sym;
		}
	case 6:
		{
			return symbol($nc(($cast($JCTree$JCTypeApply, tree)))->clazz);
		}
	case 7:
		{
			return symbol($nc(($cast($JCTree$JCAnnotatedType, tree)))->underlyingType);
		}
	case 9:
		{
			return $nc(($cast($JCTree$JCMemberReference, tree)))->sym;
		}
	default:
		{
			return nullptr;
		}
	}
}

$JCTree$JCModifiers* TreeInfo::getModifiers($JCTree* tree$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree, tree, tree$renamed);
	$assign(tree, skipParens(tree));
	$init($TreeInfo$2);
	switch ($nc($TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(tree)->getTag())))->ordinal())) {
	case 8:
		{
			return $nc(($cast($JCTree$JCVariableDecl, tree)))->mods;
		}
	case 53:
		{
			return $nc(($cast($JCTree$JCMethodDecl, tree)))->mods;
		}
	case 49:
		{
			return $nc(($cast($JCTree$JCClassDecl, tree)))->mods;
		}
	case 28:
		{
			return $nc(($cast($JCTree$JCModuleDecl, tree)))->mods;
		}
	default:
		{
			return nullptr;
		}
	}
}

bool TreeInfo::nonstaticSelect($JCTree* tree$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree, tree, tree$renamed);
	$assign(tree, skipParens(tree));
	$init($JCTree$Tag);
	if (!$nc(tree)->hasTag($JCTree$Tag::SELECT)) {
		return false;
	}
	$var($JCTree$JCFieldAccess, s, $cast($JCTree$JCFieldAccess, tree));
	$var($Symbol, e, symbol($nc(s)->selected));
	$init($Kinds$Kind);
	return e == nullptr || ($nc(e)->kind != $Kinds$Kind::PCK && e->kind != $Kinds$Kind::TYP);
}

void TreeInfo::setSymbol($JCTree* tree$renamed, $Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree, tree, tree$renamed);
	$assign(tree, skipParens(tree));
	$init($TreeInfo$2);
	switch ($nc($TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(tree)->getTag())))->ordinal())) {
	case 4:
		{
			$set($nc($cast($JCTree$JCIdent, tree)), sym, sym);
			break;
		}
	case 5:
		{
			$set($nc($cast($JCTree$JCFieldAccess, tree)), sym, sym);
			break;
		}
	default:
		{}
	}
}

int64_t TreeInfo::flags($JCTree* tree) {
	$init($TreeInfo$2);
	switch ($nc($TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(tree)->getTag())))->ordinal())) {
	case 8:
		{
			return $nc($nc(($cast($JCTree$JCVariableDecl, tree)))->mods)->flags;
		}
	case 53:
		{
			return $nc($nc(($cast($JCTree$JCMethodDecl, tree)))->mods)->flags;
		}
	case 49:
		{
			return $nc($nc(($cast($JCTree$JCClassDecl, tree)))->mods)->flags;
		}
	case 80:
		{
			return $nc(($cast($JCTree$JCBlock, tree)))->flags;
		}
	default:
		{
			return 0;
		}
	}
}

int64_t TreeInfo::firstFlag(int64_t flags) {
	int64_t flag = 1;
	while (((int64_t)(flag & (uint64_t)flags)) == 0) {
		flag = flag << 1;
	}
	return flag;
}

$String* TreeInfo::flagNames(int64_t flags) {
	return $nc($($Flags::toString((int64_t)(flags & (uint64_t)(int64_t)0xC000080000000FFF))))->trim();
}

int32_t TreeInfo::opPrec($JCTree$Tag* op) {
	$init($TreeInfo$2);
	switch ($nc($TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc((op))->ordinal())) {
	case 57:
		{}
	case 58:
		{}
	case 59:
		{}
	case 60:
		{}
	case 10:
		{}
	case 11:
		{
			return TreeInfo::prefixPrec;
		}
	case 12:
		{}
	case 13:
		{}
	case 81:
		{
			return TreeInfo::postfixPrec;
		}
	case 14:
		{
			return TreeInfo::assignPrec;
		}
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
		{
			return TreeInfo::assignopPrec;
		}
	case 30:
		{
			return TreeInfo::orPrec;
		}
	case 31:
		{
			return TreeInfo::andPrec;
		}
	case 35:
		{}
	case 36:
		{
			return TreeInfo::eqPrec;
		}
	case 37:
		{}
	case 38:
		{}
	case 39:
		{}
	case 40:
		{
			return TreeInfo::ordPrec;
		}
	case 32:
		{
			return TreeInfo::bitorPrec;
		}
	case 33:
		{
			return TreeInfo::bitxorPrec;
		}
	case 34:
		{
			return TreeInfo::bitandPrec;
		}
	case 41:
		{}
	case 42:
		{}
	case 43:
		{
			return TreeInfo::shiftPrec;
		}
	case 44:
		{}
	case 45:
		{
			return TreeInfo::addPrec;
		}
	case 46:
		{}
	case 47:
		{}
	case 48:
		{
			return TreeInfo::mulPrec;
		}
	case 54:
		{
			return TreeInfo::ordPrec;
		}
	default:
		{
			$throwNew($AssertionError);
		}
	}
}

$Tree$Kind* TreeInfo::tagToKind($JCTree$Tag* tag) {
	$init($TreeInfo$2);
	switch ($nc($TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc((tag))->ordinal())) {
	case 12:
		{
			$init($Tree$Kind);
			return $Tree$Kind::POSTFIX_INCREMENT;
		}
	case 13:
		{
			$init($Tree$Kind);
			return $Tree$Kind::POSTFIX_DECREMENT;
		}
	case 10:
		{
			$init($Tree$Kind);
			return $Tree$Kind::PREFIX_INCREMENT;
		}
	case 11:
		{
			$init($Tree$Kind);
			return $Tree$Kind::PREFIX_DECREMENT;
		}
	case 57:
		{
			$init($Tree$Kind);
			return $Tree$Kind::UNARY_PLUS;
		}
	case 58:
		{
			$init($Tree$Kind);
			return $Tree$Kind::UNARY_MINUS;
		}
	case 60:
		{
			$init($Tree$Kind);
			return $Tree$Kind::BITWISE_COMPLEMENT;
		}
	case 59:
		{
			$init($Tree$Kind);
			return $Tree$Kind::LOGICAL_COMPLEMENT;
		}
	case 46:
		{
			$init($Tree$Kind);
			return $Tree$Kind::MULTIPLY;
		}
	case 47:
		{
			$init($Tree$Kind);
			return $Tree$Kind::DIVIDE;
		}
	case 48:
		{
			$init($Tree$Kind);
			return $Tree$Kind::REMAINDER;
		}
	case 44:
		{
			$init($Tree$Kind);
			return $Tree$Kind::PLUS;
		}
	case 45:
		{
			$init($Tree$Kind);
			return $Tree$Kind::MINUS;
		}
	case 41:
		{
			$init($Tree$Kind);
			return $Tree$Kind::LEFT_SHIFT;
		}
	case 42:
		{
			$init($Tree$Kind);
			return $Tree$Kind::RIGHT_SHIFT;
		}
	case 43:
		{
			$init($Tree$Kind);
			return $Tree$Kind::UNSIGNED_RIGHT_SHIFT;
		}
	case 37:
		{
			$init($Tree$Kind);
			return $Tree$Kind::LESS_THAN;
		}
	case 38:
		{
			$init($Tree$Kind);
			return $Tree$Kind::GREATER_THAN;
		}
	case 39:
		{
			$init($Tree$Kind);
			return $Tree$Kind::LESS_THAN_EQUAL;
		}
	case 40:
		{
			$init($Tree$Kind);
			return $Tree$Kind::GREATER_THAN_EQUAL;
		}
	case 35:
		{
			$init($Tree$Kind);
			return $Tree$Kind::EQUAL_TO;
		}
	case 36:
		{
			$init($Tree$Kind);
			return $Tree$Kind::NOT_EQUAL_TO;
		}
	case 34:
		{
			$init($Tree$Kind);
			return $Tree$Kind::AND;
		}
	case 33:
		{
			$init($Tree$Kind);
			return $Tree$Kind::XOR;
		}
	case 32:
		{
			$init($Tree$Kind);
			return $Tree$Kind::OR;
		}
	case 31:
		{
			$init($Tree$Kind);
			return $Tree$Kind::CONDITIONAL_AND;
		}
	case 30:
		{
			$init($Tree$Kind);
			return $Tree$Kind::CONDITIONAL_OR;
		}
	case 23:
		{
			$init($Tree$Kind);
			return $Tree$Kind::MULTIPLY_ASSIGNMENT;
		}
	case 24:
		{
			$init($Tree$Kind);
			return $Tree$Kind::DIVIDE_ASSIGNMENT;
		}
	case 25:
		{
			$init($Tree$Kind);
			return $Tree$Kind::REMAINDER_ASSIGNMENT;
		}
	case 21:
		{
			$init($Tree$Kind);
			return $Tree$Kind::PLUS_ASSIGNMENT;
		}
	case 22:
		{
			$init($Tree$Kind);
			return $Tree$Kind::MINUS_ASSIGNMENT;
		}
	case 18:
		{
			$init($Tree$Kind);
			return $Tree$Kind::LEFT_SHIFT_ASSIGNMENT;
		}
	case 19:
		{
			$init($Tree$Kind);
			return $Tree$Kind::RIGHT_SHIFT_ASSIGNMENT;
		}
	case 20:
		{
			$init($Tree$Kind);
			return $Tree$Kind::UNSIGNED_RIGHT_SHIFT_ASSIGNMENT;
		}
	case 17:
		{
			$init($Tree$Kind);
			return $Tree$Kind::AND_ASSIGNMENT;
		}
	case 16:
		{
			$init($Tree$Kind);
			return $Tree$Kind::XOR_ASSIGNMENT;
		}
	case 15:
		{
			$init($Tree$Kind);
			return $Tree$Kind::OR_ASSIGNMENT;
		}
	case 81:
		{
			$init($Tree$Kind);
			return $Tree$Kind::OTHER;
		}
	case 77:
		{
			$init($Tree$Kind);
			return $Tree$Kind::ANNOTATION;
		}
	case 78:
		{
			$init($Tree$Kind);
			return $Tree$Kind::TYPE_ANNOTATION;
		}
	case 82:
		{
			$init($Tree$Kind);
			return $Tree$Kind::EXPORTS;
		}
	case 83:
		{
			$init($Tree$Kind);
			return $Tree$Kind::OPENS;
		}
	default:
		{
			return nullptr;
		}
	}
}

$JCTree$JCExpression* TreeInfo::typeIn($JCTree$JCExpression* tree) {
	$useLocalCurrentObjectStackCache();
	$init($TreeInfo$2);
	switch ($nc($TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(tree)->getTag())))->ordinal())) {
	case 7:
		{
			return $nc(($cast($JCTree$JCAnnotatedType, tree)))->underlyingType;
		}
	case 4:
		{}
	case 84:
		{}
	case 5:
		{}
	case 27:
		{}
	case 71:
		{}
	case 79:
		{}
	case 6:
		{}
	case 26:
		{
			return tree;
		}
	default:
		{
			$throwNew($AssertionError, $of($$str({"Unexpected type tree: "_s, tree})));
		}
	}
}

$JCTree* TreeInfo::innermostType($JCTree* type, bool skipAnnos) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree, lastAnnotatedType, nullptr);
	$var($JCTree, cur, type);
	bool loop$break = false;
	while (true) {
		$init($TreeInfo$2);
		switch ($nc($TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(cur)->getTag())))->ordinal())) {
		case 27:
			{
				$assign(lastAnnotatedType, nullptr);
				$assign(cur, $nc(($cast($JCTree$JCArrayTypeTree, cur)))->elemtype);
				break;
			}
		case 71:
			{
				$assign(lastAnnotatedType, nullptr);
				$assign(cur, $nc(($cast($JCTree$JCWildcard, cur)))->inner);
				break;
			}
		case 7:
			{
				$assign(lastAnnotatedType, cur);
				$assign(cur, $nc(($cast($JCTree$JCAnnotatedType, cur)))->underlyingType);
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
		}	}
	if (!skipAnnos && lastAnnotatedType != nullptr) {
		return lastAnnotatedType;
	} else {
		return cur;
	}
}

bool TreeInfo::containsTypeAnnotation($JCTree* e) {
	$var($TreeInfo$TypeAnnotationFinder, finder, $new($TreeInfo$TypeAnnotationFinder));
	finder->scan(e);
	return finder->foundTypeAnno;
}

bool TreeInfo::isModuleInfo($JCTree$JCCompilationUnit* tree) {
	$init($JavaFileObject$Kind);
	bool var$0 = $nc($nc(tree)->sourcefile)->isNameCompatible("module-info"_s, $JavaFileObject$Kind::SOURCE);
	return var$0 && tree->getModuleDecl() != nullptr;
}

$JCTree$JCModuleDecl* TreeInfo::getModule($JCTree$JCCompilationUnit* t) {
	if ($nc($nc(t)->defs)->nonEmpty()) {
		$var($JCTree, def, $cast($JCTree, $nc(t->defs)->head));
		$init($JCTree$Tag);
		if ($nc(def)->hasTag($JCTree$Tag::MODULEDEF)) {
			return $cast($JCTree$JCModuleDecl, def);
		}
	}
	return nullptr;
}

bool TreeInfo::isPackageInfo($JCTree$JCCompilationUnit* tree) {
	$init($JavaFileObject$Kind);
	return $nc($nc(tree)->sourcefile)->isNameCompatible("package-info"_s, $JavaFileObject$Kind::SOURCE);
}

bool TreeInfo::isErrorEnumSwitch($JCTree$JCExpression* selector, $List* cases) {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$Kind);
	return $nc($nc($nc(selector)->type)->tsym)->kind == $Kinds$Kind::ERR && $nc($($nc($($nc(cases)->stream()))->flatMap(static_cast<$Function*>($$new(TreeInfo$$Lambda$lambda$isErrorEnumSwitch$6$6)))))->allMatch(static_cast<$Predicate*>($$new(TreeInfo$$Lambda$lambda$isErrorEnumSwitch$7$7)));
}

$TreeInfo$PatternPrimaryType* TreeInfo::primaryPatternType($JCTree$JCPattern* pat) {
	$useLocalCurrentObjectStackCache();
	$init($TreeInfo$2);

	$var($TreeInfo$PatternPrimaryType, var$0, nullptr)
	switch ($nc($TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(pat)->getTag())))->ordinal())) {
	case 55:
		{
			$assign(var$0, $new($TreeInfo$PatternPrimaryType, $nc(($cast($JCTree$JCBindingPattern, pat)))->type, true));
			break;
		}
	case 56:
		{
			{
				$var($JCTree$JCGuardPattern, guarded, $cast($JCTree$JCGuardPattern, pat));
				$var($TreeInfo$PatternPrimaryType, nested, primaryPatternType(guarded->patt));
				bool unconditional = $nc(nested)->unconditional();
				$init($TypeTag);
				if ($nc($nc(guarded->expr)->type)->hasTag($TypeTag::BOOLEAN) && unconditional) {
					unconditional = false;
					$var($Object, constValue, $nc($nc(guarded->expr)->type)->constValue());
					if (constValue != nullptr && ($nc(($cast($Integer, constValue)))->intValue()) == 1) {
						unconditional = true;
					}
				}
				$assign(var$0, $new($TreeInfo$PatternPrimaryType, $(nested->type()), unconditional));
				break;
			}
		}
	case 74:
		{
			$assign(var$0, primaryPatternType($nc(($cast($JCTree$JCParenthesizedPattern, pat)))->pattern));
			break;
		}
	default:
		{
			$throwNew($AssertionError);
		}
	}
	return var$0;
}

$JCTree$JCBindingPattern* TreeInfo::primaryPatternTree($JCTree$JCPattern* pat) {
	$useLocalCurrentObjectStackCache();
	$init($TreeInfo$2);

	$var($JCTree$JCBindingPattern, var$0, nullptr)
	switch ($nc($TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(pat)->getTag())))->ordinal())) {
	case 55:
		{
			$assign(var$0, $cast($JCTree$JCBindingPattern, pat));
			break;
		}
	case 56:
		{
			$assign(var$0, primaryPatternTree($nc(($cast($JCTree$JCGuardPattern, pat)))->patt));
			break;
		}
	case 74:
		{
			$assign(var$0, primaryPatternTree($nc(($cast($JCTree$JCParenthesizedPattern, pat)))->pattern));
			break;
		}
	default:
		{
			$throwNew($AssertionError);
		}
	}
	return var$0;
}

bool TreeInfo::lambda$isErrorEnumSwitch$7($JCTree$JCCaseLabel* p) {
	$init($JCTree$Tag);
	return $nc(p)->hasTag($JCTree$Tag::IDENT);
}

$Stream* TreeInfo::lambda$isErrorEnumSwitch$6($JCTree$JCCase* c) {
	return $nc($nc(c)->labels)->stream();
}

bool TreeInfo::lambda$diagnosticPositionFor$5($JCDiagnostic$DiagnosticPosition* t) {
	return t != nullptr;
}

$JCDiagnostic$DiagnosticPosition* TreeInfo::lambda$diagnosticPositionFor$4($Symbol* sym, $JCTree* t) {
	return TreeInfo::diagnosticPositionFor(sym, t);
}

$Type* TreeInfo::lambda$recordFieldTypes$3($JCTree$JCVariableDecl* vd) {
	return $nc(vd)->type;
}

bool TreeInfo::lambda$recordFields$2($JCTree$JCVariableDecl* vd) {
	return ((int64_t)($nc($($cast($JCTree$JCModifiers, $nc(vd)->getModifiers())))->flags & (uint64_t)($Flags::RECORD))) == (int64_t)0x2000000000000000;
}

$JCTree$JCVariableDecl* TreeInfo::lambda$recordFields$1($JCTree* t) {
	return $cast($JCTree$JCVariableDecl, t);
}

bool TreeInfo::lambda$recordFields$0($JCTree* t) {
	$init($JCTree$Tag);
	return $nc(t)->hasTag($JCTree$Tag::VARDEF);
}

TreeInfo::TreeInfo() {
}

$Class* TreeInfo::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TreeInfo$$Lambda$lambda$recordFields$0::classInfo$.name)) {
			return TreeInfo$$Lambda$lambda$recordFields$0::load$(name, initialize);
		}
		if (name->equals(TreeInfo$$Lambda$lambda$recordFields$1$1::classInfo$.name)) {
			return TreeInfo$$Lambda$lambda$recordFields$1$1::load$(name, initialize);
		}
		if (name->equals(TreeInfo$$Lambda$lambda$recordFields$2$2::classInfo$.name)) {
			return TreeInfo$$Lambda$lambda$recordFields$2$2::load$(name, initialize);
		}
		if (name->equals(TreeInfo$$Lambda$lambda$recordFieldTypes$3$3::classInfo$.name)) {
			return TreeInfo$$Lambda$lambda$recordFieldTypes$3$3::load$(name, initialize);
		}
		if (name->equals(TreeInfo$$Lambda$lambda$diagnosticPositionFor$4$4::classInfo$.name)) {
			return TreeInfo$$Lambda$lambda$diagnosticPositionFor$4$4::load$(name, initialize);
		}
		if (name->equals(TreeInfo$$Lambda$lambda$diagnosticPositionFor$5$5::classInfo$.name)) {
			return TreeInfo$$Lambda$lambda$diagnosticPositionFor$5$5::load$(name, initialize);
		}
		if (name->equals(TreeInfo$$Lambda$lambda$isErrorEnumSwitch$6$6::classInfo$.name)) {
			return TreeInfo$$Lambda$lambda$isErrorEnumSwitch$6$6::load$(name, initialize);
		}
		if (name->equals(TreeInfo$$Lambda$lambda$isErrorEnumSwitch$7$7::classInfo$.name)) {
			return TreeInfo$$Lambda$lambda$isErrorEnumSwitch$7$7::load$(name, initialize);
		}
	}
	$loadClass(TreeInfo, name, initialize, &_TreeInfo_ClassInfo_, allocate$TreeInfo);
	return class$;
}

$Class* TreeInfo::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com