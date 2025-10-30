#include <com/sun/tools/javac/comp/TransPatterns$BasicBindingContext.h>

#include <com/sun/tools/javac/code/Symbol$BindingSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/TransPatterns$BindingContext.h>
#include <com/sun/tools/javac/comp/TransPatterns.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$LetExpr.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$BindingSymbol = ::com::sun::tools::javac::code::Symbol$BindingSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $TransPatterns = ::com::sun::tools::javac::comp::TransPatterns;
using $TransPatterns$BindingContext = ::com::sun::tools::javac::comp::TransPatterns$BindingContext;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCBlock = ::com::sun::tools::javac::tree::JCTree$JCBlock;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$LetExpr = ::com::sun::tools::javac::tree::JCTree$LetExpr;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
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
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class TransPatterns$BasicBindingContext$$Lambda$lambda$getBindingFor$0 : public $Predicate {
	$class(TransPatterns$BasicBindingContext$$Lambda$lambda$getBindingFor$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Symbol$BindingSymbol* varSymbol) {
		$set(this, varSymbol, varSymbol);
	}
	virtual bool test(Object$* e) override {
		 return TransPatterns$BasicBindingContext::lambda$getBindingFor$0(varSymbol, $cast($Map$Entry, e));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TransPatterns$BasicBindingContext$$Lambda$lambda$getBindingFor$0>());
	}
	$Symbol$BindingSymbol* varSymbol = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TransPatterns$BasicBindingContext$$Lambda$lambda$getBindingFor$0::fieldInfos[2] = {
	{"varSymbol", "Lcom/sun/tools/javac/code/Symbol$BindingSymbol;", nullptr, $PUBLIC, $field(TransPatterns$BasicBindingContext$$Lambda$lambda$getBindingFor$0, varSymbol)},
	{}
};
$MethodInfo TransPatterns$BasicBindingContext$$Lambda$lambda$getBindingFor$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol$BindingSymbol;)V", nullptr, $PUBLIC, $method(static_cast<void(TransPatterns$BasicBindingContext$$Lambda$lambda$getBindingFor$0::*)($Symbol$BindingSymbol*)>(&TransPatterns$BasicBindingContext$$Lambda$lambda$getBindingFor$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo TransPatterns$BasicBindingContext$$Lambda$lambda$getBindingFor$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.TransPatterns$BasicBindingContext$$Lambda$lambda$getBindingFor$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* TransPatterns$BasicBindingContext$$Lambda$lambda$getBindingFor$0::load$($String* name, bool initialize) {
	$loadClass(TransPatterns$BasicBindingContext$$Lambda$lambda$getBindingFor$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TransPatterns$BasicBindingContext$$Lambda$lambda$getBindingFor$0::class$ = nullptr;

class TransPatterns$BasicBindingContext$$Lambda$lambda$getBindingFor$1$1 : public $Function {
	$class(TransPatterns$BasicBindingContext$$Lambda$lambda$getBindingFor$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* e) override {
		 return $of(TransPatterns$BasicBindingContext::lambda$getBindingFor$1($cast($Map$Entry, e)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TransPatterns$BasicBindingContext$$Lambda$lambda$getBindingFor$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TransPatterns$BasicBindingContext$$Lambda$lambda$getBindingFor$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TransPatterns$BasicBindingContext$$Lambda$lambda$getBindingFor$1$1::*)()>(&TransPatterns$BasicBindingContext$$Lambda$lambda$getBindingFor$1$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo TransPatterns$BasicBindingContext$$Lambda$lambda$getBindingFor$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.TransPatterns$BasicBindingContext$$Lambda$lambda$getBindingFor$1$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* TransPatterns$BasicBindingContext$$Lambda$lambda$getBindingFor$1$1::load$($String* name, bool initialize) {
	$loadClass(TransPatterns$BasicBindingContext$$Lambda$lambda$getBindingFor$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TransPatterns$BasicBindingContext$$Lambda$lambda$getBindingFor$1$1::class$ = nullptr;

$FieldInfo _TransPatterns$BasicBindingContext_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/TransPatterns;", nullptr, $FINAL | $SYNTHETIC, $field(TransPatterns$BasicBindingContext, this$0)},
	{"hoistedVarMap", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$BindingSymbol;Lcom/sun/tools/javac/code/Symbol$VarSymbol;>;", 0, $field(TransPatterns$BasicBindingContext, hoistedVarMap)},
	{"parent", "Lcom/sun/tools/javac/comp/TransPatterns$BindingContext;", nullptr, 0, $field(TransPatterns$BasicBindingContext, parent)},
	{}
};

$MethodInfo _TransPatterns$BasicBindingContext_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/TransPatterns;)V", nullptr, $PUBLIC, $method(static_cast<void(TransPatterns$BasicBindingContext::*)($TransPatterns*)>(&TransPatterns$BasicBindingContext::init$))},
	{"bindingDeclared", "(Lcom/sun/tools/javac/code/Symbol$BindingSymbol;)Lcom/sun/tools/javac/code/Symbol$VarSymbol;", nullptr, 0},
	{"bindingVars", "(I)Lcom/sun/tools/javac/util/List;", "(I)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCStatement;>;", 0},
	{"decorateExpression", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"decorateStatement", "(Lcom/sun/tools/javac/tree/JCTree$JCStatement;)Lcom/sun/tools/javac/tree/JCTree$JCStatement;", nullptr, 0},
	{"getBindingFor", "(Lcom/sun/tools/javac/code/Symbol$BindingSymbol;)Lcom/sun/tools/javac/code/Symbol$VarSymbol;", nullptr, 0},
	{"lambda$getBindingFor$0", "(Lcom/sun/tools/javac/code/Symbol$BindingSymbol;Ljava/util/Map$Entry;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Symbol$BindingSymbol*,$Map$Entry*)>(&TransPatterns$BasicBindingContext::lambda$getBindingFor$0))},
	{"lambda$getBindingFor$1", "(Ljava/util/Map$Entry;)Lcom/sun/tools/javac/code/Symbol$VarSymbol;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Symbol$VarSymbol*(*)($Map$Entry*)>(&TransPatterns$BasicBindingContext::lambda$getBindingFor$1))},
	{"makeHoistedVarDecl", "(ILcom/sun/tools/javac/code/Symbol$VarSymbol;)Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;", nullptr, $PRIVATE, $method(static_cast<$JCTree$JCVariableDecl*(TransPatterns$BasicBindingContext::*)(int32_t,$Symbol$VarSymbol*)>(&TransPatterns$BasicBindingContext::makeHoistedVarDecl))},
	{"pop", "()Lcom/sun/tools/javac/comp/TransPatterns$BindingContext;", nullptr, 0},
	{"tryPrepend", "(Lcom/sun/tools/javac/code/Symbol$BindingSymbol;Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _TransPatterns$BasicBindingContext_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.TransPatterns$BasicBindingContext", "com.sun.tools.javac.comp.TransPatterns", "BasicBindingContext", 0},
	{"com.sun.tools.javac.comp.TransPatterns$BindingContext", "com.sun.tools.javac.comp.TransPatterns", "BindingContext", $ABSTRACT},
	{}
};

$ClassInfo _TransPatterns$BasicBindingContext_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.TransPatterns$BasicBindingContext",
	"com.sun.tools.javac.comp.TransPatterns$BindingContext",
	nullptr,
	_TransPatterns$BasicBindingContext_FieldInfo_,
	_TransPatterns$BasicBindingContext_MethodInfo_,
	nullptr,
	nullptr,
	_TransPatterns$BasicBindingContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.TransPatterns"
};

$Object* allocate$TransPatterns$BasicBindingContext($Class* clazz) {
	return $of($alloc(TransPatterns$BasicBindingContext));
}

void TransPatterns$BasicBindingContext::init$($TransPatterns* this$0) {
	$set(this, this$0, this$0);
	$TransPatterns$BindingContext::init$(this$0);
	$set(this, parent, this$0->bindingContext);
	$set(this, hoistedVarMap, $new($LinkedHashMap));
}

$Symbol$VarSymbol* TransPatterns$BasicBindingContext::bindingDeclared($Symbol$BindingSymbol* varSymbol) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$VarSymbol, res, $nc(this->parent)->bindingDeclared(varSymbol));
	if (res == nullptr) {
		$assign(res, $new($Symbol$VarSymbol, $nc(varSymbol)->flags(), varSymbol->name, varSymbol->type, this->this$0->currentMethodSym));
		res->setTypeAttributes($($nc(varSymbol)->getRawTypeAttributes()));
		$nc(this->hoistedVarMap)->put(varSymbol, res);
	}
	return res;
}

$Symbol$VarSymbol* TransPatterns$BasicBindingContext::getBindingFor($Symbol$BindingSymbol* varSymbol) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$VarSymbol, res, $nc(this->parent)->getBindingFor(varSymbol));
	if (res != nullptr) {
		return res;
	}
	return $cast($Symbol$VarSymbol, $nc($($nc($($nc($($nc($($nc($($nc(this->hoistedVarMap)->entrySet()))->stream()))->filter(static_cast<$Predicate*>($$new(TransPatterns$BasicBindingContext$$Lambda$lambda$getBindingFor$0, varSymbol)))))->findFirst()))->map(static_cast<$Function*>($$new(TransPatterns$BasicBindingContext$$Lambda$lambda$getBindingFor$1$1)))))->orElse(nullptr));
}

$List* TransPatterns$BasicBindingContext::bindingVars(int32_t diagPos) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->hoistedVarMap)->isEmpty()) {
		return $List::nil();
	}
	$var($ListBuffer, stats, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc($($nc(this->hoistedVarMap)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
			{
				$var($JCTree$JCVariableDecl, decl, makeHoistedVarDecl(diagPos, $cast($Symbol$VarSymbol, $($nc(e)->getValue()))));
				bool var$0 = !$nc(($cast($Symbol$BindingSymbol, $($nc(e)->getKey()))))->isPreserved();
				if (var$0 || !$nc(this->parent)->tryPrepend($cast($Symbol$BindingSymbol, $($nc(e)->getKey())), decl)) {
					stats->add(decl);
				}
			}
		}
	}
	return stats->toList();
}

$JCTree$JCStatement* TransPatterns$BasicBindingContext::decorateStatement($JCTree$JCStatement* stat$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCStatement, stat, stat$renamed);
	$var($List, stats, bindingVars($nc(stat)->pos$));
	if ($nc(stats)->nonEmpty()) {
		$assign(stat, $nc($($nc(this->this$0->make)->at($nc(stat)->pos$)))->Block(0, $(stats->append(stat))));
	}
	return stat;
}

$JCTree$JCExpression* TransPatterns$BasicBindingContext::decorateExpression($JCTree$JCExpression* expr$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree$JCExpression, expr, expr$renamed);
	{
		$var($Iterator, i$, $nc($($nc(this->hoistedVarMap)->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol$VarSymbol, vsym, $cast($Symbol$VarSymbol, i$->next()));
			{
				$assign(expr, $nc($($nc($($nc(this->this$0->make)->at($nc(expr)->pos$)))->LetExpr($(makeHoistedVarDecl($nc(expr)->pos$, vsym)), expr)))->setType($nc(expr)->type));
			}
		}
	}
	return expr;
}

$TransPatterns$BindingContext* TransPatterns$BasicBindingContext::pop() {
	return $set(this->this$0, bindingContext, this->parent);
}

bool TransPatterns$BasicBindingContext::tryPrepend($Symbol$BindingSymbol* binding, $JCTree$JCVariableDecl* var) {
	return false;
}

$JCTree$JCVariableDecl* TransPatterns$BasicBindingContext::makeHoistedVarDecl(int32_t pos, $Symbol$VarSymbol* varSymbol) {
	return $nc($($nc(this->this$0->make)->at(pos)))->VarDef(varSymbol, nullptr);
}

$Symbol$VarSymbol* TransPatterns$BasicBindingContext::lambda$getBindingFor$1($Map$Entry* e) {
	$init(TransPatterns$BasicBindingContext);
	return $cast($Symbol$VarSymbol, $nc(e)->getValue());
}

bool TransPatterns$BasicBindingContext::lambda$getBindingFor$0($Symbol$BindingSymbol* varSymbol, $Map$Entry* e) {
	$init(TransPatterns$BasicBindingContext);
	return $nc(($cast($Symbol$BindingSymbol, $($nc(e)->getKey()))))->isAliasFor(varSymbol);
}

TransPatterns$BasicBindingContext::TransPatterns$BasicBindingContext() {
}

$Class* TransPatterns$BasicBindingContext::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TransPatterns$BasicBindingContext$$Lambda$lambda$getBindingFor$0::classInfo$.name)) {
			return TransPatterns$BasicBindingContext$$Lambda$lambda$getBindingFor$0::load$(name, initialize);
		}
		if (name->equals(TransPatterns$BasicBindingContext$$Lambda$lambda$getBindingFor$1$1::classInfo$.name)) {
			return TransPatterns$BasicBindingContext$$Lambda$lambda$getBindingFor$1$1::load$(name, initialize);
		}
	}
	$loadClass(TransPatterns$BasicBindingContext, name, initialize, &_TransPatterns$BasicBindingContext_ClassInfo_, allocate$TransPatterns$BasicBindingContext);
	return class$;
}

$Class* TransPatterns$BasicBindingContext::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com