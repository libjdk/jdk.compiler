#ifndef _com_sun_tools_javac_comp_TypeEnter$AbstractHeaderPhase$Synthesizer_h_
#define _com_sun_tools_javac_comp_TypeEnter$AbstractHeaderPhase$Synthesizer_h_
//$ class com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase$Synthesizer
//$ extends com.sun.tools.javac.tree.JCTree$Visitor

#include <com/sun/tools/javac/tree/JCTree$Visitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Symbol$ClassSymbol;
					class Symbol$ModuleSymbol;
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
					class TypeEnter$AbstractHeaderPhase;
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
					class JCTree$JCFieldAccess;
					class JCTree$JCIdent;
					class JCTree$JCTypeApply;
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
					class Name;
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

class TypeEnter$AbstractHeaderPhase$Synthesizer : public ::com::sun::tools::javac::tree::JCTree$Visitor {
	$class(TypeEnter$AbstractHeaderPhase$Synthesizer, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$Visitor)
public:
	TypeEnter$AbstractHeaderPhase$Synthesizer();
	void init$(::com::sun::tools::javac::comp::TypeEnter$AbstractHeaderPhase* this$1, ::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym, ::com::sun::tools::javac::code::Type* originalType, bool interfaceExpected);
	virtual ::com::sun::tools::javac::code::Symbol$ClassSymbol* synthesizeClass(::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Symbol* owner);
	virtual void synthesizeTyparams(::com::sun::tools::javac::code::Symbol$ClassSymbol* sym, int32_t n);
	virtual ::com::sun::tools::javac::code::Type* visit(::com::sun::tools::javac::tree::JCTree* tree);
	virtual ::com::sun::tools::javac::util::List* visit(::com::sun::tools::javac::util::List* trees);
	virtual void visitIdent(::com::sun::tools::javac::tree::JCTree$JCIdent* tree) override;
	virtual void visitSelect(::com::sun::tools::javac::tree::JCTree$JCFieldAccess* tree) override;
	virtual void visitTree(::com::sun::tools::javac::tree::JCTree* tree) override;
	virtual void visitTypeApply(::com::sun::tools::javac::tree::JCTree$JCTypeApply* tree) override;
	::com::sun::tools::javac::comp::TypeEnter$AbstractHeaderPhase* this$1 = nullptr;
	::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym = nullptr;
	::com::sun::tools::javac::code::Type* originalType = nullptr;
	bool interfaceExpected = false;
	::com::sun::tools::javac::util::List* synthesizedSymbols = nullptr;
	::com::sun::tools::javac::code::Type* result = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_TypeEnter$AbstractHeaderPhase$Synthesizer_h_