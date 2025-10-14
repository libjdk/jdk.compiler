#ifndef _com_sun_tools_javac_code_ModuleFinder_h_
#define _com_sun_tools_javac_code_ModuleFinder_h_
//$ class com.sun.tools.javac.code.ModuleFinder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class ClassFinder;
					class DeferredCompletionFailureHandler;
					class ModuleFinder$ModuleLocationIterator;
					class ModuleFinder$ModuleNameFromSourceReader;
					class Symbol$ModuleSymbol;
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
				namespace jvm {
					class ModuleNameReader;
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
					class JCDiagnostic$Factory;
					class JCDiagnostic$Fragment;
					class List;
					class Log;
					class Name;
					class Names;
				}
			}
		}
	}
}
namespace javax {
	namespace tools {
		class JavaFileManager;
		class JavaFileManager$Location;
		class JavaFileObject;
		class JavaFileObject$Kind;
		class StandardLocation;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $import ModuleFinder : public ::java::lang::Object {
	$class(ModuleFinder, 0, ::java::lang::Object)
public:
	ModuleFinder();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual ::com::sun::tools::javac::util::List* findAllModules();
	virtual ::com::sun::tools::javac::code::Symbol$ModuleSymbol* findModule(::com::sun::tools::javac::util::Name* name);
	virtual ::com::sun::tools::javac::code::Symbol$ModuleSymbol* findModule(::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym);
	void findModuleInfo(::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym);
	virtual ::com::sun::tools::javac::code::Symbol$ModuleSymbol* findSingleModule();
	virtual ::com::sun::tools::javac::util::JCDiagnostic$Fragment* getDescription(::javax::tools::StandardLocation* l);
	::javax::tools::JavaFileObject* getModuleInfoFromLocation(::javax::tools::JavaFileManager$Location* location, ::javax::tools::JavaFileObject$Kind* kind);
	static ::com::sun::tools::javac::code::ModuleFinder* instance(::com::sun::tools::javac::util::Context* context);
	::javax::tools::JavaFileObject* preferredFileObject(::javax::tools::JavaFileObject* fo1, ::javax::tools::JavaFileObject* fo2);
	::com::sun::tools::javac::code::Symbol$ModuleSymbol* readModule(::javax::tools::JavaFileObject* fo);
	$String* readModuleName(::javax::tools::JavaFileObject* jfo);
	::com::sun::tools::javac::util::List* scanModulePath(::com::sun::tools::javac::code::Symbol$ModuleSymbol* toFind);
	static ::com::sun::tools::javac::util::Context$Key* moduleFinderKey;
	::com::sun::tools::javac::util::Log* log = nullptr;
	::com::sun::tools::javac::code::Symtab* syms = nullptr;
	::com::sun::tools::javac::util::Names* names = nullptr;
	::com::sun::tools::javac::code::ClassFinder* classFinder = nullptr;
	::javax::tools::JavaFileManager* fileManager = nullptr;
	::com::sun::tools::javac::util::JCDiagnostic$Factory* diags = nullptr;
	::com::sun::tools::javac::code::DeferredCompletionFailureHandler* dcfh = nullptr;
	::com::sun::tools::javac::jvm::ModuleNameReader* moduleNameReader = nullptr;
	::com::sun::tools::javac::code::ModuleFinder$ModuleNameFromSourceReader* moduleNameFromSourceReader = nullptr;
	::com::sun::tools::javac::code::ModuleFinder$ModuleLocationIterator* moduleLocationIterator = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_ModuleFinder_h_