#ifndef _com_sun_tools_javac_comp_Check$ConversionWarner_h_
#define _com_sun_tools_javac_comp_Check$ConversionWarner_h_
//$ class com.sun.tools.javac.comp.Check$ConversionWarner
//$ extends com.sun.tools.javac.util.Warner

#include <com/sun/tools/javac/util/Warner.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Lint$LintCategory;
					class Type;
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
					class Check;
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

class Check$ConversionWarner : public ::com::sun::tools::javac::util::Warner {
	$class(Check$ConversionWarner, $NO_CLASS_INIT, ::com::sun::tools::javac::util::Warner)
public:
	Check$ConversionWarner();
	void init$(::com::sun::tools::javac::comp::Check* this$0, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, $String* uncheckedKey, ::com::sun::tools::javac::code::Type* found, ::com::sun::tools::javac::code::Type* expected);
	virtual void warn(::com::sun::tools::javac::code::Lint$LintCategory* lint) override;
	::com::sun::tools::javac::comp::Check* this$0 = nullptr;
	$String* uncheckedKey = nullptr;
	::com::sun::tools::javac::code::Type* found = nullptr;
	::com::sun::tools::javac::code::Type* expected = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Check$ConversionWarner_h_