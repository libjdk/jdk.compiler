#include <com/sun/tools/javac/comp/Flow$SnippetAliveAnalyzer.h>

#include <com/sun/tools/javac/comp/Flow$AliveAnalyzer.h>
#include <com/sun/tools/javac/comp/Flow$Liveness.h>
#include <com/sun/tools/javac/comp/Flow.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <jcpp.h>

#undef DEAD

using $Flow = ::com::sun::tools::javac::comp::Flow;
using $Flow$AliveAnalyzer = ::com::sun::tools::javac::comp::Flow$AliveAnalyzer;
using $Flow$Liveness = ::com::sun::tools::javac::comp::Flow$Liveness;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Flow$SnippetAliveAnalyzer_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Flow;", nullptr, $FINAL | $SYNTHETIC, $field(Flow$SnippetAliveAnalyzer, this$0)},
	{}
};

$MethodInfo _Flow$SnippetAliveAnalyzer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Flow;)V", nullptr, 0, $method(static_cast<void(Flow$SnippetAliveAnalyzer::*)($Flow*)>(&Flow$SnippetAliveAnalyzer::init$))},
	{"isAlive", "()Z", nullptr, $PUBLIC},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Flow$SnippetAliveAnalyzer_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Flow$SnippetAliveAnalyzer", "com.sun.tools.javac.comp.Flow", "SnippetAliveAnalyzer", 0},
	{"com.sun.tools.javac.comp.Flow$AliveAnalyzer", "com.sun.tools.javac.comp.Flow", "AliveAnalyzer", 0},
	{}
};

$ClassInfo _Flow$SnippetAliveAnalyzer_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Flow$SnippetAliveAnalyzer",
	"com.sun.tools.javac.comp.Flow$AliveAnalyzer",
	nullptr,
	_Flow$SnippetAliveAnalyzer_FieldInfo_,
	_Flow$SnippetAliveAnalyzer_MethodInfo_,
	nullptr,
	nullptr,
	_Flow$SnippetAliveAnalyzer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Flow"
};

$Object* allocate$Flow$SnippetAliveAnalyzer($Class* clazz) {
	return $of($alloc(Flow$SnippetAliveAnalyzer));
}

void Flow$SnippetAliveAnalyzer::init$($Flow* this$0) {
	$set(this, this$0, this$0);
	$Flow$AliveAnalyzer::init$(this$0);
}

void Flow$SnippetAliveAnalyzer::visitClassDef($JCTree$JCClassDecl* tree) {
}

void Flow$SnippetAliveAnalyzer::visitLambda($JCTree$JCLambda* tree) {
}

bool Flow$SnippetAliveAnalyzer::isAlive() {
	$init($Flow$Liveness);
	return this->alive != $Flow$Liveness::DEAD;
}

Flow$SnippetAliveAnalyzer::Flow$SnippetAliveAnalyzer() {
}

$Class* Flow$SnippetAliveAnalyzer::load$($String* name, bool initialize) {
	$loadClass(Flow$SnippetAliveAnalyzer, name, initialize, &_Flow$SnippetAliveAnalyzer_ClassInfo_, allocate$Flow$SnippetAliveAnalyzer);
	return class$;
}

$Class* Flow$SnippetAliveAnalyzer::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com