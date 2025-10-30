#include <com/sun/tools/javac/util/Log$DeferredDiagnosticHandler.h>

#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log$DiagnosticHandler.h>
#include <com/sun/tools/javac/util/Log.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractQueue.h>
#include <java/util/Queue.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

#undef NON_DEFERRABLE

using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticFlag = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $Log$DiagnosticHandler = ::com::sun::tools::javac::util::Log$DiagnosticHandler;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractQueue = ::java::util::AbstractQueue;
using $Queue = ::java::util::Queue;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class Log$DeferredDiagnosticHandler$$Lambda$lambda$reportDeferredDiagnostics$0 : public $Predicate {
	$class(Log$DeferredDiagnosticHandler$$Lambda$lambda$reportDeferredDiagnostics$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* d) override {
		 return Log$DeferredDiagnosticHandler::lambda$reportDeferredDiagnostics$0($cast($JCDiagnostic, d));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Log$DeferredDiagnosticHandler$$Lambda$lambda$reportDeferredDiagnostics$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Log$DeferredDiagnosticHandler$$Lambda$lambda$reportDeferredDiagnostics$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Log$DeferredDiagnosticHandler$$Lambda$lambda$reportDeferredDiagnostics$0::*)()>(&Log$DeferredDiagnosticHandler$$Lambda$lambda$reportDeferredDiagnostics$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Log$DeferredDiagnosticHandler$$Lambda$lambda$reportDeferredDiagnostics$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.util.Log$DeferredDiagnosticHandler$$Lambda$lambda$reportDeferredDiagnostics$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Log$DeferredDiagnosticHandler$$Lambda$lambda$reportDeferredDiagnostics$0::load$($String* name, bool initialize) {
	$loadClass(Log$DeferredDiagnosticHandler$$Lambda$lambda$reportDeferredDiagnostics$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Log$DeferredDiagnosticHandler$$Lambda$lambda$reportDeferredDiagnostics$0::class$ = nullptr;

$FieldInfo _Log$DeferredDiagnosticHandler_FieldInfo_[] = {
	{"deferred", "Ljava/util/Queue;", "Ljava/util/Queue<Lcom/sun/tools/javac/util/JCDiagnostic;>;", $PRIVATE, $field(Log$DeferredDiagnosticHandler, deferred)},
	{"filter", "Ljava/util/function/Predicate;", "Ljava/util/function/Predicate<Lcom/sun/tools/javac/util/JCDiagnostic;>;", $PRIVATE | $FINAL, $field(Log$DeferredDiagnosticHandler, filter)},
	{}
};

$MethodInfo _Log$DeferredDiagnosticHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Log;)V", nullptr, $PUBLIC, $method(static_cast<void(Log$DeferredDiagnosticHandler::*)($Log*)>(&Log$DeferredDiagnosticHandler::init$))},
	{"<init>", "(Lcom/sun/tools/javac/util/Log;Ljava/util/function/Predicate;)V", "(Lcom/sun/tools/javac/util/Log;Ljava/util/function/Predicate<Lcom/sun/tools/javac/util/JCDiagnostic;>;)V", $PUBLIC, $method(static_cast<void(Log$DeferredDiagnosticHandler::*)($Log*,$Predicate*)>(&Log$DeferredDiagnosticHandler::init$))},
	{"getDiagnostics", "()Ljava/util/Queue;", "()Ljava/util/Queue<Lcom/sun/tools/javac/util/JCDiagnostic;>;", $PUBLIC},
	{"lambda$reportDeferredDiagnostics$0", "(Lcom/sun/tools/javac/util/JCDiagnostic;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($JCDiagnostic*)>(&Log$DeferredDiagnosticHandler::lambda$reportDeferredDiagnostics$0))},
	{"report", "(Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, $PUBLIC},
	{"reportDeferredDiagnostics", "()V", nullptr, $PUBLIC},
	{"reportDeferredDiagnostics", "(Ljava/util/function/Predicate;)V", "(Ljava/util/function/Predicate<Lcom/sun/tools/javac/util/JCDiagnostic;>;)V", $PUBLIC},
	{}
};

$InnerClassInfo _Log$DeferredDiagnosticHandler_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.Log$DeferredDiagnosticHandler", "com.sun.tools.javac.util.Log", "DeferredDiagnosticHandler", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.util.Log$DiagnosticHandler", "com.sun.tools.javac.util.Log", "DiagnosticHandler", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Log$DeferredDiagnosticHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.Log$DeferredDiagnosticHandler",
	"com.sun.tools.javac.util.Log$DiagnosticHandler",
	nullptr,
	_Log$DeferredDiagnosticHandler_FieldInfo_,
	_Log$DeferredDiagnosticHandler_MethodInfo_,
	nullptr,
	nullptr,
	_Log$DeferredDiagnosticHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.Log"
};

$Object* allocate$Log$DeferredDiagnosticHandler($Class* clazz) {
	return $of($alloc(Log$DeferredDiagnosticHandler));
}

void Log$DeferredDiagnosticHandler::init$($Log* log) {
	Log$DeferredDiagnosticHandler::init$(log, nullptr);
}

void Log$DeferredDiagnosticHandler::init$($Log* log, $Predicate* filter) {
	$Log$DiagnosticHandler::init$();
	$set(this, deferred, $new($ListBuffer));
	$set(this, filter, filter);
	install(log);
}

void Log$DeferredDiagnosticHandler::report($JCDiagnostic* diag) {
	$init($JCDiagnostic$DiagnosticFlag);
	bool var$0 = !$nc(diag)->isFlagSet($JCDiagnostic$DiagnosticFlag::NON_DEFERRABLE);
	if (var$0 && (this->filter == nullptr || $nc(this->filter)->test(diag))) {
		$nc(this->deferred)->add(diag);
	} else {
		$nc(this->prev)->report(diag);
	}
}

$Queue* Log$DeferredDiagnosticHandler::getDiagnostics() {
	return this->deferred;
}

void Log$DeferredDiagnosticHandler::reportDeferredDiagnostics() {
	reportDeferredDiagnostics(static_cast<$Predicate*>($$new(Log$DeferredDiagnosticHandler$$Lambda$lambda$reportDeferredDiagnostics$0)));
}

void Log$DeferredDiagnosticHandler::reportDeferredDiagnostics($Predicate* accepter) {
	$var($JCDiagnostic, d, nullptr);
	while (($assign(d, $cast($JCDiagnostic, $nc(this->deferred)->poll()))) != nullptr) {
		if ($nc(accepter)->test(d)) {
			$nc(this->prev)->report(d);
		}
	}
	$set(this, deferred, nullptr);
}

bool Log$DeferredDiagnosticHandler::lambda$reportDeferredDiagnostics$0($JCDiagnostic* d) {
	$init(Log$DeferredDiagnosticHandler);
	return true;
}

Log$DeferredDiagnosticHandler::Log$DeferredDiagnosticHandler() {
}

$Class* Log$DeferredDiagnosticHandler::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Log$DeferredDiagnosticHandler$$Lambda$lambda$reportDeferredDiagnostics$0::classInfo$.name)) {
			return Log$DeferredDiagnosticHandler$$Lambda$lambda$reportDeferredDiagnostics$0::load$(name, initialize);
		}
	}
	$loadClass(Log$DeferredDiagnosticHandler, name, initialize, &_Log$DeferredDiagnosticHandler_ClassInfo_, allocate$Log$DeferredDiagnosticHandler);
	return class$;
}

$Class* Log$DeferredDiagnosticHandler::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com