#include <com/sun/tools/javac/api/DiagnosticFormatter.h>

#include <com/sun/tools/javac/api/DiagnosticFormatter$Configuration.h>
#include <com/sun/tools/javac/api/DiagnosticFormatter$PositionKind.h>
#include <java/util/Locale.h>
#include <javax/tools/Diagnostic.h>
#include <jcpp.h>

using $DiagnosticFormatter$Configuration = ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration;
using $DiagnosticFormatter$PositionKind = ::com::sun::tools::javac::api::DiagnosticFormatter$PositionKind;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Diagnostic = ::javax::tools::Diagnostic;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$MethodInfo _DiagnosticFormatter_MethodInfo_[] = {
	{"displaySource", "(Ljavax/tools/Diagnostic;)Z", "(TD;)Z", $PUBLIC | $ABSTRACT},
	{"format", "(Ljavax/tools/Diagnostic;Ljava/util/Locale;)Ljava/lang/String;", "(TD;Ljava/util/Locale;)Ljava/lang/String;", $PUBLIC | $ABSTRACT},
	{"formatKind", "(Ljavax/tools/Diagnostic;Ljava/util/Locale;)Ljava/lang/String;", "(TD;Ljava/util/Locale;)Ljava/lang/String;", $PUBLIC | $ABSTRACT},
	{"formatMessage", "(Ljavax/tools/Diagnostic;Ljava/util/Locale;)Ljava/lang/String;", "(TD;Ljava/util/Locale;)Ljava/lang/String;", $PUBLIC | $ABSTRACT},
	{"formatPosition", "(Ljavax/tools/Diagnostic;Lcom/sun/tools/javac/api/DiagnosticFormatter$PositionKind;Ljava/util/Locale;)Ljava/lang/String;", "(TD;Lcom/sun/tools/javac/api/DiagnosticFormatter$PositionKind;Ljava/util/Locale;)Ljava/lang/String;", $PUBLIC | $ABSTRACT},
	{"formatSource", "(Ljavax/tools/Diagnostic;ZLjava/util/Locale;)Ljava/lang/String;", "(TD;ZLjava/util/Locale;)Ljava/lang/String;", $PUBLIC | $ABSTRACT},
	{"getConfiguration", "()Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _DiagnosticFormatter_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.DiagnosticFormatter$Configuration", "com.sun.tools.javac.api.DiagnosticFormatter", "Configuration", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.api.DiagnosticFormatter$PositionKind", "com.sun.tools.javac.api.DiagnosticFormatter", "PositionKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _DiagnosticFormatter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.api.DiagnosticFormatter",
	nullptr,
	nullptr,
	nullptr,
	_DiagnosticFormatter_MethodInfo_,
	"<D::Ljavax/tools/Diagnostic<*>;>Ljava/lang/Object;",
	nullptr,
	_DiagnosticFormatter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.DiagnosticFormatter$Configuration,com.sun.tools.javac.api.DiagnosticFormatter$Configuration$MultilineLimit,com.sun.tools.javac.api.DiagnosticFormatter$Configuration$DiagnosticPart,com.sun.tools.javac.api.DiagnosticFormatter$PositionKind"
};

$Object* allocate$DiagnosticFormatter($Class* clazz) {
	return $of($alloc(DiagnosticFormatter));
}

$Class* DiagnosticFormatter::load$($String* name, bool initialize) {
	$loadClass(DiagnosticFormatter, name, initialize, &_DiagnosticFormatter_ClassInfo_, allocate$DiagnosticFormatter);
	return class$;
}

$Class* DiagnosticFormatter::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com