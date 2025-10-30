#ifndef _com_sun_tools_javac_parser_ReferenceParser$ParseException_h_
#define _com_sun_tools_javac_parser_ReferenceParser$ParseException_h_
//$ class com.sun.tools.javac.parser.ReferenceParser$ParseException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

class $export ReferenceParser$ParseException : public ::java::lang::Exception {
	$class(ReferenceParser$ParseException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	ReferenceParser$ParseException();
	void init$($String* message);
	static const int64_t serialVersionUID = 0;
	ReferenceParser$ParseException(const ReferenceParser$ParseException& e);
	virtual void throw$() override;
	inline ReferenceParser$ParseException* operator ->() {
		return (ReferenceParser$ParseException*)throwing$;
	}
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_parser_ReferenceParser$ParseException_h_