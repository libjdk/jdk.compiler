#include <com/sun/tools/javac/api/DiagnosticFormatter$Configuration.h>

#include <com/sun/tools/javac/api/DiagnosticFormatter$Configuration$MultilineLimit.h>
#include <com/sun/tools/javac/api/DiagnosticFormatter.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $DiagnosticFormatter = ::com::sun::tools::javac::api::DiagnosticFormatter;
using $DiagnosticFormatter$Configuration$MultilineLimit = ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration$MultilineLimit;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$MethodInfo _DiagnosticFormatter$Configuration_MethodInfo_[] = {
	{"getMultilineLimit", "(Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$MultilineLimit;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getVisible", "()Ljava/util/Set;", "()Ljava/util/Set<Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$DiagnosticPart;>;", $PUBLIC | $ABSTRACT},
	{"setMultilineLimit", "(Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$MultilineLimit;I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setVisible", "(Ljava/util/Set;)V", "(Ljava/util/Set<Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$DiagnosticPart;>;)V", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _DiagnosticFormatter$Configuration_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.DiagnosticFormatter$Configuration", "com.sun.tools.javac.api.DiagnosticFormatter", "Configuration", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.api.DiagnosticFormatter$Configuration$MultilineLimit", "com.sun.tools.javac.api.DiagnosticFormatter$Configuration", "MultilineLimit", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.api.DiagnosticFormatter$Configuration$DiagnosticPart", "com.sun.tools.javac.api.DiagnosticFormatter$Configuration", "DiagnosticPart", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _DiagnosticFormatter$Configuration_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.api.DiagnosticFormatter$Configuration",
	nullptr,
	nullptr,
	nullptr,
	_DiagnosticFormatter$Configuration_MethodInfo_,
	nullptr,
	nullptr,
	_DiagnosticFormatter$Configuration_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.DiagnosticFormatter"
};

$Object* allocate$DiagnosticFormatter$Configuration($Class* clazz) {
	return $of($alloc(DiagnosticFormatter$Configuration));
}

$Class* DiagnosticFormatter$Configuration::load$($String* name, bool initialize) {
	$loadClass(DiagnosticFormatter$Configuration, name, initialize, &_DiagnosticFormatter$Configuration_ClassInfo_, allocate$DiagnosticFormatter$Configuration);
	return class$;
}

$Class* DiagnosticFormatter$Configuration::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com