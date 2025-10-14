#ifndef _com_sun_tools_javac_util_JCDiagnostic_h_
#define _com_sun_tools_javac_util_JCDiagnostic_h_
//$ class com.sun.tools.javac.util.JCDiagnostic
//$ extends javax.tools.Diagnostic

#include <java/lang/Array.h>
#include <javax/tools/Diagnostic.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {
					class DiagnosticFormatter;
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
					class Lint$LintCategory;
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
					class DiagnosticSource;
					class JCDiagnostic$DiagnosticFlag;
					class JCDiagnostic$DiagnosticInfo;
					class JCDiagnostic$DiagnosticPosition;
					class JCDiagnostic$DiagnosticType;
					class JCDiagnostic$SourcePosition;
					class List;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Locale;
		class Set;
	}
}
namespace javax {
	namespace tools {
		class Diagnostic$Kind;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $export JCDiagnostic : public ::javax::tools::Diagnostic {
	$class(JCDiagnostic, $NO_CLASS_INIT, ::javax::tools::Diagnostic)
public:
	JCDiagnostic();
	void init$(::com::sun::tools::javac::api::DiagnosticFormatter* formatter, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticInfo* diagnosticInfo, ::com::sun::tools::javac::code::Lint$LintCategory* lc, ::java::util::Set* flags, ::com::sun::tools::javac::util::DiagnosticSource* source, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos);
	static ::com::sun::tools::javac::util::JCDiagnostic* fragment($String* key, $ObjectArray* args);
	virtual $ObjectArray* getArgs();
	virtual $String* getCode() override;
	virtual int64_t getColumnNumber() override;
	virtual ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* getDiagnosticPosition();
	virtual ::com::sun::tools::javac::util::DiagnosticSource* getDiagnosticSource();
	virtual int64_t getEndPosition() override;
	static ::com::sun::tools::javac::api::DiagnosticFormatter* getFragmentFormatter();
	virtual int32_t getIntEndPosition();
	virtual int32_t getIntPosition();
	virtual int32_t getIntStartPosition();
	virtual ::javax::tools::Diagnostic$Kind* getKind() override;
	virtual int64_t getLineNumber() override;
	virtual ::com::sun::tools::javac::code::Lint$LintCategory* getLintCategory();
	virtual $String* getMessage(::java::util::Locale* locale) override;
	virtual int64_t getPosition() override;
	virtual $String* getPrefix();
	virtual $String* getPrefix(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType* dt);
	virtual $Object* getSource() override;
	virtual int64_t getStartPosition() override;
	virtual ::com::sun::tools::javac::util::List* getSubdiagnostics();
	virtual ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType* getType();
	virtual bool hasLintCategory();
	virtual bool isFlagSet(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag* flag);
	virtual bool isMandatory();
	virtual bool isMultiline();
	virtual void setFlag(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag* flag);
	virtual $String* toString() override;
	::com::sun::tools::javac::util::DiagnosticSource* source = nullptr;
	::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* position = nullptr;
	::com::sun::tools::javac::util::JCDiagnostic$DiagnosticInfo* diagnosticInfo = nullptr;
	::java::util::Set* flags = nullptr;
	::com::sun::tools::javac::code::Lint$LintCategory* lintCategory = nullptr;
	::com::sun::tools::javac::util::JCDiagnostic$SourcePosition* sourcePosition = nullptr;
	::com::sun::tools::javac::api::DiagnosticFormatter* defaultFormatter = nullptr;
	static ::com::sun::tools::javac::api::DiagnosticFormatter* fragmentFormatter;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_JCDiagnostic_h_