#include <com/sun/tools/javac/comp/Infer$GraphStrategy.h>

#include <com/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node.h>
#include <com/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <jcpp.h>

using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$GraphSolver$InferenceGraph = ::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph;
using $Infer$GraphSolver$InferenceGraph$Node = ::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph$Node;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$MethodInfo _Infer$GraphStrategy_MethodInfo_[] = {
	{"done", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"pickNode", "(Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph;)Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph$Node;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.tools.javac.comp.Infer$GraphStrategy$NodeNotFoundException"},
	{}
};

$InnerClassInfo _Infer$GraphStrategy_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Infer$GraphStrategy", "com.sun.tools.javac.comp.Infer", "GraphStrategy", $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.comp.Infer$GraphStrategy$NodeNotFoundException", "com.sun.tools.javac.comp.Infer$GraphStrategy", "NodeNotFoundException", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Infer$GraphStrategy_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.comp.Infer$GraphStrategy",
	nullptr,
	nullptr,
	nullptr,
	_Infer$GraphStrategy_MethodInfo_,
	nullptr,
	nullptr,
	_Infer$GraphStrategy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Infer"
};

$Object* allocate$Infer$GraphStrategy($Class* clazz) {
	return $of($alloc(Infer$GraphStrategy));
}

$Class* Infer$GraphStrategy::load$($String* name, bool initialize) {
	$loadClass(Infer$GraphStrategy, name, initialize, &_Infer$GraphStrategy_ClassInfo_, allocate$Infer$GraphStrategy);
	return class$;
}

$Class* Infer$GraphStrategy::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com