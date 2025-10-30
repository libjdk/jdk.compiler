#include <com/sun/tools/javac/comp/Analyzer$1.h>

#include <com/sun/tools/javac/comp/Analyzer$RewritingContext.h>
#include <com/sun/tools/javac/comp/Analyzer.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <jcpp.h>

using $Analyzer = ::com::sun::tools::javac::comp::Analyzer;
using $Analyzer$DeferredAnalysisHelper = ::com::sun::tools::javac::comp::Analyzer$DeferredAnalysisHelper;
using $Analyzer$RewritingContext = ::com::sun::tools::javac::comp::Analyzer$RewritingContext;
using $Env = ::com::sun::tools::javac::comp::Env;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Analyzer$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Analyzer;", nullptr, $FINAL | $SYNTHETIC, $field(Analyzer$1, this$0)},
	{}
};

$MethodInfo _Analyzer$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Analyzer;)V", nullptr, 0, $method(static_cast<void(Analyzer$1::*)($Analyzer*)>(&Analyzer$1::init$))},
	{"flush", "(Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PUBLIC},
	{"queue", "(Lcom/sun/tools/javac/comp/Analyzer$RewritingContext;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Analyzer$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Analyzer",
	nullptr,
	nullptr
};

$InnerClassInfo _Analyzer$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Analyzer$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Analyzer$DeferredAnalysisHelper", "com.sun.tools.javac.comp.Analyzer", "DeferredAnalysisHelper", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Analyzer$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Analyzer$1",
	"java.lang.Object",
	"com.sun.tools.javac.comp.Analyzer$DeferredAnalysisHelper",
	_Analyzer$1_FieldInfo_,
	_Analyzer$1_MethodInfo_,
	nullptr,
	&_Analyzer$1_EnclosingMethodInfo_,
	_Analyzer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Analyzer"
};

$Object* allocate$Analyzer$1($Class* clazz) {
	return $of($alloc(Analyzer$1));
}

void Analyzer$1::init$($Analyzer* this$0) {
	$set(this, this$0, this$0);
}

void Analyzer$1::queue($Analyzer$RewritingContext* rewriting) {
}

void Analyzer$1::flush($Env* flushEnv) {
}

Analyzer$1::Analyzer$1() {
}

$Class* Analyzer$1::load$($String* name, bool initialize) {
	$loadClass(Analyzer$1, name, initialize, &_Analyzer$1_ClassInfo_, allocate$Analyzer$1);
	return class$;
}

$Class* Analyzer$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com