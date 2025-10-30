#include <com/sun/tools/javac/util/AbstractDiagnosticFormatter$SimpleConfiguration.h>

#include <com/sun/tools/javac/api/DiagnosticFormatter$Configuration$DiagnosticPart.h>
#include <com/sun/tools/javac/api/DiagnosticFormatter$Configuration$MultilineLimit.h>
#include <com/sun/tools/javac/util/AbstractDiagnosticFormatter.h>
#include <com/sun/tools/javac/util/Options.h>
#include <java/lang/NumberFormatException.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/EnumSet.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef DEPTH
#undef DETAILS
#undef LENGTH
#undef SOURCE
#undef SUBDIAGNOSTICS

using $DiagnosticFormatter$Configuration = ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration;
using $DiagnosticFormatter$Configuration$DiagnosticPart = ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration$DiagnosticPart;
using $DiagnosticFormatter$Configuration$MultilineLimit = ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration$MultilineLimit;
using $AbstractDiagnosticFormatter = ::com::sun::tools::javac::util::AbstractDiagnosticFormatter;
using $Options = ::com::sun::tools::javac::util::Options;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $EnumSet = ::java::util::EnumSet;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _AbstractDiagnosticFormatter$SimpleConfiguration_FieldInfo_[] = {
	{"multilineLimits", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$MultilineLimit;Ljava/lang/Integer;>;", $PROTECTED, $field(AbstractDiagnosticFormatter$SimpleConfiguration, multilineLimits)},
	{"visibleParts", "Ljava/util/EnumSet;", "Ljava/util/EnumSet<Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$DiagnosticPart;>;", $PROTECTED, $field(AbstractDiagnosticFormatter$SimpleConfiguration, visibleParts)},
	{"caretEnabled", "Z", nullptr, $PROTECTED, $field(AbstractDiagnosticFormatter$SimpleConfiguration, caretEnabled)},
	{}
};

$MethodInfo _AbstractDiagnosticFormatter$SimpleConfiguration_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Set;)V", "(Ljava/util/Set<Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$DiagnosticPart;>;)V", $PUBLIC, $method(static_cast<void(AbstractDiagnosticFormatter$SimpleConfiguration::*)($Set*)>(&AbstractDiagnosticFormatter$SimpleConfiguration::init$))},
	{"<init>", "(Lcom/sun/tools/javac/util/Options;Ljava/util/Set;)V", "(Lcom/sun/tools/javac/util/Options;Ljava/util/Set<Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$DiagnosticPart;>;)V", $PUBLIC, $method(static_cast<void(AbstractDiagnosticFormatter$SimpleConfiguration::*)($Options*,$Set*)>(&AbstractDiagnosticFormatter$SimpleConfiguration::init$))},
	{"getMultilineLimit", "(Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$MultilineLimit;)I", nullptr, $PUBLIC},
	{"getVisible", "()Ljava/util/EnumSet;", "()Ljava/util/EnumSet<Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$DiagnosticPart;>;", $PUBLIC},
	{"isCaretEnabled", "()Z", nullptr, $PUBLIC},
	{"setCaretEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setMultilineLimit", "(Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$MultilineLimit;I)V", nullptr, $PUBLIC},
	{"setVisible", "(Ljava/util/Set;)V", "(Ljava/util/Set<Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$DiagnosticPart;>;)V", $PUBLIC},
	{"setVisiblePart", "(Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$DiagnosticPart;Z)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AbstractDiagnosticFormatter$SimpleConfiguration_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.AbstractDiagnosticFormatter$SimpleConfiguration", "com.sun.tools.javac.util.AbstractDiagnosticFormatter", "SimpleConfiguration", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.api.DiagnosticFormatter$Configuration", "com.sun.tools.javac.api.DiagnosticFormatter", "Configuration", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AbstractDiagnosticFormatter$SimpleConfiguration_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.AbstractDiagnosticFormatter$SimpleConfiguration",
	"java.lang.Object",
	"com.sun.tools.javac.api.DiagnosticFormatter$Configuration",
	_AbstractDiagnosticFormatter$SimpleConfiguration_FieldInfo_,
	_AbstractDiagnosticFormatter$SimpleConfiguration_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractDiagnosticFormatter$SimpleConfiguration_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.AbstractDiagnosticFormatter"
};

$Object* allocate$AbstractDiagnosticFormatter$SimpleConfiguration($Class* clazz) {
	return $of($alloc(AbstractDiagnosticFormatter$SimpleConfiguration));
}

void AbstractDiagnosticFormatter$SimpleConfiguration::init$($Set* parts) {
	$set(this, multilineLimits, $new($HashMap));
	setVisible(parts);
	$init($DiagnosticFormatter$Configuration$MultilineLimit);
	setMultilineLimit($DiagnosticFormatter$Configuration$MultilineLimit::DEPTH, -1);
	setMultilineLimit($DiagnosticFormatter$Configuration$MultilineLimit::LENGTH, -1);
	setCaretEnabled(true);
}

void AbstractDiagnosticFormatter$SimpleConfiguration::init$($Options* options, $Set* parts) {
	$useLocalCurrentObjectStackCache();
	AbstractDiagnosticFormatter$SimpleConfiguration::init$(parts);
	$var($String, showSource, nullptr);
	if (($assign(showSource, $nc(options)->get("diags.showSource"_s))) != nullptr) {
		if ($nc(showSource)->equals("true"_s)) {
			$init($DiagnosticFormatter$Configuration$DiagnosticPart);
			setVisiblePart($DiagnosticFormatter$Configuration$DiagnosticPart::SOURCE, true);
		} else if (showSource->equals("false"_s)) {
			$init($DiagnosticFormatter$Configuration$DiagnosticPart);
			setVisiblePart($DiagnosticFormatter$Configuration$DiagnosticPart::SOURCE, false);
		}
	}
	$var($String, diagOpts, $nc(options)->get("diags.formatterOptions"_s));
	if (diagOpts != nullptr) {
		$var($Collection, args, $Arrays::asList($(diagOpts->split(","_s))));
		if ($nc(args)->contains("short"_s)) {
			$init($DiagnosticFormatter$Configuration$DiagnosticPart);
			setVisiblePart($DiagnosticFormatter$Configuration$DiagnosticPart::DETAILS, false);
			setVisiblePart($DiagnosticFormatter$Configuration$DiagnosticPart::SUBDIAGNOSTICS, false);
		}
		if ($nc(args)->contains("source"_s)) {
			$init($DiagnosticFormatter$Configuration$DiagnosticPart);
			setVisiblePart($DiagnosticFormatter$Configuration$DiagnosticPart::SOURCE, true);
		}
		if ($nc(args)->contains("-source"_s)) {
			$init($DiagnosticFormatter$Configuration$DiagnosticPart);
			setVisiblePart($DiagnosticFormatter$Configuration$DiagnosticPart::SOURCE, false);
		}
	}
	$var($String, multiPolicy, nullptr);
	if (($assign(multiPolicy, options->get("diags.multilinePolicy"_s))) != nullptr) {
		if ($nc(multiPolicy)->equals("disabled"_s)) {
			$init($DiagnosticFormatter$Configuration$DiagnosticPart);
			setVisiblePart($DiagnosticFormatter$Configuration$DiagnosticPart::SUBDIAGNOSTICS, false);
		} else if (multiPolicy->startsWith("limit:"_s)) {
			$var($String, limitString, multiPolicy->substring("limit:"_s->length()));
			$var($StringArray, limits, limitString->split(":"_s));
			try {
				switch (limits->length) {
				case 2:
					{
						{
							if (!$nc(limits->get(1))->equals("*"_s)) {
								$init($DiagnosticFormatter$Configuration$MultilineLimit);
								setMultilineLimit($DiagnosticFormatter$Configuration$MultilineLimit::DEPTH, $Integer::parseInt(limits->get(1)));
							}
						}
					}
				case 1:
					{
						{
							if (!$nc(limits->get(0))->equals("*"_s)) {
								$init($DiagnosticFormatter$Configuration$MultilineLimit);
								setMultilineLimit($DiagnosticFormatter$Configuration$MultilineLimit::LENGTH, $Integer::parseInt(limits->get(0)));
							}
						}
					}
				}
			} catch ($NumberFormatException& ex) {
				$init($DiagnosticFormatter$Configuration$MultilineLimit);
				setMultilineLimit($DiagnosticFormatter$Configuration$MultilineLimit::DEPTH, -1);
				setMultilineLimit($DiagnosticFormatter$Configuration$MultilineLimit::LENGTH, -1);
			}
		}
	}
	$var($String, showCaret, nullptr);
	bool var$0 = (($assign(showCaret, options->get("diags.showCaret"_s))) != nullptr);
	if (var$0 && $nc(showCaret)->equals("false"_s)) {
		setCaretEnabled(false);
	} else {
		setCaretEnabled(true);
	}
}

int32_t AbstractDiagnosticFormatter$SimpleConfiguration::getMultilineLimit($DiagnosticFormatter$Configuration$MultilineLimit* limit) {
	return $nc(($cast($Integer, $($nc(this->multilineLimits)->get(limit)))))->intValue();
}

$Set* AbstractDiagnosticFormatter$SimpleConfiguration::getVisible() {
	return $EnumSet::copyOf(this->visibleParts);
}

void AbstractDiagnosticFormatter$SimpleConfiguration::setMultilineLimit($DiagnosticFormatter$Configuration$MultilineLimit* limit, int32_t value) {
	$nc(this->multilineLimits)->put(limit, $($Integer::valueOf(value < -1 ? -1 : value)));
}

void AbstractDiagnosticFormatter$SimpleConfiguration::setVisible($Set* diagParts) {
	$set(this, visibleParts, $EnumSet::copyOf(static_cast<$Collection*>(diagParts)));
}

void AbstractDiagnosticFormatter$SimpleConfiguration::setVisiblePart($DiagnosticFormatter$Configuration$DiagnosticPart* diagParts, bool enabled) {
	if (enabled) {
		$nc(this->visibleParts)->add(diagParts);
	} else {
		$nc(this->visibleParts)->remove(diagParts);
	}
}

void AbstractDiagnosticFormatter$SimpleConfiguration::setCaretEnabled(bool caretEnabled) {
	this->caretEnabled = caretEnabled;
}

bool AbstractDiagnosticFormatter$SimpleConfiguration::isCaretEnabled() {
	return this->caretEnabled;
}

AbstractDiagnosticFormatter$SimpleConfiguration::AbstractDiagnosticFormatter$SimpleConfiguration() {
}

$Class* AbstractDiagnosticFormatter$SimpleConfiguration::load$($String* name, bool initialize) {
	$loadClass(AbstractDiagnosticFormatter$SimpleConfiguration, name, initialize, &_AbstractDiagnosticFormatter$SimpleConfiguration_ClassInfo_, allocate$AbstractDiagnosticFormatter$SimpleConfiguration);
	return class$;
}

$Class* AbstractDiagnosticFormatter$SimpleConfiguration::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com