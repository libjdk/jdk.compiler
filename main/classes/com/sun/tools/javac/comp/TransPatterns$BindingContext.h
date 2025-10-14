#ifndef _com_sun_tools_javac_comp_TransPatterns$BindingContext_h_
#define _com_sun_tools_javac_comp_TransPatterns$BindingContext_h_
//$ class com.sun.tools.javac.comp.TransPatterns$BindingContext
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$BindingSymbol;
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
					class TransPatterns;
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
					class JCTree$JCExpression;
					class JCTree$JCStatement;
					class JCTree$JCVariableDecl;
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

class $export TransPatterns$BindingContext : public ::java::lang::Object {
	$class(TransPatterns$BindingContext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TransPatterns$BindingContext();
	void init$(::com::sun::tools::javac::comp::TransPatterns* this$0);
	virtual ::com::sun::tools::javac::code::Symbol$VarSymbol* bindingDeclared(::com::sun::tools::javac::code::Symbol$BindingSymbol* varSymbol) {return nullptr;}
	virtual ::com::sun::tools::javac::util::List* bindingVars(int32_t diagPos) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* decorateExpression(::com::sun::tools::javac::tree::JCTree$JCExpression* expr) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCStatement* decorateStatement(::com::sun::tools::javac::tree::JCTree$JCStatement* stat) {return nullptr;}
	virtual ::com::sun::tools::javac::code::Symbol$VarSymbol* getBindingFor(::com::sun::tools::javac::code::Symbol$BindingSymbol* varSymbol) {return nullptr;}
	virtual ::com::sun::tools::javac::comp::TransPatterns$BindingContext* pop() {return nullptr;}
	virtual bool tryPrepend(::com::sun::tools::javac::code::Symbol$BindingSymbol* binding, ::com::sun::tools::javac::tree::JCTree$JCVariableDecl* var) {return false;}
	::com::sun::tools::javac::comp::TransPatterns* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_TransPatterns$BindingContext_h_