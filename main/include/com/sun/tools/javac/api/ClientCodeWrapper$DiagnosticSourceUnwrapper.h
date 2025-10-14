#ifndef _com_sun_tools_javac_api_ClientCodeWrapper$DiagnosticSourceUnwrapper_h_
#define _com_sun_tools_javac_api_ClientCodeWrapper$DiagnosticSourceUnwrapper_h_
//$ class com.sun.tools.javac.api.ClientCodeWrapper$DiagnosticSourceUnwrapper
//$ extends javax.tools.Diagnostic

#include <javax/tools/Diagnostic.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {
					class ClientCodeWrapper;
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
					class JCDiagnostic;
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
namespace javax {
	namespace tools {
		class Diagnostic$Kind;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class $import ClientCodeWrapper$DiagnosticSourceUnwrapper : public ::javax::tools::Diagnostic {
	$class(ClientCodeWrapper$DiagnosticSourceUnwrapper, $NO_CLASS_INIT, ::javax::tools::Diagnostic)
public:
	ClientCodeWrapper$DiagnosticSourceUnwrapper();
	void init$(::com::sun::tools::javac::api::ClientCodeWrapper* this$0, ::com::sun::tools::javac::util::JCDiagnostic* d);
	virtual $String* getCode() override;
	virtual int64_t getColumnNumber() override;
	virtual int64_t getEndPosition() override;
	virtual ::javax::tools::Diagnostic$Kind* getKind() override;
	virtual int64_t getLineNumber() override;
	virtual $String* getMessage(::java::util::Locale* locale) override;
	virtual int64_t getPosition() override;
	virtual $Object* getSource() override;
	virtual int64_t getStartPosition() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::api::ClientCodeWrapper* this$0 = nullptr;
	::com::sun::tools::javac::util::JCDiagnostic* d = nullptr;
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_api_ClientCodeWrapper$DiagnosticSourceUnwrapper_h_