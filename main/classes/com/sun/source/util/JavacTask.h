#ifndef _com_sun_source_util_JavacTask_h_
#define _com_sun_source_util_JavacTask_h_
//$ class com.sun.source.util.JavacTask
//$ extends javax.tools.JavaCompiler$CompilationTask

#include <javax/tools/JavaCompiler$CompilationTask.h>

namespace com {
	namespace sun {
		namespace source {
			namespace util {
				class ParameterNameProvider;
				class TaskListener;
			}
		}
	}
}
namespace java {
	namespace lang {
		class Iterable;
	}
}
namespace javax {
	namespace annotation {
		namespace processing {
			class ProcessingEnvironment;
		}
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace type {
				class TypeMirror;
			}
		}
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace util {
				class Elements;
				class Types;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace util {

class $export JavacTask : public ::javax::tools::JavaCompiler$CompilationTask {
	$class(JavacTask, $NO_CLASS_INIT, ::javax::tools::JavaCompiler$CompilationTask)
public:
	JavacTask();
	void init$();
	virtual void addTaskListener(::com::sun::source::util::TaskListener* taskListener) {}
	virtual ::java::lang::Iterable* analyze() {return nullptr;}
	virtual ::java::lang::Iterable* generate() {return nullptr;}
	virtual ::javax::lang::model::util::Elements* getElements() {return nullptr;}
	virtual ::javax::lang::model::type::TypeMirror* getTypeMirror(::java::lang::Iterable* path) {return nullptr;}
	virtual ::javax::lang::model::util::Types* getTypes() {return nullptr;}
	static ::com::sun::source::util::JavacTask* instance(::javax::annotation::processing::ProcessingEnvironment* processingEnvironment);
	virtual ::java::lang::Iterable* parse() {return nullptr;}
	virtual void removeTaskListener(::com::sun::source::util::TaskListener* taskListener) {}
	virtual void setParameterNameProvider(::com::sun::source::util::ParameterNameProvider* provider);
	virtual void setTaskListener(::com::sun::source::util::TaskListener* taskListener) {}
};

			} // util
		} // source
	} // sun
} // com

#endif // _com_sun_source_util_JavacTask_h_