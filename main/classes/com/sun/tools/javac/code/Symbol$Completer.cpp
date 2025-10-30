#include <com/sun/tools/javac/code/Symbol$Completer.h>

#include <com/sun/tools/javac/code/Symbol$Completer$1.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <jcpp.h>

#undef NULL_COMPLETER

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$Completer$1 = ::com::sun::tools::javac::code::Symbol$Completer$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Symbol$Completer_FieldInfo_[] = {
	{"NULL_COMPLETER", "Lcom/sun/tools/javac/code/Symbol$Completer;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Symbol$Completer, NULL_COMPLETER)},
	{}
};

$MethodInfo _Symbol$Completer_MethodInfo_[] = {
	{"complete", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.tools.javac.code.Symbol$CompletionFailure"},
	{"isTerminal", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Symbol$Completer_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Symbol$Completer", "com.sun.tools.javac.code.Symbol", "Completer", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.code.Symbol$Completer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Symbol$Completer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.code.Symbol$Completer",
	nullptr,
	nullptr,
	_Symbol$Completer_FieldInfo_,
	_Symbol$Completer_MethodInfo_,
	nullptr,
	nullptr,
	_Symbol$Completer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Symbol"
};

$Object* allocate$Symbol$Completer($Class* clazz) {
	return $of($alloc(Symbol$Completer));
}

Symbol$Completer* Symbol$Completer::NULL_COMPLETER = nullptr;

bool Symbol$Completer::isTerminal() {
	return false;
}

void clinit$Symbol$Completer($Class* class$) {
	$assignStatic(Symbol$Completer::NULL_COMPLETER, $new($Symbol$Completer$1));
}

$Class* Symbol$Completer::load$($String* name, bool initialize) {
	$loadClass(Symbol$Completer, name, initialize, &_Symbol$Completer_ClassInfo_, clinit$Symbol$Completer, allocate$Symbol$Completer);
	return class$;
}

$Class* Symbol$Completer::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com