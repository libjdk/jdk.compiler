#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler$Handler.h>

#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$Completer.h>
#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>
#include <jcpp.h>

using $DeferredCompletionFailureHandler = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$Completer = ::com::sun::tools::javac::code::Symbol$Completer;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _DeferredCompletionFailureHandler$Handler_MethodInfo_[] = {
	{"classSymbolCompleteFailed", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Symbol$Completer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"classSymbolRemoved", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"handleAPICompletionFailure", "(Lcom/sun/tools/javac/code/Symbol$CompletionFailure;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"install", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"uninstall", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _DeferredCompletionFailureHandler$Handler_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.DeferredCompletionFailureHandler$Handler", "com.sun.tools.javac.code.DeferredCompletionFailureHandler", "Handler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DeferredCompletionFailureHandler$Handler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.code.DeferredCompletionFailureHandler$Handler",
	nullptr,
	nullptr,
	nullptr,
	_DeferredCompletionFailureHandler$Handler_MethodInfo_,
	nullptr,
	nullptr,
	_DeferredCompletionFailureHandler$Handler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.DeferredCompletionFailureHandler"
};

$Object* allocate$DeferredCompletionFailureHandler$Handler($Class* clazz) {
	return $of($alloc(DeferredCompletionFailureHandler$Handler));
}

$Class* DeferredCompletionFailureHandler$Handler::load$($String* name, bool initialize) {
	$loadClass(DeferredCompletionFailureHandler$Handler, name, initialize, &_DeferredCompletionFailureHandler$Handler_ClassInfo_, allocate$DeferredCompletionFailureHandler$Handler);
	return class$;
}

$Class* DeferredCompletionFailureHandler$Handler::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com