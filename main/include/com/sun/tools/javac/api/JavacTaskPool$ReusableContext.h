#ifndef _com_sun_tools_javac_api_JavacTaskPool$ReusableContext_h_
#define _com_sun_tools_javac_api_JavacTaskPool$ReusableContext_h_
//$ class com.sun.tools.javac.api.JavacTaskPool$ReusableContext
//$ extends com.sun.tools.javac.util.Context
//$ implements com.sun.source.util.TaskListener

#include <com/sun/source/util/TaskListener.h>
#include <com/sun/tools/javac/util/Context.h>

namespace com {
	namespace sun {
		namespace source {
			namespace util {
				class TaskEvent;
				class TreeScanner;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class Context$Key;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class $import JavacTaskPool$ReusableContext : public ::com::sun::tools::javac::util::Context, public ::com::sun::source::util::TaskListener {
	$class(JavacTaskPool$ReusableContext, $NO_CLASS_INIT, ::com::sun::tools::javac::util::Context, ::com::sun::source::util::TaskListener)
public:
	JavacTaskPool$ReusableContext();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::List* arguments);
	virtual void clear();
	virtual void drop(::com::sun::tools::javac::util::Context$Key* k);
	virtual void drop($Class* c);
	virtual void finished(::com::sun::source::util::TaskEvent* e) override;
	virtual void started(::com::sun::source::util::TaskEvent* e) override;
	virtual $String* toString() override;
	::java::util::Set* roots = nullptr;
	::java::util::List* arguments = nullptr;
	bool polluted = false;
	int32_t useCount = 0;
	int64_t timeStamp = 0;
	::com::sun::source::util::TreeScanner* pollutionScanner = nullptr;
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_api_JavacTaskPool$ReusableContext_h_