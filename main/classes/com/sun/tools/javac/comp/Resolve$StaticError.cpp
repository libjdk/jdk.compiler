#include <com/sun/tools/javac/comp/Resolve$StaticError.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Kinds$KindName.h>
#include <com/sun/tools/javac/code/Kinds.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Resolve$InvalidSymbolError.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

#undef CLASS
#undef STATICERR
#undef TYP

using $Kinds = ::com::sun::tools::javac::code::Kinds;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Kinds$KindName = ::com::sun::tools::javac::code::Kinds$KindName;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$InvalidSymbolError = ::com::sun::tools::javac::comp::Resolve$InvalidSymbolError;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $List = ::com::sun::tools::javac::util::List;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Resolve$StaticError_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$StaticError, this$0)},
	{}
};

$MethodInfo _Resolve$StaticError_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $method(static_cast<void(Resolve$StaticError::*)($Resolve*,$Symbol*)>(&Resolve$StaticError::init$))},
	{"getDiagnostic", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic;", 0},
	{}
};

$InnerClassInfo _Resolve$StaticError_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$StaticError", "com.sun.tools.javac.comp.Resolve", "StaticError", 0},
	{"com.sun.tools.javac.comp.Resolve$InvalidSymbolError", "com.sun.tools.javac.comp.Resolve", "InvalidSymbolError", $ABSTRACT},
	{}
};

$ClassInfo _Resolve$StaticError_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$StaticError",
	"com.sun.tools.javac.comp.Resolve$InvalidSymbolError",
	nullptr,
	_Resolve$StaticError_FieldInfo_,
	_Resolve$StaticError_MethodInfo_,
	nullptr,
	nullptr,
	_Resolve$StaticError_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$StaticError($Class* clazz) {
	return $of($alloc(Resolve$StaticError));
}

void Resolve$StaticError::init$($Resolve* this$0, $Symbol* sym) {
	$set(this, this$0, this$0);
	$init($Kinds$Kind);
	$Resolve$InvalidSymbolError::init$(this$0, $Kinds$Kind::STATICERR, sym, "static error"_s);
}

$JCDiagnostic* Resolve$StaticError::getDiagnostic($JCDiagnostic$DiagnosticType* dkind, $JCDiagnostic$DiagnosticPosition* pos, $Symbol* location, $Type* site, $Name* name, $List* argtypes, $List* typeargtypes) {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$Kind);
	$init($TypeTag);
	$var($Symbol, errSym, ($nc(this->sym)->kind == $Kinds$Kind::TYP && $nc($nc(this->sym)->type)->hasTag($TypeTag::CLASS)) ? static_cast<$Symbol*>($nc($($nc(this->this$0->types)->erasure($nc(this->sym)->type)))->tsym) : this->sym);
	$var($JCDiagnostic$DiagnosticType, var$0, dkind);
	$var($DiagnosticSource, var$1, $nc(this->this$0->log)->currentSource());
	$var($JCDiagnostic$DiagnosticPosition, var$2, pos);
	$var($String, var$3, "non-static.cant.be.ref"_s);
	return $nc(this->this$0->diags)->create(var$0, var$1, var$2, var$3, $$new($ObjectArray, {
		$($of($Kinds::kindName(this->sym))),
		$of(errSym)
	}));
}

Resolve$StaticError::Resolve$StaticError() {
}

$Class* Resolve$StaticError::load$($String* name, bool initialize) {
	$loadClass(Resolve$StaticError, name, initialize, &_Resolve$StaticError_ClassInfo_, allocate$Resolve$StaticError);
	return class$;
}

$Class* Resolve$StaticError::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com