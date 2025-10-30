#include <com/sun/tools/javac/processing/JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator.h>

#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler.h>
#include <com/sun/tools/javac/code/Source$Feature.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/processing/JavacProcessingEnvironment$DiscoveredProcessors.h>
#include <com/sun/tools/javac/processing/JavacProcessingEnvironment$ProcessorState.h>
#include <com/sun/tools/javac/processing/JavacProcessingEnvironment.h>
#include <com/sun/tools/javac/util/Log.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Set.h>
#include <javax/annotation/processing/ProcessingEnvironment.h>
#include <javax/annotation/processing/Processor.h>
#include <javax/annotation/processing/RoundEnvironment.h>
#include <jcpp.h>

#undef MODULES

using $DeferredCompletionFailureHandler = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler;
using $Source = ::com::sun::tools::javac::code::Source;
using $Source$Feature = ::com::sun::tools::javac::code::Source$Feature;
using $JavacProcessingEnvironment = ::com::sun::tools::javac::processing::JavacProcessingEnvironment;
using $JavacProcessingEnvironment$DiscoveredProcessors = ::com::sun::tools::javac::processing::JavacProcessingEnvironment$DiscoveredProcessors;
using $JavacProcessingEnvironment$ProcessorState = ::com::sun::tools::javac::processing::JavacProcessingEnvironment$ProcessorState;
using $Log = ::com::sun::tools::javac::util::Log;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Set = ::java::util::Set;
using $ProcessingEnvironment = ::javax::annotation::processing::ProcessingEnvironment;
using $Processor = ::javax::annotation::processing::Processor;
using $RoundEnvironment = ::javax::annotation::processing::RoundEnvironment;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

$FieldInfo _JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/processing/JavacProcessingEnvironment$DiscoveredProcessors;", nullptr, $FINAL | $SYNTHETIC, $field(JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator, this$1)},
	{"psi", "Lcom/sun/tools/javac/processing/JavacProcessingEnvironment$DiscoveredProcessors;", nullptr, 0, $field(JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator, psi)},
	{"innerIter", "Ljava/util/Iterator;", "Ljava/util/Iterator<Lcom/sun/tools/javac/processing/JavacProcessingEnvironment$ProcessorState;>;", 0, $field(JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator, innerIter)},
	{"onProcIterator", "Z", nullptr, 0, $field(JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator, onProcIterator)},
	{}
};

$MethodInfo _JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/processing/JavacProcessingEnvironment$DiscoveredProcessors;Lcom/sun/tools/javac/processing/JavacProcessingEnvironment$DiscoveredProcessors;)V", nullptr, 0, $method(static_cast<void(JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator::*)($JavacProcessingEnvironment$DiscoveredProcessors*,$JavacProcessingEnvironment$DiscoveredProcessors*)>(&JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Lcom/sun/tools/javac/processing/JavacProcessingEnvironment$ProcessorState;", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{"runContributingProcs", "(Ljavax/annotation/processing/RoundEnvironment;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.processing.JavacProcessingEnvironment$DiscoveredProcessors", "com.sun.tools.javac.processing.JavacProcessingEnvironment", "DiscoveredProcessors", 0},
	{"com.sun.tools.javac.processing.JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator", "com.sun.tools.javac.processing.JavacProcessingEnvironment$DiscoveredProcessors", "ProcessorStateIterator", 0},
	{"com.sun.tools.javac.processing.JavacProcessingEnvironment$ProcessorState", "com.sun.tools.javac.processing.JavacProcessingEnvironment", "ProcessorState", $STATIC},
	{}
};

$ClassInfo _JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.processing.JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator_FieldInfo_,
	_JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Lcom/sun/tools/javac/processing/JavacProcessingEnvironment$ProcessorState;>;",
	nullptr,
	_JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.processing.JavacProcessingEnvironment"
};

$Object* allocate$JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator($Class* clazz) {
	return $of($alloc(JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator));
}

void JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator::init$($JavacProcessingEnvironment$DiscoveredProcessors* this$1, $JavacProcessingEnvironment$DiscoveredProcessors* psi) {
	$set(this, this$1, this$1);
	$set(this, psi, psi);
	$set(this, innerIter, $nc($nc(psi)->procStateList)->iterator());
	this->onProcIterator = false;
}

$Object* JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator::next() {
	$useLocalCurrentObjectStackCache();
	if (!this->onProcIterator) {
		if ($nc(this->innerIter)->hasNext()) {
			return $of($cast($JavacProcessingEnvironment$ProcessorState, $nc(this->innerIter)->next()));
		} else {
			this->onProcIterator = true;
		}
	}
	if ($nc($nc(this->psi)->processorIterator)->hasNext()) {
		$var($Processor, var$0, $cast($Processor, $nc($nc(this->psi)->processorIterator)->next()));
		$var($Log, var$1, $nc(this->this$1->this$0)->log);
		$var($Source, var$2, $nc(this->this$1->this$0)->source);
		$var($DeferredCompletionFailureHandler, var$3, $nc(this->this$1->this$0)->dcfh);
		$init($Source$Feature);
		$var($JavacProcessingEnvironment$ProcessorState, ps, $new($JavacProcessingEnvironment$ProcessorState, var$0, var$1, var$2, var$3, $Source$Feature::MODULES->allowedInSource($nc(this->this$1->this$0)->source), this->this$1->this$0, $nc(this->this$1->this$0)->lint));
		$nc($nc(this->psi)->procStateList)->add(ps);
		return $of(ps);
	} else {
		$throwNew($NoSuchElementException);
	}
}

bool JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator::hasNext() {
	if (this->onProcIterator) {
		return $nc($nc(this->psi)->processorIterator)->hasNext();
	} else {
		bool var$0 = $nc(this->innerIter)->hasNext();
		return var$0 || $nc($nc(this->psi)->processorIterator)->hasNext();
	}
}

void JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator::remove() {
	$throwNew($UnsupportedOperationException);
}

void JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator::runContributingProcs($RoundEnvironment* re) {
	$useLocalCurrentObjectStackCache();
	if (!this->onProcIterator) {
		$var($Set, emptyTypeElements, $Collections::emptySet());
		while ($nc(this->innerIter)->hasNext()) {
			$var($JavacProcessingEnvironment$ProcessorState, ps, $cast($JavacProcessingEnvironment$ProcessorState, $nc(this->innerIter)->next()));
			if ($nc(ps)->contributed) {
				$nc(this->this$1->this$0)->callProcessor(ps->processor, emptyTypeElements, re);
			}
		}
	}
}

JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator::JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator() {
}

$Class* JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator::load$($String* name, bool initialize) {
	$loadClass(JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator, name, initialize, &_JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator_ClassInfo_, allocate$JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator);
	return class$;
}

$Class* JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com