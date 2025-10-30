#include <com/sun/tools/javac/util/ForwardingDiagnosticFormatter$ForwardingConfiguration.h>

#include <com/sun/tools/javac/api/DiagnosticFormatter$Configuration$MultilineLimit.h>
#include <com/sun/tools/javac/api/DiagnosticFormatter$Configuration.h>
#include <com/sun/tools/javac/util/ForwardingDiagnosticFormatter.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $DiagnosticFormatter$Configuration = ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration;
using $DiagnosticFormatter$Configuration$MultilineLimit = ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration$MultilineLimit;
using $ForwardingDiagnosticFormatter = ::com::sun::tools::javac::util::ForwardingDiagnosticFormatter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _ForwardingDiagnosticFormatter$ForwardingConfiguration_FieldInfo_[] = {
	{"configuration", "Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration;", nullptr, $PROTECTED, $field(ForwardingDiagnosticFormatter$ForwardingConfiguration, configuration)},
	{}
};

$MethodInfo _ForwardingDiagnosticFormatter$ForwardingConfiguration_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration;)V", nullptr, $PUBLIC, $method(static_cast<void(ForwardingDiagnosticFormatter$ForwardingConfiguration::*)($DiagnosticFormatter$Configuration*)>(&ForwardingDiagnosticFormatter$ForwardingConfiguration::init$))},
	{"getDelegatedConfiguration", "()Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration;", nullptr, $PUBLIC},
	{"getMultilineLimit", "(Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$MultilineLimit;)I", nullptr, $PUBLIC},
	{"getVisible", "()Ljava/util/Set;", "()Ljava/util/Set<Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$DiagnosticPart;>;", $PUBLIC},
	{"setMultilineLimit", "(Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$MultilineLimit;I)V", nullptr, $PUBLIC},
	{"setVisible", "(Ljava/util/Set;)V", "(Ljava/util/Set<Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$DiagnosticPart;>;)V", $PUBLIC},
	{}
};

$InnerClassInfo _ForwardingDiagnosticFormatter$ForwardingConfiguration_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.ForwardingDiagnosticFormatter$ForwardingConfiguration", "com.sun.tools.javac.util.ForwardingDiagnosticFormatter", "ForwardingConfiguration", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.api.DiagnosticFormatter$Configuration", "com.sun.tools.javac.api.DiagnosticFormatter", "Configuration", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ForwardingDiagnosticFormatter$ForwardingConfiguration_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.ForwardingDiagnosticFormatter$ForwardingConfiguration",
	"java.lang.Object",
	"com.sun.tools.javac.api.DiagnosticFormatter$Configuration",
	_ForwardingDiagnosticFormatter$ForwardingConfiguration_FieldInfo_,
	_ForwardingDiagnosticFormatter$ForwardingConfiguration_MethodInfo_,
	nullptr,
	nullptr,
	_ForwardingDiagnosticFormatter$ForwardingConfiguration_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.ForwardingDiagnosticFormatter"
};

$Object* allocate$ForwardingDiagnosticFormatter$ForwardingConfiguration($Class* clazz) {
	return $of($alloc(ForwardingDiagnosticFormatter$ForwardingConfiguration));
}

void ForwardingDiagnosticFormatter$ForwardingConfiguration::init$($DiagnosticFormatter$Configuration* configuration) {
	$set(this, configuration, configuration);
}

$DiagnosticFormatter$Configuration* ForwardingDiagnosticFormatter$ForwardingConfiguration::getDelegatedConfiguration() {
	return this->configuration;
}

int32_t ForwardingDiagnosticFormatter$ForwardingConfiguration::getMultilineLimit($DiagnosticFormatter$Configuration$MultilineLimit* limit) {
	return $nc(this->configuration)->getMultilineLimit(limit);
}

$Set* ForwardingDiagnosticFormatter$ForwardingConfiguration::getVisible() {
	return $nc(this->configuration)->getVisible();
}

void ForwardingDiagnosticFormatter$ForwardingConfiguration::setMultilineLimit($DiagnosticFormatter$Configuration$MultilineLimit* limit, int32_t value) {
	$nc(this->configuration)->setMultilineLimit(limit, value);
}

void ForwardingDiagnosticFormatter$ForwardingConfiguration::setVisible($Set* diagParts) {
	$nc(this->configuration)->setVisible(diagParts);
}

ForwardingDiagnosticFormatter$ForwardingConfiguration::ForwardingDiagnosticFormatter$ForwardingConfiguration() {
}

$Class* ForwardingDiagnosticFormatter$ForwardingConfiguration::load$($String* name, bool initialize) {
	$loadClass(ForwardingDiagnosticFormatter$ForwardingConfiguration, name, initialize, &_ForwardingDiagnosticFormatter$ForwardingConfiguration_ClassInfo_, allocate$ForwardingDiagnosticFormatter$ForwardingConfiguration);
	return class$;
}

$Class* ForwardingDiagnosticFormatter$ForwardingConfiguration::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com