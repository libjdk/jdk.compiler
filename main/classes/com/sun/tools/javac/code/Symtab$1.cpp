#include <com/sun/tools/javac/code/Symtab$1.h>

#include <com/sun/tools/javac/code/Symbol$Completer.h>
#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$Completer = ::com::sun::tools::javac::code::Symbol$Completer;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Symtab$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $FINAL | $SYNTHETIC, $field(Symtab$1, this$0)},
	{"val$completer", "Lcom/sun/tools/javac/code/Symbol$Completer;", nullptr, $FINAL | $SYNTHETIC, $field(Symtab$1, val$completer)},
	{}
};

$MethodInfo _Symtab$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symtab;Lcom/sun/tools/javac/code/Symbol$Completer;)V", "()V", 0, $method(static_cast<void(Symtab$1::*)($Symtab*,$Symbol$Completer*)>(&Symtab$1::init$))},
	{"complete", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.code.Symbol$CompletionFailure"},
	{"isTerminal", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Symtab$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Symtab",
	"synthesizeEmptyInterfaceIfMissing",
	"(Lcom/sun/tools/javac/code/Type;)V"
};

$InnerClassInfo _Symtab$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Symtab$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Symbol$Completer", "com.sun.tools.javac.code.Symbol", "Completer", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Symtab$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Symtab$1",
	"java.lang.Object",
	"com.sun.tools.javac.code.Symbol$Completer",
	_Symtab$1_FieldInfo_,
	_Symtab$1_MethodInfo_,
	nullptr,
	&_Symtab$1_EnclosingMethodInfo_,
	_Symtab$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Symtab"
};

$Object* allocate$Symtab$1($Class* clazz) {
	return $of($alloc(Symtab$1));
}

void Symtab$1::init$($Symtab* this$0, $Symbol$Completer* val$completer) {
	$set(this, this$0, this$0);
	$set(this, val$completer, val$completer);
}

void Symtab$1::complete($Symbol* sym) {
	try {
		$nc(this->val$completer)->complete(sym);
	} catch ($Symbol$CompletionFailure& e) {
		$nc(sym)->flags_field |= (1 | 512);
		$set($nc($cast($Type$ClassType, sym->type)), supertype_field, this->this$0->objectType);
	}
}

bool Symtab$1::isTerminal() {
	return $nc(this->val$completer)->isTerminal();
}

Symtab$1::Symtab$1() {
}

$Class* Symtab$1::load$($String* name, bool initialize) {
	$loadClass(Symtab$1, name, initialize, &_Symtab$1_ClassInfo_, allocate$Symtab$1);
	return class$;
}

$Class* Symtab$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com