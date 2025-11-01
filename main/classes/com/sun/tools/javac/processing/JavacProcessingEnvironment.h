#ifndef _com_sun_tools_javac_processing_JavacProcessingEnvironment_h_
#define _com_sun_tools_javac_processing_JavacProcessingEnvironment_h_
//$ class com.sun.tools.javac.processing.JavacProcessingEnvironment
//$ extends javax.annotation.processing.ProcessingEnvironment
//$ implements java.io.Closeable

#include <java/io/Closeable.h>
#include <javax/annotation/processing/ProcessingEnvironment.h>

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
					class DeferredCompletionFailureHandler;
					class Preview;
					class Source;
					class Symbol$ClassSymbol;
					class Symbol$Completer;
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
					class Annotate;
					class Check;
					class Enter;
					class Modules;
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
					class JavaCompiler;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace model {
					class JavacElements;
					class JavacTypes;
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
					class JavacFiler;
					class JavacMessager;
					class JavacProcessingEnvironment$DiscoveredProcessors;
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
					class TreeScanner;
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
					class JCDiagnostic$Factory;
					class JavacMessages;
					class List;
					class Log;
					class Log$DeferredDiagnosticHandler;
					class Names;
					class Options;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
		class Exception;
		class Iterable;
		class SecurityException;
	}
}
namespace java {
	namespace util {
		class Iterator;
		class Locale;
		class Map;
		class ServiceLoader;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}
namespace javax {
	namespace annotation {
		namespace processing {
			class Filer;
			class Messager;
			class Processor;
			class RoundEnvironment;
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
	namespace lang {
		namespace model {
			namespace util {
				class Elements;
				class Types;
			}
		}
	}
}
namespace javax {
	namespace tools {
		class JavaFileManager;
		class JavaFileObject;
		class JavaFileObject$Kind;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

class JavacProcessingEnvironment : public ::javax::annotation::processing::ProcessingEnvironment, public ::java::io::Closeable {
	$class(JavacProcessingEnvironment, 0, ::javax::annotation::processing::ProcessingEnvironment, ::java::io::Closeable)
public:
	JavacProcessingEnvironment();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual bool atLeastOneProcessor();
	bool callProcessor(::javax::annotation::processing::Processor* proc, ::java::util::Set* tes, ::javax::annotation::processing::RoundEnvironment* renv);
	virtual void close() override;
	void discoverAndRunProcs(::java::util::Set* annotationsPresent, ::com::sun::tools::javac::util::List* topLevelClasses, ::com::sun::tools::javac::util::List* packageInfoFiles, ::com::sun::tools::javac::util::List* moduleInfoFiles);
	virtual bool doProcessing(::com::sun::tools::javac::util::List* roots, ::com::sun::tools::javac::util::List* classSymbols, ::java::lang::Iterable* pckSymbols, ::com::sun::tools::javac::util::Log$DeferredDiagnosticHandler* deferredDiagnosticHandler);
	virtual ::com::sun::tools::javac::util::Context* getContext();
	virtual ::javax::lang::model::util::Elements* getElementUtils() override;
	virtual ::javax::annotation::processing::Filer* getFiler() override;
	virtual ::java::util::Locale* getLocale() override;
	virtual ::javax::annotation::processing::Messager* getMessager() override;
	::com::sun::tools::javac::util::List* getModuleInfoFiles(::com::sun::tools::javac::util::List* units);
	virtual ::java::util::Map* getOptions() override;
	::com::sun::tools::javac::util::List* getPackageInfoFiles(::com::sun::tools::javac::util::List* units);
	::com::sun::tools::javac::util::List* getPackageInfoFilesFromClasses(::com::sun::tools::javac::util::List* syms);
	virtual ::java::lang::ClassLoader* getProcessorClassLoader();
	virtual ::java::util::ServiceLoader* getServiceLoader($Class* service);
	virtual ::javax::lang::model::SourceVersion* getSourceVersion() override;
	virtual ::java::util::Set* getSpecifiedPackages();
	::com::sun::tools::javac::util::List* getTopLevelClasses(::com::sun::tools::javac::util::List* units);
	::com::sun::tools::javac::util::List* getTopLevelClassesFromClasses(::com::sun::tools::javac::util::List* syms);
	virtual ::javax::lang::model::util::Types* getTypeUtils() override;
	void handleException($String* key, ::java::lang::Exception* e);
	::java::util::Iterator* handleServiceLoaderUnavailability($String* key, ::java::lang::Exception* e);
	static ::java::util::regex::Pattern* importStringToPattern(bool allowModules, $String* s, ::javax::annotation::processing::Processor* p, ::com::sun::tools::javac::util::Log* log, bool lint);
	::java::util::Set* initPlatformAnnotations();
	void initProcessorIterator(::java::lang::Iterable* processors);
	void initProcessorLoader();
	::java::util::Map* initProcessorOptions();
	::java::util::Set* initUnmatchedProcessorOptions();
	static ::com::sun::tools::javac::processing::JavacProcessingEnvironment* instance(::com::sun::tools::javac::util::Context* context);
	bool isModuleInfo(::javax::tools::JavaFileObject* fo, ::javax::tools::JavaFileObject$Kind* kind);
	bool isPkgInfo(::javax::tools::JavaFileObject* fo, ::javax::tools::JavaFileObject$Kind* kind);
	bool isPkgInfo(::com::sun::tools::javac::code::Symbol$ClassSymbol* sym);
	virtual bool isPreviewEnabled() override;
	static bool isValidOptionName($String* optionName);
	static ::com::sun::tools::javac::util::List* join(::com::sun::tools::javac::util::List* list1, ::com::sun::tools::javac::util::List* list2);
	static ::java::util::Iterator* lambda$initProcessorIterator$0(::java::util::Iterator* i);
	bool moreToDo();
	bool needClassLoader($String* procNames, ::java::lang::Iterable* workingpath);
	virtual void setProcessors(::java::lang::Iterable* processors);
	virtual $String* toString() override;
	static ::java::util::regex::Pattern* warnAndNoMatches($String* s, ::javax::annotation::processing::Processor* p, ::com::sun::tools::javac::util::Log* log, bool lint);
	void warnIfUnmatchedOptions();
	::com::sun::tools::javac::util::Options* options = nullptr;
	bool printProcessorInfo = false;
	bool printRounds = false;
	bool verbose = false;
	bool lint = false;
	bool fatalErrors = false;
	bool werror = false;
	bool showResolveErrors = false;
	::com::sun::tools::javac::processing::JavacFiler* filer = nullptr;
	::com::sun::tools::javac::processing::JavacMessager* messager = nullptr;
	::com::sun::tools::javac::model::JavacElements* elementUtils = nullptr;
	::com::sun::tools::javac::model::JavacTypes* typeUtils = nullptr;
	::com::sun::tools::javac::main::JavaCompiler* compiler = nullptr;
	::com::sun::tools::javac::comp::Modules* modules = nullptr;
	::com::sun::tools::javac::code::Types* types = nullptr;
	::com::sun::tools::javac::comp::Annotate* annotate = nullptr;
	::com::sun::tools::javac::processing::JavacProcessingEnvironment$DiscoveredProcessors* discoveredProcs = nullptr;
	::java::util::Map* processorOptions = nullptr;
	::java::util::Set* unmatchedProcessorOptions = nullptr;
	::java::util::Set* platformAnnotations = nullptr;
	::java::util::Set* specifiedPackages = nullptr;
	::com::sun::tools::javac::util::Log* log = nullptr;
	::com::sun::tools::javac::util::JCDiagnostic$Factory* diags = nullptr;
	::com::sun::tools::javac::code::Source* source = nullptr;
	::java::lang::ClassLoader* processorClassLoader = nullptr;
	::java::util::ServiceLoader* serviceLoader = nullptr;
	::java::lang::SecurityException* processorLoaderException = nullptr;
	::javax::tools::JavaFileManager* fileManager = nullptr;
	::com::sun::tools::javac::util::JavacMessages* messages = nullptr;
	::com::sun::tools::javac::api::MultiTaskListener* taskListener = nullptr;
	::com::sun::tools::javac::code::Symtab* symtab = nullptr;
	::com::sun::tools::javac::code::DeferredCompletionFailureHandler* dcfh = nullptr;
	::com::sun::tools::javac::util::Names* names = nullptr;
	::com::sun::tools::javac::comp::Enter* enter = nullptr;
	::com::sun::tools::javac::code::Symbol$Completer* initialCompleter = nullptr;
	::com::sun::tools::javac::comp::Check* chk = nullptr;
	::com::sun::tools::javac::util::Context* context = nullptr;
	::com::sun::tools::javac::code::Preview* preview = nullptr;
	::com::sun::tools::javac::tree::TreeScanner* treeCleaner = nullptr;
	static ::java::util::regex::Pattern* noMatches;
};

				} // processing
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_processing_JavacProcessingEnvironment_h_