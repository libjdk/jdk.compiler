#include <com/sun/tools/javac/util/JCDiagnostic$SourcePosition.h>

#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/Position.h>
#include <jcpp.h>

#undef NOPOS

using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $Position = ::com::sun::tools::javac::util::Position;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _JCDiagnostic$SourcePosition_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $FINAL | $SYNTHETIC, $field(JCDiagnostic$SourcePosition, this$0)},
	{"line", "I", nullptr, $PRIVATE | $FINAL, $field(JCDiagnostic$SourcePosition, line)},
	{"column", "I", nullptr, $PRIVATE | $FINAL, $field(JCDiagnostic$SourcePosition, column)},
	{}
};

$MethodInfo _JCDiagnostic$SourcePosition_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, 0, $method(static_cast<void(JCDiagnostic$SourcePosition::*)($JCDiagnostic*)>(&JCDiagnostic$SourcePosition::init$))},
	{"getColumnNumber", "()I", nullptr, $PUBLIC},
	{"getLineNumber", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCDiagnostic$SourcePosition_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.JCDiagnostic$SourcePosition", "com.sun.tools.javac.util.JCDiagnostic", "SourcePosition", 0},
	{}
};

$ClassInfo _JCDiagnostic$SourcePosition_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.util.JCDiagnostic$SourcePosition",
	"java.lang.Object",
	nullptr,
	_JCDiagnostic$SourcePosition_FieldInfo_,
	_JCDiagnostic$SourcePosition_MethodInfo_,
	nullptr,
	nullptr,
	_JCDiagnostic$SourcePosition_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.JCDiagnostic"
};

$Object* allocate$JCDiagnostic$SourcePosition($Class* clazz) {
	return $of($alloc(JCDiagnostic$SourcePosition));
}

void JCDiagnostic$SourcePosition::init$($JCDiagnostic* this$0) {
	$set(this, this$0, this$0);
	int32_t n = (this$0->position == nullptr ? $Position::NOPOS : $nc(this$0->position)->getPreferredPosition());
	if (n == $Position::NOPOS || this$0->source == nullptr) {
		this->line = (this->column = -1);
	} else {
		this->line = $nc(this$0->source)->getLineNumber(n);
		this->column = $nc(this$0->source)->getColumnNumber(n, true);
	}
}

int32_t JCDiagnostic$SourcePosition::getLineNumber() {
	return this->line;
}

int32_t JCDiagnostic$SourcePosition::getColumnNumber() {
	return this->column;
}

JCDiagnostic$SourcePosition::JCDiagnostic$SourcePosition() {
}

$Class* JCDiagnostic$SourcePosition::load$($String* name, bool initialize) {
	$loadClass(JCDiagnostic$SourcePosition, name, initialize, &_JCDiagnostic$SourcePosition_ClassInfo_, allocate$JCDiagnostic$SourcePosition);
	return class$;
}

$Class* JCDiagnostic$SourcePosition::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com