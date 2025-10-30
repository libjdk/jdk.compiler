#include <com/sun/tools/javac/comp/TransPatterns.h>

#include <com/sun/source/tree/CaseTree$CaseKind.h>
#include <com/sun/tools/javac/code/BoundKind.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Kinds$KindSelector.h>
#include <com/sun/tools/javac/code/Preview.h>
#include <com/sun/tools/javac/code/Symbol$BindingSymbol.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$DynamicMethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodHandleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$JCPrimitiveType.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Operators.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/comp/TransPatterns$1.h>
#include <com/sun/tools/javac/comp/TransPatterns$2.h>
#include <com/sun/tools/javac/comp/TransPatterns$3.h>
#include <com/sun/tools/javac/comp/TransPatterns$BasicBindingContext.h>
#include <com/sun/tools/javac/comp/TransPatterns$BindingContext.h>
#include <com/sun/tools/javac/comp/TransPatterns$BindingDeclarationFenceBindingContext.h>
#include <com/sun/tools/javac/jvm/PoolConstant$LoadableConstant.h>
#include <com/sun/tools/javac/jvm/Target.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssign.h>
#include <com/sun/tools/javac/tree/JCTree$JCBinary.h>
#include <com/sun/tools/javac/tree/JCTree$JCBindingPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCBreak.h>
#include <com/sun/tools/javac/tree/JCTree$JCCase.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree$JCConditional.h>
#include <com/sun/tools/javac/tree/JCTree$JCContinue.h>
#include <com/sun/tools/javac/tree/JCTree$JCDefaultCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCDoWhileLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpressionStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCGuardPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCIf.h>
#include <com/sun/tools/javac/tree/JCTree$JCInstanceOf.h>
#include <com/sun/tools/javac/tree/JCTree$JCLabeledStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCLiteral.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodInvocation.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCOperatorExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCParenthesizedPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCSwitch.h>
#include <com/sun/tools/javac/tree/JCTree$JCSwitchExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeCast.h>
#include <com/sun/tools/javac/tree/JCTree$JCUnary.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCWhileLoop.h>
#include <com/sun/tools/javac/tree/JCTree$LetExpr.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo$PatternPrimaryType.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/tree/TreeTranslator.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Options.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/function/Function.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Stream.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef AND
#undef BLOCK
#undef BOT
#undef DEFAULTCASELABEL
#undef ENUM
#undef FINAL
#undef MATCH_BINDING
#undef NOT
#undef STATEMENT
#undef STATIC
#undef SWITCH
#undef SYNTHETIC
#undef UNBOUND
#undef VAL_MTH
#undef VAR

using $TypeArray = $Array<::com::sun::tools::javac::code::Type>;
using $PoolConstant$LoadableConstantArray = $Array<::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant>;
using $CaseTree$CaseKind = ::com::sun::source::tree::CaseTree$CaseKind;
using $BoundKind = ::com::sun::tools::javac::code::BoundKind;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Kinds$KindSelector = ::com::sun::tools::javac::code::Kinds$KindSelector;
using $Preview = ::com::sun::tools::javac::code::Preview;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$BindingSymbol = ::com::sun::tools::javac::code::Symbol$BindingSymbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$DynamicMethodSymbol = ::com::sun::tools::javac::code::Symbol$DynamicMethodSymbol;
using $Symbol$MethodHandleSymbol = ::com::sun::tools::javac::code::Symbol$MethodHandleSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$OperatorSymbol = ::com::sun::tools::javac::code::Symbol$OperatorSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$JCPrimitiveType = ::com::sun::tools::javac::code::Type$JCPrimitiveType;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Operators = ::com::sun::tools::javac::comp::Operators;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $TransPatterns$1 = ::com::sun::tools::javac::comp::TransPatterns$1;
using $TransPatterns$2 = ::com::sun::tools::javac::comp::TransPatterns$2;
using $TransPatterns$3 = ::com::sun::tools::javac::comp::TransPatterns$3;
using $TransPatterns$BasicBindingContext = ::com::sun::tools::javac::comp::TransPatterns$BasicBindingContext;
using $TransPatterns$BindingContext = ::com::sun::tools::javac::comp::TransPatterns$BindingContext;
using $TransPatterns$BindingDeclarationFenceBindingContext = ::com::sun::tools::javac::comp::TransPatterns$BindingDeclarationFenceBindingContext;
using $PoolConstant$LoadableConstant = ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant;
using $Target = ::com::sun::tools::javac::jvm::Target;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCAssign = ::com::sun::tools::javac::tree::JCTree$JCAssign;
using $JCTree$JCBinary = ::com::sun::tools::javac::tree::JCTree$JCBinary;
using $JCTree$JCBindingPattern = ::com::sun::tools::javac::tree::JCTree$JCBindingPattern;
using $JCTree$JCBlock = ::com::sun::tools::javac::tree::JCTree$JCBlock;
using $JCTree$JCBreak = ::com::sun::tools::javac::tree::JCTree$JCBreak;
using $JCTree$JCCase = ::com::sun::tools::javac::tree::JCTree$JCCase;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $JCTree$JCConditional = ::com::sun::tools::javac::tree::JCTree$JCConditional;
using $JCTree$JCContinue = ::com::sun::tools::javac::tree::JCTree$JCContinue;
using $JCTree$JCDefaultCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCDefaultCaseLabel;
using $JCTree$JCDoWhileLoop = ::com::sun::tools::javac::tree::JCTree$JCDoWhileLoop;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCExpressionStatement = ::com::sun::tools::javac::tree::JCTree$JCExpressionStatement;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCForLoop = ::com::sun::tools::javac::tree::JCTree$JCForLoop;
using $JCTree$JCGuardPattern = ::com::sun::tools::javac::tree::JCTree$JCGuardPattern;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCIf = ::com::sun::tools::javac::tree::JCTree$JCIf;
using $JCTree$JCInstanceOf = ::com::sun::tools::javac::tree::JCTree$JCInstanceOf;
using $JCTree$JCLabeledStatement = ::com::sun::tools::javac::tree::JCTree$JCLabeledStatement;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCLiteral = ::com::sun::tools::javac::tree::JCTree$JCLiteral;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCMethodInvocation = ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCOperatorExpression = ::com::sun::tools::javac::tree::JCTree$JCOperatorExpression;
using $JCTree$JCParenthesizedPattern = ::com::sun::tools::javac::tree::JCTree$JCParenthesizedPattern;
using $JCTree$JCPattern = ::com::sun::tools::javac::tree::JCTree$JCPattern;
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$JCSwitch = ::com::sun::tools::javac::tree::JCTree$JCSwitch;
using $JCTree$JCSwitchExpression = ::com::sun::tools::javac::tree::JCTree$JCSwitchExpression;
using $JCTree$JCTypeCast = ::com::sun::tools::javac::tree::JCTree$JCTypeCast;
using $JCTree$JCUnary = ::com::sun::tools::javac::tree::JCTree$JCUnary;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$JCWhileLoop = ::com::sun::tools::javac::tree::JCTree$JCWhileLoop;
using $JCTree$LetExpr = ::com::sun::tools::javac::tree::JCTree$LetExpr;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeInfo$PatternPrimaryType = ::com::sun::tools::javac::tree::TreeInfo$PatternPrimaryType;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $TreeTranslator = ::com::sun::tools::javac::tree::TreeTranslator;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Options = ::com::sun::tools::javac::util::Options;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $Function = ::java::util::function::Function;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Collector = ::java::util::stream::Collector;
using $Stream = ::java::util::stream::Stream;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class TransPatterns$$Lambda$lambda$handleSwitch$0 : public $Function {
	$class(TransPatterns$$Lambda$lambda$handleSwitch$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* c) override {
		 return $of(TransPatterns::lambda$handleSwitch$0($cast($JCTree$JCCase, c)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TransPatterns$$Lambda$lambda$handleSwitch$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TransPatterns$$Lambda$lambda$handleSwitch$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TransPatterns$$Lambda$lambda$handleSwitch$0::*)()>(&TransPatterns$$Lambda$lambda$handleSwitch$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo TransPatterns$$Lambda$lambda$handleSwitch$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.TransPatterns$$Lambda$lambda$handleSwitch$0",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* TransPatterns$$Lambda$lambda$handleSwitch$0::load$($String* name, bool initialize) {
	$loadClass(TransPatterns$$Lambda$lambda$handleSwitch$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TransPatterns$$Lambda$lambda$handleSwitch$0::class$ = nullptr;

class TransPatterns$$Lambda$lambda$handleSwitch$1$1 : public $Predicate {
	$class(TransPatterns$$Lambda$lambda$handleSwitch$1$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* p) override {
		 return TransPatterns::lambda$handleSwitch$1($cast($JCTree$JCCaseLabel, p));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TransPatterns$$Lambda$lambda$handleSwitch$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TransPatterns$$Lambda$lambda$handleSwitch$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TransPatterns$$Lambda$lambda$handleSwitch$1$1::*)()>(&TransPatterns$$Lambda$lambda$handleSwitch$1$1::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo TransPatterns$$Lambda$lambda$handleSwitch$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.TransPatterns$$Lambda$lambda$handleSwitch$1$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* TransPatterns$$Lambda$lambda$handleSwitch$1$1::load$($String* name, bool initialize) {
	$loadClass(TransPatterns$$Lambda$lambda$handleSwitch$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TransPatterns$$Lambda$lambda$handleSwitch$1$1::class$ = nullptr;

class TransPatterns$$Lambda$lambda$handleSwitch$2$2 : public $Predicate {
	$class(TransPatterns$$Lambda$lambda$handleSwitch$2$2, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* l) override {
		 return TransPatterns::lambda$handleSwitch$2($cast($JCTree$JCCaseLabel, l));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TransPatterns$$Lambda$lambda$handleSwitch$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TransPatterns$$Lambda$lambda$handleSwitch$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TransPatterns$$Lambda$lambda$handleSwitch$2$2::*)()>(&TransPatterns$$Lambda$lambda$handleSwitch$2$2::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo TransPatterns$$Lambda$lambda$handleSwitch$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.TransPatterns$$Lambda$lambda$handleSwitch$2$2",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* TransPatterns$$Lambda$lambda$handleSwitch$2$2::load$($String* name, bool initialize) {
	$loadClass(TransPatterns$$Lambda$lambda$handleSwitch$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TransPatterns$$Lambda$lambda$handleSwitch$2$2::class$ = nullptr;

class TransPatterns$$Lambda$lambda$handleSwitch$4$3 : public $Function {
	$class(TransPatterns$$Lambda$lambda$handleSwitch$4$3, $NO_CLASS_INIT, $Function)
public:
	void init$(TransPatterns* inst, $Type* seltype) {
		$set(this, inst$, inst);
		$set(this, seltype, seltype);
	}
	virtual $Object* apply(Object$* l) override {
		 return $of($nc(inst$)->lambda$handleSwitch$4(seltype, $cast($JCTree$JCCaseLabel, l)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TransPatterns$$Lambda$lambda$handleSwitch$4$3>());
	}
	TransPatterns* inst$ = nullptr;
	$Type* seltype = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TransPatterns$$Lambda$lambda$handleSwitch$4$3::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TransPatterns$$Lambda$lambda$handleSwitch$4$3, inst$)},
	{"seltype", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(TransPatterns$$Lambda$lambda$handleSwitch$4$3, seltype)},
	{}
};
$MethodInfo TransPatterns$$Lambda$lambda$handleSwitch$4$3::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/TransPatterns;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(static_cast<void(TransPatterns$$Lambda$lambda$handleSwitch$4$3::*)(TransPatterns*,$Type*)>(&TransPatterns$$Lambda$lambda$handleSwitch$4$3::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo TransPatterns$$Lambda$lambda$handleSwitch$4$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.TransPatterns$$Lambda$lambda$handleSwitch$4$3",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* TransPatterns$$Lambda$lambda$handleSwitch$4$3::load$($String* name, bool initialize) {
	$loadClass(TransPatterns$$Lambda$lambda$handleSwitch$4$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TransPatterns$$Lambda$lambda$handleSwitch$4$3::class$ = nullptr;

class TransPatterns$$Lambda$lambda$handleSwitch$5$4 : public $Predicate {
	$class(TransPatterns$$Lambda$lambda$handleSwitch$5$4, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* c) override {
		 return TransPatterns::lambda$handleSwitch$5($cast($PoolConstant$LoadableConstant, c));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TransPatterns$$Lambda$lambda$handleSwitch$5$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TransPatterns$$Lambda$lambda$handleSwitch$5$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TransPatterns$$Lambda$lambda$handleSwitch$5$4::*)()>(&TransPatterns$$Lambda$lambda$handleSwitch$5$4::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo TransPatterns$$Lambda$lambda$handleSwitch$5$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.TransPatterns$$Lambda$lambda$handleSwitch$5$4",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* TransPatterns$$Lambda$lambda$handleSwitch$5$4::load$($String* name, bool initialize) {
	$loadClass(TransPatterns$$Lambda$lambda$handleSwitch$5$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TransPatterns$$Lambda$lambda$handleSwitch$5$4::class$ = nullptr;

class TransPatterns$$Lambda$lambda$handleSwitch$6$5 : public $IntFunction {
	$class(TransPatterns$$Lambda$lambda$handleSwitch$6$5, $NO_CLASS_INIT, $IntFunction)
public:
	void init$() {
	}
	virtual $Object* apply(int32_t s) override {
		 return $of(TransPatterns::lambda$handleSwitch$6(s));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TransPatterns$$Lambda$lambda$handleSwitch$6$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TransPatterns$$Lambda$lambda$handleSwitch$6$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TransPatterns$$Lambda$lambda$handleSwitch$6$5::*)()>(&TransPatterns$$Lambda$lambda$handleSwitch$6$5::init$))},
	{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo TransPatterns$$Lambda$lambda$handleSwitch$6$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.TransPatterns$$Lambda$lambda$handleSwitch$6$5",
	"java.lang.Object",
	"java.util.function.IntFunction",
	nullptr,
	methodInfos
};
$Class* TransPatterns$$Lambda$lambda$handleSwitch$6$5::load$($String* name, bool initialize) {
	$loadClass(TransPatterns$$Lambda$lambda$handleSwitch$6$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TransPatterns$$Lambda$lambda$handleSwitch$6$5::class$ = nullptr;

class TransPatterns$$Lambda$lambda$handleSwitch$7$6 : public $Predicate {
	$class(TransPatterns$$Lambda$lambda$handleSwitch$7$6, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* l) override {
		 return TransPatterns::lambda$handleSwitch$7($cast($JCTree$JCCaseLabel, l));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TransPatterns$$Lambda$lambda$handleSwitch$7$6>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TransPatterns$$Lambda$lambda$handleSwitch$7$6::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TransPatterns$$Lambda$lambda$handleSwitch$7$6::*)()>(&TransPatterns$$Lambda$lambda$handleSwitch$7$6::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo TransPatterns$$Lambda$lambda$handleSwitch$7$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.TransPatterns$$Lambda$lambda$handleSwitch$7$6",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* TransPatterns$$Lambda$lambda$handleSwitch$7$6::load$($String* name, bool initialize) {
	$loadClass(TransPatterns$$Lambda$lambda$handleSwitch$7$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TransPatterns$$Lambda$lambda$handleSwitch$7$6::class$ = nullptr;

class TransPatterns$$Lambda$lambda$handleSwitch$8$7 : public $Predicate {
	$class(TransPatterns$$Lambda$lambda$handleSwitch$8$7, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* l) override {
		 return TransPatterns::lambda$handleSwitch$8($cast($JCTree$JCCaseLabel, l));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TransPatterns$$Lambda$lambda$handleSwitch$8$7>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TransPatterns$$Lambda$lambda$handleSwitch$8$7::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TransPatterns$$Lambda$lambda$handleSwitch$8$7::*)()>(&TransPatterns$$Lambda$lambda$handleSwitch$8$7::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo TransPatterns$$Lambda$lambda$handleSwitch$8$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.TransPatterns$$Lambda$lambda$handleSwitch$8$7",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* TransPatterns$$Lambda$lambda$handleSwitch$8$7::load$($String* name, bool initialize) {
	$loadClass(TransPatterns$$Lambda$lambda$handleSwitch$8$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TransPatterns$$Lambda$lambda$handleSwitch$8$7::class$ = nullptr;

$FieldInfo _TransPatterns_FieldInfo_[] = {
	{"transPatternsKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/comp/TransPatterns;>;", $PROTECTED | $STATIC | $FINAL, $staticField(TransPatterns, transPatternsKey)},
	{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $PRIVATE | $FINAL, $field(TransPatterns, syms)},
	{"attr", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $PRIVATE | $FINAL, $field(TransPatterns, attr)},
	{"rs", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $PRIVATE | $FINAL, $field(TransPatterns, rs)},
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, $PRIVATE | $FINAL, $field(TransPatterns, types)},
	{"operators", "Lcom/sun/tools/javac/comp/Operators;", nullptr, $PRIVATE | $FINAL, $field(TransPatterns, operators)},
	{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, $PRIVATE | $FINAL, $field(TransPatterns, names)},
	{"target", "Lcom/sun/tools/javac/jvm/Target;", nullptr, $PRIVATE | $FINAL, $field(TransPatterns, target)},
	{"preview", "Lcom/sun/tools/javac/code/Preview;", nullptr, $PRIVATE | $FINAL, $field(TransPatterns, preview)},
	{"make", "Lcom/sun/tools/javac/tree/TreeMaker;", nullptr, $PRIVATE, $field(TransPatterns, make)},
	{"env", "Lcom/sun/tools/javac/comp/Env;", "Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PRIVATE, $field(TransPatterns, env)},
	{"bindingContext", "Lcom/sun/tools/javac/comp/TransPatterns$BindingContext;", nullptr, 0, $field(TransPatterns, bindingContext)},
	{"pendingMatchLabel", "Lcom/sun/tools/javac/tree/JCTree$JCLabeledStatement;", nullptr, 0, $field(TransPatterns, pendingMatchLabel)},
	{"debugTransPatterns", "Z", nullptr, 0, $field(TransPatterns, debugTransPatterns)},
	{"currentClass", "Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PRIVATE, $field(TransPatterns, currentClass)},
	{"currentMethodSym", "Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, $PRIVATE, $field(TransPatterns, currentMethodSym)},
	{"currentValue", "Lcom/sun/tools/javac/code/Symbol$VarSymbol;", nullptr, $PRIVATE, $field(TransPatterns, currentValue)},
	{}
};

$MethodInfo _TransPatterns_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(TransPatterns::*)($Context*)>(&TransPatterns::init$))},
	{"convert", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"handleSwitch", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List;ZZ)V", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCase;>;ZZ)V", $PRIVATE, $method(static_cast<void(TransPatterns::*)($JCTree*,$JCTree$JCExpression*,$List*,bool,bool)>(&TransPatterns::handleSwitch))},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/comp/TransPatterns;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TransPatterns*(*)($Context*)>(&TransPatterns::instance))},
	{"lambda$handleSwitch$0", "(Lcom/sun/tools/javac/tree/JCTree$JCCase;)Ljava/util/stream/Stream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Stream*(*)($JCTree$JCCase*)>(&TransPatterns::lambda$handleSwitch$0))},
	{"lambda$handleSwitch$1", "(Lcom/sun/tools/javac/tree/JCTree$JCCaseLabel;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($JCTree$JCCaseLabel*)>(&TransPatterns::lambda$handleSwitch$1))},
	{"lambda$handleSwitch$2", "(Lcom/sun/tools/javac/tree/JCTree$JCCaseLabel;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($JCTree$JCCaseLabel*)>(&TransPatterns::lambda$handleSwitch$2))},
	{"lambda$handleSwitch$4", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/tree/JCTree$JCCaseLabel;)Lcom/sun/tools/javac/jvm/PoolConstant$LoadableConstant;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$PoolConstant$LoadableConstant*(TransPatterns::*)($Type*,$JCTree$JCCaseLabel*)>(&TransPatterns::lambda$handleSwitch$4))},
	{"lambda$handleSwitch$5", "(Lcom/sun/tools/javac/jvm/PoolConstant$LoadableConstant;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($PoolConstant$LoadableConstant*)>(&TransPatterns::lambda$handleSwitch$5))},
	{"lambda$handleSwitch$6", "(I)[Lcom/sun/tools/javac/jvm/PoolConstant$LoadableConstant;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$PoolConstant$LoadableConstantArray*(*)(int32_t)>(&TransPatterns::lambda$handleSwitch$6))},
	{"lambda$handleSwitch$7", "(Lcom/sun/tools/javac/tree/JCTree$JCCaseLabel;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($JCTree$JCCaseLabel*)>(&TransPatterns::lambda$handleSwitch$7))},
	{"lambda$handleSwitch$8", "(Lcom/sun/tools/javac/tree/JCTree$JCCaseLabel;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($JCTree$JCCaseLabel*)>(&TransPatterns::lambda$handleSwitch$8))},
	{"makeBinary", "(Lcom/sun/tools/javac/tree/JCTree$Tag;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCBinary;", nullptr, 0},
	{"makeLit", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"makeTypeTest", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCInstanceOf;", nullptr, 0},
	{"makeUnary", "(Lcom/sun/tools/javac/tree/JCTree$Tag;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCUnary;", nullptr, 0},
	{"principalType", "(Lcom/sun/tools/javac/tree/JCTree$JCPattern;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $method(static_cast<$Type*(TransPatterns::*)($JCTree$JCPattern*)>(&TransPatterns::principalType))},
	{"toLoadableConstant", "(Lcom/sun/tools/javac/tree/JCTree$JCCaseLabel;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/jvm/PoolConstant$LoadableConstant;", nullptr, $PRIVATE, $method(static_cast<$PoolConstant$LoadableConstant*(TransPatterns::*)($JCTree$JCCaseLabel*,$Type*)>(&TransPatterns::toLoadableConstant))},
	{"translateTopLevelClass", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/TreeMaker;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/TreeMaker;)Lcom/sun/tools/javac/tree/JCTree;", $PUBLIC},
	{"visitBinary", "(Lcom/sun/tools/javac/tree/JCTree$JCBinary;)V", nullptr, $PUBLIC},
	{"visitBindingPattern", "(Lcom/sun/tools/javac/tree/JCTree$JCBindingPattern;)V", nullptr, $PUBLIC},
	{"visitBlock", "(Lcom/sun/tools/javac/tree/JCTree$JCBlock;)V", nullptr, $PUBLIC},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"visitConditional", "(Lcom/sun/tools/javac/tree/JCTree$JCConditional;)V", nullptr, $PUBLIC},
	{"visitDoLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCDoWhileLoop;)V", nullptr, $PUBLIC},
	{"visitForLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCForLoop;)V", nullptr, $PUBLIC},
	{"visitGuardPattern", "(Lcom/sun/tools/javac/tree/JCTree$JCGuardPattern;)V", nullptr, $PUBLIC},
	{"visitIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCIdent;)V", nullptr, $PUBLIC},
	{"visitIf", "(Lcom/sun/tools/javac/tree/JCTree$JCIf;)V", nullptr, $PUBLIC},
	{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC},
	{"visitMethodDef", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", nullptr, $PUBLIC},
	{"visitParenthesizedPattern", "(Lcom/sun/tools/javac/tree/JCTree$JCParenthesizedPattern;)V", nullptr, $PUBLIC},
	{"visitSwitch", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitch;)V", nullptr, $PUBLIC},
	{"visitSwitchExpression", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;)V", nullptr, $PUBLIC},
	{"visitTypeTest", "(Lcom/sun/tools/javac/tree/JCTree$JCInstanceOf;)V", nullptr, $PUBLIC},
	{"visitVarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PUBLIC},
	{"visitWhileLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCWhileLoop;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TransPatterns_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.TransPatterns$3", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.comp.TransPatterns$BindingDeclarationFenceBindingContext", "com.sun.tools.javac.comp.TransPatterns", "BindingDeclarationFenceBindingContext", $PRIVATE},
	{"com.sun.tools.javac.comp.TransPatterns$BasicBindingContext", "com.sun.tools.javac.comp.TransPatterns", "BasicBindingContext", 0},
	{"com.sun.tools.javac.comp.TransPatterns$BindingContext", "com.sun.tools.javac.comp.TransPatterns", "BindingContext", $ABSTRACT},
	{"com.sun.tools.javac.comp.TransPatterns$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.TransPatterns$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TransPatterns_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.TransPatterns",
	"com.sun.tools.javac.tree.TreeTranslator",
	nullptr,
	_TransPatterns_FieldInfo_,
	_TransPatterns_MethodInfo_,
	nullptr,
	nullptr,
	_TransPatterns_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.TransPatterns$3,com.sun.tools.javac.comp.TransPatterns$BindingDeclarationFenceBindingContext,com.sun.tools.javac.comp.TransPatterns$BasicBindingContext,com.sun.tools.javac.comp.TransPatterns$BindingContext,com.sun.tools.javac.comp.TransPatterns$2,com.sun.tools.javac.comp.TransPatterns$1"
};

$Object* allocate$TransPatterns($Class* clazz) {
	return $of($alloc(TransPatterns));
}

$Context$Key* TransPatterns::transPatternsKey = nullptr;

TransPatterns* TransPatterns::instance($Context* context) {
	$init(TransPatterns);
	$var(TransPatterns, instance, $cast(TransPatterns, $nc(context)->get(TransPatterns::transPatternsKey)));
	if (instance == nullptr) {
		$assign(instance, $new(TransPatterns, context));
	}
	return instance;
}

void TransPatterns::init$($Context* context) {
	$TreeTranslator::init$();
	$set(this, bindingContext, $new($TransPatterns$1, this));
	$set(this, pendingMatchLabel, nullptr);
	$set(this, currentClass, nullptr);
	$set(this, currentMethodSym, nullptr);
	$set(this, currentValue, nullptr);
	$nc(context)->put(TransPatterns::transPatternsKey, $of(this));
	$set(this, syms, $Symtab::instance(context));
	$set(this, attr, $Attr::instance(context));
	$set(this, rs, $Resolve::instance(context));
	$set(this, make, $TreeMaker::instance(context));
	$set(this, types, $Types::instance(context));
	$set(this, operators, $Operators::instance(context));
	$set(this, names, $Names::instance(context));
	$set(this, target, $Target::instance(context));
	$set(this, preview, $Preview::instance(context));
	this->debugTransPatterns = $nc($($Options::instance(context)))->isSet("debug.patterns"_s);
}

void TransPatterns::visitTypeTest($JCTree$JCInstanceOf* tree) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($JCTree$JCPattern, $nc(tree)->pattern)) {
		$init($TypeTag);
		$var($Type, tempType, $nc($nc(tree->expr)->type)->hasTag($TypeTag::BOT) ? $nc(this->syms)->objectType : $nc(tree->expr)->type);
		$var($Symbol$VarSymbol, prevCurrentValue, this->currentValue);
		$set(this, bindingContext, $new($TransPatterns$BasicBindingContext, this));
		{
			$var($Throwable, var$0, nullptr);
			try {
				$var($JCTree$JCExpression, translatedExpr, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->expr))));
				$var($Symbol, exprSym, $TreeInfo::symbol(translatedExpr));
				$init($Kinds$Kind);
				$init($Kinds$KindSelector);
				if (exprSym != nullptr && exprSym->kind == $Kinds$Kind::VAR && $nc($nc(exprSym->owner)->kind)->matches($Kinds$KindSelector::VAL_MTH)) {
					$set(this, currentValue, $cast($Symbol$VarSymbol, exprSym));
				} else {
					$set(this, currentValue, $new($Symbol$VarSymbol, $Flags::FINAL | $Flags::SYNTHETIC, $($nc(this->names)->fromString($$str({"patt"_s, $$str(tree->pos$), $$str(this->target->syntheticNameChar()), "temp"_s}))), tempType, this->currentMethodSym));
				}
				$var($Type, principalType, this->principalType($cast($JCTree$JCPattern, tree->pattern)));
				$init($JCTree$Tag);
				$var($JCTree$Tag, var$1, $JCTree$Tag::AND);
				$var($JCTree$JCExpression, var$3, static_cast<$JCTree$JCExpression*>($nc(this->make)->Ident(static_cast<$Symbol*>(this->currentValue))));
				$var($JCTree$JCExpression, var$2, static_cast<$JCTree$JCExpression*>(makeTypeTest(var$3, $($nc(this->make)->Type(principalType)))));
				$var($JCTree$JCExpression, resultExpression, makeBinary(var$1, var$2, $cast($JCTree$JCExpression, $(this->translate(tree->pattern)))));
				if (!$equals(this->currentValue, exprSym)) {
					$assign(resultExpression, $nc($($nc($($nc(this->make)->at(tree->pos$)))->LetExpr($($nc(this->make)->VarDef(this->currentValue, translatedExpr)), resultExpression)))->setType($nc(this->syms)->booleanType));
					$nc(($cast($JCTree$LetExpr, resultExpression)))->needsCond = true;
				}
				$set(this, result, $nc(this->bindingContext)->decorateExpression(resultExpression));
			} catch ($Throwable& var$4) {
				$assign(var$0, var$4);
			} /*finally*/ {
				$set(this, currentValue, prevCurrentValue);
				$nc(this->bindingContext)->pop();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} else {
		$TreeTranslator::visitTypeTest(tree);
	}
}

void TransPatterns::visitBindingPattern($JCTree$JCBindingPattern* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$BindingSymbol, binding, $cast($Symbol$BindingSymbol, $nc($nc(tree)->var)->sym));
	$var($Type, castTargetType, principalType(tree));
	$var($Symbol$VarSymbol, bindingVar, $nc(this->bindingContext)->bindingDeclared(binding));
	if (bindingVar != nullptr) {
		$var($JCTree$JCExpression, var$0, static_cast<$JCTree$JCExpression*>($nc(this->make)->Ident(static_cast<$Symbol*>(bindingVar))));
		$var($JCTree$JCAssign, fakeInit, $cast($JCTree$JCAssign, $nc($($nc($($nc(this->make)->at($TreeInfo::getStartPos(tree))))->Assign(var$0, $(convert($($nc(this->make)->Ident(static_cast<$Symbol*>(this->currentValue))), castTargetType)))))->setType($(bindingVar->erasure(this->types)))));
		$var($List, var$1, $List::of($($nc(this->make)->Exec(fakeInit))));
		$var($JCTree$LetExpr, nestedLE, $nc(this->make)->LetExpr(var$1, $(static_cast<$JCTree$JCExpression*>($nc(this->make)->Literal($($Boolean::valueOf(true)))))));
		$nc(nestedLE)->needsCond = true;
		nestedLE->setType($nc(this->syms)->booleanType);
		$set(this, result, nestedLE);
	} else {
		$set(this, result, $nc(this->make)->Literal($($Boolean::valueOf(true))));
	}
}

void TransPatterns::visitParenthesizedPattern($JCTree$JCParenthesizedPattern* tree) {
	$set(this, result, translate(static_cast<$JCTree*>($nc(tree)->pattern)));
}

void TransPatterns::visitGuardPattern($JCTree$JCGuardPattern* tree) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCExpression, pattern, $cast($JCTree$JCExpression, this->translate(static_cast<$JCTree*>($nc(tree)->patt))));
	$var($JCTree$JCExpression, guard, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>($nc(tree)->expr))));
	$init($JCTree$Tag);
	$set(this, result, makeBinary($JCTree$Tag::AND, pattern, guard));
}

void TransPatterns::visitSwitch($JCTree$JCSwitch* tree) {
	handleSwitch(tree, $nc(tree)->selector, tree->cases, tree->hasTotalPattern, tree->patternSwitch);
}

void TransPatterns::visitSwitchExpression($JCTree$JCSwitchExpression* tree) {
	handleSwitch(tree, $nc(tree)->selector, tree->cases, tree->hasTotalPattern, tree->patternSwitch);
}

void TransPatterns::handleSwitch($JCTree* tree, $JCTree$JCExpression* selector$renamed, $List* cases$renamed, bool hasTotalPattern, bool patternSwitch) {
	$useLocalCurrentObjectStackCache();
	$var($List, cases, cases$renamed);
	$var($JCTree$JCExpression, selector, selector$renamed);
	$var($Type, seltype, $nc(selector)->type);
	if (patternSwitch) {
		$Assert::check($nc(this->preview)->isEnabled());
		$Assert::check($nc(this->preview)->usesPreview($nc($nc(this->env)->toplevel)->sourcefile));
		$var($ListBuffer, newCases, $new($ListBuffer));
		{
			$var($List, c, cases);
			for (; $nc(c)->nonEmpty(); $assign(c, $nc(c)->tail)) {
				bool var$0 = $nc($nc(($cast($JCTree$JCCase, c->head)))->stats)->isEmpty();
				if (var$0 && $nc(c->tail)->nonEmpty()) {
					$set($nc($cast($JCTree$JCCase, $nc(c->tail)->head)), labels, $nc($nc(($cast($JCTree$JCCase, $nc(c->tail)->head)))->labels)->prependList($nc(($cast($JCTree$JCCase, c->head)))->labels));
				} else {
					newCases->add($cast($JCTree$JCCase, c->head));
				}
			}
		}
		$assign(cases, newCases->toList());
		$var($ListBuffer, statements, $new($ListBuffer));
		$var($Symbol$VarSymbol, temp, $new($Symbol$VarSymbol, $Flags::SYNTHETIC, $($nc(this->names)->fromString($$str({"selector"_s, $$str($nc(tree)->pos$), $$str(this->target->syntheticNameChar()), "temp"_s}))), seltype, this->currentMethodSym));
		bool hasNullCase = $nc($($nc($($nc(cases)->stream()))->flatMap(static_cast<$Function*>($$new(TransPatterns$$Lambda$lambda$handleSwitch$0)))))->anyMatch(static_cast<$Predicate*>($$new(TransPatterns$$Lambda$lambda$handleSwitch$1$1)));
		$var($JCTree$JCCase, lastCase, $cast($JCTree$JCCase, cases->last()));
		if (hasTotalPattern && !hasNullCase) {
			$var($JCTree$JCCase, last, lastCase);
			if ($nc($($nc($nc(last)->labels)->stream()))->noneMatch(static_cast<$Predicate*>($$new(TransPatterns$$Lambda$lambda$handleSwitch$2$2)))) {
				$set(last, labels, $nc(last->labels)->prepend($(makeLit($nc(this->syms)->botType, nullptr))));
				hasNullCase = true;
			}
		}
		$assign(selector, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(selector))));
		statements->append($($nc($($nc(this->make)->at($nc(tree)->pos$)))->VarDef(temp, !hasNullCase ? $($nc(this->attr)->makeNullCheck(selector)) : selector)));
		$var($Symbol$VarSymbol, index, $new($Symbol$VarSymbol, $Flags::SYNTHETIC, $($nc(this->names)->fromString($$str({$$str($nc(tree)->pos$), $$str(this->target->syntheticNameChar()), "index"_s}))), $nc(this->syms)->intType, this->currentMethodSym));
		statements->append($($nc($($nc(this->make)->at($nc(tree)->pos$)))->VarDef(index, $(makeLit($nc(this->syms)->intType, $($Integer::valueOf(0)))))));
		$var($Type, var$1, $nc($nc(this->syms)->classType)->getEnclosingType());
		$init($BoundKind);
		$var($List, staticArgTypes, $List::of($nc(this->syms)->methodHandleLookupType, $nc(this->syms)->stringType, $nc(this->syms)->methodTypeType, $$new($TypeArray, {$(static_cast<$Type*>($nc(this->types)->makeArrayType($$new($Type$ClassType, var$1, $($List::of($$new($Type$WildcardType, $nc(this->syms)->objectType, $BoundKind::UNBOUND, $nc(this->syms)->boundClass))), $nc($nc(this->syms)->classType)->tsym))))})));
		$var($PoolConstant$LoadableConstantArray, staticArgValues, $fcast($PoolConstant$LoadableConstantArray, $nc($($nc($($nc($($nc($(cases->stream()))->flatMap(static_cast<$Function*>($$new(TransPatterns$$Lambda$lambda$handleSwitch$0)))))->map(static_cast<$Function*>($$new(TransPatterns$$Lambda$lambda$handleSwitch$4$3, this, seltype)))))->filter(static_cast<$Predicate*>($$new(TransPatterns$$Lambda$lambda$handleSwitch$5$4)))))->toArray(static_cast<$IntFunction*>($$new(TransPatterns$$Lambda$lambda$handleSwitch$6$5)))));
		bool enumSelector = $nc($nc(seltype)->tsym)->isEnum();
		$var($Name, bootstrapName, enumSelector ? $nc(this->names)->enumSwitch : $nc(this->names)->typeSwitch);
		$var($JCDiagnostic$DiagnosticPosition, var$2, $nc(tree)->pos());
		$var($Env, var$3, this->env);
		$var($Type, var$4, $nc(this->syms)->switchBootstrapsType);
		$var($Name, var$5, bootstrapName);
		$var($List, var$6, staticArgTypes);
		$var($Symbol, bsm, $nc(this->rs)->resolveInternalMethod(var$2, var$3, var$4, var$5, var$6, $($List::nil())));
		$var($List, var$7, $List::of(enumSelector ? seltype : $nc(this->syms)->objectType, $nc(this->syms)->intType));
		$var($Type, var$8, static_cast<$Type*>($nc(this->syms)->intType));
		$var($Type$MethodType, indyType, $new($Type$MethodType, var$7, var$8, $($List::nil()), $nc(this->syms)->methodClass));
		$var($Symbol$DynamicMethodSymbol, dynSym, $new($Symbol$DynamicMethodSymbol, bootstrapName, $nc(this->syms)->noSymbol, $($nc(($cast($Symbol$MethodSymbol, bsm)))->asHandle()), indyType, staticArgValues));
		$var($JCTree$JCFieldAccess, qualifier, $nc(this->make)->Select($($nc(this->make)->QualIdent($nc(bsm)->owner)), dynSym->name));
		$set($nc(qualifier), sym, dynSym);
		$set(qualifier, type, $nc(this->syms)->intType);
		$var($List, var$9, $List::nil());
		$var($JCTree$JCExpression, var$10, static_cast<$JCTree$JCExpression*>(qualifier));
		$var($Object, var$11, $of($nc(this->make)->Ident(static_cast<$Symbol*>(temp))));
		$assign(selector, $nc($($nc(this->make)->Apply(var$9, var$10, $($List::of(var$11, $($nc(this->make)->Ident(static_cast<$Symbol*>(index))))))))->setType($nc(this->syms)->intType));
		int32_t i = 0;
		bool previousCompletesNormally = false;
		bool hasDefault = false;
		{
			$var($Iterator, i$, cases->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JCTree$JCCase, c, $cast($JCTree$JCCase, i$->next()));
				{
					$var($List, clearedPatterns, $nc(c)->labels);
					bool var$12 = $nc(c->labels)->size() > 1;
					bool hasJoinedNull = var$12 && $nc($($nc(c->labels)->stream()))->anyMatch(static_cast<$Predicate*>($$new(TransPatterns$$Lambda$lambda$handleSwitch$7$6)));
					if (hasJoinedNull) {
						$assign(clearedPatterns, $cast($List, $nc($($nc($($nc(c->labels)->stream()))->filter(static_cast<$Predicate*>($$new(TransPatterns$$Lambda$lambda$handleSwitch$8$7)))))->collect($($List::collector()))));
					}
					bool var$13 = $nc(clearedPatterns)->size() == 1;
					if (var$13 && $nc(($cast($JCTree$JCCaseLabel, clearedPatterns->head)))->isPattern() && !previousCompletesNormally) {
						$var($JCTree$JCCaseLabel, p, $cast($JCTree$JCCaseLabel, clearedPatterns->head));
						$set(this, bindingContext, $new($TransPatterns$BasicBindingContext, this));
						$var($Symbol$VarSymbol, prevCurrentValue, this->currentValue);
						{
							$var($Throwable, var$14, nullptr);
							try {
								$set(this, currentValue, temp);
								$var($JCTree$JCExpression, test, $cast($JCTree$JCExpression, this->translate(static_cast<$JCTree*>(p))));
								$set(c, stats, translate(c->stats));
								$var($JCTree$JCContinue, continueSwitch, $nc($($nc(this->make)->at($($nc(($cast($JCTree$JCCaseLabel, clearedPatterns->head)))->pos()))))->Continue(nullptr));
								$set($nc(continueSwitch), target, tree);
								$init($JCTree$Tag);
								$var($JCTree$JCExpression, var$15, $nc($(makeUnary($JCTree$Tag::NOT, test)))->setType($nc(this->syms)->booleanType));
								$var($JCTree$JCExpression, var$16, static_cast<$JCTree$JCExpression*>($nc(this->make)->Ident(static_cast<$Symbol*>(index))));
								$set(c, stats, $nc(c->stats)->prepend($($nc(this->make)->If(var$15, $($nc(this->make)->Block(0, $($List::of($($nc(this->make)->Exec($($nc($($nc(this->make)->Assign(var$16, $(makeLit($nc(this->syms)->intType, $($Integer::valueOf(i + 1)))))))->setType($nc(this->syms)->intType)))), continueSwitch)))), nullptr))));
								$set(c, stats, $nc(c->stats)->prependList($($nc(this->bindingContext)->bindingVars(c->pos$))));
							} catch ($Throwable& var$17) {
								$assign(var$14, var$17);
							} /*finally*/ {
								$set(this, currentValue, prevCurrentValue);
								$nc(this->bindingContext)->pop();
							}
							if (var$14 != nullptr) {
								$throw(var$14);
							}
						}
					} else {
						$set(c, stats, translate(c->stats));
					}
					$var($ListBuffer, translatedLabels, $new($ListBuffer));
					{
						$var($Iterator, i$, $nc(c->labels)->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($JCTree$JCCaseLabel, p, $cast($JCTree$JCCaseLabel, i$->next()));
							{
								$init($JCTree$Tag);
								if ($nc(p)->hasTag($JCTree$Tag::DEFAULTCASELABEL)) {
									translatedLabels->add(p);
									hasDefault = true;
								} else if (hasTotalPattern && !hasDefault && c == lastCase && p->isPattern()) {
									translatedLabels->add($($nc(this->make)->DefaultCaseLabel()));
								} else {
									int32_t value = 0;
									if (p->isNullPattern()) {
										value = -1;
									} else {
										value = i++;
									}
									translatedLabels->add($($nc(this->make)->Literal($($Integer::valueOf(value)))));
								}
							}
						}
					}
					$set(c, labels, translatedLabels->toList());
					$init($CaseTree$CaseKind);
					if (c->caseKind == $CaseTree$CaseKind::STATEMENT) {
						previousCompletesNormally = c->completesNormally;
					} else {
						previousCompletesNormally = false;
						$var($JCTree$JCBreak, brk, $nc($($nc(this->make)->at($TreeInfo::endPos($cast($JCTree, $($nc(c->stats)->last()))))))->Break(nullptr));
						$set($nc(brk), target, tree);
						$set(c, stats, $nc(c->stats)->append(brk));
					}
				}
			}
		}
		$init($JCTree$Tag);
		if ($nc(tree)->hasTag($JCTree$Tag::SWITCH)) {
			$set($nc($cast($JCTree$JCSwitch, tree)), selector, selector);
			$set($cast($JCTree$JCSwitch, tree), cases, cases);
			statements->append($cast($JCTree$JCSwitch, tree));
			$set(this, result, $nc(this->make)->Block(0, $(statements->toList())));
		} else {
			$set($nc($cast($JCTree$JCSwitchExpression, tree)), selector, selector);
			$set($cast($JCTree$JCSwitchExpression, tree), cases, cases);
			$var($JCTree$LetExpr, r, $cast($JCTree$LetExpr, $nc($($nc(this->make)->LetExpr($(statements->toList()), $cast($JCTree$JCSwitchExpression, tree))))->setType(tree->type)));
			$nc(r)->needsCond = true;
			$set(this, result, r);
		}
		return;
	}
	$init($JCTree$Tag);
	if ($nc(tree)->hasTag($JCTree$Tag::SWITCH)) {
		$TreeTranslator::visitSwitch($cast($JCTree$JCSwitch, tree));
	} else {
		$TreeTranslator::visitSwitchExpression($cast($JCTree$JCSwitchExpression, tree));
	}
}

$Type* TransPatterns::principalType($JCTree$JCPattern* p) {
	$useLocalCurrentObjectStackCache();
	return $nc(this->types)->boxedTypeOrType($($nc(this->types)->erasure($($nc($($TreeInfo::primaryPatternType(p)))->type()))));
}

$PoolConstant$LoadableConstant* TransPatterns::toLoadableConstant($JCTree$JCCaseLabel* l, $Type* selector) {
	$useLocalCurrentObjectStackCache();
	if ($nc(l)->isPattern()) {
		$var($Type, principalType, this->principalType($cast($JCTree$JCPattern, l)));
		if ($nc(this->types)->isSubtype(selector, principalType)) {
			return $cast($PoolConstant$LoadableConstant, selector);
		} else {
			return $cast($PoolConstant$LoadableConstant, principalType);
		}
	} else {
		bool var$1 = l->isExpression();
		if (var$1 && !$TreeInfo::isNull($cast($JCTree$JCExpression, l))) {
			if (((int64_t)($nc($nc(l->type)->tsym)->flags_field & (uint64_t)(int64_t)$Flags::ENUM)) != 0) {
				return $PoolConstant$LoadableConstant::String($($nc($nc(($cast($JCTree$JCIdent, l)))->name)->toString()));
			} else {
				$Assert::checkNonNull($($nc(l->type)->constValue()));
				$init($TransPatterns$3);

				$var($PoolConstant$LoadableConstant, var$2, nullptr)
				switch ($nc($TransPatterns$3::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc(($($nc(l->type)->getTag())))->ordinal())) {
				case 1:
					{}
				case 2:
					{}
				case 3:
					{}
				case 4:
					{
						$assign(var$2, $PoolConstant$LoadableConstant::Int($nc(($cast($Integer, $($nc(l->type)->constValue()))))->intValue()));
						break;
					}
				case 5:
					{
						$assign(var$2, $PoolConstant$LoadableConstant::String($cast($String, $($nc(l->type)->constValue()))));
						break;
					}
				default:
					{
						$throwNew($AssertionError);
					}
				}
				return var$2;
			}
		} else {
			return nullptr;
		}
	}
}

void TransPatterns::visitBinary($JCTree$JCBinary* tree) {
	$set(this, bindingContext, $new($TransPatterns$BasicBindingContext, this));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$TreeTranslator::visitBinary(tree);
			$set(this, result, $nc(this->bindingContext)->decorateExpression(tree));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->bindingContext)->pop();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TransPatterns::visitConditional($JCTree$JCConditional* tree) {
	$set(this, bindingContext, $new($TransPatterns$BasicBindingContext, this));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$TreeTranslator::visitConditional(tree);
			$set(this, result, $nc(this->bindingContext)->decorateExpression(tree));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->bindingContext)->pop();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TransPatterns::visitIf($JCTree$JCIf* tree) {
	$set(this, bindingContext, $new($TransPatterns$BasicBindingContext, this));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$TreeTranslator::visitIf(tree);
			$set(this, result, $nc(this->bindingContext)->decorateStatement(tree));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->bindingContext)->pop();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TransPatterns::visitForLoop($JCTree$JCForLoop* tree) {
	$set(this, bindingContext, $new($TransPatterns$BasicBindingContext, this));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$TreeTranslator::visitForLoop(tree);
			$set(this, result, $nc(this->bindingContext)->decorateStatement(tree));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->bindingContext)->pop();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TransPatterns::visitWhileLoop($JCTree$JCWhileLoop* tree) {
	$set(this, bindingContext, $new($TransPatterns$BasicBindingContext, this));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$TreeTranslator::visitWhileLoop(tree);
			$set(this, result, $nc(this->bindingContext)->decorateStatement(tree));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->bindingContext)->pop();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TransPatterns::visitDoLoop($JCTree$JCDoWhileLoop* tree) {
	$set(this, bindingContext, $new($TransPatterns$BasicBindingContext, this));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$TreeTranslator::visitDoLoop(tree);
			$set(this, result, $nc(this->bindingContext)->decorateStatement(tree));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->bindingContext)->pop();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TransPatterns::visitMethodDef($JCTree$JCMethodDecl* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$MethodSymbol, prevMethodSym, this->currentMethodSym);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this, currentMethodSym, $nc(tree)->sym);
			$TreeTranslator::visitMethodDef(tree);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, currentMethodSym, prevMethodSym);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TransPatterns::visitIdent($JCTree$JCIdent* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$VarSymbol, bindingVar, nullptr);
	if (((int64_t)($nc($nc(tree)->sym)->flags() & (uint64_t)$Flags::MATCH_BINDING)) != 0) {
		$assign(bindingVar, $nc(this->bindingContext)->getBindingFor($cast($Symbol$BindingSymbol, tree->sym)));
	}
	if (bindingVar == nullptr) {
		$TreeTranslator::visitIdent(tree);
	} else {
		$set(this, result, $nc($($nc(this->make)->at($nc(tree)->pos$)))->Ident(static_cast<$Symbol*>(bindingVar)));
	}
}

void TransPatterns::visitBlock($JCTree$JCBlock* tree) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, statements, $new($ListBuffer));
	$set(this, bindingContext, $new($TransPatterns$2, this, statements));
	$var($Symbol$MethodSymbol, oldMethodSym, this->currentMethodSym);
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (this->currentMethodSym == nullptr) {
				$set(this, currentMethodSym, $new($Symbol$MethodSymbol, $nc(tree)->flags | $Flags::BLOCK, $nc(this->names)->empty, nullptr, this->currentClass));
			}
			{
				$var($List, l, $nc(tree)->stats);
				for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
					statements->append($cast($JCTree$JCStatement, $(translate($cast($JCTree$JCStatement, l->head)))));
				}
			}
			$set(tree, stats, statements->toList());
			$set(this, result, tree);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, currentMethodSym, oldMethodSym);
			$nc(this->bindingContext)->pop();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TransPatterns::visitLambda($JCTree$JCLambda* tree) {
	$useLocalCurrentObjectStackCache();
	$var($TransPatterns$BindingContext, prevContent, this->bindingContext);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this, bindingContext, $new($TransPatterns$BindingDeclarationFenceBindingContext, this));
			$TreeTranslator::visitLambda(tree);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, bindingContext, prevContent);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TransPatterns::visitClassDef($JCTree$JCClassDecl* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$ClassSymbol, prevCurrentClass, this->currentClass);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this, currentClass, $nc(tree)->sym);
			$TreeTranslator::visitClassDef(tree);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, currentClass, prevCurrentClass);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TransPatterns::visitVarDef($JCTree$JCVariableDecl* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$MethodSymbol, prevMethodSym, this->currentMethodSym);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set($nc(tree), mods, $cast($JCTree$JCModifiers, translate(static_cast<$JCTree*>(tree->mods))));
			$set(tree, vartype, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->vartype))));
			if (this->currentMethodSym == nullptr) {
				$set(this, currentMethodSym, $new($Symbol$MethodSymbol, ((int64_t)($nc(tree->mods)->flags & (uint64_t)(int64_t)$Flags::STATIC)) | $Flags::BLOCK, $nc(this->names)->empty, nullptr, this->currentClass));
			}
			if (tree->init != nullptr) {
				$set(tree, init, $cast($JCTree$JCExpression, translate(static_cast<$JCTree*>(tree->init))));
			}
			$set(this, result, tree);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, currentMethodSym, prevMethodSym);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$JCTree* TransPatterns::translateTopLevelClass($Env* env, $JCTree* cdef, $TreeMaker* make) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this, make, make);
			$set(this, env, env);
			translate(cdef);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, make, nullptr);
			$set(this, env, nullptr);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return cdef;
}

$JCTree$JCInstanceOf* TransPatterns::makeTypeTest($JCTree$JCExpression* lhs, $JCTree$JCExpression* type) {
	$var($JCTree$JCInstanceOf, tree, $nc(this->make)->TypeTest(lhs, type));
	$set($nc(tree), type, $nc(this->syms)->booleanType);
	return tree;
}

$JCTree$JCBinary* TransPatterns::makeBinary($JCTree$Tag* optag, $JCTree$JCExpression* lhs, $JCTree$JCExpression* rhs) {
	$var($JCTree$JCBinary, tree, $nc(this->make)->Binary(optag, lhs, rhs));
	$set($nc(tree), operator$, $nc(this->operators)->resolveBinary(tree, optag, $nc(lhs)->type, $nc(rhs)->type));
	$set(tree, type, $nc($nc(tree->operator$)->type)->getReturnType());
	return tree;
}

$JCTree$JCUnary* TransPatterns::makeUnary($JCTree$Tag* optag, $JCTree$JCExpression* arg) {
	$var($JCTree$JCUnary, tree, $nc(this->make)->Unary(optag, arg));
	$set($nc(tree), operator$, $nc(this->operators)->resolveUnary(tree, optag, $nc(arg)->type));
	$set(tree, type, $nc($nc(tree->operator$)->type)->getReturnType());
	return tree;
}

$JCTree$JCExpression* TransPatterns::convert($JCTree$JCExpression* expr, $Type* target) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCExpression, result, $nc($($nc(this->make)->at($($nc(expr)->pos()))))->TypeCast($(static_cast<$JCTree*>($nc(this->make)->Type(target))), expr));
	$set($nc(result), type, target);
	return result;
}

$JCTree$JCExpression* TransPatterns::makeLit($Type* type, Object$* value) {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc(this->make)->Literal($($nc(type)->getTag()), value)))->setType($($nc(type)->constType(value)));
}

bool TransPatterns::lambda$handleSwitch$8($JCTree$JCCaseLabel* l) {
	$init(TransPatterns);
	return !$nc(l)->isNullPattern();
}

bool TransPatterns::lambda$handleSwitch$7($JCTree$JCCaseLabel* l) {
	$init(TransPatterns);
	return $nc(l)->isNullPattern();
}

$PoolConstant$LoadableConstantArray* TransPatterns::lambda$handleSwitch$6(int32_t s) {
	$init(TransPatterns);
	return $new($PoolConstant$LoadableConstantArray, s);
}

bool TransPatterns::lambda$handleSwitch$5($PoolConstant$LoadableConstant* c) {
	$init(TransPatterns);
	return c != nullptr;
}

$PoolConstant$LoadableConstant* TransPatterns::lambda$handleSwitch$4($Type* seltype, $JCTree$JCCaseLabel* l) {
	return toLoadableConstant(l, seltype);
}

bool TransPatterns::lambda$handleSwitch$2($JCTree$JCCaseLabel* l) {
	$init(TransPatterns);
	$init($JCTree$Tag);
	return $nc(l)->hasTag($JCTree$Tag::DEFAULTCASELABEL);
}

bool TransPatterns::lambda$handleSwitch$1($JCTree$JCCaseLabel* p) {
	$init(TransPatterns);
	bool var$0 = $nc(p)->isExpression();
	return var$0 && $TreeInfo::isNull($cast($JCTree$JCExpression, p));
}

$Stream* TransPatterns::lambda$handleSwitch$0($JCTree$JCCase* c) {
	$init(TransPatterns);
	return $nc($nc(c)->labels)->stream();
}

void clinit$TransPatterns($Class* class$) {
	$assignStatic(TransPatterns::transPatternsKey, $new($Context$Key));
}

TransPatterns::TransPatterns() {
}

$Class* TransPatterns::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TransPatterns$$Lambda$lambda$handleSwitch$0::classInfo$.name)) {
			return TransPatterns$$Lambda$lambda$handleSwitch$0::load$(name, initialize);
		}
		if (name->equals(TransPatterns$$Lambda$lambda$handleSwitch$1$1::classInfo$.name)) {
			return TransPatterns$$Lambda$lambda$handleSwitch$1$1::load$(name, initialize);
		}
		if (name->equals(TransPatterns$$Lambda$lambda$handleSwitch$2$2::classInfo$.name)) {
			return TransPatterns$$Lambda$lambda$handleSwitch$2$2::load$(name, initialize);
		}
		if (name->equals(TransPatterns$$Lambda$lambda$handleSwitch$4$3::classInfo$.name)) {
			return TransPatterns$$Lambda$lambda$handleSwitch$4$3::load$(name, initialize);
		}
		if (name->equals(TransPatterns$$Lambda$lambda$handleSwitch$5$4::classInfo$.name)) {
			return TransPatterns$$Lambda$lambda$handleSwitch$5$4::load$(name, initialize);
		}
		if (name->equals(TransPatterns$$Lambda$lambda$handleSwitch$6$5::classInfo$.name)) {
			return TransPatterns$$Lambda$lambda$handleSwitch$6$5::load$(name, initialize);
		}
		if (name->equals(TransPatterns$$Lambda$lambda$handleSwitch$7$6::classInfo$.name)) {
			return TransPatterns$$Lambda$lambda$handleSwitch$7$6::load$(name, initialize);
		}
		if (name->equals(TransPatterns$$Lambda$lambda$handleSwitch$8$7::classInfo$.name)) {
			return TransPatterns$$Lambda$lambda$handleSwitch$8$7::load$(name, initialize);
		}
	}
	$loadClass(TransPatterns, name, initialize, &_TransPatterns_ClassInfo_, clinit$TransPatterns, allocate$TransPatterns);
	return class$;
}

$Class* TransPatterns::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com