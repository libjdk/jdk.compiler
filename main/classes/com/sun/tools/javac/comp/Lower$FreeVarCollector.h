#ifndef _com_sun_tools_javac_comp_Lower$FreeVarCollector_h_
#define _com_sun_tools_javac_comp_Lower$FreeVarCollector_h_
//$ class com.sun.tools.javac.comp.Lower$FreeVarCollector
//$ extends com.sun.tools.javac.comp.Lower$BasicFreeVarCollector

#include <com/sun/tools/javac/comp/Lower$BasicFreeVarCollector.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Symbol$ClassSymbol;
					class Symbol$VarSymbol;
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
					class Lower;
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
					class JCTree$JCFieldAccess;
					class JCTree$JCMethodInvocation;
					class JCTree$JCNewClass;
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

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $export Lower$FreeVarCollector : public ::com::sun::tools::javac::comp::Lower$BasicFreeVarCollector {
	$class(Lower$FreeVarCollector, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Lower$BasicFreeVarCollector)
public:
	Lower$FreeVarCollector();
	void init$(::com::sun::tools::javac::comp::Lower* this$0, ::com::sun::tools::javac::code::Symbol$ClassSymbol* clazz);
	void addFreeVar(::com::sun::tools::javac::code::Symbol$VarSymbol* v);
	virtual void addFreeVars(::com::sun::tools::javac::code::Symbol$ClassSymbol* c) override;
	virtual void visitApply(::com::sun::tools::javac::tree::JCTree$JCMethodInvocation* tree) override;
	virtual void visitNewClass(::com::sun::tools::javac::tree::JCTree$JCNewClass* tree) override;
	virtual void visitSelect(::com::sun::tools::javac::tree::JCTree$JCFieldAccess* tree) override;
	virtual void visitSymbol(::com::sun::tools::javac::code::Symbol* _sym) override;
	::com::sun::tools::javac::comp::Lower* this$0 = nullptr;
	::com::sun::tools::javac::code::Symbol* owner = nullptr;
	::com::sun::tools::javac::code::Symbol$ClassSymbol* clazz = nullptr;
	::com::sun::tools::javac::util::List* fvs = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Lower$FreeVarCollector_h_