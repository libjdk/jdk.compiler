#include <com/sun/tools/javac/comp/Flow$FlowAnalyzer$ThrownPendingExit.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Flow$BaseAnalyzer$PendingExit.h>
#include <com/sun/tools/javac/comp/Flow$FlowAnalyzer.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Flow$BaseAnalyzer$PendingExit = ::com::sun::tools::javac::comp::Flow$BaseAnalyzer$PendingExit;
using $Flow$FlowAnalyzer = ::com::sun::tools::javac::comp::Flow$FlowAnalyzer;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Flow$FlowAnalyzer$ThrownPendingExit_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/comp/Flow$FlowAnalyzer;", nullptr, $FINAL | $SYNTHETIC, $field(Flow$FlowAnalyzer$ThrownPendingExit, this$1)},
	{"thrown", "Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(Flow$FlowAnalyzer$ThrownPendingExit, thrown)},
	{}
};

$MethodInfo _Flow$FlowAnalyzer$ThrownPendingExit_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Flow$FlowAnalyzer;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0, $method(static_cast<void(Flow$FlowAnalyzer$ThrownPendingExit::*)($Flow$FlowAnalyzer*,$JCTree*,$Type*)>(&Flow$FlowAnalyzer$ThrownPendingExit::init$))},
	{}
};

$InnerClassInfo _Flow$FlowAnalyzer$ThrownPendingExit_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Flow$FlowAnalyzer", "com.sun.tools.javac.comp.Flow", "FlowAnalyzer", 0},
	{"com.sun.tools.javac.comp.Flow$FlowAnalyzer$ThrownPendingExit", "com.sun.tools.javac.comp.Flow$FlowAnalyzer", "ThrownPendingExit", 0},
	{"com.sun.tools.javac.comp.Flow$BaseAnalyzer", "com.sun.tools.javac.comp.Flow", "BaseAnalyzer", $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.comp.Flow$BaseAnalyzer$PendingExit", "com.sun.tools.javac.comp.Flow$BaseAnalyzer", "PendingExit", $STATIC},
	{}
};

$ClassInfo _Flow$FlowAnalyzer$ThrownPendingExit_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Flow$FlowAnalyzer$ThrownPendingExit",
	"com.sun.tools.javac.comp.Flow$BaseAnalyzer$PendingExit",
	nullptr,
	_Flow$FlowAnalyzer$ThrownPendingExit_FieldInfo_,
	_Flow$FlowAnalyzer$ThrownPendingExit_MethodInfo_,
	nullptr,
	nullptr,
	_Flow$FlowAnalyzer$ThrownPendingExit_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Flow"
};

$Object* allocate$Flow$FlowAnalyzer$ThrownPendingExit($Class* clazz) {
	return $of($alloc(Flow$FlowAnalyzer$ThrownPendingExit));
}

void Flow$FlowAnalyzer$ThrownPendingExit::init$($Flow$FlowAnalyzer* this$1, $JCTree* tree, $Type* thrown) {
	$set(this, this$1, this$1);
	$Flow$BaseAnalyzer$PendingExit::init$(tree);
	$set(this, thrown, thrown);
}

Flow$FlowAnalyzer$ThrownPendingExit::Flow$FlowAnalyzer$ThrownPendingExit() {
}

$Class* Flow$FlowAnalyzer$ThrownPendingExit::load$($String* name, bool initialize) {
	$loadClass(Flow$FlowAnalyzer$ThrownPendingExit, name, initialize, &_Flow$FlowAnalyzer$ThrownPendingExit_ClassInfo_, allocate$Flow$FlowAnalyzer$ThrownPendingExit);
	return class$;
}

$Class* Flow$FlowAnalyzer$ThrownPendingExit::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com