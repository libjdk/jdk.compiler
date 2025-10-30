#include <com/sun/tools/javac/util/RichDiagnosticFormatter.h>

#include <com/sun/tools/javac/api/DiagnosticFormatter$Configuration.h>
#include <com/sun/tools/javac/api/DiagnosticFormatter.h>
#include <com/sun/tools/javac/code/Printer.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$DefaultSymbolVisitor.h>
#include <com/sun/tools/javac/code/Types$UnaryVisitor.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/AbstractDiagnosticFormatter.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/ForwardingDiagnosticFormatter$ForwardingConfiguration.h>
#include <com/sun/tools/javac/util/ForwardingDiagnosticFormatter.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$MultilineDiagnostic.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/JavacMessages.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Options.h>
#include <com/sun/tools/javac/util/RichDiagnosticFormatter$1.h>
#include <com/sun/tools/javac/util/RichDiagnosticFormatter$2.h>
#include <com/sun/tools/javac/util/RichDiagnosticFormatter$ClassNameSimplifier.h>
#include <com/sun/tools/javac/util/RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature.h>
#include <com/sun/tools/javac/util/RichDiagnosticFormatter$RichConfiguration.h>
#include <com/sun/tools/javac/util/RichDiagnosticFormatter$RichPrinter.h>
#include <com/sun/tools/javac/util/RichDiagnosticFormatter$WhereClauseKind.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Iterable.h>
#include <java/nio/file/Path.h>
#include <java/util/AbstractMap.h>
#include <java/util/EnumMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Locale.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/tools/Diagnostic.h>
#include <jcpp.h>

#undef TYPEVAR
#undef WHERE_CLAUSES

using $RichDiagnosticFormatter$WhereClauseKindArray = $Array<::com::sun::tools::javac::util::RichDiagnosticFormatter$WhereClauseKind>;
using $DiagnosticFormatter = ::com::sun::tools::javac::api::DiagnosticFormatter;
using $DiagnosticFormatter$Configuration = ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration;
using $Printer = ::com::sun::tools::javac::code::Printer;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$DefaultSymbolVisitor = ::com::sun::tools::javac::code::Types$DefaultSymbolVisitor;
using $Types$UnaryVisitor = ::com::sun::tools::javac::code::Types$UnaryVisitor;
using $AbstractDiagnosticFormatter = ::com::sun::tools::javac::util::AbstractDiagnosticFormatter;
using $Context = ::com::sun::tools::javac::util::Context;
using $ForwardingDiagnosticFormatter = ::com::sun::tools::javac::util::ForwardingDiagnosticFormatter;
using $ForwardingDiagnosticFormatter$ForwardingConfiguration = ::com::sun::tools::javac::util::ForwardingDiagnosticFormatter$ForwardingConfiguration;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $JCDiagnostic$MultilineDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic$MultilineDiagnostic;
using $JavacMessages = ::com::sun::tools::javac::util::JavacMessages;
using $List = ::com::sun::tools::javac::util::List;
using $Log = ::com::sun::tools::javac::util::Log;
using $Options = ::com::sun::tools::javac::util::Options;
using $RichDiagnosticFormatter$1 = ::com::sun::tools::javac::util::RichDiagnosticFormatter$1;
using $RichDiagnosticFormatter$2 = ::com::sun::tools::javac::util::RichDiagnosticFormatter$2;
using $RichDiagnosticFormatter$ClassNameSimplifier = ::com::sun::tools::javac::util::RichDiagnosticFormatter$ClassNameSimplifier;
using $RichDiagnosticFormatter$RichConfiguration = ::com::sun::tools::javac::util::RichDiagnosticFormatter$RichConfiguration;
using $RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature = ::com::sun::tools::javac::util::RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature;
using $RichDiagnosticFormatter$RichPrinter = ::com::sun::tools::javac::util::RichDiagnosticFormatter$RichPrinter;
using $RichDiagnosticFormatter$WhereClauseKind = ::com::sun::tools::javac::util::RichDiagnosticFormatter$WhereClauseKind;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $AbstractMap = ::java::util::AbstractMap;
using $EnumMap = ::java::util::EnumMap;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $Diagnostic = ::javax::tools::Diagnostic;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _RichDiagnosticFormatter_FieldInfo_[] = {
	{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $FINAL, $field(RichDiagnosticFormatter, syms)},
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL, $field(RichDiagnosticFormatter, types)},
	{"diags", "Lcom/sun/tools/javac/util/JCDiagnostic$Factory;", nullptr, $FINAL, $field(RichDiagnosticFormatter, diags)},
	{"messages", "Lcom/sun/tools/javac/util/JavacMessages;", nullptr, $FINAL, $field(RichDiagnosticFormatter, messages)},
	{"nameSimplifier", "Lcom/sun/tools/javac/util/RichDiagnosticFormatter$ClassNameSimplifier;", nullptr, $PROTECTED, $field(RichDiagnosticFormatter, nameSimplifier)},
	{"printer", "Lcom/sun/tools/javac/util/RichDiagnosticFormatter$RichPrinter;", nullptr, $PRIVATE, $field(RichDiagnosticFormatter, printer)},
	{"whereClauses", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/util/RichDiagnosticFormatter$WhereClauseKind;Ljava/util/Map<Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic;>;>;", 0, $field(RichDiagnosticFormatter, whereClauses)},
	{"typePreprocessor", "Lcom/sun/tools/javac/code/Types$UnaryVisitor;", "Lcom/sun/tools/javac/code/Types$UnaryVisitor<Ljava/lang/Void;>;", $PROTECTED, $field(RichDiagnosticFormatter, typePreprocessor)},
	{"symbolPreprocessor", "Lcom/sun/tools/javac/code/Types$DefaultSymbolVisitor;", "Lcom/sun/tools/javac/code/Types$DefaultSymbolVisitor<Ljava/lang/Void;Ljava/lang/Void;>;", $PROTECTED, $field(RichDiagnosticFormatter, symbolPreprocessor)},
	{}
};

$MethodInfo _RichDiagnosticFormatter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(RichDiagnosticFormatter::*)($Context*)>(&RichDiagnosticFormatter::init$))},
	{"format", "(Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"format", "(Ljavax/tools/Diagnostic;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"formatMessage", "(Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"formatMessage", "(Ljavax/tools/Diagnostic;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getConfiguration", "()Lcom/sun/tools/javac/util/RichDiagnosticFormatter$RichConfiguration;", nullptr, $PUBLIC},
	{"getRichPrinter", "()Lcom/sun/tools/javac/util/RichDiagnosticFormatter$RichPrinter;", nullptr, $PROTECTED},
	{"getWhereClauses", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/JCDiagnostic;>;", $PROTECTED},
	{"indexOf", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/RichDiagnosticFormatter$WhereClauseKind;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(RichDiagnosticFormatter::*)($Type*,$RichDiagnosticFormatter$WhereClauseKind*)>(&RichDiagnosticFormatter::indexOf))},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/util/RichDiagnosticFormatter;", nullptr, $PUBLIC | $STATIC, $method(static_cast<RichDiagnosticFormatter*(*)($Context*)>(&RichDiagnosticFormatter::instance))},
	{"preprocessArgument", "(Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"preprocessDiagnostic", "(Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, $PROTECTED},
	{"preprocessSymbol", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PROTECTED},
	{"preprocessType", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, $PROTECTED},
	{"setRichPrinter", "(Lcom/sun/tools/javac/util/RichDiagnosticFormatter$RichPrinter;)V", nullptr, $PROTECTED},
	{"unique", "(Lcom/sun/tools/javac/code/Type$TypeVar;)Z", nullptr, $PRIVATE, $method(static_cast<bool(RichDiagnosticFormatter::*)($Type$TypeVar*)>(&RichDiagnosticFormatter::unique))},
	{}
};

$InnerClassInfo _RichDiagnosticFormatter_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.RichDiagnosticFormatter$RichConfiguration", "com.sun.tools.javac.util.RichDiagnosticFormatter", "RichConfiguration", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.util.RichDiagnosticFormatter$RichPrinter", "com.sun.tools.javac.util.RichDiagnosticFormatter", "RichPrinter", $PROTECTED},
	{"com.sun.tools.javac.util.RichDiagnosticFormatter$ClassNameSimplifier", "com.sun.tools.javac.util.RichDiagnosticFormatter", "ClassNameSimplifier", $PROTECTED},
	{"com.sun.tools.javac.util.RichDiagnosticFormatter$WhereClauseKind", "com.sun.tools.javac.util.RichDiagnosticFormatter", "WhereClauseKind", $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.util.RichDiagnosticFormatter$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.util.RichDiagnosticFormatter$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RichDiagnosticFormatter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.RichDiagnosticFormatter",
	"com.sun.tools.javac.util.ForwardingDiagnosticFormatter",
	nullptr,
	_RichDiagnosticFormatter_FieldInfo_,
	_RichDiagnosticFormatter_MethodInfo_,
	"Lcom/sun/tools/javac/util/ForwardingDiagnosticFormatter<Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/util/AbstractDiagnosticFormatter;>;",
	nullptr,
	_RichDiagnosticFormatter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.RichDiagnosticFormatter$RichConfiguration,com.sun.tools.javac.util.RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature,com.sun.tools.javac.util.RichDiagnosticFormatter$RichPrinter,com.sun.tools.javac.util.RichDiagnosticFormatter$ClassNameSimplifier,com.sun.tools.javac.util.RichDiagnosticFormatter$WhereClauseKind,com.sun.tools.javac.util.RichDiagnosticFormatter$2,com.sun.tools.javac.util.RichDiagnosticFormatter$1"
};

$Object* allocate$RichDiagnosticFormatter($Class* clazz) {
	return $of($alloc(RichDiagnosticFormatter));
}

RichDiagnosticFormatter* RichDiagnosticFormatter::instance($Context* context) {
	$init(RichDiagnosticFormatter);
	$var(RichDiagnosticFormatter, instance, $cast(RichDiagnosticFormatter, $nc(context)->get(RichDiagnosticFormatter::class$)));
	if (instance == nullptr) {
		$assign(instance, $new(RichDiagnosticFormatter, context));
	}
	return instance;
}

void RichDiagnosticFormatter::init$($Context* context) {
	$useLocalCurrentObjectStackCache();
	$ForwardingDiagnosticFormatter::init$($cast($AbstractDiagnosticFormatter, $($nc($($Log::instance(context)))->getDiagnosticFormatter())));
	$set(this, typePreprocessor, $new($RichDiagnosticFormatter$1, this));
	$set(this, symbolPreprocessor, $new($RichDiagnosticFormatter$2, this));
	setRichPrinter($$new($RichDiagnosticFormatter$RichPrinter, this));
	$set(this, syms, $Symtab::instance(context));
	$set(this, diags, $JCDiagnostic$Factory::instance(context));
	$set(this, types, $Types::instance(context));
	$set(this, messages, $JavacMessages::instance(context));
	$load($RichDiagnosticFormatter$WhereClauseKind);
	$set(this, whereClauses, $new($EnumMap, $RichDiagnosticFormatter$WhereClauseKind::class$));
	$set(this, configuration, $new($RichDiagnosticFormatter$RichConfiguration, $($Options::instance(context)), $cast($AbstractDiagnosticFormatter, this->formatter)));
	{
		$var($RichDiagnosticFormatter$WhereClauseKindArray, arr$, $RichDiagnosticFormatter$WhereClauseKind::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$RichDiagnosticFormatter$WhereClauseKind* kind = arr$->get(i$);
			$nc(this->whereClauses)->put(kind, $$new($LinkedHashMap));
		}
	}
}

$String* RichDiagnosticFormatter::format($JCDiagnostic* diag, $Locale* l) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	$set(this, nameSimplifier, $new($RichDiagnosticFormatter$ClassNameSimplifier, this));
	{
		$var($RichDiagnosticFormatter$WhereClauseKindArray, arr$, $RichDiagnosticFormatter$WhereClauseKind::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$RichDiagnosticFormatter$WhereClauseKind* kind = arr$->get(i$);
			$nc(($cast($Map, $($nc(this->whereClauses)->get(kind)))))->clear();
		}
	}
	preprocessDiagnostic(diag);
	sb->append($($nc(($cast($AbstractDiagnosticFormatter, this->formatter)))->format(diag, l)));
	$init($RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature);
	if ($nc($($cast($RichDiagnosticFormatter$RichConfiguration, getConfiguration())))->isEnabled($RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::WHERE_CLAUSES)) {
		$var($List, clauses, getWhereClauses());
		$var($String, indent, $nc(($cast($AbstractDiagnosticFormatter, this->formatter)))->isRaw() ? ""_s : $nc(($cast($AbstractDiagnosticFormatter, this->formatter)))->indentString(2));
		{
			$var($Iterator, i$, $nc(clauses)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JCDiagnostic, d, $cast($JCDiagnostic, i$->next()));
				{
					$var($String, whereClause, $nc(($cast($AbstractDiagnosticFormatter, this->formatter)))->format(d, l));
					if ($nc(whereClause)->length() > 0) {
						sb->append($$str({$$str(u'\n'), indent, whereClause}));
					}
				}
			}
		}
	}
	return sb->toString();
}

$String* RichDiagnosticFormatter::formatMessage($JCDiagnostic* diag, $Locale* l) {
	$set(this, nameSimplifier, $new($RichDiagnosticFormatter$ClassNameSimplifier, this));
	preprocessDiagnostic(diag);
	return $ForwardingDiagnosticFormatter::formatMessage(diag, l);
}

void RichDiagnosticFormatter::setRichPrinter($RichDiagnosticFormatter$RichPrinter* printer) {
	$set(this, printer, printer);
	$nc(($cast($AbstractDiagnosticFormatter, this->formatter)))->setPrinter(printer);
}

$RichDiagnosticFormatter$RichPrinter* RichDiagnosticFormatter::getRichPrinter() {
	return this->printer;
}

void RichDiagnosticFormatter::preprocessDiagnostic($JCDiagnostic* diag) {
	$useLocalCurrentObjectStackCache();
	{
		$var($ObjectArray, arr$, $nc(diag)->getArgs());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Object0, o, arr$->get(i$));
			{
				if (o != nullptr) {
					preprocessArgument(o);
				}
			}
		}
	}
	if (diag->isMultiline()) {
		{
			$var($Iterator, i$, $nc($(diag->getSubdiagnostics()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JCDiagnostic, d, $cast($JCDiagnostic, i$->next()));
				preprocessDiagnostic(d);
			}
		}
	}
}

void RichDiagnosticFormatter::preprocessArgument(Object$* arg) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Type, type, nullptr);
		$var($Symbol, symbol, nullptr);
		$var($JCDiagnostic, diagnostic, nullptr);
		$var($Iterable, iterable, nullptr);
		bool var$0 = $instanceOf($Type, arg);
		if (var$0) {
			$assign(type, $cast($Type, arg));
			var$0 = true;
		}
		if (var$0) {
			preprocessType(type);
		} else {
			bool var$2 = $instanceOf($Symbol, arg);
			if (var$2) {
				$assign(symbol, $cast($Symbol, arg));
				var$2 = true;
			}
			if (var$2) {
				preprocessSymbol(symbol);
			} else {
				bool var$4 = $instanceOf($JCDiagnostic, arg);
				if (var$4) {
					$assign(diagnostic, $cast($JCDiagnostic, arg));
					var$4 = true;
				}
				if (var$4) {
					preprocessDiagnostic(diagnostic);
				} else {
					bool var$6 = $instanceOf($Iterable, arg);
					if (var$6) {
						$assign(iterable, $cast($Iterable, arg));
						var$6 = true;
					}
					if (var$6 && !($instanceOf($Path, arg))) {
						{
							$var($Iterator, i$, $nc(iterable)->iterator());
							for (; $nc(i$)->hasNext();) {
								$var($Object, o, i$->next());
								{
									preprocessArgument(o);
								}
							}
						}
					}
				}
			}
		}
	}
}

$List* RichDiagnosticFormatter::getWhereClauses() {
	$useLocalCurrentObjectStackCache();
	$var($List, clauses, $List::nil());
	{
		$var($RichDiagnosticFormatter$WhereClauseKindArray, arr$, $RichDiagnosticFormatter$WhereClauseKind::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$RichDiagnosticFormatter$WhereClauseKind* kind = arr$->get(i$);
			{
				$var($List, lines, $List::nil());
				{
					$var($Iterator, i$, $nc($($nc(($cast($Map, $($nc(this->whereClauses)->get(kind)))))->entrySet()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
						{
							$assign(lines, $nc(lines)->prepend($cast($JCDiagnostic, $($nc(entry)->getValue()))));
						}
					}
				}
				if (!$nc(lines)->isEmpty()) {
					$var($String, key, $nc(kind)->key());
					if (lines->size() > 1) {
						$plusAssign(key, ".1"_s);
					}
					$var($JCDiagnostic, d, $nc(this->diags)->fragment(key, $$new($ObjectArray, {$($of($nc(($cast($Map, $($nc(this->whereClauses)->get(kind)))))->keySet()))})));
					$assign(d, $new($JCDiagnostic$MultilineDiagnostic, d, $(lines->reverse())));
					$assign(clauses, $nc(clauses)->prepend(d));
				}
			}
		}
	}
	return $nc(clauses)->reverse();
}

int32_t RichDiagnosticFormatter::indexOf($Type* type, $RichDiagnosticFormatter$WhereClauseKind* kind) {
	$useLocalCurrentObjectStackCache();
	int32_t index = 1;
	{
		$var($Iterator, i$, $nc($($nc(($cast($Map, $($nc(this->whereClauses)->get(kind)))))->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				if ($nc(t)->tsym == $nc(type)->tsym) {
					return index;
				}
				$init($RichDiagnosticFormatter$WhereClauseKind);
				if (kind != $RichDiagnosticFormatter$WhereClauseKind::TYPEVAR || $nc($($nc(t)->toString()))->equals($($nc(type)->toString()))) {
					++index;
				}
			}
		}
	}
	return -1;
}

bool RichDiagnosticFormatter::unique($Type$TypeVar* typevar$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Type$TypeVar, typevar, typevar$renamed);
	$assign(typevar, $cast($Type$TypeVar, $nc(typevar)->stripMetadata()));
	int32_t found = 0;
	{
		$init($RichDiagnosticFormatter$WhereClauseKind);
		$var($Iterator, i$, $nc($($nc(($cast($Map, $($nc(this->whereClauses)->get($RichDiagnosticFormatter$WhereClauseKind::TYPEVAR)))))->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				if ($nc($($nc($($nc(t)->stripMetadata()))->toString()))->equals($(typevar->toString()))) {
					++found;
				}
			}
		}
	}
	if (found < 1) {
		$throwNew($AssertionError, $of($$str({"Missing type variable in where clause: "_s, typevar})));
	}
	return found == 1;
}

void RichDiagnosticFormatter::preprocessType($Type* t) {
	$nc(this->typePreprocessor)->visit(t);
}

void RichDiagnosticFormatter::preprocessSymbol($Symbol* s) {
	$nc(this->symbolPreprocessor)->visit(s, nullptr);
}

$DiagnosticFormatter$Configuration* RichDiagnosticFormatter::getConfiguration() {
	return $cast($RichDiagnosticFormatter$RichConfiguration, this->configuration);
}

$String* RichDiagnosticFormatter::formatMessage($Diagnostic* diag, $Locale* l) {
	return this->formatMessage($cast($JCDiagnostic, diag), l);
}

$String* RichDiagnosticFormatter::format($Diagnostic* diag, $Locale* l) {
	return this->format($cast($JCDiagnostic, diag), l);
}

RichDiagnosticFormatter::RichDiagnosticFormatter() {
}

$Class* RichDiagnosticFormatter::load$($String* name, bool initialize) {
	$loadClass(RichDiagnosticFormatter, name, initialize, &_RichDiagnosticFormatter_ClassInfo_, allocate$RichDiagnosticFormatter);
	return class$;
}

$Class* RichDiagnosticFormatter::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com