#include <com/sun/tools/javac/resources/LauncherProperties$Errors.h>

#include <com/sun/tools/javac/resources/LauncherProperties.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <java/nio/file/Path.h>
#include <jcpp.h>

using $LauncherProperties = ::com::sun::tools::javac::resources::LauncherProperties;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace resources {

$FieldInfo _LauncherProperties$Errors_FieldInfo_[] = {
	{"CompilationFailed", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LauncherProperties$Errors, CompilationFailed)},
	{"EnablePreviewRequiresSource", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LauncherProperties$Errors, EnablePreviewRequiresSource)},
	{"MainNotPublicStatic", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LauncherProperties$Errors, MainNotPublicStatic)},
	{"MainNotVoid", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LauncherProperties$Errors, MainNotVoid)},
	{"NoArgs", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LauncherProperties$Errors, NoArgs)},
	{"NoClass", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LauncherProperties$Errors, NoClass)},
	{}
};

$MethodInfo _LauncherProperties$Errors_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LauncherProperties$Errors::*)()>(&LauncherProperties$Errors::init$))},
	{"CantAccessMainMethod", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Error*(*)($String*)>(&LauncherProperties$Errors::CantAccessMainMethod))},
	{"CantFindClass", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Error*(*)($String*)>(&LauncherProperties$Errors::CantFindClass))},
	{"CantFindMainMethod", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Error*(*)($String*)>(&LauncherProperties$Errors::CantFindMainMethod))},
	{"CantReadFile", "(Ljava/nio/file/Path;Ljava/lang/Object;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Error*(*)($Path*,Object$*)>(&LauncherProperties$Errors::CantReadFile))},
	{"FileNotFound", "(Ljava/nio/file/Path;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Error*(*)($Path*)>(&LauncherProperties$Errors::FileNotFound))},
	{"InvalidFilename", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Error*(*)($String*)>(&LauncherProperties$Errors::InvalidFilename))},
	{"InvalidValueForSource", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Error*(*)($String*)>(&LauncherProperties$Errors::InvalidValueForSource))},
	{"NoValueForOption", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Error*(*)($String*)>(&LauncherProperties$Errors::NoValueForOption))},
	{}
};

$InnerClassInfo _LauncherProperties$Errors_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.resources.LauncherProperties$Errors", "com.sun.tools.javac.resources.LauncherProperties", "Errors", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _LauncherProperties$Errors_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.resources.LauncherProperties$Errors",
	"java.lang.Object",
	nullptr,
	_LauncherProperties$Errors_FieldInfo_,
	_LauncherProperties$Errors_MethodInfo_,
	nullptr,
	nullptr,
	_LauncherProperties$Errors_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.resources.LauncherProperties"
};

$Object* allocate$LauncherProperties$Errors($Class* clazz) {
	return $of($alloc(LauncherProperties$Errors));
}

$JCDiagnostic$Error* LauncherProperties$Errors::CompilationFailed = nullptr;
$JCDiagnostic$Error* LauncherProperties$Errors::EnablePreviewRequiresSource = nullptr;
$JCDiagnostic$Error* LauncherProperties$Errors::MainNotPublicStatic = nullptr;
$JCDiagnostic$Error* LauncherProperties$Errors::MainNotVoid = nullptr;
$JCDiagnostic$Error* LauncherProperties$Errors::NoArgs = nullptr;
$JCDiagnostic$Error* LauncherProperties$Errors::NoClass = nullptr;

void LauncherProperties$Errors::init$() {
}

$JCDiagnostic$Error* LauncherProperties$Errors::CantAccessMainMethod($String* arg0) {
	$init(LauncherProperties$Errors);
	return $new($JCDiagnostic$Error, "launcher"_s, "cant.access.main.method"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* LauncherProperties$Errors::CantFindClass($String* arg0) {
	$init(LauncherProperties$Errors);
	return $new($JCDiagnostic$Error, "launcher"_s, "cant.find.class"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* LauncherProperties$Errors::CantFindMainMethod($String* arg0) {
	$init(LauncherProperties$Errors);
	return $new($JCDiagnostic$Error, "launcher"_s, "cant.find.main.method"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* LauncherProperties$Errors::CantReadFile($Path* arg0, Object$* arg1) {
	$init(LauncherProperties$Errors);
	return $new($JCDiagnostic$Error, "launcher"_s, "cant.read.file"_s, $$new($ObjectArray, {
		$of(arg0),
		arg1
	}));
}

$JCDiagnostic$Error* LauncherProperties$Errors::FileNotFound($Path* arg0) {
	$init(LauncherProperties$Errors);
	return $new($JCDiagnostic$Error, "launcher"_s, "file.not.found"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* LauncherProperties$Errors::InvalidFilename($String* arg0) {
	$init(LauncherProperties$Errors);
	return $new($JCDiagnostic$Error, "launcher"_s, "invalid.filename"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* LauncherProperties$Errors::InvalidValueForSource($String* arg0) {
	$init(LauncherProperties$Errors);
	return $new($JCDiagnostic$Error, "launcher"_s, "invalid.value.for.source"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* LauncherProperties$Errors::NoValueForOption($String* arg0) {
	$init(LauncherProperties$Errors);
	return $new($JCDiagnostic$Error, "launcher"_s, "no.value.for.option"_s, $$new($ObjectArray, {$of(arg0)}));
}

void clinit$LauncherProperties$Errors($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(LauncherProperties$Errors::CompilationFailed, $new($JCDiagnostic$Error, "launcher"_s, "compilation.failed"_s, $$new($ObjectArray, 0)));
	$assignStatic(LauncherProperties$Errors::EnablePreviewRequiresSource, $new($JCDiagnostic$Error, "launcher"_s, "enable.preview.requires.source"_s, $$new($ObjectArray, 0)));
	$assignStatic(LauncherProperties$Errors::MainNotPublicStatic, $new($JCDiagnostic$Error, "launcher"_s, "main.not.public.static"_s, $$new($ObjectArray, 0)));
	$assignStatic(LauncherProperties$Errors::MainNotVoid, $new($JCDiagnostic$Error, "launcher"_s, "main.not.void"_s, $$new($ObjectArray, 0)));
	$assignStatic(LauncherProperties$Errors::NoArgs, $new($JCDiagnostic$Error, "launcher"_s, "no.args"_s, $$new($ObjectArray, 0)));
	$assignStatic(LauncherProperties$Errors::NoClass, $new($JCDiagnostic$Error, "launcher"_s, "no.class"_s, $$new($ObjectArray, 0)));
}

LauncherProperties$Errors::LauncherProperties$Errors() {
}

$Class* LauncherProperties$Errors::load$($String* name, bool initialize) {
	$loadClass(LauncherProperties$Errors, name, initialize, &_LauncherProperties$Errors_ClassInfo_, clinit$LauncherProperties$Errors, allocate$LauncherProperties$Errors);
	return class$;
}

$Class* LauncherProperties$Errors::class$ = nullptr;

				} // resources
			} // javac
		} // tools
	} // sun
} // com