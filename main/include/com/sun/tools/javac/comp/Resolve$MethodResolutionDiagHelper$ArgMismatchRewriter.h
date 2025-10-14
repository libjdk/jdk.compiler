#ifndef _com_sun_tools_javac_comp_Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter_h_
#define _com_sun_tools_javac_comp_Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter_h_
//$ class com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter
//$ extends com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$DiagnosticRewriter

#include <com/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$DiagnosticRewriter.h>

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

class $import Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter : public ::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper$DiagnosticRewriter {
	$class(Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper$DiagnosticRewriter)
public:
	Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter();
	void init$(int32_t causeIndex);
	virtual ::com::sun::tools::javac::util::JCDiagnostic* rewriteDiagnostic(::com::sun::tools::javac::util::JCDiagnostic$Factory* diags, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* preferredPos, ::com::sun::tools::javac::util::DiagnosticSource* preferredSource, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType* preferredKind, ::com::sun::tools::javac::util::JCDiagnostic* d) override;
	int32_t causeIndex = 0;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter_h_