#ifndef _com_sun_tools_javac_comp_Todo_h_
#define _com_sun_tools_javac_comp_Todo_h_
//$ class com.sun.tools.javac.comp.Todo
//$ extends java.util.AbstractQueue

#include <java/util/AbstractQueue.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Env;
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
		class Iterator;
		class LinkedList;
		class Map;
		class Queue;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import Todo : public ::java::util::AbstractQueue {
	$class(Todo, 0, ::java::util::AbstractQueue)
public:
	Todo();
	void init$(::com::sun::tools::javac::util::Context* context);
	void addByFile(::com::sun::tools::javac::comp::Env* env);
	virtual void append(::com::sun::tools::javac::comp::Env* env);
	virtual ::java::util::Queue* groupByFile();
	static ::com::sun::tools::javac::comp::Todo* instance(::com::sun::tools::javac::util::Context* context);
	virtual ::java::util::Iterator* iterator() override;
	virtual bool offer(::com::sun::tools::javac::comp::Env* e);
	virtual bool offer(Object$* e) override;
	virtual $Object* peek() override;
	virtual $Object* poll() override;
	using ::java::util::AbstractQueue::remove;
	void removeByFile(::com::sun::tools::javac::comp::Env* env);
	virtual void retainFiles(::java::util::Collection* sourceFiles);
	virtual int32_t size() override;
	using ::java::util::AbstractQueue::toArray;
	static ::com::sun::tools::javac::util::Context$Key* todoKey;
	::java::util::LinkedList* contents = nullptr;
	::java::util::LinkedList* contentsByFile = nullptr;
	::java::util::Map* fileMap = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Todo_h_