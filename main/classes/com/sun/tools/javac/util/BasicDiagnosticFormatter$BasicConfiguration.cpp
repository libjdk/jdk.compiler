#include <com/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration.h>

#include <com/sun/tools/javac/api/DiagnosticFormatter$Configuration$DiagnosticPart.h>
#include <com/sun/tools/javac/util/AbstractDiagnosticFormatter$SimpleConfiguration.h>
#include <com/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind.h>
#include <com/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration$SourcePosition.h>
#include <com/sun/tools/javac/util/BasicDiagnosticFormatter.h>
#include <com/sun/tools/javac/util/Options.h>
#include <java/lang/Enum.h>
#include <java/lang/NumberFormatException.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/EnumMap.h>
#include <java/util/EnumSet.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef AFTER_SUMMARY
#undef BOTTOM
#undef DEFAULT_CLASS_FORMAT
#undef DEFAULT_NO_POS_FORMAT
#undef DEFAULT_POS_FORMAT
#undef DETAILS
#undef JLS
#undef SOURCE
#undef SUBDIAGNOSTICS
#undef SUMMARY

using $DiagnosticFormatter$Configuration$DiagnosticPart = ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration$DiagnosticPart;
using $AbstractDiagnosticFormatter$SimpleConfiguration = ::com::sun::tools::javac::util::AbstractDiagnosticFormatter$SimpleConfiguration;
using $BasicDiagnosticFormatter = ::com::sun::tools::javac::util::BasicDiagnosticFormatter;
using $BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind = ::com::sun::tools::javac::util::BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind;
using $BasicDiagnosticFormatter$BasicConfiguration$SourcePosition = ::com::sun::tools::javac::util::BasicDiagnosticFormatter$BasicConfiguration$SourcePosition;
using $Options = ::com::sun::tools::javac::util::Options;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $EnumMap = ::java::util::EnumMap;
using $EnumSet = ::java::util::EnumSet;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _BasicDiagnosticFormatter$BasicConfiguration_FieldInfo_[] = {
	{"indentationLevels", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$DiagnosticPart;Ljava/lang/Integer;>;", $PROTECTED, $field(BasicDiagnosticFormatter$BasicConfiguration, indentationLevels)},
	{"availableFormats", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind;Ljava/lang/String;>;", $PROTECTED, $field(BasicDiagnosticFormatter$BasicConfiguration, availableFormats)},
	{"sourcePosition", "Lcom/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration$SourcePosition;", nullptr, $PROTECTED, $field(BasicDiagnosticFormatter$BasicConfiguration, sourcePosition)},
	{}
};

$MethodInfo _BasicDiagnosticFormatter$BasicConfiguration_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Options;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicDiagnosticFormatter$BasicConfiguration::*)($Options*)>(&BasicDiagnosticFormatter$BasicConfiguration::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicDiagnosticFormatter$BasicConfiguration::*)()>(&BasicDiagnosticFormatter$BasicConfiguration::init$))},
	{"getFormat", "(Lcom/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getIndentation", "(Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$DiagnosticPart;)I", nullptr, $PUBLIC},
	{"getSourcePosition", "()Lcom/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration$SourcePosition;", nullptr, $PUBLIC},
	{"initFormat", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicDiagnosticFormatter$BasicConfiguration::*)()>(&BasicDiagnosticFormatter$BasicConfiguration::initFormat))},
	{"initFormats", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicDiagnosticFormatter$BasicConfiguration::*)($String*,$String*,$String*)>(&BasicDiagnosticFormatter$BasicConfiguration::initFormats))},
	{"initFormats", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicDiagnosticFormatter$BasicConfiguration::*)($String*)>(&BasicDiagnosticFormatter$BasicConfiguration::initFormats))},
	{"initIndentation", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicDiagnosticFormatter$BasicConfiguration::*)()>(&BasicDiagnosticFormatter$BasicConfiguration::initIndentation))},
	{"initOldFormat", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicDiagnosticFormatter$BasicConfiguration::*)()>(&BasicDiagnosticFormatter$BasicConfiguration::initOldFormat))},
	{"setFormat", "(Lcom/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setIndentation", "(Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$DiagnosticPart;I)V", nullptr, $PUBLIC},
	{"setSourcePosition", "(Lcom/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration$SourcePosition;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicDiagnosticFormatter$BasicConfiguration_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.BasicDiagnosticFormatter$BasicConfiguration", "com.sun.tools.javac.util.BasicDiagnosticFormatter", "BasicConfiguration", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.util.AbstractDiagnosticFormatter$SimpleConfiguration", "com.sun.tools.javac.util.AbstractDiagnosticFormatter", "SimpleConfiguration", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.util.BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind", "com.sun.tools.javac.util.BasicDiagnosticFormatter$BasicConfiguration", "BasicFormatKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.util.BasicDiagnosticFormatter$BasicConfiguration$SourcePosition", "com.sun.tools.javac.util.BasicDiagnosticFormatter$BasicConfiguration", "SourcePosition", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _BasicDiagnosticFormatter$BasicConfiguration_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.BasicDiagnosticFormatter$BasicConfiguration",
	"com.sun.tools.javac.util.AbstractDiagnosticFormatter$SimpleConfiguration",
	nullptr,
	_BasicDiagnosticFormatter$BasicConfiguration_FieldInfo_,
	_BasicDiagnosticFormatter$BasicConfiguration_MethodInfo_,
	nullptr,
	nullptr,
	_BasicDiagnosticFormatter$BasicConfiguration_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.BasicDiagnosticFormatter"
};

$Object* allocate$BasicDiagnosticFormatter$BasicConfiguration($Class* clazz) {
	return $of($alloc(BasicDiagnosticFormatter$BasicConfiguration));
}

void BasicDiagnosticFormatter$BasicConfiguration::init$($Options* options) {
	$useLocalCurrentObjectStackCache();
	$init($DiagnosticFormatter$Configuration$DiagnosticPart);
	$AbstractDiagnosticFormatter$SimpleConfiguration::init$(options, $($EnumSet::of($DiagnosticFormatter$Configuration$DiagnosticPart::SUMMARY, $DiagnosticFormatter$Configuration$DiagnosticPart::DETAILS, $DiagnosticFormatter$Configuration$DiagnosticPart::SUBDIAGNOSTICS, $DiagnosticFormatter$Configuration$DiagnosticPart::SOURCE)));
	initFormat();
	initIndentation();
	if ($nc(options)->isSet("diags.legacy"_s)) {
		initOldFormat();
	}
	$var($String, fmt, $nc(options)->get("diags.layout"_s));
	if (fmt != nullptr) {
		if (fmt->equals("OLD"_s)) {
			initOldFormat();
		} else {
			initFormats(fmt);
		}
	}
	$var($String, srcPos, nullptr);
	bool var$0 = (($assign(srcPos, options->get("diags.sourcePosition"_s))) != nullptr);
	if (var$0 && $nc(srcPos)->equals("bottom"_s)) {
		$init($BasicDiagnosticFormatter$BasicConfiguration$SourcePosition);
		setSourcePosition($BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::BOTTOM);
	} else {
		$init($BasicDiagnosticFormatter$BasicConfiguration$SourcePosition);
		setSourcePosition($BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::AFTER_SUMMARY);
	}
	$var($String, indent, options->get("diags.indent"_s));
	if (indent != nullptr) {
		$var($StringArray, levels, indent->split("\\|"_s));
		try {
			switch (levels->length) {
			case 5:
				{
					setIndentation($DiagnosticFormatter$Configuration$DiagnosticPart::JLS, $Integer::parseInt(levels->get(4)));
				}
			case 4:
				{
					setIndentation($DiagnosticFormatter$Configuration$DiagnosticPart::SUBDIAGNOSTICS, $Integer::parseInt(levels->get(3)));
				}
			case 3:
				{
					setIndentation($DiagnosticFormatter$Configuration$DiagnosticPart::SOURCE, $Integer::parseInt(levels->get(2)));
				}
			case 2:
				{
					setIndentation($DiagnosticFormatter$Configuration$DiagnosticPart::DETAILS, $Integer::parseInt(levels->get(1)));
				}
			default:
				{
					setIndentation($DiagnosticFormatter$Configuration$DiagnosticPart::SUMMARY, $Integer::parseInt(levels->get(0)));
				}
			}
		} catch ($NumberFormatException& ex) {
			initIndentation();
		}
	}
}

void BasicDiagnosticFormatter$BasicConfiguration::init$() {
	$init($DiagnosticFormatter$Configuration$DiagnosticPart);
	$AbstractDiagnosticFormatter$SimpleConfiguration::init$($($EnumSet::of($DiagnosticFormatter$Configuration$DiagnosticPart::SUMMARY, $DiagnosticFormatter$Configuration$DiagnosticPart::DETAILS, $DiagnosticFormatter$Configuration$DiagnosticPart::SUBDIAGNOSTICS, $DiagnosticFormatter$Configuration$DiagnosticPart::SOURCE)));
	initFormat();
	initIndentation();
}

void BasicDiagnosticFormatter$BasicConfiguration::initFormat() {
	initFormats("%f:%l:%_%p%L%m"_s, "%p%L%m"_s, "%f:%_%p%L%m"_s);
}

void BasicDiagnosticFormatter$BasicConfiguration::initOldFormat() {
	initFormats("%f:%l:%_%t%L%m"_s, "%p%L%m"_s, "%f:%_%t%L%m"_s);
}

void BasicDiagnosticFormatter$BasicConfiguration::initFormats($String* pos, $String* nopos, $String* clazz) {
	$load($BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind);
	$set(this, availableFormats, $new($EnumMap, $BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind::class$));
	$init($BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind);
	setFormat($BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind::DEFAULT_POS_FORMAT, pos);
	setFormat($BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind::DEFAULT_NO_POS_FORMAT, nopos);
	setFormat($BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind::DEFAULT_CLASS_FORMAT, clazz);
}

void BasicDiagnosticFormatter$BasicConfiguration::initFormats($String* fmt) {
	$var($StringArray, formats, $nc(fmt)->split("\\|"_s));
	switch (formats->length) {
	case 3:
		{
			$init($BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind);
			setFormat($BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind::DEFAULT_CLASS_FORMAT, formats->get(2));
		}
	case 2:
		{
			$init($BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind);
			setFormat($BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind::DEFAULT_NO_POS_FORMAT, formats->get(1));
		}
	default:
		{
			$init($BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind);
			setFormat($BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind::DEFAULT_POS_FORMAT, formats->get(0));
		}
	}
}

void BasicDiagnosticFormatter$BasicConfiguration::initIndentation() {
	$set(this, indentationLevels, $new($HashMap));
	$init($DiagnosticFormatter$Configuration$DiagnosticPart);
	setIndentation($DiagnosticFormatter$Configuration$DiagnosticPart::SUMMARY, 0);
	setIndentation($DiagnosticFormatter$Configuration$DiagnosticPart::DETAILS, 2);
	setIndentation($DiagnosticFormatter$Configuration$DiagnosticPart::SUBDIAGNOSTICS, 4);
	setIndentation($DiagnosticFormatter$Configuration$DiagnosticPart::SOURCE, 0);
}

int32_t BasicDiagnosticFormatter$BasicConfiguration::getIndentation($DiagnosticFormatter$Configuration$DiagnosticPart* diagPart) {
	return $nc(($cast($Integer, $($nc(this->indentationLevels)->get(diagPart)))))->intValue();
}

void BasicDiagnosticFormatter$BasicConfiguration::setIndentation($DiagnosticFormatter$Configuration$DiagnosticPart* diagPart, int32_t nSpaces) {
	$nc(this->indentationLevels)->put(diagPart, $($Integer::valueOf(nSpaces)));
}

void BasicDiagnosticFormatter$BasicConfiguration::setSourcePosition($BasicDiagnosticFormatter$BasicConfiguration$SourcePosition* sourcePos) {
	$set(this, sourcePosition, sourcePos);
}

$BasicDiagnosticFormatter$BasicConfiguration$SourcePosition* BasicDiagnosticFormatter$BasicConfiguration::getSourcePosition() {
	return this->sourcePosition;
}

void BasicDiagnosticFormatter$BasicConfiguration::setFormat($BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind* kind, $String* s) {
	$nc(this->availableFormats)->put(kind, s);
}

$String* BasicDiagnosticFormatter$BasicConfiguration::getFormat($BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind* kind) {
	return $cast($String, $nc(this->availableFormats)->get(kind));
}

BasicDiagnosticFormatter$BasicConfiguration::BasicDiagnosticFormatter$BasicConfiguration() {
}

$Class* BasicDiagnosticFormatter$BasicConfiguration::load$($String* name, bool initialize) {
	$loadClass(BasicDiagnosticFormatter$BasicConfiguration, name, initialize, &_BasicDiagnosticFormatter$BasicConfiguration_ClassInfo_, allocate$BasicDiagnosticFormatter$BasicConfiguration);
	return class$;
}

$Class* BasicDiagnosticFormatter$BasicConfiguration::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com