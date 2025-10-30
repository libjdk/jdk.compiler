#ifndef _com_sun_tools_javac_util_Abort_h_
#define _com_sun_tools_javac_util_Abort_h_
//$ class com.sun.tools.javac.util.Abort
//$ extends java.lang.Error

#include <java/lang/Error.h>

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

class $export Abort : public ::java::lang::Error {
	$class(Abort, $NO_CLASS_INIT, ::java::lang::Error)
public:
	Abort();
	void init$($Throwable* cause);
	void init$();
	static const int64_t serialVersionUID = 0;
	Abort(const Abort& e);
	virtual void throw$() override;
	inline Abort* operator ->() {
		return (Abort*)throwing$;
	}
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_Abort_h_