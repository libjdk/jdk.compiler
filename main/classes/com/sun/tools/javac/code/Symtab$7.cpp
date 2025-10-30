#include <com/sun/tools/javac/code/Symtab$7.h>

#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/util/JavacMessages.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $JavacMessages = ::com::sun::tools::javac::util::JavacMessages;
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

$FieldInfo _Symtab$7_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $FINAL | $SYNTHETIC, $field(Symtab$7, this$0)},
	{}
};

$MethodInfo _Symtab$7_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symtab;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $method(static_cast<void(Symtab$7::*)($Symtab*,$Name*,$Symbol*)>(&Symtab$7::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Symtab$7_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Symtab",
	"addRootPackageFor",
	"(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)V"
};

$InnerClassInfo _Symtab$7_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Symtab$7", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Symbol$PackageSymbol", "com.sun.tools.javac.code.Symbol", "PackageSymbol", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Symbol$ModuleSymbol", "com.sun.tools.javac.code.Symbol", "ModuleSymbol", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Symtab$7_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Symtab$7",
	"com.sun.tools.javac.code.Symbol$PackageSymbol",
	nullptr,
	_Symtab$7_FieldInfo_,
	_Symtab$7_MethodInfo_,
	nullptr,
	&_Symtab$7_EnclosingMethodInfo_,
	_Symtab$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Symtab"
};

$Object* allocate$Symtab$7($Class* clazz) {
	return $of($alloc(Symtab$7));
}

void Symtab$7::init$($Symtab* this$0, $Name* name, $Symbol* owner) {
	$set(this, this$0, this$0);
	$Symbol$PackageSymbol::init$(name, owner);
}

$String* Symtab$7::toString() {
	return $nc(this->this$0->messages)->getLocalizedString("compiler.misc.unnamed.package"_s, $$new($ObjectArray, 0));
}

Symtab$7::Symtab$7() {
}

$Class* Symtab$7::load$($String* name, bool initialize) {
	$loadClass(Symtab$7, name, initialize, &_Symtab$7_ClassInfo_, allocate$Symtab$7);
	return class$;
}

$Class* Symtab$7::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com