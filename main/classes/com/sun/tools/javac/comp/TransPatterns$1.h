#ifndef _com_sun_tools_javac_comp_TransPatterns$1_h_
#define _com_sun_tools_javac_comp_TransPatterns$1_h_
//$ class com.sun.tools.javac.comp.TransPatterns$1
//$ extends com.sun.tools.javac.comp.TransPatterns$BindingContext

#include <com/sun/tools/javac/comp/TransPatterns$BindingContext.h>

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

class TransPatterns$1 : public ::com::sun::tools::javac::comp::TransPatterns$BindingContext {
	$class(TransPatterns$1, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::TransPatterns$BindingContext)
public:
	TransPatterns$1();
	void init$(::com::sun::tools::javac::comp::TransPatterns* this$0);
	virtual ::com::sun::tools::javac::code::Symbol$VarSymbol* bindingDeclared(::com::sun::tools::javac::code::Symbol$BindingSymbol* varSymbol) override;
	virtual ::com::sun::tools::javac::util::List* bindingVars(int32_t diagPos) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* decorateExpression(::com::sun::tools::javac::tree::JCTree$JCExpression* expr) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCStatement* decorateStatement(::com::sun::tools::javac::tree::JCTree$JCStatement* stat) override;
	virtual ::com::sun::tools::javac::code::Symbol$VarSymbol* getBindingFor(::com::sun::tools::javac::code::Symbol$BindingSymbol* varSymbol) override;
	virtual ::com::sun::tools::javac::comp::TransPatterns$BindingContext* pop() override;
	virtual bool tryPrepend(::com::sun::tools::javac::code::Symbol$BindingSymbol* binding, ::com::sun::tools::javac::tree::JCTree$JCVariableDecl* var) override;
	::com::sun::tools::javac::comp::TransPatterns* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_TransPatterns$1_h_