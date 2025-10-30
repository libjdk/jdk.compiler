#include <com/sun/tools/javac/processing/JavacProcessingEnvironment$ProcessorState.h>

#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler$Handler.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/processing/AnnotationProcessingError.h>
#include <com/sun/tools/javac/processing/JavacProcessingEnvironment.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Warnings.h>
#include <com/sun/tools/javac/util/ClientCodeException.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/MatchingUtils.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Enum.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/Set.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <javax/annotation/processing/ProcessingEnvironment.h>
#include <javax/annotation/processing/Processor.h>
#include <javax/lang/model/SourceVersion.h>
#include <jcpp.h>

using $DeferredCompletionFailureHandler = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler;
using $DeferredCompletionFailureHandler$Handler = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler$Handler;
using $Source = ::com::sun::tools::javac::code::Source;
using $AnnotationProcessingError = ::com::sun::tools::javac::processing::AnnotationProcessingError;
using $JavacProcessingEnvironment = ::com::sun::tools::javac::processing::JavacProcessingEnvironment;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $CompilerProperties$Warnings = ::com::sun::tools::javac::resources::CompilerProperties$Warnings;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $ClientCodeException = ::com::sun::tools::javac::util::ClientCodeException;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $JCDiagnostic$Warning = ::com::sun::tools::javac::util::JCDiagnostic$Warning;
using $Log = ::com::sun::tools::javac::util::Log;
using $MatchingUtils = ::com::sun::tools::javac::util::MatchingUtils;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $Set = ::java::util::Set;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $ProcessingEnvironment = ::javax::annotation::processing::ProcessingEnvironment;
using $Processor = ::javax::annotation::processing::Processor;
using $SourceVersion = ::javax::lang::model::SourceVersion;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

$FieldInfo _JavacProcessingEnvironment$ProcessorState_FieldInfo_[] = {
	{"processor", "Ljavax/annotation/processing/Processor;", nullptr, $PUBLIC, $field(JavacProcessingEnvironment$ProcessorState, processor)},
	{"contributed", "Z", nullptr, $PUBLIC, $field(JavacProcessingEnvironment$ProcessorState, contributed)},
	{"supportedAnnotationStrings", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE, $field(JavacProcessingEnvironment$ProcessorState, supportedAnnotationStrings)},
	{"supportedAnnotationPatterns", "Ljava/util/Set;", "Ljava/util/Set<Ljava/util/regex/Pattern;>;", $PRIVATE, $field(JavacProcessingEnvironment$ProcessorState, supportedAnnotationPatterns)},
	{"supportedOptionNames", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE, $field(JavacProcessingEnvironment$ProcessorState, supportedOptionNames)},
	{}
};

$MethodInfo _JavacProcessingEnvironment$ProcessorState_MethodInfo_[] = {
	{"<init>", "(Ljavax/annotation/processing/Processor;Lcom/sun/tools/javac/util/Log;Lcom/sun/tools/javac/code/Source;Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler;ZLjavax/annotation/processing/ProcessingEnvironment;Z)V", nullptr, 0, $method(static_cast<void(JavacProcessingEnvironment$ProcessorState::*)($Processor*,$Log*,$Source*,$DeferredCompletionFailureHandler*,bool,$ProcessingEnvironment*,bool)>(&JavacProcessingEnvironment$ProcessorState::init$))},
	{"annotationSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"checkOptionName", "(Ljava/lang/String;Lcom/sun/tools/javac/util/Log;)Z", nullptr, $PRIVATE, $method(static_cast<bool(JavacProcessingEnvironment$ProcessorState::*)($String*,$Log*)>(&JavacProcessingEnvironment$ProcessorState::checkOptionName))},
	{"checkSourceVersionCompatibility", "(Lcom/sun/tools/javac/code/Source;Lcom/sun/tools/javac/util/Log;)V", nullptr, $PRIVATE, $method(static_cast<void(JavacProcessingEnvironment$ProcessorState::*)($Source*,$Log*)>(&JavacProcessingEnvironment$ProcessorState::checkSourceVersionCompatibility))},
	{"removeSupportedOptions", "(Ljava/util/Set;)V", "(Ljava/util/Set<Ljava/lang/String;>;)V", $PUBLIC},
	{}
};

$InnerClassInfo _JavacProcessingEnvironment$ProcessorState_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.processing.JavacProcessingEnvironment$ProcessorState", "com.sun.tools.javac.processing.JavacProcessingEnvironment", "ProcessorState", $STATIC},
	{}
};

$ClassInfo _JavacProcessingEnvironment$ProcessorState_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.processing.JavacProcessingEnvironment$ProcessorState",
	"java.lang.Object",
	nullptr,
	_JavacProcessingEnvironment$ProcessorState_FieldInfo_,
	_JavacProcessingEnvironment$ProcessorState_MethodInfo_,
	nullptr,
	nullptr,
	_JavacProcessingEnvironment$ProcessorState_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.processing.JavacProcessingEnvironment"
};

$Object* allocate$JavacProcessingEnvironment$ProcessorState($Class* clazz) {
	return $of($alloc(JavacProcessingEnvironment$ProcessorState));
}

void JavacProcessingEnvironment$ProcessorState::init$($Processor* p, $Log* log, $Source* source, $DeferredCompletionFailureHandler* dcfh, bool allowModules, $ProcessingEnvironment* env, bool lint) {
	$useLocalCurrentObjectStackCache();
	$set(this, processor, p);
	this->contributed = false;
	$var($DeferredCompletionFailureHandler$Handler, prevDeferredHandler, $nc(dcfh)->setHandler(dcfh->userCodeHandler));
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(this->processor)->init(env);
				checkSourceVersionCompatibility(source, log);
				$set(this, supportedAnnotationStrings, $new($LinkedHashSet));
				$set(this, supportedAnnotationPatterns, $new($LinkedHashSet));
				{
					$var($Iterator, i$, $nc($($nc(this->processor)->getSupportedAnnotationTypes()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($String, annotationPattern, $cast($String, i$->next()));
						{
							bool patternAdded = $nc(this->supportedAnnotationStrings)->add(annotationPattern);
							$nc(this->supportedAnnotationPatterns)->add($($JavacProcessingEnvironment::importStringToPattern(allowModules, annotationPattern, this->processor, log, lint)));
							if (lint && !patternAdded) {
								$nc(log)->warning($($CompilerProperties$Warnings::ProcDuplicateSupportedAnnotation(annotationPattern, $($nc($of(p))->getClass()->getName()))));
							}
						}
					}
				}
				bool var$1 = lint && $nc(this->supportedAnnotationPatterns)->contains($($MatchingUtils::validImportStringToPattern("*"_s)));
				if (var$1 && $nc(this->supportedAnnotationPatterns)->size() > 1) {
					$nc(log)->warning($($CompilerProperties$Warnings::ProcRedundantTypesWithWildcard($($nc($of(p))->getClass()->getName()))));
				}
				$set(this, supportedOptionNames, $new($LinkedHashSet));
				{
					$var($Iterator, i$, $nc($($nc(this->processor)->getSupportedOptions()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($String, optionName, $cast($String, i$->next()));
						{
							if (checkOptionName(optionName, log)) {
								bool optionAdded = $nc(this->supportedOptionNames)->add(optionName);
								if (lint && !optionAdded) {
									$nc(log)->warning($($CompilerProperties$Warnings::ProcDuplicateOptionName(optionName, $($nc($of(p))->getClass()->getName()))));
								}
							}
						}
					}
				}
			} catch ($ClientCodeException& e) {
				$throw(e);
			} catch ($Throwable& t) {
				$throwNew($AnnotationProcessingError, t);
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			dcfh->setHandler(prevDeferredHandler);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void JavacProcessingEnvironment$ProcessorState::checkSourceVersionCompatibility($Source* source, $Log* log) {
	$useLocalCurrentObjectStackCache();
	$SourceVersion* procSourceVersion = $nc(this->processor)->getSupportedSourceVersion();
	if ($nc(procSourceVersion)->compareTo($(static_cast<$Enum*>($Source::toSourceVersion(source)))) < 0) {
		$nc(log)->warning($($CompilerProperties$Warnings::ProcProcessorIncompatibleSourceVersion(procSourceVersion, $($nc($of(this->processor))->getClass()->getName()), $nc(source)->name$)));
	}
}

bool JavacProcessingEnvironment$ProcessorState::checkOptionName($String* optionName, $Log* log) {
	$useLocalCurrentObjectStackCache();
	bool valid = $JavacProcessingEnvironment::isValidOptionName(optionName);
	if (!valid) {
		$nc(log)->error($($CompilerProperties$Errors::ProcProcessorBadOptionName(optionName, $($nc($of(this->processor))->getClass()->getName()))));
	}
	return valid;
}

bool JavacProcessingEnvironment$ProcessorState::annotationSupported($String* annotationName) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->supportedAnnotationPatterns)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Pattern, p, $cast($Pattern, i$->next()));
			{
				if ($nc($($nc(p)->matcher(annotationName)))->matches()) {
					return true;
				}
			}
		}
	}
	return false;
}

void JavacProcessingEnvironment$ProcessorState::removeSupportedOptions($Set* unmatchedProcessorOptions) {
	$nc(unmatchedProcessorOptions)->removeAll(this->supportedOptionNames);
}

JavacProcessingEnvironment$ProcessorState::JavacProcessingEnvironment$ProcessorState() {
}

$Class* JavacProcessingEnvironment$ProcessorState::load$($String* name, bool initialize) {
	$loadClass(JavacProcessingEnvironment$ProcessorState, name, initialize, &_JavacProcessingEnvironment$ProcessorState_ClassInfo_, allocate$JavacProcessingEnvironment$ProcessorState);
	return class$;
}

$Class* JavacProcessingEnvironment$ProcessorState::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com