#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler$1.h>

#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler$1$1.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler$DeferredCompleter.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler$FlipSymbolDescription.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$Completer.h>
#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

using $DeferredCompletionFailureHandler = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler;
using $DeferredCompletionFailureHandler$1$1 = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler$1$1;
using $DeferredCompletionFailureHandler$DeferredCompleter = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler$DeferredCompleter;
using $DeferredCompletionFailureHandler$FlipSymbolDescription = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler$FlipSymbolDescription;
using $DeferredCompletionFailureHandler$Handler = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler$Handler;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$Completer = ::com::sun::tools::javac::code::Symbol$Completer;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractMap = ::java::util::AbstractMap;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Consumer = ::java::util::function::Consumer;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class DeferredCompletionFailureHandler$1$$Lambda$lambda$install$0 : public $Consumer {
	$class(DeferredCompletionFailureHandler$1$$Lambda$lambda$install$0, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* f) override {
		DeferredCompletionFailureHandler$1::lambda$install$0($cast($DeferredCompletionFailureHandler$FlipSymbolDescription, f));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DeferredCompletionFailureHandler$1$$Lambda$lambda$install$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DeferredCompletionFailureHandler$1$$Lambda$lambda$install$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DeferredCompletionFailureHandler$1$$Lambda$lambda$install$0::*)()>(&DeferredCompletionFailureHandler$1$$Lambda$lambda$install$0::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DeferredCompletionFailureHandler$1$$Lambda$lambda$install$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.DeferredCompletionFailureHandler$1$$Lambda$lambda$install$0",
	"java.lang.Object",
	"java.util.function.Consumer",
	nullptr,
	methodInfos
};
$Class* DeferredCompletionFailureHandler$1$$Lambda$lambda$install$0::load$($String* name, bool initialize) {
	$loadClass(DeferredCompletionFailureHandler$1$$Lambda$lambda$install$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DeferredCompletionFailureHandler$1$$Lambda$lambda$install$0::class$ = nullptr;

$FieldInfo _DeferredCompletionFailureHandler$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler;", nullptr, $FINAL | $SYNTHETIC, $field(DeferredCompletionFailureHandler$1, this$0)},
	{"class2Flip", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler$FlipSymbolDescription;>;", $PRIVATE | $FINAL, $field(DeferredCompletionFailureHandler$1, class2Flip)},
	{}
};

$MethodInfo _DeferredCompletionFailureHandler$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler;)V", nullptr, 0, $method(static_cast<void(DeferredCompletionFailureHandler$1::*)($DeferredCompletionFailureHandler*)>(&DeferredCompletionFailureHandler$1::init$))},
	{"classSymbolCompleteFailed", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Symbol$Completer;)V", nullptr, $PUBLIC},
	{"classSymbolRemoved", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PUBLIC},
	{"handleAPICompletionFailure", "(Lcom/sun/tools/javac/code/Symbol$CompletionFailure;)V", nullptr, $PUBLIC},
	{"install", "()V", nullptr, $PUBLIC},
	{"lambda$install$0", "(Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler$FlipSymbolDescription;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($DeferredCompletionFailureHandler$FlipSymbolDescription*)>(&DeferredCompletionFailureHandler$1::lambda$install$0))},
	{"uninstall", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DeferredCompletionFailureHandler$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.DeferredCompletionFailureHandler",
	nullptr,
	nullptr
};

$InnerClassInfo _DeferredCompletionFailureHandler$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.DeferredCompletionFailureHandler$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.DeferredCompletionFailureHandler$Handler", "com.sun.tools.javac.code.DeferredCompletionFailureHandler", "Handler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.code.DeferredCompletionFailureHandler$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DeferredCompletionFailureHandler$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.DeferredCompletionFailureHandler$1",
	"java.lang.Object",
	"com.sun.tools.javac.code.DeferredCompletionFailureHandler$Handler",
	_DeferredCompletionFailureHandler$1_FieldInfo_,
	_DeferredCompletionFailureHandler$1_MethodInfo_,
	nullptr,
	&_DeferredCompletionFailureHandler$1_EnclosingMethodInfo_,
	_DeferredCompletionFailureHandler$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.DeferredCompletionFailureHandler"
};

$Object* allocate$DeferredCompletionFailureHandler$1($Class* clazz) {
	return $of($alloc(DeferredCompletionFailureHandler$1));
}

void DeferredCompletionFailureHandler$1::init$($DeferredCompletionFailureHandler* this$0) {
	$set(this, this$0, this$0);
	$set(this, class2Flip, $new($HashMap));
}

void DeferredCompletionFailureHandler$1::install() {
	$useLocalCurrentObjectStackCache();
	$nc($($nc(this->class2Flip)->values()))->forEach(static_cast<$Consumer*>($$new(DeferredCompletionFailureHandler$1$$Lambda$lambda$install$0)));
}

void DeferredCompletionFailureHandler$1::handleAPICompletionFailure($Symbol$CompletionFailure* cf) {
}

void DeferredCompletionFailureHandler$1::classSymbolCompleteFailed($Symbol$ClassSymbol* sym, $Symbol$Completer* origCompleter) {
	$useLocalCurrentObjectStackCache();
	$nc(this->class2Flip)->put(sym, $$new($DeferredCompletionFailureHandler$FlipSymbolDescription, sym, $$new($DeferredCompletionFailureHandler$1$1, this, origCompleter)));
}

void DeferredCompletionFailureHandler$1::classSymbolRemoved($Symbol$ClassSymbol* sym) {
	$nc(this->class2Flip)->remove(sym);
}

void DeferredCompletionFailureHandler$1::uninstall() {
	$useLocalCurrentObjectStackCache();
	$nc($($nc(this->class2Flip)->values()))->forEach(static_cast<$Consumer*>($$new(DeferredCompletionFailureHandler$1$$Lambda$lambda$install$0)));
}

void DeferredCompletionFailureHandler$1::lambda$install$0($DeferredCompletionFailureHandler$FlipSymbolDescription* f) {
	$init(DeferredCompletionFailureHandler$1);
	$nc(f)->flip();
}

DeferredCompletionFailureHandler$1::DeferredCompletionFailureHandler$1() {
}

$Class* DeferredCompletionFailureHandler$1::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DeferredCompletionFailureHandler$1$$Lambda$lambda$install$0::classInfo$.name)) {
			return DeferredCompletionFailureHandler$1$$Lambda$lambda$install$0::load$(name, initialize);
		}
	}
	$loadClass(DeferredCompletionFailureHandler$1, name, initialize, &_DeferredCompletionFailureHandler$1_ClassInfo_, allocate$DeferredCompletionFailureHandler$1);
	return class$;
}

$Class* DeferredCompletionFailureHandler$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com