#include <com/sun/tools/javac/comp/Flow$BaseAnalyzer$JumpKind$3.h>

#include <com/sun/tools/javac/comp/Flow$BaseAnalyzer$JumpKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCYield.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

using $Flow$BaseAnalyzer$JumpKind = ::com::sun::tools::javac::comp::Flow$BaseAnalyzer$JumpKind;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCYield = ::com::sun::tools::javac::tree::JCTree$JCYield;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$MethodInfo _Flow$BaseAnalyzer$JumpKind$3_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILcom/sun/tools/javac/tree/JCTree$Tag;)V", nullptr, $PRIVATE, $method(static_cast<void(Flow$BaseAnalyzer$JumpKind$3::*)($String*,int32_t,$JCTree$Tag*)>(&Flow$BaseAnalyzer$JumpKind$3::init$))},
	{"getTarget", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, 0},
	{}
};

$EnclosingMethodInfo _Flow$BaseAnalyzer$JumpKind$3_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Flow$BaseAnalyzer$JumpKind",
	nullptr,
	nullptr
};

$InnerClassInfo _Flow$BaseAnalyzer$JumpKind$3_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Flow$BaseAnalyzer", "com.sun.tools.javac.comp.Flow", "BaseAnalyzer", $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.comp.Flow$BaseAnalyzer$JumpKind", "com.sun.tools.javac.comp.Flow$BaseAnalyzer", "JumpKind", $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.tools.javac.comp.Flow$BaseAnalyzer$JumpKind$3", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Flow$BaseAnalyzer$JumpKind$3_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.comp.Flow$BaseAnalyzer$JumpKind$3",
	"com.sun.tools.javac.comp.Flow$BaseAnalyzer$JumpKind",
	nullptr,
	nullptr,
	_Flow$BaseAnalyzer$JumpKind$3_MethodInfo_,
	nullptr,
	&_Flow$BaseAnalyzer$JumpKind$3_EnclosingMethodInfo_,
	_Flow$BaseAnalyzer$JumpKind$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Flow"
};

$Object* allocate$Flow$BaseAnalyzer$JumpKind$3($Class* clazz) {
	return $of($alloc(Flow$BaseAnalyzer$JumpKind$3));
}

void Flow$BaseAnalyzer$JumpKind$3::init$($String* $enum$name, int32_t $enum$ordinal, $JCTree$Tag* treeTag) {
	$Flow$BaseAnalyzer$JumpKind::init$($enum$name, $enum$ordinal, treeTag);
}

$JCTree* Flow$BaseAnalyzer$JumpKind$3::getTarget($JCTree* tree) {
	return $nc(($cast($JCTree$JCYield, tree)))->target;
}

Flow$BaseAnalyzer$JumpKind$3::Flow$BaseAnalyzer$JumpKind$3() {
}

$Class* Flow$BaseAnalyzer$JumpKind$3::load$($String* name, bool initialize) {
	$loadClass(Flow$BaseAnalyzer$JumpKind$3, name, initialize, &_Flow$BaseAnalyzer$JumpKind$3_ClassInfo_, allocate$Flow$BaseAnalyzer$JumpKind$3);
	return class$;
}

$Class* Flow$BaseAnalyzer$JumpKind$3::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com