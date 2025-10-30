#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler$DeferredCompleter.h>

#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler.h>
#include <com/sun/tools/javac/code/Symbol$Completer.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <jcpp.h>

using $DeferredCompletionFailureHandler = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$Completer = ::com::sun::tools::javac::code::Symbol$Completer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _DeferredCompletionFailureHandler$DeferredCompleter_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler;", nullptr, $FINAL | $SYNTHETIC, $field(DeferredCompletionFailureHandler$DeferredCompleter, this$0)},
	{"origCompleter", "Lcom/sun/tools/javac/code/Symbol$Completer;", nullptr, $PRIVATE | $FINAL, $field(DeferredCompletionFailureHandler$DeferredCompleter, origCompleter)},
	{}
};

$MethodInfo _DeferredCompletionFailureHandler$DeferredCompleter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler;Lcom/sun/tools/javac/code/Symbol$Completer;)V", nullptr, $PUBLIC, $method(static_cast<void(DeferredCompletionFailureHandler$DeferredCompleter::*)($DeferredCompletionFailureHandler*,$Symbol$Completer*)>(&DeferredCompletionFailureHandler$DeferredCompleter::init$))},
	{"complete", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.code.Symbol$CompletionFailure"},
	{}
};

$InnerClassInfo _DeferredCompletionFailureHandler$DeferredCompleter_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.DeferredCompletionFailureHandler$DeferredCompleter", "com.sun.tools.javac.code.DeferredCompletionFailureHandler", "DeferredCompleter", $PRIVATE},
	{"com.sun.tools.javac.code.Symbol$Completer", "com.sun.tools.javac.code.Symbol", "Completer", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DeferredCompletionFailureHandler$DeferredCompleter_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.DeferredCompletionFailureHandler$DeferredCompleter",
	"java.lang.Object",
	"com.sun.tools.javac.code.Symbol$Completer",
	_DeferredCompletionFailureHandler$DeferredCompleter_FieldInfo_,
	_DeferredCompletionFailureHandler$DeferredCompleter_MethodInfo_,
	nullptr,
	nullptr,
	_DeferredCompletionFailureHandler$DeferredCompleter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.DeferredCompletionFailureHandler"
};

$Object* allocate$DeferredCompletionFailureHandler$DeferredCompleter($Class* clazz) {
	return $of($alloc(DeferredCompletionFailureHandler$DeferredCompleter));
}

void DeferredCompletionFailureHandler$DeferredCompleter::init$($DeferredCompletionFailureHandler* this$0, $Symbol$Completer* origCompleter) {
	$set(this, this$0, this$0);
	$set(this, origCompleter, origCompleter);
}

void DeferredCompletionFailureHandler$DeferredCompleter::complete($Symbol* sym) {
	$nc(this->origCompleter)->complete(sym);
}

DeferredCompletionFailureHandler$DeferredCompleter::DeferredCompletionFailureHandler$DeferredCompleter() {
}

$Class* DeferredCompletionFailureHandler$DeferredCompleter::load$($String* name, bool initialize) {
	$loadClass(DeferredCompletionFailureHandler$DeferredCompleter, name, initialize, &_DeferredCompletionFailureHandler$DeferredCompleter_ClassInfo_, allocate$DeferredCompletionFailureHandler$DeferredCompleter);
	return class$;
}

$Class* DeferredCompletionFailureHandler$DeferredCompleter::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com