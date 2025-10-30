#ifndef _com_sun_tools_sjavac_ProblemException_h_
#define _com_sun_tools_sjavac_ProblemException_h_
//$ class com.sun.tools.sjavac.ProblemException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {

class ProblemException : public ::java::lang::Exception {
	$class(ProblemException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	ProblemException();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0xD0FD1F3E1A3B1CC3;
	ProblemException(const ProblemException& e);
	virtual void throw$() override;
	inline ProblemException* operator ->() {
		return (ProblemException*)throwing$;
	}
};

			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_ProblemException_h_