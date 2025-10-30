#ifndef _com_sun_tools_javac_code_Symbol$CompletionFailure_h_
#define _com_sun_tools_javac_code_Symbol$CompletionFailure_h_
//$ class com.sun.tools.javac.code.Symbol$CompletionFailure
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class DeferredCompletionFailureHandler;
					class Symbol;
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
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Supplier;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $import Symbol$CompletionFailure : public ::java::lang::RuntimeException {
	$class(Symbol$CompletionFailure, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	Symbol$CompletionFailure();
	void init$(::com::sun::tools::javac::code::Symbol* sym, ::java::util::function::Supplier* diagSupplier, ::com::sun::tools::javac::code::DeferredCompletionFailureHandler* dcfh);
	virtual ::com::sun::tools::javac::util::JCDiagnostic* getDetailValue();
	virtual ::com::sun::tools::javac::util::JCDiagnostic* getDiagnostic();
	virtual $String* getMessage() override;
	virtual ::com::sun::tools::javac::code::Symbol$CompletionFailure* initCause($Throwable* cause) override;
	virtual void resetDiagnostic(::java::util::function::Supplier* diagSupplier);
	static const int64_t serialVersionUID = 0;
	::com::sun::tools::javac::code::DeferredCompletionFailureHandler* dcfh = nullptr;
	::com::sun::tools::javac::code::Symbol* sym = nullptr;
	::com::sun::tools::javac::util::JCDiagnostic* diag = nullptr;
	::java::util::function::Supplier* diagSupplier = nullptr;
	Symbol$CompletionFailure(const Symbol$CompletionFailure& e);
	virtual void throw$() override;
	inline Symbol$CompletionFailure* operator ->() {
		return (Symbol$CompletionFailure*)throwing$;
	}
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Symbol$CompletionFailure_h_