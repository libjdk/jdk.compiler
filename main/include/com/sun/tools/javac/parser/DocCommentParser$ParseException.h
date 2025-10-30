#ifndef _com_sun_tools_javac_parser_DocCommentParser$ParseException_h_
#define _com_sun_tools_javac_parser_DocCommentParser$ParseException_h_
//$ class com.sun.tools.javac.parser.DocCommentParser$ParseException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

class $import DocCommentParser$ParseException : public ::java::lang::Exception {
	$class(DocCommentParser$ParseException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	DocCommentParser$ParseException();
	void init$($String* key);
	static const int64_t serialVersionUID = 0;
	DocCommentParser$ParseException(const DocCommentParser$ParseException& e);
	virtual void throw$() override;
	inline DocCommentParser$ParseException* operator ->() {
		return (DocCommentParser$ParseException*)throwing$;
	}
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_parser_DocCommentParser$ParseException_h_