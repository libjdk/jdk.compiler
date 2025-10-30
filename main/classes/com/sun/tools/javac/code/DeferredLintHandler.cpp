#include <com/sun/tools/javac/code/DeferredLintHandler.h>

#include <com/sun/tools/javac/code/DeferredLintHandler$1.h>
#include <com/sun/tools/javac/code/DeferredLintHandler$LintLogger.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef IMMEDIATE_POSITION

using $DeferredLintHandler$1 = ::com::sun::tools::javac::code::DeferredLintHandler$1;
using $DeferredLintHandler$LintLogger = ::com::sun::tools::javac::code::DeferredLintHandler$LintLogger;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _DeferredLintHandler_FieldInfo_[] = {
	{"deferredLintHandlerKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/code/DeferredLintHandler;>;", $PROTECTED | $STATIC | $FINAL, $staticField(DeferredLintHandler, deferredLintHandlerKey)},
	{"currentPos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PRIVATE, $field(DeferredLintHandler, currentPos)},
	{"loggersQueue", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/code/DeferredLintHandler$LintLogger;>;>;", $PRIVATE, $field(DeferredLintHandler, loggersQueue)},
	{"IMMEDIATE_POSITION", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DeferredLintHandler, IMMEDIATE_POSITION)},
	{}
};

$MethodInfo _DeferredLintHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(DeferredLintHandler::*)($Context*)>(&DeferredLintHandler::init$))},
	{"flush", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PUBLIC},
	{"immediate", "()Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/code/DeferredLintHandler;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DeferredLintHandler*(*)($Context*)>(&DeferredLintHandler::instance))},
	{"report", "(Lcom/sun/tools/javac/code/DeferredLintHandler$LintLogger;)V", nullptr, $PUBLIC},
	{"setPos", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DeferredLintHandler_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.DeferredLintHandler$LintLogger", "com.sun.tools.javac.code.DeferredLintHandler", "LintLogger", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.code.DeferredLintHandler$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DeferredLintHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.DeferredLintHandler",
	"java.lang.Object",
	nullptr,
	_DeferredLintHandler_FieldInfo_,
	_DeferredLintHandler_MethodInfo_,
	nullptr,
	nullptr,
	_DeferredLintHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.DeferredLintHandler$LintLogger,com.sun.tools.javac.code.DeferredLintHandler$1"
};

$Object* allocate$DeferredLintHandler($Class* clazz) {
	return $of($alloc(DeferredLintHandler));
}

$Context$Key* DeferredLintHandler::deferredLintHandlerKey = nullptr;
$JCDiagnostic$DiagnosticPosition* DeferredLintHandler::IMMEDIATE_POSITION = nullptr;

DeferredLintHandler* DeferredLintHandler::instance($Context* context) {
	$init(DeferredLintHandler);
	$var(DeferredLintHandler, instance, $cast(DeferredLintHandler, $nc(context)->get(DeferredLintHandler::deferredLintHandlerKey)));
	if (instance == nullptr) {
		$assign(instance, $new(DeferredLintHandler, context));
	}
	return instance;
}

void DeferredLintHandler::init$($Context* context) {
	$set(this, loggersQueue, $new($HashMap));
	$nc(context)->put(DeferredLintHandler::deferredLintHandlerKey, $of(this));
	$set(this, currentPos, DeferredLintHandler::IMMEDIATE_POSITION);
}

void DeferredLintHandler::report($DeferredLintHandler$LintLogger* logger) {
	if (this->currentPos == DeferredLintHandler::IMMEDIATE_POSITION) {
		$nc(logger)->report();
	} else {
		$var($ListBuffer, loggers, $cast($ListBuffer, $nc(this->loggersQueue)->get(this->currentPos)));
		if (loggers == nullptr) {
			$nc(this->loggersQueue)->put(this->currentPos, $assign(loggers, $new($ListBuffer)));
		}
		$nc(loggers)->append(logger);
	}
}

void DeferredLintHandler::flush($JCDiagnostic$DiagnosticPosition* pos) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, loggers, $cast($ListBuffer, $nc(this->loggersQueue)->get(pos)));
	if (loggers != nullptr) {
		{
			$var($Iterator, i$, loggers->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($DeferredLintHandler$LintLogger, lintLogger, $cast($DeferredLintHandler$LintLogger, i$->next()));
				{
					$nc(lintLogger)->report();
				}
			}
		}
		$nc(this->loggersQueue)->remove(pos);
	}
}

$JCDiagnostic$DiagnosticPosition* DeferredLintHandler::setPos($JCDiagnostic$DiagnosticPosition* currentPos) {
	$var($JCDiagnostic$DiagnosticPosition, prevPosition, this->currentPos);
	$set(this, currentPos, currentPos);
	return prevPosition;
}

$JCDiagnostic$DiagnosticPosition* DeferredLintHandler::immediate() {
	return setPos(DeferredLintHandler::IMMEDIATE_POSITION);
}

void clinit$DeferredLintHandler($Class* class$) {
	$assignStatic(DeferredLintHandler::deferredLintHandlerKey, $new($Context$Key));
	$assignStatic(DeferredLintHandler::IMMEDIATE_POSITION, $new($DeferredLintHandler$1));
}

DeferredLintHandler::DeferredLintHandler() {
}

$Class* DeferredLintHandler::load$($String* name, bool initialize) {
	$loadClass(DeferredLintHandler, name, initialize, &_DeferredLintHandler_ClassInfo_, clinit$DeferredLintHandler, allocate$DeferredLintHandler);
	return class$;
}

$Class* DeferredLintHandler::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com