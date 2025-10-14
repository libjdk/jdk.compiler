#ifndef _com_sun_tools_javac_comp_Annotate$2_h_
#define _com_sun_tools_javac_comp_Annotate$2_h_
//$ class com.sun.tools.javac.comp.Annotate$2
//$ extends com.sun.tools.javac.comp.Annotate$AnnotationTypeCompleter

#include <com/sun/tools/javac/comp/Annotate$AnnotationTypeCompleter.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
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
					class Annotate;
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

class Annotate$2 : public ::com::sun::tools::javac::comp::Annotate$AnnotationTypeCompleter {
	$class(Annotate$2, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Annotate$AnnotationTypeCompleter)
public:
	Annotate$2();
	void init$(::com::sun::tools::javac::comp::Annotate* this$0);
	virtual void complete(::com::sun::tools::javac::code::Symbol$ClassSymbol* sym) override;
	::com::sun::tools::javac::comp::Annotate* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Annotate$2_h_