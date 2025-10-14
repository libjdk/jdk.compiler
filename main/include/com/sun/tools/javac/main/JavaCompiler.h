#ifndef _com_sun_tools_javac_main_JavaCompiler_h_
#define _com_sun_tools_javac_main_JavaCompiler_h_
//$ class com.sun.tools.javac.main.JavaCompiler
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEFAULT_COMPILE_POLICY")
#undef DEFAULT_COMPILE_POLICY

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {
					class MultiTaskListener;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class ClassFinder;
					class DeferredCompletionFailureHandler;
					class ModuleFinder;
					class Preview;
					class Source;
					class Symbol;
					class Symbol$ClassSymbol;
					class Symbol$Completer;
					class Symbol$ModuleSymbol;
					class Symtab;
					class Types;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Analyzer;
					class Annotate;
					class Attr;
					class Check;
					class CompileStates;
					class CompileStates$CompileState;
					class Enter;
					class Env;
					class Flow;
					class Lower;
					class Modules;
					class Todo;
					class TransTypes;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {
					class ClassReader;
					class ClassWriter;
					class Gen;
					class JNIWriter;
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
					class JavaCompiler$CompilePolicy;
					class JavaCompiler$ImplicitSourcePolicy;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {
					class ParserFactory;
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
				namespace tree {
					class JCTree$JCClassDecl;
					class JCTree$JCCompilationUnit;
					class TreeMaker;
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
					class JCDiagnostic;
					class JCDiagnostic$Factory;
					class List;
					class Log;
					class Log$DeferredDiagnosticHandler;
					class Name;
					class Names;
					class Options;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class CharSequence;
		class Iterable;
	}
}
namespace java {
	namespace util {
		class Collection;
		class HashMap;
		class Map;
		class Queue;
		class ResourceBundle;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Function;
		}
	}
}
namespace javax {
	namespace tools {
		class JavaFileManager;
		class JavaFileObject;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

class $import JavaCompiler : public ::java::lang::Object {
	$class(JavaCompiler, 0, ::java::lang::Object)
public:
	JavaCompiler();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual ::java::util::Queue* attribute(::java::util::Queue* envs);
	virtual ::com::sun::tools::javac::comp::Env* attribute(::com::sun::tools::javac::comp::Env* env);
	virtual void checkReusable();
	virtual void close();
	virtual void compile(::com::sun::tools::javac::util::List* sourceFileObject);
	virtual void compile(::java::util::Collection* sourceFileObjects, ::java::util::Collection* classnames, ::java::lang::Iterable* processors, ::java::util::Collection* addModules);
	virtual bool continueAfterProcessAnnotations();
	virtual ::java::util::Queue* desugar(::java::util::Queue* envs);
	virtual void desugar(::com::sun::tools::javac::comp::Env* env, ::java::util::Queue* results);
	static int64_t elapsed(int64_t then);
	virtual void enterDone();
	virtual ::com::sun::tools::javac::util::List* enterTrees(::com::sun::tools::javac::util::List* roots);
	virtual int32_t errorCount();
	virtual bool explicitAnnotationProcessingRequested();
	static bool explicitAnnotationProcessingRequested(::com::sun::tools::javac::util::Options* options);
	::com::sun::tools::javac::util::Name* findPackageInFile(::javax::tools::JavaFileObject* fo);
	virtual ::java::util::Queue* flow(::java::util::Queue* envs);
	virtual ::java::util::Queue* flow(::com::sun::tools::javac::comp::Env* env);
	virtual void flow(::com::sun::tools::javac::comp::Env* env, ::java::util::Queue* results);
	static $String* fullVersion();
	virtual ::javax::tools::JavaFileObject* genCode(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree$JCClassDecl* cdef);
	virtual void generate(::java::util::Queue* queue);
	virtual void generate(::java::util::Queue* queue, ::java::util::Queue* results);
	virtual ::java::util::Map* groupByFile(::java::util::Queue* envs);
	virtual ::com::sun::tools::javac::util::List* initModules(::com::sun::tools::javac::util::List* roots);
	virtual void initProcessAnnotations(::java::lang::Iterable* processors, ::java::util::Collection* initialFiles, ::java::util::Collection* initialClassNames);
	static ::com::sun::tools::javac::main::JavaCompiler* instance(::com::sun::tools::javac::util::Context* context);
	virtual bool isEnterDone();
	virtual bool keepComments();
	static ::com::sun::tools::javac::util::Name* lambda$findPackageInFile$4(::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* t);
	void lambda$new$0(::com::sun::tools::javac::code::Symbol* sym);
	static ::com::sun::tools::javac::util::Name* lambda$readModuleName$3(::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* t);
	::com::sun::tools::javac::util::JCDiagnostic* lambda$readSourceFile$1();
	::com::sun::tools::javac::util::JCDiagnostic* lambda$readSourceFile$2();
	virtual void newRound();
	static int64_t now();
	virtual ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* parse(::javax::tools::JavaFileObject* filename, ::java::lang::CharSequence* content);
	virtual ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* parse($String* filename);
	virtual ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* parse(::javax::tools::JavaFileObject* filename);
	::com::sun::tools::javac::util::Name* parseAndGetName(::javax::tools::JavaFileObject* fo, ::java::util::function::Function* tree2Name);
	virtual ::com::sun::tools::javac::util::List* parseFiles(::java::lang::Iterable* fileObjects);
	virtual ::com::sun::tools::javac::util::List* parseFiles(::java::lang::Iterable* fileObjects, bool force);
	virtual void printCount($String* kind, int32_t count);
	virtual void printNote($String* lines);
	virtual ::javax::tools::JavaFileObject* printSource(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree$JCClassDecl* cdef);
	void printSuppressedCount(int32_t shown, int32_t suppressed, $String* diagKey);
	virtual void processAnnotations(::com::sun::tools::javac::util::List* roots);
	virtual void processAnnotations(::com::sun::tools::javac::util::List* roots, ::java::util::Collection* classnames);
	::com::sun::tools::javac::util::Name* readModuleName(::javax::tools::JavaFileObject* fo);
	virtual ::java::lang::CharSequence* readSource(::javax::tools::JavaFileObject* filename);
	void readSourceFile(::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	virtual void readSourceFile(::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* tree, ::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	virtual ::com::sun::tools::javac::tree::JCTree$JCClassDecl* removeMethodBodies(::com::sun::tools::javac::tree::JCTree$JCClassDecl* cdef);
	virtual void reportDeferredDiagnostics();
	virtual ::com::sun::tools::javac::code::Symbol* resolveBinaryNameOrIdent($String* name);
	virtual ::com::sun::tools::javac::code::Symbol* resolveBinaryNameOrIdent(::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym, $String* name);
	virtual ::com::sun::tools::javac::code::Symbol* resolveIdent(::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym, $String* name);
	virtual void setDeferredDiagnosticHandler(::com::sun::tools::javac::util::Log$DeferredDiagnosticHandler* deferredDiagnosticHandler);
	virtual bool shouldStop(::com::sun::tools::javac::comp::CompileStates$CompileState* cs);
	::java::util::Queue* stopIfError(::com::sun::tools::javac::comp::CompileStates$CompileState* cs, ::java::util::Queue* queue);
	::com::sun::tools::javac::util::List* stopIfError(::com::sun::tools::javac::comp::CompileStates$CompileState* cs, ::com::sun::tools::javac::util::List* list);
	bool unrecoverableError();
	static $String* version();
	static $String* version($String* key);
	virtual int32_t warningCount();
	static ::com::sun::tools::javac::util::Context$Key* compilerKey;
	static $String* versionRBName;
	static ::java::util::ResourceBundle* versionRB;
	static ::com::sun::tools::javac::main::JavaCompiler$CompilePolicy* DEFAULT_COMPILE_POLICY;
	::com::sun::tools::javac::util::Log* log = nullptr;
	::com::sun::tools::javac::util::JCDiagnostic$Factory* diagFactory = nullptr;
	::com::sun::tools::javac::tree::TreeMaker* make = nullptr;
	::com::sun::tools::javac::code::ClassFinder* finder = nullptr;
	::com::sun::tools::javac::jvm::ClassReader* reader = nullptr;
	::com::sun::tools::javac::jvm::ClassWriter* writer = nullptr;
	::com::sun::tools::javac::jvm::JNIWriter* jniWriter = nullptr;
	::com::sun::tools::javac::comp::Enter* enter = nullptr;
	::com::sun::tools::javac::code::Symtab* syms = nullptr;
	::com::sun::tools::javac::code::Source* source = nullptr;
	::com::sun::tools::javac::code::Preview* preview = nullptr;
	::com::sun::tools::javac::jvm::Gen* gen = nullptr;
	::com::sun::tools::javac::util::Names* names = nullptr;
	::com::sun::tools::javac::comp::Attr* attr = nullptr;
	::com::sun::tools::javac::comp::Analyzer* analyzer = nullptr;
	::com::sun::tools::javac::comp::Check* chk = nullptr;
	::com::sun::tools::javac::comp::Flow* flow$ = nullptr;
	::com::sun::tools::javac::comp::Modules* modules = nullptr;
	::com::sun::tools::javac::code::ModuleFinder* moduleFinder = nullptr;
	::com::sun::tools::javac::util::JCDiagnostic$Factory* diags = nullptr;
	::com::sun::tools::javac::code::DeferredCompletionFailureHandler* dcfh = nullptr;
	::com::sun::tools::javac::comp::TransTypes* transTypes = nullptr;
	::com::sun::tools::javac::comp::Lower* lower = nullptr;
	::com::sun::tools::javac::comp::Annotate* annotate = nullptr;
	::com::sun::tools::javac::util::Name* completionFailureName = nullptr;
	::com::sun::tools::javac::code::Types* types = nullptr;
	::javax::tools::JavaFileManager* fileManager = nullptr;
	::com::sun::tools::javac::parser::ParserFactory* parserFactory = nullptr;
	::com::sun::tools::javac::api::MultiTaskListener* taskListener = nullptr;
	::com::sun::tools::javac::code::Symbol$Completer* sourceCompleter = nullptr;
	::com::sun::tools::javac::util::Options* options = nullptr;
	::com::sun::tools::javac::util::Context* context = nullptr;
	bool annotationProcessingOccurred = false;
	bool implicitSourceFilesRead = false;
	bool enterDone$ = false;
	::com::sun::tools::javac::comp::CompileStates* compileStates = nullptr;
	bool verbose = false;
	bool sourceOutput = false;
	bool lineDebugInfo = false;
	bool genEndPos = false;
	bool devVerbose = false;
	bool processPcks = false;
	bool werror = false;
	bool explicitAnnotationProcessingRequested$ = false;
	::com::sun::tools::javac::main::JavaCompiler$CompilePolicy* compilePolicy = nullptr;
	::com::sun::tools::javac::main::JavaCompiler$ImplicitSourcePolicy* implicitSourcePolicy = nullptr;
	bool verboseCompilePolicy = false;
	::com::sun::tools::javac::comp::CompileStates$CompileState* shouldStopPolicyIfError = nullptr;
	::com::sun::tools::javac::comp::CompileStates$CompileState* shouldStopPolicyIfNoError = nullptr;
	::com::sun::tools::javac::comp::Todo* todo = nullptr;
	::com::sun::tools::javac::util::List* closeables = nullptr;
	::java::util::Set* inputFiles = nullptr;
	::com::sun::tools::javac::code::Symbol* silentFail = nullptr;
	bool keepComments$ = false;
	bool hasBeenUsed = false;
	int64_t start_msec = 0;
	int64_t elapsed_msec = 0;
	::com::sun::tools::javac::util::List* rootClasses = nullptr;
	bool processAnnotations$ = false;
	::com::sun::tools::javac::util::Log$DeferredDiagnosticHandler* deferredDiagnosticHandler = nullptr;
	::com::sun::tools::javac::processing::JavacProcessingEnvironment* procEnvImpl = nullptr;
	::java::util::HashMap* desugaredEnvs = nullptr;
};

				} // main
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("DEFAULT_COMPILE_POLICY")

#endif // _com_sun_tools_javac_main_JavaCompiler_h_