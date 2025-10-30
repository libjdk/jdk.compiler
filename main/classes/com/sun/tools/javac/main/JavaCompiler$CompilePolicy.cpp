#include <com/sun/tools/javac/main/JavaCompiler$CompilePolicy.h>

#include <com/sun/tools/javac/main/JavaCompiler.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef BY_FILE
#undef BY_TODO
#undef DEFAULT_COMPILE_POLICY
#undef SIMPLE

using $JavaCompiler$CompilePolicyArray = $Array<::com::sun::tools::javac::main::JavaCompiler$CompilePolicy>;
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

$FieldInfo _JavaCompiler$CompilePolicy_FieldInfo_[] = {
	{"SIMPLE", "Lcom/sun/tools/javac/main/JavaCompiler$CompilePolicy;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavaCompiler$CompilePolicy, SIMPLE)},
	{"BY_FILE", "Lcom/sun/tools/javac/main/JavaCompiler$CompilePolicy;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavaCompiler$CompilePolicy, BY_FILE)},
	{"BY_TODO", "Lcom/sun/tools/javac/main/JavaCompiler$CompilePolicy;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavaCompiler$CompilePolicy, BY_TODO)},
	{"$VALUES", "[Lcom/sun/tools/javac/main/JavaCompiler$CompilePolicy;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(JavaCompiler$CompilePolicy, $VALUES)},
	{}
};

$MethodInfo _JavaCompiler$CompilePolicy_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/main/JavaCompiler$CompilePolicy;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$JavaCompiler$CompilePolicyArray*(*)()>(&JavaCompiler$CompilePolicy::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(JavaCompiler$CompilePolicy::*)($String*,int32_t)>(&JavaCompiler$CompilePolicy::init$))},
	{"decode", "(Ljava/lang/String;)Lcom/sun/tools/javac/main/JavaCompiler$CompilePolicy;", nullptr, $STATIC, $method(static_cast<JavaCompiler$CompilePolicy*(*)($String*)>(&JavaCompiler$CompilePolicy::decode))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/main/JavaCompiler$CompilePolicy;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JavaCompiler$CompilePolicy*(*)($String*)>(&JavaCompiler$CompilePolicy::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/main/JavaCompiler$CompilePolicy;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavaCompiler$CompilePolicyArray*(*)()>(&JavaCompiler$CompilePolicy::values))},
	{}
};

$InnerClassInfo _JavaCompiler$CompilePolicy_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.JavaCompiler$CompilePolicy", "com.sun.tools.javac.main.JavaCompiler", "CompilePolicy", $PROTECTED | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _JavaCompiler$CompilePolicy_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.main.JavaCompiler$CompilePolicy",
	"java.lang.Enum",
	nullptr,
	_JavaCompiler$CompilePolicy_FieldInfo_,
	_JavaCompiler$CompilePolicy_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/main/JavaCompiler$CompilePolicy;>;",
	nullptr,
	_JavaCompiler$CompilePolicy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.JavaCompiler"
};

$Object* allocate$JavaCompiler$CompilePolicy($Class* clazz) {
	return $of($alloc(JavaCompiler$CompilePolicy));
}

JavaCompiler$CompilePolicy* JavaCompiler$CompilePolicy::SIMPLE = nullptr;
JavaCompiler$CompilePolicy* JavaCompiler$CompilePolicy::BY_FILE = nullptr;
JavaCompiler$CompilePolicy* JavaCompiler$CompilePolicy::BY_TODO = nullptr;
$JavaCompiler$CompilePolicyArray* JavaCompiler$CompilePolicy::$VALUES = nullptr;

$JavaCompiler$CompilePolicyArray* JavaCompiler$CompilePolicy::$values() {
	$init(JavaCompiler$CompilePolicy);
	return $new($JavaCompiler$CompilePolicyArray, {
		JavaCompiler$CompilePolicy::SIMPLE,
		JavaCompiler$CompilePolicy::BY_FILE,
		JavaCompiler$CompilePolicy::BY_TODO
	});
}

$JavaCompiler$CompilePolicyArray* JavaCompiler$CompilePolicy::values() {
	$init(JavaCompiler$CompilePolicy);
	return $cast($JavaCompiler$CompilePolicyArray, JavaCompiler$CompilePolicy::$VALUES->clone());
}

JavaCompiler$CompilePolicy* JavaCompiler$CompilePolicy::valueOf($String* name) {
	$init(JavaCompiler$CompilePolicy);
	return $cast(JavaCompiler$CompilePolicy, $Enum::valueOf(JavaCompiler$CompilePolicy::class$, name));
}

void JavaCompiler$CompilePolicy::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

JavaCompiler$CompilePolicy* JavaCompiler$CompilePolicy::decode($String* option) {
	$init(JavaCompiler$CompilePolicy);
	if (option == nullptr) {
		$init($JavaCompiler);
		return $JavaCompiler::DEFAULT_COMPILE_POLICY;
	} else if ($nc(option)->equals("simple"_s)) {
		return JavaCompiler$CompilePolicy::SIMPLE;
	} else if (option->equals("byfile"_s)) {
		return JavaCompiler$CompilePolicy::BY_FILE;
	} else if (option->equals("bytodo"_s)) {
		return JavaCompiler$CompilePolicy::BY_TODO;
	} else {
		$init($JavaCompiler);
		return $JavaCompiler::DEFAULT_COMPILE_POLICY;
	}
}

void clinit$JavaCompiler$CompilePolicy($Class* class$) {
	$assignStatic(JavaCompiler$CompilePolicy::SIMPLE, $new(JavaCompiler$CompilePolicy, "SIMPLE"_s, 0));
	$assignStatic(JavaCompiler$CompilePolicy::BY_FILE, $new(JavaCompiler$CompilePolicy, "BY_FILE"_s, 1));
	$assignStatic(JavaCompiler$CompilePolicy::BY_TODO, $new(JavaCompiler$CompilePolicy, "BY_TODO"_s, 2));
	$assignStatic(JavaCompiler$CompilePolicy::$VALUES, JavaCompiler$CompilePolicy::$values());
}

JavaCompiler$CompilePolicy::JavaCompiler$CompilePolicy() {
}

$Class* JavaCompiler$CompilePolicy::load$($String* name, bool initialize) {
	$loadClass(JavaCompiler$CompilePolicy, name, initialize, &_JavaCompiler$CompilePolicy_ClassInfo_, clinit$JavaCompiler$CompilePolicy, allocate$JavaCompiler$CompilePolicy);
	return class$;
}

$Class* JavaCompiler$CompilePolicy::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com