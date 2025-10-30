#include <com/sun/tools/javac/comp/Infer$GraphStrategy$NodeNotFoundException.h>

#include <com/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph.h>
#include <com/sun/tools/javac/comp/Infer$GraphStrategy.h>
#include <jcpp.h>

using $Infer$GraphSolver$InferenceGraph = ::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph;
using $Infer$GraphStrategy = ::com::sun::tools::javac::comp::Infer$GraphStrategy;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Infer$GraphStrategy$NodeNotFoundException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Infer$GraphStrategy$NodeNotFoundException, serialVersionUID)},
	{"graph", "Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph;", nullptr, $TRANSIENT, $field(Infer$GraphStrategy$NodeNotFoundException, graph)},
	{}
};

$MethodInfo _Infer$GraphStrategy$NodeNotFoundException_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Infer$GraphSolver$InferenceGraph;)V", nullptr, $PUBLIC, $method(static_cast<void(Infer$GraphStrategy$NodeNotFoundException::*)($Infer$GraphSolver$InferenceGraph*)>(&Infer$GraphStrategy$NodeNotFoundException::init$))},
	{}
};

$InnerClassInfo _Infer$GraphStrategy$NodeNotFoundException_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Infer$GraphStrategy", "com.sun.tools.javac.comp.Infer", "GraphStrategy", $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.comp.Infer$GraphStrategy$NodeNotFoundException", "com.sun.tools.javac.comp.Infer$GraphStrategy", "NodeNotFoundException", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Infer$GraphStrategy$NodeNotFoundException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.Infer$GraphStrategy$NodeNotFoundException",
	"java.lang.RuntimeException",
	nullptr,
	_Infer$GraphStrategy$NodeNotFoundException_FieldInfo_,
	_Infer$GraphStrategy$NodeNotFoundException_MethodInfo_,
	nullptr,
	nullptr,
	_Infer$GraphStrategy$NodeNotFoundException_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Infer"
};

$Object* allocate$Infer$GraphStrategy$NodeNotFoundException($Class* clazz) {
	return $of($alloc(Infer$GraphStrategy$NodeNotFoundException));
}

void Infer$GraphStrategy$NodeNotFoundException::init$($Infer$GraphSolver$InferenceGraph* graph) {
	$RuntimeException::init$();
	$set(this, graph, graph);
}

Infer$GraphStrategy$NodeNotFoundException::Infer$GraphStrategy$NodeNotFoundException() {
}

Infer$GraphStrategy$NodeNotFoundException::Infer$GraphStrategy$NodeNotFoundException(const Infer$GraphStrategy$NodeNotFoundException& e) : $RuntimeException(e) {
}

void Infer$GraphStrategy$NodeNotFoundException::throw$() {
	throw *this;
}

$Class* Infer$GraphStrategy$NodeNotFoundException::load$($String* name, bool initialize) {
	$loadClass(Infer$GraphStrategy$NodeNotFoundException, name, initialize, &_Infer$GraphStrategy$NodeNotFoundException_ClassInfo_, allocate$Infer$GraphStrategy$NodeNotFoundException);
	return class$;
}

$Class* Infer$GraphStrategy$NodeNotFoundException::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com