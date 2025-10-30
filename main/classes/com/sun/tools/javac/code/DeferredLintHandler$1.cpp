#include <com/sun/tools/javac/code/DeferredLintHandler$1.h>

#include <com/sun/tools/javac/tree/EndPosTable.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <jcpp.h>

using $EndPosTable = ::com::sun::tools::javac::tree::EndPosTable;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _DeferredLintHandler$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DeferredLintHandler$1::*)()>(&DeferredLintHandler$1::init$))},
	{"getEndPosition", "(Lcom/sun/tools/javac/tree/EndPosTable;)I", nullptr, $PUBLIC},
	{"getPreferredPosition", "()I", nullptr, $PUBLIC},
	{"getStartPosition", "()I", nullptr, $PUBLIC},
	{"getTree", "()Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DeferredLintHandler$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.DeferredLintHandler",
	nullptr,
	nullptr
};

$InnerClassInfo _DeferredLintHandler$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.DeferredLintHandler$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.util.JCDiagnostic$DiagnosticPosition", "com.sun.tools.javac.util.JCDiagnostic", "DiagnosticPosition", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DeferredLintHandler$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.DeferredLintHandler$1",
	"java.lang.Object",
	"com.sun.tools.javac.util.JCDiagnostic$DiagnosticPosition",
	nullptr,
	_DeferredLintHandler$1_MethodInfo_,
	nullptr,
	&_DeferredLintHandler$1_EnclosingMethodInfo_,
	_DeferredLintHandler$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.DeferredLintHandler"
};

$Object* allocate$DeferredLintHandler$1($Class* clazz) {
	return $of($alloc(DeferredLintHandler$1));
}

void DeferredLintHandler$1::init$() {
}

$JCTree* DeferredLintHandler$1::getTree() {
	$Assert::error();
	return nullptr;
}

int32_t DeferredLintHandler$1::getStartPosition() {
	$Assert::error();
	return -1;
}

int32_t DeferredLintHandler$1::getPreferredPosition() {
	$Assert::error();
	return -1;
}

int32_t DeferredLintHandler$1::getEndPosition($EndPosTable* endPosTable) {
	$Assert::error();
	return -1;
}

DeferredLintHandler$1::DeferredLintHandler$1() {
}

$Class* DeferredLintHandler$1::load$($String* name, bool initialize) {
	$loadClass(DeferredLintHandler$1, name, initialize, &_DeferredLintHandler$1_ClassInfo_, allocate$DeferredLintHandler$1);
	return class$;
}

$Class* DeferredLintHandler$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com