#include <com/sun/tools/javac/util/Log$DiagnosticHandler.h>

#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/Log.h>
#include <jcpp.h>

using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $Log = ::com::sun::tools::javac::util::Log;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _Log$DiagnosticHandler_FieldInfo_[] = {
	{"prev", "Lcom/sun/tools/javac/util/Log$DiagnosticHandler;", nullptr, $PROTECTED, $field(Log$DiagnosticHandler, prev)},
	{}
};

$MethodInfo _Log$DiagnosticHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Log$DiagnosticHandler::*)()>(&Log$DiagnosticHandler::init$))},
	{"install", "(Lcom/sun/tools/javac/util/Log;)V", nullptr, $PROTECTED},
	{"report", "(Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Log$DiagnosticHandler_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.Log$DiagnosticHandler", "com.sun.tools.javac.util.Log", "DiagnosticHandler", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Log$DiagnosticHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.util.Log$DiagnosticHandler",
	"java.lang.Object",
	nullptr,
	_Log$DiagnosticHandler_FieldInfo_,
	_Log$DiagnosticHandler_MethodInfo_,
	nullptr,
	nullptr,
	_Log$DiagnosticHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.Log"
};

$Object* allocate$Log$DiagnosticHandler($Class* clazz) {
	return $of($alloc(Log$DiagnosticHandler));
}

void Log$DiagnosticHandler::init$() {
}

void Log$DiagnosticHandler::install($Log* log) {
	$set(this, prev, $nc(log)->diagnosticHandler);
	$set(log, diagnosticHandler, this);
}

Log$DiagnosticHandler::Log$DiagnosticHandler() {
}

$Class* Log$DiagnosticHandler::load$($String* name, bool initialize) {
	$loadClass(Log$DiagnosticHandler, name, initialize, &_Log$DiagnosticHandler_ClassInfo_, allocate$Log$DiagnosticHandler);
	return class$;
}

$Class* Log$DiagnosticHandler::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com