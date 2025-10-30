#include <com/sun/tools/javac/util/BasicDiagnosticFormatter.h>

#include <com/sun/tools/javac/api/DiagnosticFormatter$Configuration$DiagnosticPart.h>
#include <com/sun/tools/javac/api/DiagnosticFormatter$Configuration.h>
#include <com/sun/tools/javac/api/DiagnosticFormatter$PositionKind.h>
#include <com/sun/tools/javac/util/AbstractDiagnosticFormatter$SimpleConfiguration.h>
#include <com/sun/tools/javac/util/AbstractDiagnosticFormatter.h>
#include <com/sun/tools/javac/util/BasicDiagnosticFormatter$1.h>
#include <com/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind.h>
#include <com/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration$SourcePosition.h>
#include <com/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/JavacMessages.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Options.h>
#include <com/sun/tools/javac/util/Position.h>
#include <java/lang/CharSequence.h>
#include <java/util/Collection.h>
#include <java/util/EnumSet.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <java/util/Set.h>
#include <java/util/regex/Matcher.h>
#include <javax/tools/Diagnostic.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef BOTTOM
#undef CLASS
#undef COLUMN
#undef DEFAULT_CLASS_FORMAT
#undef DEFAULT_NO_POS_FORMAT
#undef DEFAULT_POS_FORMAT
#undef DETAILS
#undef END
#undef LINE
#undef NOPOS
#undef NO_SOURCE
#undef OFFSET
#undef SOURCE
#undef START
#undef SUBDIAGNOSTICS
#undef SUMMARY

using $DiagnosticFormatter$Configuration = ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration;
using $DiagnosticFormatter$Configuration$DiagnosticPart = ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration$DiagnosticPart;
using $DiagnosticFormatter$PositionKind = ::com::sun::tools::javac::api::DiagnosticFormatter$PositionKind;
using $AbstractDiagnosticFormatter = ::com::sun::tools::javac::util::AbstractDiagnosticFormatter;
using $AbstractDiagnosticFormatter$SimpleConfiguration = ::com::sun::tools::javac::util::AbstractDiagnosticFormatter$SimpleConfiguration;
using $BasicDiagnosticFormatter$1 = ::com::sun::tools::javac::util::BasicDiagnosticFormatter$1;
using $BasicDiagnosticFormatter$BasicConfiguration = ::com::sun::tools::javac::util::BasicDiagnosticFormatter$BasicConfiguration;
using $BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind = ::com::sun::tools::javac::util::BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind;
using $BasicDiagnosticFormatter$BasicConfiguration$SourcePosition = ::com::sun::tools::javac::util::BasicDiagnosticFormatter$BasicConfiguration$SourcePosition;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
using $JavacMessages = ::com::sun::tools::javac::util::JavacMessages;
using $List = ::com::sun::tools::javac::util::List;
using $Options = ::com::sun::tools::javac::util::Options;
using $Position = ::com::sun::tools::javac::util::Position;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $Collection = ::java::util::Collection;
using $EnumSet = ::java::util::EnumSet;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;
using $Matcher = ::java::util::regex::Matcher;
using $Diagnostic = ::javax::tools::Diagnostic;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$MethodInfo _BasicDiagnosticFormatter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Options;Lcom/sun/tools/javac/util/JavacMessages;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicDiagnosticFormatter::*)($Options*,$JavacMessages*)>(&BasicDiagnosticFormatter::init$))},
	{"<init>", "(Lcom/sun/tools/javac/util/JavacMessages;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicDiagnosticFormatter::*)($JavacMessages*)>(&BasicDiagnosticFormatter::init$))},
	{"addSourceLineIfNeeded", "(Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"formatDiagnostic", "(Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"formatMessage", "(Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"formatMessage", "(Ljavax/tools/Diagnostic;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"formatMeta", "(CLcom/sun/tools/javac/util/JCDiagnostic;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"getConfiguration", "()Lcom/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration;", nullptr, $PUBLIC},
	{"selectFormat", "(Lcom/sun/tools/javac/util/JCDiagnostic;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(BasicDiagnosticFormatter::*)($JCDiagnostic*)>(&BasicDiagnosticFormatter::selectFormat))},
	{}
};

$InnerClassInfo _BasicDiagnosticFormatter_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.BasicDiagnosticFormatter$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.util.BasicDiagnosticFormatter$BasicConfiguration", "com.sun.tools.javac.util.BasicDiagnosticFormatter", "BasicConfiguration", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _BasicDiagnosticFormatter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.BasicDiagnosticFormatter",
	"com.sun.tools.javac.util.AbstractDiagnosticFormatter",
	nullptr,
	nullptr,
	_BasicDiagnosticFormatter_MethodInfo_,
	nullptr,
	nullptr,
	_BasicDiagnosticFormatter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.BasicDiagnosticFormatter$1,com.sun.tools.javac.util.BasicDiagnosticFormatter$BasicConfiguration,com.sun.tools.javac.util.BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind,com.sun.tools.javac.util.BasicDiagnosticFormatter$BasicConfiguration$SourcePosition"
};

$Object* allocate$BasicDiagnosticFormatter($Class* clazz) {
	return $of($alloc(BasicDiagnosticFormatter));
}

void BasicDiagnosticFormatter::init$($Options* options, $JavacMessages* msgs) {
	$AbstractDiagnosticFormatter::init$(msgs, $$new($BasicDiagnosticFormatter$BasicConfiguration, options));
}

void BasicDiagnosticFormatter::init$($JavacMessages* msgs) {
	$AbstractDiagnosticFormatter::init$(msgs, $$new($BasicDiagnosticFormatter$BasicConfiguration));
}

$String* BasicDiagnosticFormatter::formatDiagnostic($JCDiagnostic* d, $Locale* l$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Locale, l, l$renamed);
	if (l == nullptr) {
		$assign(l, $nc(this->messages)->getCurrentLocale());
	}
	$var($String, format, selectFormat(d));
	$var($StringBuilder, buf, $new($StringBuilder));
	for (int32_t i = 0; i < $nc(format)->length(); ++i) {
		char16_t c = format->charAt(i);
		bool meta = false;
		if (c == u'%' && i < format->length() - 1) {
			meta = true;
			c = format->charAt(++i);
		}
		buf->append(meta ? $(formatMeta(c, d, l)) : $($String::valueOf(c)));
	}
	if (this->depth == 0) {
		return addSourceLineIfNeeded(d, $(buf->toString()));
	} else {
		return buf->toString();
	}
}

$String* BasicDiagnosticFormatter::formatMessage($JCDiagnostic* d, $Locale* l) {
	$useLocalCurrentObjectStackCache();
	int32_t currentIndentation = 0;
	$var($StringBuilder, buf, $new($StringBuilder));
	$var($Collection, args, formatArguments(d, l));
	$var($Locale, var$0, l);
	$var($String, var$1, $nc(d)->getCode());
	$var($String, msg, localize(var$0, var$1, $($nc(args)->toArray())));
	$var($StringArray, lines, $nc(msg)->split("\n"_s));
	if (lines->length == 0) {
		$assign(lines, $new($StringArray, {""_s}));
	}
	$init($DiagnosticFormatter$Configuration$DiagnosticPart);
	if ($nc($($cast($EnumSet, $nc($($cast($BasicDiagnosticFormatter$BasicConfiguration, getConfiguration())))->getVisible())))->contains($DiagnosticFormatter$Configuration$DiagnosticPart::SUMMARY)) {
		currentIndentation += $nc($($cast($BasicDiagnosticFormatter$BasicConfiguration, getConfiguration())))->getIndentation($DiagnosticFormatter$Configuration$DiagnosticPart::SUMMARY);
		buf->append($(indent(lines->get(0), currentIndentation)));
	}
	if (lines->length > 1 && $nc($($cast($EnumSet, $nc($($cast($BasicDiagnosticFormatter$BasicConfiguration, getConfiguration())))->getVisible())))->contains($DiagnosticFormatter$Configuration$DiagnosticPart::DETAILS)) {
		currentIndentation += $nc($($cast($BasicDiagnosticFormatter$BasicConfiguration, getConfiguration())))->getIndentation($DiagnosticFormatter$Configuration$DiagnosticPart::DETAILS);
		for (int32_t i = 1; i < lines->length; ++i) {
			buf->append($$str({"\n"_s, $(indent(lines->get(i), currentIndentation))}));
		}
	}
	bool var$2 = $nc(d)->isMultiline();
	if (var$2 && $nc($($cast($EnumSet, $nc($($cast($BasicDiagnosticFormatter$BasicConfiguration, getConfiguration())))->getVisible())))->contains($DiagnosticFormatter$Configuration$DiagnosticPart::SUBDIAGNOSTICS)) {
		currentIndentation += $nc($($cast($BasicDiagnosticFormatter$BasicConfiguration, getConfiguration())))->getIndentation($DiagnosticFormatter$Configuration$DiagnosticPart::SUBDIAGNOSTICS);
		{
			$var($Iterator, i$, $nc($(formatSubdiagnostics(d, l)))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, sub, $cast($String, i$->next()));
				{
					buf->append($$str({"\n"_s, $(indent(sub, currentIndentation))}));
				}
			}
		}
	}
	return buf->toString();
}

$String* BasicDiagnosticFormatter::addSourceLineIfNeeded($JCDiagnostic* d, $String* msg) {
	$useLocalCurrentObjectStackCache();
	if (!displaySource(d)) {
		return msg;
	} else {
		$var($BasicDiagnosticFormatter$BasicConfiguration, conf, $cast($BasicDiagnosticFormatter$BasicConfiguration, getConfiguration()));
		$init($DiagnosticFormatter$Configuration$DiagnosticPart);
		int32_t indentSource = $nc(conf)->getIndentation($DiagnosticFormatter$Configuration$DiagnosticPart::SOURCE);
		$var($String, sourceLine, $str({"\n"_s, $(formatSourceLine(d, indentSource))}));
		bool singleLine = !$nc(msg)->contains("\n"_s);
		$init($BasicDiagnosticFormatter$BasicConfiguration$SourcePosition);
		if (singleLine || $nc($($cast($BasicDiagnosticFormatter$BasicConfiguration, getConfiguration())))->getSourcePosition() == $BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::BOTTOM) {
			return $str({msg, sourceLine});
		} else {
			return msg->replaceFirst("\n"_s, $$str({$($Matcher::quoteReplacement(sourceLine)), "\n"_s}));
		}
	}
}

$String* BasicDiagnosticFormatter::formatMeta(char16_t c, $JCDiagnostic* d, $Locale* l) {
	switch (c) {
	case u'b':
		{
			return formatSource(d, false, l);
		}
	case u'e':
		{
			$init($DiagnosticFormatter$PositionKind);
			return formatPosition(d, $DiagnosticFormatter$PositionKind::END, l);
		}
	case u'f':
		{
			return formatSource(d, true, l);
		}
	case u'l':
		{
			$init($DiagnosticFormatter$PositionKind);
			return formatPosition(d, $DiagnosticFormatter$PositionKind::LINE, l);
		}
	case u'c':
		{
			$init($DiagnosticFormatter$PositionKind);
			return formatPosition(d, $DiagnosticFormatter$PositionKind::COLUMN, l);
		}
	case u'o':
		{
			$init($DiagnosticFormatter$PositionKind);
			return formatPosition(d, $DiagnosticFormatter$PositionKind::OFFSET, l);
		}
	case u'p':
		{
			return formatKind(d, l);
		}
	case u's':
		{
			$init($DiagnosticFormatter$PositionKind);
			return formatPosition(d, $DiagnosticFormatter$PositionKind::START, l);
		}
	case u't':
		{
			{
				bool usePrefix = false;
				$init($BasicDiagnosticFormatter$1);
				switch ($nc($BasicDiagnosticFormatter$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType)->get($nc(($($nc(d)->getType())))->ordinal())) {
				case 1:
					{
						usePrefix = false;
						break;
					}
				case 2:
					{
						usePrefix = (d->getIntPosition() == $Position::NOPOS);
						break;
					}
				default:
					{
						usePrefix = true;
					}
				}
				if (usePrefix) {
					return formatKind(d, l);
				} else {
					return ""_s;
				}
			}
		}
	case u'm':
		{
			return formatMessage(d, l);
		}
	case u'L':
		{
			return formatLintCategory(d, l);
		}
	case u'_':
		{
			return " "_s;
		}
	case u'%':
		{
			return "%"_s;
		}
	default:
		{
			return $String::valueOf(c);
		}
	}
}

$String* BasicDiagnosticFormatter::selectFormat($JCDiagnostic* d) {
	$useLocalCurrentObjectStackCache();
	$var($DiagnosticSource, source, $nc(d)->getDiagnosticSource());
	$init($BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind);
	$var($String, format, $nc($($cast($BasicDiagnosticFormatter$BasicConfiguration, getConfiguration())))->getFormat($BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind::DEFAULT_NO_POS_FORMAT));
	$init($DiagnosticSource);
	if (source != nullptr && source != $DiagnosticSource::NO_SOURCE) {
		if (d->getIntPosition() != $Position::NOPOS) {
			$assign(format, $nc($($cast($BasicDiagnosticFormatter$BasicConfiguration, getConfiguration())))->getFormat($BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind::DEFAULT_POS_FORMAT));
		} else {
			bool var$1 = source->getFile() != nullptr;
			$init($JavaFileObject$Kind);
			if (var$1 && $nc($(source->getFile()))->getKind() == $JavaFileObject$Kind::CLASS) {
				$assign(format, $nc($($cast($BasicDiagnosticFormatter$BasicConfiguration, getConfiguration())))->getFormat($BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind::DEFAULT_CLASS_FORMAT));
			}
		}
	}
	return format;
}

$DiagnosticFormatter$Configuration* BasicDiagnosticFormatter::getConfiguration() {
	return $cast($BasicDiagnosticFormatter$BasicConfiguration, $cast($AbstractDiagnosticFormatter$SimpleConfiguration, $AbstractDiagnosticFormatter::getConfiguration()));
}

$String* BasicDiagnosticFormatter::formatMessage($Diagnostic* d, $Locale* l) {
	return this->formatMessage($cast($JCDiagnostic, d), l);
}

BasicDiagnosticFormatter::BasicDiagnosticFormatter() {
}

$Class* BasicDiagnosticFormatter::load$($String* name, bool initialize) {
	$loadClass(BasicDiagnosticFormatter, name, initialize, &_BasicDiagnosticFormatter_ClassInfo_, allocate$BasicDiagnosticFormatter);
	return class$;
}

$Class* BasicDiagnosticFormatter::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com