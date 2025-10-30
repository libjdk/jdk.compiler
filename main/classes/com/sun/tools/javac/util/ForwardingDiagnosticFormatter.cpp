#include <com/sun/tools/javac/util/ForwardingDiagnosticFormatter.h>

#include <com/sun/tools/javac/api/DiagnosticFormatter$Configuration.h>
#include <com/sun/tools/javac/api/DiagnosticFormatter$PositionKind.h>
#include <com/sun/tools/javac/api/DiagnosticFormatter.h>
#include <com/sun/tools/javac/util/ForwardingDiagnosticFormatter$ForwardingConfiguration.h>
#include <java/util/Locale.h>
#include <javax/tools/Diagnostic.h>
#include <jcpp.h>

using $DiagnosticFormatter = ::com::sun::tools::javac::api::DiagnosticFormatter;
using $DiagnosticFormatter$Configuration = ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration;
using $DiagnosticFormatter$PositionKind = ::com::sun::tools::javac::api::DiagnosticFormatter$PositionKind;
using $ForwardingDiagnosticFormatter$ForwardingConfiguration = ::com::sun::tools::javac::util::ForwardingDiagnosticFormatter$ForwardingConfiguration;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Diagnostic = ::javax::tools::Diagnostic;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _ForwardingDiagnosticFormatter_FieldInfo_[] = {
	{"formatter", "Lcom/sun/tools/javac/api/DiagnosticFormatter;", "TF;", $PROTECTED, $field(ForwardingDiagnosticFormatter, formatter)},
	{"configuration", "Lcom/sun/tools/javac/util/ForwardingDiagnosticFormatter$ForwardingConfiguration;", nullptr, $PROTECTED, $field(ForwardingDiagnosticFormatter, configuration)},
	{}
};

$MethodInfo _ForwardingDiagnosticFormatter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/api/DiagnosticFormatter;)V", "(TF;)V", $PUBLIC, $method(static_cast<void(ForwardingDiagnosticFormatter::*)($DiagnosticFormatter*)>(&ForwardingDiagnosticFormatter::init$))},
	{"displaySource", "(Ljavax/tools/Diagnostic;)Z", "(TD;)Z", $PUBLIC},
	{"format", "(Ljavax/tools/Diagnostic;Ljava/util/Locale;)Ljava/lang/String;", "(TD;Ljava/util/Locale;)Ljava/lang/String;", $PUBLIC},
	{"formatKind", "(Ljavax/tools/Diagnostic;Ljava/util/Locale;)Ljava/lang/String;", "(TD;Ljava/util/Locale;)Ljava/lang/String;", $PUBLIC},
	{"formatMessage", "(Ljavax/tools/Diagnostic;Ljava/util/Locale;)Ljava/lang/String;", "(TD;Ljava/util/Locale;)Ljava/lang/String;", $PUBLIC},
	{"formatPosition", "(Ljavax/tools/Diagnostic;Lcom/sun/tools/javac/api/DiagnosticFormatter$PositionKind;Ljava/util/Locale;)Ljava/lang/String;", "(TD;Lcom/sun/tools/javac/api/DiagnosticFormatter$PositionKind;Ljava/util/Locale;)Ljava/lang/String;", $PUBLIC},
	{"formatSource", "(Ljavax/tools/Diagnostic;ZLjava/util/Locale;)Ljava/lang/String;", "(TD;ZLjava/util/Locale;)Ljava/lang/String;", $PUBLIC},
	{"getConfiguration", "()Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration;", nullptr, $PUBLIC},
	{"getDelegatedFormatter", "()Lcom/sun/tools/javac/api/DiagnosticFormatter;", "()TF;", $PUBLIC},
	{}
};

$InnerClassInfo _ForwardingDiagnosticFormatter_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.ForwardingDiagnosticFormatter$ForwardingConfiguration", "com.sun.tools.javac.util.ForwardingDiagnosticFormatter", "ForwardingConfiguration", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ForwardingDiagnosticFormatter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.ForwardingDiagnosticFormatter",
	"java.lang.Object",
	"com.sun.tools.javac.api.DiagnosticFormatter",
	_ForwardingDiagnosticFormatter_FieldInfo_,
	_ForwardingDiagnosticFormatter_MethodInfo_,
	"<D::Ljavax/tools/Diagnostic<*>;F::Lcom/sun/tools/javac/api/DiagnosticFormatter<TD;>;>Ljava/lang/Object;Lcom/sun/tools/javac/api/DiagnosticFormatter<TD;>;",
	nullptr,
	_ForwardingDiagnosticFormatter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.ForwardingDiagnosticFormatter$ForwardingConfiguration"
};

$Object* allocate$ForwardingDiagnosticFormatter($Class* clazz) {
	return $of($alloc(ForwardingDiagnosticFormatter));
}

void ForwardingDiagnosticFormatter::init$($DiagnosticFormatter* formatter) {
	$set(this, formatter, formatter);
	$set(this, configuration, $new($ForwardingDiagnosticFormatter$ForwardingConfiguration, $($nc(formatter)->getConfiguration())));
}

$DiagnosticFormatter* ForwardingDiagnosticFormatter::getDelegatedFormatter() {
	return this->formatter;
}

$DiagnosticFormatter$Configuration* ForwardingDiagnosticFormatter::getConfiguration() {
	return this->configuration;
}

bool ForwardingDiagnosticFormatter::displaySource($Diagnostic* diag) {
	return $nc(this->formatter)->displaySource(diag);
}

$String* ForwardingDiagnosticFormatter::format($Diagnostic* diag, $Locale* l) {
	return $nc(this->formatter)->format(diag, l);
}

$String* ForwardingDiagnosticFormatter::formatKind($Diagnostic* diag, $Locale* l) {
	return $nc(this->formatter)->formatKind(diag, l);
}

$String* ForwardingDiagnosticFormatter::formatMessage($Diagnostic* diag, $Locale* l) {
	return $nc(this->formatter)->formatMessage(diag, l);
}

$String* ForwardingDiagnosticFormatter::formatPosition($Diagnostic* diag, $DiagnosticFormatter$PositionKind* pk, $Locale* l) {
	return $nc(this->formatter)->formatPosition(diag, pk, l);
}

$String* ForwardingDiagnosticFormatter::formatSource($Diagnostic* diag, bool fullname, $Locale* l) {
	return $nc(this->formatter)->formatSource(diag, fullname, l);
}

ForwardingDiagnosticFormatter::ForwardingDiagnosticFormatter() {
}

$Class* ForwardingDiagnosticFormatter::load$($String* name, bool initialize) {
	$loadClass(ForwardingDiagnosticFormatter, name, initialize, &_ForwardingDiagnosticFormatter_ClassInfo_, allocate$ForwardingDiagnosticFormatter);
	return class$;
}

$Class* ForwardingDiagnosticFormatter::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com