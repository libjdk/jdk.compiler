#ifndef _com_sun_tools_javac_util_AbstractDiagnosticFormatter_h_
#define _com_sun_tools_javac_util_AbstractDiagnosticFormatter_h_
//$ class com.sun.tools.javac.util.AbstractDiagnosticFormatter
//$ extends com.sun.tools.javac.api.DiagnosticFormatter

#include <com/sun/tools/javac/api/DiagnosticFormatter.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {
					class DiagnosticFormatter$Configuration;
					class DiagnosticFormatter$PositionKind;
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
					class Printer;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree$JCExpression;
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
					class AbstractDiagnosticFormatter$SimpleConfiguration;
					class JCDiagnostic;
					class JavacMessages;
					class List;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Iterable;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Locale;
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

class $export AbstractDiagnosticFormatter : public ::com::sun::tools::javac::api::DiagnosticFormatter {
	$class(AbstractDiagnosticFormatter, $NO_CLASS_INIT, ::com::sun::tools::javac::api::DiagnosticFormatter)
public:
	AbstractDiagnosticFormatter();
	void init$(::com::sun::tools::javac::util::JavacMessages* messages, ::com::sun::tools::javac::util::AbstractDiagnosticFormatter$SimpleConfiguration* config);
	virtual bool displaySource(::com::sun::tools::javac::util::JCDiagnostic* d);
	virtual bool displaySource(::javax::tools::Diagnostic* d) override;
	$String* expr2String(::com::sun::tools::javac::tree::JCTree$JCExpression* tree);
	virtual $String* format(::com::sun::tools::javac::util::JCDiagnostic* d, ::java::util::Locale* locale);
	virtual $String* format(::javax::tools::Diagnostic* d, ::java::util::Locale* locale) override;
	virtual $String* formatArgument(::com::sun::tools::javac::util::JCDiagnostic* d, Object$* arg, ::java::util::Locale* l);
	virtual ::java::util::Collection* formatArguments(::com::sun::tools::javac::util::JCDiagnostic* d, ::java::util::Locale* l);
	virtual $String* formatDiagnostic(::com::sun::tools::javac::util::JCDiagnostic* d, ::java::util::Locale* locale) {return nullptr;}
	virtual $String* formatIterable(::com::sun::tools::javac::util::JCDiagnostic* d, ::java::lang::Iterable* it, ::java::util::Locale* l);
	virtual $String* formatKind(::com::sun::tools::javac::util::JCDiagnostic* d, ::java::util::Locale* l);
	virtual $String* formatKind(::javax::tools::Diagnostic* d, ::java::util::Locale* l) override;
	virtual $String* formatLintCategory(::com::sun::tools::javac::util::JCDiagnostic* d, ::java::util::Locale* l);
	virtual $String* formatPosition(::com::sun::tools::javac::util::JCDiagnostic* d, ::com::sun::tools::javac::api::DiagnosticFormatter$PositionKind* pk, ::java::util::Locale* l);
	virtual $String* formatPosition(::javax::tools::Diagnostic* d, ::com::sun::tools::javac::api::DiagnosticFormatter$PositionKind* pk, ::java::util::Locale* l) override;
	virtual $String* formatSource(::com::sun::tools::javac::util::JCDiagnostic* d, bool fullname, ::java::util::Locale* l);
	virtual $String* formatSource(::javax::tools::Diagnostic* d, bool fullname, ::java::util::Locale* l) override;
	virtual $String* formatSourceLine(::com::sun::tools::javac::util::JCDiagnostic* d, int32_t nSpaces);
	virtual $String* formatSubdiagnostic(::com::sun::tools::javac::util::JCDiagnostic* parent, ::com::sun::tools::javac::util::JCDiagnostic* sub, ::java::util::Locale* l);
	virtual ::com::sun::tools::javac::util::List* formatSubdiagnostics(::com::sun::tools::javac::util::JCDiagnostic* d, ::java::util::Locale* l);
	virtual ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration* getConfiguration() override;
	int64_t getPosition(::com::sun::tools::javac::util::JCDiagnostic* d, ::com::sun::tools::javac::api::DiagnosticFormatter$PositionKind* pk);
	virtual ::com::sun::tools::javac::code::Printer* getPrinter();
	virtual $String* indent($String* s, int32_t nSpaces);
	virtual $String* indentString(int32_t nSpaces);
	virtual bool isRaw();
	virtual $String* localize(::java::util::Locale* l, $String* key, $ObjectArray* args);
	virtual void setPrinter(::com::sun::tools::javac::code::Printer* printer);
	::com::sun::tools::javac::util::JavacMessages* messages = nullptr;
	::com::sun::tools::javac::util::AbstractDiagnosticFormatter$SimpleConfiguration* config = nullptr;
	int32_t depth = 0;
	::com::sun::tools::javac::util::List* allCaptured = nullptr;
	::com::sun::tools::javac::code::Printer* printer = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_AbstractDiagnosticFormatter_h_