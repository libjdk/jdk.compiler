#ifndef _com_sun_tools_javac_comp_Modules$ModuleVisitor_h_
#define _com_sun_tools_javac_comp_Modules$ModuleVisitor_h_
//$ class com.sun.tools.javac.comp.Modules$ModuleVisitor
//$ extends com.sun.tools.javac.tree.JCTree$Visitor

#include <com/sun/tools/javac/tree/JCTree$Visitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Directive$ExportsDirective;
					class Directive$OpensDirective;
					class Symbol$ModuleSymbol;
					class Symbol$PackageSymbol;
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
				namespace tree {
					class JCTree$JCDirective;
					class JCTree$JCExports;
					class JCTree$JCExpression;
					class JCTree$JCModuleDecl;
					class JCTree$JCOpens;
					class JCTree$JCProvides;
					class JCTree$JCRequires;
					class JCTree$JCUses;
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
					class List;
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

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $export Modules$ModuleVisitor : public ::com::sun::tools::javac::tree::JCTree$Visitor {
	$class(Modules$ModuleVisitor, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$Visitor)
public:
	Modules$ModuleVisitor();
	void init$(::com::sun::tools::javac::comp::Modules* this$0);
	void checkDuplicateExportsToModule(::com::sun::tools::javac::tree::JCTree$JCExpression* name, ::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym, ::com::sun::tools::javac::code::Directive$ExportsDirective* d);
	void checkDuplicateOpensToModule(::com::sun::tools::javac::tree::JCTree$JCExpression* name, ::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym, ::com::sun::tools::javac::code::Directive$OpensDirective* d);
	void ensureJavaBase();
	static ::com::sun::tools::javac::util::List* lambda$visitExports$1(::com::sun::tools::javac::code::Symbol$PackageSymbol* p);
	void lambda$visitModuleDef$0(::com::sun::tools::javac::tree::JCTree$JCDirective* t);
	::com::sun::tools::javac::code::Symbol$ModuleSymbol* lookupModule(::com::sun::tools::javac::tree::JCTree$JCExpression* moduleName);
	void reportExportsConflict(::com::sun::tools::javac::tree::JCTree$JCExports* tree, ::com::sun::tools::javac::code::Symbol$PackageSymbol* packge);
	void reportExportsConflictToModule(::com::sun::tools::javac::tree::JCTree$JCExpression* name, ::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym);
	void reportOpensConflict(::com::sun::tools::javac::tree::JCTree$JCOpens* tree, ::com::sun::tools::javac::code::Symbol$PackageSymbol* packge);
	void reportOpensConflictToModule(::com::sun::tools::javac::tree::JCTree$JCExpression* name, ::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym);
	virtual void visitExports(::com::sun::tools::javac::tree::JCTree$JCExports* tree) override;
	virtual void visitModuleDef(::com::sun::tools::javac::tree::JCTree$JCModuleDecl* tree) override;
	virtual void visitOpens(::com::sun::tools::javac::tree::JCTree$JCOpens* tree) override;
	virtual void visitProvides(::com::sun::tools::javac::tree::JCTree$JCProvides* tree) override;
	virtual void visitRequires(::com::sun::tools::javac::tree::JCTree$JCRequires* tree) override;
	virtual void visitUses(::com::sun::tools::javac::tree::JCTree$JCUses* tree) override;
	::com::sun::tools::javac::comp::Modules* this$0 = nullptr;
	::com::sun::tools::javac::code::Symbol$ModuleSymbol* sym = nullptr;
	::java::util::Set* allRequires = nullptr;
	::java::util::Map* allExports = nullptr;
	::java::util::Map* allOpens = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Modules$ModuleVisitor_h_