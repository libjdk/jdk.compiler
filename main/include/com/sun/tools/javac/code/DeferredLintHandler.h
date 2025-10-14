#ifndef _com_sun_tools_javac_code_DeferredLintHandler_h_
#define _com_sun_tools_javac_code_DeferredLintHandler_h_
//$ class com.sun.tools.javac.code.DeferredLintHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("IMMEDIATE_POSITION")
#undef IMMEDIATE_POSITION

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class DeferredLintHandler$LintLogger;
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
					class JCDiagnostic$DiagnosticPosition;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $import DeferredLintHandler : public ::java::lang::Object {
	$class(DeferredLintHandler, 0, ::java::lang::Object)
public:
	DeferredLintHandler();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual void flush(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos);
	virtual ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* immediate();
	static ::com::sun::tools::javac::code::DeferredLintHandler* instance(::com::sun::tools::javac::util::Context* context);
	virtual void report(::com::sun::tools::javac::code::DeferredLintHandler$LintLogger* logger);
	virtual ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* setPos(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* currentPos);
	static ::com::sun::tools::javac::util::Context$Key* deferredLintHandlerKey;
	::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* currentPos = nullptr;
	::java::util::Map* loggersQueue = nullptr;
	static ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* IMMEDIATE_POSITION;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("IMMEDIATE_POSITION")

#endif // _com_sun_tools_javac_code_DeferredLintHandler_h_