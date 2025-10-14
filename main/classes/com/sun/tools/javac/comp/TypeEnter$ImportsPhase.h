#ifndef _com_sun_tools_javac_comp_TypeEnter$ImportsPhase_h_
#define _com_sun_tools_javac_comp_TypeEnter$ImportsPhase_h_
//$ class com.sun.tools.javac.comp.TypeEnter$ImportsPhase
//$ extends com.sun.tools.javac.comp.TypeEnter$Phase

#include <com/sun/tools/javac/comp/TypeEnter$Phase.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Scope;
					class Scope$ImportFilter;
					class Symbol;
					class Symbol$CompletionFailure;
					class Symbol$PackageSymbol;
					class Symbol$TypeSymbol;
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
				namespace comp {
					class Env;
					class TypeEnter;
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
					class JCTree$JCCompilationUnit;
					class JCTree$JCImport;
					class JCTree$JCPackageDecl;
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
					class JCDiagnostic$DiagnosticPosition;
					class Name;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiConsumer;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class TypeEnter$ImportsPhase : public ::com::sun::tools::javac::comp::TypeEnter$Phase {
	$class(TypeEnter$ImportsPhase, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::TypeEnter$Phase)
public:
	TypeEnter$ImportsPhase();
	void init$(::com::sun::tools::javac::comp::TypeEnter* this$0);
	::com::sun::tools::javac::code::Type* attribImportType(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::comp::Env* env);
	void checkClassPackageClash(::com::sun::tools::javac::tree::JCTree$JCPackageDecl* tree);
	void doImport(::com::sun::tools::javac::tree::JCTree$JCImport* tree);
	void importAll(::com::sun::tools::javac::tree::JCTree$JCImport* imp, ::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym, ::com::sun::tools::javac::comp::Env* env);
	void importNamed(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* tsym, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree$JCImport* imp);
	void importNamedStatic(::com::sun::tools::javac::tree::JCTree$JCImport* imp, ::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::comp::Env* env);
	void importStaticAll(::com::sun::tools::javac::tree::JCTree$JCImport* imp, ::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym, ::com::sun::tools::javac::comp::Env* env);
	void lambda$new$0(::com::sun::tools::javac::tree::JCTree$JCImport* imp, ::com::sun::tools::javac::code::Symbol$CompletionFailure* cf);
	bool lambda$resolveImports$1(::com::sun::tools::javac::code::Symbol$PackageSymbol* packge, ::com::sun::tools::javac::code::Scope* origin, ::com::sun::tools::javac::code::Symbol* sym);
	bool lambda$resolveImports$2(::com::sun::tools::javac::code::Symbol$PackageSymbol* packge, ::com::sun::tools::javac::code::Scope* origin, ::com::sun::tools::javac::code::Symbol* sym);
	void resolveImports(::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* tree, ::com::sun::tools::javac::comp::Env* env);
	virtual void runPhase(::com::sun::tools::javac::comp::Env* env) override;
	::com::sun::tools::javac::comp::TypeEnter* this$0 = nullptr;
	::com::sun::tools::javac::comp::Env* env = nullptr;
	::com::sun::tools::javac::code::Scope$ImportFilter* staticImportFilter = nullptr;
	::com::sun::tools::javac::code::Scope$ImportFilter* typeImportFilter = nullptr;
	::java::util::function::BiConsumer* cfHandler = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_TypeEnter$ImportsPhase_h_