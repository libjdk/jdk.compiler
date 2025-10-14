#ifndef _com_sun_tools_javac_comp_TransPatterns$BasicBindingContext_h_
#define _com_sun_tools_javac_comp_TransPatterns$BasicBindingContext_h_
//$ class com.sun.tools.javac.comp.TransPatterns$BasicBindingContext
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
namespace java {
	namespace util {
		class Map;
		class Map$Entry;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import TransPatterns$BasicBindingContext : public ::com::sun::tools::javac::comp::TransPatterns$BindingContext {
	$class(TransPatterns$BasicBindingContext, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::TransPatterns$BindingContext)
public:
	TransPatterns$BasicBindingContext();
	void init$(::com::sun::tools::javac::comp::TransPatterns* this$0);
	virtual ::com::sun::tools::javac::code::Symbol$VarSymbol* bindingDeclared(::com::sun::tools::javac::code::Symbol$BindingSymbol* varSymbol) override;
	virtual ::com::sun::tools::javac::util::List* bindingVars(int32_t diagPos) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* decorateExpression(::com::sun::tools::javac::tree::JCTree$JCExpression* expr) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCStatement* decorateStatement(::com::sun::tools::javac::tree::JCTree$JCStatement* stat) override;
	virtual ::com::sun::tools::javac::code::Symbol$VarSymbol* getBindingFor(::com::sun::tools::javac::code::Symbol$BindingSymbol* varSymbol) override;
	static bool lambda$getBindingFor$0(::com::sun::tools::javac::code::Symbol$BindingSymbol* varSymbol, ::java::util::Map$Entry* e);
	static ::com::sun::tools::javac::code::Symbol$VarSymbol* lambda$getBindingFor$1(::java::util::Map$Entry* e);
	::com::sun::tools::javac::tree::JCTree$JCVariableDecl* makeHoistedVarDecl(int32_t pos, ::com::sun::tools::javac::code::Symbol$VarSymbol* varSymbol);
	virtual ::com::sun::tools::javac::comp::TransPatterns$BindingContext* pop() override;
	virtual bool tryPrepend(::com::sun::tools::javac::code::Symbol$BindingSymbol* binding, ::com::sun::tools::javac::tree::JCTree$JCVariableDecl* var) override;
	::com::sun::tools::javac::comp::TransPatterns* this$0 = nullptr;
	::java::util::Map* hoistedVarMap = nullptr;
	::com::sun::tools::javac::comp::TransPatterns$BindingContext* parent = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_TransPatterns$BasicBindingContext_h_