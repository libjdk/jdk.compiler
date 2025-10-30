#include <com/sun/tools/javac/code/Symbol$RootPackageSymbol.h>

#include <com/sun/tools/javac/code/MissingInfoHandler.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

using $MissingInfoHandler = ::com::sun::tools::javac::code::MissingInfoHandler;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Symbol$RootPackageSymbol_FieldInfo_[] = {
	{"missingInfoHandler", "Lcom/sun/tools/javac/code/MissingInfoHandler;", nullptr, $PUBLIC | $FINAL, $field(Symbol$RootPackageSymbol, missingInfoHandler)},
	{"allowPrivateInvokeVirtual", "Z", nullptr, $PUBLIC | $FINAL, $field(Symbol$RootPackageSymbol, allowPrivateInvokeVirtual)},
	{}
};

$MethodInfo _Symbol$RootPackageSymbol_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/MissingInfoHandler;Z)V", nullptr, $PUBLIC, $method(static_cast<void(Symbol$RootPackageSymbol::*)($Name*,$Symbol*,$MissingInfoHandler*,bool)>(&Symbol$RootPackageSymbol::init$))},
	{}
};

$InnerClassInfo _Symbol$RootPackageSymbol_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Symbol$RootPackageSymbol", "com.sun.tools.javac.code.Symbol", "RootPackageSymbol", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Symbol$PackageSymbol", "com.sun.tools.javac.code.Symbol", "PackageSymbol", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Symbol$RootPackageSymbol_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Symbol$RootPackageSymbol",
	"com.sun.tools.javac.code.Symbol$PackageSymbol",
	nullptr,
	_Symbol$RootPackageSymbol_FieldInfo_,
	_Symbol$RootPackageSymbol_MethodInfo_,
	nullptr,
	nullptr,
	_Symbol$RootPackageSymbol_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Symbol"
};

$Object* allocate$Symbol$RootPackageSymbol($Class* clazz) {
	return $of($alloc(Symbol$RootPackageSymbol));
}

void Symbol$RootPackageSymbol::init$($Name* name, $Symbol* owner, $MissingInfoHandler* missingInfoHandler, bool allowPrivateInvokeVirtual) {
	$Symbol$PackageSymbol::init$(name, owner);
	$set(this, missingInfoHandler, missingInfoHandler);
	this->allowPrivateInvokeVirtual = allowPrivateInvokeVirtual;
}

Symbol$RootPackageSymbol::Symbol$RootPackageSymbol() {
}

$Class* Symbol$RootPackageSymbol::load$($String* name, bool initialize) {
	$loadClass(Symbol$RootPackageSymbol, name, initialize, &_Symbol$RootPackageSymbol_ClassInfo_, allocate$Symbol$RootPackageSymbol);
	return class$;
}

$Class* Symbol$RootPackageSymbol::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com