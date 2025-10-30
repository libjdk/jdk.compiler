#include <com/sun/tools/javac/code/DeferredLintHandler$LintLogger.h>

#include <com/sun/tools/javac/code/DeferredLintHandler.h>
#include <jcpp.h>

using $DeferredLintHandler = ::com::sun::tools::javac::code::DeferredLintHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _DeferredLintHandler$LintLogger_MethodInfo_[] = {
	{"report", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _DeferredLintHandler$LintLogger_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.DeferredLintHandler$LintLogger", "com.sun.tools.javac.code.DeferredLintHandler", "LintLogger", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DeferredLintHandler$LintLogger_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.code.DeferredLintHandler$LintLogger",
	nullptr,
	nullptr,
	nullptr,
	_DeferredLintHandler$LintLogger_MethodInfo_,
	nullptr,
	nullptr,
	_DeferredLintHandler$LintLogger_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.DeferredLintHandler"
};

$Object* allocate$DeferredLintHandler$LintLogger($Class* clazz) {
	return $of($alloc(DeferredLintHandler$LintLogger));
}

$Class* DeferredLintHandler$LintLogger::load$($String* name, bool initialize) {
	$loadClass(DeferredLintHandler$LintLogger, name, initialize, &_DeferredLintHandler$LintLogger_ClassInfo_, allocate$DeferredLintHandler$LintLogger);
	return class$;
}

$Class* DeferredLintHandler$LintLogger::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com