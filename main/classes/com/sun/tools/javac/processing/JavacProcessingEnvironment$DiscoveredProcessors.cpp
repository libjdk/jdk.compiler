#include <com/sun/tools/javac/processing/JavacProcessingEnvironment$DiscoveredProcessors.h>

#include <com/sun/tools/javac/processing/JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator.h>
#include <com/sun/tools/javac/processing/JavacProcessingEnvironment$ServiceIterator.h>
#include <com/sun/tools/javac/processing/JavacProcessingEnvironment.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $JavacProcessingEnvironment = ::com::sun::tools::javac::processing::JavacProcessingEnvironment;
using $JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator = ::com::sun::tools::javac::processing::JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator;
using $JavacProcessingEnvironment$ServiceIterator = ::com::sun::tools::javac::processing::JavacProcessingEnvironment$ServiceIterator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

$FieldInfo _JavacProcessingEnvironment$DiscoveredProcessors_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/processing/JavacProcessingEnvironment;", nullptr, $FINAL | $SYNTHETIC, $field(JavacProcessingEnvironment$DiscoveredProcessors, this$0)},
	{"processorIterator", "Ljava/util/Iterator;", "Ljava/util/Iterator<+Ljavax/annotation/processing/Processor;>;", 0, $field(JavacProcessingEnvironment$DiscoveredProcessors, processorIterator)},
	{"procStateList", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lcom/sun/tools/javac/processing/JavacProcessingEnvironment$ProcessorState;>;", 0, $field(JavacProcessingEnvironment$DiscoveredProcessors, procStateList)},
	{}
};

$MethodInfo _JavacProcessingEnvironment$DiscoveredProcessors_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/processing/JavacProcessingEnvironment;Ljava/util/Iterator;)V", "(Ljava/util/Iterator<+Ljavax/annotation/processing/Processor;>;)V", 0, $method(static_cast<void(JavacProcessingEnvironment$DiscoveredProcessors::*)($JavacProcessingEnvironment*,$Iterator*)>(&JavacProcessingEnvironment$DiscoveredProcessors::init$))},
	{"close", "()V", nullptr, $PUBLIC},
	{"iterator", "()Lcom/sun/tools/javac/processing/JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JavacProcessingEnvironment$DiscoveredProcessors_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.processing.JavacProcessingEnvironment$DiscoveredProcessors", "com.sun.tools.javac.processing.JavacProcessingEnvironment", "DiscoveredProcessors", 0},
	{"com.sun.tools.javac.processing.JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator", "com.sun.tools.javac.processing.JavacProcessingEnvironment$DiscoveredProcessors", "ProcessorStateIterator", 0},
	{"com.sun.tools.javac.processing.JavacProcessingEnvironment$ProcessorState", "com.sun.tools.javac.processing.JavacProcessingEnvironment", "ProcessorState", $STATIC},
	{}
};

$ClassInfo _JavacProcessingEnvironment$DiscoveredProcessors_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.processing.JavacProcessingEnvironment$DiscoveredProcessors",
	"java.lang.Object",
	"java.lang.Iterable",
	_JavacProcessingEnvironment$DiscoveredProcessors_FieldInfo_,
	_JavacProcessingEnvironment$DiscoveredProcessors_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Iterable<Lcom/sun/tools/javac/processing/JavacProcessingEnvironment$ProcessorState;>;",
	nullptr,
	_JavacProcessingEnvironment$DiscoveredProcessors_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.processing.JavacProcessingEnvironment"
};

$Object* allocate$JavacProcessingEnvironment$DiscoveredProcessors($Class* clazz) {
	return $of($alloc(JavacProcessingEnvironment$DiscoveredProcessors));
}

$Iterator* JavacProcessingEnvironment$DiscoveredProcessors::iterator() {
	return $new($JavacProcessingEnvironment$DiscoveredProcessors$ProcessorStateIterator, this, this);
}

void JavacProcessingEnvironment$DiscoveredProcessors::init$($JavacProcessingEnvironment* this$0, $Iterator* processorIterator) {
	$set(this, this$0, this$0);
	$set(this, processorIterator, processorIterator);
	$set(this, procStateList, $new($ArrayList));
}

void JavacProcessingEnvironment$DiscoveredProcessors::close() {
	$useLocalCurrentObjectStackCache();
	{
		$var($JavacProcessingEnvironment$ServiceIterator, serviceIterator, nullptr);
		bool var$0 = this->processorIterator != nullptr;
		if (var$0) {
			$var($Iterator, patt35403$temp, this->processorIterator);
			bool var$1 = $instanceOf($JavacProcessingEnvironment$ServiceIterator, patt35403$temp);
			if (var$1) {
				$assign(serviceIterator, $cast($JavacProcessingEnvironment$ServiceIterator, patt35403$temp));
				var$1 = true;
			}
			var$0 = var$1;
		}
		if (var$0) {
			$nc(serviceIterator)->close();
		}
	}
}

JavacProcessingEnvironment$DiscoveredProcessors::JavacProcessingEnvironment$DiscoveredProcessors() {
}

$Class* JavacProcessingEnvironment$DiscoveredProcessors::load$($String* name, bool initialize) {
	$loadClass(JavacProcessingEnvironment$DiscoveredProcessors, name, initialize, &_JavacProcessingEnvironment$DiscoveredProcessors_ClassInfo_, allocate$JavacProcessingEnvironment$DiscoveredProcessors);
	return class$;
}

$Class* JavacProcessingEnvironment$DiscoveredProcessors::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com