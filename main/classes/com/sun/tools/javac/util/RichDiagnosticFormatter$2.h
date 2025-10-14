#ifndef _com_sun_tools_javac_util_RichDiagnosticFormatter$2_h_
#define _com_sun_tools_javac_util_RichDiagnosticFormatter$2_h_
//$ class com.sun.tools.javac.util.RichDiagnosticFormatter$2
//$ extends com.sun.tools.javac.code.Types$DefaultSymbolVisitor

#include <com/sun/tools/javac/code/Types$DefaultSymbolVisitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Symbol$ClassSymbol;
					class Symbol$MethodSymbol;
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
	namespace lang {
		class Void;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class RichDiagnosticFormatter$2 : public ::com::sun::tools::javac::code::Types$DefaultSymbolVisitor {
	$class(RichDiagnosticFormatter$2, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$DefaultSymbolVisitor)
public:
	RichDiagnosticFormatter$2();
	void init$(::com::sun::tools::javac::util::RichDiagnosticFormatter* this$0);
	virtual ::java::lang::Void* visitClassSymbol(::com::sun::tools::javac::code::Symbol$ClassSymbol* s, ::java::lang::Void* ignored);
	virtual $Object* visitClassSymbol(::com::sun::tools::javac::code::Symbol$ClassSymbol* s, Object$* ignored) override;
	virtual ::java::lang::Void* visitMethodSymbol(::com::sun::tools::javac::code::Symbol$MethodSymbol* s, ::java::lang::Void* ignored);
	virtual $Object* visitMethodSymbol(::com::sun::tools::javac::code::Symbol$MethodSymbol* s, Object$* ignored) override;
	virtual ::java::lang::Void* visitSymbol(::com::sun::tools::javac::code::Symbol* s, ::java::lang::Void* ignored);
	virtual $Object* visitSymbol(::com::sun::tools::javac::code::Symbol* s, Object$* ignored) override;
	::com::sun::tools::javac::util::RichDiagnosticFormatter* this$0 = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_RichDiagnosticFormatter$2_h_