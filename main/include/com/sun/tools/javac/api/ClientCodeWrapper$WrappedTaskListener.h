#ifndef _com_sun_tools_javac_api_ClientCodeWrapper$WrappedTaskListener_h_
#define _com_sun_tools_javac_api_ClientCodeWrapper$WrappedTaskListener_h_
//$ class com.sun.tools.javac.api.ClientCodeWrapper$WrappedTaskListener
//$ extends com.sun.source.util.TaskListener

#include <com/sun/source/util/TaskListener.h>

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
				namespace api {

class $import ClientCodeWrapper$WrappedTaskListener : public ::com::sun::source::util::TaskListener {
	$class(ClientCodeWrapper$WrappedTaskListener, $NO_CLASS_INIT, ::com::sun::source::util::TaskListener)
public:
	ClientCodeWrapper$WrappedTaskListener();
	void init$(::com::sun::tools::javac::api::ClientCodeWrapper* this$0, ::com::sun::source::util::TaskListener* clientTaskListener);
	virtual void finished(::com::sun::source::util::TaskEvent* ev) override;
	virtual void started(::com::sun::source::util::TaskEvent* ev) override;
	virtual $String* toString() override;
	::com::sun::tools::javac::api::ClientCodeWrapper* this$0 = nullptr;
	::com::sun::source::util::TaskListener* clientTaskListener = nullptr;
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_api_ClientCodeWrapper$WrappedTaskListener_h_