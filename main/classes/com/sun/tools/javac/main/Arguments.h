#ifndef _com_sun_tools_javac_main_Arguments_h_
#define _com_sun_tools_javac_main_Arguments_h_
//$ class com.sun.tools.javac.main.Arguments
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {
					class Target;
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
					class Arguments$ErrorMode;
					class Arguments$ErrorReporter;
					class Option;
					class Option$InvalidValueException;
					class OptionHelper;
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
					class JCDiagnostic$DiagnosticInfo;
					class List;
					class ListBuffer;
					class Log;
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
namespace javax {
	namespace lang {
		namespace model {
			class SourceVersion;
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
				namespace main {

class $export Arguments : public ::java::lang::Object {
	$class(Arguments, 0, ::java::lang::Object)
public:
	Arguments();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual void allowEmpty();
	bool checkDirectory(::com::sun::tools::javac::main::Option* option);
	virtual void checkOptionAllowed(bool allowed, ::com::sun::tools::javac::main::Arguments$ErrorReporter* r, $Array<::com::sun::tools::javac::main::Option>* opts);
	bool doProcessArgs(::java::lang::Iterable* args, ::java::util::Set* allowableOpts, ::com::sun::tools::javac::main::OptionHelper* helper, bool allowOperands, bool checkFileManager);
	virtual void error(::com::sun::tools::javac::main::Option$InvalidValueException* f);
	virtual ::java::util::Set* getClassNames();
	virtual ::java::util::Map* getDeferredFileManagerOptions();
	virtual ::com::sun::tools::javac::util::List* getDocLintOpts();
	::javax::tools::JavaFileManager* getFileManager();
	virtual ::java::util::Set* getFileObjects();
	virtual ::java::util::Set* getPluginOpts();
	virtual bool handleReleaseOptions(::java::util::function::Predicate* additionalOptions);
	virtual void init($String* ownName, ::java::lang::Iterable* args);
	virtual void init($String* ownName, ::java::lang::Iterable* options, ::java::lang::Iterable* classNames, ::java::lang::Iterable* files);
	virtual void init($String* ownName);
	static ::com::sun::tools::javac::main::Arguments* instance(::com::sun::tools::javac::util::Context* context);
	virtual bool isEmpty();
	void lambda$handleReleaseOptions$0(::com::sun::tools::javac::main::Option* option);
	bool lambda$processArgs$1(::java::util::Set* allowableOpts, ::com::sun::tools::javac::main::OptionHelper* helper, bool allowOperands, bool checkFileManager, ::java::lang::Iterable* extra);
	void lambda$validate$2(::com::sun::tools::javac::jvm::Target* t, ::com::sun::tools::javac::main::Option* option);
	bool processArgs(::java::lang::Iterable* args, ::java::util::Set* allowableOpts, ::com::sun::tools::javac::main::OptionHelper* helper, bool allowOperands, bool checkFileManager);
	void report(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticInfo* diag);
	virtual void reportDiag(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticInfo* diag);
	virtual ::com::sun::tools::javac::util::ListBuffer* toList(::java::lang::Iterable* items);
	virtual ::java::util::Set* toSet(::java::lang::Iterable* items);
	virtual bool validate();
	void validateAddExports(::javax::lang::model::SourceVersion* sv);
	void validateAddModules(::javax::lang::model::SourceVersion* sv);
	void validateAddReads(::javax::lang::model::SourceVersion* sv);
	void validateDefaultModuleForCreatedFiles(::javax::lang::model::SourceVersion* sv);
	void validateLimitModules(::javax::lang::model::SourceVersion* sv);
	static ::com::sun::tools::javac::util::Context$Key* argsKey;
	$String* ownName = nullptr;
	::java::util::Set* classNames = nullptr;
	::java::util::Set* files = nullptr;
	::java::util::Map* deferredFileManagerOptions = nullptr;
	::java::util::Set* fileObjects = nullptr;
	bool emptyAllowed = false;
	::com::sun::tools::javac::util::Options* options = nullptr;
	::javax::tools::JavaFileManager* fileManager = nullptr;
	::com::sun::tools::javac::util::Log* log = nullptr;
	::com::sun::tools::javac::util::Context* context = nullptr;
	::com::sun::tools::javac::main::Arguments$ErrorMode* errorMode = nullptr;
	bool errors = false;
	::com::sun::tools::javac::main::OptionHelper* cmdLineHelper = nullptr;
	::com::sun::tools::javac::main::OptionHelper* apiHelper = nullptr;
};

				} // main
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_main_Arguments_h_