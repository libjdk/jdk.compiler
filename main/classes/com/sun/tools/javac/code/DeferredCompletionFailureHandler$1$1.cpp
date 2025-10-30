#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler$1$1.h>

#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler$1.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler$DeferredCompleter.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler.h>
#include <com/sun/tools/javac/code/Symbol$Completer.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $DeferredCompletionFailureHandler = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler;
using $DeferredCompletionFailureHandler$1 = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler$1;
using $DeferredCompletionFailureHandler$DeferredCompleter = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler$DeferredCompleter;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$Completer = ::com::sun::tools::javac::code::Symbol$Completer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _DeferredCompletionFailureHandler$1$1_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler$1;", nullptr, $FINAL | $SYNTHETIC, $field(DeferredCompletionFailureHandler$1$1, this$1)},
	{}
};

$MethodInfo _DeferredCompletionFailureHandler$1$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler$1;Lcom/sun/tools/javac/code/Symbol$Completer;)V", nullptr, 0, $method(static_cast<void(DeferredCompletionFailureHandler$1$1::*)($DeferredCompletionFailureHandler$1*,$Symbol$Completer*)>(&DeferredCompletionFailureHandler$1$1::init$))},
	{"complete", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.code.Symbol$CompletionFailure"},
	{}
};

$EnclosingMethodInfo _DeferredCompletionFailureHandler$1$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.DeferredCompletionFailureHandler$1",
	"classSymbolCompleteFailed",
	"(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Symbol$Completer;)V"
};

$InnerClassInfo _DeferredCompletionFailureHandler$1$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.DeferredCompletionFailureHandler$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.DeferredCompletionFailureHandler$1$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.DeferredCompletionFailureHandler$DeferredCompleter", "com.sun.tools.javac.code.DeferredCompletionFailureHandler", "DeferredCompleter", $PRIVATE},
	{"com.sun.tools.javac.code.Symbol$ClassSymbol", "com.sun.tools.javac.code.Symbol", "ClassSymbol", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Symbol$Completer", "com.sun.tools.javac.code.Symbol", "Completer", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DeferredCompletionFailureHandler$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.DeferredCompletionFailureHandler$1$1",
	"com.sun.tools.javac.code.DeferredCompletionFailureHandler$DeferredCompleter",
	nullptr,
	_DeferredCompletionFailureHandler$1$1_FieldInfo_,
	_DeferredCompletionFailureHandler$1$1_MethodInfo_,
	nullptr,
	&_DeferredCompletionFailureHandler$1$1_EnclosingMethodInfo_,
	_DeferredCompletionFailureHandler$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.DeferredCompletionFailureHandler"
};

$Object* allocate$DeferredCompletionFailureHandler$1$1($Class* clazz) {
	return $of($alloc(DeferredCompletionFailureHandler$1$1));
}

void DeferredCompletionFailureHandler$1$1::init$($DeferredCompletionFailureHandler$1* this$1, $Symbol$Completer* origCompleter) {
	$set(this, this$1, this$1);
	$DeferredCompletionFailureHandler$DeferredCompleter::init$(this$1->this$0, origCompleter);
}

void DeferredCompletionFailureHandler$1$1::complete($Symbol* sym) {
	$nc(this->this$1->class2Flip)->remove(sym);
	$DeferredCompletionFailureHandler$DeferredCompleter::complete(sym);
}

DeferredCompletionFailureHandler$1$1::DeferredCompletionFailureHandler$1$1() {
}

$Class* DeferredCompletionFailureHandler$1$1::load$($String* name, bool initialize) {
	$loadClass(DeferredCompletionFailureHandler$1$1, name, initialize, &_DeferredCompletionFailureHandler$1$1_ClassInfo_, allocate$DeferredCompletionFailureHandler$1$1);
	return class$;
}

$Class* DeferredCompletionFailureHandler$1$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com