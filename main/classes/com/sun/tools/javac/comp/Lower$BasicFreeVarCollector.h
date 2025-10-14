#ifndef _com_sun_tools_javac_comp_Lower$BasicFreeVarCollector_h_
#define _com_sun_tools_javac_comp_Lower$BasicFreeVarCollector_h_
//$ class com.sun.tools.javac.comp.Lower$BasicFreeVarCollector
//$ extends com.sun.tools.javac.tree.TreeScanner

#include <com/sun/tools/javac/tree/TreeScanner.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Symbol$ClassSymbol;
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
					class JCTree$JCIdent;
					class JCTree$JCMethodInvocation;
					class JCTree$JCNewClass;
					class JCTree$JCYield;
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

class $export Lower$BasicFreeVarCollector : public ::com::sun::tools::javac::tree::TreeScanner {
	$class(Lower$BasicFreeVarCollector, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeScanner)
public:
	Lower$BasicFreeVarCollector();
	void init$(::com::sun::tools::javac::comp::Lower* this$0);
	virtual void addFreeVars(::com::sun::tools::javac::code::Symbol$ClassSymbol* c) {}
	virtual void visitApply(::com::sun::tools::javac::tree::JCTree$JCMethodInvocation* tree) override;
	virtual void visitIdent(::com::sun::tools::javac::tree::JCTree$JCIdent* tree) override;
	virtual void visitNewClass(::com::sun::tools::javac::tree::JCTree$JCNewClass* tree) override;
	virtual void visitSymbol(::com::sun::tools::javac::code::Symbol* _sym) {}
	virtual void visitYield(::com::sun::tools::javac::tree::JCTree$JCYield* tree) override;
	::com::sun::tools::javac::comp::Lower* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Lower$BasicFreeVarCollector_h_