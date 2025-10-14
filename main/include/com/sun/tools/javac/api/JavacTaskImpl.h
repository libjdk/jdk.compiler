#ifndef _com_sun_tools_javac_api_JavacTaskImpl_h_
#define _com_sun_tools_javac_api_JavacTaskImpl_h_
//$ class com.sun.tools.javac.api.JavacTaskImpl
//$ extends com.sun.tools.javac.api.BasicJavacTask

#include <com/sun/tools/javac/api/BasicJavacTask.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class CompilationUnitTree;
				class Tree;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class DeferredCompletionFailureHandler;
					class Type;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {
					class Arguments;
					class JavaCompiler;
					class Main$Result;
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
					class ListBuffer;
					class Pair;
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
		class Locale;
		class Map;
		class Queue;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Callable;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicBoolean;
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
		class JavaFileManager;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class $import JavacTaskImpl : public ::com::sun::tools::javac::api::BasicJavacTask {
	$class(JavacTaskImpl, $NO_CLASS_INIT, ::com::sun::tools::javac::api::BasicJavacTask)
public:
	JavacTaskImpl();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual void addModules(::java::lang::Iterable* moduleNames) override;
	virtual ::java::lang::Iterable* analyze() override;
	virtual ::java::lang::Iterable* analyze(::java::lang::Iterable* classes);
	virtual $Object* call() override;
	virtual void cleanup();
	virtual ::com::sun::tools::javac::main::Main$Result* doCall();
	virtual void ensureEntered();
	virtual ::java::lang::Iterable* enter();
	virtual ::java::lang::Iterable* enter(::java::lang::Iterable* trees);
	virtual ::java::lang::Iterable* generate() override;
	virtual ::java::lang::Iterable* generate(::java::lang::Iterable* classes);
	void handleFlowResults(::java::util::Queue* queue, ::com::sun::tools::javac::util::ListBuffer* elems);
	::com::sun::tools::javac::util::Pair* invocationHelper(::java::util::concurrent::Callable* c);
	::java::lang::Iterable* lambda$analyze$1();
	::com::sun::tools::javac::main::Main$Result* lambda$doCall$0();
	::java::lang::Iterable* lambda$generate$2();
	virtual ::java::lang::Iterable* parse() override;
	::java::lang::Iterable* parseInternal();
	virtual ::com::sun::tools::javac::code::Type* parseType($String* expr, ::javax::lang::model::element::TypeElement* scope);
	virtual ::java::lang::Iterable* pathFor(::com::sun::source::tree::CompilationUnitTree* unit, ::com::sun::source::tree::Tree* node);
	void prepareCompiler(bool forParse);
	virtual void setLocale(::java::util::Locale* locale) override;
	virtual void setProcessors(::java::lang::Iterable* processors) override;
	using ::com::sun::tools::javac::api::BasicJavacTask::toString;
	virtual $String* toString(::java::lang::Iterable* items, $String* sep);
	::com::sun::tools::javac::main::Arguments* args = nullptr;
	::com::sun::tools::javac::main::JavaCompiler* compiler = nullptr;
	::javax::tools::JavaFileManager* fileManager = nullptr;
	::com::sun::tools::javac::code::DeferredCompletionFailureHandler* dcfh = nullptr;
	::java::util::Locale* locale = nullptr;
	::java::util::Map* notYetEntered = nullptr;
	::com::sun::tools::javac::util::ListBuffer* genList = nullptr;
	::java::util::concurrent::atomic::AtomicBoolean* used = nullptr;
	::java::lang::Iterable* processors = nullptr;
	::com::sun::tools::javac::util::ListBuffer* addModules$ = nullptr;
	bool parsed = false;
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_api_JavacTaskImpl_h_