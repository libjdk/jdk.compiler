#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>

#include <com/sun/tools/javac/tree/EndPosTable.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <jcpp.h>

using $EndPosTable = ::com::sun::tools::javac::tree::EndPosTable;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$MethodInfo _JCDiagnostic$DiagnosticPosition_MethodInfo_[] = {
	{"getEndPosition", "(Lcom/sun/tools/javac/tree/EndPosTable;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getPreferredPosition", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getStartPosition", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getTree", "()Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _JCDiagnostic$DiagnosticPosition_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.JCDiagnostic$DiagnosticPosition", "com.sun.tools.javac.util.JCDiagnostic", "DiagnosticPosition", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JCDiagnostic$DiagnosticPosition_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.util.JCDiagnostic$DiagnosticPosition",
	nullptr,
	nullptr,
	nullptr,
	_JCDiagnostic$DiagnosticPosition_MethodInfo_,
	nullptr,
	nullptr,
	_JCDiagnostic$DiagnosticPosition_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.JCDiagnostic"
};

$Object* allocate$JCDiagnostic$DiagnosticPosition($Class* clazz) {
	return $of($alloc(JCDiagnostic$DiagnosticPosition));
}

$Class* JCDiagnostic$DiagnosticPosition::load$($String* name, bool initialize) {
	$loadClass(JCDiagnostic$DiagnosticPosition, name, initialize, &_JCDiagnostic$DiagnosticPosition_ClassInfo_, allocate$JCDiagnostic$DiagnosticPosition);
	return class$;
}

$Class* JCDiagnostic$DiagnosticPosition::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com