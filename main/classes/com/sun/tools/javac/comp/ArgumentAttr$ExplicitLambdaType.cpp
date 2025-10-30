#include <com/sun/tools/javac/comp/ArgumentAttr$ExplicitLambdaType.h>

#include <com/sun/source/tree/LambdaExpressionTree$BodyKind.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$JCVoidType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$FunctionDescriptorLookupError.h>
#include <com/sun/tools/javac/comp/ArgumentAttr$2.h>
#include <com/sun/tools/javac/comp/ArgumentAttr$ArgumentType.h>
#include <com/sun/tools/javac/comp/ArgumentAttr$ExplicitLambdaType$1.h>
#include <com/sun/tools/javac/comp/ArgumentAttr.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/Attr$TargetInfo.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$FilterScanner.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCFunctionalExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCReturn.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/function/Supplier.h>
#include <jcpp.h>

#undef VOID

using $LambdaExpressionTree$BodyKind = ::com::sun::source::tree::LambdaExpressionTree$BodyKind;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$JCVoidType = ::com::sun::tools::javac::code::Type$JCVoidType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types$FunctionDescriptorLookupError = ::com::sun::tools::javac::code::Types$FunctionDescriptorLookupError;
using $ArgumentAttr = ::com::sun::tools::javac::comp::ArgumentAttr;
using $ArgumentAttr$2 = ::com::sun::tools::javac::comp::ArgumentAttr$2;
using $ArgumentAttr$ArgumentType = ::com::sun::tools::javac::comp::ArgumentAttr$ArgumentType;
using $ArgumentAttr$ExplicitLambdaType$1 = ::com::sun::tools::javac::comp::ArgumentAttr$ExplicitLambdaType$1;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $Attr$TargetInfo = ::com::sun::tools::javac::comp::Attr$TargetInfo;
using $Check$CheckContext = ::com::sun::tools::javac::comp::Check$CheckContext;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $DeferredAttr$FilterScanner = ::com::sun::tools::javac::comp::DeferredAttr$FilterScanner;
using $Env = ::com::sun::tools::javac::comp::Env;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCFunctionalExpression = ::com::sun::tools::javac::tree::JCTree$JCFunctionalExpression;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
using $JCTree$JCReturn = ::com::sun::tools::javac::tree::JCTree$JCReturn;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;
using $Supplier = ::java::util::function::Supplier;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class ArgumentAttr$ExplicitLambdaType$$Lambda$lambda$argtypes$0 : public $Supplier {
	$class(ArgumentAttr$ExplicitLambdaType$$Lambda$lambda$argtypes$0, $NO_CLASS_INIT, $Supplier)
public:
	void init$(ArgumentAttr$ExplicitLambdaType* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->lambda$argtypes$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ArgumentAttr$ExplicitLambdaType$$Lambda$lambda$argtypes$0>());
	}
	ArgumentAttr$ExplicitLambdaType* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ArgumentAttr$ExplicitLambdaType$$Lambda$lambda$argtypes$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ArgumentAttr$ExplicitLambdaType$$Lambda$lambda$argtypes$0, inst$)},
	{}
};
$MethodInfo ArgumentAttr$ExplicitLambdaType$$Lambda$lambda$argtypes$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/ArgumentAttr$ExplicitLambdaType;)V", nullptr, $PUBLIC, $method(static_cast<void(ArgumentAttr$ExplicitLambdaType$$Lambda$lambda$argtypes$0::*)(ArgumentAttr$ExplicitLambdaType*)>(&ArgumentAttr$ExplicitLambdaType$$Lambda$lambda$argtypes$0::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ArgumentAttr$ExplicitLambdaType$$Lambda$lambda$argtypes$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.ArgumentAttr$ExplicitLambdaType$$Lambda$lambda$argtypes$0",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* ArgumentAttr$ExplicitLambdaType$$Lambda$lambda$argtypes$0::load$($String* name, bool initialize) {
	$loadClass(ArgumentAttr$ExplicitLambdaType$$Lambda$lambda$argtypes$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ArgumentAttr$ExplicitLambdaType$$Lambda$lambda$argtypes$0::class$ = nullptr;

class ArgumentAttr$ExplicitLambdaType$$Lambda$lambda$returnExpressions$1$1 : public $Supplier {
	$class(ArgumentAttr$ExplicitLambdaType$$Lambda$lambda$returnExpressions$1$1, $NO_CLASS_INIT, $Supplier)
public:
	void init$(ArgumentAttr$ExplicitLambdaType* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->lambda$returnExpressions$1());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ArgumentAttr$ExplicitLambdaType$$Lambda$lambda$returnExpressions$1$1>());
	}
	ArgumentAttr$ExplicitLambdaType* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ArgumentAttr$ExplicitLambdaType$$Lambda$lambda$returnExpressions$1$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ArgumentAttr$ExplicitLambdaType$$Lambda$lambda$returnExpressions$1$1, inst$)},
	{}
};
$MethodInfo ArgumentAttr$ExplicitLambdaType$$Lambda$lambda$returnExpressions$1$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/ArgumentAttr$ExplicitLambdaType;)V", nullptr, $PUBLIC, $method(static_cast<void(ArgumentAttr$ExplicitLambdaType$$Lambda$lambda$returnExpressions$1$1::*)(ArgumentAttr$ExplicitLambdaType*)>(&ArgumentAttr$ExplicitLambdaType$$Lambda$lambda$returnExpressions$1$1::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ArgumentAttr$ExplicitLambdaType$$Lambda$lambda$returnExpressions$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.ArgumentAttr$ExplicitLambdaType$$Lambda$lambda$returnExpressions$1$1",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* ArgumentAttr$ExplicitLambdaType$$Lambda$lambda$returnExpressions$1$1::load$($String* name, bool initialize) {
	$loadClass(ArgumentAttr$ExplicitLambdaType$$Lambda$lambda$returnExpressions$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ArgumentAttr$ExplicitLambdaType$$Lambda$lambda$returnExpressions$1$1::class$ = nullptr;

$FieldInfo _ArgumentAttr$ExplicitLambdaType_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/ArgumentAttr;", nullptr, $FINAL | $SYNTHETIC, $field(ArgumentAttr$ExplicitLambdaType, this$0)},
	{"argtypes", "Ljava/util/Optional;", "Ljava/util/Optional<Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;>;", 0, $field(ArgumentAttr$ExplicitLambdaType, argtypes$)},
	{"returnExpressions", "Ljava/util/Optional;", "Ljava/util/Optional<Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCReturn;>;>;", 0, $field(ArgumentAttr$ExplicitLambdaType, returnExpressions$)},
	{}
};

$MethodInfo _ArgumentAttr$ExplicitLambdaType_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/ArgumentAttr;Lcom/sun/tools/javac/tree/JCTree$JCLambda;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", 0, $method(static_cast<void(ArgumentAttr$ExplicitLambdaType::*)($ArgumentAttr*,$JCTree$JCLambda*,$Env*,$JCTree$JCLambda*)>(&ArgumentAttr$ExplicitLambdaType::init$))},
	{"<init>", "(Lcom/sun/tools/javac/comp/ArgumentAttr;Lcom/sun/tools/javac/tree/JCTree$JCLambda;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCLambda;Ljava/util/Map;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCLambda;Ljava/util/Map<Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/code/Type;>;)V", 0, $method(static_cast<void(ArgumentAttr$ExplicitLambdaType::*)($ArgumentAttr*,$JCTree$JCLambda*,$Env*,$JCTree$JCLambda*,$Map*)>(&ArgumentAttr$ExplicitLambdaType::init$))},
	{"argtypes", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0},
	{"checkLambdaCompatible", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/Attr$ResultInfo;)V", nullptr, $PRIVATE, $method(static_cast<void(ArgumentAttr$ExplicitLambdaType::*)($Type*,$Attr$ResultInfo*)>(&ArgumentAttr$ExplicitLambdaType::checkLambdaCompatible))},
	{"checkReturnInStatementLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCReturn;Lcom/sun/tools/javac/comp/Attr$ResultInfo;)V", nullptr, 0},
	{"dup", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/comp/ArgumentAttr$ArgumentType;", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/comp/ArgumentAttr$ArgumentType<Lcom/sun/tools/javac/tree/JCTree$JCLambda;>;", 0},
	{"dup", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/comp/ArgumentAttr$ArgumentType;", nullptr, $VOLATILE | $SYNTHETIC},
	{"getReturnType", "(Lcom/sun/tools/javac/tree/JCTree$JCReturn;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"lambda$argtypes$0", "()Lcom/sun/tools/javac/util/List;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$List*(ArgumentAttr$ExplicitLambdaType::*)()>(&ArgumentAttr$ExplicitLambdaType::lambda$argtypes$0))},
	{"lambda$returnExpressions$1", "()Lcom/sun/tools/javac/util/List;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$List*(ArgumentAttr$ExplicitLambdaType::*)()>(&ArgumentAttr$ExplicitLambdaType::lambda$returnExpressions$1))},
	{"overloadCheck", "(Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"returnExpressions", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCReturn;>;", 0},
	{}
};

$InnerClassInfo _ArgumentAttr$ExplicitLambdaType_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.ArgumentAttr$ExplicitLambdaType", "com.sun.tools.javac.comp.ArgumentAttr", "ExplicitLambdaType", 0},
	{"com.sun.tools.javac.comp.ArgumentAttr$ArgumentType", "com.sun.tools.javac.comp.ArgumentAttr", "ArgumentType", $ABSTRACT},
	{"com.sun.tools.javac.comp.ArgumentAttr$ExplicitLambdaType$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.tree.JCTree$JCLambda", "com.sun.tools.javac.tree.JCTree", "JCLambda", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ArgumentAttr$ExplicitLambdaType_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.ArgumentAttr$ExplicitLambdaType",
	"com.sun.tools.javac.comp.ArgumentAttr$ArgumentType",
	nullptr,
	_ArgumentAttr$ExplicitLambdaType_FieldInfo_,
	_ArgumentAttr$ExplicitLambdaType_MethodInfo_,
	"Lcom/sun/tools/javac/comp/ArgumentAttr$ArgumentType<Lcom/sun/tools/javac/tree/JCTree$JCLambda;>;",
	nullptr,
	_ArgumentAttr$ExplicitLambdaType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.ArgumentAttr"
};

$Object* allocate$ArgumentAttr$ExplicitLambdaType($Class* clazz) {
	return $of($alloc(ArgumentAttr$ExplicitLambdaType));
}

void ArgumentAttr$ExplicitLambdaType::init$($ArgumentAttr* this$0, $JCTree$JCLambda* originalLambda, $Env* env, $JCTree$JCLambda* speculativeLambda) {
	ArgumentAttr$ExplicitLambdaType::init$(this$0, originalLambda, env, speculativeLambda, $$new($HashMap));
}

void ArgumentAttr$ExplicitLambdaType::init$($ArgumentAttr* this$0, $JCTree$JCLambda* originalLambda, $Env* env, $JCTree$JCLambda* speculativeLambda, $Map* speculativeTypes) {
	$set(this, this$0, this$0);
	$ArgumentAttr$ArgumentType::init$(this$0, originalLambda, env, speculativeLambda, speculativeTypes);
	$set(this, argtypes$, $Optional::empty());
	$set(this, returnExpressions$, $Optional::empty());
}

$List* ArgumentAttr$ExplicitLambdaType::argtypes() {
	return $cast($List, $nc(this->argtypes$)->orElseGet(static_cast<$Supplier*>($$new(ArgumentAttr$ExplicitLambdaType$$Lambda$lambda$argtypes$0, this))));
}

$List* ArgumentAttr$ExplicitLambdaType::returnExpressions() {
	return $cast($List, $nc(this->returnExpressions$)->orElseGet(static_cast<$Supplier*>($$new(ArgumentAttr$ExplicitLambdaType$$Lambda$lambda$returnExpressions$1$1, this))));
}

$Type* ArgumentAttr$ExplicitLambdaType::overloadCheck($Attr$ResultInfo* resultInfo, $DeferredAttr$DeferredAttrContext* deferredAttrContext) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($Attr$TargetInfo, targetInfo, $nc(this->this$0->attr)->getTargetInfo($cast($JCTree$JCPolyExpression, this->speculativeTree$), resultInfo, $(argtypes())));
		$var($Type, lambdaType, $nc(targetInfo)->descriptor);
		$var($Type, currentTarget, targetInfo->target);
		checkLambdaCompatible(lambdaType, resultInfo);
		return currentTarget;
	} catch ($Types$FunctionDescriptorLookupError& ex) {
		$nc($nc(resultInfo)->checkContext)->report(nullptr, $(ex->getDiagnostic()));
		return nullptr;
	}
	$shouldNotReachHere();
}

void ArgumentAttr$ExplicitLambdaType::checkLambdaCompatible($Type* descriptor, $Attr$ResultInfo* resultInfo) {
	$useLocalCurrentObjectStackCache();
	$var($Check$CheckContext, checkContext, $nc(resultInfo)->checkContext);
	$var($Attr$ResultInfo, bodyResultInfo, $nc(this->this$0->attr)->lambdaBodyResult($cast($JCTree$JCLambda, this->speculativeTree$), descriptor, resultInfo));
	$init($ArgumentAttr$2);
	switch ($nc($ArgumentAttr$2::$SwitchMap$com$sun$source$tree$LambdaExpressionTree$BodyKind)->get($nc(($($nc(($cast($JCTree$JCLambda, this->speculativeTree$)))->getBodyKind())))->ordinal())) {
	case 1:
		{
			this->this$0->checkSpeculative($nc(($cast($JCTree$JCLambda, this->speculativeTree$)))->body, $nc($nc(($cast($JCTree$JCLambda, this->speculativeTree$)))->body)->type, bodyResultInfo);
			break;
		}
	case 2:
		{
			{
				$var($Iterator, i$, $nc($(returnExpressions()))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($JCTree$JCReturn, ret, $cast($JCTree$JCReturn, i$->next()));
					{
						checkReturnInStatementLambda(ret, bodyResultInfo);
					}
				}
			}
			break;
		}
	}
	$nc(this->this$0->attr)->checkLambdaCompatible($cast($JCTree$JCLambda, this->speculativeTree$), descriptor, checkContext);
}

void ArgumentAttr$ExplicitLambdaType::checkReturnInStatementLambda($JCTree$JCReturn* ret, $Attr$ResultInfo* resultInfo) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	if ($nc($nc(resultInfo)->pt)->hasTag($TypeTag::VOID) && $nc(ret)->expr != nullptr) {
		$var($JCDiagnostic$DiagnosticPosition, var$0, $nc(($cast($JCTree$JCLambda, this->speculativeTree$)))->pos());
		$nc(resultInfo->checkContext)->report(var$0, $($nc(this->this$0->diags)->fragment("unexpected.ret.val"_s, $$new($ObjectArray, 0))));
	} else {
		if (!$nc(resultInfo->pt)->hasTag($TypeTag::VOID)) {
			if (ret->expr == nullptr) {
				$var($JCDiagnostic$DiagnosticPosition, var$1, $nc(($cast($JCTree$JCLambda, this->speculativeTree$)))->pos());
				$nc(resultInfo->checkContext)->report(var$1, $($nc(this->this$0->diags)->fragment("missing.ret.val"_s, $$new($ObjectArray, 0))));
			}
			this->this$0->checkSpeculative(ret->expr, $nc(ret->expr)->type, resultInfo);
		}
	}
}

$Type* ArgumentAttr$ExplicitLambdaType::getReturnType($JCTree$JCReturn* ret) {
	if ($nc(ret)->expr == nullptr) {
		return $nc(this->this$0->syms)->voidType;
	} else {
		return $nc(ret->expr)->type;
	}
}

$ArgumentAttr$ArgumentType* ArgumentAttr$ExplicitLambdaType::dup($JCTree$JCLambda* tree, $Env* env) {
	return $new(ArgumentAttr$ExplicitLambdaType, this->this$0, tree, env, $cast($JCTree$JCLambda, this->speculativeTree$), this->speculativeTypes);
}

$ArgumentAttr$ArgumentType* ArgumentAttr$ExplicitLambdaType::dup($JCTree$JCExpression* tree, $Env* env) {
	return this->dup($cast($JCTree$JCLambda, tree), env);
}

$List* ArgumentAttr$ExplicitLambdaType::lambda$returnExpressions$1() {
	$useLocalCurrentObjectStackCache();
	$var($List, res, nullptr);
	$var($ListBuffer, buf, $new($ListBuffer));
	$$new($ArgumentAttr$ExplicitLambdaType$1, this, buf)->scan($nc(($cast($JCTree$JCLambda, this->speculativeTree$)))->body);
	$assign(res, buf->toList());
	$set(this, returnExpressions$, $Optional::of(res));
	return res;
}

$List* ArgumentAttr$ExplicitLambdaType::lambda$argtypes$0() {
	$var($List, res, $TreeInfo::types($nc(($cast($JCTree$JCLambda, this->speculativeTree$)))->params));
	$set(this, argtypes$, $Optional::of(res));
	return res;
}

ArgumentAttr$ExplicitLambdaType::ArgumentAttr$ExplicitLambdaType() {
}

$Class* ArgumentAttr$ExplicitLambdaType::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ArgumentAttr$ExplicitLambdaType$$Lambda$lambda$argtypes$0::classInfo$.name)) {
			return ArgumentAttr$ExplicitLambdaType$$Lambda$lambda$argtypes$0::load$(name, initialize);
		}
		if (name->equals(ArgumentAttr$ExplicitLambdaType$$Lambda$lambda$returnExpressions$1$1::classInfo$.name)) {
			return ArgumentAttr$ExplicitLambdaType$$Lambda$lambda$returnExpressions$1$1::load$(name, initialize);
		}
	}
	$loadClass(ArgumentAttr$ExplicitLambdaType, name, initialize, &_ArgumentAttr$ExplicitLambdaType_ClassInfo_, allocate$ArgumentAttr$ExplicitLambdaType);
	return class$;
}

$Class* ArgumentAttr$ExplicitLambdaType::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com