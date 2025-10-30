#include <com/sun/tools/javac/util/MandatoryWarningHandler.h>

#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Note.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/MandatoryWarningHandler$DeferredDiagnosticKind.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef ADDITIONAL_IN_FILE
#undef ADDITIONAL_IN_FILES
#undef IN_FILE
#undef IN_FILES

using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $Source = ::com::sun::tools::javac::code::Source;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Note = ::com::sun::tools::javac::util::JCDiagnostic$Note;
using $JCDiagnostic$Warning = ::com::sun::tools::javac::util::JCDiagnostic$Warning;
using $Log = ::com::sun::tools::javac::util::Log;
using $MandatoryWarningHandler$DeferredDiagnosticKind = ::com::sun::tools::javac::util::MandatoryWarningHandler$DeferredDiagnosticKind;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $HashSet = ::java::util::HashSet;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _MandatoryWarningHandler_FieldInfo_[] = {
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $PRIVATE | $FINAL, $field(MandatoryWarningHandler, log)},
	{"source", "Lcom/sun/tools/javac/code/Source;", nullptr, $PRIVATE | $FINAL, $field(MandatoryWarningHandler, source)},
	{"verbose", "Z", nullptr, $PRIVATE | $FINAL, $field(MandatoryWarningHandler, verbose)},
	{"prefix", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MandatoryWarningHandler, prefix)},
	{"sourcesWithReportedWarnings", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/tools/JavaFileObject;>;", $PRIVATE, $field(MandatoryWarningHandler, sourcesWithReportedWarnings)},
	{"deferredDiagnosticKind", "Lcom/sun/tools/javac/util/MandatoryWarningHandler$DeferredDiagnosticKind;", nullptr, $PRIVATE, $field(MandatoryWarningHandler, deferredDiagnosticKind)},
	{"deferredDiagnosticSource", "Ljavax/tools/JavaFileObject;", nullptr, $PRIVATE, $field(MandatoryWarningHandler, deferredDiagnosticSource)},
	{"deferredDiagnosticArg", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(MandatoryWarningHandler, deferredDiagnosticArg)},
	{"enforceMandatory", "Z", nullptr, $PRIVATE | $FINAL, $field(MandatoryWarningHandler, enforceMandatory)},
	{"lintCategory", "Lcom/sun/tools/javac/code/Lint$LintCategory;", nullptr, $PRIVATE | $FINAL, $field(MandatoryWarningHandler, lintCategory)},
	{}
};

$MethodInfo _MandatoryWarningHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Log;Lcom/sun/tools/javac/code/Source;ZZLjava/lang/String;Lcom/sun/tools/javac/code/Lint$LintCategory;)V", nullptr, $PUBLIC, $method(static_cast<void(MandatoryWarningHandler::*)($Log*,$Source*,bool,bool,$String*,$Lint$LintCategory*)>(&MandatoryWarningHandler::init$))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"logMandatoryNote", "(Ljavax/tools/JavaFileObject;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PRIVATE | $TRANSIENT, $method(static_cast<void(MandatoryWarningHandler::*)($JavaFileObject*,$String*,$ObjectArray*)>(&MandatoryWarningHandler::logMandatoryNote))},
	{"logMandatoryWarning", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic$Warning;)V", nullptr, $PRIVATE, $method(static_cast<void(MandatoryWarningHandler::*)($JCDiagnostic$DiagnosticPosition*,$JCDiagnostic$Warning*)>(&MandatoryWarningHandler::logMandatoryWarning))},
	{"report", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic$Warning;)V", nullptr, $PUBLIC},
	{"reportDeferredDiagnostic", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MandatoryWarningHandler_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.MandatoryWarningHandler$DeferredDiagnosticKind", "com.sun.tools.javac.util.MandatoryWarningHandler", "DeferredDiagnosticKind", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _MandatoryWarningHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.MandatoryWarningHandler",
	"java.lang.Object",
	nullptr,
	_MandatoryWarningHandler_FieldInfo_,
	_MandatoryWarningHandler_MethodInfo_,
	nullptr,
	nullptr,
	_MandatoryWarningHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.MandatoryWarningHandler$DeferredDiagnosticKind"
};

$Object* allocate$MandatoryWarningHandler($Class* clazz) {
	return $of($alloc(MandatoryWarningHandler));
}

void MandatoryWarningHandler::init$($Log* log, $Source* source, bool verbose, bool enforceMandatory, $String* prefix, $Lint$LintCategory* lc) {
	$set(this, log, log);
	$set(this, source, source);
	this->verbose = verbose;
	$set(this, prefix, prefix);
	this->enforceMandatory = enforceMandatory;
	$set(this, lintCategory, lc);
}

void MandatoryWarningHandler::report($JCDiagnostic$DiagnosticPosition* pos, $JCDiagnostic$Warning* warnKey) {
	$var($JavaFileObject, currentSource, $nc(this->log)->currentSourceFile());
	if (this->verbose) {
		if (this->sourcesWithReportedWarnings == nullptr) {
			$set(this, sourcesWithReportedWarnings, $new($HashSet));
		}
		if ($nc(this->log)->nwarnings < $nc(this->log)->MaxWarnings) {
			logMandatoryWarning(pos, warnKey);
			$nc(this->sourcesWithReportedWarnings)->add(currentSource);
		} else if (this->deferredDiagnosticKind == nullptr) {
			if ($nc(this->sourcesWithReportedWarnings)->contains(currentSource)) {
				$init($MandatoryWarningHandler$DeferredDiagnosticKind);
				$set(this, deferredDiagnosticKind, $MandatoryWarningHandler$DeferredDiagnosticKind::ADDITIONAL_IN_FILE);
			} else {
				$init($MandatoryWarningHandler$DeferredDiagnosticKind);
				$set(this, deferredDiagnosticKind, $MandatoryWarningHandler$DeferredDiagnosticKind::IN_FILE);
			}
			$set(this, deferredDiagnosticSource, currentSource);
			$set(this, deferredDiagnosticArg, currentSource);
		} else {
			$init($MandatoryWarningHandler$DeferredDiagnosticKind);
			if ((this->deferredDiagnosticKind == $MandatoryWarningHandler$DeferredDiagnosticKind::IN_FILE || this->deferredDiagnosticKind == $MandatoryWarningHandler$DeferredDiagnosticKind::ADDITIONAL_IN_FILE) && !$Objects::equals(this->deferredDiagnosticSource, currentSource)) {
				$set(this, deferredDiagnosticKind, $MandatoryWarningHandler$DeferredDiagnosticKind::ADDITIONAL_IN_FILES);
				$set(this, deferredDiagnosticArg, nullptr);
			}
		}
	} else if (this->deferredDiagnosticKind == nullptr) {
		$init($MandatoryWarningHandler$DeferredDiagnosticKind);
		$set(this, deferredDiagnosticKind, $MandatoryWarningHandler$DeferredDiagnosticKind::IN_FILE);
		$set(this, deferredDiagnosticSource, currentSource);
		$set(this, deferredDiagnosticArg, currentSource);
	} else {
		$init($MandatoryWarningHandler$DeferredDiagnosticKind);
		if (this->deferredDiagnosticKind == $MandatoryWarningHandler$DeferredDiagnosticKind::IN_FILE && !$Objects::equals(this->deferredDiagnosticSource, currentSource)) {
			$set(this, deferredDiagnosticKind, $MandatoryWarningHandler$DeferredDiagnosticKind::IN_FILES);
			$set(this, deferredDiagnosticArg, nullptr);
		}
	}
}

void MandatoryWarningHandler::reportDeferredDiagnostic() {
	$useLocalCurrentObjectStackCache();
	if (this->deferredDiagnosticKind != nullptr) {
		if (this->deferredDiagnosticArg == nullptr) {
			if (this->source != nullptr) {
				logMandatoryNote(this->deferredDiagnosticSource, $($nc(this->deferredDiagnosticKind)->getKey(this->prefix)), $$new($ObjectArray, {$of(this->source)}));
			} else {
				logMandatoryNote(this->deferredDiagnosticSource, $($nc(this->deferredDiagnosticKind)->getKey(this->prefix)), $$new($ObjectArray, 0));
			}
		} else if (this->source != nullptr) {
			logMandatoryNote(this->deferredDiagnosticSource, $($nc(this->deferredDiagnosticKind)->getKey(this->prefix)), $$new($ObjectArray, {
				this->deferredDiagnosticArg,
				$of(this->source)
			}));
		} else {
			logMandatoryNote(this->deferredDiagnosticSource, $($nc(this->deferredDiagnosticKind)->getKey(this->prefix)), $$new($ObjectArray, {this->deferredDiagnosticArg}));
		}
		if (!this->verbose) {
			logMandatoryNote(this->deferredDiagnosticSource, $$str({this->prefix, ".recompile"_s}), $$new($ObjectArray, 0));
		}
	}
}

void MandatoryWarningHandler::logMandatoryWarning($JCDiagnostic$DiagnosticPosition* pos, $JCDiagnostic$Warning* warnKey) {
	if (this->enforceMandatory) {
		$nc(this->log)->mandatoryWarning(this->lintCategory, pos, warnKey);
	} else {
		$nc(this->log)->warning(this->lintCategory, pos, warnKey);
	}
}

void MandatoryWarningHandler::logMandatoryNote($JavaFileObject* file, $String* msg, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	if (this->enforceMandatory) {
		$nc(this->log)->mandatoryNote(file, $$new($JCDiagnostic$Note, "compiler"_s, msg, args));
	} else {
		$nc(this->log)->note(file, $$new($JCDiagnostic$Note, "compiler"_s, msg, args));
	}
}

void MandatoryWarningHandler::clear() {
	$set(this, sourcesWithReportedWarnings, nullptr);
	$set(this, deferredDiagnosticKind, nullptr);
	$set(this, deferredDiagnosticSource, nullptr);
	$set(this, deferredDiagnosticArg, nullptr);
}

MandatoryWarningHandler::MandatoryWarningHandler() {
}

$Class* MandatoryWarningHandler::load$($String* name, bool initialize) {
	$loadClass(MandatoryWarningHandler, name, initialize, &_MandatoryWarningHandler_ClassInfo_, allocate$MandatoryWarningHandler);
	return class$;
}

$Class* MandatoryWarningHandler::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com