#include <com/sun/tools/javac/comp/Resolve$SymbolNotFoundError.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Kinds$KindName.h>
#include <com/sun/tools/javac/code/Kinds.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Resolve$18.h>
#include <com/sun/tools/javac/comp/Resolve$ResolveError.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <jcpp.h>

#undef CONSTRUCTOR
#undef PCK
#undef VAR

using $Kinds = ::com::sun::tools::javac::code::Kinds;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Kinds$KindName = ::com::sun::tools::javac::code::Kinds$KindName;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$18 = ::com::sun::tools::javac::comp::Resolve$18;
using $Resolve$ResolveError = ::com::sun::tools::javac::comp::Resolve$ResolveError;
using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $JCDiagnostic$Fragment = ::com::sun::tools::javac::util::JCDiagnostic$Fragment;
using $List = ::com::sun::tools::javac::util::List;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Resolve$SymbolNotFoundError_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$SymbolNotFoundError, this$0)},
	{}
};

$MethodInfo _Resolve$SymbolNotFoundError_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/code/Kinds$Kind;)V", nullptr, 0, $method(static_cast<void(Resolve$SymbolNotFoundError::*)($Resolve*,$Kinds$Kind*)>(&Resolve$SymbolNotFoundError::init$))},
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/code/Kinds$Kind;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(Resolve$SymbolNotFoundError::*)($Resolve*,$Kinds$Kind*,$String*)>(&Resolve$SymbolNotFoundError::init$))},
	{"args", "(Lcom/sun/tools/javac/util/List;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Ljava/lang/Object;", $PRIVATE, $method(static_cast<$Object*(Resolve$SymbolNotFoundError::*)($List*)>(&Resolve$SymbolNotFoundError::args))},
	{"getDiagnostic", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic;", 0},
	{"getErrorKey", "(Lcom/sun/tools/javac/code/Kinds$KindName;ZZ)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Resolve$SymbolNotFoundError::*)($Kinds$KindName*,bool,bool)>(&Resolve$SymbolNotFoundError::getErrorKey))},
	{"getLocationDiag", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PRIVATE, $method(static_cast<$JCDiagnostic*(Resolve$SymbolNotFoundError::*)($Symbol*,$Type*)>(&Resolve$SymbolNotFoundError::getLocationDiag))},
	{}
};

$InnerClassInfo _Resolve$SymbolNotFoundError_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$SymbolNotFoundError", "com.sun.tools.javac.comp.Resolve", "SymbolNotFoundError", 0},
	{"com.sun.tools.javac.comp.Resolve$ResolveError", "com.sun.tools.javac.comp.Resolve", "ResolveError", $ABSTRACT},
	{}
};

$ClassInfo _Resolve$SymbolNotFoundError_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$SymbolNotFoundError",
	"com.sun.tools.javac.comp.Resolve$ResolveError",
	nullptr,
	_Resolve$SymbolNotFoundError_FieldInfo_,
	_Resolve$SymbolNotFoundError_MethodInfo_,
	nullptr,
	nullptr,
	_Resolve$SymbolNotFoundError_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$SymbolNotFoundError($Class* clazz) {
	return $of($alloc(Resolve$SymbolNotFoundError));
}

void Resolve$SymbolNotFoundError::init$($Resolve* this$0, $Kinds$Kind* kind) {
	Resolve$SymbolNotFoundError::init$(this$0, kind, "symbol not found error"_s);
}

void Resolve$SymbolNotFoundError::init$($Resolve* this$0, $Kinds$Kind* kind, $String* debugName) {
	$set(this, this$0, this$0);
	$Resolve$ResolveError::init$(this$0, kind, debugName);
}

$JCDiagnostic* Resolve$SymbolNotFoundError::getDiagnostic($JCDiagnostic$DiagnosticType* dkind, $JCDiagnostic$DiagnosticPosition* pos, $Symbol* location$renamed, $Type* site, $Name* name, $List* argtypes$renamed, $List* typeargtypes$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($List, typeargtypes, typeargtypes$renamed);
	$var($List, argtypes, argtypes$renamed);
	$var($Symbol, location, location$renamed);
	$assign(argtypes, argtypes == nullptr ? $List::nil() : argtypes);
	$assign(typeargtypes, typeargtypes == nullptr ? $List::nil() : typeargtypes);
	if (name == $nc(this->this$0->names)->error) {
		return nullptr;
	}
	bool hasLocation = false;
	if (location == nullptr) {
		$assign(location, $nc(site)->tsym);
	}
	if (!$nc($nc(location)->name)->isEmpty()) {
		$init($Kinds$Kind);
		if (location->kind == $Kinds$Kind::PCK && !$nc($nc(site)->tsym)->exists() && location->name != $nc(this->this$0->names)->java) {
			return $nc(this->this$0->diags)->create(dkind, $($nc(this->this$0->log)->currentSource()), pos, "doesnt.exist"_s, $$new($ObjectArray, {$of(location)}));
		}
		bool var$0 = !$nc($of(location->name))->equals($nc(this->this$0->names)->_this);
		hasLocation = var$0 && !$nc($of(location->name))->equals($nc(this->this$0->names)->_super);
	}
	bool isConstructor = name == $nc(this->this$0->names)->init;
	$init($Kinds$KindName);
	$Kinds$KindName* kindname = isConstructor ? $Kinds$KindName::CONSTRUCTOR : $nc(this->kind)->absentKind();
	$var($Name, idname, isConstructor ? $nc($nc(site)->tsym)->name : name);
	$var($String, errKey, getErrorKey(kindname, $nc(typeargtypes)->nonEmpty(), hasLocation));
	if (hasLocation) {
		$var($JCDiagnostic$DiagnosticType, var$1, dkind);
		$var($DiagnosticSource, var$2, $nc(this->this$0->log)->currentSource());
		$var($JCDiagnostic$DiagnosticPosition, var$3, pos);
		$var($String, var$4, errKey);
		return $nc(this->this$0->diags)->create(var$1, var$2, var$3, var$4, $$new($ObjectArray, {
			$of(kindname),
			$of(idname),
			$of(typeargtypes),
			$(args(argtypes)),
			$($of(getLocationDiag(location, site)))
		}));
	} else {
		$var($JCDiagnostic$DiagnosticType, var$5, dkind);
		$var($DiagnosticSource, var$6, $nc(this->this$0->log)->currentSource());
		$var($JCDiagnostic$DiagnosticPosition, var$7, pos);
		$var($String, var$8, errKey);
		return $nc(this->this$0->diags)->create(var$5, var$6, var$7, var$8, $$new($ObjectArray, {
			$of(kindname),
			$of(idname),
			$of(typeargtypes),
			$(args(argtypes))
		}));
	}
}

$Object* Resolve$SymbolNotFoundError::args($List* args) {
	return $of($nc(args)->isEmpty() ? $of(args) : this->this$0->methodArguments(args));
}

$String* Resolve$SymbolNotFoundError::getErrorKey($Kinds$KindName* kindname, bool hasTypeArgs, bool hasLocation) {
	$useLocalCurrentObjectStackCache();
	$var($String, key, "cant.resolve"_s);
	$var($String, suffix, hasLocation ? ".location"_s : ""_s);
	$init($Resolve$18);
	switch ($nc($Resolve$18::$SwitchMap$com$sun$tools$javac$code$Kinds$KindName)->get($nc((kindname))->ordinal())) {
	case 1:
		{}
	case 2:
		{
			{
				$plusAssign(suffix, ".args"_s);
				$plusAssign(suffix, hasTypeArgs ? ".params"_s : ""_s);
			}
		}
	}
	return $str({key, suffix});
}

$JCDiagnostic* Resolve$SymbolNotFoundError::getLocationDiag($Symbol* location, $Type* site) {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$Kind);
	if ($nc(location)->kind == $Kinds$Kind::VAR) {
		return $nc(this->this$0->diags)->fragment($($CompilerProperties$Fragments::Location1($($Kinds::kindName(location)), location, location->type)));
	} else {
		return $nc(this->this$0->diags)->fragment($($CompilerProperties$Fragments::Location($($Kinds::typeKindName(site)), site, ($Void*)nullptr)));
	}
}

Resolve$SymbolNotFoundError::Resolve$SymbolNotFoundError() {
}

$Class* Resolve$SymbolNotFoundError::load$($String* name, bool initialize) {
	$loadClass(Resolve$SymbolNotFoundError, name, initialize, &_Resolve$SymbolNotFoundError_ClassInfo_, allocate$Resolve$SymbolNotFoundError);
	return class$;
}

$Class* Resolve$SymbolNotFoundError::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com