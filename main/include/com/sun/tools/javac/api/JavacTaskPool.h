#ifndef _com_sun_tools_javac_api_JavacTaskPool_h_
#define _com_sun_tools_javac_api_JavacTaskPool_h_
//$ class com.sun.tools.javac.api.JavacTaskPool
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("EMPTY_QUEUE")
#undef EMPTY_QUEUE

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {
					class JavacTaskPool$ReusableContext;
					class JavacTaskPool$Worker;
					class JavacTool;
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class PrintStream;
		class Writer;
	}
}
namespace java {
	namespace lang {
		class Iterable;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
		class Queue;
	}
}
namespace javax {
	namespace tools {
		class DiagnosticListener;
		class JavaFileManager;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class $import JavacTaskPool : public ::java::lang::Object {
	$class(JavacTaskPool, 0, ::java::lang::Object)
public:
	JavacTaskPool();
	void init$(int32_t maxPoolSize);
	int64_t cacheSize();
	virtual $Object* getTask(::java::io::Writer* out, ::javax::tools::JavaFileManager* fileManager, ::javax::tools::DiagnosticListener* diagnosticListener, ::java::lang::Iterable* options, ::java::lang::Iterable* classes, ::java::lang::Iterable* compilationUnits, ::com::sun::tools::javac::api::JavacTaskPool$Worker* worker);
	static int32_t lambda$getTask$0(::com::sun::tools::javac::api::JavacTaskPool$ReusableContext* c1, ::com::sun::tools::javac::api::JavacTaskPool$ReusableContext* c2);
	static ::java::util::Queue* lambda$getTask$1(::java::util::List* x);
	virtual void printStatistics(::java::io::PrintStream* out);
	static ::com::sun::tools::javac::api::JavacTool* systemProvider;
	static ::java::util::Queue* EMPTY_QUEUE;
	int32_t maxPoolSize = 0;
	::java::util::Map* options2Contexts = nullptr;
	int32_t id = 0;
	int32_t statReused = 0;
	int32_t statNew = 0;
	int32_t statPolluted = 0;
	int32_t statRemoved = 0;
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("EMPTY_QUEUE")

#endif // _com_sun_tools_javac_api_JavacTaskPool_h_