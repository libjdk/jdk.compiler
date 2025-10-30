#include <com/sun/tools/javac/code/Preview.h>

#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/code/Lint.h>
#include <com/sun/tools/javac/code/Preview$1.h>
#include <com/sun/tools/javac/code/Source$Feature.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/jvm/Target.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Warnings.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic$SimpleDiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/MandatoryWarningHandler.h>
#include <com/sun/tools/javac/util/Options.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef PREVIEW
#undef SOURCE_LEVEL

using $TargetArray = $Array<::com::sun::tools::javac::jvm::Target>;
using $Lint = ::com::sun::tools::javac::code::Lint;
using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $Preview$1 = ::com::sun::tools::javac::code::Preview$1;
using $Source = ::com::sun::tools::javac::code::Source;
using $Source$Feature = ::com::sun::tools::javac::code::Source$Feature;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Target = ::com::sun::tools::javac::jvm::Target;
using $Option = ::com::sun::tools::javac::main::Option;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $CompilerProperties$Warnings = ::com::sun::tools::javac::resources::CompilerProperties$Warnings;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $JCDiagnostic$DiagnosticFlag = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $JCDiagnostic$Fragment = ::com::sun::tools::javac::util::JCDiagnostic$Fragment;
using $JCDiagnostic$SimpleDiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$SimpleDiagnosticPosition;
using $JCDiagnostic$Warning = ::com::sun::tools::javac::util::JCDiagnostic$Warning;
using $Log = ::com::sun::tools::javac::util::Log;
using $MandatoryWarningHandler = ::com::sun::tools::javac::util::MandatoryWarningHandler;
using $Options = ::com::sun::tools::javac::util::Options;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Preview_FieldInfo_[] = {
	{"enabled", "Z", nullptr, $PRIVATE | $FINAL, $field(Preview, enabled)},
	{"previewHandler", "Lcom/sun/tools/javac/util/MandatoryWarningHandler;", nullptr, $PRIVATE | $FINAL, $field(Preview, previewHandler)},
	{"forcePreview", "Z", nullptr, $PRIVATE | $FINAL, $field(Preview, forcePreview)},
	{"majorVersionToSource", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;Lcom/sun/tools/javac/code/Source;>;", $PRIVATE | $FINAL, $field(Preview, majorVersionToSource)},
	{"sourcesWithPreviewFeatures", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/tools/JavaFileObject;>;", $PRIVATE | $FINAL, $field(Preview, sourcesWithPreviewFeatures)},
	{"lint", "Lcom/sun/tools/javac/code/Lint;", nullptr, $PRIVATE | $FINAL, $field(Preview, lint)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $PRIVATE | $FINAL, $field(Preview, log)},
	{"source", "Lcom/sun/tools/javac/code/Source;", nullptr, $PRIVATE | $FINAL, $field(Preview, source)},
	{"previewKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/code/Preview;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Preview, previewKey)},
	{}
};

$MethodInfo _Preview_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, 0, $method(static_cast<void(Preview::*)($Context*)>(&Preview::init$))},
	{"checkSourceLevel", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Source$Feature;)V", nullptr, $PUBLIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"declaredUsingPreviewFeature", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PUBLIC},
	{"disabledError", "(Lcom/sun/tools/javac/code/Source$Feature;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC},
	{"disabledError", "(Ljavax/tools/JavaFileObject;I)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC},
	{"initMajorVersionToSourceMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/Integer;Lcom/sun/tools/javac/code/Source;>;", $PRIVATE, $method(static_cast<$Map*(Preview::*)()>(&Preview::initMajorVersionToSourceMap))},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/code/Preview;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Preview*(*)($Context*)>(&Preview::instance))},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{"isPreview", "(Lcom/sun/tools/javac/code/Source$Feature;)Z", nullptr, $PUBLIC},
	{"markUsesPreview", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PUBLIC},
	{"reportDeferredDiagnostics", "()V", nullptr, $PUBLIC},
	{"reportPreviewWarning", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic$Warning;)V", nullptr, $PUBLIC},
	{"usesPreview", "(Ljavax/tools/JavaFileObject;)Z", nullptr, $PUBLIC},
	{"warnPreview", "(ILcom/sun/tools/javac/code/Source$Feature;)V", nullptr, $PUBLIC},
	{"warnPreview", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Source$Feature;)V", nullptr, $PUBLIC},
	{"warnPreview", "(Ljavax/tools/JavaFileObject;I)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Preview_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Preview$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _Preview_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Preview",
	"java.lang.Object",
	nullptr,
	_Preview_FieldInfo_,
	_Preview_MethodInfo_,
	nullptr,
	nullptr,
	_Preview_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Preview$1"
};

$Object* allocate$Preview($Class* clazz) {
	return $of($alloc(Preview));
}

$Context$Key* Preview::previewKey = nullptr;

Preview* Preview::instance($Context* context) {
	$init(Preview);
	$var(Preview, instance, $cast(Preview, $nc(context)->get(Preview::previewKey)));
	if (instance == nullptr) {
		$assign(instance, $new(Preview, context));
	}
	return instance;
}

void Preview::init$($Context* context) {
	$set(this, sourcesWithPreviewFeatures, $new($HashSet));
	$nc(context)->put(Preview::previewKey, $of(this));
	$var($Options, options, $Options::instance(context));
	$init($Option);
	this->enabled = $nc(options)->isSet($Option::PREVIEW);
	$set(this, log, $Log::instance(context));
	$set(this, lint, $Lint::instance(context));
	$set(this, source, $Source::instance(context));
	$init($Lint$LintCategory);
	$set(this, previewHandler, $new($MandatoryWarningHandler, this->log, this->source, $nc(this->lint)->isEnabled($Lint$LintCategory::PREVIEW), true, "preview"_s, $Lint$LintCategory::PREVIEW));
	this->forcePreview = options->isSet("forcePreview"_s);
	$set(this, majorVersionToSource, initMajorVersionToSourceMap());
}

$Map* Preview::initMajorVersionToSourceMap() {
	$useLocalCurrentObjectStackCache();
	$var($Map, majorVersionToSource, $new($HashMap));
	{
		$var($TargetArray, arr$, $Target::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Target* t = arr$->get(i$);
			{
				int32_t major = $nc(t)->majorVersion;
				$Source* source = $Source::lookup(t->name$);
				if (source != nullptr) {
					majorVersionToSource->put($($Integer::valueOf(major)), source);
				}
			}
		}
	}
	return majorVersionToSource;
}

void Preview::warnPreview(int32_t pos, $Source$Feature* feature) {
	warnPreview(static_cast<$JCDiagnostic$DiagnosticPosition*>($$new($JCDiagnostic$SimpleDiagnosticPosition, pos)), feature);
}

void Preview::warnPreview($JCDiagnostic$DiagnosticPosition* pos, $Source$Feature* feature) {
	$useLocalCurrentObjectStackCache();
	$Assert::check(isEnabled());
	$Assert::check(isPreview(feature));
	$init($Lint$LintCategory);
	if (!$nc(this->lint)->isSuppressed($Lint$LintCategory::PREVIEW)) {
		$nc(this->sourcesWithPreviewFeatures)->add($($nc(this->log)->currentSourceFile()));
		$nc(this->previewHandler)->report(pos, $nc(feature)->isPlural() ? $($CompilerProperties$Warnings::PreviewFeatureUsePlural($($nc(feature)->nameFragment()))) : $($CompilerProperties$Warnings::PreviewFeatureUse($($nc(feature)->nameFragment()))));
	}
}

void Preview::warnPreview($JavaFileObject* classfile, int32_t majorVersion) {
	$useLocalCurrentObjectStackCache();
	$Assert::check(isEnabled());
	$init($Lint$LintCategory);
	if ($nc(this->lint)->isEnabled($Lint$LintCategory::PREVIEW)) {
		$nc(this->sourcesWithPreviewFeatures)->add($($nc(this->log)->currentSourceFile()));
		$nc(this->log)->mandatoryWarning($Lint$LintCategory::PREVIEW, nullptr, $($CompilerProperties$Warnings::PreviewFeatureUseClassfile(classfile, $nc(($cast($Source, $($nc(this->majorVersionToSource)->get($($Integer::valueOf(majorVersion)))))))->name$)));
	}
}

void Preview::markUsesPreview($JCDiagnostic$DiagnosticPosition* pos) {
	$nc(this->sourcesWithPreviewFeatures)->add($($nc(this->log)->currentSourceFile()));
}

void Preview::reportPreviewWarning($JCDiagnostic$DiagnosticPosition* pos, $JCDiagnostic$Warning* warnKey) {
	$nc(this->previewHandler)->report(pos, warnKey);
}

bool Preview::usesPreview($JavaFileObject* file) {
	return $nc(this->sourcesWithPreviewFeatures)->contains(file);
}

bool Preview::isEnabled() {
	return this->enabled;
}

bool Preview::isPreview($Source$Feature* feature) {
	$init($Preview$1);

	bool var$0 = false;
	switch ($nc($Preview$1::$SwitchMap$com$sun$tools$javac$code$Source$Feature)->get($nc((feature))->ordinal())) {
	case 1:
		{
			var$0 = true;
			break;
		}
	case 2:
		{
			var$0 = true;
			break;
		}
	default:
		{
			var$0 = this->forcePreview;
			break;
		}
	}
	return var$0;
}

$JCDiagnostic$Error* Preview::disabledError($Source$Feature* feature) {
	$useLocalCurrentObjectStackCache();
	$Assert::check(!isEnabled());
	return $nc(feature)->isPlural() ? $CompilerProperties$Errors::PreviewFeatureDisabledPlural($($nc(feature)->nameFragment())) : $CompilerProperties$Errors::PreviewFeatureDisabled($($nc(feature)->nameFragment()));
}

$JCDiagnostic$Error* Preview::disabledError($JavaFileObject* classfile, int32_t majorVersion) {
	$useLocalCurrentObjectStackCache();
	$Assert::check(!isEnabled());
	return $CompilerProperties$Errors::PreviewFeatureDisabledClassfile(classfile, $nc(($cast($Source, $($nc(this->majorVersionToSource)->get($($Integer::valueOf(majorVersion)))))))->name$);
}

bool Preview::declaredUsingPreviewFeature($Symbol* sym) {
	return false;
}

void Preview::reportDeferredDiagnostics() {
	$nc(this->previewHandler)->reportDeferredDiagnostic();
}

void Preview::clear() {
	$nc(this->previewHandler)->clear();
}

void Preview::checkSourceLevel($JCDiagnostic$DiagnosticPosition* pos, $Source$Feature* feature) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = isPreview(feature);
	if (var$0 && !isEnabled()) {
		$init($JCDiagnostic$DiagnosticFlag);
		$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::SOURCE_LEVEL, pos, $(disabledError(feature)));
	} else {
		if (!$nc(feature)->allowedInSource(this->source)) {
			$init($JCDiagnostic$DiagnosticFlag);
			$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::SOURCE_LEVEL, pos, $(feature->error(this->source->name$)));
		}
		bool var$1 = isEnabled();
		if (var$1 && isPreview(feature)) {
			warnPreview(pos, feature);
		}
	}
}

void clinit$Preview($Class* class$) {
	$assignStatic(Preview::previewKey, $new($Context$Key));
}

Preview::Preview() {
}

$Class* Preview::load$($String* name, bool initialize) {
	$loadClass(Preview, name, initialize, &_Preview_ClassInfo_, clinit$Preview, allocate$Preview);
	return class$;
}

$Class* Preview::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com