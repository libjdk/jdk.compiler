#include <com/sun/tools/javac/code/ModuleFinder$1.h>

#include <com/sun/tools/javac/code/ClassFinder.h>
#include <com/sun/tools/javac/code/ModuleFinder.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <jcpp.h>

using $ClassFinder = ::com::sun::tools::javac::code::ClassFinder;
using $ModuleFinder = ::com::sun::tools::javac::code::ModuleFinder;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$Completer = ::com::sun::tools::javac::code::Symbol$Completer;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
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

$FieldInfo _ModuleFinder$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/ModuleFinder;", nullptr, $FINAL | $SYNTHETIC, $field(ModuleFinder$1, this$0)},
	{"val$msym", "Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $FINAL | $SYNTHETIC, $field(ModuleFinder$1, val$msym)},
	{}
};

$MethodInfo _ModuleFinder$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/ModuleFinder;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)V", "()V", 0, $method(static_cast<void(ModuleFinder$1::*)($ModuleFinder*,$Symbol$ModuleSymbol*)>(&ModuleFinder$1::init$))},
	{"complete", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.code.Symbol$CompletionFailure"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ModuleFinder$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.ModuleFinder",
	"findModuleInfo",
	"(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)V"
};

$InnerClassInfo _ModuleFinder$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.ModuleFinder$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Symbol$Completer", "com.sun.tools.javac.code.Symbol", "Completer", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.code.Symbol$ModuleSymbol", "com.sun.tools.javac.code.Symbol", "ModuleSymbol", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ModuleFinder$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.ModuleFinder$1",
	"java.lang.Object",
	"com.sun.tools.javac.code.Symbol$Completer",
	_ModuleFinder$1_FieldInfo_,
	_ModuleFinder$1_MethodInfo_,
	nullptr,
	&_ModuleFinder$1_EnclosingMethodInfo_,
	_ModuleFinder$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.ModuleFinder"
};

$Object* allocate$ModuleFinder$1($Class* clazz) {
	return $of($alloc(ModuleFinder$1));
}

void ModuleFinder$1::init$($ModuleFinder* this$0, $Symbol$ModuleSymbol* val$msym) {
	$set(this, this$0, this$0);
	$set(this, val$msym, val$msym);
}

void ModuleFinder$1::complete($Symbol* sym) {
	$nc(this->this$0->classFinder)->fillIn($nc(this->val$msym)->module_info);
}

$String* ModuleFinder$1::toString() {
	return "ModuleInfoCompleter"_s;
}

ModuleFinder$1::ModuleFinder$1() {
}

$Class* ModuleFinder$1::load$($String* name, bool initialize) {
	$loadClass(ModuleFinder$1, name, initialize, &_ModuleFinder$1_ClassInfo_, allocate$ModuleFinder$1);
	return class$;
}

$Class* ModuleFinder$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com