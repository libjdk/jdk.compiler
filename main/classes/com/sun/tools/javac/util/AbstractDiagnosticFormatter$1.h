#ifndef _com_sun_tools_javac_util_AbstractDiagnosticFormatter$1_h_
#define _com_sun_tools_javac_util_AbstractDiagnosticFormatter$1_h_
//$ class com.sun.tools.javac.util.AbstractDiagnosticFormatter$1
//$ extends com.sun.tools.javac.code.Printer

#include <com/sun/tools/javac/code/Printer.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type$CapturedType;
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
					class AbstractDiagnosticFormatter;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class AbstractDiagnosticFormatter$1 : public ::com::sun::tools::javac::code::Printer {
	$class(AbstractDiagnosticFormatter$1, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Printer)
public:
	AbstractDiagnosticFormatter$1();
	void init$(::com::sun::tools::javac::util::AbstractDiagnosticFormatter* this$0);
	virtual $String* capturedVarId(::com::sun::tools::javac::code::Type$CapturedType* t, ::java::util::Locale* locale) override;
	virtual $String* localize(::java::util::Locale* locale, $String* key, $ObjectArray* args) override;
	virtual $String* visitCapturedType(::com::sun::tools::javac::code::Type$CapturedType* t, ::java::util::Locale* locale) override;
	virtual $Object* visitCapturedType(::com::sun::tools::javac::code::Type$CapturedType* t, Object$* locale) override;
	::com::sun::tools::javac::util::AbstractDiagnosticFormatter* this$0 = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_AbstractDiagnosticFormatter$1_h_