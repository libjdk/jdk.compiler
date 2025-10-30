#include <com/sun/tools/javac/code/Source.h>

#include <com/sun/tools/javac/code/Source$1.h>
#include <com/sun/tools/javac/jvm/Target.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/Options.h>
#include <java/lang/Enum.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <javax/lang/model/SourceVersion.h>
#include <jcpp.h>

#undef DEFAULT
#undef JDK10
#undef JDK11
#undef JDK12
#undef JDK13
#undef JDK14
#undef JDK15
#undef JDK16
#undef JDK17
#undef JDK1_1
#undef JDK1_2
#undef JDK1_3
#undef JDK1_4
#undef JDK1_5
#undef JDK1_6
#undef JDK1_7
#undef JDK1_8
#undef JDK1_9
#undef JDK5
#undef JDK6
#undef JDK7
#undef JDK8
#undef JDK9
#undef MAX
#undef MIN
#undef RELEASE_10
#undef RELEASE_11
#undef RELEASE_12
#undef RELEASE_13
#undef RELEASE_14
#undef RELEASE_15
#undef RELEASE_16
#undef RELEASE_17
#undef RELEASE_2
#undef RELEASE_3
#undef RELEASE_4
#undef RELEASE_5
#undef RELEASE_6
#undef RELEASE_7
#undef RELEASE_8
#undef RELEASE_9
#undef SOURCE

using $SourceArray = $Array<::com::sun::tools::javac::code::Source>;
using $Source$1 = ::com::sun::tools::javac::code::Source$1;
using $Target = ::com::sun::tools::javac::jvm::Target;
using $Option = ::com::sun::tools::javac::main::Option;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $Options = ::com::sun::tools::javac::util::Options;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $SourceVersion = ::javax::lang::model::SourceVersion;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Source_FieldInfo_[] = {
	{"JDK1_2", "Lcom/sun/tools/javac/code/Source;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source, JDK1_2)},
	{"JDK1_3", "Lcom/sun/tools/javac/code/Source;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source, JDK1_3)},
	{"JDK1_4", "Lcom/sun/tools/javac/code/Source;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source, JDK1_4)},
	{"JDK5", "Lcom/sun/tools/javac/code/Source;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source, JDK5)},
	{"JDK6", "Lcom/sun/tools/javac/code/Source;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source, JDK6)},
	{"JDK7", "Lcom/sun/tools/javac/code/Source;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source, JDK7)},
	{"JDK8", "Lcom/sun/tools/javac/code/Source;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source, JDK8)},
	{"JDK9", "Lcom/sun/tools/javac/code/Source;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source, JDK9)},
	{"JDK10", "Lcom/sun/tools/javac/code/Source;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source, JDK10)},
	{"JDK11", "Lcom/sun/tools/javac/code/Source;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source, JDK11)},
	{"JDK12", "Lcom/sun/tools/javac/code/Source;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source, JDK12)},
	{"JDK13", "Lcom/sun/tools/javac/code/Source;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source, JDK13)},
	{"JDK14", "Lcom/sun/tools/javac/code/Source;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source, JDK14)},
	{"JDK15", "Lcom/sun/tools/javac/code/Source;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source, JDK15)},
	{"JDK16", "Lcom/sun/tools/javac/code/Source;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source, JDK16)},
	{"JDK17", "Lcom/sun/tools/javac/code/Source;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source, JDK17)},
	{"$VALUES", "[Lcom/sun/tools/javac/code/Source;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Source, $VALUES)},
	{"sourceKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/code/Source;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Source, sourceKey)},
	{"name", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(Source, name$)},
	{"tab", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/javac/code/Source;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Source, tab)},
	{"MIN", "Lcom/sun/tools/javac/code/Source;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Source, MIN)},
	{"MAX", "Lcom/sun/tools/javac/code/Source;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Source, MAX)},
	{"DEFAULT", "Lcom/sun/tools/javac/code/Source;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Source, DEFAULT)},
	{}
};

$MethodInfo _Source_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/code/Source;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$SourceArray*(*)()>(&Source::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "(Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(Source::*)($String*,int32_t,$String*)>(&Source::init$))},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/code/Source;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Source*(*)($Context*)>(&Source::instance))},
	{"isSupported", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Source::*)()>(&Source::isSupported))},
	{"lookup", "(Ljava/lang/String;)Lcom/sun/tools/javac/code/Source;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Source*(*)($String*)>(&Source::lookup))},
	{"requiredTarget", "()Lcom/sun/tools/javac/jvm/Target;", nullptr, $PUBLIC, $method(static_cast<$Target*(Source::*)()>(&Source::requiredTarget))},
	{"toSourceVersion", "(Lcom/sun/tools/javac/code/Source;)Ljavax/lang/model/SourceVersion;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SourceVersion*(*)(Source*)>(&Source::toSourceVersion))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/code/Source;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Source*(*)($String*)>(&Source::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/code/Source;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SourceArray*(*)()>(&Source::values))},
	{}
};

$InnerClassInfo _Source_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Source$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.code.Source$Feature", "com.sun.tools.javac.code.Source", "Feature", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Source_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.code.Source",
	"java.lang.Enum",
	nullptr,
	_Source_FieldInfo_,
	_Source_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/code/Source;>;",
	nullptr,
	_Source_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Source$1,com.sun.tools.javac.code.Source$Feature,com.sun.tools.javac.code.Source$Feature$DiagKind"
};

$Object* allocate$Source($Class* clazz) {
	return $of($alloc(Source));
}

Source* Source::JDK1_2 = nullptr;
Source* Source::JDK1_3 = nullptr;
Source* Source::JDK1_4 = nullptr;
Source* Source::JDK5 = nullptr;
Source* Source::JDK6 = nullptr;
Source* Source::JDK7 = nullptr;
Source* Source::JDK8 = nullptr;
Source* Source::JDK9 = nullptr;
Source* Source::JDK10 = nullptr;
Source* Source::JDK11 = nullptr;
Source* Source::JDK12 = nullptr;
Source* Source::JDK13 = nullptr;
Source* Source::JDK14 = nullptr;
Source* Source::JDK15 = nullptr;
Source* Source::JDK16 = nullptr;
Source* Source::JDK17 = nullptr;
$SourceArray* Source::$VALUES = nullptr;
$Context$Key* Source::sourceKey = nullptr;
$Map* Source::tab = nullptr;
Source* Source::MIN = nullptr;
Source* Source::MAX = nullptr;
Source* Source::DEFAULT = nullptr;

$SourceArray* Source::$values() {
	$init(Source);
	return $new($SourceArray, {
		Source::JDK1_2,
		Source::JDK1_3,
		Source::JDK1_4,
		Source::JDK5,
		Source::JDK6,
		Source::JDK7,
		Source::JDK8,
		Source::JDK9,
		Source::JDK10,
		Source::JDK11,
		Source::JDK12,
		Source::JDK13,
		Source::JDK14,
		Source::JDK15,
		Source::JDK16,
		Source::JDK17
	});
}

$SourceArray* Source::values() {
	$init(Source);
	return $cast($SourceArray, Source::$VALUES->clone());
}

Source* Source::valueOf($String* name) {
	$init(Source);
	return $cast(Source, $Enum::valueOf(Source::class$, name));
}

Source* Source::instance($Context* context) {
	$init(Source);
	$useLocalCurrentObjectStackCache();
	Source* instance = $cast(Source, $nc(context)->get(Source::sourceKey));
	if (instance == nullptr) {
		$var($Options, options, $Options::instance(context));
		$init($Option);
		$var($String, sourceString, $nc(options)->get($Option::SOURCE));
		if (sourceString != nullptr) {
			instance = lookup(sourceString);
		}
		if (instance == nullptr) {
			instance = Source::DEFAULT;
		}
		context->put(Source::sourceKey, $of(instance));
	}
	return instance;
}

void Source::init$($String* $enum$name, int32_t $enum$ordinal, $String* name) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, name$, name);
}

Source* Source::lookup($String* name) {
	$init(Source);
	return $cast(Source, $nc(Source::tab)->get(name));
}

bool Source::isSupported() {
	return this->compareTo(static_cast<$Enum*>(Source::MIN)) >= 0;
}

$Target* Source::requiredTarget() {
	$init($Source$1);

	$var($Target, var$0, nullptr)
	switch ($nc($Source$1::$SwitchMap$com$sun$tools$javac$code$Source)->get((this)->ordinal())) {
	case 1:
		{
			$init($Target);
			$assign(var$0, $Target::JDK1_17);
			break;
		}
	case 2:
		{
			$init($Target);
			$assign(var$0, $Target::JDK1_16);
			break;
		}
	case 3:
		{
			$init($Target);
			$assign(var$0, $Target::JDK1_15);
			break;
		}
	case 4:
		{
			$init($Target);
			$assign(var$0, $Target::JDK1_14);
			break;
		}
	case 5:
		{
			$init($Target);
			$assign(var$0, $Target::JDK1_13);
			break;
		}
	case 6:
		{
			$init($Target);
			$assign(var$0, $Target::JDK1_12);
			break;
		}
	case 7:
		{
			$init($Target);
			$assign(var$0, $Target::JDK1_11);
			break;
		}
	case 8:
		{
			$init($Target);
			$assign(var$0, $Target::JDK1_10);
			break;
		}
	case 9:
		{
			$init($Target);
			$assign(var$0, $Target::JDK1_9);
			break;
		}
	case 10:
		{
			$init($Target);
			$assign(var$0, $Target::JDK1_8);
			break;
		}
	case 11:
		{
			$init($Target);
			$assign(var$0, $Target::JDK1_7);
			break;
		}
	case 12:
		{
			$init($Target);
			$assign(var$0, $Target::JDK1_6);
			break;
		}
	case 13:
		{
			$init($Target);
			$assign(var$0, $Target::JDK1_5);
			break;
		}
	case 14:
		{
			$init($Target);
			$assign(var$0, $Target::JDK1_4);
			break;
		}
	default:
		{
			$init($Target);
			$assign(var$0, $Target::JDK1_1);
			break;
		}
	}
	return var$0;
}

$SourceVersion* Source::toSourceVersion(Source* source) {
	$init(Source);
	$init($Source$1);

	$var($SourceVersion, var$0, nullptr)
	switch ($nc($Source$1::$SwitchMap$com$sun$tools$javac$code$Source)->get($nc((source))->ordinal())) {
	case 15:
		{
			$init($SourceVersion);
			$assign(var$0, $SourceVersion::RELEASE_2);
			break;
		}
	case 16:
		{
			$init($SourceVersion);
			$assign(var$0, $SourceVersion::RELEASE_3);
			break;
		}
	case 14:
		{
			$init($SourceVersion);
			$assign(var$0, $SourceVersion::RELEASE_4);
			break;
		}
	case 13:
		{
			$init($SourceVersion);
			$assign(var$0, $SourceVersion::RELEASE_5);
			break;
		}
	case 12:
		{
			$init($SourceVersion);
			$assign(var$0, $SourceVersion::RELEASE_6);
			break;
		}
	case 11:
		{
			$init($SourceVersion);
			$assign(var$0, $SourceVersion::RELEASE_7);
			break;
		}
	case 10:
		{
			$init($SourceVersion);
			$assign(var$0, $SourceVersion::RELEASE_8);
			break;
		}
	case 9:
		{
			$init($SourceVersion);
			$assign(var$0, $SourceVersion::RELEASE_9);
			break;
		}
	case 8:
		{
			$init($SourceVersion);
			$assign(var$0, $SourceVersion::RELEASE_10);
			break;
		}
	case 7:
		{
			$init($SourceVersion);
			$assign(var$0, $SourceVersion::RELEASE_11);
			break;
		}
	case 6:
		{
			$init($SourceVersion);
			$assign(var$0, $SourceVersion::RELEASE_12);
			break;
		}
	case 5:
		{
			$init($SourceVersion);
			$assign(var$0, $SourceVersion::RELEASE_13);
			break;
		}
	case 4:
		{
			$init($SourceVersion);
			$assign(var$0, $SourceVersion::RELEASE_14);
			break;
		}
	case 3:
		{
			$init($SourceVersion);
			$assign(var$0, $SourceVersion::RELEASE_15);
			break;
		}
	case 2:
		{
			$init($SourceVersion);
			$assign(var$0, $SourceVersion::RELEASE_16);
			break;
		}
	case 1:
		{
			$init($SourceVersion);
			$assign(var$0, $SourceVersion::RELEASE_17);
			break;
		}
	default:
		{
			$assign(var$0, nullptr);
			break;
		}
	}
	return var$0;
}

void clinit$Source($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Source::JDK1_2, $new(Source, "JDK1_2"_s, 0, "1.2"_s));
	$assignStatic(Source::JDK1_3, $new(Source, "JDK1_3"_s, 1, "1.3"_s));
	$assignStatic(Source::JDK1_4, $new(Source, "JDK1_4"_s, 2, "1.4"_s));
	$assignStatic(Source::JDK5, $new(Source, "JDK5"_s, 3, "5"_s));
	$assignStatic(Source::JDK6, $new(Source, "JDK6"_s, 4, "6"_s));
	$assignStatic(Source::JDK7, $new(Source, "JDK7"_s, 5, "7"_s));
	$assignStatic(Source::JDK8, $new(Source, "JDK8"_s, 6, "8"_s));
	$assignStatic(Source::JDK9, $new(Source, "JDK9"_s, 7, "9"_s));
	$assignStatic(Source::JDK10, $new(Source, "JDK10"_s, 8, "10"_s));
	$assignStatic(Source::JDK11, $new(Source, "JDK11"_s, 9, "11"_s));
	$assignStatic(Source::JDK12, $new(Source, "JDK12"_s, 10, "12"_s));
	$assignStatic(Source::JDK13, $new(Source, "JDK13"_s, 11, "13"_s));
	$assignStatic(Source::JDK14, $new(Source, "JDK14"_s, 12, "14"_s));
	$assignStatic(Source::JDK15, $new(Source, "JDK15"_s, 13, "15"_s));
	$assignStatic(Source::JDK16, $new(Source, "JDK16"_s, 14, "16"_s));
	$assignStatic(Source::JDK17, $new(Source, "JDK17"_s, 15, "17"_s));
	$assignStatic(Source::$VALUES, Source::$values());
	$assignStatic(Source::sourceKey, $new($Context$Key));
	$assignStatic(Source::tab, $new($HashMap));
	{
		{
			$var($SourceArray, arr$, Source::values());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				Source* s = arr$->get(i$);
				{
					$nc(Source::tab)->put($nc(s)->name$, s);
				}
			}
		}
		$nc(Source::tab)->put("1.5"_s, Source::JDK5);
		$nc(Source::tab)->put("1.6"_s, Source::JDK6);
		$nc(Source::tab)->put("1.7"_s, Source::JDK7);
		$nc(Source::tab)->put("1.8"_s, Source::JDK8);
		$nc(Source::tab)->put("1.9"_s, Source::JDK9);
		$nc(Source::tab)->put("1.10"_s, Source::JDK10);
	}
	$assignStatic(Source::MIN, Source::JDK7);
	$assignStatic(Source::MAX, $nc($(Source::values()))->get($nc($(Source::values()))->length - 1));
	$assignStatic(Source::DEFAULT, Source::MAX);
}

Source::Source() {
}

$Class* Source::load$($String* name, bool initialize) {
	$loadClass(Source, name, initialize, &_Source_ClassInfo_, clinit$Source, allocate$Source);
	return class$;
}

$Class* Source::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com