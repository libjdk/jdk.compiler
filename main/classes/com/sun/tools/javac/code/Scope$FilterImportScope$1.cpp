#include <com/sun/tools/javac/code/Scope$FilterImportScope$1.h>

#include <com/sun/tools/javac/code/Scope$FilterImportScope$SymbolImporter.h>
#include <com/sun/tools/javac/code/Scope$FilterImportScope.h>
#include <com/sun/tools/javac/code/Scope$LookupKind.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <java/lang/Iterable.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$FilterImportScope = ::com::sun::tools::javac::code::Scope$FilterImportScope;
using $Scope$FilterImportScope$SymbolImporter = ::com::sun::tools::javac::code::Scope$FilterImportScope$SymbolImporter;
using $Scope$LookupKind = ::com::sun::tools::javac::code::Scope$LookupKind;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Scope$FilterImportScope$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Scope$FilterImportScope;", nullptr, $FINAL | $SYNTHETIC, $field(Scope$FilterImportScope$1, this$0)},
	{"val$lookupKind", "Lcom/sun/tools/javac/code/Scope$LookupKind;", nullptr, $FINAL | $SYNTHETIC, $field(Scope$FilterImportScope$1, val$lookupKind)},
	{"val$sf", "Ljava/util/function/Predicate;", nullptr, $FINAL | $SYNTHETIC, $field(Scope$FilterImportScope$1, val$sf)},
	{}
};

$MethodInfo _Scope$FilterImportScope$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Scope$FilterImportScope;ZLjava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)V", nullptr, 0, $method(static_cast<void(Scope$FilterImportScope$1::*)($Scope$FilterImportScope*,bool,$Predicate*,$Scope$LookupKind*)>(&Scope$FilterImportScope$1::init$))},
	{"doLookup", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Ljava/lang/Iterable;", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol;>;", 0},
	{}
};

$EnclosingMethodInfo _Scope$FilterImportScope$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Scope$FilterImportScope",
	"getSymbols",
	"(Ljava/util/function/Predicate;Lcom/sun/tools/javac/code/Scope$LookupKind;)Ljava/lang/Iterable;"
};

$InnerClassInfo _Scope$FilterImportScope$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Scope$FilterImportScope", "com.sun.tools.javac.code.Scope", "FilterImportScope", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.code.Scope$FilterImportScope$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Scope$FilterImportScope$SymbolImporter", "com.sun.tools.javac.code.Scope$FilterImportScope", "SymbolImporter", $ABSTRACT},
	{"com.sun.tools.javac.code.Scope$LookupKind", "com.sun.tools.javac.code.Scope", "LookupKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Scope$FilterImportScope$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Scope$FilterImportScope$1",
	"com.sun.tools.javac.code.Scope$FilterImportScope$SymbolImporter",
	nullptr,
	_Scope$FilterImportScope$1_FieldInfo_,
	_Scope$FilterImportScope$1_MethodInfo_,
	nullptr,
	&_Scope$FilterImportScope$1_EnclosingMethodInfo_,
	_Scope$FilterImportScope$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Scope"
};

$Object* allocate$Scope$FilterImportScope$1($Class* clazz) {
	return $of($alloc(Scope$FilterImportScope$1));
}

void Scope$FilterImportScope$1::init$($Scope$FilterImportScope* this$0, bool inspectSuperTypes, $Predicate* val$sf, $Scope$LookupKind* val$lookupKind) {
	$set(this, this$0, this$0);
	$set(this, val$sf, val$sf);
	$set(this, val$lookupKind, val$lookupKind);
	$Scope$FilterImportScope$SymbolImporter::init$(this$0, inspectSuperTypes);
}

$Iterable* Scope$FilterImportScope$1::doLookup($Symbol$TypeSymbol* tsym) {
	return $nc($($nc(tsym)->members()))->getSymbols(this->val$sf, this->val$lookupKind);
}

Scope$FilterImportScope$1::Scope$FilterImportScope$1() {
}

$Class* Scope$FilterImportScope$1::load$($String* name, bool initialize) {
	$loadClass(Scope$FilterImportScope$1, name, initialize, &_Scope$FilterImportScope$1_ClassInfo_, allocate$Scope$FilterImportScope$1);
	return class$;
}

$Class* Scope$FilterImportScope$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com