#include <com/sun/tools/javac/processing/JavacMessager.h>

#include <com/sun/tools/javac/model/JavacElements.h>
#include <com/sun/tools/javac/processing/JavacMessager$1.h>
#include <com/sun/tools/javac/processing/JavacProcessingEnvironment.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Notes.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Warnings.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Note.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <java/lang/CharSequence.h>
#include <javax/lang/model/element/AnnotationMirror.h>
#include <javax/lang/model/element/AnnotationValue.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/util/Elements.h>
#include <javax/tools/Diagnostic$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef API
#undef ERROR
#undef NOTE
#undef WARNING

using $JavacElements = ::com::sun::tools::javac::model::JavacElements;
using $JavacMessager$1 = ::com::sun::tools::javac::processing::JavacMessager$1;
using $JavacProcessingEnvironment = ::com::sun::tools::javac::processing::JavacProcessingEnvironment;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $CompilerProperties$Notes = ::com::sun::tools::javac::resources::CompilerProperties$Notes;
using $CompilerProperties$Warnings = ::com::sun::tools::javac::resources::CompilerProperties$Warnings;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Context = ::com::sun::tools::javac::util::Context;
using $JCDiagnostic$DiagnosticFlag = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $JCDiagnostic$Note = ::com::sun::tools::javac::util::JCDiagnostic$Note;
using $JCDiagnostic$Warning = ::com::sun::tools::javac::util::JCDiagnostic$Warning;
using $Log = ::com::sun::tools::javac::util::Log;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Messager = ::javax::annotation::processing::Messager;
using $AnnotationMirror = ::javax::lang::model::element::AnnotationMirror;
using $AnnotationValue = ::javax::lang::model::element::AnnotationValue;
using $Element = ::javax::lang::model::element::Element;
using $Diagnostic$Kind = ::javax::tools::Diagnostic$Kind;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

$FieldInfo _JavacMessager_FieldInfo_[] = {
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, 0, $field(JavacMessager, log)},
	{"processingEnv", "Lcom/sun/tools/javac/processing/JavacProcessingEnvironment;", nullptr, 0, $field(JavacMessager, processingEnv)},
	{"errorCount", "I", nullptr, 0, $field(JavacMessager, errorCount$)},
	{"warningCount", "I", nullptr, 0, $field(JavacMessager, warningCount$)},
	{}
};

$MethodInfo _JavacMessager_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;Lcom/sun/tools/javac/processing/JavacProcessingEnvironment;)V", nullptr, 0, $method(static_cast<void(JavacMessager::*)($Context*,$JavacProcessingEnvironment*)>(&JavacMessager::init$))},
	{"errorCount", "()I", nullptr, $PUBLIC},
	{"errorRaised", "()Z", nullptr, $PUBLIC},
	{"newRound", "()V", nullptr, $PUBLIC},
	{"printError", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"printMessage", "(Ljavax/tools/Diagnostic$Kind;Ljava/lang/CharSequence;)V", nullptr, $PUBLIC},
	{"printMessage", "(Ljavax/tools/Diagnostic$Kind;Ljava/lang/CharSequence;Ljavax/lang/model/element/Element;)V", nullptr, $PUBLIC},
	{"printMessage", "(Ljavax/tools/Diagnostic$Kind;Ljava/lang/CharSequence;Ljavax/lang/model/element/Element;Ljavax/lang/model/element/AnnotationMirror;)V", nullptr, $PUBLIC},
	{"printMessage", "(Ljavax/tools/Diagnostic$Kind;Ljava/lang/CharSequence;Ljavax/lang/model/element/Element;Ljavax/lang/model/element/AnnotationMirror;Ljavax/lang/model/element/AnnotationValue;)V", nullptr, $PUBLIC},
	{"printNotice", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"printWarning", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"warningCount", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JavacMessager_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.processing.JavacMessager$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _JavacMessager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.processing.JavacMessager",
	"java.lang.Object",
	"javax.annotation.processing.Messager",
	_JavacMessager_FieldInfo_,
	_JavacMessager_MethodInfo_,
	nullptr,
	nullptr,
	_JavacMessager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.processing.JavacMessager$1"
};

$Object* allocate$JavacMessager($Class* clazz) {
	return $of($alloc(JavacMessager));
}

void JavacMessager::init$($Context* context, $JavacProcessingEnvironment* processingEnv) {
	this->errorCount$ = 0;
	this->warningCount$ = 0;
	$set(this, log, $Log::instance(context));
	$set(this, processingEnv, processingEnv);
}

void JavacMessager::printMessage($Diagnostic$Kind* kind, $CharSequence* msg) {
	printMessage(kind, msg, nullptr, nullptr, nullptr);
}

void JavacMessager::printMessage($Diagnostic$Kind* kind, $CharSequence* msg, $Element* e) {
	printMessage(kind, msg, e, nullptr, nullptr);
}

void JavacMessager::printMessage($Diagnostic$Kind* kind, $CharSequence* msg, $Element* e, $AnnotationMirror* a) {
	printMessage(kind, msg, e, a, nullptr);
}

void JavacMessager::printMessage($Diagnostic$Kind* kind, $CharSequence* msg, $Element* e, $AnnotationMirror* a, $AnnotationValue* v) {
	$useLocalCurrentObjectStackCache();
	$var($JavaFileObject, oldSource, nullptr);
	$var($JavaFileObject, newSource, nullptr);
	$var($JCDiagnostic$DiagnosticPosition, pos, nullptr);
	$var($JavacElements, elemUtils, $cast($JavacElements, $nc(this->processingEnv)->getElementUtils()));
	$var($Pair, treeTop, $nc(elemUtils)->getTreeAndTopLevel(e, a, v));
	if (treeTop != nullptr) {
		$assign(newSource, $nc(($cast($JCTree$JCCompilationUnit, treeTop->snd)))->sourcefile);
		if (newSource != nullptr) {
			$assign(oldSource, $nc(this->log)->useSource(newSource));
			$assign(pos, $nc(($cast($JCTree, treeTop->fst)))->pos());
		}
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($JavacMessager$1);
			switch ($nc($JavacMessager$1::$SwitchMap$javax$tools$Diagnostic$Kind)->get($nc((kind))->ordinal())) {
			case 1:
				{
					++this->errorCount$;
					$init($JCDiagnostic$DiagnosticFlag);
					$nc(this->log)->error($JCDiagnostic$DiagnosticFlag::API, pos, $($CompilerProperties$Errors::ProcMessager($($nc(msg)->toString()))));
					break;
				}
			case 2:
				{
					++this->warningCount$;
					$nc(this->log)->warning(pos, $($CompilerProperties$Warnings::ProcMessager($($nc(msg)->toString()))));
					break;
				}
			case 3:
				{
					++this->warningCount$;
					$nc(this->log)->mandatoryWarning(pos, $($CompilerProperties$Warnings::ProcMessager($($nc(msg)->toString()))));
					break;
				}
			default:
				{
					$nc(this->log)->note(pos, $($CompilerProperties$Notes::ProcMessager($($nc(msg)->toString()))));
					break;
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (newSource != nullptr) {
				$nc(this->log)->useSource(oldSource);
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void JavacMessager::printError($String* msg) {
	$init($Diagnostic$Kind);
	printMessage($Diagnostic$Kind::ERROR, msg);
}

void JavacMessager::printWarning($String* msg) {
	$init($Diagnostic$Kind);
	printMessage($Diagnostic$Kind::WARNING, msg);
}

void JavacMessager::printNotice($String* msg) {
	$init($Diagnostic$Kind);
	printMessage($Diagnostic$Kind::NOTE, msg);
}

bool JavacMessager::errorRaised() {
	return this->errorCount$ > 0;
}

int32_t JavacMessager::errorCount() {
	return this->errorCount$;
}

int32_t JavacMessager::warningCount() {
	return this->warningCount$;
}

void JavacMessager::newRound() {
	this->errorCount$ = 0;
}

$String* JavacMessager::toString() {
	return "javac Messager"_s;
}

JavacMessager::JavacMessager() {
}

$Class* JavacMessager::load$($String* name, bool initialize) {
	$loadClass(JavacMessager, name, initialize, &_JavacMessager_ClassInfo_, allocate$JavacMessager);
	return class$;
}

$Class* JavacMessager::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com