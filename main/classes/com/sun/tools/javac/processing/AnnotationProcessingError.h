#ifndef _com_sun_tools_javac_processing_AnnotationProcessingError_h_
#define _com_sun_tools_javac_processing_AnnotationProcessingError_h_
//$ class com.sun.tools.javac.processing.AnnotationProcessingError
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
				namespace processing {

class AnnotationProcessingError : public ::java::lang::Error {
	$class(AnnotationProcessingError, $NO_CLASS_INIT, ::java::lang::Error)
public:
	AnnotationProcessingError();
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0x043CC706DB69DE46;
	AnnotationProcessingError(const AnnotationProcessingError& e);
	virtual void throw$() override;
	inline AnnotationProcessingError* operator ->() {
		return (AnnotationProcessingError*)throwing$;
	}
};

				} // processing
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_processing_AnnotationProcessingError_h_