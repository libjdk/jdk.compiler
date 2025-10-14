#ifndef _com_sun_tools_javac_processing_JavacProcessingEnvironment$Round_h_
#define _com_sun_tools_javac_processing_JavacProcessingEnvironment$Round_h_
//$ class com.sun.tools.javac.processing.JavacProcessingEnvironment$Round
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ACCEPT_ALL")
#undef ACCEPT_ALL
#pragma push_macro("ACCEPT_NON_RECOVERABLE")
#undef ACCEPT_NON_RECOVERABLE

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$ModuleSymbol;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {
					class JavacProcessingEnvironment;
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
					class JCDiagnostic;
					class List;
					class Log$DeferredDiagnosticHandler;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Predicate;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

class JavacProcessingEnvironment$Round : public ::java::lang::Object {
	$class(JavacProcessingEnvironment$Round, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JavacProcessingEnvironment$Round();
	void init$(::com::sun::tools::javac::processing::JavacProcessingEnvironment* this$0, int32_t number, ::java::util::Set* treesToClean, ::com::sun::tools::javac::util::Log$DeferredDiagnosticHandler* deferredDiagnosticHandler);
	void init$(::com::sun::tools::javac::processing::JavacProcessingEnvironment* this$0, ::com::sun::tools::javac::util::List* roots, ::com::sun::tools::javac::util::List* classSymbols, ::java::util::Set* treesToClean, ::com::sun::tools::javac::util::Log$DeferredDiagnosticHandler* deferredDiagnosticHandler);
	void init$(::com::sun::tools::javac::processing::JavacProcessingEnvironment* this$0, ::com::sun::tools::javac::processing::JavacProcessingEnvironment$Round* prev, ::java::util::Set* newSourceFiles, ::java::util::Map* newClassFiles);
	::com::sun::tools::javac::util::List* enterClassFiles(::java::util::Map* modulesAndClassFiles);
	void enterTrees(::com::sun::tools::javac::util::List* roots);
	virtual int32_t errorCount();
	virtual void finalCompiler();
	virtual void findAnnotationsPresent();
	static ::java::util::Map* lambda$new$0(::com::sun::tools::javac::code::Symbol$ModuleSymbol* m);
	static bool lambda$new$1(::com::sun::tools::javac::util::JCDiagnostic* d);
	static bool lambda$new$2(::com::sun::tools::javac::util::JCDiagnostic* d);
	void newRound();
	virtual ::com::sun::tools::javac::processing::JavacProcessingEnvironment$Round* next(::java::util::Set* newSourceFiles, ::java::util::Map* newClassFiles);
	void printRoundInfo(bool lastRound);
	virtual void run(bool lastRound, bool errorStatus);
	virtual void showDiagnostics(bool showAll);
	virtual bool unrecoverableError();
	virtual int32_t warningCount();
	::com::sun::tools::javac::processing::JavacProcessingEnvironment* this$0 = nullptr;
	int32_t number = 0;
	::com::sun::tools::javac::util::Log$DeferredDiagnosticHandler* deferredDiagnosticHandler = nullptr;
	::com::sun::tools::javac::util::List* roots = nullptr;
	::java::util::Set* treesToClean = nullptr;
	::java::util::Map* genClassFiles = nullptr;
	::java::util::Set* annotationsPresent = nullptr;
	::com::sun::tools::javac::util::List* topLevelClasses = nullptr;
	::com::sun::tools::javac::util::List* packageInfoFiles = nullptr;
	::com::sun::tools::javac::util::List* moduleInfoFiles = nullptr;
	::java::util::function::Predicate* ACCEPT_NON_RECOVERABLE = nullptr;
	::java::util::function::Predicate* ACCEPT_ALL = nullptr;
};

				} // processing
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("ACCEPT_ALL")
#pragma pop_macro("ACCEPT_NON_RECOVERABLE")

#endif // _com_sun_tools_javac_processing_JavacProcessingEnvironment$Round_h_