#include <jdk.compiler.test.h>

#include <jdk.compiler.h>
#include <java.base.h>
#include <java.compiler.h>
#include <jdk.zipfs.h>
#include <java/lang/ClassEntry.h>
#include <java/lang/Library.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/ResourceEntry.h>
#include <jcpp.h>

void jdk$compiler$test$PreloadClass(void* eventData) {
}

void jdk$compiler$test$LibEventAction(int32_t eventType, void* eventData) {
	if (eventType == JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS) {
		jdk$compiler$test$PreloadClass(eventData);
	}
	if (eventType == JCPP_LIB_EVENT_TYPE_THREAD_START) {
		$onLibThreadStart(eventData);
	}
}

$StringArray* jdk$compiler$test$GetPackages() {
	return nullptr;
}

::java::lang::ClassEntry* jdk$compiler$test$GetClassEntry($String* name) {
	return nullptr;
}

$bytes* jdk$compiler$test$GetResource($String* name) {
	return nullptr;
}

void jdk$compiler$test::init() {
	::jdk$compiler::init();
	::java$base::init();
	::java$compiler::init();
	::jdk$zipfs::init();
	::java::lang::Library lib = {
		"jdk.compiler.test", "17.35", "",
		nullptr,
		jdk$compiler$test$LibEventAction,
		jdk$compiler$test$GetPackages,
		jdk$compiler$test$GetClassEntry,
		jdk$compiler$test$GetResource
	};
	$System::addLibrary(&lib);
	$System::init();
}