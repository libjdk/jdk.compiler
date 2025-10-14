#ifndef _com_sun_tools_javac_parser_Tokens$Token_h_
#define _com_sun_tools_javac_parser_Tokens$Token_h_
//$ class com.sun.tools.javac.parser.Tokens$Token
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {
					class Tokens;
					class Tokens$Comment;
					class Tokens$Comment$CommentStyle;
					class Tokens$TokenKind;
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
					class List;
					class Name;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

class $export Tokens$Token : public ::java::lang::Object {
	$class(Tokens$Token, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Tokens$Token();
	void init$(::com::sun::tools::javac::parser::Tokens$TokenKind* kind, int32_t pos, int32_t endPos, ::com::sun::tools::javac::util::List* comments);
	virtual void checkKind();
	virtual ::com::sun::tools::javac::parser::Tokens$Comment* comment(::com::sun::tools::javac::parser::Tokens$Comment$CommentStyle* style);
	virtual bool deprecatedFlag();
	::com::sun::tools::javac::util::List* getComments(::com::sun::tools::javac::parser::Tokens$Comment$CommentStyle* style);
	virtual ::com::sun::tools::javac::util::Name* name();
	virtual int32_t radix();
	virtual $Array<::com::sun::tools::javac::parser::Tokens$Token>* split(::com::sun::tools::javac::parser::Tokens* tokens);
	virtual $String* stringVal();
	::com::sun::tools::javac::parser::Tokens$TokenKind* kind = nullptr;
	int32_t pos = 0;
	int32_t endPos = 0;
	::com::sun::tools::javac::util::List* comments = nullptr;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_parser_Tokens$Token_h_