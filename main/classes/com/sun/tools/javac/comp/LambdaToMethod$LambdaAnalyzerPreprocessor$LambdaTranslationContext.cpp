#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$1.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$Frame.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$3.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$4.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaSymbolKind.h>
#include <com/sun/tools/javac/comp/LambdaToMethod.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssign.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCFunctionalExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/EnumMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <java/util/function/BinaryOperator.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <javax/lang/model/element/ElementKind.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

#undef CAPTURED_OUTER_THIS
#undef CAPTURED_THIS
#undef CAPTURED_VAR
#undef EXCEPTION_PARAMETER
#undef LOCAL_VAR
#undef MTH
#undef PARAM
#undef TYP

using $LambdaToMethod$LambdaSymbolKindArray = $Array<::com::sun::tools::javac::comp::LambdaToMethod$LambdaSymbolKind>;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $LambdaToMethod = ::com::sun::tools::javac::comp::LambdaToMethod;
using $LambdaToMethod$1 = ::com::sun::tools::javac::comp::LambdaToMethod$1;
using $LambdaToMethod$LambdaAnalyzerPreprocessor = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor;
using $LambdaToMethod$LambdaAnalyzerPreprocessor$Frame = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$Frame;
using $LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1 = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1;
using $LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2 = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2;
using $LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$3 = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$3;
using $LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$4 = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$4;
using $LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter;
using $LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext;
using $LambdaToMethod$LambdaSymbolKind = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaSymbolKind;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCAssign = ::com::sun::tools::javac::tree::JCTree$JCAssign;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCFunctionalExpression = ::com::sun::tools::javac::tree::JCTree$JCFunctionalExpression;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
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
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $EnumMap = ::java::util::EnumMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;
using $ElementKind = ::javax::lang::model::element::ElementKind;
using $1Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$0 : public $Predicate {
	$class(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext* inst, $JCTree$JCIdent* lambdaIdent) {
		$set(this, inst$, inst);
		$set(this, lambdaIdent, lambdaIdent);
	}
	virtual bool test(Object$* out) override {
		 return $nc(inst$)->lambda$translate$0(lambdaIdent, $cast($Symbol, out));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$0>());
	}
	LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext* inst$ = nullptr;
	$JCTree$JCIdent* lambdaIdent = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$0, inst$)},
	{"lambdaIdent", "Lcom/sun/tools/javac/tree/JCTree$JCIdent;", nullptr, $PUBLIC, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$0, lambdaIdent)},
	{}
};
$MethodInfo LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext;Lcom/sun/tools/javac/tree/JCTree$JCIdent;)V", nullptr, $PUBLIC, $method(static_cast<void(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$0::*)(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext*,$JCTree$JCIdent*)>(&LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$0::load$($String* name, bool initialize) {
	$loadClass(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$0::class$ = nullptr;

class LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$1$1 : public $BinaryOperator {
	$class(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$1$1, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* a, Object$* b) override {
		 return $of(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::lambda$translate$1($cast($Symbol, a), $cast($Symbol, b)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$1$1::*)()>(&LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$1$1::init$))},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$1$1",
	"java.lang.Object",
	"java.util.function.BinaryOperator",
	nullptr,
	methodInfos
};
$Class* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$1$1::load$($String* name, bool initialize) {
	$loadClass(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$1$1::class$ = nullptr;

$FieldInfo _LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor;", nullptr, $FINAL | $SYNTHETIC, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, this$1)},
	{"self", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $FINAL, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, self)},
	{"assignedTo", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $FINAL, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, assignedTo)},
	{"translatedSymbols", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaSymbolKind;Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;>;>;", 0, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, translatedSymbols)},
	{"translatedSym", "Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, 0, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, translatedSym)},
	{"syntheticParams", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;>;", 0, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, syntheticParams)},
	{"freeVarProcessedLocalClasses", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol;>;", $FINAL, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, freeVarProcessedLocalClasses)},
	{"methodReferenceReceiver", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, methodReferenceReceiver)},
	{}
};

$MethodInfo _LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor;Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, 0, $method(static_cast<void(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::*)($LambdaToMethod$LambdaAnalyzerPreprocessor*,$JCTree$JCLambda*)>(&LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::init$))},
	{"addSymbol", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaSymbolKind;)V", nullptr, 0},
	{"complete", "()V", nullptr, 0},
	{"generatedLambdaSig", "()Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"getSymbolMap", "(Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaSymbolKind;)Ljava/util/Map;", "(Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaSymbolKind;)Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;>;", 0},
	{"lambda$translate$0", "(Lcom/sun/tools/javac/tree/JCTree$JCIdent;Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::*)($JCTree$JCIdent*,$Symbol*)>(&LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::lambda$translate$0))},
	{"lambda$translate$1", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Symbol*(*)($Symbol*,$Symbol*)>(&LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::lambda$translate$1))},
	{"lambdaName", "()Lcom/sun/tools/javac/util/Name;", nullptr, $PRIVATE, $method(static_cast<$Name*(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::*)()>(&LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::lambdaName))},
	{"serializedLambdaDisambiguation", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::*)()>(&LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::serializedLambdaDisambiguation))},
	{"serializedLambdaName", "()Lcom/sun/tools/javac/util/Name;", nullptr, $PRIVATE, $method(static_cast<$Name*(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::*)()>(&LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::serializedLambdaName))},
	{"translate", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaSymbolKind;)Lcom/sun/tools/javac/code/Symbol;", nullptr, 0},
	{"translate", "(Lcom/sun/tools/javac/tree/JCTree$JCIdent;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, 0},
	{"translate", "(Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC},
	{"translate", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)Lcom/sun/tools/javac/tree/JCTree$JCNewClass;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor", "com.sun.tools.javac.comp.LambdaToMethod", "LambdaAnalyzerPreprocessor", 0},
	{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext", "com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor", "LambdaTranslationContext", 0},
	{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext", "com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor", "TranslationContext", $ABSTRACT},
	{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$4", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$3", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.tree.JCTree$JCLambda", "com.sun.tools.javac.tree.JCTree", "JCLambda", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext",
	"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext",
	nullptr,
	_LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext_FieldInfo_,
	_LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext_MethodInfo_,
	"Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext<Lcom/sun/tools/javac/tree/JCTree$JCLambda;>;",
	nullptr,
	_LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.LambdaToMethod"
};

$Object* allocate$LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext($Class* clazz) {
	return $of($alloc(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext));
}

void LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::init$($LambdaToMethod$LambdaAnalyzerPreprocessor* this$1, $JCTree$JCLambda* tree) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$1, this$1);
	$LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext::init$(this$1, tree);
	$var($LambdaToMethod$LambdaAnalyzerPreprocessor$Frame, frame, $cast($LambdaToMethod$LambdaAnalyzerPreprocessor$Frame, $nc(this$1->frameStack)->head));
	$init($LambdaToMethod$1);
	switch ($nc($LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc($nc(frame)->tree)->getTag())))->ordinal())) {
	case 5:
		{
			$set(this, assignedTo, ($set(this, self, $nc(($cast($JCTree$JCVariableDecl, frame->tree)))->sym)));
			break;
		}
	case 9:
		{
			$set(this, self, nullptr);
			$set(this, assignedTo, $TreeInfo::symbol($($cast($JCTree, $nc(($cast($JCTree$JCAssign, frame->tree)))->getVariable()))));
			break;
		}
	default:
		{
			$set(this, assignedTo, ($set(this, self, nullptr)));
			break;
		}
	}
	$init($Kinds$Kind);
	if ($nc(this->owner)->kind == $Kinds$Kind::MTH) {
		$var($Symbol$MethodSymbol, originalOwner, $cast($Symbol$MethodSymbol, $nc(this->owner)->clone($nc(this->owner)->owner)));
		$set(this, translatedSym, $new($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1, this, 4096 | 2, nullptr, nullptr, $($nc(this->owner)->enclClass()), this$1, originalOwner));
	} else {
		$set(this, translatedSym, $nc(this$1->this$0)->makePrivateSyntheticMethod(0, nullptr, nullptr, $($nc(this->owner)->enclClass())));
	}
	$load($LambdaToMethod$LambdaSymbolKind);
	$set(this, translatedSymbols, $new($EnumMap, $LambdaToMethod$LambdaSymbolKind::class$));
	$init($LambdaToMethod$LambdaSymbolKind);
	$nc(this->translatedSymbols)->put($LambdaToMethod$LambdaSymbolKind::PARAM, $$new($LinkedHashMap));
	$nc(this->translatedSymbols)->put($LambdaToMethod$LambdaSymbolKind::LOCAL_VAR, $$new($LinkedHashMap));
	$nc(this->translatedSymbols)->put($LambdaToMethod$LambdaSymbolKind::CAPTURED_VAR, $$new($LinkedHashMap));
	$nc(this->translatedSymbols)->put($LambdaToMethod$LambdaSymbolKind::CAPTURED_THIS, $$new($LinkedHashMap));
	$nc(this->translatedSymbols)->put($LambdaToMethod$LambdaSymbolKind::CAPTURED_OUTER_THIS, $$new($LinkedHashMap));
	$set(this, freeVarProcessedLocalClasses, $new($HashSet));
}

$String* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::serializedLambdaDisambiguation() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	$Assert::check($nc(this->owner)->type != nullptr || this->this$1->directlyEnclosingLambda() != nullptr);
	if ($nc(this->owner)->type != nullptr) {
		buf->append($($nc(this->this$1->this$0)->typeSig($nc(this->owner)->type, true)));
		buf->append(":"_s);
	}
	buf->append($(static_cast<$CharSequence*>($nc($nc($($nc($nc(this->this$1->this$0)->types)->findDescriptorSymbol($nc($nc(($cast($JCTree$JCLambda, this->tree)))->type)->tsym)))->owner)->flatName())));
	buf->append(" "_s);
	if (this->assignedTo != nullptr) {
		buf->append($(static_cast<$CharSequence*>($nc(this->assignedTo)->flatName())));
		buf->append("="_s);
	}
	{
		$init($LambdaToMethod$LambdaSymbolKind);
		$var($Iterator, i$, $nc($($nc($(getSymbolMap($LambdaToMethod$LambdaSymbolKind::CAPTURED_VAR)))->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, fv, $cast($Symbol, i$->next()));
			{
				if (fv != this->self) {
					buf->append($($nc(this->this$1->this$0)->typeSig($nc(fv)->type, true)));
					buf->append(" "_s);
					buf->append($(static_cast<$CharSequence*>($nc(fv)->flatName())));
					buf->append(","_s);
				}
			}
		}
	}
	return buf->toString();
}

$Name* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::lambdaName() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({$(enclosingMethodName()), "$"_s}));
	return $nc($nc($nc(this->this$1->this$0)->names)->lambda)->append($($nc($nc(this->this$1->this$0)->names)->fromString($$concat(var$0, $$str(this->this$1->lambdaCount++)))));
}

$Name* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::serializedLambdaName() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	buf->append(static_cast<$CharSequence*>($nc($nc(this->this$1->this$0)->names)->lambda));
	buf->append($(enclosingMethodName()));
	buf->append(u'$');
	$var($String, disam, serializedLambdaDisambiguation());
	buf->append($($Integer::toHexString($nc(disam)->hashCode())));
	buf->append(u'$');
	buf->append($nc(this->this$1->syntheticMethodNameCounts)->getIndex(buf));
	$var($String, result, buf->toString());
	return $nc($nc(this->this$1->this$0)->names)->fromString(result);
}

$Symbol* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::translate($Symbol* sym, $LambdaToMethod$LambdaSymbolKind* skind) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, ret, nullptr);
	$init($LambdaToMethod$1);
	{
		$var($Name, name, nullptr)
		switch ($nc($LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$comp$LambdaToMethod$LambdaSymbolKind)->get($nc((skind))->ordinal())) {
		case 1:
			{
				$assign(ret, sym);
				break;
			}
		case 2:
			{
				$assign(ret, $new($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2, this, (4096 | 16) | (int64_t)0x0000000200000000, $nc(sym)->name, $($nc($nc(this->this$1->this$0)->types)->erasure(sym->type)), this->translatedSym, sym));
				break;
			}
		case 3:
			{
				$assign(name, $nc($nc(this->this$1->this$0)->names)->fromString($$new($String, $$str({$($nc($($nc($($nc(sym)->flatName()))->toString()))->replace(u'.', u'$')), $nc($nc(this->this$1->this$0)->names)->dollarThis}))));
				$assign(ret, $new($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$3, this, (4096 | 16) | (int64_t)0x0000000200000000, name, $($nc($nc(this->this$1->this$0)->types)->erasure($nc(sym)->type)), this->translatedSym, sym));
				break;
			}
		case 4:
			{
				$assign(ret, $new($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$4, this, (int64_t)($nc(sym)->flags() & (uint64_t)(int64_t)16), sym->name, sym->type, this->translatedSym, sym));
				$nc(($cast($Symbol$VarSymbol, ret)))->pos = $nc(($cast($Symbol$VarSymbol, sym)))->pos;
				if ($nc(($cast($Symbol$VarSymbol, sym)))->isExceptionParameter()) {
					$init($ElementKind);
					$nc(($cast($Symbol$VarSymbol, ret)))->setData($ElementKind::EXCEPTION_PARAMETER);
				}
				break;
			}
		case 5:
			{
				int64_t var$0 = ((int64_t)($nc(sym)->flags() & (uint64_t)(int64_t)16)) | (int64_t)0x0000000200000000;
				$var($Name, var$1, sym->name);
				$assign(ret, $new($Symbol$VarSymbol, var$0, var$1, $($nc($nc(this->this$1->this$0)->types)->erasure(sym->type)), this->translatedSym));
				$nc(($cast($Symbol$VarSymbol, ret)))->pos = $nc(($cast($Symbol$VarSymbol, sym)))->pos;
				if ($nc(($cast($Symbol$VarSymbol, sym)))->isExceptionParameter()) {
					$init($ElementKind);
					$nc(($cast($Symbol$VarSymbol, ret)))->setData($ElementKind::EXCEPTION_PARAMETER);
				}
				break;
			}
		default:
			{
				$Assert::error($(skind->name()));
				$throwNew($AssertionError);
			}
		}
	}
	if (ret != sym && skind->propagateAnnotations()) {
		$nc(ret)->setDeclarationAttributes($($nc(sym)->getRawAttributes()));
		ret->setTypeAttributes($($nc(sym)->getRawTypeAttributes()));
	}
	return ret;
}

void LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::addSymbol($Symbol* sym, $LambdaToMethod$LambdaSymbolKind* skind$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($LambdaToMethod$LambdaSymbolKind, skind, skind$renamed);
	$init($LambdaToMethod$LambdaSymbolKind);
	$init($Kinds$Kind);
	if (skind == $LambdaToMethod$LambdaSymbolKind::CAPTURED_THIS && sym != nullptr && sym->kind == $Kinds$Kind::TYP && !$nc(this->this$1->typesUnderConstruction)->isEmpty()) {
		$var($Symbol$ClassSymbol, currentClass, this->this$1->currentClass());
		if (currentClass != nullptr && $nc(this->this$1->typesUnderConstruction)->contains(currentClass)) {
			$Assert::check(!$equals(sym, currentClass));
			skind = $LambdaToMethod$LambdaSymbolKind::CAPTURED_OUTER_THIS;
		}
	}
	$var($Map, transMap, getSymbolMap(skind));
	if (!$nc(transMap)->containsKey(sym)) {
		transMap->put(sym, $(translate(sym, skind)));
	}
}

$Map* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::getSymbolMap($LambdaToMethod$LambdaSymbolKind* skind) {
	$var($Map, m, $cast($Map, $nc(this->translatedSymbols)->get(skind)));
	$Assert::checkNonNull(m);
	return m;
}

$JCTree* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::translate($JCTree$JCIdent* lambdaIdent) {
	$useLocalCurrentObjectStackCache();
	{
		$var($LambdaToMethod$LambdaSymbolKindArray, arr$, $LambdaToMethod$LambdaSymbolKind::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$LambdaToMethod$LambdaSymbolKind* kind = arr$->get(i$);
			{
				$var($Map, m, getSymbolMap(kind));
				$init($LambdaToMethod$1);
				{
					$var($Optional, proxy, nullptr)
					switch ($nc($LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$comp$LambdaToMethod$LambdaSymbolKind)->get($nc((kind))->ordinal())) {
					default:
						{
							if ($nc(m)->containsKey($nc(lambdaIdent)->sym)) {
								$var($Symbol, tSym, $cast($Symbol, m->get($nc(lambdaIdent)->sym)));
								$var($JCTree, t, $nc($($nc($nc(this->this$1->this$0)->make)->Ident(tSym)))->setType($nc(lambdaIdent)->type));
								return t;
							}
							break;
						}
					case 3:
						{
							$assign(proxy, $nc($($nc($($nc($($nc(m)->keySet()))->stream()))->filter(static_cast<$Predicate*>($$new(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$0, this, lambdaIdent)))))->reduce(static_cast<$BinaryOperator*>($$new(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$1$1))));
							if ($nc(proxy)->isPresent()) {
								$var($Symbol, tSym, $cast($Symbol, m->get($(proxy->get()))));
								$var($JCTree$JCExpression, t, $nc($($nc($nc(this->this$1->this$0)->make)->Ident(tSym)))->setType($nc($nc($nc(lambdaIdent)->sym)->owner)->type));
								$assign(t, $nc($nc(this->this$1->this$0)->make)->Select(t, $nc(lambdaIdent)->name));
								$nc(t)->setType($nc(lambdaIdent)->type);
								$TreeInfo::setSymbol(t, $nc(lambdaIdent)->sym);
								return t;
							}
							break;
						}
					}
				}
			}
		}
	}
	return nullptr;
}

$JCTree* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::translate($JCTree$JCFieldAccess* fieldAccess) {
	$useLocalCurrentObjectStackCache();
	$Assert::check($nc(fieldAccess)->name == $nc($nc(this->this$1->this$0)->names)->_this);
	$init($LambdaToMethod$LambdaSymbolKind);
	$var($Map, m, $cast($Map, $nc(this->translatedSymbols)->get($LambdaToMethod$LambdaSymbolKind::CAPTURED_OUTER_THIS)));
	if ($nc(m)->containsKey($nc($nc(fieldAccess)->sym)->owner)) {
		$var($Symbol, tSym, $cast($Symbol, m->get($nc($nc(fieldAccess)->sym)->owner)));
		$var($JCTree$JCExpression, t, $nc($($nc($nc(this->this$1->this$0)->make)->Ident(tSym)))->setType($nc($nc($nc(fieldAccess)->sym)->owner)->type));
		return t;
	}
	return nullptr;
}

$JCTree$JCNewClass* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::translate($JCTree$JCNewClass* newClass) {
	$useLocalCurrentObjectStackCache();
	$Assert::check($nc($nc($nc($nc(newClass)->clazz)->type)->tsym)->hasOuterInstance() && newClass->encl == nullptr);
	$init($LambdaToMethod$LambdaSymbolKind);
	$var($Map, m, $cast($Map, $nc(this->translatedSymbols)->get($LambdaToMethod$LambdaSymbolKind::CAPTURED_OUTER_THIS)));
	$var($Type, enclosingType, $nc($nc($nc(newClass)->clazz)->type)->getEnclosingType());
	if ($nc(m)->containsKey($nc(enclosingType)->tsym)) {
		$var($Symbol, tSym, $cast($Symbol, m->get($nc(enclosingType)->tsym)));
		$var($JCTree$JCExpression, encl, $nc($($nc($nc(this->this$1->this$0)->make)->Ident(tSym)))->setType(enclosingType));
		$set(newClass, encl, encl);
	}
	return newClass;
}

void LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::complete() {
	$useLocalCurrentObjectStackCache();
	if (this->syntheticParams != nullptr) {
		return;
	}
	bool inInterface = $nc($nc(this->translatedSym)->owner)->isInterface();
	$init($LambdaToMethod$LambdaSymbolKind);
	bool thisReferenced = !$nc($(getSymbolMap($LambdaToMethod$LambdaSymbolKind::CAPTURED_THIS)))->isEmpty();
	$nc(this->translatedSym)->flags_field = ((((4096 | (int64_t)0x0002000000000000) | ((int64_t)($nc(this->owner)->flags_field & (uint64_t)(int64_t)2048))) | ((int64_t)($nc($nc(this->owner)->owner)->flags_field & (uint64_t)(int64_t)2048))) | 2) | (thisReferenced ? (inInterface ? (int64_t)0x0000080000000000 : (int64_t)0) : (int64_t)8);
	$var($ListBuffer, params, $new($ListBuffer));
	$var($ListBuffer, parameterSymbols, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc($($nc($(getSymbolMap($LambdaToMethod$LambdaSymbolKind::CAPTURED_VAR)))->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, thisSym, $cast($Symbol, i$->next()));
			{
				params->append($($nc($nc(this->this$1->this$0)->make)->VarDef($cast($Symbol$VarSymbol, thisSym), nullptr)));
				parameterSymbols->append($cast($Symbol$VarSymbol, thisSym));
			}
		}
	}
	{
		$var($Iterator, i$, $nc($($nc($(getSymbolMap($LambdaToMethod$LambdaSymbolKind::CAPTURED_OUTER_THIS)))->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, thisSym, $cast($Symbol, i$->next()));
			{
				params->append($($nc($nc(this->this$1->this$0)->make)->VarDef($cast($Symbol$VarSymbol, thisSym), nullptr)));
				parameterSymbols->append($cast($Symbol$VarSymbol, thisSym));
			}
		}
	}
	{
		$var($Iterator, i$, $nc($($nc($(getSymbolMap($LambdaToMethod$LambdaSymbolKind::PARAM)))->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, thisSym, $cast($Symbol, i$->next()));
			{
				params->append($($nc($nc(this->this$1->this$0)->make)->VarDef($cast($Symbol$VarSymbol, thisSym), nullptr)));
				parameterSymbols->append($cast($Symbol$VarSymbol, thisSym));
			}
		}
	}
	$set(this, syntheticParams, params->toList());
	$set($nc(this->translatedSym), params$, parameterSymbols->toList());
	$set($nc(this->translatedSym), name, isSerializable() ? serializedLambdaName() : lambdaName());
	$var($Type, var$0, generatedLambdaSig());
	$set($nc(this->translatedSym), type, $nc($nc(this->this$1->this$0)->types)->createMethodTypeWithParameters(var$0, $($TreeInfo::types(this->syntheticParams))));
}

$Type* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::generatedLambdaSig() {
	return $nc($nc(this->this$1->this$0)->types)->erasure($($nc(($cast($JCTree$JCLambda, this->tree)))->getDescriptorType($nc(this->this$1->this$0)->types)));
}

$Symbol* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::lambda$translate$1($Symbol* a, $Symbol* b) {
	$init(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext);
	return $nc(a)->isEnclosedBy($cast($Symbol$ClassSymbol, b)) ? a : b;
}

bool LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::lambda$translate$0($JCTree$JCIdent* lambdaIdent, $Symbol* out) {
	return $nc($nc(lambdaIdent)->sym)->isMemberOf($nc($nc(out)->type)->tsym, $nc(this->this$1->this$0)->types);
}

LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext() {
}

$Class* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$0::classInfo$.name)) {
			return LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$0::load$(name, initialize);
		}
		if (name->equals(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$1$1::classInfo$.name)) {
			return LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$1$1::load$(name, initialize);
		}
	}
	$loadClass(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, name, initialize, &_LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext_ClassInfo_, allocate$LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext);
	return class$;
}

$Class* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com