#ifndef _com_sun_tools_javac_util_JCDiagnostic$MultilineDiagnostic_h_
#define _com_sun_tools_javac_util_JCDiagnostic$MultilineDiagnostic_h_
//$ class com.sun.tools.javac.util.JCDiagnostic$MultilineDiagnostic
//$ extends com.sun.tools.javac.util.JCDiagnostic

#include <com/sun/tools/javac/util/JCDiagnostic.h>

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
				namespace util {

class $export JCDiagnostic$MultilineDiagnostic : public ::com::sun::tools::javac::util::JCDiagnostic {
	$class(JCDiagnostic$MultilineDiagnostic, $NO_CLASS_INIT, ::com::sun::tools::javac::util::JCDiagnostic)
public:
	JCDiagnostic$MultilineDiagnostic();
	void init$(::com::sun::tools::javac::util::JCDiagnostic* other, ::com::sun::tools::javac::util::List* subdiagnostics);
	virtual $Object* getSource() override;
	virtual ::com::sun::tools::javac::util::List* getSubdiagnostics() override;
	virtual bool isMultiline() override;
	::com::sun::tools::javac::util::List* subdiagnostics = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_JCDiagnostic$MultilineDiagnostic_h_