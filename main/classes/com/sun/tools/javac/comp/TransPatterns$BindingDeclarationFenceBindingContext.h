#ifndef _com_sun_tools_javac_comp_TransPatterns$BindingDeclarationFenceBindingContext_h_
#define _com_sun_tools_javac_comp_TransPatterns$BindingDeclarationFenceBindingContext_h_
//$ class com.sun.tools.javac.comp.TransPatterns$BindingDeclarationFenceBindingContext
//$ extends com.sun.tools.javac.comp.TransPatterns$BasicBindingContext

#include <com/sun/tools/javac/comp/TransPatterns$BasicBindingContext.h>

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
				namespace comp {

class TransPatterns$BindingDeclarationFenceBindingContext : public ::com::sun::tools::javac::comp::TransPatterns$BasicBindingContext {
	$class(TransPatterns$BindingDeclarationFenceBindingContext, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::TransPatterns$BasicBindingContext)
public:
	TransPatterns$BindingDeclarationFenceBindingContext();
	void init$(::com::sun::tools::javac::comp::TransPatterns* this$0);
	virtual ::com::sun::tools::javac::code::Symbol$VarSymbol* bindingDeclared(::com::sun::tools::javac::code::Symbol$BindingSymbol* varSymbol) override;
	::com::sun::tools::javac::comp::TransPatterns* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_TransPatterns$BindingDeclarationFenceBindingContext_h_