#include <com/sun/tools/javac/processing/JavacProcessingEnvironment$NameProcessIterator.h>

#include <com/sun/tools/javac/processing/AnnotationProcessingError.h>
#include <com/sun/tools/javac/processing/JavacProcessingEnvironment.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/util/ClientCodeException.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/Log.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/InternalError.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/NoSuchElementException.h>
#include <javax/annotation/processing/Processor.h>
#include <jcpp.h>

using $AnnotationProcessingError = ::com::sun::tools::javac::processing::AnnotationProcessingError;
using $JavacProcessingEnvironment = ::com::sun::tools::javac::processing::JavacProcessingEnvironment;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $ClientCodeException = ::com::sun::tools::javac::util::ClientCodeException;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $Log = ::com::sun::tools::javac::util::Log;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $NullPointerException = ::java::lang::NullPointerException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Constructor = ::java::lang::reflect::Constructor;
using $Method = ::java::lang::reflect::Method;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Processor = ::javax::annotation::processing::Processor;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

$FieldInfo _JavacProcessingEnvironment$NameProcessIterator_FieldInfo_[] = {
	{"nextProc", "Ljavax/annotation/processing/Processor;", nullptr, 0, $field(JavacProcessingEnvironment$NameProcessIterator, nextProc)},
	{"names", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/lang/String;>;", 0, $field(JavacProcessingEnvironment$NameProcessIterator, names)},
	{"processorCL", "Ljava/lang/ClassLoader;", nullptr, 0, $field(JavacProcessingEnvironment$NameProcessIterator, processorCL)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, 0, $field(JavacProcessingEnvironment$NameProcessIterator, log)},
	{}
};

$MethodInfo _JavacProcessingEnvironment$NameProcessIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/ClassLoader;Lcom/sun/tools/javac/util/Log;)V", nullptr, 0, $method(static_cast<void(JavacProcessingEnvironment$NameProcessIterator::*)($String*,$ClassLoader*,$Log*)>(&JavacProcessingEnvironment$NameProcessIterator::init$))},
	{"ensureReadable", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PRIVATE, $method(static_cast<void(JavacProcessingEnvironment$NameProcessIterator::*)($Class*)>(&JavacProcessingEnvironment$NameProcessIterator::ensureReadable))},
	{"getNextProcessor", "(Ljava/lang/String;)Ljavax/annotation/processing/Processor;", nullptr, $PRIVATE, $method(static_cast<$Processor*(JavacProcessingEnvironment$NameProcessIterator::*)($String*)>(&JavacProcessingEnvironment$NameProcessIterator::getNextProcessor))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljavax/annotation/processing/Processor;", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JavacProcessingEnvironment$NameProcessIterator_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.processing.JavacProcessingEnvironment$NameProcessIterator", "com.sun.tools.javac.processing.JavacProcessingEnvironment", "NameProcessIterator", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JavacProcessingEnvironment$NameProcessIterator_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.processing.JavacProcessingEnvironment$NameProcessIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_JavacProcessingEnvironment$NameProcessIterator_FieldInfo_,
	_JavacProcessingEnvironment$NameProcessIterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljavax/annotation/processing/Processor;>;",
	nullptr,
	_JavacProcessingEnvironment$NameProcessIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.processing.JavacProcessingEnvironment"
};

$Object* allocate$JavacProcessingEnvironment$NameProcessIterator($Class* clazz) {
	return $of($alloc(JavacProcessingEnvironment$NameProcessIterator));
}

void JavacProcessingEnvironment$NameProcessIterator::init$($String* names, $ClassLoader* processorCL, $Log* log) {
	$useLocalCurrentObjectStackCache();
	$set(this, nextProc, nullptr);
	$set(this, names, $nc($($Arrays::asList($($nc(names)->split(","_s)))))->iterator());
	$set(this, processorCL, processorCL);
	$set(this, log, log);
}

bool JavacProcessingEnvironment$NameProcessIterator::hasNext() {
	$useLocalCurrentObjectStackCache();
	if (this->nextProc != nullptr) {
		return true;
	} else if (!$nc(this->names)->hasNext()) {
		return false;
	} else {
		$var($Processor, processor, getNextProcessor($cast($String, $($nc(this->names)->next()))));
		if (processor == nullptr) {
			return false;
		} else {
			$set(this, nextProc, processor);
			return true;
		}
	}
}

$Processor* JavacProcessingEnvironment$NameProcessIterator::getNextProcessor($String* processorName) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		try {
			$Class* processorClass = $nc(this->processorCL)->loadClass(processorName);
			ensureReadable(processorClass);
			return $cast($Processor, $nc($($nc(processorClass)->getConstructor($$new($ClassArray, 0))))->newInstance($$new($ObjectArray, 0)));
		} catch ($ClassNotFoundException& cnfe) {
			$nc(this->log)->error($($CompilerProperties$Errors::ProcProcessorNotFound(processorName)));
			return nullptr;
		} catch ($ClassCastException& cce) {
			$nc(this->log)->error($($CompilerProperties$Errors::ProcProcessorWrongType(processorName)));
			return nullptr;
		} catch ($Exception& e) {
			$nc(this->log)->error($($CompilerProperties$Errors::ProcProcessorCantInstantiate(processorName)));
			return nullptr;
		}
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($Throwable& t) {
		$throwNew($AnnotationProcessingError, t);
	}
	$shouldNotReachHere();
}

$Object* JavacProcessingEnvironment$NameProcessIterator::next() {
	if (hasNext()) {
		$var($Processor, p, this->nextProc);
		$set(this, nextProc, nullptr);
		return $of(p);
	} else {
		$throwNew($NoSuchElementException);
	}
}

void JavacProcessingEnvironment$NameProcessIterator::remove() {
	$throwNew($UnsupportedOperationException);
}

void JavacProcessingEnvironment$NameProcessIterator::ensureReadable($Class* targetClass) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$var($Method, getModuleMethod, $Class::class$->getMethod("getModule"_s, $$new($ClassArray, 0)));
		$var($Object, thisModule, $nc(getModuleMethod)->invoke($of(this)->getClass(), $$new($ObjectArray, 0)));
		$var($Object, targetModule, getModuleMethod->invoke(targetClass, $$new($ObjectArray, 0)));
		$Class* moduleClass = getModuleMethod->getReturnType();
		$var($Method, addReadsMethod, $nc(moduleClass)->getMethod("addReads"_s, $$new($ClassArray, {moduleClass})));
		$nc(addReadsMethod)->invoke(thisModule, $$new($ObjectArray, {targetModule}));
	} catch ($NoSuchMethodException& e) {
	} catch ($Exception& e) {
		$throwNew($InternalError, static_cast<$Throwable*>(e));
	}
}

JavacProcessingEnvironment$NameProcessIterator::JavacProcessingEnvironment$NameProcessIterator() {
}

$Class* JavacProcessingEnvironment$NameProcessIterator::load$($String* name, bool initialize) {
	$loadClass(JavacProcessingEnvironment$NameProcessIterator, name, initialize, &_JavacProcessingEnvironment$NameProcessIterator_ClassInfo_, allocate$JavacProcessingEnvironment$NameProcessIterator);
	return class$;
}

$Class* JavacProcessingEnvironment$NameProcessIterator::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com