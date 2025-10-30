#include <com/sun/tools/javac/code/Symtab$5.h>

#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Name = ::com::sun::tools::javac::util::Name;
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

$FieldInfo _Symtab$5_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $FINAL | $SYNTHETIC, $field(Symtab$5, this$0)},
	{}
};

$MethodInfo _Symtab$5_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symtab;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $method(static_cast<void(Symtab$5::*)($Symtab*,$Name*,$Symbol*)>(&Symtab$5::init$))},
	{"isNoModule", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Symtab$5_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Symtab",
	"<init>",
	"(Lcom/sun/tools/javac/util/Context;)V"
};

$InnerClassInfo _Symtab$5_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Symtab$5", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Symbol$ModuleSymbol", "com.sun.tools.javac.code.Symbol", "ModuleSymbol", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Symtab$5_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Symtab$5",
	"com.sun.tools.javac.code.Symbol$ModuleSymbol",
	nullptr,
	_Symtab$5_FieldInfo_,
	_Symtab$5_MethodInfo_,
	nullptr,
	&_Symtab$5_EnclosingMethodInfo_,
	_Symtab$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Symtab"
};

$Object* allocate$Symtab$5($Class* clazz) {
	return $of($alloc(Symtab$5));
}

void Symtab$5::init$($Symtab* this$0, $Name* name, $Symbol* owner) {
	$set(this, this$0, this$0);
	$Symbol$ModuleSymbol::init$(name, owner);
}

bool Symtab$5::isNoModule() {
	return true;
}

Symtab$5::Symtab$5() {
}

$Class* Symtab$5::load$($String* name, bool initialize) {
	$loadClass(Symtab$5, name, initialize, &_Symtab$5_ClassInfo_, allocate$Symtab$5);
	return class$;
}

$Class* Symtab$5::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com