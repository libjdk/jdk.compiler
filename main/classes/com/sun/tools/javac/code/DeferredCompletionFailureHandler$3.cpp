#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler$3.h>

#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$Completer.h>
#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>
#include <jcpp.h>

using $DeferredCompletionFailureHandler = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler;
using $DeferredCompletionFailureHandler$Handler = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler$Handler;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$Completer = ::com::sun::tools::javac::code::Symbol$Completer;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _DeferredCompletionFailureHandler$3_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler;", nullptr, $FINAL | $SYNTHETIC, $field(DeferredCompletionFailureHandler$3, this$0)},
	{}
};

$MethodInfo _DeferredCompletionFailureHandler$3_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler;)V", nullptr, 0, $method(static_cast<void(DeferredCompletionFailureHandler$3::*)($DeferredCompletionFailureHandler*)>(&DeferredCompletionFailureHandler$3::init$))},
	{"classSymbolCompleteFailed", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Symbol$Completer;)V", nullptr, $PUBLIC},
	{"classSymbolRemoved", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PUBLIC},
	{"handleAPICompletionFailure", "(Lcom/sun/tools/javac/code/Symbol$CompletionFailure;)V", nullptr, $PUBLIC},
	{"install", "()V", nullptr, $PUBLIC},
	{"uninstall", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DeferredCompletionFailureHandler$3_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.DeferredCompletionFailureHandler",
	nullptr,
	nullptr
};

$InnerClassInfo _DeferredCompletionFailureHandler$3_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.DeferredCompletionFailureHandler$3", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.DeferredCompletionFailureHandler$Handler", "com.sun.tools.javac.code.DeferredCompletionFailureHandler", "Handler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DeferredCompletionFailureHandler$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.DeferredCompletionFailureHandler$3",
	"java.lang.Object",
	"com.sun.tools.javac.code.DeferredCompletionFailureHandler$Handler",
	_DeferredCompletionFailureHandler$3_FieldInfo_,
	_DeferredCompletionFailureHandler$3_MethodInfo_,
	nullptr,
	&_DeferredCompletionFailureHandler$3_EnclosingMethodInfo_,
	_DeferredCompletionFailureHandler$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.DeferredCompletionFailureHandler"
};

$Object* allocate$DeferredCompletionFailureHandler$3($Class* clazz) {
	return $of($alloc(DeferredCompletionFailureHandler$3));
}

void DeferredCompletionFailureHandler$3::init$($DeferredCompletionFailureHandler* this$0) {
	$set(this, this$0, this$0);
}

void DeferredCompletionFailureHandler$3::install() {
}

void DeferredCompletionFailureHandler$3::handleAPICompletionFailure($Symbol$CompletionFailure* cf) {
	$throw(cf);
}

void DeferredCompletionFailureHandler$3::classSymbolCompleteFailed($Symbol$ClassSymbol* sym, $Symbol$Completer* origCompleter) {
}

void DeferredCompletionFailureHandler$3::classSymbolRemoved($Symbol$ClassSymbol* sym) {
}

void DeferredCompletionFailureHandler$3::uninstall() {
}

DeferredCompletionFailureHandler$3::DeferredCompletionFailureHandler$3() {
}

$Class* DeferredCompletionFailureHandler$3::load$($String* name, bool initialize) {
	$loadClass(DeferredCompletionFailureHandler$3, name, initialize, &_DeferredCompletionFailureHandler$3_ClassInfo_, allocate$DeferredCompletionFailureHandler$3);
	return class$;
}

$Class* DeferredCompletionFailureHandler$3::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com