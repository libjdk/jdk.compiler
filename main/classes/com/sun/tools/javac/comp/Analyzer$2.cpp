#include <com/sun/tools/javac/comp/Analyzer$2.h>

#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/Analyzer$DeferredAnalysisHelper.h>
#include <com/sun/tools/javac/comp/Analyzer$RewritingContext.h>
#include <com/sun/tools/javac/comp/Analyzer.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayDeque.h>
#include <java/util/Deque.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/Queue.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

#undef Q

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Analyzer = ::com::sun::tools::javac::comp::Analyzer;
using $Analyzer$DeferredAnalysisHelper = ::com::sun::tools::javac::comp::Analyzer$DeferredAnalysisHelper;
using $Analyzer$RewritingContext = ::com::sun::tools::javac::comp::Analyzer$RewritingContext;
using $Env = ::com::sun::tools::javac::comp::Env;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayDeque = ::java::util::ArrayDeque;
using $Collection = ::java::util::Collection;
using $Deque = ::java::util::Deque;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Queue = ::java::util::Queue;
using $Function = ::java::util::function::Function;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Analyzer$2$$Lambda$lambda$queue$0 : public $Function {
	$class(Analyzer$2$$Lambda$lambda$queue$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* k) override {
		 return $of(Analyzer$2::lambda$queue$0($cast($Symbol$ClassSymbol, k)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Analyzer$2$$Lambda$lambda$queue$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Analyzer$2$$Lambda$lambda$queue$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Analyzer$2$$Lambda$lambda$queue$0::*)()>(&Analyzer$2$$Lambda$lambda$queue$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Analyzer$2$$Lambda$lambda$queue$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Analyzer$2$$Lambda$lambda$queue$0",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Analyzer$2$$Lambda$lambda$queue$0::load$($String* name, bool initialize) {
	$loadClass(Analyzer$2$$Lambda$lambda$queue$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Analyzer$2$$Lambda$lambda$queue$0::class$ = nullptr;

$FieldInfo _Analyzer$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Analyzer;", nullptr, $FINAL | $SYNTHETIC, $field(Analyzer$2, this$0)},
	{"Q", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Ljava/util/Queue<Lcom/sun/tools/javac/comp/Analyzer$RewritingContext;>;>;", 0, $field(Analyzer$2, Q)},
	{}
};

$MethodInfo _Analyzer$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Analyzer;)V", nullptr, 0, $method(static_cast<void(Analyzer$2::*)($Analyzer*)>(&Analyzer$2::init$))},
	{"flush", "(Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PUBLIC},
	{"lambda$queue$0", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Ljava/util/Queue;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Queue*(*)($Symbol$ClassSymbol*)>(&Analyzer$2::lambda$queue$0))},
	{"queue", "(Lcom/sun/tools/javac/comp/Analyzer$RewritingContext;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Analyzer$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Analyzer",
	nullptr,
	nullptr
};

$InnerClassInfo _Analyzer$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Analyzer$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Analyzer$DeferredAnalysisHelper", "com.sun.tools.javac.comp.Analyzer", "DeferredAnalysisHelper", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Analyzer$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Analyzer$2",
	"java.lang.Object",
	"com.sun.tools.javac.comp.Analyzer$DeferredAnalysisHelper",
	_Analyzer$2_FieldInfo_,
	_Analyzer$2_MethodInfo_,
	nullptr,
	&_Analyzer$2_EnclosingMethodInfo_,
	_Analyzer$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Analyzer"
};

$Object* allocate$Analyzer$2($Class* clazz) {
	return $of($alloc(Analyzer$2));
}

void Analyzer$2::init$($Analyzer* this$0) {
	$set(this, this$0, this$0);
	$set(this, Q, $new($HashMap));
}

void Analyzer$2::queue($Analyzer$RewritingContext* rewriting) {
	$useLocalCurrentObjectStackCache();
	$var($Object, var$0, $of($nc($nc($nc($nc(rewriting)->env)->enclClass)->sym)->outermostClass()));
	$var($Queue, s, $cast($Queue, $nc(this->Q)->computeIfAbsent(var$0, static_cast<$Function*>($$new(Analyzer$2$$Lambda$lambda$queue$0)))));
	$nc(s)->add(rewriting);
}

void Analyzer$2::flush($Env* flushEnv) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(this->Q)->isEmpty()) {
		$var($Analyzer$DeferredAnalysisHelper, prevHelper, this->this$0->deferredAnalysisHelper);
		{
			$var($Throwable, var$0, nullptr);
			try {
				$set(this->this$0, deferredAnalysisHelper, this->this$0->flushDeferredHelper);
				$var($Queue, rewritings, $cast($Queue, $nc(this->Q)->get($($nc($nc($nc(flushEnv)->enclClass)->sym)->outermostClass()))));
				while (rewritings != nullptr && !rewritings->isEmpty()) {
					this->this$0->doAnalysis($cast($Analyzer$RewritingContext, $(rewritings->remove())));
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$set(this->this$0, deferredAnalysisHelper, prevHelper);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

$Queue* Analyzer$2::lambda$queue$0($Symbol$ClassSymbol* k) {
	$init(Analyzer$2);
	return $new($ArrayDeque);
}

Analyzer$2::Analyzer$2() {
}

$Class* Analyzer$2::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Analyzer$2$$Lambda$lambda$queue$0::classInfo$.name)) {
			return Analyzer$2$$Lambda$lambda$queue$0::load$(name, initialize);
		}
	}
	$loadClass(Analyzer$2, name, initialize, &_Analyzer$2_ClassInfo_, allocate$Analyzer$2);
	return class$;
}

$Class* Analyzer$2::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com