#include <jdk/internal/shellsupport/doc/JavadocHelper.h>

#include <com/sun/source/util/JavacTask.h>
#include <java/io/IOException.h>
#include <java/nio/charset/Charset.h>
#include <java/util/Collection.h>
#include <java/util/Locale.h>
#include <javax/lang/model/element/Element.h>
#include <javax/tools/DiagnosticListener.h>
#include <javax/tools/JavaCompiler.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/StandardJavaFileManager.h>
#include <javax/tools/StandardLocation.h>
#include <javax/tools/ToolProvider.h>
#include <jdk/internal/shellsupport/doc/JavadocHelper$1.h>
#include <jdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper.h>
#include <jcpp.h>

#undef SOURCE_PATH

using $JavacTask = ::com::sun::source::util::JavacTask;
using $IOException = ::java::io::IOException;
using $AutoCloseable = ::java::lang::AutoCloseable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $Collection = ::java::util::Collection;
using $Locale = ::java::util::Locale;
using $Element = ::javax::lang::model::element::Element;
using $DiagnosticListener = ::javax::tools::DiagnosticListener;
using $JavaCompiler = ::javax::tools::JavaCompiler;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $StandardJavaFileManager = ::javax::tools::StandardJavaFileManager;
using $StandardLocation = ::javax::tools::StandardLocation;
using $ToolProvider = ::javax::tools::ToolProvider;
using $JavadocHelper$1 = ::jdk::internal::shellsupport::doc::JavadocHelper$1;
using $JavadocHelper$OnDemandJavadocHelper = ::jdk::internal::shellsupport::doc::JavadocHelper$OnDemandJavadocHelper;

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

$FieldInfo _JavadocHelper_FieldInfo_[] = {
	{"compiler", "Ljavax/tools/JavaCompiler;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JavadocHelper, compiler)},
	{}
};

$MethodInfo _JavadocHelper_MethodInfo_[] = {
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavadocHelper::*)()>(&JavadocHelper::init$))},
	{"create", "(Lcom/sun/source/util/JavacTask;Ljava/util/Collection;)Ljdk/internal/shellsupport/doc/JavadocHelper;", "(Lcom/sun/source/util/JavacTask;Ljava/util/Collection<+Ljava/nio/file/Path;>;)Ljdk/internal/shellsupport/doc/JavadocHelper;", $PUBLIC | $STATIC, $method(static_cast<JavadocHelper*(*)($JavacTask*,$Collection*)>(&JavadocHelper::create))},
	{"getResolvedDocComment", "(Ljavax/lang/model/element/Element;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getSourceElement", "(Ljavax/lang/model/element/Element;)Ljavax/lang/model/element/Element;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _JavadocHelper_InnerClassesInfo_[] = {
	{"jdk.internal.shellsupport.doc.JavadocHelper$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper", "jdk.internal.shellsupport.doc.JavadocHelper", "OnDemandJavadocHelper", $PRIVATE | $STATIC | $FINAL},
	{"jdk.internal.shellsupport.doc.JavadocHelper$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JavadocHelper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"jdk.internal.shellsupport.doc.JavadocHelper",
	"java.lang.Object",
	"java.lang.AutoCloseable",
	_JavadocHelper_FieldInfo_,
	_JavadocHelper_MethodInfo_,
	nullptr,
	nullptr,
	_JavadocHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.shellsupport.doc.JavadocHelper$2,jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper,jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager,jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager$1,jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$3,jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$2,jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$1,jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$1$3,jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$1$2,jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$1$1,jdk.internal.shellsupport.doc.JavadocHelper$1"
};

$Object* allocate$JavadocHelper($Class* clazz) {
	return $of($alloc(JavadocHelper));
}

$JavaCompiler* JavadocHelper::compiler = nullptr;

void JavadocHelper::init$() {
}

JavadocHelper* JavadocHelper::create($JavacTask* mainTask, $Collection* sourceLocations) {
	$init(JavadocHelper);
	$var($StandardJavaFileManager, fm, $nc(JavadocHelper::compiler)->getStandardFileManager(nullptr, nullptr, nullptr));
	try {
		$init($StandardLocation);
		$nc(fm)->setLocationFromPaths($StandardLocation::SOURCE_PATH, sourceLocations);
		return $new($JavadocHelper$OnDemandJavadocHelper, mainTask, fm);
	} catch ($IOException& ex) {
		try {
			$nc(fm)->close();
		} catch ($IOException& closeEx) {
		}
		return $new($JavadocHelper$1);
	}
	$shouldNotReachHere();
}

void clinit$JavadocHelper($Class* class$) {
	$assignStatic(JavadocHelper::compiler, $ToolProvider::getSystemJavaCompiler());
}

JavadocHelper::JavadocHelper() {
}

$Class* JavadocHelper::load$($String* name, bool initialize) {
	$loadClass(JavadocHelper, name, initialize, &_JavadocHelper_ClassInfo_, clinit$JavadocHelper, allocate$JavadocHelper);
	return class$;
}

$Class* JavadocHelper::class$ = nullptr;

			} // doc
		} // shellsupport
	} // internal
} // jdk