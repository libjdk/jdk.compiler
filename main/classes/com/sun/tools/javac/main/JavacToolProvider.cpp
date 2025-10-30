#include <com/sun/tools/javac/main/JavacToolProvider.h>

#include <com/sun/tools/javac/main/Main$Result.h>
#include <com/sun/tools/javac/main/Main.h>
#include <java/io/PrintWriter.h>
#include <jcpp.h>

using $Main = ::com::sun::tools::javac::main::Main;
using $Main$Result = ::com::sun::tools::javac::main::Main$Result;
using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ToolProvider = ::java::util::spi::ToolProvider;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

$MethodInfo _JavacToolProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavacToolProvider::*)()>(&JavacToolProvider::init$))},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"run", "(Ljava/io/PrintWriter;Ljava/io/PrintWriter;[Ljava/lang/String;)I", nullptr, $PUBLIC | $TRANSIENT},
	{}
};

$ClassInfo _JavacToolProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.main.JavacToolProvider",
	"java.lang.Object",
	"java.util.spi.ToolProvider",
	nullptr,
	_JavacToolProvider_MethodInfo_
};

$Object* allocate$JavacToolProvider($Class* clazz) {
	return $of($alloc(JavacToolProvider));
}

void JavacToolProvider::init$() {
}

$String* JavacToolProvider::name() {
	return "javac"_s;
}

int32_t JavacToolProvider::run($PrintWriter* out, $PrintWriter* err, $StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Main, compiler, $new($Main, "javac"_s, out, err));
	return $nc($(compiler->compile(args)))->exitCode;
}

JavacToolProvider::JavacToolProvider() {
}

$Class* JavacToolProvider::load$($String* name, bool initialize) {
	$loadClass(JavacToolProvider, name, initialize, &_JavacToolProvider_ClassInfo_, allocate$JavacToolProvider);
	return class$;
}

$Class* JavacToolProvider::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com