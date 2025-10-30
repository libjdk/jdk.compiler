#include <com/sun/tools/javac/Main.h>

#include <com/sun/tools/javac/main/Main$Result.h>
#include <com/sun/tools/javac/main/Main.h>
#include <java/io/PrintWriter.h>
#include <jcpp.h>

using $Main = ::com::sun::tools::javac::main::Main;
using $Main$Result = ::com::sun::tools::javac::main::Main$Result;
using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {

$NamedAttribute Main_Attribute_var$0[] = {
	{"since", 's', "16"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Main_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", Main_Attribute_var$0},
	{}
};

$MethodInfo _Main_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(Main::*)()>(&Main::init$)), nullptr, nullptr, _Main_MethodAnnotations_init$0},
	{"compile", "([Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($StringArray*)>(&Main::compile))},
	{"compile", "([Ljava/lang/String;Ljava/io/PrintWriter;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($StringArray*,$PrintWriter*)>(&Main::compile))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Main::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _Main_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.Main",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Main_MethodInfo_
};

$Object* allocate$Main($Class* clazz) {
	return $of($alloc(Main));
}

void Main::init$() {
}

void Main::main($StringArray* args) {
	$System::exit(compile(args));
}

int32_t Main::compile($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Main, compiler, $new($Main, "javac"_s));
	return $nc($(compiler->compile(args)))->exitCode;
}

int32_t Main::compile($StringArray* args, $PrintWriter* out) {
	$useLocalCurrentObjectStackCache();
	$var($Main, compiler, $new($Main, "javac"_s, out));
	return $nc($(compiler->compile(args)))->exitCode;
}

Main::Main() {
}

$Class* Main::load$($String* name, bool initialize) {
	$loadClass(Main, name, initialize, &_Main_ClassInfo_, allocate$Main);
	return class$;
}

$Class* Main::class$ = nullptr;

			} // javac
		} // tools
	} // sun
} // com