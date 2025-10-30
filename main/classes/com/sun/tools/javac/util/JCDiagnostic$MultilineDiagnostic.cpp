#include <com/sun/tools/javac/util/JCDiagnostic$MultilineDiagnostic.h>

#include <com/sun/tools/javac/api/DiagnosticFormatter.h>
#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/Set.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $DiagnosticFormatter = ::com::sun::tools::javac::api::DiagnosticFormatter;
using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticInfo = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticInfo;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _JCDiagnostic$MultilineDiagnostic_FieldInfo_[] = {
	{"subdiagnostics", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/JCDiagnostic;>;", $PRIVATE | $FINAL, $field(JCDiagnostic$MultilineDiagnostic, subdiagnostics)},
	{}
};

$MethodInfo _JCDiagnostic$MultilineDiagnostic_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/JCDiagnostic;>;)V", $PUBLIC, $method(static_cast<void(JCDiagnostic$MultilineDiagnostic::*)($JCDiagnostic*,$List*)>(&JCDiagnostic$MultilineDiagnostic::init$))},
	{"getSource", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getSubdiagnostics", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/JCDiagnostic;>;", $PUBLIC},
	{"isMultiline", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCDiagnostic$MultilineDiagnostic_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.JCDiagnostic$MultilineDiagnostic", "com.sun.tools.javac.util.JCDiagnostic", "MultilineDiagnostic", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JCDiagnostic$MultilineDiagnostic_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.JCDiagnostic$MultilineDiagnostic",
	"com.sun.tools.javac.util.JCDiagnostic",
	nullptr,
	_JCDiagnostic$MultilineDiagnostic_FieldInfo_,
	_JCDiagnostic$MultilineDiagnostic_MethodInfo_,
	nullptr,
	nullptr,
	_JCDiagnostic$MultilineDiagnostic_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.JCDiagnostic"
};

$Object* allocate$JCDiagnostic$MultilineDiagnostic($Class* clazz) {
	return $of($alloc(JCDiagnostic$MultilineDiagnostic));
}

void JCDiagnostic$MultilineDiagnostic::init$($JCDiagnostic* other, $List* subdiagnostics) {
	$useLocalCurrentObjectStackCache();
	$var($DiagnosticFormatter, var$0, $nc(other)->defaultFormatter);
	$var($JCDiagnostic$DiagnosticInfo, var$1, other->diagnosticInfo);
	$var($Lint$LintCategory, var$2, other->getLintCategory());
	$var($Set, var$3, other->flags);
	$JCDiagnostic::init$(var$0, var$1, var$2, var$3, $(other->getDiagnosticSource()), other->position);
	$set(this, subdiagnostics, subdiagnostics);
}

$List* JCDiagnostic$MultilineDiagnostic::getSubdiagnostics() {
	return this->subdiagnostics;
}

bool JCDiagnostic$MultilineDiagnostic::isMultiline() {
	return true;
}

$Object* JCDiagnostic$MultilineDiagnostic::getSource() {
	return $of($JCDiagnostic::getSource());
}

JCDiagnostic$MultilineDiagnostic::JCDiagnostic$MultilineDiagnostic() {
}

$Class* JCDiagnostic$MultilineDiagnostic::load$($String* name, bool initialize) {
	$loadClass(JCDiagnostic$MultilineDiagnostic, name, initialize, &_JCDiagnostic$MultilineDiagnostic_ClassInfo_, allocate$JCDiagnostic$MultilineDiagnostic);
	return class$;
}

$Class* JCDiagnostic$MultilineDiagnostic::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com