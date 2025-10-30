#include <com/sun/tools/javac/code/Symbol$Completer$1.h>

#include <com/sun/tools/javac/code/Symbol.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$Completer = ::com::sun::tools::javac::code::Symbol$Completer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Symbol$Completer$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Symbol$Completer$1::*)()>(&Symbol$Completer$1::init$))},
	{"complete", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC},
	{"isTerminal", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Symbol$Completer$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Symbol$Completer",
	nullptr,
	nullptr
};

$InnerClassInfo _Symbol$Completer$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Symbol$Completer", "com.sun.tools.javac.code.Symbol", "Completer", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.code.Symbol$Completer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Symbol$Completer$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Symbol$Completer$1",
	"java.lang.Object",
	"com.sun.tools.javac.code.Symbol$Completer",
	nullptr,
	_Symbol$Completer$1_MethodInfo_,
	nullptr,
	&_Symbol$Completer$1_EnclosingMethodInfo_,
	_Symbol$Completer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Symbol"
};

$Object* allocate$Symbol$Completer$1($Class* clazz) {
	return $of($alloc(Symbol$Completer$1));
}

void Symbol$Completer$1::init$() {
}

void Symbol$Completer$1::complete($Symbol* sym) {
}

bool Symbol$Completer$1::isTerminal() {
	return true;
}

Symbol$Completer$1::Symbol$Completer$1() {
}

$Class* Symbol$Completer$1::load$($String* name, bool initialize) {
	$loadClass(Symbol$Completer$1, name, initialize, &_Symbol$Completer$1_ClassInfo_, allocate$Symbol$Completer$1);
	return class$;
}

$Class* Symbol$Completer$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com