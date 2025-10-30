#include <com/sun/tools/javac/comp/Flow$BaseAnalyzer$PendingExit.h>

#include <com/sun/tools/javac/comp/Flow$BaseAnalyzer.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

using $Flow$BaseAnalyzer = ::com::sun::tools::javac::comp::Flow$BaseAnalyzer;
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

$FieldInfo _Flow$BaseAnalyzer$PendingExit_FieldInfo_[] = {
	{"tree", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, 0, $field(Flow$BaseAnalyzer$PendingExit, tree)},
	{}
};

$MethodInfo _Flow$BaseAnalyzer$PendingExit_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, 0, $method(static_cast<void(Flow$BaseAnalyzer$PendingExit::*)($JCTree*)>(&Flow$BaseAnalyzer$PendingExit::init$))},
	{"resolveJump", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _Flow$BaseAnalyzer$PendingExit_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Flow$BaseAnalyzer", "com.sun.tools.javac.comp.Flow", "BaseAnalyzer", $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.comp.Flow$BaseAnalyzer$PendingExit", "com.sun.tools.javac.comp.Flow$BaseAnalyzer", "PendingExit", $STATIC},
	{}
};

$ClassInfo _Flow$BaseAnalyzer$PendingExit_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Flow$BaseAnalyzer$PendingExit",
	"java.lang.Object",
	nullptr,
	_Flow$BaseAnalyzer$PendingExit_FieldInfo_,
	_Flow$BaseAnalyzer$PendingExit_MethodInfo_,
	nullptr,
	nullptr,
	_Flow$BaseAnalyzer$PendingExit_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Flow"
};

$Object* allocate$Flow$BaseAnalyzer$PendingExit($Class* clazz) {
	return $of($alloc(Flow$BaseAnalyzer$PendingExit));
}

void Flow$BaseAnalyzer$PendingExit::init$($JCTree* tree) {
	$set(this, tree, tree);
}

void Flow$BaseAnalyzer$PendingExit::resolveJump() {
}

Flow$BaseAnalyzer$PendingExit::Flow$BaseAnalyzer$PendingExit() {
}

$Class* Flow$BaseAnalyzer$PendingExit::load$($String* name, bool initialize) {
	$loadClass(Flow$BaseAnalyzer$PendingExit, name, initialize, &_Flow$BaseAnalyzer$PendingExit_ClassInfo_, allocate$Flow$BaseAnalyzer$PendingExit);
	return class$;
}

$Class* Flow$BaseAnalyzer$PendingExit::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com