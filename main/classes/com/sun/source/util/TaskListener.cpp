#include <com/sun/source/util/TaskListener.h>

#include <com/sun/source/util/TaskEvent.h>
#include <jcpp.h>

using $TaskEvent = ::com::sun::source::util::TaskEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace util {

$MethodInfo _TaskListener_MethodInfo_[] = {
	{"finished", "(Lcom/sun/source/util/TaskEvent;)V", nullptr, $PUBLIC},
	{"started", "(Lcom/sun/source/util/TaskEvent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TaskListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.util.TaskListener",
	nullptr,
	nullptr,
	nullptr,
	_TaskListener_MethodInfo_
};

$Object* allocate$TaskListener($Class* clazz) {
	return $of($alloc(TaskListener));
}

void TaskListener::started($TaskEvent* e) {
}

void TaskListener::finished($TaskEvent* e) {
}

$Class* TaskListener::load$($String* name, bool initialize) {
	$loadClass(TaskListener, name, initialize, &_TaskListener_ClassInfo_, allocate$TaskListener);
	return class$;
}

$Class* TaskListener::class$ = nullptr;

			} // util
		} // source
	} // sun
} // com