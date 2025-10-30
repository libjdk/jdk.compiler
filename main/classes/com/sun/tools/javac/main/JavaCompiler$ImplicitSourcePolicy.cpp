#include <com/sun/tools/javac/main/JavaCompiler$ImplicitSourcePolicy.h>

#include <com/sun/tools/javac/main/JavaCompiler.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef CLASS
#undef NONE
#undef UNSET

using $JavaCompiler$ImplicitSourcePolicyArray = $Array<::com::sun::tools::javac::main::JavaCompiler$ImplicitSourcePolicy>;
using $JavaCompiler = ::com::sun::tools::javac::main::JavaCompiler;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

$FieldInfo _JavaCompiler$ImplicitSourcePolicy_FieldInfo_[] = {
	{"NONE", "Lcom/sun/tools/javac/main/JavaCompiler$ImplicitSourcePolicy;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavaCompiler$ImplicitSourcePolicy, NONE)},
	{"CLASS", "Lcom/sun/tools/javac/main/JavaCompiler$ImplicitSourcePolicy;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavaCompiler$ImplicitSourcePolicy, CLASS)},
	{"UNSET", "Lcom/sun/tools/javac/main/JavaCompiler$ImplicitSourcePolicy;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavaCompiler$ImplicitSourcePolicy, UNSET)},
	{"$VALUES", "[Lcom/sun/tools/javac/main/JavaCompiler$ImplicitSourcePolicy;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(JavaCompiler$ImplicitSourcePolicy, $VALUES)},
	{}
};

$MethodInfo _JavaCompiler$ImplicitSourcePolicy_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/main/JavaCompiler$ImplicitSourcePolicy;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$JavaCompiler$ImplicitSourcePolicyArray*(*)()>(&JavaCompiler$ImplicitSourcePolicy::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(JavaCompiler$ImplicitSourcePolicy::*)($String*,int32_t)>(&JavaCompiler$ImplicitSourcePolicy::init$))},
	{"decode", "(Ljava/lang/String;)Lcom/sun/tools/javac/main/JavaCompiler$ImplicitSourcePolicy;", nullptr, $STATIC, $method(static_cast<JavaCompiler$ImplicitSourcePolicy*(*)($String*)>(&JavaCompiler$ImplicitSourcePolicy::decode))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/main/JavaCompiler$ImplicitSourcePolicy;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JavaCompiler$ImplicitSourcePolicy*(*)($String*)>(&JavaCompiler$ImplicitSourcePolicy::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/main/JavaCompiler$ImplicitSourcePolicy;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavaCompiler$ImplicitSourcePolicyArray*(*)()>(&JavaCompiler$ImplicitSourcePolicy::values))},
	{}
};

$InnerClassInfo _JavaCompiler$ImplicitSourcePolicy_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.JavaCompiler$ImplicitSourcePolicy", "com.sun.tools.javac.main.JavaCompiler", "ImplicitSourcePolicy", $PROTECTED | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _JavaCompiler$ImplicitSourcePolicy_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.main.JavaCompiler$ImplicitSourcePolicy",
	"java.lang.Enum",
	nullptr,
	_JavaCompiler$ImplicitSourcePolicy_FieldInfo_,
	_JavaCompiler$ImplicitSourcePolicy_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/main/JavaCompiler$ImplicitSourcePolicy;>;",
	nullptr,
	_JavaCompiler$ImplicitSourcePolicy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.JavaCompiler"
};

$Object* allocate$JavaCompiler$ImplicitSourcePolicy($Class* clazz) {
	return $of($alloc(JavaCompiler$ImplicitSourcePolicy));
}

JavaCompiler$ImplicitSourcePolicy* JavaCompiler$ImplicitSourcePolicy::NONE = nullptr;
JavaCompiler$ImplicitSourcePolicy* JavaCompiler$ImplicitSourcePolicy::CLASS = nullptr;
JavaCompiler$ImplicitSourcePolicy* JavaCompiler$ImplicitSourcePolicy::UNSET = nullptr;
$JavaCompiler$ImplicitSourcePolicyArray* JavaCompiler$ImplicitSourcePolicy::$VALUES = nullptr;

$JavaCompiler$ImplicitSourcePolicyArray* JavaCompiler$ImplicitSourcePolicy::$values() {
	$init(JavaCompiler$ImplicitSourcePolicy);
	return $new($JavaCompiler$ImplicitSourcePolicyArray, {
		JavaCompiler$ImplicitSourcePolicy::NONE,
		JavaCompiler$ImplicitSourcePolicy::CLASS,
		JavaCompiler$ImplicitSourcePolicy::UNSET
	});
}

$JavaCompiler$ImplicitSourcePolicyArray* JavaCompiler$ImplicitSourcePolicy::values() {
	$init(JavaCompiler$ImplicitSourcePolicy);
	return $cast($JavaCompiler$ImplicitSourcePolicyArray, JavaCompiler$ImplicitSourcePolicy::$VALUES->clone());
}

JavaCompiler$ImplicitSourcePolicy* JavaCompiler$ImplicitSourcePolicy::valueOf($String* name) {
	$init(JavaCompiler$ImplicitSourcePolicy);
	return $cast(JavaCompiler$ImplicitSourcePolicy, $Enum::valueOf(JavaCompiler$ImplicitSourcePolicy::class$, name));
}

void JavaCompiler$ImplicitSourcePolicy::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

JavaCompiler$ImplicitSourcePolicy* JavaCompiler$ImplicitSourcePolicy::decode($String* option) {
	$init(JavaCompiler$ImplicitSourcePolicy);
	if (option == nullptr) {
		return JavaCompiler$ImplicitSourcePolicy::UNSET;
	} else if ($nc(option)->equals("none"_s)) {
		return JavaCompiler$ImplicitSourcePolicy::NONE;
	} else if (option->equals("class"_s)) {
		return JavaCompiler$ImplicitSourcePolicy::CLASS;
	} else {
		return JavaCompiler$ImplicitSourcePolicy::UNSET;
	}
}

void clinit$JavaCompiler$ImplicitSourcePolicy($Class* class$) {
	$assignStatic(JavaCompiler$ImplicitSourcePolicy::NONE, $new(JavaCompiler$ImplicitSourcePolicy, "NONE"_s, 0));
	$assignStatic(JavaCompiler$ImplicitSourcePolicy::CLASS, $new(JavaCompiler$ImplicitSourcePolicy, "CLASS"_s, 1));
	$assignStatic(JavaCompiler$ImplicitSourcePolicy::UNSET, $new(JavaCompiler$ImplicitSourcePolicy, "UNSET"_s, 2));
	$assignStatic(JavaCompiler$ImplicitSourcePolicy::$VALUES, JavaCompiler$ImplicitSourcePolicy::$values());
}

JavaCompiler$ImplicitSourcePolicy::JavaCompiler$ImplicitSourcePolicy() {
}

$Class* JavaCompiler$ImplicitSourcePolicy::load$($String* name, bool initialize) {
	$loadClass(JavaCompiler$ImplicitSourcePolicy, name, initialize, &_JavaCompiler$ImplicitSourcePolicy_ClassInfo_, clinit$JavaCompiler$ImplicitSourcePolicy, allocate$JavaCompiler$ImplicitSourcePolicy);
	return class$;
}

$Class* JavaCompiler$ImplicitSourcePolicy::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com