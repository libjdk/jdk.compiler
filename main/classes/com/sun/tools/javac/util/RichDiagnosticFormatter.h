#ifndef _com_sun_tools_javac_util_RichDiagnosticFormatter_h_
#define _com_sun_tools_javac_util_RichDiagnosticFormatter_h_
//$ class com.sun.tools.javac.util.RichDiagnosticFormatter
//$ extends com.sun.tools.javac.util.ForwardingDiagnosticFormatter

#include <com/sun/tools/javac/util/ForwardingDiagnosticFormatter.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {
					class DiagnosticFormatter$Configuration;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Symtab;
					class Type;
					class Type$TypeVar;
					class Types;
					class Types$DefaultSymbolVisitor;
					class Types$UnaryVisitor;
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
					class Context;
					class JCDiagnostic;
					class JCDiagnostic$Factory;
					class JavacMessages;
					class List;
					class RichDiagnosticFormatter$ClassNameSimplifier;
					class RichDiagnosticFormatter$RichPrinter;
					class RichDiagnosticFormatter$WhereClauseKind;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Locale;
		class Map;
	}
}
namespace javax {
	namespace tools {
		class Diagnostic;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $export RichDiagnosticFormatter : public ::com::sun::tools::javac::util::ForwardingDiagnosticFormatter {
	$class(RichDiagnosticFormatter, $NO_CLASS_INIT, ::com::sun::tools::javac::util::ForwardingDiagnosticFormatter)
public:
	RichDiagnosticFormatter();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual $String* format(::com::sun::tools::javac::util::JCDiagnostic* diag, ::java::util::Locale* l);
	virtual $String* format(::javax::tools::Diagnostic* diag, ::java::util::Locale* l) override;
	virtual $String* formatMessage(::com::sun::tools::javac::util::JCDiagnostic* diag, ::java::util::Locale* l);
	virtual $String* formatMessage(::javax::tools::Diagnostic* diag, ::java::util::Locale* l) override;
	virtual ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration* getConfiguration() override;
	virtual ::com::sun::tools::javac::util::RichDiagnosticFormatter$RichPrinter* getRichPrinter();
	virtual ::com::sun::tools::javac::util::List* getWhereClauses();
	int32_t indexOf(::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::util::RichDiagnosticFormatter$WhereClauseKind* kind);
	static ::com::sun::tools::javac::util::RichDiagnosticFormatter* instance(::com::sun::tools::javac::util::Context* context);
	virtual void preprocessArgument(Object$* arg);
	virtual void preprocessDiagnostic(::com::sun::tools::javac::util::JCDiagnostic* diag);
	virtual void preprocessSymbol(::com::sun::tools::javac::code::Symbol* s);
	virtual void preprocessType(::com::sun::tools::javac::code::Type* t);
	virtual void setRichPrinter(::com::sun::tools::javac::util::RichDiagnosticFormatter$RichPrinter* printer);
	bool unique(::com::sun::tools::javac::code::Type$TypeVar* typevar);
	::com::sun::tools::javac::code::Symtab* syms = nullptr;
	::com::sun::tools::javac::code::Types* types = nullptr;
	::com::sun::tools::javac::util::JCDiagnostic$Factory* diags = nullptr;
	::com::sun::tools::javac::util::JavacMessages* messages = nullptr;
	::com::sun::tools::javac::util::RichDiagnosticFormatter$ClassNameSimplifier* nameSimplifier = nullptr;
	::com::sun::tools::javac::util::RichDiagnosticFormatter$RichPrinter* printer = nullptr;
	::java::util::Map* whereClauses = nullptr;
	::com::sun::tools::javac::code::Types$UnaryVisitor* typePreprocessor = nullptr;
	::com::sun::tools::javac::code::Types$DefaultSymbolVisitor* symbolPreprocessor = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_RichDiagnosticFormatter_h_