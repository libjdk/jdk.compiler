#include <com/sun/tools/javac/comp/AttrRecover.h>

#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Kinds$KindSelector.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$ErrorType.h>
#include <com/sun/tools/javac/code/Type$StructuralTypeMapping.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$TypeMapping.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Attr$CheckMode.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/AttrContext.h>
#include <com/sun/tools/javac/comp/AttrRecover$1.h>
#include <com/sun/tools/javac/comp/AttrRecover$RecoverTodo.h>
#include <com/sun/tools/javac/comp/AttrRecover$RecoveryErrorType.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$AttrMode.h>
#include <com/sun/tools/javac/comp/DeferredAttr$AttributionMode.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredTypeMap.h>
#include <com/sun/tools/javac/comp/DeferredAttr$RecoveryDeferredTypeMap.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCErroneous.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda$ParameterKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodInvocation.h>
#include <com/sun/tools/javac/tree/JCTree$JCReturn.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef APPLY
#undef CHECK
#undef IMPLICIT
#undef LAMBDA
#undef RECOVERABLE
#undef SPECULATIVE
#undef VARARGS
#undef VOID

using $Flags = ::com::sun::tools::javac::code::Flags;
using $Kinds$KindSelector = ::com::sun::tools::javac::code::Kinds$KindSelector;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$ErrorType = ::com::sun::tools::javac::code::Type$ErrorType;
using $Type$StructuralTypeMapping = ::com::sun::tools::javac::code::Type$StructuralTypeMapping;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$TypeMapping = ::com::sun::tools::javac::code::Types$TypeMapping;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Attr$CheckMode = ::com::sun::tools::javac::comp::Attr$CheckMode;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $AttrContext = ::com::sun::tools::javac::comp::AttrContext;
using $AttrRecover$1 = ::com::sun::tools::javac::comp::AttrRecover$1;
using $AttrRecover$RecoverTodo = ::com::sun::tools::javac::comp::AttrRecover$RecoverTodo;
using $AttrRecover$RecoveryErrorType = ::com::sun::tools::javac::comp::AttrRecover$RecoveryErrorType;
using $Check$CheckContext = ::com::sun::tools::javac::comp::Check$CheckContext;
using $DeferredAttr = ::com::sun::tools::javac::comp::DeferredAttr;
using $DeferredAttr$AttrMode = ::com::sun::tools::javac::comp::DeferredAttr$AttrMode;
using $DeferredAttr$AttributionMode = ::com::sun::tools::javac::comp::DeferredAttr$AttributionMode;
using $DeferredAttr$DeferredTypeMap = ::com::sun::tools::javac::comp::DeferredAttr$DeferredTypeMap;
using $DeferredAttr$RecoveryDeferredTypeMap = ::com::sun::tools::javac::comp::DeferredAttr$RecoveryDeferredTypeMap;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Resolve$MethodResolutionPhase = ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCBlock = ::com::sun::tools::javac::tree::JCTree$JCBlock;
using $JCTree$JCErroneous = ::com::sun::tools::javac::tree::JCTree$JCErroneous;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCLambda$ParameterKind = ::com::sun::tools::javac::tree::JCTree$JCLambda$ParameterKind;
using $JCTree$JCMethodInvocation = ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation;
using $JCTree$JCReturn = ::com::sun::tools::javac::tree::JCTree$JCReturn;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $TreeTranslator = ::com::sun::tools::javac::tree::TreeTranslator;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Names = ::com::sun::tools::javac::util::Names;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractQueue = ::java::util::AbstractQueue;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $Consumer = ::java::util::function::Consumer;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class AttrRecover$$Lambda$lambda$doRecovery$0 : public $Runnable {
	$class(AttrRecover$$Lambda$lambda$doRecovery$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($JCTree$JCLambda* lambda, $JCTree$JCReturn* ret) {
		$set(this, lambda, lambda);
		$set(this, ret, ret);
	}
	virtual void run() override {
		AttrRecover::lambda$doRecovery$0(lambda, ret);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AttrRecover$$Lambda$lambda$doRecovery$0>());
	}
	$JCTree$JCLambda* lambda = nullptr;
	$JCTree$JCReturn* ret = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo AttrRecover$$Lambda$lambda$doRecovery$0::fieldInfos[3] = {
	{"lambda", "Lcom/sun/tools/javac/tree/JCTree$JCLambda;", nullptr, $PUBLIC, $field(AttrRecover$$Lambda$lambda$doRecovery$0, lambda)},
	{"ret", "Lcom/sun/tools/javac/tree/JCTree$JCReturn;", nullptr, $PUBLIC, $field(AttrRecover$$Lambda$lambda$doRecovery$0, ret)},
	{}
};
$MethodInfo AttrRecover$$Lambda$lambda$doRecovery$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;Lcom/sun/tools/javac/tree/JCTree$JCReturn;)V", nullptr, $PUBLIC, $method(static_cast<void(AttrRecover$$Lambda$lambda$doRecovery$0::*)($JCTree$JCLambda*,$JCTree$JCReturn*)>(&AttrRecover$$Lambda$lambda$doRecovery$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo AttrRecover$$Lambda$lambda$doRecovery$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.AttrRecover$$Lambda$lambda$doRecovery$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* AttrRecover$$Lambda$lambda$doRecovery$0::load$($String* name, bool initialize) {
	$loadClass(AttrRecover$$Lambda$lambda$doRecovery$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AttrRecover$$Lambda$lambda$doRecovery$0::class$ = nullptr;

class AttrRecover$$Lambda$lambda$doRecovery$1$1 : public $Runnable {
	$class(AttrRecover$$Lambda$lambda$doRecovery$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($JCTree$JCMethodInvocation* mit, $List* prevArgs) {
		$set(this, mit, mit);
		$set(this, prevArgs, prevArgs);
	}
	virtual void run() override {
		AttrRecover::lambda$doRecovery$1(mit, prevArgs);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AttrRecover$$Lambda$lambda$doRecovery$1$1>());
	}
	$JCTree$JCMethodInvocation* mit = nullptr;
	$List* prevArgs = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo AttrRecover$$Lambda$lambda$doRecovery$1$1::fieldInfos[3] = {
	{"mit", "Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;", nullptr, $PUBLIC, $field(AttrRecover$$Lambda$lambda$doRecovery$1$1, mit)},
	{"prevArgs", "Lcom/sun/tools/javac/util/List;", nullptr, $PUBLIC, $field(AttrRecover$$Lambda$lambda$doRecovery$1$1, prevArgs)},
	{}
};
$MethodInfo AttrRecover$$Lambda$lambda$doRecovery$1$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;Lcom/sun/tools/javac/util/List;)V", nullptr, $PUBLIC, $method(static_cast<void(AttrRecover$$Lambda$lambda$doRecovery$1$1::*)($JCTree$JCMethodInvocation*,$List*)>(&AttrRecover$$Lambda$lambda$doRecovery$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo AttrRecover$$Lambda$lambda$doRecovery$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.AttrRecover$$Lambda$lambda$doRecovery$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* AttrRecover$$Lambda$lambda$doRecovery$1$1::load$($String* name, bool initialize) {
	$loadClass(AttrRecover$$Lambda$lambda$doRecovery$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AttrRecover$$Lambda$lambda$doRecovery$1$1::class$ = nullptr;

class AttrRecover$$Lambda$run$2 : public $Consumer {
	$class(AttrRecover$$Lambda$run$2, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$) override {
		$sure($Runnable, inst$)->run();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AttrRecover$$Lambda$run$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AttrRecover$$Lambda$run$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AttrRecover$$Lambda$run$2::*)()>(&AttrRecover$$Lambda$run$2::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo AttrRecover$$Lambda$run$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.AttrRecover$$Lambda$run$2",
	"java.lang.Object",
	"java.util.function.Consumer",
	nullptr,
	methodInfos
};
$Class* AttrRecover$$Lambda$run$2::load$($String* name, bool initialize) {
	$loadClass(AttrRecover$$Lambda$run$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AttrRecover$$Lambda$run$2::class$ = nullptr;

$FieldInfo _AttrRecover_FieldInfo_[] = {
	{"attrRepairKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/comp/AttrRecover;>;", $PROTECTED | $STATIC | $FINAL, $staticField(AttrRecover, attrRepairKey)},
	{"attr", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $FINAL, $field(AttrRecover, attr)},
	{"deferredAttr", "Lcom/sun/tools/javac/comp/DeferredAttr;", nullptr, $FINAL, $field(AttrRecover, deferredAttr)},
	{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, $FINAL, $field(AttrRecover, names)},
	{"make", "Lcom/sun/tools/javac/tree/TreeMaker;", nullptr, $FINAL, $field(AttrRecover, make)},
	{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $FINAL, $field(AttrRecover, syms)},
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL, $field(AttrRecover, types)},
	{"recoveryTodo", "Lcom/sun/tools/javac/util/ListBuffer;", "Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/comp/AttrRecover$RecoverTodo;>;", $PRIVATE | $FINAL, $field(AttrRecover, recoveryTodo)},
	{}
};

$MethodInfo _AttrRecover_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(AttrRecover::*)($Context*)>(&AttrRecover::init$))},
	{"basicMethodInvocationRecovery", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/comp/Attr$ResultInfo;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/comp/Attr$ResultInfo;)Lcom/sun/tools/javac/code/Type;", $PRIVATE, $method(static_cast<$Type*(AttrRecover::*)($JCTree*,$Type*,$Symbol*,$Env*,$Attr$ResultInfo*)>(&AttrRecover::basicMethodInvocationRecovery))},
	{"doRecovery", "()V", nullptr, $PUBLIC},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/comp/AttrRecover;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AttrRecover*(*)($Context*)>(&AttrRecover::instance))},
	{"lambda$doRecovery$0", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;Lcom/sun/tools/javac/tree/JCTree$JCReturn;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($JCTree$JCLambda*,$JCTree$JCReturn*)>(&AttrRecover::lambda$doRecovery$0))},
	{"lambda$doRecovery$1", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;Lcom/sun/tools/javac/util/List;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($JCTree$JCMethodInvocation*,$List*)>(&AttrRecover::lambda$doRecovery$1))},
	{"recoverMethodInvocation", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/comp/Attr$ResultInfo;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/comp/Attr$ResultInfo;)Lcom/sun/tools/javac/code/Type;", 0},
	{"wrongMethodSymbolCandidate", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, 0},
	{}
};

$InnerClassInfo _AttrRecover_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.AttrRecover$RecoverTodo", "com.sun.tools.javac.comp.AttrRecover", "RecoverTodo", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.comp.AttrRecover$RecoveryErrorType", "com.sun.tools.javac.comp.AttrRecover", "RecoveryErrorType", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.comp.AttrRecover$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AttrRecover_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.AttrRecover",
	"java.lang.Object",
	nullptr,
	_AttrRecover_FieldInfo_,
	_AttrRecover_MethodInfo_,
	nullptr,
	nullptr,
	_AttrRecover_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.AttrRecover$RecoverTodo,com.sun.tools.javac.comp.AttrRecover$RecoveryErrorType,com.sun.tools.javac.comp.AttrRecover$1,com.sun.tools.javac.comp.AttrRecover$1$1"
};

$Object* allocate$AttrRecover($Class* clazz) {
	return $of($alloc(AttrRecover));
}

$Context$Key* AttrRecover::attrRepairKey = nullptr;

AttrRecover* AttrRecover::instance($Context* context) {
	$init(AttrRecover);
	$var(AttrRecover, instance, $cast(AttrRecover, $nc(context)->get(AttrRecover::attrRepairKey)));
	if (instance == nullptr) {
		$assign(instance, $new(AttrRecover, context));
	}
	return instance;
}

void AttrRecover::init$($Context* context) {
	$set(this, recoveryTodo, $new($ListBuffer));
	$nc(context)->put(AttrRecover::attrRepairKey, $of(this));
	$set(this, attr, $Attr::instance(context));
	$set(this, deferredAttr, $DeferredAttr::instance(context));
	$set(this, names, $Names::instance(context));
	$set(this, make, $TreeMaker::instance(context));
	$set(this, syms, $Symtab::instance(context));
	$set(this, types, $Types::instance(context));
}

void AttrRecover::doRecovery() {
	$useLocalCurrentObjectStackCache();
	while ($nc(this->recoveryTodo)->nonEmpty()) {
		$var($AttrRecover$RecoverTodo, todo, $cast($AttrRecover$RecoverTodo, $nc(this->recoveryTodo)->remove()));
		$var($ListBuffer, rollback, $new($ListBuffer));
		bool repaired = false;
		bool RECOVER$break = false;
		for (;;) {
			$init($JCTree$Tag);
			if ($nc($nc($nc(todo)->env)->tree)->hasTag($JCTree$Tag::APPLY)) {
				$var($JCTree$JCMethodInvocation, mit, $cast($JCTree$JCMethodInvocation, $nc(todo->env)->tree));
				bool vararg = ((int64_t)($nc(todo->candSym)->flags() & (uint64_t)$Flags::VARARGS)) != 0;
				bool var$0 = !vararg;
				if (var$0) {
					int32_t var$1 = $nc($nc(mit)->args)->length();
					var$0 = var$1 > $nc($($nc($nc(todo->candSym)->type)->getParameterTypes()))->length();
				}
				if (var$0) {
					RECOVER$break = true;
					break;
				}
				$var($List, args, $nc(mit)->args);
				$var($List, formals, $nc($nc(todo->candSym)->type)->getParameterTypes());
				while (true) {
					bool var$2 = $nc(args)->nonEmpty();
					if (!(var$2 && $nc(formals)->nonEmpty())) {
						break;
					}
					{
						$var($JCTree$JCExpression, arg, $cast($JCTree$JCExpression, args->head));
						$var($Type, formal, $nc(formals->tail)->nonEmpty() || !vararg ? $cast($Type, formals->head) : $nc(($cast($Type$ArrayType, formals->head)))->elemtype);
						if ($nc(arg)->hasTag($JCTree$Tag::LAMBDA)) {
							$var($JCTree$JCLambda, lambda, $cast($JCTree$JCLambda, arg));
							$init($JCTree$JCLambda$ParameterKind);
							if (lambda->paramKind == $JCTree$JCLambda$ParameterKind::IMPLICIT) {
								{
									$var($Iterator, i$, $nc(lambda->params)->iterator());
									for (; $nc(i$)->hasNext();) {
										$var($JCTree$JCVariableDecl, var, $cast($JCTree$JCVariableDecl, i$->next()));
										{
											$set($nc(var), vartype, nullptr);
										}
									}
								}
							}
							if ($nc(this->types)->isFunctionalInterface(formal)) {
								$var($Type, functionalType, $nc(this->types)->findDescriptorType(formal));
								$init($TypeTag);
								bool voidCompatible = $nc($($nc(functionalType)->getReturnType()))->hasTag($TypeTag::VOID);
								$set(lambda, body, $$new($AttrRecover$1, this, voidCompatible, rollback, lambda)->translate(lambda->body));
								if (!voidCompatible) {
									$var($JCTree$JCReturn, ret, $nc(this->make)->Return($($nc($($nc(this->make)->Erroneous()))->setType($nc(this->syms)->errType))));
									$set($nc($cast($JCTree$JCBlock, lambda->body)), stats, $nc($nc(($cast($JCTree$JCBlock, lambda->body)))->stats)->append(ret));
									rollback->append(static_cast<$Runnable*>($$new(AttrRecover$$Lambda$lambda$doRecovery$0, lambda, ret)));
								}
							}
							repaired = true;
						}
						$assign(args, args->tail);
						if ($nc(formals->tail)->nonEmpty() || !vararg) {
							$assign(formals, formals->tail);
						}
					}
				}
				$var($List, prevArgs, mit->args);
				while ($nc(formals)->nonEmpty()) {
					$set(mit, args, $nc(mit->args)->append($($nc($($nc(this->make)->Erroneous()))->setType($nc(this->syms)->errType))));
					$assign(formals, formals->tail);
					repaired = true;
				}
				rollback->append(static_cast<$Runnable*>($$new(AttrRecover$$Lambda$lambda$doRecovery$1$1, mit, prevArgs)));
			}
			break;
		}
		$var($Type, owntype, nullptr);
		if (repaired) {
			$var($List, args, $TreeInfo::args($nc($nc(todo)->env)->tree));
			$var($List, pats, $nc($nc($nc(todo)->resultInfo)->pt)->getParameterTypes());
			while (true) {
				int32_t var$3 = $nc(pats)->length();
				if (!(var$3 < $nc(args)->length())) {
					break;
				}
				{
					$assign(pats, pats->append($nc(this->syms)->errType));
				}
			}
			$var($Type, var$4, todo->site);
			$var($Symbol, var$5, todo->candSym);
			$var($Attr$ResultInfo, var$6, $new($Attr$ResultInfo, static_cast<$Attr*>($nc(this->attr)), $nc(todo->resultInfo)->pkind, $($nc($nc(todo->resultInfo)->pt)->getReturnType()), $nc(todo->resultInfo)->checkContext, $nc(todo->resultInfo)->checkMode));
			$var($Env, var$7, todo->env);
			$var($List, var$8, args);
			$var($List, var$9, pats);
			$assign(owntype, $nc(this->attr)->checkMethod(var$4, var$5, var$6, var$7, var$8, var$9, $($nc($nc(todo->resultInfo)->pt)->getTypeArguments())));
			$nc($(rollback->stream()))->forEach(static_cast<$Consumer*>($$new(AttrRecover$$Lambda$run$2)));
		} else {
			$assign(owntype, basicMethodInvocationRecovery($nc(todo)->tree, todo->site, todo->errSym, todo->env, todo->resultInfo));
		}
		$set($nc($nc(todo)->tree), type, owntype);
	}
}

$Type* AttrRecover::recoverMethodInvocation($JCTree* tree, $Type* site, $Symbol* sym, $Env* env, $Attr$ResultInfo* resultInfo) {
	$useLocalCurrentObjectStackCache();
	if (((int64_t)($nc(sym)->flags_field & (uint64_t)$Flags::RECOVERABLE)) != 0 && $nc($nc(($cast($AttrContext, $nc(env)->info)))->attributionMode)->recover()) {
		$nc(this->recoveryTodo)->append($$new($AttrRecover$RecoverTodo, tree, site, sym, $nc(($cast($AttrRecover$RecoveryErrorType, sym->type)))->candidateSymbol, $($nc(this->attr)->copyEnv(env)), resultInfo));
		return $nc(this->syms)->errType;
	} else {
		return basicMethodInvocationRecovery(tree, site, sym, env, resultInfo);
	}
}

$Type* AttrRecover::basicMethodInvocationRecovery($JCTree* tree, $Type* site, $Symbol* sym, $Env* env, $Attr$ResultInfo* resultInfo) {
	$useLocalCurrentObjectStackCache();
	$init($DeferredAttr$AttrMode);
	$var($Type, pt, $nc($nc(resultInfo)->pt)->map($$new($DeferredAttr$RecoveryDeferredTypeMap, static_cast<$DeferredAttr*>($nc(this->deferredAttr)), $DeferredAttr$AttrMode::SPECULATIVE, sym, $nc(($cast($AttrContext, $nc(env)->info)))->pendingResolutionPhase)));
	$var($Type, owntype, $nc(this->attr)->checkIdInternal(tree, site, sym, pt, env, resultInfo));
	$nc(resultInfo->pt)->map($$new($DeferredAttr$RecoveryDeferredTypeMap, static_cast<$DeferredAttr*>($nc(this->deferredAttr)), $DeferredAttr$AttrMode::CHECK, sym, $nc(($cast($AttrContext, $nc(env)->info)))->pendingResolutionPhase));
	return owntype;
}

void AttrRecover::wrongMethodSymbolCandidate($Symbol$TypeSymbol* errSymbol, $Symbol* candSym, $JCDiagnostic* diag) {
	$useLocalCurrentObjectStackCache();
	$var($List, diags, $List::of(diag));
	bool recoverable = false;
	while (!recoverable && $nc(diags)->nonEmpty()) {
		$var($JCDiagnostic, d, $cast($JCDiagnostic, diags->head));
		$assign(diags, diags->tail);
		{
			$var($String, s11596$, $nc(d)->getCode());
			int32_t tmp11596$ = -1;
			switch ($nc(s11596$)->hashCode()) {
			case (int32_t)0xB32D40B9:
				{
					if (s11596$->equals("compiler.misc.missing.ret.val"_s)) {
						tmp11596$ = 0;
					}
					break;
				}
			case 0x120B03AA:
				{
					if (s11596$->equals("compiler.misc.unexpected.ret.val"_s)) {
						tmp11596$ = 1;
					}
					break;
				}
			case (int32_t)0x933B5B4B:
				{
					if (s11596$->equals("compiler.misc.infer.arg.length.mismatch"_s)) {
						tmp11596$ = 2;
					}
					break;
				}
			case 0x6A1E1EAB:
				{
					if (s11596$->equals("compiler.misc.arg.length.mismatch"_s)) {
						tmp11596$ = 3;
					}
					break;
				}
			}
			switch (tmp11596$) {
			case 0:
				{}
			case 1:
				{}
			case 2:
				{}
			case 3:
				{
					$set($nc(errSymbol), type, $new($AttrRecover$RecoveryErrorType, $cast($Type$ErrorType, errSymbol->type), candSym));
					$nc(errSymbol)->flags_field |= $Flags::RECOVERABLE;
					return;
				}
			default:
				{
					break;
				}
			}
		}
		{
			$var($ObjectArray, arr$, $nc(d)->getArgs());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Object0, a, arr$->get(i$));
				{
					{
						$var($JCDiagnostic, diagnostic, nullptr);
						bool var$0 = $instanceOf($JCDiagnostic, a);
						if (var$0) {
							$assign(diagnostic, $cast($JCDiagnostic, a));
							var$0 = true;
						}
						if (var$0) {
							$assign(diags, $nc(diags)->prepend(diagnostic));
						}
					}
				}
			}
		}
	}
}

void AttrRecover::lambda$doRecovery$1($JCTree$JCMethodInvocation* mit, $List* prevArgs) {
	$init(AttrRecover);
	$set($nc(mit), args, prevArgs);
}

void AttrRecover::lambda$doRecovery$0($JCTree$JCLambda* lambda, $JCTree$JCReturn* ret) {
	$init(AttrRecover);
	$set($nc($cast($JCTree$JCBlock, $nc(lambda)->body)), stats, $List::filter($nc(($cast($JCTree$JCBlock, lambda->body)))->stats, ret));
}

void clinit$AttrRecover($Class* class$) {
	$assignStatic(AttrRecover::attrRepairKey, $new($Context$Key));
}

AttrRecover::AttrRecover() {
}

$Class* AttrRecover::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(AttrRecover$$Lambda$lambda$doRecovery$0::classInfo$.name)) {
			return AttrRecover$$Lambda$lambda$doRecovery$0::load$(name, initialize);
		}
		if (name->equals(AttrRecover$$Lambda$lambda$doRecovery$1$1::classInfo$.name)) {
			return AttrRecover$$Lambda$lambda$doRecovery$1$1::load$(name, initialize);
		}
		if (name->equals(AttrRecover$$Lambda$run$2::classInfo$.name)) {
			return AttrRecover$$Lambda$run$2::load$(name, initialize);
		}
	}
	$loadClass(AttrRecover, name, initialize, &_AttrRecover_ClassInfo_, clinit$AttrRecover, allocate$AttrRecover);
	return class$;
}

$Class* AttrRecover::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com