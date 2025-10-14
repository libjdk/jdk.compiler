#ifndef _com_sun_source_util_TaskEvent_h_
#define _com_sun_source_util_TaskEvent_h_
//$ class com.sun.source.util.TaskEvent
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class CompilationUnitTree;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace source {
			namespace util {
				class TaskEvent$Kind;
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
namespace javax {
	namespace tools {
		class JavaFileObject;
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace util {

class $export TaskEvent : public ::java::lang::Object {
	$class(TaskEvent, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TaskEvent();
	void init$(::com::sun::source::util::TaskEvent$Kind* kind);
	void init$(::com::sun::source::util::TaskEvent$Kind* kind, ::javax::tools::JavaFileObject* sourceFile);
	void init$(::com::sun::source::util::TaskEvent$Kind* kind, ::com::sun::source::tree::CompilationUnitTree* unit);
	void init$(::com::sun::source::util::TaskEvent$Kind* kind, ::com::sun::source::tree::CompilationUnitTree* unit, ::javax::lang::model::element::TypeElement* clazz);
	void init$(::com::sun::source::util::TaskEvent$Kind* kind, ::javax::tools::JavaFileObject* file, ::com::sun::source::tree::CompilationUnitTree* unit, ::javax::lang::model::element::TypeElement* clazz);
	::com::sun::source::tree::CompilationUnitTree* getCompilationUnit();
	::com::sun::source::util::TaskEvent$Kind* getKind();
	::javax::tools::JavaFileObject* getSourceFile();
	::javax::lang::model::element::TypeElement* getTypeElement();
	virtual $String* toString() override;
	::com::sun::source::util::TaskEvent$Kind* kind = nullptr;
	::javax::tools::JavaFileObject* file = nullptr;
	::com::sun::source::tree::CompilationUnitTree* unit = nullptr;
	::javax::lang::model::element::TypeElement* clazz = nullptr;
};

			} // util
		} // source
	} // sun
} // com

#endif // _com_sun_source_util_TaskEvent_h_