#include <com/sun/tools/javac/util/Log$DiscardDiagnosticHandler.h>

#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/Log$DiagnosticHandler.h>
#include <com/sun/tools/javac/util/Log.h>
#include <jcpp.h>

using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $Log = ::com::sun::tools::javac::util::Log;
using $Log$DiagnosticHandler = ::com::sun::tools::javac::util::Log$DiagnosticHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$MethodInfo _Log$DiscardDiagnosticHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Log;)V", nullptr, $PUBLIC, $method(static_cast<void(Log$DiscardDiagnosticHandler::*)($Log*)>(&Log$DiscardDiagnosticHandler::init$))},
	{"report", "(Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Log$DiscardDiagnosticHandler_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.Log$DiscardDiagnosticHandler", "com.sun.tools.javac.util.Log", "DiscardDiagnosticHandler", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.util.Log$DiagnosticHandler", "com.sun.tools.javac.util.Log", "DiagnosticHandler", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Log$DiscardDiagnosticHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.Log$DiscardDiagnosticHandler",
	"com.sun.tools.javac.util.Log$DiagnosticHandler",
	nullptr,
	nullptr,
	_Log$DiscardDiagnosticHandler_MethodInfo_,
	nullptr,
	nullptr,
	_Log$DiscardDiagnosticHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.Log"
};

$Object* allocate$Log$DiscardDiagnosticHandler($Class* clazz) {
	return $of($alloc(Log$DiscardDiagnosticHandler));
}

void Log$DiscardDiagnosticHandler::init$($Log* log) {
	$Log$DiagnosticHandler::init$();
	install(log);
}

void Log$DiscardDiagnosticHandler::report($JCDiagnostic* diag) {
}

Log$DiscardDiagnosticHandler::Log$DiscardDiagnosticHandler() {
}

$Class* Log$DiscardDiagnosticHandler::load$($String* name, bool initialize) {
	$loadClass(Log$DiscardDiagnosticHandler, name, initialize, &_Log$DiscardDiagnosticHandler_ClassInfo_, allocate$Log$DiscardDiagnosticHandler);
	return class$;
}

$Class* Log$DiscardDiagnosticHandler::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com