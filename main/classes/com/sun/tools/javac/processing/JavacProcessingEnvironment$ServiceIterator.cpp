#include <com/sun/tools/javac/processing/JavacProcessingEnvironment$ServiceIterator.h>

#include <com/sun/tools/javac/processing/JavacProcessingEnvironment.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/util/Abort.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/Log.h>
#include <java/lang/ClassFormatError.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Error.h>
#include <java/lang/LinkageError.h>
#include <java/lang/UnsupportedClassVersionError.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Iterator.h>
#include <java/util/ServiceConfigurationError.h>
#include <java/util/ServiceLoader.h>
#include <javax/annotation/processing/Processor.h>
#include <jcpp.h>

using $JavacProcessingEnvironment = ::com::sun::tools::javac::processing::JavacProcessingEnvironment;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $Abort = ::com::sun::tools::javac::util::Abort;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $Log = ::com::sun::tools::javac::util::Log;
using $ClassFormatError = ::java::lang::ClassFormatError;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $LinkageError = ::java::lang::LinkageError;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedClassVersionError = ::java::lang::UnsupportedClassVersionError;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Iterator = ::java::util::Iterator;
using $ServiceConfigurationError = ::java::util::ServiceConfigurationError;
using $ServiceLoader = ::java::util::ServiceLoader;
using $Processor = ::javax::annotation::processing::Processor;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

$FieldInfo _JavacProcessingEnvironment$ServiceIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/processing/JavacProcessingEnvironment;", nullptr, $FINAL | $SYNTHETIC, $field(JavacProcessingEnvironment$ServiceIterator, this$0)},
	{"iterator", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljavax/annotation/processing/Processor;>;", 0, $field(JavacProcessingEnvironment$ServiceIterator, iterator)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, 0, $field(JavacProcessingEnvironment$ServiceIterator, log)},
	{"loader", "Ljava/util/ServiceLoader;", "Ljava/util/ServiceLoader<Ljavax/annotation/processing/Processor;>;", 0, $field(JavacProcessingEnvironment$ServiceIterator, loader)},
	{}
};

$MethodInfo _JavacProcessingEnvironment$ServiceIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/processing/JavacProcessingEnvironment;Ljava/lang/ClassLoader;Lcom/sun/tools/javac/util/Log;)V", nullptr, 0, $method(static_cast<void(JavacProcessingEnvironment$ServiceIterator::*)($JavacProcessingEnvironment*,$ClassLoader*,$Log*)>(&JavacProcessingEnvironment$ServiceIterator::init$))},
	{"<init>", "(Lcom/sun/tools/javac/processing/JavacProcessingEnvironment;Ljava/util/ServiceLoader;Lcom/sun/tools/javac/util/Log;)V", "(Ljava/util/ServiceLoader<Ljavax/annotation/processing/Processor;>;Lcom/sun/tools/javac/util/Log;)V", 0, $method(static_cast<void(JavacProcessingEnvironment$ServiceIterator::*)($JavacProcessingEnvironment*,$ServiceLoader*,$Log*)>(&JavacProcessingEnvironment$ServiceIterator::init$))},
	{"close", "()V", nullptr, $PUBLIC},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"internalHasNext", "()Z", nullptr, 0},
	{"internalNext", "()Ljavax/annotation/processing/Processor;", nullptr, 0},
	{"next", "()Ljavax/annotation/processing/Processor;", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JavacProcessingEnvironment$ServiceIterator_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.processing.JavacProcessingEnvironment$ServiceIterator", "com.sun.tools.javac.processing.JavacProcessingEnvironment", "ServiceIterator", $PRIVATE},
	{}
};

$ClassInfo _JavacProcessingEnvironment$ServiceIterator_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.processing.JavacProcessingEnvironment$ServiceIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_JavacProcessingEnvironment$ServiceIterator_FieldInfo_,
	_JavacProcessingEnvironment$ServiceIterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljavax/annotation/processing/Processor;>;",
	nullptr,
	_JavacProcessingEnvironment$ServiceIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.processing.JavacProcessingEnvironment"
};

$Object* allocate$JavacProcessingEnvironment$ServiceIterator($Class* clazz) {
	return $of($alloc(JavacProcessingEnvironment$ServiceIterator));
}

void JavacProcessingEnvironment$ServiceIterator::init$($JavacProcessingEnvironment* this$0, $ClassLoader* classLoader, $Log* log) {
	$beforeCallerSensitive();
	$set(this, this$0, this$0);
	$set(this, log, log);
	try {
		try {
			$load($Processor);
			$set(this, loader, $ServiceLoader::load($Processor::class$, classLoader));
			$set(this, iterator, $nc(this->loader)->iterator());
		} catch ($Exception& e) {
			$set(this, iterator, this$0->handleServiceLoaderUnavailability("proc.no.service"_s, nullptr));
		}
	} catch ($Throwable& t) {
		$init($CompilerProperties$Errors);
		$nc(log)->error($CompilerProperties$Errors::ProcServiceProblem);
		$throwNew($Abort, t);
	}
}

void JavacProcessingEnvironment$ServiceIterator::init$($JavacProcessingEnvironment* this$0, $ServiceLoader* loader, $Log* log) {
	$set(this, this$0, this$0);
	$set(this, log, log);
	$set(this, loader, loader);
	$set(this, iterator, $nc(loader)->iterator());
}

bool JavacProcessingEnvironment$ServiceIterator::hasNext() {
	$useLocalCurrentObjectStackCache();
	try {
		return internalHasNext();
	} catch ($ServiceConfigurationError& sce) {
		$nc(this->log)->error($($CompilerProperties$Errors::ProcBadConfigFile($(sce->getLocalizedMessage()))));
		$throwNew($Abort, sce);
	} catch ($UnsupportedClassVersionError& ucve) {
		$nc(this->log)->error($($CompilerProperties$Errors::ProcCantLoadClass($(ucve->getLocalizedMessage()))));
		$throwNew($Abort, ucve);
	} catch ($ClassFormatError& cfe) {
		$nc(this->log)->error($($CompilerProperties$Errors::ProcCantLoadClass($(cfe->getLocalizedMessage()))));
		$throwNew($Abort, cfe);
	} catch ($Throwable& t) {
		$nc(this->log)->error($($CompilerProperties$Errors::ProcBadConfigFile($(t->getLocalizedMessage()))));
		$throwNew($Abort, t);
	}
	$shouldNotReachHere();
}

bool JavacProcessingEnvironment$ServiceIterator::internalHasNext() {
	return $nc(this->iterator)->hasNext();
}

$Object* JavacProcessingEnvironment$ServiceIterator::next() {
	$useLocalCurrentObjectStackCache();
	try {
		return $of(internalNext());
	} catch ($ServiceConfigurationError& sce) {
		$nc(this->log)->error($($CompilerProperties$Errors::ProcBadConfigFile($(sce->getLocalizedMessage()))));
		$throwNew($Abort, sce);
	} catch ($Throwable& t) {
		$nc(this->log)->error($($CompilerProperties$Errors::ProcBadConfigFile($(t->getLocalizedMessage()))));
		$throwNew($Abort, t);
	}
	$shouldNotReachHere();
}

$Processor* JavacProcessingEnvironment$ServiceIterator::internalNext() {
	return $cast($Processor, $nc(this->iterator)->next());
}

void JavacProcessingEnvironment$ServiceIterator::remove() {
	$throwNew($UnsupportedOperationException);
}

void JavacProcessingEnvironment$ServiceIterator::close() {
	if (this->loader != nullptr) {
		try {
			$nc(this->loader)->reload();
		} catch ($Exception& e) {
		}
	}
}

JavacProcessingEnvironment$ServiceIterator::JavacProcessingEnvironment$ServiceIterator() {
}

$Class* JavacProcessingEnvironment$ServiceIterator::load$($String* name, bool initialize) {
	$loadClass(JavacProcessingEnvironment$ServiceIterator, name, initialize, &_JavacProcessingEnvironment$ServiceIterator_ClassInfo_, allocate$JavacProcessingEnvironment$ServiceIterator);
	return class$;
}

$Class* JavacProcessingEnvironment$ServiceIterator::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com