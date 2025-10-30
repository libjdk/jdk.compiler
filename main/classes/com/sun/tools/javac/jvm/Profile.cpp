#include <com/sun/tools/javac/jvm/Profile.h>

#include <com/sun/tools/javac/jvm/Profile$1.h>
#include <com/sun/tools/javac/jvm/Target.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/Options.h>
#include <java/lang/Enum.h>
#include <java/util/AbstractSet.h>
#include <java/util/EnumSet.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef COMPACT1
#undef COMPACT2
#undef COMPACT3
#undef DEFAULT
#undef JDK1_8
#undef MAX_VALUE
#undef PROFILE

using $ProfileArray = $Array<::com::sun::tools::javac::jvm::Profile>;
using $TargetArray = $Array<::com::sun::tools::javac::jvm::Target>;
using $EnumArray = $Array<::java::lang::Enum>;
using $Profile$1 = ::com::sun::tools::javac::jvm::Profile$1;
using $Target = ::com::sun::tools::javac::jvm::Target;
using $Option = ::com::sun::tools::javac::main::Option;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $Options = ::com::sun::tools::javac::util::Options;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $EnumSet = ::java::util::EnumSet;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _Profile_FieldInfo_[] = {
	{"COMPACT1", "Lcom/sun/tools/javac/jvm/Profile;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Profile, COMPACT1)},
	{"COMPACT2", "Lcom/sun/tools/javac/jvm/Profile;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Profile, COMPACT2)},
	{"COMPACT3", "Lcom/sun/tools/javac/jvm/Profile;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Profile, COMPACT3)},
	{"DEFAULT", "Lcom/sun/tools/javac/jvm/Profile;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Profile, DEFAULT)},
	{"$VALUES", "[Lcom/sun/tools/javac/jvm/Profile;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Profile, $VALUES)},
	{"profileKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/jvm/Profile;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Profile, profileKey)},
	{"name", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(Profile, name$)},
	{"value", "I", nullptr, $PUBLIC | $FINAL, $field(Profile, value)},
	{"targets", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/jvm/Target;>;", $FINAL, $field(Profile, targets)},
	{}
};

$MethodInfo _Profile_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/jvm/Profile;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ProfileArray*(*)()>(&Profile::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Profile::*)($String*,int32_t)>(&Profile::init$))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;ILcom/sun/tools/javac/jvm/Target;[Lcom/sun/tools/javac/jvm/Target;)V", "(Ljava/lang/String;ILcom/sun/tools/javac/jvm/Target;[Lcom/sun/tools/javac/jvm/Target;)V", $PRIVATE | $TRANSIENT, $method(static_cast<void(Profile::*)($String*,int32_t,$String*,int32_t,$Target*,$TargetArray*)>(&Profile::init$))},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/jvm/Profile;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Profile*(*)($Context*)>(&Profile::instance))},
	{"isValid", "(Lcom/sun/tools/javac/jvm/Target;)Z", nullptr, $PUBLIC},
	{"lookup", "(Ljava/lang/String;)Lcom/sun/tools/javac/jvm/Profile;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Profile*(*)($String*)>(&Profile::lookup))},
	{"lookup", "(I)Lcom/sun/tools/javac/jvm/Profile;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Profile*(*)(int32_t)>(&Profile::lookup))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/jvm/Profile;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Profile*(*)($String*)>(&Profile::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/jvm/Profile;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ProfileArray*(*)()>(&Profile::values))},
	{}
};

$InnerClassInfo _Profile_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.Profile$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Profile_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.jvm.Profile",
	"java.lang.Enum",
	nullptr,
	_Profile_FieldInfo_,
	_Profile_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/jvm/Profile;>;",
	nullptr,
	_Profile_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.Profile$1"
};

$Object* allocate$Profile($Class* clazz) {
	return $of($alloc(Profile));
}

Profile* Profile::COMPACT1 = nullptr;
Profile* Profile::COMPACT2 = nullptr;
Profile* Profile::COMPACT3 = nullptr;
Profile* Profile::DEFAULT = nullptr;
$ProfileArray* Profile::$VALUES = nullptr;
$Context$Key* Profile::profileKey = nullptr;

$ProfileArray* Profile::$values() {
	$init(Profile);
	return $new($ProfileArray, {
		Profile::COMPACT1,
		Profile::COMPACT2,
		Profile::COMPACT3,
		Profile::DEFAULT
	});
}

$ProfileArray* Profile::values() {
	$init(Profile);
	return $cast($ProfileArray, Profile::$VALUES->clone());
}

Profile* Profile::valueOf($String* name) {
	$init(Profile);
	return $cast(Profile, $Enum::valueOf(Profile::class$, name));
}

Profile* Profile::instance($Context* context) {
	$init(Profile);
	$useLocalCurrentObjectStackCache();
	Profile* instance = $cast(Profile, $nc(context)->get(Profile::profileKey));
	if (instance == nullptr) {
		$var($Options, options, $Options::instance(context));
		$init($Option);
		$var($String, profileString, $nc(options)->get($Option::PROFILE));
		if (profileString != nullptr) {
			instance = lookup(profileString);
		}
		if (instance == nullptr) {
			instance = Profile::DEFAULT;
		}
		context->put(Profile::profileKey, $of(instance));
	}
	return instance;
}

void Profile::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, name$, nullptr);
	this->value = $Integer::MAX_VALUE;
	$set(this, targets, nullptr);
}

void Profile::init$($String* $enum$name, int32_t $enum$ordinal, $String* name, int32_t value, $Target* t, $TargetArray* targets) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, name$, name);
	this->value = value;
	$set(this, targets, $EnumSet::of(static_cast<$Enum*>(t), $fcast($EnumArray, targets)));
}

Profile* Profile::lookup($String* name) {
	$init(Profile);
	{
		$var($ProfileArray, arr$, values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			Profile* p = arr$->get(i$);
			{
				if ($nc(name)->equals($nc(p)->name$)) {
					return p;
				}
			}
		}
	}
	return nullptr;
}

Profile* Profile::lookup(int32_t value) {
	$init(Profile);
	{
		$var($ProfileArray, arr$, values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			Profile* p = arr$->get(i$);
			{
				if (value == $nc(p)->value) {
					return p;
				}
			}
		}
	}
	return nullptr;
}

bool Profile::isValid($Target* t) {
	return $nc(this->targets)->contains(t);
}

void clinit$Profile($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$init($Target);
	$assignStatic(Profile::COMPACT1, $new(Profile, "COMPACT1"_s, 0, "compact1"_s, 1, $Target::JDK1_8, $$new($TargetArray, 0)));
	$assignStatic(Profile::COMPACT2, $new(Profile, "COMPACT2"_s, 1, "compact2"_s, 2, $Target::JDK1_8, $$new($TargetArray, 0)));
	$assignStatic(Profile::COMPACT3, $new(Profile, "COMPACT3"_s, 2, "compact3"_s, 3, $Target::JDK1_8, $$new($TargetArray, 0)));
	$assignStatic(Profile::DEFAULT, $new($Profile$1, "DEFAULT"_s, 3));
	$assignStatic(Profile::$VALUES, Profile::$values());
	$assignStatic(Profile::profileKey, $new($Context$Key));
}

Profile::Profile() {
}

$Class* Profile::load$($String* name, bool initialize) {
	$loadClass(Profile, name, initialize, &_Profile_ClassInfo_, clinit$Profile, allocate$Profile);
	return class$;
}

$Class* Profile::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com