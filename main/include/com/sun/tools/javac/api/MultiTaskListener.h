#ifndef _com_sun_tools_javac_api_MultiTaskListener_h_
#define _com_sun_tools_javac_api_MultiTaskListener_h_
//$ class com.sun.tools.javac.api.MultiTaskListener
//$ extends com.sun.source.util.TaskListener

#include <com/sun/source/util/TaskListener.h>
#include <java/lang/Array.h>

#pragma push_macro("EMPTY_LISTENERS")
#undef EMPTY_LISTENERS

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
		namespace tools {
			namespace javac {
				namespace api {
					class ClientCodeWrapper;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class DeferredCompletionFailureHandler;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class Context;
					class Context$Key;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Collection;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class $import MultiTaskListener : public ::com::sun::source::util::TaskListener {
	$class(MultiTaskListener, 0, ::com::sun::source::util::TaskListener)
public:
	MultiTaskListener();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual void add(::com::sun::source::util::TaskListener* listener);
	virtual void clear();
	virtual void finished(::com::sun::source::util::TaskEvent* e) override;
	virtual ::java::util::Collection* getTaskListeners();
	static ::com::sun::tools::javac::api::MultiTaskListener* instance(::com::sun::tools::javac::util::Context* context);
	virtual bool isEmpty();
	virtual void remove(::com::sun::source::util::TaskListener* listener);
	virtual void started(::com::sun::source::util::TaskEvent* e) override;
	virtual $String* toString() override;
	static ::com::sun::tools::javac::util::Context$Key* taskListenerKey;
	static $Array<::com::sun::source::util::TaskListener>* EMPTY_LISTENERS;
	::com::sun::tools::javac::code::DeferredCompletionFailureHandler* dcfh = nullptr;
	$Array<::com::sun::source::util::TaskListener>* listeners = nullptr;
	::com::sun::tools::javac::api::ClientCodeWrapper* ccw = nullptr;
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("EMPTY_LISTENERS")

#endif // _com_sun_tools_javac_api_MultiTaskListener_h_