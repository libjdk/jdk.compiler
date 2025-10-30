#include <com/sun/tools/javac/comp/Analyzer$AnalyzerMode.h>

#include <com/sun/tools/javac/code/Source$Feature.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/comp/Analyzer.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/lang/Enum.h>
#include <java/util/EnumSet.h>
#include <jcpp.h>

#undef DIAMOND
#undef GRAPH_INFERENCE
#undef LAMBDA
#undef LOCAL
#undef LOCAL_VARIABLE_TYPE_INFERENCE
#undef METHOD

using $Analyzer$AnalyzerModeArray = $Array<::com::sun::tools::javac::comp::Analyzer$AnalyzerMode>;
using $Source = ::com::sun::tools::javac::code::Source;
using $Source$Feature = ::com::sun::tools::javac::code::Source$Feature;
using $Analyzer = ::com::sun::tools::javac::comp::Analyzer;
using $List = ::com::sun::tools::javac::util::List;
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
				namespace comp {

$FieldInfo _Analyzer$AnalyzerMode_FieldInfo_[] = {
	{"DIAMOND", "Lcom/sun/tools/javac/comp/Analyzer$AnalyzerMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Analyzer$AnalyzerMode, DIAMOND)},
	{"LAMBDA", "Lcom/sun/tools/javac/comp/Analyzer$AnalyzerMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Analyzer$AnalyzerMode, LAMBDA)},
	{"METHOD", "Lcom/sun/tools/javac/comp/Analyzer$AnalyzerMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Analyzer$AnalyzerMode, METHOD)},
	{"LOCAL", "Lcom/sun/tools/javac/comp/Analyzer$AnalyzerMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Analyzer$AnalyzerMode, LOCAL)},
	{"$VALUES", "[Lcom/sun/tools/javac/comp/Analyzer$AnalyzerMode;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Analyzer$AnalyzerMode, $VALUES)},
	{"opt", "Ljava/lang/String;", nullptr, $FINAL, $field(Analyzer$AnalyzerMode, opt)},
	{"feature", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $FINAL, $field(Analyzer$AnalyzerMode, feature)},
	{}
};

$MethodInfo _Analyzer$AnalyzerMode_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/comp/Analyzer$AnalyzerMode;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Analyzer$AnalyzerModeArray*(*)()>(&Analyzer$AnalyzerMode::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Lcom/sun/tools/javac/code/Source$Feature;)V", "(Ljava/lang/String;Lcom/sun/tools/javac/code/Source$Feature;)V", $PRIVATE, $method(static_cast<void(Analyzer$AnalyzerMode::*)($String*,int32_t,$String*,$Source$Feature*)>(&Analyzer$AnalyzerMode::init$))},
	{"getAnalyzerModes", "(Ljava/lang/String;Lcom/sun/tools/javac/code/Source;)Ljava/util/EnumSet;", "(Ljava/lang/String;Lcom/sun/tools/javac/code/Source;)Ljava/util/EnumSet<Lcom/sun/tools/javac/comp/Analyzer$AnalyzerMode;>;", $STATIC, $method(static_cast<$EnumSet*(*)($String*,$Source*)>(&Analyzer$AnalyzerMode::getAnalyzerModes))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/comp/Analyzer$AnalyzerMode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Analyzer$AnalyzerMode*(*)($String*)>(&Analyzer$AnalyzerMode::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/comp/Analyzer$AnalyzerMode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Analyzer$AnalyzerModeArray*(*)()>(&Analyzer$AnalyzerMode::values))},
	{}
};

$InnerClassInfo _Analyzer$AnalyzerMode_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Analyzer$AnalyzerMode", "com.sun.tools.javac.comp.Analyzer", "AnalyzerMode", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Analyzer$AnalyzerMode_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.comp.Analyzer$AnalyzerMode",
	"java.lang.Enum",
	nullptr,
	_Analyzer$AnalyzerMode_FieldInfo_,
	_Analyzer$AnalyzerMode_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/comp/Analyzer$AnalyzerMode;>;",
	nullptr,
	_Analyzer$AnalyzerMode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Analyzer"
};

$Object* allocate$Analyzer$AnalyzerMode($Class* clazz) {
	return $of($alloc(Analyzer$AnalyzerMode));
}

Analyzer$AnalyzerMode* Analyzer$AnalyzerMode::DIAMOND = nullptr;
Analyzer$AnalyzerMode* Analyzer$AnalyzerMode::LAMBDA = nullptr;
Analyzer$AnalyzerMode* Analyzer$AnalyzerMode::METHOD = nullptr;
Analyzer$AnalyzerMode* Analyzer$AnalyzerMode::LOCAL = nullptr;
$Analyzer$AnalyzerModeArray* Analyzer$AnalyzerMode::$VALUES = nullptr;

$Analyzer$AnalyzerModeArray* Analyzer$AnalyzerMode::$values() {
	$init(Analyzer$AnalyzerMode);
	return $new($Analyzer$AnalyzerModeArray, {
		Analyzer$AnalyzerMode::DIAMOND,
		Analyzer$AnalyzerMode::LAMBDA,
		Analyzer$AnalyzerMode::METHOD,
		Analyzer$AnalyzerMode::LOCAL
	});
}

$Analyzer$AnalyzerModeArray* Analyzer$AnalyzerMode::values() {
	$init(Analyzer$AnalyzerMode);
	return $cast($Analyzer$AnalyzerModeArray, Analyzer$AnalyzerMode::$VALUES->clone());
}

Analyzer$AnalyzerMode* Analyzer$AnalyzerMode::valueOf($String* name) {
	$init(Analyzer$AnalyzerMode);
	return $cast(Analyzer$AnalyzerMode, $Enum::valueOf(Analyzer$AnalyzerMode::class$, name));
}

void Analyzer$AnalyzerMode::init$($String* $enum$name, int32_t $enum$ordinal, $String* opt, $Source$Feature* feature) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, opt, opt);
	$set(this, feature, feature);
}

$EnumSet* Analyzer$AnalyzerMode::getAnalyzerModes($String* opt, $Source* source) {
	$init(Analyzer$AnalyzerMode);
	$useLocalCurrentObjectStackCache();
	if (opt == nullptr) {
		return $EnumSet::noneOf(Analyzer$AnalyzerMode::class$);
	}
	$var($List, modes, $List::from($($nc(opt)->split(","_s))));
	$var($EnumSet, res, $EnumSet::noneOf(Analyzer$AnalyzerMode::class$));
	if ($nc(modes)->contains("all"_s)) {
		$assign(res, $EnumSet::allOf(Analyzer$AnalyzerMode::class$));
	}
	{
		$var($Analyzer$AnalyzerModeArray, arr$, values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			Analyzer$AnalyzerMode* mode = arr$->get(i$);
			{
				bool var$0 = $nc(modes)->contains($$str({"-"_s, $nc(mode)->opt}));
				if (var$0 || !$nc(mode)->feature->allowedInSource(source)) {
					$nc(res)->remove(mode);
				} else if ($nc(modes)->contains(mode->opt)) {
					$nc(res)->add(mode);
				}
			}
		}
	}
	return res;
}

void clinit$Analyzer$AnalyzerMode($Class* class$) {
	$init($Source$Feature);
	$assignStatic(Analyzer$AnalyzerMode::DIAMOND, $new(Analyzer$AnalyzerMode, "DIAMOND"_s, 0, "diamond"_s, $Source$Feature::DIAMOND));
	$assignStatic(Analyzer$AnalyzerMode::LAMBDA, $new(Analyzer$AnalyzerMode, "LAMBDA"_s, 1, "lambda"_s, $Source$Feature::LAMBDA));
	$assignStatic(Analyzer$AnalyzerMode::METHOD, $new(Analyzer$AnalyzerMode, "METHOD"_s, 2, "method"_s, $Source$Feature::GRAPH_INFERENCE));
	$assignStatic(Analyzer$AnalyzerMode::LOCAL, $new(Analyzer$AnalyzerMode, "LOCAL"_s, 3, "local"_s, $Source$Feature::LOCAL_VARIABLE_TYPE_INFERENCE));
	$assignStatic(Analyzer$AnalyzerMode::$VALUES, Analyzer$AnalyzerMode::$values());
}

Analyzer$AnalyzerMode::Analyzer$AnalyzerMode() {
}

$Class* Analyzer$AnalyzerMode::load$($String* name, bool initialize) {
	$loadClass(Analyzer$AnalyzerMode, name, initialize, &_Analyzer$AnalyzerMode_ClassInfo_, clinit$Analyzer$AnalyzerMode, allocate$Analyzer$AnalyzerMode);
	return class$;
}

$Class* Analyzer$AnalyzerMode::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com