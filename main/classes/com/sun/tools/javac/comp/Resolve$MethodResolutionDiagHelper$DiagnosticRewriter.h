#ifndef _com_sun_tools_javac_comp_Resolve$MethodResolutionDiagHelper$DiagnosticRewriter_h_
#define _com_sun_tools_javac_comp_Resolve$MethodResolutionDiagHelper$DiagnosticRewriter_h_
//$ interface com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$DiagnosticRewriter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class DiagnosticSource;
					class JCDiagnostic;
					class JCDiagnostic$DiagnosticPosition;
					class JCDiagnostic$DiagnosticType;
					class JCDiagnostic$Factory;
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

class $export Resolve$MethodResolutionDiagHelper$DiagnosticRewriter : public ::java::lang::Object {
	$interface(Resolve$MethodResolutionDiagHelper$DiagnosticRewriter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::tools::javac::util::JCDiagnostic* rewriteDiagnostic(::com::sun::tools::javac::util::JCDiagnostic$Factory* diags, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* preferredPos, ::com::sun::tools::javac::util::DiagnosticSource* preferredSource, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType* preferredKind, ::com::sun::tools::javac::util::JCDiagnostic* d) {return nullptr;}
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$MethodResolutionDiagHelper$DiagnosticRewriter_h_