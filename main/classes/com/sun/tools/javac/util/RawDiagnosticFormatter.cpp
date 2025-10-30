#include <com/sun/tools/javac/util/RawDiagnosticFormatter.h>

#include <com/sun/tools/javac/api/DiagnosticFormatter$Configuration$DiagnosticPart.h>
#include <com/sun/tools/javac/api/DiagnosticFormatter$Configuration.h>
#include <com/sun/tools/javac/api/DiagnosticFormatter$PositionKind.h>
#include <com/sun/tools/javac/api/Formattable.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/file/PathFileObject.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/util/AbstractDiagnosticFormatter$SimpleConfiguration.h>
#include <com/sun/tools/javac/util/AbstractDiagnosticFormatter.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/JavacMessages.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Options.h>
#include <com/sun/tools/javac/util/Position.h>
#include <com/sun/tools/javac/util/RawDiagnosticFormatter$RawDiagnosticPosHelper.h>
#include <com/sun/tools/javac/util/StringUtils.h>
#include <java/lang/Enum.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/EnumSet.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <java/util/Set.h>
#include <javax/tools/Diagnostic.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef CLASS
#undef CODES_NEEDING_SOURCE_NORMALIZATION
#undef COLUMN
#undef DEFAULT
#undef DETAILS
#undef LINE
#undef NOPOS
#undef SUBDIAGNOSTICS
#undef SUMMARY

using $DiagnosticFormatter$Configuration$DiagnosticPart = ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration$DiagnosticPart;
using $DiagnosticFormatter$PositionKind = ::com::sun::tools::javac::api::DiagnosticFormatter$PositionKind;
using $Formattable = ::com::sun::tools::javac::api::Formattable;
using $Source = ::com::sun::tools::javac::code::Source;
using $PathFileObject = ::com::sun::tools::javac::file::PathFileObject;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $AbstractDiagnosticFormatter = ::com::sun::tools::javac::util::AbstractDiagnosticFormatter;
using $AbstractDiagnosticFormatter$SimpleConfiguration = ::com::sun::tools::javac::util::AbstractDiagnosticFormatter$SimpleConfiguration;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JavacMessages = ::com::sun::tools::javac::util::JavacMessages;
using $List = ::com::sun::tools::javac::util::List;
using $Options = ::com::sun::tools::javac::util::Options;
using $Position = ::com::sun::tools::javac::util::Position;
using $RawDiagnosticFormatter$RawDiagnosticPosHelper = ::com::sun::tools::javac::util::RawDiagnosticFormatter$RawDiagnosticPosHelper;
using $StringUtils = ::com::sun::tools::javac::util::StringUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $EnumSet = ::java::util::EnumSet;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;
using $Set = ::java::util::Set;
using $Diagnostic = ::javax::tools::Diagnostic;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _RawDiagnosticFormatter_FieldInfo_[] = {
	{"rawDiagnosticPosHelper", "Lcom/sun/tools/javac/util/RawDiagnosticFormatter$RawDiagnosticPosHelper;", nullptr, 0, $field(RawDiagnosticFormatter, rawDiagnosticPosHelper)},
	{"CODES_NEEDING_SOURCE_NORMALIZATION", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(RawDiagnosticFormatter, CODES_NEEDING_SOURCE_NORMALIZATION)},
	{}
};

$MethodInfo _RawDiagnosticFormatter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Options;)V", nullptr, $PUBLIC, $method(static_cast<void(RawDiagnosticFormatter::*)($Options*)>(&RawDiagnosticFormatter::init$))},
	{"formatArgument", "(Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/lang/Object;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"formatDiagnostic", "(Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"formatMessage", "(Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(RawDiagnosticFormatter::*)($JCDiagnostic*,$Locale*)>(&RawDiagnosticFormatter::formatMessage))},
	{"formatMessage", "(Ljavax/tools/Diagnostic;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"isRaw", "()Z", nullptr, $PUBLIC},
	{"localize", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PROTECTED | $TRANSIENT},
	{}
};

$InnerClassInfo _RawDiagnosticFormatter_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.RawDiagnosticFormatter$RawDiagnosticPosHelper", "com.sun.tools.javac.util.RawDiagnosticFormatter", "RawDiagnosticPosHelper", $STATIC},
	{}
};

$ClassInfo _RawDiagnosticFormatter_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.tools.javac.util.RawDiagnosticFormatter",
	"com.sun.tools.javac.util.AbstractDiagnosticFormatter",
	nullptr,
	_RawDiagnosticFormatter_FieldInfo_,
	_RawDiagnosticFormatter_MethodInfo_,
	nullptr,
	nullptr,
	_RawDiagnosticFormatter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.RawDiagnosticFormatter$RawDiagnosticPosHelper"
};

$Object* allocate$RawDiagnosticFormatter($Class* clazz) {
	return $of($alloc(RawDiagnosticFormatter));
}

$Set* RawDiagnosticFormatter::CODES_NEEDING_SOURCE_NORMALIZATION = nullptr;

void RawDiagnosticFormatter::init$($Options* options) {
	$useLocalCurrentObjectStackCache();
	$init($DiagnosticFormatter$Configuration$DiagnosticPart);
	$AbstractDiagnosticFormatter::init$(nullptr, $$new($AbstractDiagnosticFormatter$SimpleConfiguration, options, $($EnumSet::of($DiagnosticFormatter$Configuration$DiagnosticPart::SUMMARY, $DiagnosticFormatter$Configuration$DiagnosticPart::DETAILS, $DiagnosticFormatter$Configuration$DiagnosticPart::SUBDIAGNOSTICS))));
}

$String* RawDiagnosticFormatter::formatDiagnostic($JCDiagnostic* d, $Locale* l) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		$var($String, var$2, nullptr);
		bool return$1 = false;
		try {
			try {
				$set(this, rawDiagnosticPosHelper, $new($RawDiagnosticFormatter$RawDiagnosticPosHelper, d));
				$var($StringBuilder, buf, $new($StringBuilder));
				if ($nc(d)->getPosition() != $Position::NOPOS) {
					buf->append($(formatSource(d, false, ($Locale*)nullptr)));
					buf->append(u':');
					$init($DiagnosticFormatter$PositionKind);
					buf->append($(formatPosition(d, $DiagnosticFormatter$PositionKind::LINE, ($Locale*)nullptr)));
					buf->append(u':');
					buf->append($(formatPosition(d, $DiagnosticFormatter$PositionKind::COLUMN, ($Locale*)nullptr)));
					buf->append(u':');
				} else {
					bool var$4 = $cast($JavaFileObject, d->getSource()) != nullptr;
					$init($JavaFileObject$Kind);
					if (var$4 && $nc($($cast($JavaFileObject, d->getSource())))->getKind() == $JavaFileObject$Kind::CLASS) {
						buf->append($(formatSource(d, false, ($Locale*)nullptr)));
						buf->append(":-:-:"_s);
					} else {
						buf->append(u'-');
					}
				}
				buf->append(u' ');
				buf->append($(formatMessage(d, ($Locale*)nullptr)));
				if (displaySource(d)) {
					buf->append("\n"_s);
					buf->append($(formatSourceLine(d, 0)));
				}
				$assign(var$2, buf->toString());
				return$1 = true;
				goto $finally;
			} catch ($Exception& e) {
				$assign(var$2, nullptr);
				return$1 = true;
				goto $finally;
			}
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
		} $finally: {
			$set(this, rawDiagnosticPosHelper, nullptr);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$String* RawDiagnosticFormatter::formatMessage($JCDiagnostic* d, $Locale* l) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	$var($Collection, args, formatArguments(d, l));
	$var($String, var$0, $nc(d)->getCode());
	buf->append($(localize(nullptr, var$0, $($nc(args)->toArray()))));
	bool var$1 = $nc(d)->isMultiline();
	$init($DiagnosticFormatter$Configuration$DiagnosticPart);
	if (var$1 && $nc($($cast($EnumSet, $nc($($cast($AbstractDiagnosticFormatter$SimpleConfiguration, getConfiguration())))->getVisible())))->contains($DiagnosticFormatter$Configuration$DiagnosticPart::SUBDIAGNOSTICS)) {
		$var($List, subDiags, formatSubdiagnostics(d, nullptr));
		if ($nc(subDiags)->nonEmpty()) {
			$var($String, sep, ""_s);
			buf->append(",{"_s);
			{
				$var($Iterator, i$, $nc($(formatSubdiagnostics(d, nullptr)))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($String, sub, $cast($String, i$->next()));
					{
						buf->append(sep);
						buf->append("("_s);
						buf->append(sub);
						buf->append(")"_s);
						$assign(sep, ","_s);
					}
				}
			}
			buf->append(u'}');
		}
	}
	return buf->toString();
}

$String* RawDiagnosticFormatter::formatArgument($JCDiagnostic* diag, Object$* arg, $Locale* l) {
	$useLocalCurrentObjectStackCache();
	$var($String, s, nullptr);
	{
		$var($JCTree$JCExpression, expression, nullptr);
		$var($PathFileObject, pathFileObject, nullptr);
		$JCTree$Tag* tag = nullptr;
		if ($instanceOf($Formattable, arg)) {
			$assign(s, $nc($of(arg))->toString());
		} else {
			bool var$1 = $instanceOf($JCTree$JCExpression, arg);
			if (var$1) {
				$assign(expression, $cast($JCTree$JCExpression, arg));
				var$1 = true;
			}
			if (var$1) {
				$Assert::checkNonNull(this->rawDiagnosticPosHelper);
				$assign(s, $str({"@"_s, $($nc(this->rawDiagnosticPosHelper)->getPosition(expression))}));
			} else {
				bool var$3 = $instanceOf($PathFileObject, arg);
				if (var$3) {
					$assign(pathFileObject, $cast($PathFileObject, arg));
					var$3 = true;
				}
				if (var$3) {
					$assign(s, $nc(pathFileObject)->getShortName());
				} else {
					bool var$5 = $instanceOf($JCTree$Tag, arg);
					if (var$5) {
						tag = $cast($JCTree$Tag, arg);
						var$5 = true;
					}
					if (var$5) {
						$assign(s, $str({"compiler.misc.tree.tag."_s, $($StringUtils::toLowerCase($($nc(tag)->name())))}));
					} else {
						$init($Source);
						if ($instanceOf($Source, arg) && $equals(arg, $Source::DEFAULT) && $nc(RawDiagnosticFormatter::CODES_NEEDING_SOURCE_NORMALIZATION)->contains($($nc(diag)->getCode()))) {
							$assign(s, "DEFAULT"_s);
						} else {
							$assign(s, $AbstractDiagnosticFormatter::formatArgument(diag, arg, nullptr));
						}
					}
				}
			}
		}
	}
	return ($instanceOf($JCDiagnostic, arg)) ? $str({"("_s, s, ")"_s}) : s;
}

$String* RawDiagnosticFormatter::localize($Locale* l, $String* key, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	buf->append(key);
	$var($String, sep, ": "_s);
	{
		$var($ObjectArray, arr$, args);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Object0, o, arr$->get(i$));
			{
				buf->append(sep);
				buf->append(o);
				$assign(sep, ", "_s);
			}
		}
	}
	return buf->toString();
}

bool RawDiagnosticFormatter::isRaw() {
	return true;
}

$String* RawDiagnosticFormatter::formatMessage($Diagnostic* d, $Locale* l) {
	return this->formatMessage($cast($JCDiagnostic, d), l);
}

void clinit$RawDiagnosticFormatter($Class* class$) {
	$assignStatic(RawDiagnosticFormatter::CODES_NEEDING_SOURCE_NORMALIZATION, $Set::of("compiler.note.preview.filename"_s, "compiler.note.preview.plural"_s));
}

RawDiagnosticFormatter::RawDiagnosticFormatter() {
}

$Class* RawDiagnosticFormatter::load$($String* name, bool initialize) {
	$loadClass(RawDiagnosticFormatter, name, initialize, &_RawDiagnosticFormatter_ClassInfo_, clinit$RawDiagnosticFormatter, allocate$RawDiagnosticFormatter);
	return class$;
}

$Class* RawDiagnosticFormatter::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com