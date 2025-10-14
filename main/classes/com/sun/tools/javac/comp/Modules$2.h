#ifndef _com_sun_tools_javac_comp_Modules$2_h_
#define _com_sun_tools_javac_comp_Modules$2_h_
//$ class com.sun.tools.javac.comp.Modules$2
//$ extends com.sun.tools.javac.code.Symbol$Completer

#include <com/sun/tools/javac/code/Symbol$Completer.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
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
					class JCTree$JCCompilationUnit;
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

class Modules$2 : public ::com::sun::tools::javac::code::Symbol$Completer {
	$class(Modules$2, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Symbol$Completer)
public:
	Modules$2();
	void init$(::com::sun::tools::javac::comp::Modules* this$0, ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* val$tree);
	virtual void complete(::com::sun::tools::javac::code::Symbol* sym) override;
	virtual $String* toString() override;
	::com::sun::tools::javac::comp::Modules* this$0 = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* val$tree = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Modules$2_h_