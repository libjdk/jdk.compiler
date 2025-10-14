#ifndef _com_sun_tools_javac_launcher_Main$MainClassListener_h_
#define _com_sun_tools_javac_launcher_Main$MainClassListener_h_
//$ class com.sun.tools.javac.launcher.Main$MainClassListener
//$ extends com.sun.source.util.TaskListener

#include <com/sun/source/util/TaskListener.h>

namespace com {
	namespace sun {
		namespace source {
			namespace util {
				class JavacTask;
				class TaskEvent;
			}
		}
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class TypeElement;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace launcher {

class Main$MainClassListener : public ::com::sun::source::util::TaskListener {
	$class(Main$MainClassListener, $NO_CLASS_INIT, ::com::sun::source::util::TaskListener)
public:
	Main$MainClassListener();
	void init$(::com::sun::source::util::JavacTask* t);
	virtual void started(::com::sun::source::util::TaskEvent* ev) override;
	::javax::lang::model::element::TypeElement* mainClass = nullptr;
};

				} // launcher
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_launcher_Main$MainClassListener_h_