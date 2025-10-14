#ifndef _com_sun_tools_javac_comp_Modules$UsesProvidesVisitor_h_
#define _com_sun_tools_javac_comp_Modules$UsesProvidesVisitor_h_
//$ class com.sun.tools.javac.comp.Modules$UsesProvidesVisitor
//$ extends com.sun.tools.javac.tree.JCTree$Visitor

#include <com/sun/tools/javac/tree/JCTree$Visitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Symbol$ClassSymbol;
					class Symbol$MethodSymbol;
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
				namespace comp {
					class Env;
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

class $import Modules$UsesProvidesVisitor : public ::com::sun::tools::javac::tree::JCTree$Visitor {
	$class(Modules$UsesProvidesVisitor, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$Visitor)
public:
	Modules$UsesProvidesVisitor();
	void init$(::com::sun::tools::javac::comp::Modules* this$0, ::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym, ::com::sun::tools::javac::comp::Env* env);
	void checkForCorrectness();
	virtual ::com::sun::tools::javac::code::Symbol$MethodSymbol* factoryMethod(::com::sun::tools::javac::code::Symbol$ClassSymbol* tsym);
	static bool lambda$factoryMethod$1(::com::sun::tools::javac::code::Symbol* sym);
	void lambda$visitModuleDef$0(::com::sun::tools::javac::tree::JCTree$JCDirective* t);
	static ::java::util::Set* lambda$visitProvides$2(::com::sun::tools::javac::code::Symbol$ClassSymbol* s);
	virtual ::com::sun::tools::javac::code::Symbol$MethodSymbol* noArgsConstructor(::com::sun::tools::javac::code::Symbol$ClassSymbol* tsym);
	virtual void visitExports(::com::sun::tools::javac::tree::JCTree$JCExports* tree) override;
	virtual void visitModuleDef(::com::sun::tools::javac::tree::JCTree$JCModuleDecl* tree) override;
	virtual void visitOpens(::com::sun::tools::javac::tree::JCTree$JCOpens* tree) override;
	virtual void visitProvides(::com::sun::tools::javac::tree::JCTree$JCProvides* tree) override;
	virtual void visitRequires(::com::sun::tools::javac::tree::JCTree$JCRequires* tree) override;
	virtual void visitUses(::com::sun::tools::javac::tree::JCTree$JCUses* tree) override;
	::com::sun::tools::javac::comp::Modules* this$0 = nullptr;
	::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym = nullptr;
	::com::sun::tools::javac::comp::Env* env = nullptr;
	::java::util::Set* allUses = nullptr;
	::java::util::Map* allProvides = nullptr;
	::java::util::Map* directiveToTreeMap = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Modules$UsesProvidesVisitor_h_