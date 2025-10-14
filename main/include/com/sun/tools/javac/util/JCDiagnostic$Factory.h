#ifndef _com_sun_tools_javac_util_JCDiagnostic$Factory_h_
#define _com_sun_tools_javac_util_JCDiagnostic$Factory_h_
//$ class com.sun.tools.javac.util.JCDiagnostic$Factory
//$ extends java.lang.Object

#include <java/lang/Array.h>

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
					class Context;
					class Context$Key;
					class DiagnosticSource;
					class JCDiagnostic;
					class JCDiagnostic$DiagnosticFlag;
					class JCDiagnostic$DiagnosticInfo;
					class JCDiagnostic$DiagnosticPosition;
					class JCDiagnostic$DiagnosticType;
					class JCDiagnostic$Error;
					class JCDiagnostic$Fragment;
					class JCDiagnostic$Note;
					class JCDiagnostic$Warning;
					class JavacMessages;
					class Options;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $import JCDiagnostic$Factory : public ::java::lang::Object {
	$class(JCDiagnostic$Factory, 0, ::java::lang::Object)
public:
	JCDiagnostic$Factory();
	void init$(::com::sun::tools::javac::util::Context* context);
	void init$(::com::sun::tools::javac::util::JavacMessages* messages, $String* prefix);
	virtual ::com::sun::tools::javac::util::JCDiagnostic* create(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType* kind, ::com::sun::tools::javac::util::DiagnosticSource* source, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, $String* key, $ObjectArray* args);
	virtual ::com::sun::tools::javac::util::JCDiagnostic* create(::com::sun::tools::javac::util::DiagnosticSource* source, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticInfo* diagnosticInfo);
	virtual ::com::sun::tools::javac::util::JCDiagnostic* create(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType* kind, ::com::sun::tools::javac::code::Lint$LintCategory* lc, ::java::util::Set* flags, ::com::sun::tools::javac::util::DiagnosticSource* source, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, $String* key, $ObjectArray* args);
	virtual ::com::sun::tools::javac::util::JCDiagnostic* create(::com::sun::tools::javac::code::Lint$LintCategory* lc, ::java::util::Set* flags, ::com::sun::tools::javac::util::DiagnosticSource* source, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticInfo* diagnosticInfo);
	virtual ::com::sun::tools::javac::util::JCDiagnostic* error(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag* flag, ::com::sun::tools::javac::util::DiagnosticSource* source, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, $String* key, $ObjectArray* args);
	virtual ::com::sun::tools::javac::util::JCDiagnostic* error(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag* flag, ::com::sun::tools::javac::util::DiagnosticSource* source, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::JCDiagnostic$Error* errorKey);
	virtual ::com::sun::tools::javac::util::JCDiagnostic$Error* errorKey($String* code, $ObjectArray* args);
	virtual ::com::sun::tools::javac::util::JCDiagnostic* fragment($String* key, $ObjectArray* args);
	virtual ::com::sun::tools::javac::util::JCDiagnostic* fragment(::com::sun::tools::javac::util::JCDiagnostic$Fragment* fragmentKey);
	virtual ::com::sun::tools::javac::util::JCDiagnostic$Fragment* fragmentKey($String* code, $ObjectArray* args);
	void initOptions(::com::sun::tools::javac::util::Options* options);
	static ::com::sun::tools::javac::util::JCDiagnostic$Factory* instance(::com::sun::tools::javac::util::Context* context);
	void lambda$new$0(::com::sun::tools::javac::util::Options* options);
	$Object* lambda$normalize$1(Object$* o);
	virtual ::com::sun::tools::javac::util::JCDiagnostic* mandatoryNote(::com::sun::tools::javac::util::DiagnosticSource* source, $String* key, $ObjectArray* args);
	virtual ::com::sun::tools::javac::util::JCDiagnostic* mandatoryNote(::com::sun::tools::javac::util::DiagnosticSource* source, ::com::sun::tools::javac::util::JCDiagnostic$Note* noteKey);
	virtual ::com::sun::tools::javac::util::JCDiagnostic* mandatoryWarning(::com::sun::tools::javac::code::Lint$LintCategory* lc, ::com::sun::tools::javac::util::DiagnosticSource* source, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, $String* key, $ObjectArray* args);
	virtual ::com::sun::tools::javac::util::JCDiagnostic* mandatoryWarning(::com::sun::tools::javac::code::Lint$LintCategory* lc, ::com::sun::tools::javac::util::DiagnosticSource* source, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::JCDiagnostic$Warning* warningKey);
	virtual ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticInfo* normalize(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticInfo* diagnosticInfo);
	virtual ::com::sun::tools::javac::util::JCDiagnostic* note(::com::sun::tools::javac::util::DiagnosticSource* source, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, $String* key, $ObjectArray* args);
	virtual ::com::sun::tools::javac::util::JCDiagnostic* note(::com::sun::tools::javac::util::DiagnosticSource* source, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::JCDiagnostic$Note* noteKey);
	virtual ::com::sun::tools::javac::util::JCDiagnostic$Note* noteKey($String* code, $ObjectArray* args);
	virtual ::com::sun::tools::javac::util::JCDiagnostic* warning(::com::sun::tools::javac::code::Lint$LintCategory* lc, ::com::sun::tools::javac::util::DiagnosticSource* source, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, $String* key, $ObjectArray* args);
	virtual ::com::sun::tools::javac::util::JCDiagnostic* warning(::com::sun::tools::javac::code::Lint$LintCategory* lc, ::com::sun::tools::javac::util::DiagnosticSource* source, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::JCDiagnostic$Warning* warningKey);
	virtual ::com::sun::tools::javac::util::JCDiagnostic$Warning* warningKey($String* code, $ObjectArray* args);
	static ::com::sun::tools::javac::util::Context$Key* diagnosticFactoryKey;
	::com::sun::tools::javac::api::DiagnosticFormatter* formatter = nullptr;
	$String* prefix = nullptr;
	::java::util::Set* defaultErrorFlags = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_JCDiagnostic$Factory_h_