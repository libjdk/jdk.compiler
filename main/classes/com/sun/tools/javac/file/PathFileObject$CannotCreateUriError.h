#ifndef _com_sun_tools_javac_file_PathFileObject$CannotCreateUriError_h_
#define _com_sun_tools_javac_file_PathFileObject$CannotCreateUriError_h_
//$ class com.sun.tools.javac.file.PathFileObject$CannotCreateUriError
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
				namespace file {

class $export PathFileObject$CannotCreateUriError : public ::java::lang::Error {
	$class(PathFileObject$CannotCreateUriError, $NO_CLASS_INIT, ::java::lang::Error)
public:
	PathFileObject$CannotCreateUriError();
	void init$($String* value, $Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0x7E4FC3F7CCB1EFEA;
	PathFileObject$CannotCreateUriError(const PathFileObject$CannotCreateUriError& e);
	virtual void throw$() override;
	inline PathFileObject$CannotCreateUriError* operator ->() {
		return (PathFileObject$CannotCreateUriError*)throwing$;
	}
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_PathFileObject$CannotCreateUriError_h_