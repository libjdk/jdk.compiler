#include <com/sun/tools/javac/processing/JavacProcessingEnvironment$NameServiceIterator.h>

#include <com/sun/tools/javac/processing/JavacProcessingEnvironment$ServiceIterator.h>
#include <com/sun/tools/javac/processing/JavacProcessingEnvironment.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/Log.h>
#include <java/util/AbstractMap.h>
#include <java/util/Arrays.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/ServiceLoader.h>
#include <javax/annotation/processing/Processor.h>
#include <jcpp.h>

using $JavacProcessingEnvironment = ::com::sun::tools::javac::processing::JavacProcessingEnvironment;
using $JavacProcessingEnvironment$ServiceIterator = ::com::sun::tools::javac::processing::JavacProcessingEnvironment$ServiceIterator;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $Log = ::com::sun::tools::javac::util::Log;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Arrays = ::java::util::Arrays;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $ServiceLoader = ::java::util::ServiceLoader;
using $Processor = ::javax::annotation::processing::Processor;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

$FieldInfo _JavacProcessingEnvironment$NameServiceIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/processing/JavacProcessingEnvironment;", nullptr, $FINAL | $SYNTHETIC, $field(JavacProcessingEnvironment$NameServiceIterator, this$0)},
	{"namedProcessorsMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljavax/annotation/processing/Processor;>;", $PRIVATE, $field(JavacProcessingEnvironment$NameServiceIterator, namedProcessorsMap)},
	{"processorNames", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/lang/String;>;", $PRIVATE, $field(JavacProcessingEnvironment$NameServiceIterator, processorNames)},
	{"nextProc", "Ljavax/annotation/processing/Processor;", nullptr, $PRIVATE, $field(JavacProcessingEnvironment$NameServiceIterator, nextProc)},
	{}
};

$MethodInfo _JavacProcessingEnvironment$NameServiceIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/processing/JavacProcessingEnvironment;Ljava/util/ServiceLoader;Lcom/sun/tools/javac/util/Log;Ljava/lang/String;)V", "(Ljava/util/ServiceLoader<Ljavax/annotation/processing/Processor;>;Lcom/sun/tools/javac/util/Log;Ljava/lang/String;)V", $PUBLIC, $method(static_cast<void(JavacProcessingEnvironment$NameServiceIterator::*)($JavacProcessingEnvironment*,$ServiceLoader*,$Log*,$String*)>(&JavacProcessingEnvironment$NameServiceIterator::init$))},
	{"internalHasNext", "()Z", nullptr, 0},
	{"internalNext", "()Ljavax/annotation/processing/Processor;", nullptr, 0},
	{}
};

$InnerClassInfo _JavacProcessingEnvironment$NameServiceIterator_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.processing.JavacProcessingEnvironment$NameServiceIterator", "com.sun.tools.javac.processing.JavacProcessingEnvironment", "NameServiceIterator", $PRIVATE},
	{"com.sun.tools.javac.processing.JavacProcessingEnvironment$ServiceIterator", "com.sun.tools.javac.processing.JavacProcessingEnvironment", "ServiceIterator", $PRIVATE},
	{}
};

$ClassInfo _JavacProcessingEnvironment$NameServiceIterator_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.processing.JavacProcessingEnvironment$NameServiceIterator",
	"com.sun.tools.javac.processing.JavacProcessingEnvironment$ServiceIterator",
	nullptr,
	_JavacProcessingEnvironment$NameServiceIterator_FieldInfo_,
	_JavacProcessingEnvironment$NameServiceIterator_MethodInfo_,
	nullptr,
	nullptr,
	_JavacProcessingEnvironment$NameServiceIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.processing.JavacProcessingEnvironment"
};

$Object* allocate$JavacProcessingEnvironment$NameServiceIterator($Class* clazz) {
	return $of($alloc(JavacProcessingEnvironment$NameServiceIterator));
}

void JavacProcessingEnvironment$NameServiceIterator::init$($JavacProcessingEnvironment* this$0, $ServiceLoader* loader, $Log* log, $String* theNames) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$JavacProcessingEnvironment$ServiceIterator::init$(this$0, loader, log);
	$set(this, namedProcessorsMap, $new($HashMap));
	$set(this, processorNames, nullptr);
	$set(this, nextProc, nullptr);
	$set(this, processorNames, $nc($($Arrays::asList($($nc(theNames)->split(","_s)))))->iterator());
}

bool JavacProcessingEnvironment$NameServiceIterator::internalHasNext() {
	$useLocalCurrentObjectStackCache();
	if (this->nextProc != nullptr) {
		return true;
	}
	if (!$nc(this->processorNames)->hasNext()) {
		$set(this, namedProcessorsMap, nullptr);
		return false;
	}
	$var($String, processorName, $cast($String, $nc(this->processorNames)->next()));
	$var($Processor, theProcessor, $cast($Processor, $nc(this->namedProcessorsMap)->get(processorName)));
	if (theProcessor != nullptr) {
		$nc(this->namedProcessorsMap)->remove(processorName);
		$set(this, nextProc, theProcessor);
		return true;
	} else {
		while ($nc(this->iterator)->hasNext()) {
			$assign(theProcessor, $cast($Processor, $nc(this->iterator)->next()));
			$var($String, name, $nc($of(theProcessor))->getClass()->getName());
			if ($nc(name)->equals(processorName)) {
				$set(this, nextProc, theProcessor);
				return true;
			} else {
				$nc(this->namedProcessorsMap)->put(name, theProcessor);
			}
		}
		$nc(this->log)->error($($CompilerProperties$Errors::ProcProcessorNotFound(processorName)));
		return false;
	}
}

$Processor* JavacProcessingEnvironment$NameServiceIterator::internalNext() {
	if (hasNext()) {
		$var($Processor, p, this->nextProc);
		$set(this, nextProc, nullptr);
		return p;
	} else {
		$throwNew($NoSuchElementException);
	}
}

JavacProcessingEnvironment$NameServiceIterator::JavacProcessingEnvironment$NameServiceIterator() {
}

$Class* JavacProcessingEnvironment$NameServiceIterator::load$($String* name, bool initialize) {
	$loadClass(JavacProcessingEnvironment$NameServiceIterator, name, initialize, &_JavacProcessingEnvironment$NameServiceIterator_ClassInfo_, allocate$JavacProcessingEnvironment$NameServiceIterator);
	return class$;
}

$Class* JavacProcessingEnvironment$NameServiceIterator::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com