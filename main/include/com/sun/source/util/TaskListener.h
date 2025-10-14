#ifndef _com_sun_source_util_TaskListener_h_
#define _com_sun_source_util_TaskListener_h_
//$ interface com.sun.source.util.TaskListener
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace source {
			namespace util {
				class TaskEvent;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace util {

class $import TaskListener : public ::java::lang::Object {
	$interface(TaskListener, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void finished(::com::sun::source::util::TaskEvent* e);
	virtual void started(::com::sun::source::util::TaskEvent* e);
};

			} // util
		} // source
	} // sun
} // com

#endif // _com_sun_source_util_TaskListener_h_