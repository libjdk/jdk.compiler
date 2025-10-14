#ifndef _com_sun_tools_javac_comp_TransPatterns$2_h_
#define _com_sun_tools_javac_comp_TransPatterns$2_h_
//$ class com.sun.tools.javac.comp.TransPatterns$2
//$ extends com.sun.tools.javac.comp.TransPatterns$BindingDeclarationFenceBindingContext

#include <com/sun/tools/javac/comp/TransPatterns$BindingDeclarationFenceBindingContext.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$BindingSymbol;
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
					class ListBuffer;
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

class TransPatterns$2 : public ::com::sun::tools::javac::comp::TransPatterns$BindingDeclarationFenceBindingContext {
	$class(TransPatterns$2, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::TransPatterns$BindingDeclarationFenceBindingContext)
public:
	TransPatterns$2();
	void init$(::com::sun::tools::javac::comp::TransPatterns* this$0, ::com::sun::tools::javac::util::ListBuffer* val$statements);
	virtual bool tryPrepend(::com::sun::tools::javac::code::Symbol$BindingSymbol* binding, ::com::sun::tools::javac::tree::JCTree$JCVariableDecl* var) override;
	::com::sun::tools::javac::comp::TransPatterns* this$0 = nullptr;
	::com::sun::tools::javac::util::ListBuffer* val$statements = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_TransPatterns$2_h_