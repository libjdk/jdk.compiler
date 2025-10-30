#ifndef _com_sun_tools_javac_util_FatalError_h_
#define _com_sun_tools_javac_util_FatalError_h_
//$ class com.sun.tools.javac.util.FatalError
//$ extends java.lang.Error

#include <java/lang/Error.h>

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

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $import FatalError : public ::java::lang::Error {
	$class(FatalError, $NO_CLASS_INIT, ::java::lang::Error)
public:
	FatalError();
	void init$(::com::sun::tools::javac::util::JCDiagnostic* d);
	void init$(::com::sun::tools::javac::util::JCDiagnostic* d, $Throwable* t);
	void init$($String* s);
	static const int64_t serialVersionUID = 0;
	FatalError(const FatalError& e);
	virtual void throw$() override;
	inline FatalError* operator ->() {
		return (FatalError*)throwing$;
	}
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_FatalError_h_