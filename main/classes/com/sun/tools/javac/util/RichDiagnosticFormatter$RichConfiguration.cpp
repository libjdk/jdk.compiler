#include <com/sun/tools/javac/util/RichDiagnosticFormatter$RichConfiguration.h>

#include <com/sun/tools/javac/api/DiagnosticFormatter$Configuration.h>
#include <com/sun/tools/javac/util/AbstractDiagnosticFormatter$SimpleConfiguration.h>
#include <com/sun/tools/javac/util/AbstractDiagnosticFormatter.h>
#include <com/sun/tools/javac/util/ForwardingDiagnosticFormatter$ForwardingConfiguration.h>
#include <com/sun/tools/javac/util/Options.h>
#include <com/sun/tools/javac/util/RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature.h>
#include <com/sun/tools/javac/util/RichDiagnosticFormatter.h>
#include <java/lang/Enum.h>
#include <java/util/AbstractCollection.h>
#include <java/util/EnumSet.h>
#include <jcpp.h>

#undef SIMPLE_NAMES
#undef UNIQUE_TYPEVAR_NAMES
#undef WHERE_CLAUSES

using $RichDiagnosticFormatter$RichConfiguration$RichFormatterFeatureArray = $Array<::com::sun::tools::javac::util::RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature>;
using $DiagnosticFormatter$Configuration = ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration;
using $AbstractDiagnosticFormatter = ::com::sun::tools::javac::util::AbstractDiagnosticFormatter;
using $AbstractDiagnosticFormatter$SimpleConfiguration = ::com::sun::tools::javac::util::AbstractDiagnosticFormatter$SimpleConfiguration;
using $ForwardingDiagnosticFormatter$ForwardingConfiguration = ::com::sun::tools::javac::util::ForwardingDiagnosticFormatter$ForwardingConfiguration;
using $Options = ::com::sun::tools::javac::util::Options;
using $RichDiagnosticFormatter = ::com::sun::tools::javac::util::RichDiagnosticFormatter;
using $RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature = ::com::sun::tools::javac::util::RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $EnumSet = ::java::util::EnumSet;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _RichDiagnosticFormatter$RichConfiguration_FieldInfo_[] = {
	{"features", "Ljava/util/EnumSet;", "Ljava/util/EnumSet<Lcom/sun/tools/javac/util/RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature;>;", $PROTECTED, $field(RichDiagnosticFormatter$RichConfiguration, features)},
	{}
};

$MethodInfo _RichDiagnosticFormatter$RichConfiguration_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Options;Lcom/sun/tools/javac/util/AbstractDiagnosticFormatter;)V", nullptr, $PUBLIC, $method(static_cast<void(RichDiagnosticFormatter$RichConfiguration::*)($Options*,$AbstractDiagnosticFormatter*)>(&RichDiagnosticFormatter$RichConfiguration::init$))},
	{"disable", "(Lcom/sun/tools/javac/util/RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature;)V", nullptr, $PUBLIC},
	{"enable", "(Lcom/sun/tools/javac/util/RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature;)V", nullptr, $PUBLIC},
	{"getAvailableFeatures", "()[Lcom/sun/tools/javac/util/RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature;", nullptr, $PUBLIC},
	{"isEnabled", "(Lcom/sun/tools/javac/util/RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RichDiagnosticFormatter$RichConfiguration_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.RichDiagnosticFormatter$RichConfiguration", "com.sun.tools.javac.util.RichDiagnosticFormatter", "RichConfiguration", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.util.ForwardingDiagnosticFormatter$ForwardingConfiguration", "com.sun.tools.javac.util.ForwardingDiagnosticFormatter", "ForwardingConfiguration", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.util.RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature", "com.sun.tools.javac.util.RichDiagnosticFormatter$RichConfiguration", "RichFormatterFeature", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _RichDiagnosticFormatter$RichConfiguration_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.RichDiagnosticFormatter$RichConfiguration",
	"com.sun.tools.javac.util.ForwardingDiagnosticFormatter$ForwardingConfiguration",
	nullptr,
	_RichDiagnosticFormatter$RichConfiguration_FieldInfo_,
	_RichDiagnosticFormatter$RichConfiguration_MethodInfo_,
	nullptr,
	nullptr,
	_RichDiagnosticFormatter$RichConfiguration_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.RichDiagnosticFormatter"
};

$Object* allocate$RichDiagnosticFormatter$RichConfiguration($Class* clazz) {
	return $of($alloc(RichDiagnosticFormatter$RichConfiguration));
}

void RichDiagnosticFormatter$RichConfiguration::init$($Options* options, $AbstractDiagnosticFormatter* formatter) {
	$useLocalCurrentObjectStackCache();
	$ForwardingDiagnosticFormatter$ForwardingConfiguration::init$($($nc(formatter)->getConfiguration()));
	$load($RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature);
	$init($RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature);
	$set(this, features, $nc(formatter)->isRaw() ? $EnumSet::noneOf($RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::class$) : $EnumSet::of($RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::SIMPLE_NAMES, $RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::WHERE_CLAUSES, $RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::UNIQUE_TYPEVAR_NAMES));
	$var($String, diagOpts, $nc(options)->get("diags.formatterOptions"_s));
	if (diagOpts != nullptr) {
		{
			$var($StringArray, arr$, diagOpts->split(","_s));
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, args, arr$->get(i$));
				{
					if ($nc(args)->equals("-where"_s)) {
						$nc(this->features)->remove($RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::WHERE_CLAUSES);
					} else if (args->equals("where"_s)) {
						$nc(this->features)->add($RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::WHERE_CLAUSES);
					}
					if ($nc(args)->equals("-simpleNames"_s)) {
						$nc(this->features)->remove($RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::SIMPLE_NAMES);
					} else if (args->equals("simpleNames"_s)) {
						$nc(this->features)->add($RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::SIMPLE_NAMES);
					}
					if ($nc(args)->equals("-disambiguateTvars"_s)) {
						$nc(this->features)->remove($RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::UNIQUE_TYPEVAR_NAMES);
					} else if (args->equals("disambiguateTvars"_s)) {
						$nc(this->features)->add($RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::UNIQUE_TYPEVAR_NAMES);
					}
				}
			}
		}
	}
}

$RichDiagnosticFormatter$RichConfiguration$RichFormatterFeatureArray* RichDiagnosticFormatter$RichConfiguration::getAvailableFeatures() {
	return $RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::values();
}

void RichDiagnosticFormatter$RichConfiguration::enable($RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature* feature) {
	$nc(this->features)->add(feature);
}

void RichDiagnosticFormatter$RichConfiguration::disable($RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature* feature) {
	$nc(this->features)->remove(feature);
}

bool RichDiagnosticFormatter$RichConfiguration::isEnabled($RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature* feature) {
	return $nc(this->features)->contains(feature);
}

RichDiagnosticFormatter$RichConfiguration::RichDiagnosticFormatter$RichConfiguration() {
}

$Class* RichDiagnosticFormatter$RichConfiguration::load$($String* name, bool initialize) {
	$loadClass(RichDiagnosticFormatter$RichConfiguration, name, initialize, &_RichDiagnosticFormatter$RichConfiguration_ClassInfo_, allocate$RichDiagnosticFormatter$RichConfiguration);
	return class$;
}

$Class* RichDiagnosticFormatter$RichConfiguration::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com