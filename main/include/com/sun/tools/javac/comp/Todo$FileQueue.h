#ifndef _com_sun_tools_javac_comp_Todo$FileQueue_h_
#define _com_sun_tools_javac_comp_Todo$FileQueue_h_
//$ class com.sun.tools.javac.comp.Todo$FileQueue
//$ extends java.util.AbstractQueue

#include <java/util/AbstractQueue.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Env;
					class Todo;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Iterator;
		class LinkedList;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import Todo$FileQueue : public ::java::util::AbstractQueue {
	$class(Todo$FileQueue, $NO_CLASS_INIT, ::java::util::AbstractQueue)
public:
	Todo$FileQueue();
	void init$(::com::sun::tools::javac::comp::Todo* this$0);
	virtual ::java::util::Iterator* iterator() override;
	virtual bool offer(::com::sun::tools::javac::comp::Env* e);
	virtual bool offer(Object$* e) override;
	virtual $Object* peek() override;
	virtual $Object* poll() override;
	using ::java::util::AbstractQueue::remove;
	virtual int32_t size() override;
	using ::java::util::AbstractQueue::toArray;
	::com::sun::tools::javac::comp::Todo* this$0 = nullptr;
	::java::util::LinkedList* fileContents = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Todo$FileQueue_h_