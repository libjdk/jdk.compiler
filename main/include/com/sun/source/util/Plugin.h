#ifndef _com_sun_source_util_Plugin_h_
#define _com_sun_source_util_Plugin_h_
//$ interface com.sun.source.util.Plugin
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace source {
			namespace util {
				class JavacTask;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace util {

class $import Plugin : public ::java::lang::Object {
	$interface(Plugin, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool autoStart();
	virtual $String* getName() {return nullptr;}
	virtual void init(::com::sun::source::util::JavacTask* task, $StringArray* args) {}
};

			} // util
		} // source
	} // sun
} // com

#endif // _com_sun_source_util_Plugin_h_