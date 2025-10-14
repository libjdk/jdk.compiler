#ifndef _com_sun_tools_javac_comp_Modules_h_
#define _com_sun_tools_javac_comp_Modules_h_
//$ class com.sun.tools.javac.comp.Modules
//$ extends com.sun.tools.javac.tree.JCTree$Visitor

#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <java/lang/Array.h>

#pragma push_macro("ALL_MODULE_PATH")
#undef ALL_MODULE_PATH
#pragma push_macro("ALL_SYSTEM")
#undef ALL_SYSTEM
#pragma push_macro("IS_AUTOMATIC")
#undef IS_AUTOMATIC

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class DeferredLintHandler;
					class Directive$ExportsDirective;
					class Directive$RequiresDirective;
					class ModuleFinder;
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
					class Attr;
					class Check;
					class Modules$PackageNameFinder;
					class TypeEnvs;
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
				namespace tree {
					class JCTree$JCCompilationUnit;
					class JCTree$JCModuleDecl;
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
					class List;
					class Log;
					class Name;
					class Names;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Map;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
			class Predicate;
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
				namespace comp {

class $export Modules : public ::com::sun::tools::javac::tree::JCTree$Visitor {
	$class(Modules, 0, ::com::sun::tools::javac::tree::JCTree$Visitor)
public:
	Modules();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual void addExtraAddModules($StringArray* extras);
	void addVisiblePackages(::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym, ::java::util::Map* seenPackages, ::com::sun::tools::javac::code::Symbol$ModuleSymbol* exportsFrom, ::java::util::Collection* exports);
	virtual ::java::util::Set* allModules();
	void checkCyclicDependencies(::com::sun::tools::javac::tree::JCTree$JCModuleDecl* mod);
	void checkNoAllModulePath();
	void checkSourceLocation(::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* tree, ::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym);
	void completeAutomaticModule(::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym);
	void completeModule(::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym);
	::java::util::Set* computeTransitiveClosure(::java::util::Set* base, ::java::util::Set* rootModules, ::java::util::Set* observable);
	virtual bool enter(::com::sun::tools::javac::util::List* trees, ::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	bool enter(::com::sun::tools::javac::util::List* trees, ::java::util::function::Consumer* init, ::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	void enterModule(::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* toplevel, ::com::sun::tools::javac::code::Symbol$ClassSymbol* c, ::java::util::Set* modules);
	::java::util::Set* enterModules(::com::sun::tools::javac::util::List* trees, ::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	virtual ::com::sun::tools::javac::code::Symbol$Completer* getCompleter();
	virtual ::com::sun::tools::javac::code::Symbol$ModuleSymbol* getDefaultModule();
	::javax::tools::JavaFileManager$Location* getModuleLocation(::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* tree);
	virtual ::com::sun::tools::javac::code::Symbol$ModuleSymbol* getObservableModule(::com::sun::tools::javac::util::Name* name);
	virtual ::java::util::Set* getRootModules();
	::com::sun::tools::javac::code::Symbol$Completer* getSourceCompleter(::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* tree);
	::com::sun::tools::javac::code::Symbol$Completer* getUnnamedModuleCompleter();
	virtual ::com::sun::tools::javac::code::Symbol$Completer* getUsesProvidesCompleter();
	void initAddExports();
	void initAddReads();
	virtual void initModules(::com::sun::tools::javac::util::List* trees);
	void initVisiblePackages(::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym, ::java::util::Collection* readable);
	static ::com::sun::tools::javac::comp::Modules* instance(::com::sun::tools::javac::util::Context* context);
	virtual bool isInModuleGraph(::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym);
	bool isKnownModule(::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym, ::java::util::Set* unknownModules);
	virtual bool isRootModule(::com::sun::tools::javac::code::Symbol$ModuleSymbol* module);
	bool isValidName(::java::lang::CharSequence* name);
	void lambda$completeModule$18(::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym, ::com::sun::tools::javac::code::Symbol* sym);
	static $String* lambda$completeModule$19(::com::sun::tools::javac::code::Directive$RequiresDirective* d);
	static void lambda$enter$1(::java::util::Set* modules);
	void lambda$getUsesProvidesCompleter$4(::com::sun::tools::javac::code::Symbol* sym);
	static ::java::util::Set* lambda$initAddExports$22(::com::sun::tools::javac::code::Symbol$ModuleSymbol* _x);
	static ::java::util::Set* lambda$initAddReads$23(::com::sun::tools::javac::code::Symbol$ModuleSymbol* m);
	void lambda$initModules$0(::java::util::Set* modules);
	void lambda$initVisiblePackages$21(::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym, ::java::util::Map* seen, ::com::sun::tools::javac::code::Symbol$ModuleSymbol* exportsFrom, ::java::util::Set* exports);
	static $String* lambda$retrieveRequiresTransitive$20(::com::sun::tools::javac::code::Symbol$ModuleSymbol* current, ::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym);
	void lambda$setCompilationUnitModules$2(::com::sun::tools::javac::code::Symbol* sym);
	bool lambda$setupAllModules$10(::com::sun::tools::javac::code::Symbol$ModuleSymbol* sym);
	static bool lambda$setupAllModules$11(::com::sun::tools::javac::code::Symbol$ModuleSymbol* sym);
	static bool lambda$setupAllModules$12(::com::sun::tools::javac::code::Symbol$ModuleSymbol* sym);
	static void lambda$setupAllModules$13(::java::util::Set* enabledRoot, ::java::util::Set* observable, ::com::sun::tools::javac::code::Symbol$ModuleSymbol* sym);
	static bool lambda$setupAllModules$14(::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym);
	static $String* lambda$setupAllModules$15(::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym);
	static void lambda$setupAllModules$16(::com::sun::tools::javac::util::Name* version, ::com::sun::tools::javac::code::Symbol$ModuleSymbol* m);
	bool lambda$setupAllModules$5(::java::util::Set* observable, ::com::sun::tools::javac::code::Symbol$ModuleSymbol* sym);
	static bool lambda$setupAllModules$6(::com::sun::tools::javac::code::Symbol$ModuleSymbol* sym);
	static bool lambda$setupAllModules$7(::com::sun::tools::javac::code::Directive$ExportsDirective* e);
	static bool lambda$setupAllModules$8(::com::sun::tools::javac::code::Symbol$ModuleSymbol* sym);
	static bool lambda$static$17(::com::sun::tools::javac::code::Symbol$ModuleSymbol* m);
	virtual bool modulesInitialized();
	virtual void newRound();
	::java::util::Set* retrieveRequiresTransitive(::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym);
	void setCompilationUnitModules(::com::sun::tools::javac::util::List* trees, ::java::util::Set* rootModules, ::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	void setupAllModules();
	void setupAutomaticModule(::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym);
	$String* singleModuleOverride(::com::sun::tools::javac::util::List* trees);
	using ::com::sun::tools::javac::tree::JCTree$Visitor::toString;
	$String* toString(::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym);
	virtual $String* toString(::javax::tools::JavaFileManager$Location* locn);
	virtual $String* toString(::javax::tools::JavaFileObject* fo);
	static $String* ALL_SYSTEM;
	static $String* ALL_MODULE_PATH;
	::com::sun::tools::javac::util::Log* log = nullptr;
	::com::sun::tools::javac::util::Names* names = nullptr;
	::com::sun::tools::javac::code::Symtab* syms = nullptr;
	::com::sun::tools::javac::comp::Attr* attr = nullptr;
	::com::sun::tools::javac::comp::Check* chk = nullptr;
	::com::sun::tools::javac::code::DeferredLintHandler* deferredLintHandler = nullptr;
	::com::sun::tools::javac::comp::TypeEnvs* typeEnvs = nullptr;
	::com::sun::tools::javac::code::Types* types = nullptr;
	::javax::tools::JavaFileManager* fileManager = nullptr;
	::com::sun::tools::javac::code::ModuleFinder* moduleFinder = nullptr;
	::com::sun::tools::javac::code::Source* source = nullptr;
	::com::sun::tools::javac::jvm::Target* target = nullptr;
	bool allowModules = false;
	bool allowAccessIntoSystem = false;
	bool multiModuleMode = false;
	::com::sun::tools::javac::util::Name* java_se = nullptr;
	::com::sun::tools::javac::util::Name* java_ = nullptr;
	::com::sun::tools::javac::code::Symbol$ModuleSymbol* defaultModule = nullptr;
	$String* addExportsOpt = nullptr;
	::java::util::Map* addExports = nullptr;
	$String* addReadsOpt = nullptr;
	::java::util::Map* addReads = nullptr;
	$String* addModsOpt = nullptr;
	::java::util::Set* extraAddMods = nullptr;
	$String* limitModsOpt = nullptr;
	::java::util::Set* extraLimitMods = nullptr;
	$String* moduleVersionOpt = nullptr;
	bool lintOptions = false;
	::java::util::Set* rootModules = nullptr;
	::java::util::Set* warnedMissing = nullptr;
	::com::sun::tools::javac::comp::Modules$PackageNameFinder* findPackageInFile = nullptr;
	int32_t depth = 0;
	bool inInitModules = false;
	::com::sun::tools::javac::code::Symbol$Completer* mainCompleter = nullptr;
	::java::util::Set* allModules$ = nullptr;
	static ::java::util::function::Predicate* IS_AUTOMATIC;
	::java::util::Map* requiresTransitiveCache = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("ALL_MODULE_PATH")
#pragma pop_macro("ALL_SYSTEM")
#pragma pop_macro("IS_AUTOMATIC")

#endif // _com_sun_tools_javac_comp_Modules_h_