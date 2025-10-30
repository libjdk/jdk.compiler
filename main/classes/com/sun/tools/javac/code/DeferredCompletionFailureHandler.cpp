#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler.h>

#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler$1.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler$2.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler$3.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler$DeferredCompleter.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler$Handler.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$Completer.h>
#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <jcpp.h>

using $DeferredCompletionFailureHandler$1 = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler$1;
using $DeferredCompletionFailureHandler$2 = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler$2;
using $DeferredCompletionFailureHandler$3 = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler$3;
using $DeferredCompletionFailureHandler$DeferredCompleter = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler$DeferredCompleter;
using $DeferredCompletionFailureHandler$Handler = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler$Handler;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$Completer = ::com::sun::tools::javac::code::Symbol$Completer;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _DeferredCompletionFailureHandler_FieldInfo_[] = {
	{"deferredCompletionFailureHandlerKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler;>;", $PROTECTED | $STATIC | $FINAL, $staticField(DeferredCompletionFailureHandler, deferredCompletionFailureHandlerKey)},
	{"userCodeHandler", "Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler$Handler;", nullptr, $PUBLIC | $FINAL, $field(DeferredCompletionFailureHandler, userCodeHandler)},
	{"speculativeCodeHandler", "Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler$Handler;", nullptr, $PUBLIC | $FINAL, $field(DeferredCompletionFailureHandler, speculativeCodeHandler)},
	{"javacCodeHandler", "Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler$Handler;", nullptr, $PUBLIC | $FINAL, $field(DeferredCompletionFailureHandler, javacCodeHandler)},
	{"handler", "Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler$Handler;", nullptr, $PRIVATE, $field(DeferredCompletionFailureHandler, handler)},
	{}
};

$MethodInfo _DeferredCompletionFailureHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(DeferredCompletionFailureHandler::*)($Context*)>(&DeferredCompletionFailureHandler::init$))},
	{"classSymbolCompleteFailed", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Symbol$Completer;)V", nullptr, $PUBLIC},
	{"classSymbolRemoved", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PUBLIC},
	{"handleAPICompletionFailure", "(Lcom/sun/tools/javac/code/Symbol$CompletionFailure;)V", nullptr, $PUBLIC},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DeferredCompletionFailureHandler*(*)($Context*)>(&DeferredCompletionFailureHandler::instance))},
	{"isDeferredCompleter", "(Lcom/sun/tools/javac/code/Symbol$Completer;)Z", nullptr, $PUBLIC},
	{"setHandler", "(Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler$Handler;)Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler$Handler;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DeferredCompletionFailureHandler_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.DeferredCompletionFailureHandler$FlipSymbolDescription", "com.sun.tools.javac.code.DeferredCompletionFailureHandler", "FlipSymbolDescription", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.code.DeferredCompletionFailureHandler$DeferredCompleter", "com.sun.tools.javac.code.DeferredCompletionFailureHandler", "DeferredCompleter", $PRIVATE},
	{"com.sun.tools.javac.code.DeferredCompletionFailureHandler$Handler", "com.sun.tools.javac.code.DeferredCompletionFailureHandler", "Handler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.code.DeferredCompletionFailureHandler$3", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.DeferredCompletionFailureHandler$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.DeferredCompletionFailureHandler$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DeferredCompletionFailureHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.DeferredCompletionFailureHandler",
	"java.lang.Object",
	nullptr,
	_DeferredCompletionFailureHandler_FieldInfo_,
	_DeferredCompletionFailureHandler_MethodInfo_,
	nullptr,
	nullptr,
	_DeferredCompletionFailureHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.DeferredCompletionFailureHandler$FlipSymbolDescription,com.sun.tools.javac.code.DeferredCompletionFailureHandler$DeferredCompleter,com.sun.tools.javac.code.DeferredCompletionFailureHandler$Handler,com.sun.tools.javac.code.DeferredCompletionFailureHandler$3,com.sun.tools.javac.code.DeferredCompletionFailureHandler$2,com.sun.tools.javac.code.DeferredCompletionFailureHandler$1,com.sun.tools.javac.code.DeferredCompletionFailureHandler$1$1"
};

$Object* allocate$DeferredCompletionFailureHandler($Class* clazz) {
	return $of($alloc(DeferredCompletionFailureHandler));
}

$Context$Key* DeferredCompletionFailureHandler::deferredCompletionFailureHandlerKey = nullptr;

DeferredCompletionFailureHandler* DeferredCompletionFailureHandler::instance($Context* context) {
	$init(DeferredCompletionFailureHandler);
	$var(DeferredCompletionFailureHandler, instance, $cast(DeferredCompletionFailureHandler, $nc(context)->get(DeferredCompletionFailureHandler::deferredCompletionFailureHandlerKey)));
	if (instance == nullptr) {
		$assign(instance, $new(DeferredCompletionFailureHandler, context));
	}
	return instance;
}

void DeferredCompletionFailureHandler::init$($Context* context) {
	$set(this, userCodeHandler, $new($DeferredCompletionFailureHandler$1, this));
	$set(this, speculativeCodeHandler, $new($DeferredCompletionFailureHandler$2, this));
	$set(this, javacCodeHandler, $new($DeferredCompletionFailureHandler$3, this));
	$set(this, handler, this->javacCodeHandler);
	$nc(context)->put(DeferredCompletionFailureHandler::deferredCompletionFailureHandlerKey, $of(this));
}

$DeferredCompletionFailureHandler$Handler* DeferredCompletionFailureHandler::setHandler($DeferredCompletionFailureHandler$Handler* h) {
	if (h == this->handler) {
		return this->handler;
	}
	$nc(this->handler)->uninstall();
	$var($DeferredCompletionFailureHandler$Handler, prev, this->handler);
	$set(this, handler, h);
	$nc(this->handler)->install();
	return prev;
}

void DeferredCompletionFailureHandler::handleAPICompletionFailure($Symbol$CompletionFailure* cf) {
	$nc(this->handler)->handleAPICompletionFailure(cf);
}

void DeferredCompletionFailureHandler::classSymbolCompleteFailed($Symbol$ClassSymbol* sym, $Symbol$Completer* origCompleter) {
	$nc(this->handler)->classSymbolCompleteFailed(sym, origCompleter);
}

void DeferredCompletionFailureHandler::classSymbolRemoved($Symbol$ClassSymbol* sym) {
	$nc(this->handler)->classSymbolRemoved(sym);
}

bool DeferredCompletionFailureHandler::isDeferredCompleter($Symbol$Completer* c) {
	return $instanceOf($DeferredCompletionFailureHandler$DeferredCompleter, c);
}

void clinit$DeferredCompletionFailureHandler($Class* class$) {
	$assignStatic(DeferredCompletionFailureHandler::deferredCompletionFailureHandlerKey, $new($Context$Key));
}

DeferredCompletionFailureHandler::DeferredCompletionFailureHandler() {
}

$Class* DeferredCompletionFailureHandler::load$($String* name, bool initialize) {
	$loadClass(DeferredCompletionFailureHandler, name, initialize, &_DeferredCompletionFailureHandler_ClassInfo_, clinit$DeferredCompletionFailureHandler, allocate$DeferredCompletionFailureHandler);
	return class$;
}

$Class* DeferredCompletionFailureHandler::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com