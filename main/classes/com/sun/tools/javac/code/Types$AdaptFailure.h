#ifndef _com_sun_tools_javac_code_Types$AdaptFailure_h_
#define _com_sun_tools_javac_code_Types$AdaptFailure_h_
//$ class com.sun.tools.javac.code.Types$AdaptFailure
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export Types$AdaptFailure : public ::java::lang::RuntimeException {
	$class(Types$AdaptFailure, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	Types$AdaptFailure();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x980D5A177FC80F82;
	Types$AdaptFailure(const Types$AdaptFailure& e);
	virtual void throw$() override;
	inline Types$AdaptFailure* operator ->() {
		return (Types$AdaptFailure*)throwing$;
	}
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$AdaptFailure_h_