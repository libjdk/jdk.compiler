#ifndef _com_sun_tools_javac_comp_Annotate$AnnotationTypeCompleter_h_
#define _com_sun_tools_javac_comp_Annotate$AnnotationTypeCompleter_h_
//$ interface com.sun.tools.javac.comp.Annotate$AnnotationTypeCompleter
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $export Annotate$AnnotationTypeCompleter : public ::java::lang::Object {
	$interface(Annotate$AnnotationTypeCompleter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void complete(::com::sun::tools::javac::code::Symbol$ClassSymbol* sym) {}
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Annotate$AnnotationTypeCompleter_h_