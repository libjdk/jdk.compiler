#include <com/sun/tools/javac/code/Attribute$RetentionPolicy.h>

#include <com/sun/tools/javac/code/Attribute.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef CLASS
#undef RUNTIME
#undef SOURCE

using $Attribute$RetentionPolicyArray = $Array<::com::sun::tools::javac::code::Attribute$RetentionPolicy>;
using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Attribute$RetentionPolicy_FieldInfo_[] = {
	{"SOURCE", "Lcom/sun/tools/javac/code/Attribute$RetentionPolicy;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Attribute$RetentionPolicy, SOURCE)},
	{"CLASS", "Lcom/sun/tools/javac/code/Attribute$RetentionPolicy;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Attribute$RetentionPolicy, CLASS)},
	{"RUNTIME", "Lcom/sun/tools/javac/code/Attribute$RetentionPolicy;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Attribute$RetentionPolicy, RUNTIME)},
	{"$VALUES", "[Lcom/sun/tools/javac/code/Attribute$RetentionPolicy;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Attribute$RetentionPolicy, $VALUES)},
	{}
};

$MethodInfo _Attribute$RetentionPolicy_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/code/Attribute$RetentionPolicy;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Attribute$RetentionPolicyArray*(*)()>(&Attribute$RetentionPolicy::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Attribute$RetentionPolicy::*)($String*,int32_t)>(&Attribute$RetentionPolicy::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/code/Attribute$RetentionPolicy;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Attribute$RetentionPolicy*(*)($String*)>(&Attribute$RetentionPolicy::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/code/Attribute$RetentionPolicy;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Attribute$RetentionPolicyArray*(*)()>(&Attribute$RetentionPolicy::values))},
	{}
};

$InnerClassInfo _Attribute$RetentionPolicy_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Attribute$RetentionPolicy", "com.sun.tools.javac.code.Attribute", "RetentionPolicy", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Attribute$RetentionPolicy_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.code.Attribute$RetentionPolicy",
	"java.lang.Enum",
	nullptr,
	_Attribute$RetentionPolicy_FieldInfo_,
	_Attribute$RetentionPolicy_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/code/Attribute$RetentionPolicy;>;",
	nullptr,
	_Attribute$RetentionPolicy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Attribute"
};

$Object* allocate$Attribute$RetentionPolicy($Class* clazz) {
	return $of($alloc(Attribute$RetentionPolicy));
}

Attribute$RetentionPolicy* Attribute$RetentionPolicy::SOURCE = nullptr;
Attribute$RetentionPolicy* Attribute$RetentionPolicy::CLASS = nullptr;
Attribute$RetentionPolicy* Attribute$RetentionPolicy::RUNTIME = nullptr;
$Attribute$RetentionPolicyArray* Attribute$RetentionPolicy::$VALUES = nullptr;

$Attribute$RetentionPolicyArray* Attribute$RetentionPolicy::$values() {
	$init(Attribute$RetentionPolicy);
	return $new($Attribute$RetentionPolicyArray, {
		Attribute$RetentionPolicy::SOURCE,
		Attribute$RetentionPolicy::CLASS,
		Attribute$RetentionPolicy::RUNTIME
	});
}

$Attribute$RetentionPolicyArray* Attribute$RetentionPolicy::values() {
	$init(Attribute$RetentionPolicy);
	return $cast($Attribute$RetentionPolicyArray, Attribute$RetentionPolicy::$VALUES->clone());
}

Attribute$RetentionPolicy* Attribute$RetentionPolicy::valueOf($String* name) {
	$init(Attribute$RetentionPolicy);
	return $cast(Attribute$RetentionPolicy, $Enum::valueOf(Attribute$RetentionPolicy::class$, name));
}

void Attribute$RetentionPolicy::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Attribute$RetentionPolicy($Class* class$) {
	$assignStatic(Attribute$RetentionPolicy::SOURCE, $new(Attribute$RetentionPolicy, "SOURCE"_s, 0));
	$assignStatic(Attribute$RetentionPolicy::CLASS, $new(Attribute$RetentionPolicy, "CLASS"_s, 1));
	$assignStatic(Attribute$RetentionPolicy::RUNTIME, $new(Attribute$RetentionPolicy, "RUNTIME"_s, 2));
	$assignStatic(Attribute$RetentionPolicy::$VALUES, Attribute$RetentionPolicy::$values());
}

Attribute$RetentionPolicy::Attribute$RetentionPolicy() {
}

$Class* Attribute$RetentionPolicy::load$($String* name, bool initialize) {
	$loadClass(Attribute$RetentionPolicy, name, initialize, &_Attribute$RetentionPolicy_ClassInfo_, clinit$Attribute$RetentionPolicy, allocate$Attribute$RetentionPolicy);
	return class$;
}

$Class* Attribute$RetentionPolicy::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com