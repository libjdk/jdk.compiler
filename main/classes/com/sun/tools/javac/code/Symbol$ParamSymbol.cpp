#include <com/sun/tools/javac/code/Symbol$ParamSymbol.h>

#include <com/sun/tools/javac/code/MissingInfoHandler.h>
#include <com/sun/tools/javac/code/Symbol$RootPackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/util/Name.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

using $MissingInfoHandler = ::com::sun::tools::javac::code::MissingInfoHandler;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$RootPackageSymbol = ::com::sun::tools::javac::code::Symbol$RootPackageSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $1Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Symbol$ParamSymbol_MethodInfo_[] = {
	{"<init>", "(JLcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Symbol$ParamSymbol::*)(int64_t,$Name*,$Type*,$Symbol*)>(&Symbol$ParamSymbol::init$))},
	{"getSimpleName", "()Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Symbol$ParamSymbol_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Symbol$ParamSymbol", "com.sun.tools.javac.code.Symbol", "ParamSymbol", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Symbol$VarSymbol", "com.sun.tools.javac.code.Symbol", "VarSymbol", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Symbol$ParamSymbol_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Symbol$ParamSymbol",
	"com.sun.tools.javac.code.Symbol$VarSymbol",
	nullptr,
	nullptr,
	_Symbol$ParamSymbol_MethodInfo_,
	nullptr,
	nullptr,
	_Symbol$ParamSymbol_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Symbol"
};

$Object* allocate$Symbol$ParamSymbol($Class* clazz) {
	return $of($alloc(Symbol$ParamSymbol));
}

void Symbol$ParamSymbol::init$(int64_t flags, $Name* name, $Type* type, $Symbol* owner) {
	$Symbol$VarSymbol::init$(flags, name, type, owner);
}

$1Name* Symbol$ParamSymbol::getSimpleName() {
	$useLocalCurrentObjectStackCache();
	if (((int64_t)(this->flags_field & (uint64_t)(int64_t)0x0010000000000000)) == 0) {
		this->flags_field |= 0x0010000000000000;
		$var($Symbol, rootPack, this);
		while (rootPack != nullptr && !($instanceOf($Symbol$RootPackageSymbol, rootPack))) {
			$assign(rootPack, rootPack->owner);
		}
		if (rootPack != nullptr) {
			$var($Name, inferredName, $nc($nc(($cast($Symbol$RootPackageSymbol, rootPack)))->missingInfoHandler)->getParameterName(this));
			if (inferredName != nullptr) {
				$set(this, name, inferredName);
			}
		}
	}
	return $Symbol$VarSymbol::getSimpleName();
}

Symbol$ParamSymbol::Symbol$ParamSymbol() {
}

$Class* Symbol$ParamSymbol::load$($String* name, bool initialize) {
	$loadClass(Symbol$ParamSymbol, name, initialize, &_Symbol$ParamSymbol_ClassInfo_, allocate$Symbol$ParamSymbol);
	return class$;
}

$Class* Symbol$ParamSymbol::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com