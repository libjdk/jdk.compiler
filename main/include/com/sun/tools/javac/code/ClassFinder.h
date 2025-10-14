#ifndef _com_sun_tools_javac_code_ClassFinder_h_
#define _com_sun_tools_javac_code_ClassFinder_h_
//$ class com.sun.tools.javac.code.ClassFinder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class DeferredCompletionFailureHandler;
					class Symbol;
					class Symbol$ClassSymbol;
					class Symbol$Completer;
					class Symbol$CompletionFailure;
					class Symbol$ModuleSymbol;
					class Symbol$PackageSymbol;
					class Symbol$TypeSymbol;
					class Symtab;
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
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {
					class JRTIndex;
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
					class Profile;
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
					class Dependencies;
					class JCDiagnostic;
					class JCDiagnostic$Factory;
					class Log;
					class Name;
					class Names;
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class IOException;
	}
}
namespace java {
	namespace lang {
		class Iterable;
	}
}
namespace java {
	namespace util {
		class EnumSet;
		class Iterator;
		class Map;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Supplier;
		}
	}
}
namespace javax {
	namespace tools {
		class JavaFileManager;
		class JavaFileManager$Location;
		class JavaFileObject;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $import ClassFinder : public ::java::lang::Object {
	$class(ClassFinder, 0, ::java::lang::Object)
public:
	ClassFinder();
	void init$(::com::sun::tools::javac::util::Context* context);
	::com::sun::tools::javac::code::Symbol$CompletionFailure* classFileNotFound(::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	void complete(::com::sun::tools::javac::code::Symbol* sym);
	void completeEnclosing(::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	void completeOwners(::com::sun::tools::javac::code::Symbol* o);
	virtual void extraFileActions(::com::sun::tools::javac::code::Symbol$PackageSymbol* pack, ::javax::tools::JavaFileObject* fe);
	virtual void fillIn(::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	void fillIn(::com::sun::tools::javac::code::Symbol$PackageSymbol* p);
	void fillIn(::com::sun::tools::javac::code::Symbol$PackageSymbol* p, ::javax::tools::JavaFileManager$Location* location, ::java::lang::Iterable* files);
	virtual ::com::sun::tools::javac::code::Symbol$Completer* getCompleter();
	virtual ::java::util::EnumSet* getPackageFileKinds();
	virtual int64_t getSupplementaryFlags(::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	virtual void includeClassFile(::com::sun::tools::javac::code::Symbol$PackageSymbol* p, ::javax::tools::JavaFileObject* file);
	static ::com::sun::tools::javac::code::ClassFinder* instance(::com::sun::tools::javac::util::Context* context);
	::com::sun::tools::javac::util::JCDiagnostic* lambda$classFileNotFound$5(::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	::com::sun::tools::javac::util::JCDiagnostic* lambda$complete$1(::java::io::IOException* ex);
	::com::sun::tools::javac::util::JCDiagnostic* lambda$fillIn$2();
	static bool lambda$fillIn$3(::com::sun::tools::javac::code::Symbol* sym);
	static void lambda$fillIn$4(::com::sun::tools::javac::code::Symbol* sym);
	::java::util::Iterator* lambda$list$7(::java::lang::Iterable* listed, ::com::sun::tools::javac::code::Symbol$PackageSymbol* p, ::java::util::Set* kinds);
	static $String* lambda$loadClass$6(::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym, ::com::sun::tools::javac::util::Name* flatname);
	static ::com::sun::tools::javac::util::JCDiagnostic* lambda$new$0();
	virtual ::java::lang::Iterable* list(::javax::tools::JavaFileManager$Location* location, ::com::sun::tools::javac::code::Symbol$PackageSymbol* p, $String* packageName, ::java::util::Set* kinds);
	virtual ::com::sun::tools::javac::code::Symbol$ClassSymbol* loadClass(::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym, ::com::sun::tools::javac::util::Name* flatname);
	::com::sun::tools::javac::code::Symbol$CompletionFailure* newCompletionFailure(::com::sun::tools::javac::code::Symbol$TypeSymbol* c, ::java::util::function::Supplier* diag);
	virtual ::javax::tools::JavaFileObject* preferredFileObject(::javax::tools::JavaFileObject* a, ::javax::tools::JavaFileObject* b);
	void scanModulePaths(::com::sun::tools::javac::code::Symbol$PackageSymbol* p, ::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym);
	void scanPlatformPath(::com::sun::tools::javac::code::Symbol$PackageSymbol* p);
	void scanUserPaths(::com::sun::tools::javac::code::Symbol$PackageSymbol* p, bool includeSourcePath);
	static ::com::sun::tools::javac::util::Context$Key* classFinderKey;
	::com::sun::tools::javac::jvm::ClassReader* reader = nullptr;
	::com::sun::tools::javac::comp::Annotate* annotate = nullptr;
	bool verbose = false;
	bool cacheCompletionFailure = false;
	bool preferSource = false;
	bool userPathsFirst = false;
	::com::sun::tools::javac::util::Log* log = nullptr;
	::com::sun::tools::javac::code::Symtab* syms = nullptr;
	::com::sun::tools::javac::util::Names* names = nullptr;
	::com::sun::tools::javac::util::Name* completionFailureName = nullptr;
	::javax::tools::JavaFileManager* fileManager = nullptr;
	::com::sun::tools::javac::util::Dependencies* dependencies = nullptr;
	::com::sun::tools::javac::util::JCDiagnostic$Factory* diagFactory = nullptr;
	::com::sun::tools::javac::code::DeferredCompletionFailureHandler* dcfh = nullptr;
	::com::sun::tools::javac::code::Symbol$Completer* sourceCompleter = nullptr;
	::javax::tools::JavaFileObject* currentClassFile = nullptr;
	::com::sun::tools::javac::code::Symbol* currentOwner = nullptr;
	::com::sun::tools::javac::jvm::Profile* profile = nullptr;
	::com::sun::tools::javac::file::JRTIndex* jrtIndex = nullptr;
	::com::sun::tools::javac::code::Symbol$Completer* thisCompleter = nullptr;
	::java::util::Map* supplementaryFlags = nullptr;
	::com::sun::tools::javac::code::Symbol$CompletionFailure* cachedCompletionFailure = nullptr;
	::javax::tools::JavaFileManager$Location* currentLoc = nullptr;
	bool verbosePath = false;
	bool preferCurrent = false;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_ClassFinder_h_