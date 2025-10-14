#ifndef _com_sun_tools_javac_util_RichDiagnosticFormatter$RichPrinter_h_
#define _com_sun_tools_javac_util_RichDiagnosticFormatter$RichPrinter_h_
//$ class com.sun.tools.javac.util.RichDiagnosticFormatter$RichPrinter
//$ extends com.sun.tools.javac.code.Printer

#include <com/sun/tools/javac/code/Printer.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$ClassSymbol;
					class Symbol$MethodSymbol;
					class Type;
					class Type$CapturedType;
					class Type$ClassType;
					class Type$TypeVar;
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
					class RichDiagnosticFormatter;
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

class $import RichDiagnosticFormatter$RichPrinter : public ::com::sun::tools::javac::code::Printer {
	$class(RichDiagnosticFormatter$RichPrinter, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Printer)
public:
	RichDiagnosticFormatter$RichPrinter();
	void init$(::com::sun::tools::javac::util::RichDiagnosticFormatter* this$0);
	virtual $String* capturedVarId(::com::sun::tools::javac::code::Type$CapturedType* t, ::java::util::Locale* locale) override;
	virtual $String* className(::com::sun::tools::javac::code::Type$ClassType* t, bool longform, ::java::util::Locale* locale) override;
	virtual $String* localize(::java::util::Locale* locale, $String* key, $ObjectArray* args) override;
	virtual $String* visitCapturedType(::com::sun::tools::javac::code::Type$CapturedType* t, ::java::util::Locale* locale) override;
	virtual $Object* visitCapturedType(::com::sun::tools::javac::code::Type$CapturedType* t, Object$* locale) override;
	virtual $String* visitClassSymbol(::com::sun::tools::javac::code::Symbol$ClassSymbol* s, ::java::util::Locale* locale) override;
	virtual $Object* visitClassSymbol(::com::sun::tools::javac::code::Symbol$ClassSymbol* s, Object$* locale) override;
	virtual $String* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, ::java::util::Locale* locale) override;
	virtual $Object* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, Object$* locale) override;
	virtual $String* visitMethodSymbol(::com::sun::tools::javac::code::Symbol$MethodSymbol* s, ::java::util::Locale* locale) override;
	virtual $Object* visitMethodSymbol(::com::sun::tools::javac::code::Symbol$MethodSymbol* s, Object$* locale) override;
	virtual $String* visitType(::com::sun::tools::javac::code::Type* t, ::java::util::Locale* locale) override;
	virtual $Object* visitType(::com::sun::tools::javac::code::Type* t, Object$* locale) override;
	virtual $String* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, ::java::util::Locale* locale) override;
	virtual $Object* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, Object$* locale) override;
	::com::sun::tools::javac::util::RichDiagnosticFormatter* this$0 = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_RichDiagnosticFormatter$RichPrinter_h_