#ifndef _com_sun_tools_javac_comp_Enter_h_
#define _com_sun_tools_javac_comp_Enter_h_
//$ class com.sun.tools.javac.comp.Enter
//$ extends com.sun.tools.javac.tree.JCTree$Visitor

#include <com/sun/tools/javac/tree/JCTree$Visitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Lint;
					class Scope$WriteableScope;
					class Symbol$ClassSymbol;
					class Symbol$ModuleSymbol;
					class Symbol$TypeSymbol;
					class Symtab;
					class Type;
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
					class Env;
					class Modules;
					class Todo;
					class TypeEnter;
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
				namespace main {
					class Option$PkgInfo;
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
					class JCTree;
					class JCTree$JCClassDecl;
					class JCTree$JCCompilationUnit;
					class JCTree$JCModuleDecl;
					class JCTree$JCTypeParameter;
					class TreeMaker;
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
					class Context$Key;
					class JCDiagnostic$DiagnosticPosition;
					class JCDiagnostic$Factory;
					class List;
					class ListBuffer;
					class Log;
					class Names;
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
				namespace comp {

class $export Enter : public ::com::sun::tools::javac::tree::JCTree$Visitor {
	$class(Enter, 0, ::com::sun::tools::javac::tree::JCTree$Visitor)
public:
	Enter();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual ::com::sun::tools::javac::code::Type* classEnter(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::comp::Env* env);
	virtual ::com::sun::tools::javac::util::List* classEnter(::com::sun::tools::javac::util::List* trees, ::com::sun::tools::javac::comp::Env* env);
	virtual ::com::sun::tools::javac::comp::Env* classEnv(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree, ::com::sun::tools::javac::comp::Env* env);
	static bool classNameMatchesFileName(::com::sun::tools::javac::code::Symbol$ClassSymbol* c, ::com::sun::tools::javac::comp::Env* env);
	virtual void complete(::com::sun::tools::javac::util::List* trees, ::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	virtual void duplicateClass(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	virtual ::com::sun::tools::javac::code::Scope$WriteableScope* enterScope(::com::sun::tools::javac::comp::Env* env);
	virtual ::com::sun::tools::javac::comp::Env* getClassEnv(::com::sun::tools::javac::code::Symbol$TypeSymbol* sym);
	virtual ::com::sun::tools::javac::comp::Env* getEnv(::com::sun::tools::javac::code::Symbol$TypeSymbol* sym);
	virtual ::java::lang::Iterable* getEnvs();
	virtual ::com::sun::tools::javac::comp::Env* getTopLevelEnv(::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* tree);
	static ::com::sun::tools::javac::comp::Enter* instance(::com::sun::tools::javac::util::Context* context);
	static $String* lambda$visitClassDef$2(::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	static bool lambda$visitTopLevel$0(::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* tree, ::com::sun::tools::javac::code::Symbol$ModuleSymbol* m);
	bool lambda$visitTopLevel$1(::java::util::Map* visiblePackages, ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* tree, ::com::sun::tools::javac::code::Symbol$ModuleSymbol* cand);
	virtual void main(::com::sun::tools::javac::util::List* trees);
	virtual ::com::sun::tools::javac::comp::Env* moduleEnv(::com::sun::tools::javac::tree::JCTree$JCModuleDecl* tree, ::com::sun::tools::javac::comp::Env* env);
	virtual void newRound();
	virtual ::com::sun::tools::javac::comp::Env* topLevelEnv(::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* tree);
	virtual void unenter(::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* topLevel, ::com::sun::tools::javac::tree::JCTree* tree);
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree) override;
	virtual void visitModuleDef(::com::sun::tools::javac::tree::JCTree$JCModuleDecl* tree) override;
	virtual void visitTopLevel(::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* tree) override;
	virtual void visitTree(::com::sun::tools::javac::tree::JCTree* tree) override;
	virtual void visitTypeParameter(::com::sun::tools::javac::tree::JCTree$JCTypeParameter* tree) override;
	static ::com::sun::tools::javac::util::Context$Key* enterKey;
	::com::sun::tools::javac::comp::Annotate* annotate = nullptr;
	::com::sun::tools::javac::util::Log* log = nullptr;
	::com::sun::tools::javac::code::Symtab* syms = nullptr;
	::com::sun::tools::javac::comp::Check* chk = nullptr;
	::com::sun::tools::javac::tree::TreeMaker* make = nullptr;
	::com::sun::tools::javac::comp::TypeEnter* typeEnter = nullptr;
	::com::sun::tools::javac::code::Types* types = nullptr;
	::com::sun::tools::javac::code::Lint* lint = nullptr;
	::com::sun::tools::javac::util::Names* names = nullptr;
	::javax::tools::JavaFileManager* fileManager = nullptr;
	::com::sun::tools::javac::main::Option$PkgInfo* pkginfoOpt = nullptr;
	::com::sun::tools::javac::comp::TypeEnvs* typeEnvs = nullptr;
	::com::sun::tools::javac::comp::Modules* modules = nullptr;
	::com::sun::tools::javac::util::JCDiagnostic$Factory* diags = nullptr;
	::com::sun::tools::javac::comp::Todo* todo = nullptr;
	::com::sun::tools::javac::util::ListBuffer* uncompleted = nullptr;
	::com::sun::tools::javac::util::ListBuffer* unfinishedModules = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCClassDecl* predefClassDef = nullptr;
	::com::sun::tools::javac::comp::Env* env = nullptr;
	::com::sun::tools::javac::code::Type* result = nullptr;
	::com::sun::tools::javac::tree::TreeScanner* setPackageSymbols = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Enter_h_