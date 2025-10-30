#include <com/sun/tools/javac/comp/Resolve$BadMethodReferenceError.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Kinds$KindName.h>
#include <com/sun/tools/javac/code/Kinds.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Resolve$InvalidSymbolError.h>
#include <com/sun/tools/javac/comp/Resolve$ResolveError.h>
#include <com/sun/tools/javac/comp/Resolve$StaticError.h>
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

using $Kinds = ::com::sun::tools::javac::code::Kinds;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Kinds$KindName = ::com::sun::tools::javac::code::Kinds$KindName;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$InvalidSymbolError = ::com::sun::tools::javac::comp::Resolve$InvalidSymbolError;
using $Resolve$ResolveError = ::com::sun::tools::javac::comp::Resolve$ResolveError;
using $Resolve$StaticError = ::com::sun::tools::javac::comp::Resolve$StaticError;
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

$FieldInfo _Resolve$BadMethodReferenceError_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$BadMethodReferenceError, this$0)},
	{"unboundLookup", "Z", nullptr, 0, $field(Resolve$BadMethodReferenceError, unboundLookup)},
	{}
};

$MethodInfo _Resolve$BadMethodReferenceError_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/code/Symbol;Z)V", nullptr, $PUBLIC, $method(static_cast<void(Resolve$BadMethodReferenceError::*)($Resolve*,$Symbol*,bool)>(&Resolve$BadMethodReferenceError::init$))},
	{"getDiagnostic", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic;", 0},
	{}
};

$InnerClassInfo _Resolve$BadMethodReferenceError_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$BadMethodReferenceError", "com.sun.tools.javac.comp.Resolve", "BadMethodReferenceError", 0},
	{"com.sun.tools.javac.comp.Resolve$StaticError", "com.sun.tools.javac.comp.Resolve", "StaticError", 0},
	{}
};

$ClassInfo _Resolve$BadMethodReferenceError_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$BadMethodReferenceError",
	"com.sun.tools.javac.comp.Resolve$StaticError",
	nullptr,
	_Resolve$BadMethodReferenceError_FieldInfo_,
	_Resolve$BadMethodReferenceError_MethodInfo_,
	nullptr,
	nullptr,
	_Resolve$BadMethodReferenceError_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$BadMethodReferenceError($Class* clazz) {
	return $of($alloc(Resolve$BadMethodReferenceError));
}

void Resolve$BadMethodReferenceError::init$($Resolve* this$0, $Symbol* sym, bool unboundLookup) {
	$set(this, this$0, this$0);
	$Resolve$StaticError::init$(this$0, sym);
	this->unboundLookup = unboundLookup;
}

$JCDiagnostic* Resolve$BadMethodReferenceError::getDiagnostic($JCDiagnostic$DiagnosticType* dkind, $JCDiagnostic$DiagnosticPosition* pos, $Symbol* location, $Type* site, $Name* name, $List* argtypes, $List* typeargtypes) {
	$useLocalCurrentObjectStackCache();
	$var($String, key, nullptr);
	if (!this->unboundLookup) {
		$assign(key, "bad.static.method.in.bound.lookup"_s);
	} else if ($nc(this->sym)->isStatic()) {
		$assign(key, "bad.static.method.in.unbound.lookup"_s);
	} else {
		$assign(key, "bad.instance.method.in.unbound.lookup"_s);
	}
	$var($JCDiagnostic, var$0, nullptr);
	if ($nc($nc(this->sym)->kind)->isResolutionError()) {
		$assign(var$0, $nc(($cast($Resolve$ResolveError, this->sym)))->getDiagnostic(dkind, pos, location, site, name, argtypes, typeargtypes));
	} else {
		$var($JCDiagnostic$DiagnosticType, var$1, dkind);
		$var($DiagnosticSource, var$2, $nc(this->this$0->log)->currentSource());
		$var($JCDiagnostic$DiagnosticPosition, var$3, pos);
		$var($String, var$4, key);
		$assign(var$0, $nc(this->this$0->diags)->create(var$1, var$2, var$3, var$4, $$new($ObjectArray, {
			$($of($Kinds::kindName(this->sym))),
			$of(this->sym)
		})));
	}
	return var$0;
}

Resolve$BadMethodReferenceError::Resolve$BadMethodReferenceError() {
}

$Class* Resolve$BadMethodReferenceError::load$($String* name, bool initialize) {
	$loadClass(Resolve$BadMethodReferenceError, name, initialize, &_Resolve$BadMethodReferenceError_ClassInfo_, allocate$Resolve$BadMethodReferenceError);
	return class$;
}

$Class* Resolve$BadMethodReferenceError::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com