#include <com/sun/tools/javac/comp/Analyzer$DeferredAnalysisHelper.h>

#include <com/sun/tools/javac/comp/Analyzer$RewritingContext.h>
#include <com/sun/tools/javac/comp/Analyzer.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <jcpp.h>

using $Analyzer = ::com::sun::tools::javac::comp::Analyzer;
using $Analyzer$RewritingContext = ::com::sun::tools::javac::comp::Analyzer$RewritingContext;
using $Env = ::com::sun::tools::javac::comp::Env;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$MethodInfo _Analyzer$DeferredAnalysisHelper_MethodInfo_[] = {
	{"flush", "(Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PUBLIC | $ABSTRACT},
	{"queue", "(Lcom/sun/tools/javac/comp/Analyzer$RewritingContext;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Analyzer$DeferredAnalysisHelper_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Analyzer$DeferredAnalysisHelper", "com.sun.tools.javac.comp.Analyzer", "DeferredAnalysisHelper", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Analyzer$DeferredAnalysisHelper_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.comp.Analyzer$DeferredAnalysisHelper",
	nullptr,
	nullptr,
	nullptr,
	_Analyzer$DeferredAnalysisHelper_MethodInfo_,
	nullptr,
	nullptr,
	_Analyzer$DeferredAnalysisHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Analyzer"
};

$Object* allocate$Analyzer$DeferredAnalysisHelper($Class* clazz) {
	return $of($alloc(Analyzer$DeferredAnalysisHelper));
}

$Class* Analyzer$DeferredAnalysisHelper::load$($String* name, bool initialize) {
	$loadClass(Analyzer$DeferredAnalysisHelper, name, initialize, &_Analyzer$DeferredAnalysisHelper_ClassInfo_, allocate$Analyzer$DeferredAnalysisHelper);
	return class$;
}

$Class* Analyzer$DeferredAnalysisHelper::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com