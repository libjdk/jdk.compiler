#include <com/sun/tools/javac/util/Log$DefaultDiagnosticHandler.h>

#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/Log$1.h>
#include <com/sun/tools/javac/util/Log$DiagnosticHandler.h>
#include <com/sun/tools/javac/util/Log.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef API
#undef COMPRESSED

using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticFlag = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
using $Log = ::com::sun::tools::javac::util::Log;
using $Log$1 = ::com::sun::tools::javac::util::Log$1;
using $Log$DiagnosticHandler = ::com::sun::tools::javac::util::Log$DiagnosticHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _Log$DefaultDiagnosticHandler_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/util/Log;", nullptr, $FINAL | $SYNTHETIC, $field(Log$DefaultDiagnosticHandler, this$0)},
	{}
};

$MethodInfo _Log$DefaultDiagnosticHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Log;)V", nullptr, $PRIVATE, $method(static_cast<void(Log$DefaultDiagnosticHandler::*)($Log*)>(&Log$DefaultDiagnosticHandler::init$))},
	{"report", "(Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Log$DefaultDiagnosticHandler_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.Log$DefaultDiagnosticHandler", "com.sun.tools.javac.util.Log", "DefaultDiagnosticHandler", $PRIVATE},
	{"com.sun.tools.javac.util.Log$DiagnosticHandler", "com.sun.tools.javac.util.Log", "DiagnosticHandler", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Log$DefaultDiagnosticHandler_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.util.Log$DefaultDiagnosticHandler",
	"com.sun.tools.javac.util.Log$DiagnosticHandler",
	nullptr,
	_Log$DefaultDiagnosticHandler_FieldInfo_,
	_Log$DefaultDiagnosticHandler_MethodInfo_,
	nullptr,
	nullptr,
	_Log$DefaultDiagnosticHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.Log"
};

$Object* allocate$Log$DefaultDiagnosticHandler($Class* clazz) {
	return $of($alloc(Log$DefaultDiagnosticHandler));
}

void Log$DefaultDiagnosticHandler::init$($Log* this$0) {
	$set(this, this$0, this$0);
	$Log$DiagnosticHandler::init$();
}

void Log$DefaultDiagnosticHandler::report($JCDiagnostic* diagnostic) {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->expectDiagKeys != nullptr) {
		$nc(this->this$0->expectDiagKeys)->remove($($nc(diagnostic)->getCode()));
	}
	$init($Log$1);
	switch ($nc($Log$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType)->get($nc(($($nc(diagnostic)->getType())))->ordinal())) {
	case 1:
		{
			$throwNew($IllegalArgumentException);
		}
	case 2:
		{
			if ((this->this$0->emitWarnings || diagnostic->isMandatory()) && !this->this$0->suppressNotes) {
				this->this$0->writeDiagnostic(diagnostic);
			}
			break;
		}
	case 3:
		{
			if (this->this$0->emitWarnings || diagnostic->isMandatory()) {
				if (this->this$0->nwarnings < this->this$0->MaxWarnings) {
					this->this$0->writeDiagnostic(diagnostic);
					++this->this$0->nwarnings;
				} else {
					++this->this$0->nsuppressedwarns;
				}
			}
			break;
		}
	case 4:
		{
			$init($JCDiagnostic$DiagnosticFlag);
			bool var$0 = diagnostic->isFlagSet($JCDiagnostic$DiagnosticFlag::API);
			if (var$0 || this->this$0->shouldReport(diagnostic)) {
				if (this->this$0->nerrors < this->this$0->MaxErrors) {
					this->this$0->writeDiagnostic(diagnostic);
					++this->this$0->nerrors;
				} else {
					++this->this$0->nsuppressederrors;
				}
			}
			break;
		}
	}
	$init($JCDiagnostic$DiagnosticFlag);
	if (diagnostic->isFlagSet($JCDiagnostic$DiagnosticFlag::COMPRESSED)) {
		this->this$0->compressedOutput = true;
	}
}

Log$DefaultDiagnosticHandler::Log$DefaultDiagnosticHandler() {
}

$Class* Log$DefaultDiagnosticHandler::load$($String* name, bool initialize) {
	$loadClass(Log$DefaultDiagnosticHandler, name, initialize, &_Log$DefaultDiagnosticHandler_ClassInfo_, allocate$Log$DefaultDiagnosticHandler);
	return class$;
}

$Class* Log$DefaultDiagnosticHandler::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com