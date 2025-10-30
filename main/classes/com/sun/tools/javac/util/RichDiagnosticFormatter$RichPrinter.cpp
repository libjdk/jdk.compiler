#include <com/sun/tools/javac/util/RichDiagnosticFormatter$RichPrinter.h>

#include <com/sun/tools/javac/api/DiagnosticFormatter$Configuration.h>
#include <com/sun/tools/javac/api/DiagnosticFormatter.h>
#include <com/sun/tools/javac/code/Printer.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$CapturedType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/util/AbstractDiagnosticFormatter.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name$Table.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/RichDiagnosticFormatter$ClassNameSimplifier.h>
#include <com/sun/tools/javac/util/RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature.h>
#include <com/sun/tools/javac/util/RichDiagnosticFormatter$RichConfiguration.h>
#include <com/sun/tools/javac/util/RichDiagnosticFormatter$WhereClauseKind.h>
#include <com/sun/tools/javac/util/RichDiagnosticFormatter.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef CAPTURED
#undef FORALL
#undef INTERSECTION
#undef SIMPLE_NAMES
#undef TYPEVAR
#undef UNIQUE_TYPEVAR_NAMES
#undef WHERE_CLAUSES

using $DiagnosticFormatter = ::com::sun::tools::javac::api::DiagnosticFormatter;
using $Printer = ::com::sun::tools::javac::code::Printer;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$CapturedType = ::com::sun::tools::javac::code::Type$CapturedType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $AbstractDiagnosticFormatter = ::com::sun::tools::javac::util::AbstractDiagnosticFormatter;
using $ForwardingDiagnosticFormatter = ::com::sun::tools::javac::util::ForwardingDiagnosticFormatter;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $Name$Table = ::com::sun::tools::javac::util::Name$Table;
using $Names = ::com::sun::tools::javac::util::Names;
using $RichDiagnosticFormatter = ::com::sun::tools::javac::util::RichDiagnosticFormatter;
using $RichDiagnosticFormatter$ClassNameSimplifier = ::com::sun::tools::javac::util::RichDiagnosticFormatter$ClassNameSimplifier;
using $RichDiagnosticFormatter$RichConfiguration = ::com::sun::tools::javac::util::RichDiagnosticFormatter$RichConfiguration;
using $RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature = ::com::sun::tools::javac::util::RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature;
using $RichDiagnosticFormatter$WhereClauseKind = ::com::sun::tools::javac::util::RichDiagnosticFormatter$WhereClauseKind;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _RichDiagnosticFormatter$RichPrinter_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/util/RichDiagnosticFormatter;", nullptr, $FINAL | $SYNTHETIC, $field(RichDiagnosticFormatter$RichPrinter, this$0)},
	{}
};

$MethodInfo _RichDiagnosticFormatter$RichPrinter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/RichDiagnosticFormatter;)V", nullptr, $PROTECTED, $method(static_cast<void(RichDiagnosticFormatter$RichPrinter::*)($RichDiagnosticFormatter*)>(&RichDiagnosticFormatter$RichPrinter::init$))},
	{"capturedVarId", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"className", "(Lcom/sun/tools/javac/code/Type$ClassType;ZLjava/util/Locale;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"localize", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $TRANSIENT},
	{"visitCapturedType", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"visitCapturedType", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitClassSymbol", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"visitClassSymbol", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitMethodSymbol", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"visitMethodSymbol", "(Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _RichDiagnosticFormatter$RichPrinter_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.RichDiagnosticFormatter$RichPrinter", "com.sun.tools.javac.util.RichDiagnosticFormatter", "RichPrinter", $PROTECTED},
	{}
};

$ClassInfo _RichDiagnosticFormatter$RichPrinter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.RichDiagnosticFormatter$RichPrinter",
	"com.sun.tools.javac.code.Printer",
	nullptr,
	_RichDiagnosticFormatter$RichPrinter_FieldInfo_,
	_RichDiagnosticFormatter$RichPrinter_MethodInfo_,
	nullptr,
	nullptr,
	_RichDiagnosticFormatter$RichPrinter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.RichDiagnosticFormatter"
};

$Object* allocate$RichDiagnosticFormatter$RichPrinter($Class* clazz) {
	return $of($alloc(RichDiagnosticFormatter$RichPrinter));
}

void RichDiagnosticFormatter$RichPrinter::init$($RichDiagnosticFormatter* this$0) {
	$set(this, this$0, this$0);
	$Printer::init$();
}

$String* RichDiagnosticFormatter$RichPrinter::localize($Locale* locale, $String* key, $ObjectArray* args) {
	return $nc(($cast($AbstractDiagnosticFormatter, this->this$0->formatter)))->localize(locale, key, args);
}

$String* RichDiagnosticFormatter$RichPrinter::capturedVarId($Type$CapturedType* t, $Locale* locale) {
	$init($RichDiagnosticFormatter$WhereClauseKind);
	return $str({$$str(this->this$0->indexOf(t, $RichDiagnosticFormatter$WhereClauseKind::CAPTURED)), ""_s});
}

$String* RichDiagnosticFormatter$RichPrinter::visitType($Type* t, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($String, s, $Printer::visitType(t, locale));
	if (t == $nc(this->this$0->syms)->botType) {
		$assign(s, localize(locale, "compiler.misc.type.null"_s, $$new($ObjectArray, 0)));
	}
	return s;
}

$String* RichDiagnosticFormatter$RichPrinter::visitCapturedType($Type$CapturedType* t, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$init($RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature);
	if ($nc($($cast($RichDiagnosticFormatter$RichConfiguration, this->this$0->getConfiguration())))->isEnabled($RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::WHERE_CLAUSES)) {
		$init($RichDiagnosticFormatter$WhereClauseKind);
		return localize(locale, "compiler.misc.captured.type"_s, $$new($ObjectArray, {$($of($Integer::valueOf(this->this$0->indexOf(t, $RichDiagnosticFormatter$WhereClauseKind::CAPTURED))))}));
	} else {
		return $Printer::visitCapturedType(t, locale);
	}
}

$String* RichDiagnosticFormatter$RichPrinter::visitClassType($Type$ClassType* t, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(t)->isCompound();
	$init($RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature);
	if (var$0 && $nc($($cast($RichDiagnosticFormatter$RichConfiguration, this->this$0->getConfiguration())))->isEnabled($RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::WHERE_CLAUSES)) {
		$init($RichDiagnosticFormatter$WhereClauseKind);
		return localize(locale, "compiler.misc.intersection.type"_s, $$new($ObjectArray, {$($of($Integer::valueOf(this->this$0->indexOf(t, $RichDiagnosticFormatter$WhereClauseKind::INTERSECTION))))}));
	} else {
		return $Printer::visitClassType(t, locale);
	}
}

$String* RichDiagnosticFormatter$RichPrinter::className($Type$ClassType* t, bool longform, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, sym, $nc(t)->tsym);
	bool var$0 = $nc($nc(sym)->name)->length() == 0;
	$init($RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature);
	if (var$0 || !$nc($($cast($RichDiagnosticFormatter$RichConfiguration, this->this$0->getConfiguration())))->isEnabled($RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::SIMPLE_NAMES)) {
		return $Printer::className(t, longform, locale);
	} else if (longform) {
		return $nc($($nc(this->this$0->nameSimplifier)->simplify(sym)))->toString();
	} else {
		return $nc($nc(sym)->name)->toString();
	}
}

$String* RichDiagnosticFormatter$RichPrinter::visitTypeVar($Type$TypeVar* t, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = this->this$0->unique(t);
	$init($RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature);
	if (var$0 || !$nc($($cast($RichDiagnosticFormatter$RichConfiguration, this->this$0->getConfiguration())))->isEnabled($RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::UNIQUE_TYPEVAR_NAMES)) {
		return $nc(t)->toString();
	} else {
		$init($RichDiagnosticFormatter$WhereClauseKind);
		return localize(locale, "compiler.misc.type.var"_s, $$new($ObjectArray, {
			$($of($nc(t)->toString())),
			$($of($Integer::valueOf(this->this$0->indexOf(t, $RichDiagnosticFormatter$WhereClauseKind::TYPEVAR))))
		}));
	}
}

$String* RichDiagnosticFormatter$RichPrinter::visitClassSymbol($Symbol$ClassSymbol* s, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	if ($nc($nc(s)->type)->isCompound()) {
		return visit(s->type, locale);
	}
	$var($String, name, $nc(this->this$0->nameSimplifier)->simplify(s));
	bool var$0 = $nc(name)->length() == 0;
	$init($RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature);
	if (var$0 || !$nc($($cast($RichDiagnosticFormatter$RichConfiguration, this->this$0->getConfiguration())))->isEnabled($RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::SIMPLE_NAMES)) {
		return $Printer::visitClassSymbol(s, locale);
	} else {
		return name;
	}
}

$String* RichDiagnosticFormatter$RichPrinter::visitMethodSymbol($Symbol$MethodSymbol* s, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($String, ownerName, visit($nc(s)->owner, locale));
	if ($nc(s)->isStaticOrInstanceInit()) {
		return ownerName;
	} else {
		$var($String, ms, (s->name == $nc($nc($nc(s->name)->table)->names)->init) ? ownerName : $nc(s->name)->toString());
		if (s->type != nullptr) {
			$init($TypeTag);
			if ($nc(s->type)->hasTag($TypeTag::FORALL)) {
				$assign(ms, $str({"<"_s, $(visitTypes($($nc(s->type)->getTypeArguments()), locale)), ">"_s, ms}));
			}
			$var($String, var$1, "("_s);
			$var($List, var$2, $nc(s->type)->getParameterTypes());
			$var($String, var$0, $$concat(var$1, $(printMethodArgs(var$2, ((int64_t)(s->flags() & (uint64_t)(int64_t)0x0000000400000000)) != 0, locale))));
			$plusAssign(ms, $$concat(var$0, ")"));
		}
		return ms;
	}
}

$Object* RichDiagnosticFormatter$RichPrinter::visitType($Type* t, Object$* locale) {
	return $of(this->visitType(t, $cast($Locale, locale)));
}

$Object* RichDiagnosticFormatter$RichPrinter::visitCapturedType($Type$CapturedType* t, Object$* locale) {
	return $of(this->visitCapturedType(t, $cast($Locale, locale)));
}

$Object* RichDiagnosticFormatter$RichPrinter::visitTypeVar($Type$TypeVar* t, Object$* locale) {
	return $of(this->visitTypeVar(t, $cast($Locale, locale)));
}

$Object* RichDiagnosticFormatter$RichPrinter::visitClassType($Type$ClassType* t, Object$* locale) {
	return $of(this->visitClassType(t, $cast($Locale, locale)));
}

$Object* RichDiagnosticFormatter$RichPrinter::visitMethodSymbol($Symbol$MethodSymbol* s, Object$* locale) {
	return $of(this->visitMethodSymbol(s, $cast($Locale, locale)));
}

$Object* RichDiagnosticFormatter$RichPrinter::visitClassSymbol($Symbol$ClassSymbol* s, Object$* locale) {
	return $of(this->visitClassSymbol(s, $cast($Locale, locale)));
}

RichDiagnosticFormatter$RichPrinter::RichDiagnosticFormatter$RichPrinter() {
}

$Class* RichDiagnosticFormatter$RichPrinter::load$($String* name, bool initialize) {
	$loadClass(RichDiagnosticFormatter$RichPrinter, name, initialize, &_RichDiagnosticFormatter$RichPrinter_ClassInfo_, allocate$RichDiagnosticFormatter$RichPrinter);
	return class$;
}

$Class* RichDiagnosticFormatter$RichPrinter::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com