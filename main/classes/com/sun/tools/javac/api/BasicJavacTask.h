#ifndef _com_sun_tools_javac_api_BasicJavacTask_h_
#define _com_sun_tools_javac_api_BasicJavacTask_h_
//$ class com.sun.tools.javac.api.BasicJavacTask
//$ extends com.sun.source.util.JavacTask

#include <com/sun/source/util/JavacTask.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace source {
			namespace util {
				class ParameterNameProvider;
				class Plugin;
				class TaskListener;
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
					class List;
					class Options;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Iterable;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Locale;
		class Map$Entry;
		class Set;
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
		namespace tools {
			namespace javac {
				namespace api {

class $export BasicJavacTask : public ::com::sun::source::util::JavacTask {
	$class(BasicJavacTask, $NO_CLASS_INIT, ::com::sun::source::util::JavacTask)
public:
	BasicJavacTask();
	void init$(::com::sun::tools::javac::util::Context* c, bool register$);
	virtual void addModules(::java::lang::Iterable* moduleNames) override;
	virtual void addTaskListener(::com::sun::source::util::TaskListener* taskListener) override;
	virtual ::java::lang::Iterable* analyze() override;
	virtual $Object* call() override;
	virtual ::java::lang::Iterable* generate() override;
	virtual ::com::sun::tools::javac::util::Context* getContext();
	virtual ::javax::lang::model::util::Elements* getElements() override;
	virtual ::java::util::Collection* getTaskListeners();
	virtual ::javax::lang::model::type::TypeMirror* getTypeMirror(::java::lang::Iterable* path) override;
	virtual ::javax::lang::model::util::Types* getTypes() override;
	virtual void initDocLint(::com::sun::tools::javac::util::List* docLintOpts);
	void initPlugin(::com::sun::source::util::Plugin* p, $StringArray* args);
	virtual void initPlugins(::java::util::Set* pluginOpts);
	static ::com::sun::source::util::JavacTask* instance(::com::sun::tools::javac::util::Context* context);
	static $String* lambda$initPlugins$0(::java::util::Map$Entry* e);
	virtual ::java::lang::Iterable* parse() override;
	virtual void removeTaskListener(::com::sun::source::util::TaskListener* taskListener) override;
	virtual void setLocale(::java::util::Locale* locale) override;
	virtual void setParameterNameProvider(::com::sun::source::util::ParameterNameProvider* handler) override;
	virtual void setProcessors(::java::lang::Iterable* processors) override;
	virtual void setTaskListener(::com::sun::source::util::TaskListener* tl) override;
	::com::sun::tools::javac::util::Context* context = nullptr;
	::com::sun::tools::javac::util::Options* options = nullptr;
	::com::sun::source::util::TaskListener* taskListener = nullptr;
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_api_BasicJavacTask_h_