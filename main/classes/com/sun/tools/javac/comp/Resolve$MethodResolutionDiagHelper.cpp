#include <com/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper.h>

#include <com/sun/tools/javac/comp/Resolve$MethodCheckDiag.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$1.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$2.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$DiagnosticRewriter.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$Template.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef ARG_MISMATCH
#undef COMPRESSED

using $Resolve$MethodResolutionDiagHelper$TemplateArray = $Array<::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper$Template>;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$MethodCheckDiag = ::com::sun::tools::javac::comp::Resolve$MethodCheckDiag;
using $Resolve$MethodResolutionDiagHelper$1 = ::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper$1;
using $Resolve$MethodResolutionDiagHelper$2 = ::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper$2;
using $Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter = ::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter;
using $Resolve$MethodResolutionDiagHelper$DiagnosticRewriter = ::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper$DiagnosticRewriter;
using $Resolve$MethodResolutionDiagHelper$Template = ::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper$Template;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticFlag = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Resolve$MethodResolutionDiagHelper_FieldInfo_[] = {
	{"skip", "Lcom/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$Template;", nullptr, $STATIC | $FINAL, $staticField(Resolve$MethodResolutionDiagHelper, skip)},
	{"argMismatchTemplate", "Lcom/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$Template;", nullptr, $STATIC | $FINAL, $staticField(Resolve$MethodResolutionDiagHelper, argMismatchTemplate)},
	{"inferArgMismatchTemplate", "Lcom/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$Template;", nullptr, $STATIC | $FINAL, $staticField(Resolve$MethodResolutionDiagHelper, inferArgMismatchTemplate)},
	{"rewriters", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$Template;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$DiagnosticRewriter;>;", $STATIC | $FINAL, $staticField(Resolve$MethodResolutionDiagHelper, rewriters)},
	{}
};

$MethodInfo _Resolve$MethodResolutionDiagHelper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Resolve$MethodResolutionDiagHelper::*)()>(&Resolve$MethodResolutionDiagHelper::init$))},
	{"rewrite", "(Lcom/sun/tools/javac/util/JCDiagnostic$Factory;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/DiagnosticSource;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $STATIC, $method(static_cast<$JCDiagnostic*(*)($JCDiagnostic$Factory*,$JCDiagnostic$DiagnosticPosition*,$DiagnosticSource*,$JCDiagnostic$DiagnosticType*,$JCDiagnostic*)>(&Resolve$MethodResolutionDiagHelper::rewrite))},
	{}
};

$InnerClassInfo _Resolve$MethodResolutionDiagHelper_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper", "com.sun.tools.javac.comp.Resolve", "MethodResolutionDiagHelper", $STATIC},
	{"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter", "com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper", "ArgMismatchRewriter", $STATIC},
	{"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$Template", "com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper", "Template", $STATIC},
	{"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$DiagnosticRewriter", "com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper", "DiagnosticRewriter", $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Resolve$MethodResolutionDiagHelper_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper",
	"java.lang.Object",
	nullptr,
	_Resolve$MethodResolutionDiagHelper_FieldInfo_,
	_Resolve$MethodResolutionDiagHelper_MethodInfo_,
	nullptr,
	nullptr,
	_Resolve$MethodResolutionDiagHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$MethodResolutionDiagHelper($Class* clazz) {
	return $of($alloc(Resolve$MethodResolutionDiagHelper));
}

$Resolve$MethodResolutionDiagHelper$Template* Resolve$MethodResolutionDiagHelper::skip = nullptr;
$Resolve$MethodResolutionDiagHelper$Template* Resolve$MethodResolutionDiagHelper::argMismatchTemplate = nullptr;
$Resolve$MethodResolutionDiagHelper$Template* Resolve$MethodResolutionDiagHelper::inferArgMismatchTemplate = nullptr;
$Map* Resolve$MethodResolutionDiagHelper::rewriters = nullptr;

void Resolve$MethodResolutionDiagHelper::init$() {
}

$JCDiagnostic* Resolve$MethodResolutionDiagHelper::rewrite($JCDiagnostic$Factory* diags, $JCDiagnostic$DiagnosticPosition* pos, $DiagnosticSource* source, $JCDiagnostic$DiagnosticType* dkind, $JCDiagnostic* d) {
	$init(Resolve$MethodResolutionDiagHelper);
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($nc(Resolve$MethodResolutionDiagHelper::rewriters)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, _entry, $cast($Map$Entry, i$->next()));
			{
				if ($nc(($cast($Resolve$MethodResolutionDiagHelper$Template, $($nc(_entry)->getKey()))))->matches(d)) {
					$var($JCDiagnostic, simpleDiag, $nc(($cast($Resolve$MethodResolutionDiagHelper$DiagnosticRewriter, $(_entry->getValue()))))->rewriteDiagnostic(diags, pos, source, dkind, d));
					$init($JCDiagnostic$DiagnosticFlag);
					$nc(simpleDiag)->setFlag($JCDiagnostic$DiagnosticFlag::COMPRESSED);
					return simpleDiag;
				}
			}
		}
	}
	return nullptr;
}

void clinit$Resolve$MethodResolutionDiagHelper($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Resolve$MethodResolutionDiagHelper::skip, $new($Resolve$MethodResolutionDiagHelper$1, ""_s, $$new($Resolve$MethodResolutionDiagHelper$TemplateArray, 0)));
	$init($Resolve$MethodCheckDiag);
	$assignStatic(Resolve$MethodResolutionDiagHelper::argMismatchTemplate, $new($Resolve$MethodResolutionDiagHelper$Template, $($Resolve$MethodCheckDiag::ARG_MISMATCH->regex()), $$new($Resolve$MethodResolutionDiagHelper$TemplateArray, {Resolve$MethodResolutionDiagHelper::skip})));
	$assignStatic(Resolve$MethodResolutionDiagHelper::inferArgMismatchTemplate, $new($Resolve$MethodResolutionDiagHelper$2, $($Resolve$MethodCheckDiag::ARG_MISMATCH->regex()), $$new($Resolve$MethodResolutionDiagHelper$TemplateArray, {
		Resolve$MethodResolutionDiagHelper::skip,
		Resolve$MethodResolutionDiagHelper::skip
	})));
	$assignStatic(Resolve$MethodResolutionDiagHelper::rewriters, $new($LinkedHashMap));
	{
		$nc(Resolve$MethodResolutionDiagHelper::rewriters)->put(Resolve$MethodResolutionDiagHelper::argMismatchTemplate, $$new($Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter, 0));
		$nc(Resolve$MethodResolutionDiagHelper::rewriters)->put(Resolve$MethodResolutionDiagHelper::inferArgMismatchTemplate, $$new($Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter, 1));
	}
}

Resolve$MethodResolutionDiagHelper::Resolve$MethodResolutionDiagHelper() {
}

$Class* Resolve$MethodResolutionDiagHelper::load$($String* name, bool initialize) {
	$loadClass(Resolve$MethodResolutionDiagHelper, name, initialize, &_Resolve$MethodResolutionDiagHelper_ClassInfo_, clinit$Resolve$MethodResolutionDiagHelper, allocate$Resolve$MethodResolutionDiagHelper);
	return class$;
}

$Class* Resolve$MethodResolutionDiagHelper::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com