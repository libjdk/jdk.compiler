#include <com/sun/tools/javac/comp/ArgumentAttr$SwitchExpressionType.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/ArgumentAttr$ArgumentType.h>
#include <com/sun/tools/javac/comp/ArgumentAttr$SwitchExpressionType$1.h>
#include <com/sun/tools/javac/comp/ArgumentAttr.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredType.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCSwitchExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCYield.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
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

using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $ArgumentAttr = ::com::sun::tools::javac::comp::ArgumentAttr;
using $ArgumentAttr$ArgumentType = ::com::sun::tools::javac::comp::ArgumentAttr$ArgumentType;
using $ArgumentAttr$SwitchExpressionType$1 = ::com::sun::tools::javac::comp::ArgumentAttr$SwitchExpressionType$1;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $Check$CheckContext = ::com::sun::tools::javac::comp::Check$CheckContext;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $DeferredAttr$DeferredType = ::com::sun::tools::javac::comp::DeferredAttr$DeferredType;
using $Env = ::com::sun::tools::javac::comp::Env;
using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
using $JCTree$JCSwitchExpression = ::com::sun::tools::javac::tree::JCTree$JCSwitchExpression;
using $JCTree$JCYield = ::com::sun::tools::javac::tree::JCTree$JCYield;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $JCDiagnostic$Fragment = ::com::sun::tools::javac::util::JCDiagnostic$Fragment;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
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

class ArgumentAttr$SwitchExpressionType$$Lambda$lambda$yieldExpressions$0 : public $Supplier {
	$class(ArgumentAttr$SwitchExpressionType$$Lambda$lambda$yieldExpressions$0, $NO_CLASS_INIT, $Supplier)
public:
	void init$(ArgumentAttr$SwitchExpressionType* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->lambda$yieldExpressions$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ArgumentAttr$SwitchExpressionType$$Lambda$lambda$yieldExpressions$0>());
	}
	ArgumentAttr$SwitchExpressionType* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ArgumentAttr$SwitchExpressionType$$Lambda$lambda$yieldExpressions$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ArgumentAttr$SwitchExpressionType$$Lambda$lambda$yieldExpressions$0, inst$)},
	{}
};
$MethodInfo ArgumentAttr$SwitchExpressionType$$Lambda$lambda$yieldExpressions$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/ArgumentAttr$SwitchExpressionType;)V", nullptr, $PUBLIC, $method(static_cast<void(ArgumentAttr$SwitchExpressionType$$Lambda$lambda$yieldExpressions$0::*)(ArgumentAttr$SwitchExpressionType*)>(&ArgumentAttr$SwitchExpressionType$$Lambda$lambda$yieldExpressions$0::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ArgumentAttr$SwitchExpressionType$$Lambda$lambda$yieldExpressions$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.ArgumentAttr$SwitchExpressionType$$Lambda$lambda$yieldExpressions$0",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* ArgumentAttr$SwitchExpressionType$$Lambda$lambda$yieldExpressions$0::load$($String* name, bool initialize) {
	$loadClass(ArgumentAttr$SwitchExpressionType$$Lambda$lambda$yieldExpressions$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ArgumentAttr$SwitchExpressionType$$Lambda$lambda$yieldExpressions$0::class$ = nullptr;

$FieldInfo _ArgumentAttr$SwitchExpressionType_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/ArgumentAttr;", nullptr, $FINAL | $SYNTHETIC, $field(ArgumentAttr$SwitchExpressionType, this$0)},
	{"yieldExpressions", "Ljava/util/Optional;", "Ljava/util/Optional<Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCYield;>;>;", 0, $field(ArgumentAttr$SwitchExpressionType, yieldExpressions$)},
	{}
};

$MethodInfo _ArgumentAttr$SwitchExpressionType_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/ArgumentAttr;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;)V", 0, $method(static_cast<void(ArgumentAttr$SwitchExpressionType::*)($ArgumentAttr*,$JCTree$JCExpression*,$Env*,$JCTree$JCSwitchExpression*)>(&ArgumentAttr$SwitchExpressionType::init$))},
	{"<init>", "(Lcom/sun/tools/javac/comp/ArgumentAttr;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;Ljava/util/Map;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;Ljava/util/Map<Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/code/Type;>;)V", 0, $method(static_cast<void(ArgumentAttr$SwitchExpressionType::*)($ArgumentAttr*,$JCTree$JCExpression*,$Env*,$JCTree$JCSwitchExpression*,$Map*)>(&ArgumentAttr$SwitchExpressionType::init$))},
	{"dup", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/comp/ArgumentAttr$ArgumentType;", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/comp/ArgumentAttr$ArgumentType<Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;>;", 0},
	{"dup", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/comp/ArgumentAttr$ArgumentType;", nullptr, $VOLATILE | $SYNTHETIC},
	{"lambda$yieldExpressions$0", "()Lcom/sun/tools/javac/util/List;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$List*(ArgumentAttr$SwitchExpressionType::*)()>(&ArgumentAttr$SwitchExpressionType::lambda$yieldExpressions$0))},
	{"overloadCheck", "(Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"yieldExpressions", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCYield;>;", 0},
	{}
};

$InnerClassInfo _ArgumentAttr$SwitchExpressionType_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.ArgumentAttr$SwitchExpressionType", "com.sun.tools.javac.comp.ArgumentAttr", "SwitchExpressionType", 0},
	{"com.sun.tools.javac.comp.ArgumentAttr$ArgumentType", "com.sun.tools.javac.comp.ArgumentAttr", "ArgumentType", $ABSTRACT},
	{"com.sun.tools.javac.comp.ArgumentAttr$SwitchExpressionType$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.tree.JCTree$JCSwitchExpression", "com.sun.tools.javac.tree.JCTree", "JCSwitchExpression", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ArgumentAttr$SwitchExpressionType_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.ArgumentAttr$SwitchExpressionType",
	"com.sun.tools.javac.comp.ArgumentAttr$ArgumentType",
	nullptr,
	_ArgumentAttr$SwitchExpressionType_FieldInfo_,
	_ArgumentAttr$SwitchExpressionType_MethodInfo_,
	"Lcom/sun/tools/javac/comp/ArgumentAttr$ArgumentType<Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;>;",
	nullptr,
	_ArgumentAttr$SwitchExpressionType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.ArgumentAttr"
};

$Object* allocate$ArgumentAttr$SwitchExpressionType($Class* clazz) {
	return $of($alloc(ArgumentAttr$SwitchExpressionType));
}

void ArgumentAttr$SwitchExpressionType::init$($ArgumentAttr* this$0, $JCTree$JCExpression* tree, $Env* env, $JCTree$JCSwitchExpression* speculativeCond) {
	ArgumentAttr$SwitchExpressionType::init$(this$0, tree, env, speculativeCond, $$new($HashMap));
}

void ArgumentAttr$SwitchExpressionType::init$($ArgumentAttr* this$0, $JCTree$JCExpression* tree, $Env* env, $JCTree$JCSwitchExpression* speculativeCond, $Map* speculativeTypes) {
	$set(this, this$0, this$0);
	$ArgumentAttr$ArgumentType::init$(this$0, tree, env, speculativeCond, speculativeTypes);
	$set(this, yieldExpressions$, $Optional::empty());
}

$Type* ArgumentAttr$SwitchExpressionType::overloadCheck($Attr$ResultInfo* resultInfo, $DeferredAttr$DeferredAttrContext* deferredAttrContext) {
	$useLocalCurrentObjectStackCache();
	$var($Attr$ResultInfo, localInfo, $nc(resultInfo)->dup($($nc(this->this$0->attr)->conditionalContext(resultInfo->checkContext))));
	$init($TypeTag);
	if ($nc(resultInfo->pt)->hasTag($TypeTag::VOID)) {
		$init($CompilerProperties$Fragments);
		$nc(resultInfo->checkContext)->report(this->tree, $($nc($nc(this->this$0->attr)->diags)->fragment($CompilerProperties$Fragments::SwitchExpressionTargetCantBeVoid)));
		return $nc($nc(this->this$0->attr)->types)->createErrorType(resultInfo->pt);
	} else {
		{
			$var($Iterator, i$, $nc($(yieldExpressions()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JCTree$JCYield, brk, $cast($JCTree$JCYield, i$->next()));
				{
					this->this$0->checkSpeculative($nc(brk)->value, $nc(brk->value)->type, resultInfo);
				}
			}
		}
		return $nc(localInfo)->pt;
	}
}

$List* ArgumentAttr$SwitchExpressionType::yieldExpressions() {
	return $cast($List, $nc(this->yieldExpressions$)->orElseGet(static_cast<$Supplier*>($$new(ArgumentAttr$SwitchExpressionType$$Lambda$lambda$yieldExpressions$0, this))));
}

$ArgumentAttr$ArgumentType* ArgumentAttr$SwitchExpressionType::dup($JCTree$JCSwitchExpression* tree, $Env* env) {
	return $new(ArgumentAttr$SwitchExpressionType, this->this$0, tree, env, $cast($JCTree$JCSwitchExpression, this->speculativeTree$), this->speculativeTypes);
}

$ArgumentAttr$ArgumentType* ArgumentAttr$SwitchExpressionType::dup($JCTree$JCExpression* tree, $Env* env) {
	return this->dup($cast($JCTree$JCSwitchExpression, tree), env);
}

$List* ArgumentAttr$SwitchExpressionType::lambda$yieldExpressions$0() {
	$useLocalCurrentObjectStackCache();
	$var($List, res, nullptr);
	$var($ListBuffer, buf, $new($ListBuffer));
	$$new($ArgumentAttr$SwitchExpressionType$1, this, buf)->scan($nc(($cast($JCTree$JCSwitchExpression, this->speculativeTree$)))->cases);
	$assign(res, buf->toList());
	$set(this, yieldExpressions$, $Optional::of(res));
	return res;
}

ArgumentAttr$SwitchExpressionType::ArgumentAttr$SwitchExpressionType() {
}

$Class* ArgumentAttr$SwitchExpressionType::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ArgumentAttr$SwitchExpressionType$$Lambda$lambda$yieldExpressions$0::classInfo$.name)) {
			return ArgumentAttr$SwitchExpressionType$$Lambda$lambda$yieldExpressions$0::load$(name, initialize);
		}
	}
	$loadClass(ArgumentAttr$SwitchExpressionType, name, initialize, &_ArgumentAttr$SwitchExpressionType_ClassInfo_, allocate$ArgumentAttr$SwitchExpressionType);
	return class$;
}

$Class* ArgumentAttr$SwitchExpressionType::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com