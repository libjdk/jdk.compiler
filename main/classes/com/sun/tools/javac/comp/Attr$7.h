#ifndef _com_sun_tools_javac_comp_Attr$7_h_
#define _com_sun_tools_javac_comp_Attr$7_h_
//$ class com.sun.tools.javac.comp.Attr$7
//$ extends com.sun.tools.javac.comp.Check$NestedCheckContext

#include <com/sun/tools/javac/comp/Check$NestedCheckContext.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$TypeSymbol;
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
					class Attr;
					class Check$CheckContext;
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
					class JCDiagnostic;
					class JCDiagnostic$DiagnosticPosition;
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

class Attr$7 : public ::com::sun::tools::javac::comp::Check$NestedCheckContext {
	$class(Attr$7, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Check$NestedCheckContext)
public:
	Attr$7();
	void init$(::com::sun::tools::javac::comp::Attr* this$0, ::com::sun::tools::javac::comp::Check$CheckContext* enclosingContext, ::com::sun::tools::javac::tree::JCTree$JCNewClass* val$clazz, ::com::sun::tools::javac::code::Symbol$TypeSymbol* val$tsym);
	virtual void report(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* _unused, ::com::sun::tools::javac::util::JCDiagnostic* details) override;
	::com::sun::tools::javac::comp::Attr* this$0 = nullptr;
	::com::sun::tools::javac::code::Symbol$TypeSymbol* val$tsym = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCNewClass* val$clazz = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Attr$7_h_