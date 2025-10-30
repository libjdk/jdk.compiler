#include <com/sun/tools/javac/comp/Resolve$AccessError.h>

#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Resolve$InvalidSymbolError.h>
#include <com/sun/tools/javac/comp/Resolve$SymbolNotFoundError.h>
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
#include <com/sun/tools/javac/util/Names.h>
#include <java/util/EnumSet.h>
#include <jcpp.h>

#undef ABSENT_MTH
#undef HIDDEN
#undef PCK

using $Flags = ::com::sun::tools::javac::code::Flags;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$InvalidSymbolError = ::com::sun::tools::javac::comp::Resolve$InvalidSymbolError;
using $Resolve$SymbolNotFoundError = ::com::sun::tools::javac::comp::Resolve$SymbolNotFoundError;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $List = ::com::sun::tools::javac::util::List;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumSet = ::java::util::EnumSet;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Resolve$AccessError_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$AccessError, this$0)},
	{"env", "Lcom/sun/tools/javac/comp/Env;", "Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PRIVATE, $field(Resolve$AccessError, env)},
	{"site", "Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $field(Resolve$AccessError, site)},
	{}
};

$MethodInfo _Resolve$AccessError_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;)V", 0, $method(static_cast<void(Resolve$AccessError::*)($Resolve*,$Env*,$Type*,$Symbol*)>(&Resolve$AccessError::init$))},
	{"exists", "()Z", nullptr, $PUBLIC},
	{"getDiagnostic", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic;", 0},
	{"toString", "(Lcom/sun/tools/javac/code/Type;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Resolve$AccessError::*)($Type*)>(&Resolve$AccessError::toString))},
	{}
};

$InnerClassInfo _Resolve$AccessError_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$AccessError", "com.sun.tools.javac.comp.Resolve", "AccessError", 0},
	{"com.sun.tools.javac.comp.Resolve$InvalidSymbolError", "com.sun.tools.javac.comp.Resolve", "InvalidSymbolError", $ABSTRACT},
	{}
};

$ClassInfo _Resolve$AccessError_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$AccessError",
	"com.sun.tools.javac.comp.Resolve$InvalidSymbolError",
	nullptr,
	_Resolve$AccessError_FieldInfo_,
	_Resolve$AccessError_MethodInfo_,
	nullptr,
	nullptr,
	_Resolve$AccessError_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$AccessError($Class* clazz) {
	return $of($alloc(Resolve$AccessError));
}

void Resolve$AccessError::init$($Resolve* this$0, $Env* env, $Type* site, $Symbol* sym) {
	$set(this, this$0, this$0);
	$init($Kinds$Kind);
	$Resolve$InvalidSymbolError::init$(this$0, $Kinds$Kind::HIDDEN, sym, "access error"_s);
	$set(this, env, env);
	$set(this, site, site);
}

bool Resolve$AccessError::exists() {
	return false;
}

$JCDiagnostic* Resolve$AccessError::getDiagnostic($JCDiagnostic$DiagnosticType* dkind, $JCDiagnostic$DiagnosticPosition* pos, $Symbol* location, $Type* site, $Name* name, $List* argtypes, $List* typeargtypes) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->sym)->name == $nc(this->this$0->names)->init && !$equals($nc(this->sym)->owner, $nc(site)->tsym)) {
		$init($Kinds$Kind);
		return $$new($Resolve$SymbolNotFoundError, this->this$0, $Kinds$Kind::ABSENT_MTH)->getDiagnostic(dkind, pos, location, site, name, argtypes, typeargtypes);
	} else {
		bool var$1 = ((int64_t)($nc(this->sym)->flags() & (uint64_t)(int64_t)1)) != 0;
		if (var$1 || (this->env != nullptr && this->site != nullptr && !this->this$0->isAccessible(this->env, this->site))) {
			$init($Kinds$Kind);
			if ($nc($nc(this->sym)->owner)->kind == $Kinds$Kind::PCK) {
				$var($JCDiagnostic$DiagnosticType, var$2, dkind);
				$var($DiagnosticSource, var$3, $nc(this->this$0->log)->currentSource());
				$var($JCDiagnostic$DiagnosticPosition, var$4, pos);
				$var($String, var$5, "not.def.access.package.cant.access"_s);
				return $nc(this->this$0->diags)->create(var$2, var$3, var$4, var$5, $$new($ObjectArray, {
					$of(this->sym),
					$($of($nc(this->sym)->location())),
					$($of(this->this$0->inaccessiblePackageReason(this->env, $($nc(this->sym)->packge()))))
				}));
			} else {
				bool var$7 = $nc(this->sym)->packge() != $nc(this->this$0->syms)->rootPackage;
				if (var$7 && !this->this$0->symbolPackageVisible(this->env, this->sym)) {
					$var($JCDiagnostic$DiagnosticType, var$8, dkind);
					$var($DiagnosticSource, var$9, $nc(this->this$0->log)->currentSource());
					$var($JCDiagnostic$DiagnosticPosition, var$10, pos);
					$var($String, var$11, "not.def.access.class.intf.cant.access.reason"_s);
					return $nc(this->this$0->diags)->create(var$8, var$9, var$10, var$11, $$new($ObjectArray, {
						$of(this->sym),
						$($of($nc(this->sym)->location())),
						$($of($nc($($nc(this->sym)->location()))->packge())),
						$($of(this->this$0->inaccessiblePackageReason(this->env, $($nc(this->sym)->packge()))))
					}));
				} else {
					$var($JCDiagnostic$DiagnosticType, var$12, dkind);
					$var($DiagnosticSource, var$13, $nc(this->this$0->log)->currentSource());
					$var($JCDiagnostic$DiagnosticPosition, var$14, pos);
					$var($String, var$15, "not.def.access.class.intf.cant.access"_s);
					return $nc(this->this$0->diags)->create(var$12, var$13, var$14, var$15, $$new($ObjectArray, {
						$of(this->sym),
						$($of($nc(this->sym)->location()))
					}));
				}
			}
		} else if (((int64_t)($nc(this->sym)->flags() & (uint64_t)(int64_t)(2 | 4))) != 0) {
			$var($JCDiagnostic$DiagnosticType, var$16, dkind);
			$var($DiagnosticSource, var$17, $nc(this->this$0->log)->currentSource());
			$var($JCDiagnostic$DiagnosticPosition, var$18, pos);
			$var($String, var$19, "report.access"_s);
			return $nc(this->this$0->diags)->create(var$16, var$17, var$18, var$19, $$new($ObjectArray, {
				$of(this->sym),
				$($of($Flags::asFlagSet((int64_t)($nc(this->sym)->flags() & (uint64_t)(int64_t)(2 | 4))))),
				$($of($nc(this->sym)->location()))
			}));
		} else {
			$var($JCDiagnostic$DiagnosticType, var$20, dkind);
			$var($DiagnosticSource, var$21, $nc(this->this$0->log)->currentSource());
			$var($JCDiagnostic$DiagnosticPosition, var$22, pos);
			$var($String, var$23, "not.def.public.cant.access"_s);
			return $nc(this->this$0->diags)->create(var$20, var$21, var$22, var$23, $$new($ObjectArray, {
				$of(this->sym),
				$($of($nc(this->sym)->location()))
			}));
		}
	}
}

$String* Resolve$AccessError::toString($Type* type) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append($of(type));
	if (type != nullptr) {
		sb->append("[tsym:"_s)->append($of(type->tsym));
		if (type->tsym != nullptr) {
			sb->append("packge:"_s)->append($($of($nc(type->tsym)->packge())));
		}
		sb->append("]"_s);
	}
	return sb->toString();
}

Resolve$AccessError::Resolve$AccessError() {
}

$Class* Resolve$AccessError::load$($String* name, bool initialize) {
	$loadClass(Resolve$AccessError, name, initialize, &_Resolve$AccessError_ClassInfo_, allocate$Resolve$AccessError);
	return class$;
}

$Class* Resolve$AccessError::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com