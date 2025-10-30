#include <com/sun/tools/javac/util/RawDiagnosticFormatter$RawDiagnosticPosHelper.h>

#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/RawDiagnosticFormatter.h>
#include <jcpp.h>

using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $RawDiagnosticFormatter = ::com::sun::tools::javac::util::RawDiagnosticFormatter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _RawDiagnosticFormatter$RawDiagnosticPosHelper_FieldInfo_[] = {
	{"diag", "Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PRIVATE | $FINAL, $field(RawDiagnosticFormatter$RawDiagnosticPosHelper, diag)},
	{}
};

$MethodInfo _RawDiagnosticFormatter$RawDiagnosticPosHelper_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, 0, $method(static_cast<void(RawDiagnosticFormatter$RawDiagnosticPosHelper::*)($JCDiagnostic*)>(&RawDiagnosticFormatter$RawDiagnosticPosHelper::init$))},
	{"getPosition", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Ljava/lang/String;", nullptr, 0},
	{}
};

$InnerClassInfo _RawDiagnosticFormatter$RawDiagnosticPosHelper_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.RawDiagnosticFormatter$RawDiagnosticPosHelper", "com.sun.tools.javac.util.RawDiagnosticFormatter", "RawDiagnosticPosHelper", $STATIC},
	{}
};

$ClassInfo _RawDiagnosticFormatter$RawDiagnosticPosHelper_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.util.RawDiagnosticFormatter$RawDiagnosticPosHelper",
	"java.lang.Object",
	nullptr,
	_RawDiagnosticFormatter$RawDiagnosticPosHelper_FieldInfo_,
	_RawDiagnosticFormatter$RawDiagnosticPosHelper_MethodInfo_,
	nullptr,
	nullptr,
	_RawDiagnosticFormatter$RawDiagnosticPosHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.RawDiagnosticFormatter"
};

$Object* allocate$RawDiagnosticFormatter$RawDiagnosticPosHelper($Class* clazz) {
	return $of($alloc(RawDiagnosticFormatter$RawDiagnosticPosHelper));
}

void RawDiagnosticFormatter$RawDiagnosticPosHelper::init$($JCDiagnostic* diag) {
	$set(this, diag, diag);
}

$String* RawDiagnosticFormatter$RawDiagnosticPosHelper::getPosition($JCTree$JCExpression* exp) {
	$useLocalCurrentObjectStackCache();
	$var($DiagnosticSource, diagSource, $nc(this->diag)->getDiagnosticSource());
	int64_t diagLine = $nc(this->diag)->getLineNumber();
	int64_t expLine = $nc(diagSource)->getLineNumber($nc(exp)->pos$);
	int64_t expCol = diagSource->getColumnNumber($nc(exp)->pos$, false);
	return (expLine == diagLine) ? $String::valueOf(expCol) : $str({$$str(expLine), ":"_s, $$str(expCol)});
}

RawDiagnosticFormatter$RawDiagnosticPosHelper::RawDiagnosticFormatter$RawDiagnosticPosHelper() {
}

$Class* RawDiagnosticFormatter$RawDiagnosticPosHelper::load$($String* name, bool initialize) {
	$loadClass(RawDiagnosticFormatter$RawDiagnosticPosHelper, name, initialize, &_RawDiagnosticFormatter$RawDiagnosticPosHelper_ClassInfo_, allocate$RawDiagnosticFormatter$RawDiagnosticPosHelper);
	return class$;
}

$Class* RawDiagnosticFormatter$RawDiagnosticPosHelper::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com